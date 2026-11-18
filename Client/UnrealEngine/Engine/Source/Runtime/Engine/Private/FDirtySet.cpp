// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// AddMultipleUnsafe<TArray<IPhysicsProxyBase_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_> @ 148234c00

void __thiscall
Chaos::FDirtySet::
AddMultipleUnsafe<TArray<IPhysicsProxyBase_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_>
          (FDirtySet *this,
          TArray<IPhysicsProxyBase_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ForElementType<IPhysicsProxyBase_*> FVar4;
  longlong lVar5;
  ForElementType<IPhysicsProxyBase_*> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ForElementType<IPhysicsProxyBase_*> FVar10;
  int iVar11;
  TArray<IPhysicsProxyBase_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *pTVar12;
  ForElementType<IPhysicsProxyBase_*> FVar13;
  undefined1 local_res10 [8];
  
  piVar2 = &param_1->ArrayNum;
  if (*piVar2 != 0) {
    if ((*piVar2 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar4 = (param_1->AllocatorInstance).SecondaryData;
    FVar13 = (ForElementType<IPhysicsProxyBase_*>)param_1;
    if (FVar4 != (ForElementType<IPhysicsProxyBase_*>)0x0) {
      FVar13 = FVar4;
    }
    pTVar12 = (TArray<IPhysicsProxyBase_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
               *)(this->DirtyProxyBuckets + *(uint *)(*(longlong *)FVar13 + 0x1c));
    iVar11 = *(int *)((ForAnyElementType *)(pTVar12->AllocatorInstance).InlineData + 1);
    if ((pTVar12 == param_1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar3 = *piVar2;
    iVar9 = 0;
    if (iVar3 != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,iVar3,(ForAnyElementType *)pTVar12,
                         (int *)((ForAnyElementType *)(pTVar12->AllocatorInstance).InlineData + 1),
                         (int *)((longlong)
                                 ((ForAnyElementType *)(pTVar12->AllocatorInstance).InlineData + 1)
                                + 4));
      FVar4 = (param_1->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<IPhysicsProxyBase_*>)param_1;
      if (FVar4 != (ForElementType<IPhysicsProxyBase_*>)0x0) {
        FVar13 = FVar4;
      }
      ConstructItems<Chaos::FDirtyProxy,IPhysicsProxyBase_*,int>
                (((ForAnyElementType *)(pTVar12->AllocatorInstance).InlineData)->Data +
                 (longlong)iVar9 * 0x20,(IPhysicsProxyBase **)FVar13,iVar3);
      iVar9 = *piVar2;
    }
    FVar4 = (param_1->AllocatorInstance).SecondaryData;
    FVar13 = (ForElementType<IPhysicsProxyBase_*>)param_1;
    if (FVar4 != (ForElementType<IPhysicsProxyBase_*>)0x0) {
      FVar13 = FVar4;
    }
    FVar4 = (ForElementType<IPhysicsProxyBase_*>)((longlong)FVar13 + (longlong)iVar9 * 8);
    while( true ) {
      if (*piVar2 != iVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<IPhysicsProxyBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar13 == FVar4) break;
      lVar5 = *(longlong *)FVar13;
      *(int *)(lVar5 + 0x18) = iVar11;
      if ((*piVar2 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar6 = (param_1->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<IPhysicsProxyBase_*>)param_1;
      if (FVar6 != (ForElementType<IPhysicsProxyBase_*>)0x0) {
        FVar10 = FVar6;
      }
      if ((*(int *)(*(longlong *)FVar10 + 0x1c) != *(int *)(lVar5 + 0x1c)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5614581545131049052>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosMarshallingManager.h"
                             ,0x5c,"ProxiesArray[0]->GetType() == Proxy->GetType()"), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar13 = (ForElementType<IPhysicsProxyBase_*>)((longlong)FVar13 + 8);
      iVar11 = iVar11 + 1;
    }
    iVar11 = *piVar2;
    if ((iVar11 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar4 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar4 != (ForElementType<IPhysicsProxyBase_*>)0x0) {
      param_1 = (TArray<IPhysicsProxyBase_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar4;
    }
    piVar1 = (this->DirtyProxyBucketInfo).Num + *(uint *)(*(longlong *)param_1 + 0x1c);
    *piVar1 = *piVar1 + iVar11;
    piVar1 = &(this->DirtyProxyBucketInfo).TotalNum;
    *piVar1 = *piVar1 + *piVar2;
  }
  return;
}

