// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 16

// RunTest @ 141d9fe40

bool __thiscall FAutomationSpecBase::RunTest(FAutomationSpecBase *this,FString *param_1)

{
  FSpec *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  TSharedRef<FAutomationSpecBase::FSpec,1> *pTVar8;
  FAutomationTestFramework *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TArray<TSharedRef<FAutomationSpecBase::FSpec,1>,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<IAutomationLatentCommand,1> local_38;
  TSharedPtr<IAutomationLatentCommand,1> local_28;
  
  if (this->bHasBeenDefined == false) {
    (**(code **)(this->_padding_ + 0x108))();
    PostDefine(this);
  }
  if ((param_1->Data).ArrayNum < 2) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    TMapBase<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>_>
                *)&this->IdToSpecMap,&local_48);
    uVar10 = 0;
    if (0 < local_48.ArrayNum) {
      lVar12 = 0;
      do {
        uVar11 = 0;
        lVar13 = 0;
        while( true ) {
          uVar7 = 0;
          if ((int)uVar10 < local_48.ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (*(int *)(*(longlong *)(local_48.AllocatorInstance.Data + lVar12) + 0x40) <=
              (int)uVar11) break;
          pFVar9 = FAutomationTestFramework::Get();
          uVar7 = 0;
          if ((int)uVar10 < local_48.ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar3 = *(longlong *)(local_48.AllocatorInstance.Data + lVar12);
          uVar7 = 0;
          if ((int)uVar11 < *(int *)(lVar3 + 0x40)) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar3 = *(longlong *)(lVar3 + 0x38);
          local_28.Object = *(IAutomationLatentCommand **)(lVar3 + lVar13);
          local_28.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar13);
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FAutomationTestFramework::EnqueueLatentCommand(pFVar9,&local_28);
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 0x10;
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x10;
      } while ((int)uVar10 < local_48.ArrayNum);
    }
    DestructItems<TSharedRef<FAutomationSpecBase::FSpec,1>,int>
              ((TSharedRef<FAutomationSpecBase::FSpec,1> *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    if ((TSharedRef<FAutomationSpecBase::FSpec,1> *)local_48.AllocatorInstance.Data !=
        (TSharedRef<FAutomationSpecBase::FSpec,1> *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  else {
    pTVar8 = TMapBase<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>_>
             ::Find((TMapBase<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>_>
                     *)&this->IdToSpecMap,param_1);
    if ((pTVar8 != (TSharedRef<FAutomationSpecBase::FSpec,1> *)0x0) &&
       (uVar10 = 0, 0 < (pTVar8->Object->Commands).ArrayNum)) {
      lVar12 = 0;
      do {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pTVar8->Object;
        uVar11 = 0;
        if ((int)uVar10 < (pFVar1->Commands).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar2 = (pFVar1->Commands).AllocatorInstance.Data;
        local_38.Object = *(IAutomationLatentCommand **)(pFVar2 + lVar12);
        local_38.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar2 + lVar12 + 8);
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FAutomationTestFramework::EnqueueLatentCommand(pFVar9,&local_38);
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x10;
      } while ((int)uVar10 < (pTVar8->Object->Commands).ArrayNum);
    }
  }
  return true;
}

// IsStressTest @ 141da0140

bool __thiscall FAutomationSpecBase::IsStressTest(FAutomationSpecBase *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141da0150

uint __thiscall FAutomationSpecBase::GetRequiredDeviceNum(FAutomationSpecBase *this)

{
  return 1;
}

// GetTestSourceFileName @ 141da0160

FString * __thiscall
FAutomationSpecBase::GetTestSourceFileName
          (FAutomationSpecBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *_Src;
  ForAnyElementType FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  FString local_38;
  FString local_28;
  
  local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar8 = (longlong)local_38.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  ::FString::ConcatFC(&local_28,(FString *)&this->_padding_,L" ");
  iVar4 = local_28.Data.ArrayNum + -1;
  FVar1.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  bVar2 = ::FString::StartsWith(&local_38,(wchar_t *)FVar1.Data,iVar4,IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    iVar4 = (int)this->_padding_;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    pFVar5 = ::FString::RightChop(param_1,&local_28,iVar4);
    if (&local_38 != pFVar5) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.ArrayNum == 0) {
    pwVar7 = L"";
    iVar4 = 0;
  }
  else {
    iVar4 = local_38.Data.ArrayNum + -1;
    pwVar7 = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
  iVar4 = TSet<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>,FDefaultSetAllocator>
                      *)&this->IdToSpecMap,uVar3,&local_38);
  if (iVar4 != -1) {
    lVar8 = *(longlong *)&this->IdToSpecMap + (longlong)iVar4 * 0x28;
    plVar6 = (longlong *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      ::FString::FString(__return_storage_ptr__,(FString *)(*plVar6 + 0x20));
      goto LAB_141da0311;
    }
  }
  ::FString::FString(__return_storage_ptr__,L"");
LAB_141da0311:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141da0350

int __thiscall
FAutomationSpecBase::GetTestSourceFileLine(FAutomationSpecBase *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  ForAnyElementType FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  FString local_38;
  FString local_28;
  
  local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar8 = (longlong)local_38.Data.ArrayNum;
  iVar7 = 0;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  ::FString::ConcatFC(&local_28,(FString *)&this->_padding_,L" ");
  pwVar9 = L"";
  iVar4 = local_28.Data.ArrayNum + -1;
  FVar1.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  bVar2 = ::FString::StartsWith(&local_38,(wchar_t *)FVar1.Data,iVar4,IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    iVar4 = (int)this->_padding_;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    pFVar5 = ::FString::RightChop(param_1,&local_28,iVar4);
    if (&local_38 != pFVar5) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = local_38.Data.ArrayNum + -1;
    pwVar9 = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar9);
  iVar4 = TSet<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>,FDefaultSetAllocator>
                      *)&this->IdToSpecMap,uVar3,&local_38);
  if (iVar4 != -1) {
    lVar8 = *(longlong *)&this->IdToSpecMap + (longlong)iVar4 * 0x28;
    plVar6 = (longlong *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      iVar7 = *(int *)(*plVar6 + 0x30);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return iVar7;
}

// GetTests @ 141da0520

void __thiscall
FAutomationSpecBase::GetTests
          (FAutomationSpecBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  TArray<TSharedRef<FAutomationSpecBase::FSpec,1>,TSizedDefaultAllocator<32>_> local_38;
  
  if (this->bHasBeenDefined == false) {
    (**(code **)(this->_padding_ + 0x108))();
    PostDefine(this);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMapBase<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>_>
              *)&this->IdToSpecMap,&local_38);
  uVar7 = 0;
  if (0 < local_38.ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < local_38.ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      pFVar6 = *(FScriptContainerElement **)(local_38.AllocatorInstance.Data + lVar8);
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                         (FString *)pFVar6);
      uVar4 = 0;
      if ((int)uVar7 < local_38.ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      pFVar1 = (param_1->AllocatorInstance).Data;
      pFVar6 = (FScriptContainerElement *)
               (*(longlong *)(local_38.AllocatorInstance.Data + lVar8) + 0x10);
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar5 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                         (FString *)pFVar6);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < local_38.ArrayNum);
  }
  DestructItems<TSharedRef<FAutomationSpecBase::FSpec,1>,int>
            ((TSharedRef<FAutomationSpecBase::FSpec,1> *)local_38.AllocatorInstance.Data,
             local_38.ArrayNum);
  if ((TSharedRef<FAutomationSpecBase::FSpec,1> *)local_38.AllocatorInstance.Data !=
      (TSharedRef<FAutomationSpecBase::FSpec,1> *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// FAutomationSpecBase @ 141dc3e10

FAutomationSpecBase * __thiscall
FAutomationSpecBase::FAutomationSpecBase(FAutomationSpecBase *this,FString *param_1,bool param_2)

{
  TArray<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSpecDefinitionScope *pFVar6;
  FSpecDefinitionScope *pFVar7;
  FAutomationSpecBase *pFVar8;
  undefined1 auVar9 [16];
  TRawPtrProxy<FAutomationSpecBase::FSpecDefinitionScope> local_res8;
  FSpecDefinitionScope *local_28;
  TReferenceControllerBase<1> *local_20;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,param_2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = __real_41b1e1a300800000;
  this->_padding_ = (longlong)&___7FAutomationSpecBase__6B_;
  pFVar7 = (FSpecDefinitionScope *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  auVar9 = roundpd(auVar9,auVar9,1);
  (this->DefaultTimeout).Ticks = (longlong)auVar9._0_8_;
  this->bEnableSkipIfError = true;
  (this->Description).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).ArrayNum = 0;
  (this->Description).ArrayMax = 0;
  *(undefined8 *)&this->IdToSpecMap = 0;
  *(undefined8 *)&(this->IdToSpecMap).field_0x8 = 0;
  *(undefined8 *)&(this->IdToSpecMap).field_0x20 = 0;
  *(undefined4 *)&(this->IdToSpecMap).field_0x28 = 0;
  *(undefined4 *)&(this->IdToSpecMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IdToSpecMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IdToSpecMap).field_0x34 = 0;
  *(undefined8 *)&(this->IdToSpecMap).field_0x40 = 0;
  *(undefined4 *)&(this->IdToSpecMap).field_0x48 = 0;
  pFVar6 = ::operator_new(0x50);
  if (pFVar6 != (FSpecDefinitionScope *)0x0) {
    (pFVar6->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Description).Data.ArrayNum = 0;
    (pFVar6->Description).Data.ArrayMax = 0;
    (pFVar6->BeforeEach).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->BeforeEach).ArrayNum = 0;
    (pFVar6->BeforeEach).ArrayMax = 0;
    (pFVar6->It).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->It).ArrayNum = 0;
    (pFVar6->It).ArrayMax = 0;
    (pFVar6->AfterEach).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->AfterEach).ArrayNum = 0;
    (pFVar6->AfterEach).ArrayMax = 0;
    (pFVar6->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Children).ArrayNum = 0;
    (pFVar6->Children).ArrayMax = 0;
    pFVar7 = pFVar6;
  }
  local_res8.Object = pFVar7;
  TSharedPtr<FAutomationSpecBase::FSpecDefinitionScope,1>::
  TSharedPtr<FAutomationSpecBase::FSpecDefinitionScope,1><FAutomationSpecBase::FSpecDefinitionScope>
            (&this->RootDefinitionScope,&local_res8);
  pTVar1 = &this->DefinitionScopeStack;
  this->bHasBeenDefined = false;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DefinitionScopeStack).ArrayNum = 0;
  (this->DefinitionScopeStack).ArrayMax = 0;
  if (((this->RootDefinitionScope).Object == (FSpecDefinitionScope *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FAutomationSpecBase *)(*pcVar3)();
    return pFVar8;
  }
  local_28 = (this->RootDefinitionScope).Object;
  local_20 = (this->RootDefinitionScope).SharedReferenceCount.ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_28 == (FSpecDefinitionScope *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FAutomationSpecBase *)(*pcVar3)();
    return pFVar8;
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar2 + (longlong)(this->DefinitionScopeStack).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FAutomationSpecBase *)(*pcVar3)();
    return pFVar8;
  }
  iVar5 = (this->DefinitionScopeStack).ArrayNum;
  if (iVar5 == (this->DefinitionScopeStack).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->DefinitionScopeStack).ArrayMax);
  }
  (this->DefinitionScopeStack).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(FSpecDefinitionScope **)(pFVar2 + (longlong)iVar5 * 0x10) = local_28;
  *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = local_20;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return this;
}

