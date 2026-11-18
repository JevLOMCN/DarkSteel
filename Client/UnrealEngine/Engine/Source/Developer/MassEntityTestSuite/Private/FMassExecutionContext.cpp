// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 28

// GetChunkFragment<FTestChunkFragment_Int> @ 1470de940

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestChunkFragment_Int * __thiscall
FMassExecutionContext::GetChunkFragment<FTestChunkFragment_Int>(FMassExecutionContext *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar6;
  FTestChunkFragment_Int *pFVar7;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar8;
  FName local_res8;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Int,(UObject *)pUVar5,
                         L"TestChunkFragment_Int");
  }
  FVar8 = (this->ChunkFragmentViews).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
    FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
            &this->ChunkFragmentViews;
  }
  FVar6 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
          ((longlong)(this->ChunkFragmentViews).ArrayNum * 0x20 + (longlong)FVar8);
  for (; FVar8 != FVar6;
      FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
              ((longlong)FVar8 + 0x20)) {
    if (*(UScriptStruct **)FVar8 ==
        Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton) {
      pFVar7 = *(FTestChunkFragment_Int **)((longlong)FVar8 + 0x18);
      if ((pFVar7 == (FTestChunkFragment_Int *)0x0) ||
         (pUVar2 = *(UScriptStruct **)((longlong)FVar8 + 0x10), pUVar2 == (UScriptStruct *)0x0)) {
LAB_1470deaa0:
        pFVar7 = (FTestChunkFragment_Int *)0x0;
      }
      else {
        if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Int,(UObject *)pUVar5,
                               L"TestChunkFragment_Int");
        }
        if (pUVar2 != Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton) {
          if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
            Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Int,(UObject *)pUVar5,
                                 L"TestChunkFragment_Int");
            if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
                (UScriptStruct *)0x0) goto LAB_1470deaa0;
          }
          iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton)->
                       _padding_;
          if (((int)pUVar2->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton)->_padding_)
             ) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_1470deaa0;
        }
      }
      if (pFVar7 != (FTestChunkFragment_Int *)0x0) {
        return pFVar7;
      }
      break;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Int,(UObject *)pUVar5,
                         L"TestChunkFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      ::FString::FString(&local_18,L"None");
      goto LAB_1470dead1;
    }
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_18);
LAB_1470dead1:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ChunkFragment",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x16e,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    return (FTestChunkFragment_Int *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pFVar7 = (FTestChunkFragment_Int *)(*pcVar3)();
  return pFVar7;
}

// GetFragmentView<FFarmWaterFragment> @ 1470df250

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FFarmWaterFragment_const_,int> * __thiscall
FMassExecutionContext::GetFragmentView<FFarmWaterFragment>
          (FMassExecutionContext *this,
          TArrayView<FFarmWaterFragment_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  TArrayView<FFarmWaterFragment_const_,int> *pTVar5;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  FName local_res8;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment,(UObject *)pUVar4,
                         L"FarmWaterFragment");
  }
  FVar6 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar6 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar7 = FVar6;
  }
  FVar6 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar7);
  for (; FVar7 != FVar6;
      FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )((longlong)FVar7 + 0x20)) {
    if (*(UScriptStruct **)FVar7 ==
        Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton) goto LAB_1470df371;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0
  ;
  if (Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment,(UObject *)pUVar4,
                         L"FarmWaterFragment");
    if (Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton == (UScriptStruct *)0x0)
    {
      ::FString::FString(&local_18,L"None");
      goto LAB_1470df322;
    }
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_18);
LAB_1470df322:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1bd,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FFarmWaterFragment_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
LAB_1470df371:
  __return_storage_ptr__->DataPtr = *(FFarmWaterFragment **)((longlong)FVar7 + 0x10);
  iVar1 = *(int *)((longlong)FVar7 + 0x18);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FFarmWaterFragment_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// GetFragmentView<FMassChildOfFragment> @ 1470df3d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FMassChildOfFragment_const_,int> * __thiscall
