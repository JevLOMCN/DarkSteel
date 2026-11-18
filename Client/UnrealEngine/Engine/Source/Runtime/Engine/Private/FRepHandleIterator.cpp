// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// JumpOverArray @ 1484e0c20

bool __thiscall FRepHandleIterator::JumpOverArray(FRepHandleIterator *this)

{
  int *piVar1;
  uint uVar2;
  FChangelistIterator *pFVar3;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  
  pFVar3 = this->ChangelistIterator;
  uVar2 = pFVar3->ChangedIndex;
  pTVar4 = pFVar3->Changed;
  pFVar3->ChangedIndex = uVar2 + 1;
  uVar8 = 0;
  if ((int)uVar2 < pTVar4->ArrayNum) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  piVar1 = &this->ChangelistIterator->ChangedIndex;
  *piVar1 = *piVar1 + (uint)*(ushort *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar2 * 2)
  ;
  uVar2 = this->ChangelistIterator->ChangedIndex;
  pTVar4 = this->ChangelistIterator->Changed;
  uVar8 = 0;
  if ((int)uVar2 < pTVar4->ArrayNum) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if (*(short *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar2 * 2) == 0) {
    piVar1 = &this->ChangelistIterator->ChangedIndex;
    *piVar1 = *piVar1 + 1;
    bVar6 = true;
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3278201614795540835>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x963,"ChangelistIterator.Changed[ChangelistIterator.ChangedIndex] == 0");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    bVar6 = false;
  }
  return bVar6;
}

// NextHandle @ 1484e4090

bool __thiscall FRepHandleIterator::NextHandle(FRepHandleIterator *this)

