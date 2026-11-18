// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 7

// AddChild @ 142f57e30

void __thiscall FTestData::AddChild(FTestData *this,TSharedRef<FTestData,1> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FTestData *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = (this->Children).AllocatorInstance.Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->Children).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Children).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Children).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(FTestData **)pFVar5 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar5 + 8) = local_10;
  local_10 = (TReferenceControllerBase<1> *)0x0;
  local_18 = (FTestData *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// BinaryProbability @ 142f58dc0

bool __cdecl FTestData::BinaryProbability(int param_1)

{
  int iVar1;
  
  while( true ) {
    if (param_1 < 0) {
      return true;
    }
    iVar1 = rand();
    if (0x3ffe < iVar1) break;
    param_1 = param_1 + -1;
  }
  return false;
}

// GenerateChildren @ 142fc4510

int __cdecl FTestData::GenerateChildren(TSharedRef<FTestData,1> *param_1,int param_2,int param_3)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int *piVar4;
  float fVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FText *pFVar10;
  FTestData *pFVar11;
  FTestData *pFVar12;
  undefined1 local_res10 [16];
  TRawPtrProxy<FTestData> local_res20;
  FTestData *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  TSharedRef<FTestData,1> local_88;
  FText local_78;
  TSharedRef<FTestData,1> local_68 [3];
  
  fVar5 = __real_3ac80190;
  if (-1 < param_2) {
    do {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_78,L"STableViewTesting",L"ChildItem",L"Child Item");
      pFVar11 = ::operator_new(0x28);
      pFVar12 = (FTestData *)0x0;
      if (pFVar11 != (FTestData *)0x0) {
        iVar9 = rand();
        (pFVar11->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar11->Children).ArrayNum = 0;
        (pFVar11->Children).ArrayMax = 0;
        (pFVar11->Name).TextData.Reference = (ITextData *)0x0;
        pIVar1 = (pFVar10->TextData).Reference;
        (pFVar11->Name).TextData.Reference = pIVar1;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
        }
        (pFVar11->Name).Flags = pFVar10->Flags;
        pFVar11->Number = (float)iVar9 * fVar5;
        pFVar12 = pFVar11;
      }
      local_res20.Object = pFVar12;
      TSharedRef<FTestData,1>::TSharedRef<FTestData,1><FTestData>(&local_88,&local_res20);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      FVar6.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
      pFVar11 = local_88.Object;
      pFVar12 = param_1->Object;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTStack_90 = local_88.SharedReferenceCount.ReferenceController;
      local_98 = local_88.Object;
      pFVar2 = (pFVar12->Children).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 <
           pFVar2 + (longlong)(pFVar12->Children).ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
      iVar9 = (pFVar12->Children).ArrayNum;
      piVar4 = &(pFVar12->Children).ArrayMax;
      if (iVar9 == *piVar4) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)pFVar12,piVar4);
      }
      (pFVar12->Children).ArrayNum = iVar9 + 1;
      pFVar2 = (pFVar12->Children).AllocatorInstance.Data;
      *(FTestData **)(pFVar2 + (longlong)iVar9 * 0x10) = local_98;
      *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar9 * 0x10 + 8) = pTStack_90;
      pTStack_90 = (TReferenceControllerBase<1> *)0x0;
      local_98 = (FTestData *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      param_2 = param_2 + -1;
      if (-param_3 + 5 < 0) {
LAB_142fc474b:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar6.ReferenceController);
        break;
      }
      iVar9 = rand();
      if (iVar9 < 0x3fff) {
        bVar7 = BinaryProbability(-param_3 + 4);
        if (!bVar7) goto LAB_142fc4727;
LAB_142fc4746:
        if (bVar7 != false) goto LAB_142fc474b;
      }
      else {
        bVar7 = false;
LAB_142fc4727:
        if ((-1 < param_3) &&
           ((iVar9 = rand(), 0x3ffe < iVar9 || (bVar8 = BinaryProbability(param_3 + -1), !bVar8))))
        goto LAB_142fc4746;
        local_68[0].Object = pFVar11;
        local_68[0].SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
        if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar6.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        param_2 = GenerateChildren(local_68,param_2,param_3 + 1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
    } while (-1 < param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return param_2;
}

// InsertRecursive @ 142fe27a0

bool __cdecl
FTestData::InsertRecursive
          (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<FTestData,1> *param_2,TSharedRef<FTestData,1> *param_3,EItemDropZone param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FTestData *pFVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  TSharedPtr<FTestData,1> local_58;
  TSharedPtr<FTestData,1> local_48;
  TSharedPtr<FTestData,1> local_38;
  
  pFVar6 = param_3->Object;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar2;
  do {
    if (pFVar10 == pFVar2 + (longlong)param_1->ArrayNum * 0x10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
LAB_142fe280e:
      iVar7 = param_1->ArrayNum;
      uVar11 = 0;
      uVar12 = uVar11;
      if (0 < iVar7) {
        do {
          uVar8 = (uint)uVar11;
          uVar9 = 0;
          if ((int)uVar8 < iVar7) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          if ((*(longlong *)(pFVar2 + uVar12) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          bVar4 = InsertRecursive(*(TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> **)
                                   (pFVar2 + uVar12),param_2,param_3,param_4);
          if (bVar4) {
            return true;
          }
          iVar7 = param_1->ArrayNum;
          uVar11 = (ulonglong)(uVar8 + 1);
          uVar12 = uVar12 + 0x10;
        } while ((int)(uVar8 + 1) < iVar7);
      }
      return false;
    }
    if (*(FTestData **)pFVar10 == pFVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar2 >> 4);
      if (uVar9 != 0xffffffff) {
        if (param_4 == AboveItem) {
          local_58.Object = param_2->Object;
          local_58.SharedReferenceCount.ReferenceController =
               (param_2->SharedReferenceCount).ReferenceController;
          if (local_58.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>::Insert
                    (param_1,&local_58,uVar9);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          return true;
        }
        if (param_4 == BelowItem) {
          local_48.Object = param_2->Object;
          local_48.SharedReferenceCount.ReferenceController =
               (param_2->SharedReferenceCount).ReferenceController;
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>::Insert
                    (param_1,&local_48,uVar9 + 1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
          return true;
        }
        if ((param_4 != OntoItem) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4342535553451818886>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
                               ,0x7a,"RelativeLocation == EItemDropZone::OntoItem"), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar8 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar6 = TSharedPtr<FTestData,1>::operator->
                           ((TSharedPtr<FTestData,1> *)
                            ((param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
        local_38.Object = param_2->Object;
        local_38.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>::Insert
                  (&pFVar6->Children,&local_38,0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        return true;
      }
      goto LAB_142fe280e;
    }
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// Make @ 142fe5980

TSharedRef<FTestData,1> * __cdecl
FTestData::Make(TSharedRef<FTestData,1> *__return_storage_ptr__,FText *param_1)

{
  ITextData *pIVar1;
  int iVar2;
  FTestData *pFVar3;
  float fVar4;
  TRawPtrProxy<FTestData> local_res8;
  
  pFVar3 = ::operator_new(0x28);
  if (pFVar3 != (FTestData *)0x0) {
    iVar2 = rand();
    (pFVar3->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Children).ArrayNum = 0;
    (pFVar3->Children).ArrayMax = 0;
    (pFVar3->Name).TextData.Reference = (ITextData *)0x0;
    pIVar1 = (param_1->TextData).Reference;
    (pFVar3->Name).TextData.Reference = pIVar1;
    fVar4 = (float)iVar2 * __real_3ac80190;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res8);
    }
    (pFVar3->Name).Flags = param_1->Flags;
    pFVar3->Number = fVar4;
  }
  local_res8.Object = pFVar3;
  TSharedRef<FTestData,1>::TSharedRef<FTestData,1><FTestData>(__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// RemoveRecursive @ 143008460

bool __cdecl
FTestData::RemoveRecursive
          (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FTestData,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  if (pFVar9 != pFVar9 + (longlong)iVar4 * 0x10) {
    pFVar7 = pFVar9;
    do {
      if (*(FTestData **)pFVar7 == param_2->Object) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar9 >> 4);
        if (uVar6 != 0xffffffff) {
          uVar5 = 0;
          if ((int)uVar6 < iVar4) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar9 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(pFVar9 + 8));
          iVar4 = param_1->ArrayNum + ~uVar6;
          if (iVar4 != 0) {
            memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar4 << 4);
          }
          param_1->ArrayNum = param_1->ArrayNum + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
          return true;
        }
        break;
      }
      pFVar7 = pFVar7 + 0x10;
    } while (pFVar7 != pFVar9 + (longlong)iVar4 * 0x10);
  }
  uVar8 = 0;
  uVar10 = uVar8;
  if (0 < iVar4) {
    do {
      uVar5 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar9 = (param_1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar9 + uVar10) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = RemoveRecursive(*(TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> **)
                               (pFVar9 + uVar10),param_2);
      if (bVar2) {
        return true;
      }
      uVar8 = (ulonglong)(uVar5 + 1);
      uVar10 = uVar10 + 0x10;
    } while ((int)(uVar5 + 1) < param_1->ArrayNum);
  }
  return false;
}

// SetName @ 14300d4c0

void __thiscall FTestData::SetName(FTestData *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Name).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Name).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    (this->Name).Flags = param_1->Flags;
    return;
  }
  (this->Name).Flags = param_1->Flags;
  return;
}

