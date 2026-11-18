// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 6

// GetMutable<FStateTreeBooleanOperationPropertyFunctionInstanceData> @ 14d4ad360

FStateTreeBooleanOperationPropertyFunctionInstanceData * __thiscall
FPropertyBindingDataView::GetMutable<FStateTreeBooleanOperationPropertyFunctionInstanceData>
          (FPropertyBindingDataView *this)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FStateTreeBooleanOperationPropertyFunctionInstanceData *pFVar5;
  UPackage *pUVar6;
  
  if (this->Memory == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateTreeBooleanOperationPropertyFunctionInstanceData *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (this->Struct == (UStruct *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x75,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateTreeBooleanOperationPropertyFunctionInstanceData *)(*pcVar3)();
      return pFVar5;
    }
  }
  pUVar2 = this->Struct;
  if (Z_Registration_Info_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData
                         ,(UObject *)pUVar6,L"StateTreeBooleanOperationPropertyFunctionInstanceData"
                        );
    if (Z_Registration_Info_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d4ad3fc;
  }
  else {
LAB_14d4ad3fc:
    iVar1 = (int)(
                 Z_Registration_Info_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData
                 .OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d4ad446;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FStateTreeBooleanOperationPropertyFunctionInstanceData *)(*pcVar3)();
    return pFVar5;
  }
LAB_14d4ad446:
  return this->Memory;
}

// GetMutable<FStateTreeFloatCombinaisonPropertyFunctionInstanceData> @ 14d4ad460

FStateTreeFloatCombinaisonPropertyFunctionInstanceData * __thiscall
FPropertyBindingDataView::GetMutable<FStateTreeFloatCombinaisonPropertyFunctionInstanceData>
          (FPropertyBindingDataView *this)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FStateTreeFloatCombinaisonPropertyFunctionInstanceData *pFVar5;
  UPackage *pUVar6;
  
  if (this->Memory == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateTreeFloatCombinaisonPropertyFunctionInstanceData *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (this->Struct == (UStruct *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x75,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateTreeFloatCombinaisonPropertyFunctionInstanceData *)(*pcVar3)();
      return pFVar5;
    }
  }
  pUVar2 = this->Struct;
  if (Z_Registration_Info_UScriptStruct_FStateTreeFloatCombinaisonPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeFloatCombinaisonPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFloatCombinaisonPropertyFunctionInstanceData
                         ,(UObject *)pUVar6,L"StateTreeFloatCombinaisonPropertyFunctionInstanceData"
                        );
    if (Z_Registration_Info_UScriptStruct_FStateTreeFloatCombinaisonPropertyFunctionInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d4ad4fc;
  }
  else {
LAB_14d4ad4fc:
    iVar1 = (int)(
                 Z_Registration_Info_UScriptStruct_FStateTreeFloatCombinaisonPropertyFunctionInstanceData
                 .OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeFloatCombinaisonPropertyFunctionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d4ad546;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FStateTreeFloatCombinaisonPropertyFunctionInstanceData *)(*pcVar3)();
    return pFVar5;
  }
LAB_14d4ad546:
  return this->Memory;
}

// GetMutable<FStateTreeIntCombinaisonPropertyFunctionInstanceData> @ 14d4ad560

FStateTreeIntCombinaisonPropertyFunctionInstanceData * __thiscall
FPropertyBindingDataView::GetMutable<FStateTreeIntCombinaisonPropertyFunctionInstanceData>
          (FPropertyBindingDataView *this)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FStateTreeIntCombinaisonPropertyFunctionInstanceData *pFVar5;
  UPackage *pUVar6;
  
  if (this->Memory == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateTreeIntCombinaisonPropertyFunctionInstanceData *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (this->Struct == (UStruct *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x75,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateTreeIntCombinaisonPropertyFunctionInstanceData *)(*pcVar3)();
      return pFVar5;
    }
  }
  pUVar2 = this->Struct;
  if (Z_Registration_Info_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData
                         ,(UObject *)pUVar6,L"StateTreeIntCombinaisonPropertyFunctionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d4ad5fc;
  }
  else {
LAB_14d4ad5fc:
    iVar1 = (int)(
                 Z_Registration_Info_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData
                 .OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d4ad646;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FStateTreeIntCombinaisonPropertyFunctionInstanceData *)(*pcVar3)();
    return pFVar5;
  }
LAB_14d4ad646:
  return this->Memory;
}

// GetMutable<FStateTreeSingleFloatPropertyFunctionInstanceData> @ 14d4ad660

FStateTreeSingleFloatPropertyFunctionInstanceData * __thiscall
FPropertyBindingDataView::GetMutable<FStateTreeSingleFloatPropertyFunctionInstanceData>
          (FPropertyBindingDataView *this)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FStateTreeSingleFloatPropertyFunctionInstanceData *pFVar5;
  UPackage *pUVar6;
  
  if (this->Memory == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateTreeSingleFloatPropertyFunctionInstanceData *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (this->Struct == (UStruct *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x75,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateTreeSingleFloatPropertyFunctionInstanceData *)(*pcVar3)();
      return pFVar5;
    }
  }
  pUVar2 = this->Struct;
  if (Z_Registration_Info_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData
                         ,(UObject *)pUVar6,L"StateTreeSingleFloatPropertyFunctionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d4ad6fc;
  }
  else {
LAB_14d4ad6fc:
    iVar1 = (int)(
                 Z_Registration_Info_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData
                 .OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d4ad746;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FStateTreeSingleFloatPropertyFunctionInstanceData *)(*pcVar3)();
    return pFVar5;
  }
LAB_14d4ad746:
  return this->Memory;
}

// GetMutable<FStateTreeSingleIntPropertyFunctionInstanceData> @ 14d4ad760

FStateTreeSingleIntPropertyFunctionInstanceData * __thiscall
FPropertyBindingDataView::GetMutable<FStateTreeSingleIntPropertyFunctionInstanceData>
          (FPropertyBindingDataView *this)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FStateTreeSingleIntPropertyFunctionInstanceData *pFVar5;
  UPackage *pUVar6;
  
  if (this->Memory == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateTreeSingleIntPropertyFunctionInstanceData *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (this->Struct == (UStruct *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x75,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateTreeSingleIntPropertyFunctionInstanceData *)(*pcVar3)();
      return pFVar5;
    }
  }
  pUVar2 = this->Struct;
  if (Z_Registration_Info_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData
                           ,(UObject *)pUVar6,L"StateTreeSingleIntPropertyFunctionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d4ad7fc;
  }
  else {
LAB_14d4ad7fc:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData.
                 OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d4ad846;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FStateTreeSingleIntPropertyFunctionInstanceData *)(*pcVar3)();
    return pFVar5;
  }
LAB_14d4ad846:
  return this->Memory;
}

// GetMutable<FCompactStateTreeParameters> @ 14d4dedc0

FCompactStateTreeParameters * __thiscall
FPropertyBindingDataView::GetMutable<FCompactStateTreeParameters>(FPropertyBindingDataView *this)

{
  int iVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FCompactStateTreeParameters *pFVar5;
  UScriptStruct *pUVar6;
  
  if (this->Memory == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FCompactStateTreeParameters *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (this->Struct == (UStruct *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x75,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FCompactStateTreeParameters *)(*pcVar3)();
      return pFVar5;
    }
  }
  pUVar2 = this->Struct;
  pUVar6 = FCompactStateTreeParameters::StaticStruct();
  if (pUVar6 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d4dee7d;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FCompactStateTreeParameters *)(*pcVar3)();
    return pFVar5;
  }
LAB_14d4dee7d:
  return this->Memory;
}

