// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 4

// StaticStruct @ 148c4e3d0

UScriptStruct * __cdecl FAutomatedTestTagFilter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestTagFilter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationController();
    Z_Registration_Info_UScriptStruct_FAutomatedTestTagFilter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestTagFilter,(UObject *)pUVar1,
                         L"AutomatedTestTagFilter");
  }
  return Z_Registration_Info_UScriptStruct_FAutomatedTestTagFilter.OuterSingleton;
}

// PassesFilter @ 148c4e410

bool __thiscall
FAutomatedTestTagFilter::PassesFilter
          (FAutomatedTestTagFilter *this,TSharedPtr<IAutomationReport,1> *param_1)

{
  FTextFilterExpressionEvaluator *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  void *local_38 [2];
  ITextFilterExpressionContext local_28;
  FString local_20;
  
  this_00 = (this->TagFilter).Object;
  if (this_00 == (FTextFilterExpressionEvaluator *)0x0) {
    return true;
  }
  if (param_1->Object == (IAutomationReport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar4 = (FString *)(**(code **)(param_1->Object->_padding_ + 0x38))(param_1->Object,local_38);
  local_28 = (ITextFilterExpressionContext)&___7FBasicStringFilterExpressionContext__6B_;
  ::FString::FString(&local_20,pFVar4);
  bVar2 = FTextFilterExpressionEvaluator::TestTextFilter(this_00,&local_28);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  local_28 = (ITextFilterExpressionContext)&___7ITextFilterExpressionContext__6B_;
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  return bVar2;
}

// FAutomatedTestTagFilter @ 148c52920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAutomatedTestTagFilter * __thiscall
FAutomatedTestTagFilter::FAutomatedTestTagFilter(FAutomatedTestTagFilter *this,FString *param_1)

{
  TSharedPtr<FTextFilterExpressionEvaluator,1> *pTVar1;
  FSharedReferencer<1> *this_00;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FAutomatedTestTagFilter *pFVar7;
  FText *pFVar8;
  FTextFilterExpressionEvaluator *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FTextFilterExpressionEvaluator *local_58;
  FSharedReferencer<1> FStack_50;
  FString local_48;
  FText local_38;
  longlong local_28 [2];
  
  pTVar1 = &this->TagFilter;
  this->_padding_ = (longlong)&___7FAutomatedTestTagFilter__6B_;
  this_00 = &(this->TagFilter).SharedReferenceCount;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  this_00->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar1->Object = (FTextFilterExpressionEvaluator *)0x0;
  ::FString::TrimStartAndEnd(param_1,&local_48);
  if (local_48.Data.ArrayNum < 2) {
    if (pTVar1 != (TSharedPtr<FTextFilterExpressionEvaluator,1> *)local_28) {
      pTVar1->Object = (FTextFilterExpressionEvaluator *)0x0;
      pTVar10 = this_00->ReferenceController;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        this_00->ReferenceController = (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar2 = &pTVar10->SharedReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)pTVar10->_padding_)();
          LOCK();
          paVar2 = &pTVar10->WeakReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = ::operator_new(0x388);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      local_58 = ___xmm_00000000000000000000000000000010;
      pFVar9 = (FTextFilterExpressionEvaluator *)&DAT_00000010;
      FStack_50.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFTextFilterExpressionEvaluator___00_SharedPointerInternals__6B_
      ;
      FTextFilterExpressionEvaluator::FTextFilterExpressionEvaluator
                ((FTextFilterExpressionEvaluator *)(pTVar6 + 1),BasicString);
      pFVar9 = (FTextFilterExpressionEvaluator *)(pTVar6 + 1);
      if (pFVar9 == (FTextFilterExpressionEvaluator *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FAutomatedTestTagFilter *)(*pcVar4)();
          return pFVar7;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      FStack_50.ReferenceController = pTVar6;
      pTVar10 = pTVar6;
      local_58 = pFVar9;
    }
    if (pTVar1 != (TSharedPtr<FTextFilterExpressionEvaluator,1> *)&local_58) {
      pTVar1->Object = pFVar9;
      local_58 = (FTextFilterExpressionEvaluator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    if (pTVar1->Object == (FTextFilterExpressionEvaluator *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FAutomatedTestTagFilter *)(*pcVar4)();
        return pFVar7;
      }
    }
    pFVar9 = pTVar1->Object;
    pFVar8 = FText::FromString(&local_38,&local_48);
    FTextFilterExpressionEvaluator::SetFilterText(pFVar9,pFVar8);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FAutomatedTestTagFilter @ 148c53d60

void __thiscall FAutomatedTestTagFilter::~FAutomatedTestTagFilter(FAutomatedTestTagFilter *this)

{
  this->_padding_ = (longlong)&___7FAutomatedTestTagFilter__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TagFilter).SharedReferenceCount.ReferenceController);
  return;
}