// ~FAutomationSpecBase @ 141dc6350

void __thiscall FAutomationSpecBase::~FAutomationSpecBase(FAutomationSpecBase *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  DestructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int>
            ((TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)
             (this->DefinitionScopeStack).AllocatorInstance.Data,
             (this->DefinitionScopeStack).ArrayNum);
  pFVar3 = (this->DefinitionScopeStack).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RootDefinitionScope).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->IdToSpecMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->IdToSpecMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IdToSpecMap);
  DestructItems<FString,int>
            ((FString *)(this->Description).AllocatorInstance.Data,(this->Description).ArrayNum);
  pFVar3 = (this->Description).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  return;
}

// BeforeEach @ 141dcdb80

void __thiscall
FAutomationSpecBase::BeforeEach(FAutomationSpecBase *this,TFunction<void___cdecl(void)> *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FSingleExecuteLatentCommand *this_00;
  FSingleExecuteLatentCommand *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  TSharedRef<IAutomationLatentCommand,1> local_78;
  TRawPtrProxy<FAutomationSpecBase::FSingleExecuteLatentCommand> local_68 [2];
  TFunction<void___cdecl(void)> local_58;
  
  iVar6 = (this->DefinitionScopeStack).ArrayNum;
  pFVar7 = (FSingleExecuteLatentCommand *)0x0;
  uVar10 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar10 < iVar6) {
    uVar5 = ~uVar10 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->DefinitionScopeStack).AllocatorInstance.Data;
  lVar8 = (longlong)(this->DefinitionScopeStack).ArrayNum;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar8 * 0x10 + -8);
  lVar8 = *(longlong *)(pFVar1 + lVar8 * 0x10 + -0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FSingleExecuteLatentCommand *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_1;
    bVar4 = this->bEnableSkipIfError;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar11 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar11 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar11)(puVar11,&local_58.field_0x10);
    }
    pFVar7 = FSingleExecuteLatentCommand::FSingleExecuteLatentCommand(this_00,this,&local_58,bVar4);
    if ((((pFVar7 != (FSingleExecuteLatentCommand *)0x0) && (*(longlong *)&pFVar7->field_0x8 != 0))
        && (*(longlong *)&pFVar7->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&pFVar7->field_0x10 + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_68[0].Object = pFVar7;
  TSharedRef<IAutomationLatentCommand,1>::
  TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FSingleExecuteLatentCommand>
            (&local_78,local_68);
  if ((*(TSharedRef<IAutomationLatentCommand,1> **)(lVar8 + 0x10) <= &local_78) &&
     (&local_78 <
      *(TSharedRef<IAutomationLatentCommand,1> **)(lVar8 + 0x10) + *(int *)(lVar8 + 0x1c))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)(lVar8 + 0x18);
  if (iVar6 == *(int *)(lVar8 + 0x1c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar8 + 0x10),(int *)(lVar8 + 0x1c));
  }
  *(int *)(lVar8 + 0x18) = iVar6 + 1;
  puVar11 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar8 + 0x10));
  *puVar11 = local_78.Object;
  puVar11[1] = local_78.SharedReferenceCount.ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (*(longlong *)param_1 != 0) {
    plVar9 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// Describe @ 141dd1e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAutomationSpecBase::Describe
          (FAutomationSpecBase *this,FString *param_1,TFunction<void___cdecl(void)> *param_2)

{
  FScriptContainerElement *_Src;
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStackY_f8 [32];
  FString local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  code *local_98 [5];
  undefined8 *local_70;
  longlong local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_68 = *(longlong *)param_2;
  local_40 = (longlong *)0x0;
  if (local_68 != 0) {
    puVar1 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,&local_58);
  }
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x40,0x10);
  *local_70 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__Describe_FAutomationSpecBase__QEAAXAEBVFString__V__TFunction___A6AXXZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar2 = local_70 + 2;
  *plVar2 = local_68;
  local_70[7] = local_40;
  local_40 = (longlong *)0x0;
  local_70[4] = local_58;
  local_70[5] = uStack_50;
  local_70[6] = local_48;
  if (*plVar2 != 0) {
    local_68 = 0;
  }
  if (plVar2 != (longlong *)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAutomationSpecBase::Describe'::__l2::<lambda_1>,void,int>::
                  Call;
  }
  local_b8.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar3 = (longlong)local_b8.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_b8.Data.ArrayNum == 0) {
    local_b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,local_b8.Data.ArrayNum,
               &local_b8.Data.ArrayMax);
    memcpy(local_b8.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
  ConstructItems<FString,FString,int>(local_a8.AllocatorInstance.Data,&local_b8,1);
  Describe(this,&local_a8,(TFunction<void___cdecl(int)> *)local_98);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_68 != 0) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// Describe @ 141dd1fe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAutomationSpecBase::Describe
          (FAutomationSpecBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<void___cdecl(int)> *param_2)