FMassExecutionContext::GetFragmentView<FMassChildOfFragment>
          (FMassExecutionContext *this,
          TArrayView<FMassChildOfFragment_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TArrayView<FMassChildOfFragment_const_,int> *pTVar5;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  FName local_res8;
  FString local_18;
  
  pUVar4 = FMassChildOfFragment::StaticStruct();
  FVar6 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar6 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar7 = FVar6;
  }
  FVar6 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar7);
  for (; FVar7 != FVar6;
      FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )((longlong)FVar7 + 0x20)) {
    if (*(UScriptStruct **)FVar7 == pUVar4) goto LAB_1470df4a8;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0
  ;
  pUVar4 = FMassChildOfFragment::StaticStruct();
  if (pUVar4 == (UScriptStruct *)0x0) {
    ::FString::FString(&local_18,L"None");
  }
  else {
    local_res8 = (FName)pUVar4->_padding_;
    ::FName::ToString(&local_res8,&local_18);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1bd,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FMassChildOfFragment_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
LAB_1470df4a8:
  __return_storage_ptr__->DataPtr = *(FMassChildOfFragment **)((longlong)FVar7 + 0x10);
  iVar1 = *(int *)((longlong)FVar7 + 0x18);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FMassChildOfFragment_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// GetFragmentView<FTestFragment_Array> @ 1470df500

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FTestFragment_Array_const_,int> * __thiscall
FMassExecutionContext::GetFragmentView<FTestFragment_Array>
          (FMassExecutionContext *this,
          TArrayView<FTestFragment_Array_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  TArrayView<FTestFragment_Array_const_,int> *pTVar5;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  FName local_res8;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Array,(UObject *)pUVar4,
                         L"TestFragment_Array");
  }
  FVar6 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar6 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar7 = FVar6;
  }
  FVar6 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar7);
  for (; FVar7 != FVar6;
      FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )((longlong)FVar7 + 0x20)) {
    if (*(UScriptStruct **)FVar7 ==
        Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton) goto LAB_1470df621;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0
  ;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Array,(UObject *)pUVar4,
                         L"TestFragment_Array");
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton == (UScriptStruct *)0x0
       ) {
      ::FString::FString(&local_18,L"None");
      goto LAB_1470df5d2;
    }
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_18);
LAB_1470df5d2:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1bd,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FTestFragment_Array_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
LAB_1470df621:
  __return_storage_ptr__->DataPtr = *(FTestFragment_Array **)((longlong)FVar7 + 0x10);
  iVar1 = *(int *)((longlong)FVar7 + 0x18);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FTestFragment_Array_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// GetFragmentView<FTestFragment_Bool> @ 1470df680

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FTestFragment_Bool_const_,int> * __thiscall
FMassExecutionContext::GetFragmentView<FTestFragment_Bool>
          (FMassExecutionContext *this,
          TArrayView<FTestFragment_Bool_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  TArrayView<FTestFragment_Bool_const_,int> *pTVar5;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  FName local_res8;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar4,
                         L"TestFragment_Bool");
  }
  FVar6 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar6 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar7 = FVar6;
  }
  FVar6 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar7);
  for (; FVar7 != FVar6;
      FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )((longlong)FVar7 + 0x20)) {
    if (*(UScriptStruct **)FVar7 ==
        Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton) goto LAB_1470df7a1;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0
  ;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar4,
                         L"TestFragment_Bool");
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0)
    {
      ::FString::FString(&local_18,L"None");
      goto LAB_1470df752;
    }
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_18);
LAB_1470df752:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1bd,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FTestFragment_Bool_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
LAB_1470df7a1:
  __return_storage_ptr__->DataPtr = *(FTestFragment_Bool **)((longlong)FVar7 + 0x10);
  iVar1 = *(int *)((longlong)FVar7 + 0x18);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FTestFragment_Bool_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// GetFragmentView<FTestFragment_Float> @ 1470df800

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FTestFragment_Float_const_,int> * __thiscall
FMassExecutionContext::GetFragmentView<FTestFragment_Float>
          (FMassExecutionContext *this,
          TArrayView<FTestFragment_Float_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  TArrayView<FTestFragment_Float_const_,int> *pTVar5;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  FName local_res8;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar4,
                         L"TestFragment_Float");
  }
  FVar6 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar6 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar7 = FVar6;
  }
  FVar6 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar7);
  for (; FVar7 != FVar6;
      FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )((longlong)FVar7 + 0x20)) {
    if (*(UScriptStruct **)FVar7 ==
        Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton) goto LAB_1470df921;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0
  ;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar4,
                         L"TestFragment_Float");
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0
       ) {
      ::FString::FString(&local_18,L"None");
      goto LAB_1470df8d2;
    }
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_18);
LAB_1470df8d2:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1bd,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FTestFragment_Float_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
LAB_1470df921:
  __return_storage_ptr__->DataPtr = *(FTestFragment_Float **)((longlong)FVar7 + 0x10);
  iVar1 = *(int *)((longlong)FVar7 + 0x18);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FTestFragment_Float_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// GetFragmentView<FTestFragment_Int> @ 1470df980

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FTestFragment_Int_const_,int> * __thiscall
FMassExecutionContext::GetFragmentView<FTestFragment_Int>
          (FMassExecutionContext *this,
          TArrayView<FTestFragment_Int_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  TArrayView<FTestFragment_Int_const_,int> *pTVar5;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  FName local_res8;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar4,
                         L"TestFragment_Int");
  }
  FVar6 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar6 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar7 = FVar6;
  }
  FVar6 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar7);
  for (; FVar7 != FVar6;
      FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )((longlong)FVar7 + 0x20)) {
    if (*(UScriptStruct **)FVar7 ==
        Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton) goto LAB_1470dfaa1;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0
  ;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar4,
                         L"TestFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0)
    {
      ::FString::FString(&local_18,L"None");
      goto LAB_1470dfa52;
    }
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_18);
LAB_1470dfa52:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1bd,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FTestFragment_Int_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
LAB_1470dfaa1:
  __return_storage_ptr__->DataPtr = *(FTestFragment_Int **)((longlong)FVar7 + 0x10);
  iVar1 = *(int *)((longlong)FVar7 + 0x18);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FTestFragment_Int_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// GetFragmentView<FTestFragment_Large> @ 1470dfb00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FTestFragment_Large_const_,int> * __thiscall