{
  int *piVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint local_res8 [2];
  FRepHandleIterator *local_res10;
  FRepHandleIterator *local_68;
  uint *local_60;
  FRepHandleIterator *local_58;
  uint *local_50;
  FRepHandleIterator *local_48;
  uint *local_40;
  FRepHandleIterator *local_38;
  uint *local_30;
  FScriptContainerElement *local_28;
  
  this->CmdIndex = -1;
  uVar11 = this->ChangelistIterator->ChangedIndex;
  pTVar2 = this->ChangelistIterator->Changed;
  uVar9 = 0;
  if ((int)uVar11 < pTVar2->ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar11 = (uint)*(ushort *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 2);
  this->Handle = uVar11;
  if (uVar11 != 0) {
    piVar1 = &this->ChangelistIterator->ChangedIndex;
    *piVar1 = *piVar1 + 1;
    iVar10 = this->ChangelistIterator->ChangedIndex;
    if (((-1 < iVar10) && (iVar10 < this->ChangelistIterator->Changed->ArrayNum)) ||
       (local_res10 = this,
       bVar6 = `FRepHandleIterator::NextHandle'::__l6::<lambda_1>::operator()(&local_res10), bVar6))
    {
      iVar10 = this->Handle + -1;
      if ((this->ArrayElementSize < 1) || (iVar8 = this->NumHandlesPerElement, iVar8 < 1)) {
        iVar8 = 0;
      }
      else {
        iVar8 = iVar10 / iVar8;
      }
      this->ArrayIndex = iVar8;
      if (iVar8 < this->MaxArrayIndex) {
        this->ArrayOffset = this->ArrayElementSize * iVar8;
        local_res8[0] = iVar10 - iVar8 * this->NumHandlesPerElement;
        if (((int)local_res8[0] < 0) || (this->HandleToCmdIndex->ArrayNum <= (int)local_res8[0])) {
          local_60 = local_res8;
          local_68 = this;
          bVar6 = `FRepHandleIterator::NextHandle'::__l12::<lambda_2>::operator()(&local_68);
          if (!bVar6) {
            return false;
          }
        }
        pTVar3 = this->HandleToCmdIndex;
        lVar12 = (longlong)(int)local_res8[0];
        uVar11 = 0;
        if ((int)local_res8[0] < pTVar3->ArrayNum) {
          uVar11 = ~local_res8[0] >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar10 = *(int *)((pTVar3->AllocatorInstance).Data + lVar12 * 0x10);
        this->CmdIndex = iVar10;
        if ((iVar10 < this->MinCmdIndex) || (this->MaxCmdIndex <= iVar10)) {
          local_50 = local_res8;
          local_58 = this;
          bVar6 = `FRepHandleIterator::NextHandle'::__l15::<lambda_3>::operator()(&local_58);
          if (!bVar6) {
            return false;
          }
        }
        uVar11 = this->CmdIndex;
        pTVar4 = this->Cmds;
        uVar9 = 0;
        if ((int)uVar11 < pTVar4->ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar13 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x20;
        if (*(ushort *)(pFVar13 + 0x14) - 1 != local_res8[0]) {
          local_30 = local_res8;
          local_38 = this;
          local_28 = pFVar13;
          bVar6 = `FRepHandleIterator::NextHandle'::__l18::<lambda_4>::operator()(&local_38);
          if (!bVar6) {
            return false;
          }
        }
        if (pFVar13[0x1c] == (FScriptContainerElement)0x1) {
          local_40 = local_res8;
          local_48 = this;
          bVar6 = `FRepHandleIterator::NextHandle'::__l21::<lambda_5>::operator()(&local_48);
          if (!bVar6) {
            return false;
          }
        }
        this->LastSuccessfulCmdIndex = this->CmdIndex;
        return true;
      }
    }
  }
  return false;
}

// PeekNextHandle @ 1484e4c00

int __thiscall FRepHandleIterator::PeekNextHandle(FRepHandleIterator *this)

{
  uint uVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = this->ChangelistIterator->ChangedIndex;
  pTVar2 = this->ChangelistIterator->Changed;
  uVar5 = 0;
  if ((int)uVar1 < pTVar2->ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  return (int)*(ushort *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar1 * 2);
}

// operator() @ 15052b190

bool __thiscall `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5163817275647589430>);
  if (bVar2) {
    if (*(UObjectBaseUtility **)(*(longlong *)this + 0x40) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(*(longlong *)this + 0x40),&local_18,(UObject *)0x0);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5163817275647589430>,
                       &`public:___cdecl_`public:___cdecl_FRepHandleIterator::FRepHandleIterator(UStruct_const*___ptr64_const,FChangelistIterator&___ptr64,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_>_const&___ptr64,int,int,int,int)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052b231;
    }
  }
  bVar2 = false;
LAB_15052b231:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15052bc50

bool __thiscall `FRepHandleIterator::NextHandle'::__l6::<lambda_1>::operator()(void *this)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar6 = false;
  bVar5 = false;
  bVar8 = false;
  bVar7 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3278201614795540767>);
  if (bVar7) {
    iVar1 = *(int *)(*(longlong *)this + 0x48);
    if ((iVar1 < 0) || (plVar3 = *(longlong **)(*(longlong *)this + 8), (int)plVar3[1] <= iVar1)) {
LAB_15052bd6a:
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_48,*(int *)(*(longlong *)this + 0x48));
      bVar6 = false;
      bVar5 = true;
    }
    else {
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      if (*(longlong *)((longlong)iVar1 * 0x20 + *plVar3) == 0) goto LAB_15052bd6a;
      uVar2 = *(uint *)(*(longlong *)this + 0x48);
      plVar3 = *(longlong **)(*(longlong *)this + 8);
      uVar10 = 0;
      if ((int)uVar2 < (int)plVar3[1]) {
        uVar10 = ~uVar2 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      FField::GetPathName(*(FField **)((longlong)(int)uVar2 * 0x20 + *plVar3),&local_28,
                          (UObject *)0x0);
      bVar6 = true;
      bVar5 = false;
    }
    bVar8 = true;
    if (*(UObjectBaseUtility **)(*(longlong *)this + 0x40) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(*(longlong *)this + 0x40),&local_38,(UObject *)0x0);
    }
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3278201614795540767>,&::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_15052be22;
    }
  }
  bVar7 = false;
LAB_15052be22:
  if ((bVar8) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  return false;
}

// operator() @ 15052c2a0

bool __thiscall `FRepHandleIterator::NextHandle'::__l12::<lambda_2>::operator()(void *this)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar6 = false;
  bVar5 = false;
  bVar8 = false;
  bVar7 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3278201614795540789>);
  if (bVar7) {
    iVar1 = *(int *)(*(longlong *)this + 0x48);
    if ((iVar1 < 0) || (plVar3 = *(longlong **)(*(longlong *)this + 8), (int)plVar3[1] <= iVar1)) {
LAB_15052c3bd:
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_48,*(int *)(*(longlong *)this + 0x48));
      bVar6 = false;
      bVar5 = true;
    }
    else {
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      if (*(longlong *)((longlong)iVar1 * 0x20 + *plVar3) == 0) goto LAB_15052c3bd;
      uVar2 = *(uint *)(*(longlong *)this + 0x48);
      plVar3 = *(longlong **)(*(longlong *)this + 8);
      uVar10 = 0;
      if ((int)uVar2 < (int)plVar3[1]) {
        uVar10 = ~uVar2 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      FField::GetPathName(*(FField **)((longlong)(int)uVar2 * 0x20 + *plVar3),&local_28,
                          (UObject *)0x0);
      bVar6 = true;
      bVar5 = false;
    }
    bVar8 = true;
    if (*(UObjectBaseUtility **)(*(longlong *)this + 0x40) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(*(longlong *)this + 0x40),&local_38,(UObject *)0x0);
    }
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3278201614795540789>,&::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_15052c486;
    }
  }
  bVar7 = false;
LAB_15052c486:
  if ((bVar8) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  return false;
}

// operator() @ 15052c690

bool __thiscall `FRepHandleIterator::NextHandle'::__l15::<lambda_3>::operator()(void *this)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar6 = false;
  bVar5 = false;
  bVar8 = false;
  bVar7 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3278201614795540800>);
  if (bVar7) {
    iVar1 = *(int *)(*(longlong *)this + 0x48);
    if ((iVar1 < 0) || (plVar3 = *(longlong **)(*(longlong *)this + 8), (int)plVar3[1] <= iVar1)) {
LAB_15052c7ad:
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_48,*(int *)(*(longlong *)this + 0x48));
      bVar6 = false;
      bVar5 = true;
    }
    else {
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      if (*(longlong *)((longlong)iVar1 * 0x20 + *plVar3) == 0) goto LAB_15052c7ad;
      uVar2 = *(uint *)(*(longlong *)this + 0x48);
      plVar3 = *(longlong **)(*(longlong *)this + 8);
      uVar10 = 0;
      if ((int)uVar2 < (int)plVar3[1]) {
        uVar10 = ~uVar2 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      FField::GetPathName(*(FField **)((longlong)(int)uVar2 * 0x20 + *plVar3),&local_28,
                          (UObject *)0x0);
      bVar6 = true;
      bVar5 = false;
    }
    bVar8 = true;
    if (*(UObjectBaseUtility **)(*(longlong *)this + 0x40) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(*(longlong *)this + 0x40),&local_38,(UObject *)0x0);
    }
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3278201614795540800>,&::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_15052c87e;
    }
  }
  bVar7 = false;
LAB_15052c87e:
  if ((bVar8) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  return false;
}

// operator() @ 15052c900

bool __thiscall `FRepHandleIterator::NextHandle'::__l18::<lambda_4>::operator()(void *this)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar6 = false;
  bVar5 = false;
  bVar8 = false;
  bVar7 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3278201614795540811>);
  if (bVar7) {
    iVar1 = *(int *)(*(longlong *)this + 0x48);
    if ((iVar1 < 0) || (plVar3 = *(longlong **)(*(longlong *)this + 8), (int)plVar3[1] <= iVar1)) {
LAB_15052ca1d:
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_48,*(int *)(*(longlong *)this + 0x48));
      bVar6 = false;
      bVar5 = true;
    }
    else {
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      if (*(longlong *)((longlong)iVar1 * 0x20 + *plVar3) == 0) goto LAB_15052ca1d;
      uVar2 = *(uint *)(*(longlong *)this + 0x48);
      plVar3 = *(longlong **)(*(longlong *)this + 8);
      uVar10 = 0;
      if ((int)uVar2 < (int)plVar3[1]) {
        uVar10 = ~uVar2 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      FField::GetPathName(*(FField **)((longlong)(int)uVar2 * 0x20 + *plVar3),&local_28,
                          (UObject *)0x0);
      bVar6 = true;
      bVar5 = false;
    }
    bVar8 = true;
    if (*(UObjectBaseUtility **)(*(longlong *)this + 0x40) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(*(longlong *)this + 0x40),&local_38,(UObject *)0x0);
    }
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3278201614795540811>,&::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_15052caea;
    }
  }
  bVar7 = false;
