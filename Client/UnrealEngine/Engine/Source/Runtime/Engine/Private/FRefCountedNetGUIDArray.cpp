// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Add @ 148092fd0

void __thiscall
UE::Net::Private::FRefCountedNetGUIDArray::Add(FRefCountedNetGUIDArray *this,FNetworkGUID param_1)

{
  int *piVar1;
  FNetworkGUID_u_0 *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FNetworkGUID_u_0 *pFVar9;
  undefined1 local_res8 [8];
  FNetworkGUID_u_0 local_res10;
  undefined4 local_18 [4];
  
  pFVar2 = (FNetworkGUID_u_0 *)(this->NetGUIDs).AllocatorInstance.Data;
  pFVar9 = pFVar2;
  do {
    local_res10 = param_1.field0_0x0;
    if (pFVar9 == pFVar2 + (this->NetGUIDs).ArrayNum) {
LAB_148093007:
      if (((pFVar2 <= &local_res10) && (&local_res10 < pFVar2 + (this->NetGUIDs).ArrayMax)) &&
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
      iVar6 = (this->NetGUIDs).ArrayNum;
      piVar1 = &(this->NetGUIDs).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      local_18[0] = 1;
      (this->NetGUIDs).ArrayNum = iVar6 + 1;
      *(FNetworkGUID_u_0 *)((this->NetGUIDs).AllocatorInstance.Data + (longlong)iVar6 * 8) =
           local_res10;
      pFVar3 = (this->RefCounts).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->RefCounts).ArrayMax * 4))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->RefCounts).ArrayNum;
      piVar1 = &(this->RefCounts).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->RefCounts).AllocatorInstance,piVar1);
      }
      (this->RefCounts).ArrayNum = iVar6 + 1;
      *(undefined4 *)((this->RefCounts).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_18[0];
      if ((this->NetGUIDs).ArrayNum != (this->RefCounts).ArrayNum) {
        `UE::Net::Private::FRefCountedNetGUIDArray::Add'::__l7::<lambda_1>::operator()(local_res8);
      }
      return;
    }
    if ((FNetworkGUID_u_0)pFVar9->ObjectId == param_1.field0_0x0) {
      uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar2 >> 3);
      if ((-1 < (int)uVar8) && ((int)uVar8 < (this->RefCounts).ArrayNum)) {
        uVar7 = 0;
        if ((int)uVar8 < (this->RefCounts).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->RefCounts).AllocatorInstance.Data + (longlong)(int)uVar8 * 4;
        *(int *)pFVar3 = *(int *)pFVar3 + 1;
        return;
      }
      goto LAB_148093007;
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// RemoveSwap @ 1480ca5a0

void __thiscall
UE::Net::Private::FRefCountedNetGUIDArray::RemoveSwap
          (FRefCountedNetGUIDArray *this,FNetworkGUID param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FNetworkGUID_u_0 *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FNetworkGUID_u_0 *pFVar11;
  longlong lVar12;
  uint local_res8 [2];
  FRefCountedNetGUIDArray *local_28;
  uint *local_20;
  
  pFVar5 = (FNetworkGUID_u_0 *)(this->NetGUIDs).AllocatorInstance.Data;
  pFVar11 = pFVar5;
  while( true ) {
    if (pFVar11 == pFVar5 + (this->NetGUIDs).ArrayNum) {
      return;
    }
    if ((FNetworkGUID_u_0)pFVar11->ObjectId == param_1.field0_0x0) break;
    pFVar11 = pFVar11 + 1;
  }
  uVar9 = (uint)((longlong)pFVar11 - (longlong)pFVar5 >> 3);
  if ((-1 < (int)uVar9) && ((int)uVar9 < (this->RefCounts).ArrayNum)) {
    pTVar1 = &this->RefCounts;
    uVar10 = 0;
    if ((int)uVar9 < (this->RefCounts).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    local_res8[0] = uVar9;
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar9 * 4;
    *(int *)pFVar3 = *(int *)pFVar3 + -1;
    lVar12 = (longlong)(int)local_res8[0];
    uVar9 = 0;
    if ((int)local_res8[0] < (this->RefCounts).ArrayNum) {
      uVar9 = ~local_res8[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)((pTVar1->AllocatorInstance).Data + lVar12 * 4) < 0) {
      local_20 = local_res8;
      local_28 = this;
      `UE::Net::Private::FRefCountedNetGUIDArray::RemoveSwap'::__l5::<lambda_1>::operator()
                (&local_28);
    }
    lVar12 = (longlong)(int)local_res8[0];
    uVar9 = 0;
    if ((int)local_res8[0] < (this->RefCounts).ArrayNum) {
      uVar9 = ~local_res8[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)((pTVar1->AllocatorInstance).Data + lVar12 * 4) == 0) {
      lVar12 = (longlong)(int)local_res8[0];
      uVar10 = ~local_res8[0];
      uVar9 = 0;
      if ((int)local_res8[0] < (this->NetGUIDs).ArrayNum) {
        uVar9 = uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar4 = (this->NetGUIDs).ArrayNum;
      pFVar3 = (this->NetGUIDs).AllocatorInstance.Data;
      iVar8 = iVar4 + uVar10;
      if (1 < iVar8) {
        iVar8 = 1;
      }
      if (iVar8 != 0) {
        memmove(pFVar3 + lVar12 * 8,pFVar3 + (longlong)(iVar4 - iVar8) * 8,(longlong)iVar8 << 3);
      }
      piVar2 = &(this->NetGUIDs).ArrayNum;
      *piVar2 = *piVar2 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,(this->NetGUIDs).ArrayNum,&(this->NetGUIDs).ArrayMax)
      ;
      lVar12 = (longlong)(int)local_res8[0];
      uVar10 = ~local_res8[0];
      uVar9 = 0;
      if ((int)local_res8[0] < (this->RefCounts).ArrayNum) {
        uVar9 = uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar4 = (this->RefCounts).ArrayNum;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      iVar8 = iVar4 + uVar10;
      if (1 < iVar8) {
        iVar8 = 1;
      }
      if (iVar8 != 0) {
        memmove(pFVar3 + lVar12 * 4,pFVar3 + (longlong)(iVar4 - iVar8) * 4,(longlong)iVar8 << 2);
      }
      piVar2 = &(this->RefCounts).ArrayNum;
      *piVar2 = *piVar2 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&pTVar1->AllocatorInstance,(this->RefCounts).ArrayNum,
                 &(this->RefCounts).ArrayMax);
    }
  }
  return;
}

// operator() @ 150523a30

bool __thiscall
`UE::Net::Private::FRefCountedNetGUIDArray::RemoveSwap'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8846227299280879494>);
  if (bVar2) {
    uVar4 = 0;
    if ((int)**(uint **)((longlong)this + 8) < *(int *)(*(longlong *)this + 0x18)) {
      uVar4 = ~**(uint **)((longlong)this + 8) >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8846227299280879494>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150523bc0

bool __thiscall
`UE::Net::Private::FRefCountedNetGUIDArray::Add'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8846227299280879506>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8846227299280879506>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