FMassExecutionContext::GetFragmentView<FTestFragment_Large>
          (FMassExecutionContext *this,
          TArrayView<FTestFragment_Large_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  TArrayView<FTestFragment_Large_const_,int> *pTVar5;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  FName local_res8;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Large,(UObject *)pUVar4,
                         L"TestFragment_Large");
  }
  FVar6 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar6 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar7 = FVar6;
  }
  FVar6 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar7);
  for (; FVar7 != FVar6;
      FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )((longlong)FVar7 + 0x20)) {
    if (*(UScriptStruct **)FVar7 ==
        Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton) goto LAB_1470dfc21;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0
  ;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Large,(UObject *)pUVar4,
                         L"TestFragment_Large");
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton == (UScriptStruct *)0x0
       ) {
      ::FString::FString(&local_18,L"None");
      goto LAB_1470dfbd2;
    }
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_18);
LAB_1470dfbd2:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1bd,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FTestFragment_Large_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
LAB_1470dfc21:
  __return_storage_ptr__->DataPtr = *(FTestFragment_Large **)((longlong)FVar7 + 0x10);
  iVar1 = *(int *)((longlong)FVar7 + 0x18);
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<FTestFragment_Large_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// GetMutableFragmentView<FFarmFlowerFragment> @ 1470e00c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FFarmFlowerFragment,int> * __thiscall
FMassExecutionContext::GetMutableFragmentView<FFarmFlowerFragment>
          (FMassExecutionContext *this,TArrayView<FFarmFlowerFragment,int> *__return_storage_ptr__)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  TArrayView<FFarmFlowerFragment,int> *pTVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar8;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmFlowerFragment,(UObject *)pUVar5,
                         L"FarmFlowerFragment");
  }
  FVar7 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar7 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar8 = FVar7;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar8);
  do {
    if (FVar8 == FVar7) {
      FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )0x0;
      if (Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton)
                             ->_padding_;
        ::FName::ToString(&local_res10,&local_18);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b3,
                         L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                        );
LAB_1470e022d:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4 != false) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FFarmFlowerFragment,int> *)(*pcVar3)();
        return pTVar6;
      }