{
  ForAnyElementType *pFVar1;
  TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TFunction<void___cdecl(int)> *pTVar5;
  FAutomationSpecBase *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FSpecDefinitionScope *pFVar12;
  FSpecDefinitionScope *pFVar13;
  undefined8 uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  longlong *plVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  TArray<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,TSizedDefaultAllocator<32>_>
  *pTVar23;
  int iVar24;
  TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> local_a8;
  uint local_98;
  FLLMScope local_94;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_90;
  uint local_88 [2];
  TFunction<void___cdecl(int)> *local_80;
  TRawPtrProxy<FAutomationSpecBase::FSpecDefinitionScope> local_78;
  FAutomationSpecBase *local_70;
  longlong *local_68;
  ForAnyElementType *local_60;
  TArray<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,TSizedDefaultAllocator<32>_>
  *local_58;
  TReferenceControllerBase<1> *local_50;
  FMemScope local_48 [2];
  
  local_90 = param_1;
  local_80 = param_2;
  local_70 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FAutomationSpecBase::Describe(TArray<FString,TSizedDefaultAllocator<32>_>,TFunction<void___cdecl(int)>)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FAutomationSpecBase::Describe(TArray<FString,TSizedDefaultAllocator<32>_>,TFunction<void___cdecl(int)>)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FAutomationSpecBase::Describe(TArray<FString,TSizedDefaultAllocator<32>_>,TFunction<void___cdecl(int)>)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_FAutomationSpecBase::Describe(TArray<FString,TSizedDefaultAllocator<32>_>,TFunction<void___cdecl(int)>)___ptr64'
                    ::__l2::LLMScope_Name3311,L"AutomationTest/Framework");
    _Init_thread_footer(&`public:_void___cdecl_FAutomationSpecBase::Describe(TArray<FString,TSizedDefaultAllocator<32>_>,TFunction<void___cdecl(int)>)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (&local_94,
             `public:_void___cdecl_FAutomationSpecBase::Describe(TArray<FString,TSizedDefaultAllocator<32>_>,TFunction<void___cdecl(int)>)___ptr64'
             ::__l2::LLMScope_Name3311,false,None,Default,true);
  FMemScope::FMemScope
            (local_48,&`public:_void___cdecl_FAutomationSpecBase::Describe(TArray<FString,TSizedDefaultAllocator<32>_>,TFunction<void___cdecl(int)>)___ptr64'
                       ::__l2::LLMScope_Name3311,true);
  local_98 = 0;
  if (0 < param_1->ArrayNum) {
    local_68 = (longlong *)&param_2->field_0x10;
    pTVar23 = &this->DefinitionScopeStack;
    local_58 = pTVar23;
    do {
      uVar11 = local_98;
      pFVar13 = (FSpecDefinitionScope *)0x0;
      uVar18 = pTVar23->ArrayNum - 1;
      uVar8 = 0;
      if ((int)uVar18 < pTVar23->ArrayNum) {
        uVar8 = ~uVar18 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar19 = (pTVar23->AllocatorInstance).Data;
      lVar20 = *(longlong *)(pFVar19 + (longlong)pTVar23->ArrayNum * 0x10 + -0x10);
      local_50 = *(TReferenceControllerBase<1> **)
                  (pFVar19 + (longlong)pTVar23->ArrayNum * 0x10 + -8);
      if (local_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar12 = ::operator_new(0x50);
      if (pFVar12 != (FSpecDefinitionScope *)0x0) {
        (pFVar12->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->Description).Data.ArrayNum = 0;
        (pFVar12->Description).Data.ArrayMax = 0;
        (pFVar12->BeforeEach).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->BeforeEach).ArrayNum = 0;
        (pFVar12->BeforeEach).ArrayMax = 0;
        (pFVar12->It).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->It).ArrayNum = 0;
        (pFVar12->It).ArrayMax = 0;
        (pFVar12->AfterEach).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->AfterEach).ArrayNum = 0;
        (pFVar12->AfterEach).ArrayMax = 0;
        (pFVar12->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->Children).ArrayNum = 0;
        (pFVar12->Children).ArrayMax = 0;
        pFVar13 = pFVar12;
      }
      local_78.Object = pFVar13;
      TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>::
      TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1><FAutomationSpecBase::FSpecDefinitionScope>
                (&local_a8,&local_78);
      uVar18 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::FString::operator=
                (&(local_a8.Object)->Description,
                 (FString *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
      pFVar1 = (ForAnyElementType *)(lVar20 + 0x40);
      local_60 = pFVar1;
      if (((*(TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> **)(lVar20 + 0x40) <=
            &local_a8) &&
          (&local_a8 <
           *(TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> **)(lVar20 + 0x40) +
           *(int *)(lVar20 + 0x4c))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = *(int *)(lVar20 + 0x48);
      if (iVar9 == *(int *)(lVar20 + 0x4c)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar1,(int *)(lVar20 + 0x4c));
      }
      *(int *)(lVar20 + 0x48) = iVar9 + 1;
      pFVar19 = pFVar1->Data;
      *(FSpecDefinitionScope **)(pFVar19 + (longlong)iVar9 * 0x10) = local_a8.Object;
      *(TReferenceControllerBase<1> **)(pFVar19 + (longlong)iVar9 * 0x10 + 8) =
           local_a8.SharedReferenceCount.ReferenceController;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar2 = (TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)
               (pTVar23->AllocatorInstance).Data;
      if (((pTVar2 <= &local_a8) && (&local_a8 < pTVar2 + pTVar23->ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = pTVar23->ArrayNum;
      if (iVar9 == pTVar23->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar23->AllocatorInstance,&pTVar23->ArrayMax);
      }
      uVar8 = local_98;
      pFVar19 = (pTVar23->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      pTVar23->ArrayNum = iVar9 + 1;
      *(FSpecDefinitionScope **)pFVar19 = local_a8.Object;
      *(TReferenceControllerBase<1> **)(pFVar19 + 8) =
           local_a8.SharedReferenceCount.ReferenceController;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar10 = 0;
      if ((int)local_98 < local_90->ArrayNum) {
        uVar10 = uVar18;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar6 = local_70;
      PushDescription(local_70,(FString *)
                               ((local_90->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
      pTVar5 = local_80;
      local_88[0] = uVar8;
      UE::Core::Private::Function::CheckCallable(*(void **)local_80);
      pcVar4 = *(code **)pTVar5;
      plVar17 = (longlong *)local_68[3];
      if ((longlong *)local_68[3] == (longlong *)0x0) {
        plVar17 = local_68;
      }
      uVar14 = (**(code **)(*plVar17 + 8))();
      (*pcVar4)(uVar14,local_88);
      uVar11 = 0;
      if ((int)local_98 < local_90->ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt
                (&pFVar6->Description,(pFVar6->Description).ArrayNum + -1,Default);
      if ((pTVar23->ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = *(TReferenceControllerBase<1> **)
                ((pTVar23->AllocatorInstance).Data + (longlong)pTVar23->ArrayNum * 0x10 + -8);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar9 = pTVar23->ArrayNum;
      pFVar19 = (pTVar23->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar19 + -8));
      iVar9 = pTVar23->ArrayNum - iVar9;
      if (iVar9 != 0) {
        memmove(pFVar19 + -0x10,pFVar19,(longlong)iVar9 << 4);
      }
      iVar9 = pTVar23->ArrayNum + -1;
      pTVar23->ArrayNum = iVar9;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar23->AllocatorInstance,iVar9,&pTVar23->ArrayMax);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if ((((local_a8.Object)->It).ArrayNum == 0) && (((local_a8.Object)->Children).ArrayNum == 0))
      {
        if (((TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)pFVar1->Data <= &local_a8)
           && ((&local_a8 <
                (TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)pFVar1->Data +
                *(int *)(lVar20 + 0x4c) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)))) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar15 = (longlong)*(int *)(lVar20 + 0x48);
        if (*(int *)(lVar20 + 0x48) != 0) {
          pFVar19 = pFVar1->Data;
          iVar24 = 0;
          lVar20 = 0;
          bVar7 = *(FSpecDefinitionScope **)pFVar19 != local_a8.Object;
          pFVar13 = local_a8.Object;
          iVar9 = 0;
          do {
            lVar20 = lVar20 + 1;
            iVar22 = iVar9 + 1;
            if (lVar20 < lVar15) {
              pFVar16 = pFVar19 + lVar20 * 0x10;
              do {
                if (bVar7 != (*(FSpecDefinitionScope **)pFVar16 != pFVar13)) break;
                iVar22 = iVar22 + 1;
                lVar20 = lVar20 + 1;
                pFVar16 = pFVar16 + 0x10;
              } while (lVar20 < lVar15);
            }
            iVar21 = iVar22 - iVar9;
            if (bVar7 == false) {
              DestructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int>
                        ((TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)
                         (pFVar19 + (longlong)iVar9 * 0x10),iVar21);
              pFVar13 = local_a8.Object;
            }
            else {
              if (iVar24 != iVar9) {
                memmove(pFVar19 + (longlong)iVar24 * 0x10,pFVar19 + (longlong)iVar9 * 0x10,
                        (longlong)iVar21 << 4);
                pFVar13 = local_a8.Object;
              }
              iVar24 = iVar24 + iVar21;
            }
            bVar7 = (bool)(bVar7 ^ 1);
            iVar9 = iVar22;
          } while (lVar20 < lVar15);
          *(int *)&local_60[1].Data = iVar24;
          pTVar23 = local_58;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      local_98 = local_98 + 1;
      param_2 = local_80;
      param_1 = local_90;
    } while ((int)local_98 < local_90->ArrayNum);
  }
  FMemScope::~FMemScope(local_48);
  FLLMScope::~FLLMScope(&local_94);
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar19 = (param_1->AllocatorInstance).Data;
  if (pFVar19 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar19);
  }
  if (*(longlong *)param_2 != 0) {
    plVar17 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar17 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  return;
}

// GetDescription @ 141dd5520

FString * __thiscall
FAutomationSpecBase::GetDescription(FAutomationSpecBase *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar9 = 0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  *piVar1 = 0;
  uVar12 = uVar9;
  if (0 < (this->Description).ArrayNum) {
    do {
      uVar10 = (uint)uVar9;
      uVar11 = ~uVar10 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar10 < (this->Description).ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      if (1 < *(int *)((this->Description).AllocatorInstance.Data + uVar12 + 8)) {
        iVar6 = (__return_storage_ptr__->Data).ArrayNum;
        if (iVar6 < 2) {
          uVar5 = 0;
          if ((int)uVar10 < (this->Description).ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FString *)(*pcVar3)();
            return pFVar7;
          }
          pFVar8 = (this->Description).AllocatorInstance.Data + uVar12;
          if ((FScriptContainerElement *)__return_storage_ptr__ != pFVar8) {
            iVar6 = *(int *)(pFVar8 + 8);
            _Src = *(void **)&pFVar8->field_0x0;
            (__return_storage_ptr__->Data).ArrayNum = iVar6;
            if ((iVar6 == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar6,*piVar1,(ForAnyElementType *)__return_storage_ptr__,iVar6,piVar1)
              ;
              if (iVar6 != 0) {
                memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,
                       (longlong)iVar6 * 2);
              }
            }
          }
        }
        else {
          if (((iVar6 + -2 < 0) || (iVar6 + -1 <= iVar6 + -2)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FString *)(*pcVar3)();
            return pFVar7;
          }
          iVar6 = iswspace(*(wint_t *)
                            ((__return_storage_ptr__->Data).AllocatorInstance.Data +
                            (longlong)iVar6 * 2 + -4));
          if (iVar6 == 0) {
            uVar5 = 0;
            if ((int)uVar10 < (this->Description).ArrayNum) {
              uVar5 = uVar11;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar7 = (FString *)(*pcVar3)();
              return pFVar7;
            }
            pFVar8 = (this->Description).AllocatorInstance.Data;
            iVar2 = *(int *)(pFVar8 + uVar12 + 8);
            iVar6 = iVar2 + -1;
            if (iVar2 == 0) {
              iVar6 = 0;
            }
            if ((iVar6 < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x113,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar7 = (FString *)(*pcVar3)();
              return pFVar7;
            }
            iVar6 = iswspace(**(wint_t **)(pFVar8 + uVar12));
            if (iVar6 == 0) {
              uVar5 = 0;
              if ((int)uVar10 < (this->Description).ArrayNum) {
                uVar5 = uVar11;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FString *)(*pcVar3)();
                return pFVar7;
              }
              ::FString::PrintfImpl(&local_58,L"%s.%s");
              if (__return_storage_ptr__ != &local_58) {
                pFVar8 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
                if (pFVar8 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar8);
                }
                (__return_storage_ptr__->Data).AllocatorInstance.Data =
                     local_58.Data.AllocatorInstance.Data;
                (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
                *piVar1 = local_58.Data.ArrayMax;
                local_58.Data.ArrayNum = 0;
                local_58.Data.ArrayMax = 0;
                local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              goto LAB_141dd568b;
            }
          }
          uVar5 = 0;
          if ((int)uVar10 < (this->Description).ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FString *)(*pcVar3)();
            return pFVar7;
          }
          pFVar8 = (this->Description).AllocatorInstance.Data;
          ::FString::ConcatFC(&local_38,__return_storage_ptr__,L".");
          ::FString::ConcatFF(&local_48,&local_38,(FString *)(pFVar8 + (longlong)(int)uVar10 * 0x10)
                             );
          if (__return_storage_ptr__ != &local_48) {
            pFVar8 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
            if (pFVar8 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar8);
            }
            (__return_storage_ptr__->Data).AllocatorInstance.Data =
                 local_48.Data.AllocatorInstance.Data;
            (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
            *piVar1 = local_48.Data.ArrayMax;
            local_48.Data.ArrayNum = 0;
            local_48.Data.ArrayMax = 0;
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
LAB_141dd568b:
      uVar9 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 0x10;
    } while ((int)(uVar10 + 1) < (this->Description).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetId @ 141dd5e60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FAutomationSpecBase::GetId(FAutomationSpecBase *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar9 = (this->Description).ArrayNum;
  uVar8 = iVar9 - 1;
  uVar13 = 0;
  if ((int)uVar8 < iVar9) {
    uVar13 = ~uVar8 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  bVar4 = ::FString::EndsWith((FString *)
                              ((this->Description).AllocatorInstance.Data +
                              (longlong)((this->Description).ArrayNum + -1) * 0x10),L"]",1,
                              IgnoreCase);
  if (bVar4) {
    iVar9 = (this->Description).ArrayNum;
    uVar8 = iVar9 - 1;
    uVar13 = 0;
    if ((int)uVar8 < iVar9) {
      uVar13 = ~uVar8 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    pFVar12 = (this->Description).AllocatorInstance.Data;
    lVar7 = (longlong)(this->Description).ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = *(int *)(pFVar12 + lVar7 * 0x10 + -8);
    lVar11 = (longlong)local_58.Data.ArrayNum;
    pvVar2 = *(void **)(pFVar12 + lVar7 * 0x10 + -0x10);
    if (local_58.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,pvVar2,lVar11 * 2);
    }
    iVar9 = local_58.Data.ArrayNum + -2;
    if (local_58.Data.ArrayNum == 0) {
      iVar9 = -1;
    }
    ::FString::RemoveAt(&local_58,iVar9,Default);
    pFVar12 = local_58.Data.AllocatorInstance.Data + (longlong)local_58.Data.ArrayNum * 2;
    do {
      if (pFVar12 == local_58.Data.AllocatorInstance.Data) goto LAB_141dd6004;
      pFVar12 = pFVar12 + -2;
    } while (*(short *)pFVar12 != 0x5b);
    iVar9 = (int)((longlong)pFVar12 - (longlong)local_58.Data.AllocatorInstance.Data >> 1);
    if (iVar9 != -1) {
      iVar5 = local_58.Data.ArrayNum + -2;
      if (local_58.Data.ArrayNum == 0) {
        iVar5 = -1;
      }
      if (iVar9 != iVar5) {
        ::FString::RightChop(&local_58,__return_storage_ptr__,iVar9 + 1);
        if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
    }
LAB_141dd6004:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  lVar7 = 0;
  uVar13 = 0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  if (0 < (this->Description).ArrayNum) {
    do {
      uVar10 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < (this->Description).ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      if (1 < *(int *)((this->Description).AllocatorInstance.Data + lVar7 + 8)) {
        iVar9 = (__return_storage_ptr__->Data).ArrayNum;
        if (iVar9 < 2) {
          uVar8 = 0;
          if ((int)uVar13 < (this->Description).ArrayNum) {
            uVar8 = uVar10;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar3)();
            return pFVar6;
          }
          pFVar12 = (this->Description).AllocatorInstance.Data + lVar7;
          if ((FScriptContainerElement *)__return_storage_ptr__ != pFVar12) {
            iVar9 = *(int *)(pFVar12 + 8);
            pvVar2 = *(void **)&pFVar12->field_0x0;
            (__return_storage_ptr__->Data).ArrayNum = iVar9;
            if ((iVar9 == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar9,*piVar1,(ForAnyElementType *)__return_storage_ptr__,iVar9,piVar1)
              ;
              if (iVar9 != 0) {
                memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,pvVar2,
                       (longlong)iVar9 * 2);
              }
            }
          }
        }
        else {
          if (((iVar9 + -2 < 0) || (iVar9 + -1 <= iVar9 + -2)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar3)();
            return pFVar6;
          }
          iVar9 = iswspace(*(wint_t *)
                            ((__return_storage_ptr__->Data).AllocatorInstance.Data +
                            (longlong)iVar9 * 2 + -4));
          if (iVar9 == 0) {
            uVar8 = 0;
            if ((int)uVar13 < (this->Description).ArrayNum) {
              uVar8 = uVar10;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar3)();
              return pFVar6;
            }
            pFVar12 = (this->Description).AllocatorInstance.Data;
            iVar5 = *(int *)(pFVar12 + lVar7 + 8);
            iVar9 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar9 = 0;
            }
            if ((iVar9 < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x113,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar3)();
              return pFVar6;
            }
            iVar9 = iswspace(**(wint_t **)(pFVar12 + lVar7));
            if (iVar9 == 0) {
              uVar8 = 0;
              if ((int)uVar13 < (this->Description).ArrayNum) {
                uVar8 = uVar10;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar6 = (FString *)(*pcVar3)();
                return pFVar6;
              }
              ::FString::PrintfImpl(&local_48,L"%s %s");
              if (__return_storage_ptr__ != &local_48) {
                pFVar12 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
                if (pFVar12 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar12);
                }
                (__return_storage_ptr__->Data).AllocatorInstance.Data =
                     local_48.Data.AllocatorInstance.Data;
                (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
                *piVar1 = local_48.Data.ArrayMax;
                local_48.Data.ArrayNum = 0;
                local_48.Data.ArrayMax = 0;
                local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
              goto LAB_141dd61ba;
            }
          }
          uVar8 = 0;
          if ((int)uVar13 < (this->Description).ArrayNum) {
            uVar8 = uVar10;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar3)();
            return pFVar6;
          }
          ::FString::ConcatFF(&local_38,__return_storage_ptr__,
                              (FString *)
                              ((this->Description).AllocatorInstance.Data +
                              (longlong)(int)uVar13 * 0x10));
          if (__return_storage_ptr__ != &local_38) {
            pFVar12 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
            if (pFVar12 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar12);
            }
            (__return_storage_ptr__->Data).AllocatorInstance.Data =
                 local_38.Data.AllocatorInstance.Data;
            (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
            *piVar1 = local_38.Data.ArrayMax;
            local_38.Data.ArrayNum = 0;
            local_38.Data.ArrayMax = 0;
            local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
LAB_141dd61ba:
      uVar13 = uVar13 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar13 < (this->Description).ArrayNum);
  }
  return __return_storage_ptr__;
}

// It @ 141dd8240

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAutomationSpecBase::It
          (FAutomationSpecBase *this,FString *param_1,TFunction<void___cdecl(void)> *param_2,
          FSourceLocation *param_3)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FSpecIt *this_00;
  FSingleExecuteLatentCommand *this_01;
  FSingleExecuteLatentCommand *pFVar7;
  TSharedRef<IAutomationLatentCommand,1> *pTVar8;
  FString *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  undefined8 *puVar15;
  TSharedRef<FAutomationSpecBase::FSpecIt,1> local_e8;
  FSourceLocation *local_d8;
  TRawPtrProxy<FAutomationSpecBase::FSingleExecuteLatentCommand> local_d0;
  TRawPtrProxy<FAutomationSpecBase::FSpecIt> local_c8 [2];
  TFunction<void___cdecl(void)> local_b8;
  TSharedRef<IAutomationLatentCommand,1> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  iVar6 = (this->DefinitionScopeStack).ArrayNum;
  pFVar7 = (FSingleExecuteLatentCommand *)0x0;
  uVar14 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar14 < iVar6) {
    uVar5 = ~uVar14 >> 0x1f;
  }
  local_d8 = param_3;
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->DefinitionScopeStack).AllocatorInstance.Data;
  lVar12 = (longlong)(this->DefinitionScopeStack).ArrayNum;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar12 * 0x10 + -8);
  lVar12 = *(longlong *)(pFVar1 + lVar12 * 0x10 + -0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  PushDescription(this,param_1);
  this_00 = ::operator_new(0x48);
  if (this_00 != (FSpecIt *)0x0) {
    this_01 = ::operator_new(0x70);
    if (this_01 != (FSingleExecuteLatentCommand *)0x0) {
      local_b8._0_8_ = *(undefined8 *)param_2;
      bVar4 = this->bEnableSkipIfError;
      local_b8._40_8_ = 0;
      if (local_b8._0_8_ != 0) {
        puVar15 = (undefined8 *)&param_2->field_0x10;
        if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
          puVar15 = *(undefined8 **)&param_2->field_0x28;
        }
        (**(code **)*puVar15)(puVar15,&local_b8.field_0x10);
      }
      pFVar7 = FSingleExecuteLatentCommand::FSingleExecuteLatentCommand
                         (this_01,this,&local_b8,bVar4);
      if ((((pFVar7 != (FSingleExecuteLatentCommand *)0x0) && (*(longlong *)&pFVar7->field_0x8 != 0)
           ) && (*(longlong *)&pFVar7->field_0x10 != 0)) &&
         (0 < *(int *)(*(longlong *)&pFVar7->field_0x10 + 8))) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    local_d0.Object = pFVar7;
    pTVar8 = TSharedRef<IAutomationLatentCommand,1>::
             TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FSingleExecuteLatentCommand>
                       (&local_88,&local_d0);
    pFVar9 = ::FString::FString(&local_78,(local_d8->Impl)._File);
    pFVar10 = GetId(this,&local_68);
    pFVar11 = GetDescription(this,&local_58);
    pFVar7 = (FSingleExecuteLatentCommand *)
             FSpecIt::FSpecIt(this_00,pFVar11,pFVar10,pFVar9,(local_d8->Impl)._Line,pTVar8);
  }
  local_c8[0].Object = (FSpecIt *)pFVar7;
  TSharedRef<FAutomationSpecBase::FSpecIt,1>::
  TSharedRef<FAutomationSpecBase::FSpecIt,1><FAutomationSpecBase::FSpecIt>(&local_e8,local_c8);
  if ((*(TSharedRef<FAutomationSpecBase::FSpecIt,1> **)(lVar12 + 0x20) <= &local_e8) &&
     (&local_e8 <
      *(TSharedRef<FAutomationSpecBase::FSpecIt,1> **)(lVar12 + 0x20) + *(int *)(lVar12 + 0x2c))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)(lVar12 + 0x28);
  if (iVar6 == *(int *)(lVar12 + 0x2c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar12 + 0x20),(int *)(lVar12 + 0x2c));
  }
  *(int *)(lVar12 + 0x28) = iVar6 + 1;
  puVar15 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar12 + 0x20));
  *puVar15 = local_e8.Object;
  puVar15[1] = local_e8.SharedReferenceCount.ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt
            (&this->Description,(this->Description).ArrayNum + -1,Default);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (*(longlong *)param_2 != 0) {
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

// PostDefine @ 141ddc3c0

void __thiscall FAutomationSpecBase::PostDefine(FAutomationSpecBase *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  undefined8 *puVar3;
  TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> *this_00;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FSpec *pFVar10;
  FSpec *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  wchar_t *pwVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  TReferenceControllerBase<1> *pTVar18;
  longlong lVar19;
  TSharedRef<IAutomationLatentCommand,1> *pTVar20;
  TSharedRef<FAutomationSpecBase::FSpec,1> *pTVar21;
  TPairInitializer<FString_const_&,TSharedRef<FAutomationSpecBase::FSpec,1>_const_&> local_res10;
  TReferenceControllerBase<1> *local_res20;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TArray<TSharedRef<IAutomationLatentCommand,1>,TSizedDefaultAllocator<32>_> local_b8;
  TSharedRef<FAutomationSpecBase::FSpec,1> local_a8;
  TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> local_98;
  TRawPtrProxy<FAutomationSpecBase::FSpec> local_88;
  longlong local_80;
  FSharedReferencer<1> *local_78;
  undefined8 local_70;
  FSharedReferencer<1> FStack_68;
  FSpec *local_60;
  TSharedRef<FAutomationSpecBase::FSpec,1> *local_58;
  
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = 0;
  local_d0._4_4_ = 0;
  if (((this->RootDefinitionScope).Object == (FSpecDefinitionScope *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_98.Object = (this->RootDefinitionScope).Object;
  this_00 = &(this->RootDefinitionScope).SharedReferenceCount;
  local_98.SharedReferenceCount.ReferenceController = this_00->ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = this_00;
  if ((local_98.Object == (FSpecDefinitionScope *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((local_d8.Data <= &local_98) &&
      (&local_98 <
       (TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)
       (local_d8.Data + (longlong)local_d0._4_4_ * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_d0 == local_d0._4_4_) {
    local_d0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
  }
  lVar12 = (longlong)(int)local_d0;
  local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + 1);
  *(FSpecDefinitionScope **)&local_d8.Data[lVar12 * 0x10].field_0x0 = local_98.Object;
  *(TReferenceControllerBase<1> **)(local_d8.Data + lVar12 * 0x10 + 8) =
       local_98.SharedReferenceCount.ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  do {
    if ((int)local_d0 < 1) {
      local_70 = 0;
      FStack_68.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->RootDefinitionScope !=
          (TSharedPtr<FAutomationSpecBase::FSpecDefinitionScope,1> *)&local_70) {
        (this->RootDefinitionScope).Object = (FSpecDefinitionScope *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_68.ReferenceController);
      piVar1 = &(this->DefinitionScopeStack).ArrayMax;
      pTVar4 = (TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)
               (this->DefinitionScopeStack).AllocatorInstance.Data;
      iVar8 = (this->DefinitionScopeStack).ArrayNum;
      if ((this->DefinitionScopeStack).ArrayMax < 0) {
        DestructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int>(pTVar4,iVar8);
        (this->DefinitionScopeStack).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->DefinitionScopeStack).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int>(pTVar4,iVar8);
        (this->DefinitionScopeStack).ArrayNum = 0;
      }
      this->bHasBeenDefined = true;
      DestructItems<TSharedRef<IAutomationLatentCommand,1>,int>
                ((TSharedRef<IAutomationLatentCommand,1> *)local_c8.Data,(int)local_c0);
      if ((TSharedRef<IAutomationLatentCommand,1> *)local_c8.Data !=
          (TSharedRef<IAutomationLatentCommand,1> *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      DestructItems<TSharedRef<IAutomationLatentCommand,1>,int>
                ((TSharedRef<IAutomationLatentCommand,1> *)local_b8.AllocatorInstance.Data,
                 local_b8.ArrayNum);
      if ((TSharedRef<IAutomationLatentCommand,1> *)local_b8.AllocatorInstance.Data !=
          (TSharedRef<IAutomationLatentCommand,1> *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      DestructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int>
                ((TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)local_d8.Data,
                 (int)local_d0);
      if ((TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)local_d8.Data !=
          (TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      return;
    }
    uVar17 = 0;
    if ((int)((int)local_d0 - 1U) < (int)local_d0) {
      uVar17 = ~((int)local_d0 - 1U) >> 0x1f;
    }
    iVar8 = (int)local_d0;
    if (uVar17 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)local_d0;
    }
    pTVar18 = *(TReferenceControllerBase<1> **)(local_d8.Data + (longlong)iVar8 * 0x10 + -8);
    lVar12 = *(longlong *)&local_d8.Data[(longlong)iVar8 * 0x10 + -0x10].field_0x0;
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res20 = pTVar18;
    local_80 = lVar12;
    if ((&local_b8 ==
         (TArray<TSharedRef<IAutomationLatentCommand,1>,TSizedDefaultAllocator<32>_> *)
         (lVar12 + 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = *(int *)(lVar12 + 0x18);
    if (iVar8 != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar8,&local_b8.AllocatorInstance,&local_b8.ArrayNum,
                         &local_b8.ArrayMax);
      ConstructItems<TSharedRef<IAutomationLatentCommand,1>,TSharedRef<IAutomationLatentCommand,1>,int>
                (local_b8.AllocatorInstance.Data + (longlong)iVar7 * 0x10,
                 (TSharedRef<IAutomationLatentCommand,1> *)
                 (((TArray<TSharedRef<IAutomationLatentCommand,1>,TSizedDefaultAllocator<32>_> *)
                  (lVar12 + 0x10))->AllocatorInstance).Data,iVar8);
    }
    if ((&local_c8 == (ForAnyElementType *)(lVar12 + 0x30)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = *(int *)(lVar12 + 0x38);
    if (iVar8 != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar8,&local_c8,(int *)&local_c0,(int *)((longlong)&local_c0 + 4));
      ConstructItems<TSharedRef<IAutomationLatentCommand,1>,TSharedRef<IAutomationLatentCommand,1>,int>
                (local_c8.Data + (longlong)iVar7 * 0x10,
                 (TSharedRef<IAutomationLatentCommand,1> *)
                 ((ForAnyElementType *)(lVar12 + 0x30))->Data,iVar8);
    }
    uVar17 = 0;
    if (0 < *(int *)(lVar12 + 0x28)) {
      local_res10.Value = (TSharedRef<FAutomationSpecBase::FSpec,1> *)0x0;
      do {
        pTVar21 = local_res10.Value;
        pFVar11 = (FSpec *)0x0;
        uVar15 = 0;
        if ((int)uVar17 < *(int *)(lVar12 + 0x28)) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar18 = *(TReferenceControllerBase<1> **)
                   ((longlong)&(pTVar21->SharedReferenceCount).ReferenceController +
                   *(longlong *)(lVar12 + 0x20));
        puVar3 = *(undefined8 **)((longlong)&pTVar21->Object + *(longlong *)(lVar12 + 0x20));
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar10 = ::operator_new(0x48);
        if (pFVar10 != (FSpec *)0x0) {
          *(undefined8 *)&pFVar10->LineNumber = 0;
          (pFVar10->Id).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->Id).Data.ArrayNum = 0;
          (pFVar10->Id).Data.ArrayMax = 0;
          (pFVar10->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->Description).Data.ArrayNum = 0;
          (pFVar10->Description).Data.ArrayMax = 0;
          (pFVar10->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->Filename).Data.ArrayNum = 0;
          (pFVar10->Filename).Data.ArrayMax = 0;
          (pFVar10->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->Commands).ArrayNum = 0;
          (pFVar10->Commands).ArrayMax = 0;
          pFVar11 = pFVar10;
        }
        local_88.Object = pFVar11;
        TSharedRef<FAutomationSpecBase::FSpec,1>::
        TSharedRef<FAutomationSpecBase::FSpec,1><FAutomationSpecBase::FSpec>(&local_a8,&local_88);
        uVar15 = *(int *)(puVar3 + 3) - 1;
        if (*(int *)(puVar3 + 3) == 0) {
          uVar15 = 0;
        }
        ::FString::AssignRange(&(local_a8.Object)->Id,(wchar_t *)puVar3[2],uVar15);
        iVar8 = *(int *)(puVar3 + 1) + -1;
        if (*(int *)(puVar3 + 1) == 0) {
          iVar8 = 0;
        }
        ::FString::AssignRange(&(local_a8.Object)->Description,(wchar_t *)*puVar3,iVar8);
        iVar8 = *(int *)(puVar3 + 5) + -1;
        if (*(int *)(puVar3 + 5) == 0) {
          iVar8 = 0;
        }
        ::FString::AssignRange(&(local_a8.Object)->Filename,(wchar_t *)puVar3[4],iVar8);
        (local_a8.Object)->LineNumber = *(int *)(puVar3 + 6);
        TArray<TSharedRef<IAutomationLatentCommand,1>,TSizedDefaultAllocator<32>_>::
        Append<TSharedRef<IAutomationLatentCommand,1>,TSizedDefaultAllocator<32>_>
                  (&(local_a8.Object)->Commands,&local_b8);
        pFVar11 = local_a8.Object;
        pFVar16 = (FScriptContainerElement *)(puVar3 + 7);
        pFVar13 = ((local_a8.Object)->Commands).AllocatorInstance.Data;
        if (((pFVar13 <= pFVar16) &&
            (pFVar16 < pFVar13 + (longlong)((local_a8.Object)->Commands).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (pFVar11->Commands).ArrayNum;
        piVar1 = &(pFVar11->Commands).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pFVar11->Commands).AllocatorInstance,piVar1);
        }
        (pFVar11->Commands).ArrayNum = iVar8 + 1;
        pFVar13 = (pFVar11->Commands).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar13 = *(undefined8 *)pFVar16;
        lVar19 = puVar3[8];
        *(longlong *)(pFVar13 + 8) = lVar19;
        if (lVar19 != 0) {
          LOCK();
          *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
          UNLOCK();
        }
        uVar15 = (int)local_c0 - 1;
        if (-1 < (int)uVar15) {
          lVar19 = (longlong)(int)uVar15 << 4;
          while( true ) {
            pFVar11 = local_a8.Object;
            uVar9 = 0;
            if ((int)uVar15 < (int)local_c0) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar13 = (pFVar11->Commands).AllocatorInstance.Data;
            pFVar16 = local_c8.Data + lVar19;
            if (((pFVar13 <= pFVar16) &&
                (pFVar16 < pFVar13 + (longlong)(pFVar11->Commands).ArrayMax * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = (pFVar11->Commands).ArrayNum;
            piVar1 = &(pFVar11->Commands).ArrayMax;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&(pFVar11->Commands).AllocatorInstance,piVar1);
            }
            (pFVar11->Commands).ArrayNum = iVar8 + 1;
            pFVar13 = (pFVar11->Commands).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
            *(undefined8 *)pFVar13 = *(undefined8 *)pFVar16;
            lVar12 = *(longlong *)(pFVar16 + 8);
            *(longlong *)(pFVar13 + 8) = lVar12;
            if (lVar12 != 0) {
              LOCK();
              *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
              UNLOCK();
            }
            lVar19 = lVar19 + -0x10;
            uVar15 = uVar15 - 1;
            lVar12 = local_80;
            pTVar21 = local_res10.Value;
            if ((int)uVar15 < 0) break;
          }
        }
        pFVar11 = local_a8.Object;
        iVar7 = ((local_a8.Object)->Id).Data.ArrayNum;
        iVar8 = iVar7 + -1;
        if (iVar7 == 0) {
          pwVar14 = L"";
          iVar8 = 0;
        }
        else {
          pwVar14 = (wchar_t *)((local_a8.Object)->Id).Data.AllocatorInstance.Data;
        }
        uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar14);
        iVar8 = TSet<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>,FDefaultSetAllocator>
                            *)&this->IdToSpecMap,uVar15,&pFVar11->Id);
        if ((iVar8 != -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IdToSpecMap.Contains(Spec->Id)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\AutomationTest.h"
                               ,0xe39,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_60 = local_a8.Object;
        local_58 = &local_a8;
        TSet<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TSharedRef<FAutomationSpecBase::FSpec,1>_const_&>_>
                  ((TSet<TTuple<FString,TSharedRef<FAutomationSpecBase::FSpec,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FAutomationSpecBase::FSpec,1>,0>,FDefaultSetAllocator>
                    *)&this->IdToSpecMap,&local_res10,(bool *)&local_60);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
        local_res10.Value = pTVar21 + 1;
        uVar17 = uVar17 + 1;
        pTVar18 = local_res20;
      } while ((int)uVar17 < *(int *)(lVar12 + 0x28));
    }
    DestructItems<TSharedRef<FAutomationSpecBase::FSpecIt,1>,int>
              (*(TSharedRef<FAutomationSpecBase::FSpecIt,1> **)(lVar12 + 0x20),
               *(int *)(lVar12 + 0x28));
    *(undefined4 *)(lVar12 + 0x28) = 0;
    if (*(int *)(lVar12 + 0x2c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)(lVar12 + 0x20),0,(int *)(lVar12 + 0x2c));
    }
    if (*(int *)(lVar12 + 0x48) < 1) {
      while (0 < (int)local_d0) {
        uVar17 = 0;
        if ((int)((int)local_d0 - 1U) < (int)local_d0) {
          uVar17 = ~((int)local_d0 - 1U) >> 0x1f;
        }
        iVar8 = (int)local_d0;
        if (uVar17 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (int)local_d0;
        }
        uVar17 = iVar8 - 1;
        pTVar18 = local_res20;
        if (*(int *)(*(longlong *)&local_d8.Data[(longlong)(int)uVar17 * 0x10].field_0x0 + 0x48) !=
            0) break;
        uVar15 = 0;
        if ((int)uVar17 < iVar8) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (int)local_d0;
        }
        pTVar18 = local_res20;
        if (*(int *)(*(longlong *)&local_d8.Data[(longlong)(iVar8 + -1) * 0x10].field_0x0 + 0x28) !=
            0) break;
        if (iVar8 < 1) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (int)local_d0;
        }
        pTVar18 = *(TReferenceControllerBase<1> **)(local_d8.Data + (longlong)iVar8 * 0x10 + -8);
        lVar12 = *(longlong *)&local_d8.Data[(longlong)iVar8 * 0x10 + -0x10].field_0x0;
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
          UNLOCK();
          iVar8 = (int)local_d0;
        }
        pFVar13 = local_d8.Data + (longlong)(iVar8 + -1) * 0x10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar13 + 8));
        iVar8 = ((int)local_d0 - (iVar8 + -1)) + -1;
        if (iVar8 != 0) {
          memmove(pFVar13,pFVar13 + 0x10,(longlong)iVar8 << 4);
        }
        iVar8 = (int)local_d0 + -1;
        local_d0 = CONCAT44(local_d0._4_4_,iVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&local_d8,iVar8,(int *)((longlong)&local_d0 + 4));
        uVar17 = *(uint *)(lVar12 + 0x18);
        if (0 < (int)uVar17) {
          uVar15 = local_b8.ArrayNum - uVar17;
          if (((int)(uVar15 | uVar17) < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar20 = (TSharedRef<IAutomationLatentCommand,1> *)
                    (local_b8.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10);
          DestructItems<TSharedRef<IAutomationLatentCommand,1>,int>(pTVar20,uVar17);
          iVar8 = (local_b8.ArrayNum - uVar15) - uVar17;
          if (iVar8 != 0) {
            memmove(pTVar20,pTVar20 + (int)uVar17,(longlong)iVar8 << 4);
          }
          iVar8 = local_b8.ArrayNum - uVar17;
          local_b8.ArrayNum = iVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&local_b8.AllocatorInstance,iVar8,&local_b8.ArrayMax);
        }
        uVar17 = *(uint *)(lVar12 + 0x38);
        if (0 < (int)uVar17) {
          uVar15 = (int)local_c0 - uVar17;
          if (((int)(uVar15 | uVar17) < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar20 = (TSharedRef<IAutomationLatentCommand,1> *)
                    (local_c8.Data + (longlong)(int)uVar15 * 0x10);
          DestructItems<TSharedRef<IAutomationLatentCommand,1>,int>(pTVar20,uVar17);
          iVar8 = ((int)local_c0 - uVar15) - uVar17;
          if (iVar8 != 0) {
            memmove(pTVar20,pTVar20 + (int)uVar17,(longlong)iVar8 << 4);
          }
          iVar8 = (int)local_c0 - uVar17;
          local_c0 = CONCAT44(local_c0._4_4_,iVar8);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&local_c8,iVar8,(int *)((longlong)&local_c0 + 4));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
        pTVar18 = local_res20;
      }
    }
    else {
      pFVar2 = (ForAnyElementType *)(lVar12 + 0x40);
      if ((&local_d8 == pFVar2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)(lVar12 + 0x48);
      if (iVar8 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar8,&local_d8,(int *)&local_d0,(int *)((longlong)&local_d0 + 4))
        ;
        ConstructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int>
                  (local_d8.Data + (longlong)iVar7 * 0x10,
                   (TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)pFVar2->Data,iVar8);
      }
      DestructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int>
                ((TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)pFVar2->Data,
                 *(int *)(lVar12 + 0x48));
      *(undefined4 *)(lVar12 + 0x48) = 0;
      if (*(int *)(lVar12 + 0x4c) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,pFVar2,0,(int *)(lVar12 + 0x4c));
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    this_00 = local_78;
  } while( true );
}

// PushDescription @ 141ddd500

void __thiscall FAutomationSpecBase::PushDescription(FAutomationSpecBase *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_void___cdecl_FAutomationSpecBase::PushDescription(FString_const&___ptr64)___ptr64'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_void___cdecl_FAutomationSpecBase::PushDescription(FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_void___cdecl_FAutomationSpecBase::PushDescription(FString_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`private:_void___cdecl_FAutomationSpecBase::PushDescription(FString_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name3691,L"AutomationTest/Framework");
      _Init_thread_footer(&`private:_void___cdecl_FAutomationSpecBase::PushDescription(FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `private:_void___cdecl_FAutomationSpecBase::PushDescription(FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name3691,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`private:_void___cdecl_FAutomationSpecBase::PushDescription(FString_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name3691,true);
  pTVar6 = &this->Description;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Description).ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Description).ArrayNum;
  piVar1 = &(this->Description).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->Description).ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10),param_1)
  ;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