LAB_15052caea:
  if ((bVar8) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  return false;
}

// operator() @ 15052cb70

bool __thiscall `FRepHandleIterator::NextHandle'::__l21::<lambda_5>::operator()(void *this)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar6 = false;
  bVar5 = false;
  bVar8 = false;
  bVar7 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3278201614795540820>);
  if (bVar7) {
    iVar1 = *(int *)(*(longlong *)this + 0x48);
    if ((iVar1 < 0) || (plVar3 = *(longlong **)(*(longlong *)this + 8), (int)plVar3[1] <= iVar1)) {
LAB_15052cc8a:
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_48,*(int *)(*(longlong *)this + 0x48));
      bVar6 = false;
      bVar5 = true;
    }
    else {
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      if (*(longlong *)((longlong)iVar1 * 0x20 + *plVar3) == 0) goto LAB_15052cc8a;
      uVar2 = *(uint *)(*(longlong *)this + 0x48);
      plVar3 = *(longlong **)(*(longlong *)this + 8);
      uVar10 = 0;
      if ((int)uVar2 < (int)plVar3[1]) {
        uVar10 = ~uVar2 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      FField::GetPathName(*(FField **)((longlong)(int)uVar2 * 0x20 + *plVar3),&local_28,
                          (UObject *)0x0);
      bVar6 = true;
      bVar5 = false;
    }
    bVar8 = true;
    if (*(UObjectBaseUtility **)(*(longlong *)this + 0x40) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(*(longlong *)this + 0x40),&local_38,(UObject *)0x0);
    }
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3278201614795540820>,&::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_15052cd48;
    }
  }
  bVar7 = false;
LAB_15052cd48:
  if ((bVar8) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  return false;
}