LAB_1470e0241:
      __return_storage_ptr__->DataPtr = *(FFarmFlowerFragment **)((longlong)FVar8 + 0x10);
      iVar1 = *(int *)((longlong)FVar8 + 0x18);
      __return_storage_ptr__->ArrayNum = iVar1;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FFarmFlowerFragment,int> *)(*pcVar3)();
        return pTVar6;
      }
      return __return_storage_ptr__;
    }
    pUVar2 = *(UScriptStruct **)FVar8;
    if (pUVar2 == Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton) {
      if (*(uchar *)((longlong)FVar8 + 8) == '\x02') goto LAB_1470e0241;
      if (pUVar2 == (UScriptStruct *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,&local_28);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View == nullptr || View->Requirement.AccessMode == EMassFragmentAccess::ReadWrite"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b4,
                         L"Requested fragment type not bound for writing, type %s. Make sure it has been listed as required in ReadWrite mode."
                        );
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      goto LAB_1470e022d;
    }
    FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
            ((longlong)FVar8 + 0x20);
  } while( true );
}

// GetMutableFragmentView<FFarmVisualFragment> @ 1470e02a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FFarmVisualFragment,int> * __thiscall
FMassExecutionContext::GetMutableFragmentView<FFarmVisualFragment>
          (FMassExecutionContext *this,TArrayView<FFarmVisualFragment,int> *__return_storage_ptr__)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  TArrayView<FFarmVisualFragment,int> *pTVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar8;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualFragment,(UObject *)pUVar5,
                         L"FarmVisualFragment");
  }
  FVar7 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar7 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar8 = FVar7;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar8);
  do {
    if (FVar8 == FVar7) {
      FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )0x0;
      if (Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton)
                             ->_padding_;
        ::FName::ToString(&local_res10,&local_18);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b3,
                         L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                        );
LAB_1470e040d:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4 != false) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FFarmVisualFragment,int> *)(*pcVar3)();
        return pTVar6;
      }
LAB_1470e0421:
      __return_storage_ptr__->DataPtr = *(FFarmVisualFragment **)((longlong)FVar8 + 0x10);
      iVar1 = *(int *)((longlong)FVar8 + 0x18);
      __return_storage_ptr__->ArrayNum = iVar1;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FFarmVisualFragment,int> *)(*pcVar3)();
        return pTVar6;
      }
      return __return_storage_ptr__;
    }
    pUVar2 = *(UScriptStruct **)FVar8;
    if (pUVar2 == Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton) {
      if (*(uchar *)((longlong)FVar8 + 8) == '\x02') goto LAB_1470e0421;
      if (pUVar2 == (UScriptStruct *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,&local_28);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View == nullptr || View->Requirement.AccessMode == EMassFragmentAccess::ReadWrite"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b4,
                         L"Requested fragment type not bound for writing, type %s. Make sure it has been listed as required in ReadWrite mode."
                        );
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      goto LAB_1470e040d;
    }
    FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
            ((longlong)FVar8 + 0x20);
  } while( true );
}

// GetMutableFragmentView<FFarmWaterFragment> @ 1470e0480

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FFarmWaterFragment,int> * __thiscall
FMassExecutionContext::GetMutableFragmentView<FFarmWaterFragment>
          (FMassExecutionContext *this,TArrayView<FFarmWaterFragment,int> *__return_storage_ptr__)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  TArrayView<FFarmWaterFragment,int> *pTVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar8;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment,(UObject *)pUVar5,
                         L"FarmWaterFragment");
  }
  FVar7 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar7 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar8 = FVar7;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar8);
  do {
    if (FVar8 == FVar7) {
      FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )0x0;
      if (Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton)->
                             _padding_;
        ::FName::ToString(&local_res10,&local_18);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b3,
                         L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                        );
LAB_1470e05ed:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4 != false) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FFarmWaterFragment,int> *)(*pcVar3)();
        return pTVar6;
      }
