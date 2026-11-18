// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// AddMessage @ 141e8e660

TSharedRef<FTokenizedMessage,1> * __thiscall
FDataValidationContext::AddMessage
          (FDataValidationContext *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,
          FAssetData *param_1,Type param_2,FText *param_3)

{
  int *piVar1;
  int iVar2;
  FTokenizedMessage *this_00;
  longlong *plVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  FText *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FTokenizedMessage,1> *pTVar9;
  IMessageToken *pIVar10;
  TSharedRef<IMessageToken,1> local_78;
  TSharedRef<FTokenizedMessage,1> local_68;
  FText local_58;
  TSharedRef<FTokenizedMessage,1> local_48;
  FText local_38;
  TSharedRef<FTokenizedMessage,1> local_28;
  
  pFVar7 = FText::FText(&local_58);
  FTokenizedMessage::Create(__return_storage_ptr__,param_2,pFVar7);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if ((param_1->PackageName == (FName)0x0) || (param_1->AssetName == (FName)0x0))
  goto LAB_141e8e828;
  this_00 = __return_storage_ptr__->Object;
  pFVar7 = FText::FText(&local_38);
  pTVar8 = ::operator_new(0xb8);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pIVar10 = (IMessageToken *)&DAT_00000010;
LAB_141e8e765:
    if (((*(longlong *)&pIVar10->_padding_ == 0) || (pIVar10->_padding_ == 0)) ||
       (*(int *)(pIVar10->_padding_ + 8) < 1)) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(IMessageToken **)&pIVar10->_padding_ = pIVar10;
      if (pTVar8 != (TReferenceControllerBase<1> *)pIVar10->_padding_) {
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pIVar10->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pIVar10->_padding_ = (longlong)pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFAssetDataToken___00_SharedPointerInternals__6B_;
    FAssetDataToken::FAssetDataToken((FAssetDataToken *)(pTVar8 + 1),param_3._0_1_,param_1,pFVar7);
    pIVar10 = (IMessageToken *)(pTVar8 + 1);
    if (pIVar10 != (IMessageToken *)0x0) goto LAB_141e8e765;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.Object = pIVar10;
  local_78.SharedReferenceCount.ReferenceController = pTVar8;
  FTokenizedMessage::AddToken(this_00,&local_48,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
LAB_141e8e828:
  bVar6 = FText::IsEmpty(param_3);
  if (!bVar6) {
    FTokenizedMessage::AddText(__return_storage_ptr__->Object,&local_28,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  local_68.Object = __return_storage_ptr__->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddMessage(this,&local_68);
  pIVar4 = (param_3->TextData).Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  return __return_storage_ptr__;
}

// AddMessage @ 141e8e8c0

TSharedRef<FTokenizedMessage,1> * __thiscall
FDataValidationContext::AddMessage
          (FDataValidationContext *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,
          Type param_1,FText *param_2)

{
  ITextData *pIVar1;
  TSharedRef<FTokenizedMessage,1> local_18;
  
  FTokenizedMessage::Create(__return_storage_ptr__,param_1,param_2);
  local_18.Object = __return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddMessage(this,&local_18);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// AddMessage @ 141e8e940

void __thiscall
FDataValidationContext::AddMessage
          (FDataValidationContext *this,TSharedRef<FTokenizedMessage,1> *param_1)

{
  int *piVar1;
  FText *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FTokenizedMessage *this_01;
  Type TVar3;
  int iVar4;
  atomic<int> *paVar5;
  
  TVar3 = FTokenizedMessage::GetSeverity(param_1->Object);
  if (TVar3 == Error) {
    this->NumErrors = this->NumErrors + 1;
  }
  else if ((TVar3 == PerformanceWarning) || (TVar3 == Warning)) {
    this->NumWarnings = this->NumWarnings + 1;
  }
  iVar4 = (this->Issues).ArrayNum;
  piVar1 = &(this->Issues).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)this,piVar1);
  }
  (this->Issues).ArrayNum = iVar4 + 1;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  this_01 = param_1->Object;
  this_00 = (FText *)((this->Issues).AllocatorInstance.Data + (longlong)iVar4 * 0x28);
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  FText::FText(this_00);
  TVar3 = FTokenizedMessage::GetSeverity(this_01);
  *(Type *)&this_00[1].TextData.Reference = TVar3;
  *(FTokenizedMessage **)&this_00[1].Flags = this_01;
  this_00[2].TextData.Reference = (ITextData *)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SplitIssues @ 141ebd3c0

void __thiscall
FDataValidationContext::SplitIssues
          (FDataValidationContext *this,TArray<FText,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  longlong lVar2;
  TSharedRef<FTokenizedMessage,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  TSharedRef<FTokenizedMessage,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_78 [8];
  FText *local_70;
  FText local_68;
  longlong local_58;
  TReferenceControllerBase<1> *local_50;
  FText local_48;
  TSharedRef<FTokenizedMessage,1> local_38;
  
  iVar1 = (this->Issues).ArrayNum;
  pFVar11 = (FText *)(this->Issues).AllocatorInstance.Data;
  pFVar12 = (FText *)((longlong)pFVar11 + (longlong)iVar1 * 0x28);
  local_70 = pFVar12;
LAB_141ebd410:
  do {
    if ((this->Issues).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDataValidationContext::FIssue_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) {
      return;
    }
    iVar7 = *(int *)&pFVar11[1].TextData.Reference;
    if ((iVar7 == 1) || (iVar7 == 3)) {
      local_68.TextData.Reference = (pFVar11->TextData).Reference;
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 8))
                  (local_68.TextData.Reference,local_78);
      }
      local_68.Flags = pFVar11->Flags;
      if (*(FTokenizedMessage **)&pFVar11[1].Flags != (FTokenizedMessage *)0x0) {
        pFVar8 = FTokenizedMessage::ToText(*(FTokenizedMessage **)&pFVar11[1].Flags,&local_48);
        FText::operator=(&local_68,pFVar8);
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
      }
      iVar7 = *(int *)&pFVar11[1].TextData.Reference;
      if (iVar7 == 1) {
        pFVar8 = (FText *)(param_2->AllocatorInstance).Data;
        if ((pFVar8 <= &local_68) && (&local_68 < pFVar8 + param_2->ArrayMax)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar7 + 1;
        pFVar8 = (FText *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
LAB_141ebd5d3:
        FText::FText(pFVar8,&local_68);
      }
      else if (iVar7 == 3) {
        pFVar8 = (FText *)(param_1->AllocatorInstance).Data;
        if ((pFVar8 <= &local_68) && (&local_68 < pFVar8 + param_1->ArrayMax)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        pFVar8 = (FText *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
        goto LAB_141ebd5d3;
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    if (param_3 != (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)0x0) {
      lVar2 = *(longlong *)&pFVar11[1].Flags;
      if (lVar2 != 0) {
        local_50 = (TReferenceControllerBase<1> *)pFVar11[2].TextData.Reference;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58 = lVar2;
        if (lVar2 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar10 = (param_3->AllocatorInstance).Data;
        if ((pFVar10 <= (FScriptContainerElement *)&local_58) &&
           ((FScriptContainerElement *)&local_58 < pFVar10 + (longlong)param_3->ArrayMax * 0x10)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar7 = param_3->ArrayNum;
        if (iVar7 == param_3->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar7 + 1;
        pFVar10 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(longlong *)pFVar10 = local_58;
        *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_50;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
        pFVar11 = (FText *)&pFVar11[2].Flags;
        goto LAB_141ebd410;
      }
      pTVar9 = FTokenizedMessage::Create(&local_38,*(Type *)&pFVar11[1].TextData.Reference,pFVar11);
      pTVar3 = (TSharedRef<FTokenizedMessage,1> *)(param_3->AllocatorInstance).Data;
      if ((pTVar3 <= pTVar9) && (pTVar9 < pTVar3 + param_3->ArrayMax)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == param_3->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar7 + 1;
      pFVar10 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(FTokenizedMessage **)pFVar10 = pTVar9->Object;
      pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      pFVar12 = local_70;
    }
    pFVar11 = (FText *)&pFVar11[2].Flags;
  } while( true );
}