LAB_1470e0601:
      __return_storage_ptr__->DataPtr = *(FFarmWaterFragment **)((longlong)FVar8 + 0x10);
      iVar1 = *(int *)((longlong)FVar8 + 0x18);
      __return_storage_ptr__->ArrayNum = iVar1;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FFarmWaterFragment,int> *)(*pcVar3)();
        return pTVar6;
      }
      return __return_storage_ptr__;
    }
    pUVar2 = *(UScriptStruct **)FVar8;
    if (pUVar2 == Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton) {
      if (*(uchar *)((longlong)FVar8 + 8) == '\x02') goto LAB_1470e0601;
      if (pUVar2 == (UScriptStruct *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,&local_28);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View == nullptr || View->Requirement.AccessMode == EMassFragmentAccess::ReadWrite"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b4,
                         L"Requested fragment type not bound for writing, type %s. Make sure it has been listed as required in ReadWrite mode."
                        );
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      goto LAB_1470e05ed;
    }
    FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
            ((longlong)FVar8 + 0x20);
  } while( true );
}

// GetMutableFragmentView<FHarvestTimerFragment> @ 1470e0660

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FHarvestTimerFragment,int> * __thiscall
FMassExecutionContext::GetMutableFragmentView<FHarvestTimerFragment>
          (FMassExecutionContext *this,TArrayView<FHarvestTimerFragment,int> *__return_storage_ptr__
          )

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  TArrayView<FHarvestTimerFragment,int> *pTVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar8;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar5,
                         L"HarvestTimerFragment");
  }
  FVar7 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar7 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar8 = FVar7;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar8);
  do {
    if (FVar8 == FVar7) {
      FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )0x0;
      if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton
                             )->_padding_;
        ::FName::ToString(&local_res10,&local_18);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b3,
                         L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                        );
LAB_1470e07cd:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4 != false) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FHarvestTimerFragment,int> *)(*pcVar3)();
        return pTVar6;
      }
LAB_1470e07e1:
      __return_storage_ptr__->DataPtr = *(FHarvestTimerFragment **)((longlong)FVar8 + 0x10);
      iVar1 = *(int *)((longlong)FVar8 + 0x18);
      __return_storage_ptr__->ArrayNum = iVar1;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FHarvestTimerFragment,int> *)(*pcVar3)();
        return pTVar6;
      }
      return __return_storage_ptr__;
    }
    pUVar2 = *(UScriptStruct **)FVar8;
    if (pUVar2 == Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton) {
      if (*(uchar *)((longlong)FVar8 + 8) == '\x02') goto LAB_1470e07e1;
      if (pUVar2 == (UScriptStruct *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,&local_28);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View == nullptr || View->Requirement.AccessMode == EMassFragmentAccess::ReadWrite"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b4,
                         L"Requested fragment type not bound for writing, type %s. Make sure it has been listed as required in ReadWrite mode."
                        );
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      goto LAB_1470e07cd;
    }
    FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
            ((longlong)FVar8 + 0x20);
  } while( true );
}

// GetMutableFragmentView<FTestFragment_Bool> @ 1470e0840

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FTestFragment_Bool,int> * __thiscall
FMassExecutionContext::GetMutableFragmentView<FTestFragment_Bool>
          (FMassExecutionContext *this,TArrayView<FTestFragment_Bool,int> *__return_storage_ptr__)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  TArrayView<FTestFragment_Bool,int> *pTVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar8;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar5,
                         L"TestFragment_Bool");
  }
  FVar7 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar7 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar8 = FVar7;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar8);
  do {
    if (FVar8 == FVar7) {
      FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )0x0;
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton ==
          (UScriptStruct *)0x0) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton)->
                             _padding_;
        ::FName::ToString(&local_res10,&local_18);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b3,
                         L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                        );
LAB_1470e09ad:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4 != false) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FTestFragment_Bool,int> *)(*pcVar3)();
        return pTVar6;
      }
LAB_1470e09c1:
      __return_storage_ptr__->DataPtr = *(FTestFragment_Bool **)((longlong)FVar8 + 0x10);
      iVar1 = *(int *)((longlong)FVar8 + 0x18);
      __return_storage_ptr__->ArrayNum = iVar1;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FTestFragment_Bool,int> *)(*pcVar3)();
        return pTVar6;
      }
      return __return_storage_ptr__;
    }
    pUVar2 = *(UScriptStruct **)FVar8;
    if (pUVar2 == Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton) {
      if (*(uchar *)((longlong)FVar8 + 8) == '\x02') goto LAB_1470e09c1;
      if (pUVar2 == (UScriptStruct *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,&local_28);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View == nullptr || View->Requirement.AccessMode == EMassFragmentAccess::ReadWrite"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b4,
                         L"Requested fragment type not bound for writing, type %s. Make sure it has been listed as required in ReadWrite mode."
                        );
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      goto LAB_1470e09ad;
    }
    FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
            ((longlong)FVar8 + 0x20);
  } while( true );
}

// GetMutableFragmentView<FTestFragment_Float> @ 1470e0a20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FTestFragment_Float,int> * __thiscall
FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>
          (FMassExecutionContext *this,TArrayView<FTestFragment_Float,int> *__return_storage_ptr__)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  TArrayView<FTestFragment_Float,int> *pTVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar8;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar5,
                         L"TestFragment_Float");
  }
  FVar7 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar7 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar8 = FVar7;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar8);
  do {
    if (FVar8 == FVar7) {
      FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )0x0;
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
          (UScriptStruct *)0x0) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)
                             ->_padding_;
        ::FName::ToString(&local_res10,&local_18);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b3,
                         L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                        );
LAB_1470e0b8d:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4 != false) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FTestFragment_Float,int> *)(*pcVar3)();
        return pTVar6;
      }
LAB_1470e0ba1:
      __return_storage_ptr__->DataPtr = *(FTestFragment_Float **)((longlong)FVar8 + 0x10);
      iVar1 = *(int *)((longlong)FVar8 + 0x18);
      __return_storage_ptr__->ArrayNum = iVar1;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FTestFragment_Float,int> *)(*pcVar3)();
        return pTVar6;
      }
      return __return_storage_ptr__;
    }
    pUVar2 = *(UScriptStruct **)FVar8;
    if (pUVar2 == Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton) {
      if (*(uchar *)((longlong)FVar8 + 8) == '\x02') goto LAB_1470e0ba1;
      if (pUVar2 == (UScriptStruct *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,&local_28);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View == nullptr || View->Requirement.AccessMode == EMassFragmentAccess::ReadWrite"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b4,
                         L"Requested fragment type not bound for writing, type %s. Make sure it has been listed as required in ReadWrite mode."
                        );
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      goto LAB_1470e0b8d;
    }
    FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
            ((longlong)FVar8 + 0x20);
  } while( true );
}

// GetMutableFragmentView<FTestFragment_Int> @ 1470e0c00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FTestFragment_Int,int> * __thiscall
FMassExecutionContext::GetMutableFragmentView<FTestFragment_Int>
          (FMassExecutionContext *this,TArrayView<FTestFragment_Int,int> *__return_storage_ptr__)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  TArrayView<FTestFragment_Int,int> *pTVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar8;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar5,
                         L"TestFragment_Int");
  }
  FVar7 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar7 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar8 = FVar7;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar8);
  do {
    if (FVar8 == FVar7) {
      FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )0x0;
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0
         ) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton)->
                             _padding_;
        ::FName::ToString(&local_res10,&local_18);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b3,
                         L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                        );
LAB_1470e0d6d:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4 != false) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FTestFragment_Int,int> *)(*pcVar3)();
        return pTVar6;
      }
LAB_1470e0d81:
      __return_storage_ptr__->DataPtr = *(FTestFragment_Int **)((longlong)FVar8 + 0x10);
      iVar1 = *(int *)((longlong)FVar8 + 0x18);
      __return_storage_ptr__->ArrayNum = iVar1;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FTestFragment_Int,int> *)(*pcVar3)();
        return pTVar6;
      }
      return __return_storage_ptr__;
    }
    pUVar2 = *(UScriptStruct **)FVar8;
    if (pUVar2 == Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton) {
      if (*(uchar *)((longlong)FVar8 + 8) == '\x02') goto LAB_1470e0d81;
      if (pUVar2 == (UScriptStruct *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,&local_28);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("View == nullptr || View->Requirement.AccessMode == EMassFragmentAccess::ReadWrite"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                         ,0x1b4,
                         L"Requested fragment type not bound for writing, type %s. Make sure it has been listed as required in ReadWrite mode."
                        );
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      goto LAB_1470e0d6d;
    }
    FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
            ((longlong)FVar8 + 0x20);
  } while( true );
}

// GetMutableSubsystem<UMassTestEngineSubsystem,void> @ 1470e0fe0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassTestEngineSubsystem * __thiscall
FMassExecutionContext::GetMutableSubsystem<UMassTestEngineSubsystem,void>
          (FMassExecutionContext *this)

{
  bool bVar1;
  uint uVar2;
  UMassTestEngineSubsystem *pUVar3;
  undefined1 local_res8 [8];
  
  uVar2 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          GetTypeIndex<UMassTestEngineSubsystem>();
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&(this->SubsystemAccess).MutableSubsystemsBitSet,uVar2
                    );
  if (!bVar1) {
    bVar1 = `FMassSubsystemAccess::GetMutableSubsystem<UMassTestEngineSubsystem,void>'::__l3::
            <lambda_1>::operator()(local_res8);
    if (!bVar1) {
      return (UMassTestEngineSubsystem *)0x0;
    }
  }
  pUVar3 = FMassSubsystemAccess::GetSubsystemInternal<UMassTestEngineSubsystem>
                     (&this->SubsystemAccess,uVar2);
  return pUVar3;
}

// GetMutableSubsystem<UMassTestGameInstanceSubsystem,void> @ 1470e1040

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassTestGameInstanceSubsystem * __thiscall
FMassExecutionContext::GetMutableSubsystem<UMassTestGameInstanceSubsystem,void>
          (FMassExecutionContext *this)

{
  bool bVar1;
  uint uVar2;
  UMassTestGameInstanceSubsystem *pUVar3;
  undefined1 local_res8 [8];
  
  uVar2 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          GetTypeIndex<UMassTestGameInstanceSubsystem>();
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&(this->SubsystemAccess).MutableSubsystemsBitSet,uVar2
                    );
  if (!bVar1) {
    bVar1 = `FMassSubsystemAccess::GetMutableSubsystem<UMassTestGameInstanceSubsystem,void>'::__l3::
            <lambda_1>::operator()(local_res8);
    if (!bVar1) {
      return (UMassTestGameInstanceSubsystem *)0x0;
    }
  }
  pUVar3 = FMassSubsystemAccess::GetSubsystemInternal<UMassTestGameInstanceSubsystem>
                     (&this->SubsystemAccess,uVar2);
  return pUVar3;
}

// GetMutableSubsystem<UMassTestLocalPlayerSubsystem,void> @ 1470e10a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassTestLocalPlayerSubsystem * __thiscall
FMassExecutionContext::GetMutableSubsystem<UMassTestLocalPlayerSubsystem,void>
          (FMassExecutionContext *this)

{
  bool bVar1;
  uint uVar2;
  UMassTestLocalPlayerSubsystem *pUVar3;
  undefined1 local_res8 [8];
  
  uVar2 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          GetTypeIndex<UMassTestLocalPlayerSubsystem>();
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&(this->SubsystemAccess).MutableSubsystemsBitSet,uVar2
                    );
  if (!bVar1) {
    bVar1 = `FMassSubsystemAccess::GetMutableSubsystem<UMassTestLocalPlayerSubsystem,void>'::__l3::
            <lambda_1>::operator()(local_res8);
    if (!bVar1) {
      return (UMassTestLocalPlayerSubsystem *)0x0;
    }
  }
  pUVar3 = FMassSubsystemAccess::GetSubsystemInternal<UMassTestLocalPlayerSubsystem>
                     (&this->SubsystemAccess,uVar2);
  return pUVar3;
}

// GetMutableSubsystem<UMassTestWorldSubsystem,void> @ 1470e1100

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassTestWorldSubsystem * __thiscall
FMassExecutionContext::GetMutableSubsystem<UMassTestWorldSubsystem,void>
          (FMassExecutionContext *this)

{
  bool bVar1;
  uint uVar2;
  UMassTestWorldSubsystem *pUVar3;
  undefined1 local_res8 [8];
  
  uVar2 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          GetTypeIndex<UMassTestWorldSubsystem>();
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&(this->SubsystemAccess).MutableSubsystemsBitSet,uVar2
                    );
  if (!bVar1) {
    bVar1 = `FMassSubsystemAccess::GetMutableSubsystem<UMassTestWorldSubsystem,void>'::__l3::
            <lambda_1>::operator()(local_res8);
    if (!bVar1) {
      return (UMassTestWorldSubsystem *)0x0;
    }
  }
  pUVar3 = FMassSubsystemAccess::GetSubsystemInternal<UMassTestWorldSubsystem>
                     (&this->SubsystemAccess,uVar2);
  return pUVar3;
}

// GetSubsystem<UMassTestEngineSubsystem,void> @ 1470e33b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassTestEngineSubsystem * __thiscall
FMassExecutionContext::GetSubsystem<UMassTestEngineSubsystem,void>(FMassExecutionContext *this)

{
  UMassTestEngineSubsystem *pUVar1;
  
  pUVar1 = FMassSubsystemAccess::GetSubsystem<UMassTestEngineSubsystem,void>(&this->SubsystemAccess)
  ;
  return pUVar1;
}

// GetSubsystem<UMassTestGameInstanceSubsystem,void> @ 1470e34d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassTestGameInstanceSubsystem * __thiscall
FMassExecutionContext::GetSubsystem<UMassTestGameInstanceSubsystem,void>
          (FMassExecutionContext *this)

{
  UMassTestGameInstanceSubsystem *pUVar1;
  
  pUVar1 = FMassSubsystemAccess::GetSubsystem<UMassTestGameInstanceSubsystem,void>
                     (&this->SubsystemAccess);
  return pUVar1;
}

// GetSubsystem<UMassTestLocalPlayerSubsystem,void> @ 1470e35f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassTestLocalPlayerSubsystem * __thiscall
FMassExecutionContext::GetSubsystem<UMassTestLocalPlayerSubsystem,void>(FMassExecutionContext *this)

{
  UMassTestLocalPlayerSubsystem *pUVar1;
  
  pUVar1 = FMassSubsystemAccess::GetSubsystem<UMassTestLocalPlayerSubsystem,void>
                     (&this->SubsystemAccess);
  return pUVar1;
}

// GetSubsystem<UMassTestWorldSubsystem,void> @ 1470e3710

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassTestWorldSubsystem * __thiscall
FMassExecutionContext::GetSubsystem<UMassTestWorldSubsystem,void>(FMassExecutionContext *this)

{
  UMassTestWorldSubsystem *pUVar1;
  
  pUVar1 = FMassSubsystemAccess::GetSubsystem<UMassTestWorldSubsystem,void>(&this->SubsystemAccess);
  return pUVar1;
}

// Defer @ 14711bfc0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassCommandBuffer * __thiscall FMassExecutionContext::Defer(FMassExecutionContext *this)

{
  return (this->DeferredCommandBuffer).Object;
}

// GetEntities @ 147120190

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FMassEntityHandle_const_,int> * __thiscall
FMassExecutionContext::GetEntities
          (FMassExecutionContext *this,
          TArrayView<FMassEntityHandle_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (this->EntityListView).DataPtr;
  __return_storage_ptr__->ArrayNum = (this->EntityListView).ArrayNum;
  return __return_storage_ptr__;
}

// GetEntity @ 1471201b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __thiscall
FMassExecutionContext::GetEntity(FMassExecutionContext *this,int param_1)

{
  FMassEntityHandle *pFVar1;
  int in_register_00000014;
  FMassEntityHandle FVar2;
  int in_R8D;
  
  FVar2.SerialNumber = in_register_00000014;
  FVar2.Index = param_1;
  pFVar1 = TArrayView<FMassEntityHandle,int>::operator[](&this->EntityListView,in_R8D);
  *(FMassEntityHandle *)FVar2 = *pFVar1;
  return FVar2;
}

// GetEntityManagerChecked @ 147120260

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityManager * __thiscall
FMassExecutionContext::GetEntityManagerChecked(FMassExecutionContext *this)

{
  return (this->EntityManager).Object;
}

// GetNumEntities @ 147120310

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall FMassExecutionContext::GetNumEntities(FMassExecutionContext *this)

{
  return (this->EntityListView).ArrayNum;
}

