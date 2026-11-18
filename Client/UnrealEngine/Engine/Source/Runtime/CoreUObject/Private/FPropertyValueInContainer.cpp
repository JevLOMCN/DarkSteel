// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// GetValuePtr<int> @ 1422ca470

int * __thiscall UE::FPropertyValueInContainer::GetValuePtr<int>(FPropertyValueInContainer *this)

{
  int iVar1;
  FProperty *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  
  iVar1 = this->ArrayIndex;
  pFVar2 = this->Property;
  pvVar3 = this->Container;
  if ((iVar1 < 0) || (pFVar2->ArrayDim <= iVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      piVar6 = (int *)(*pcVar4)();
      return piVar6;
    }
  }
  if (pvVar3 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      piVar6 = (int *)(*pcVar4)();
      return piVar6;
    }
  }
  return (int *)((longlong)pvVar3 +
                (longlong)pFVar2->Offset_Internal + (longlong)pFVar2->ElementSize * (longlong)iVar1)
  ;
}

// GetValuePtr<TOptional<int>_> @ 1422ca520

TOptional<int> * __thiscall
UE::FPropertyValueInContainer::GetValuePtr<TOptional<int>_>(FPropertyValueInContainer *this)

{
  int iVar1;
  FProperty *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  TOptional<int> *pTVar6;
  
  iVar1 = this->ArrayIndex;
  pFVar2 = this->Property;
  pvVar3 = this->Container;
  if ((iVar1 < 0) || (pFVar2->ArrayDim <= iVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TOptional<int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  if (pvVar3 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TOptional<int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  return (TOptional<int> *)
         ((longlong)pvVar3 +
         (longlong)pFVar2->Offset_Internal + (longlong)pFVar2->ElementSize * (longlong)iVar1);
}

// GetValuePtr<FTestPropertyPathFunctionsStructKey> @ 1422ca5d0

FTestPropertyPathFunctionsStructKey * __thiscall
UE::FPropertyValueInContainer::GetValuePtr<FTestPropertyPathFunctionsStructKey>
          (FPropertyValueInContainer *this)

{
  int iVar1;
  FProperty *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FTestPropertyPathFunctionsStructKey *pFVar6;
  
  iVar1 = this->ArrayIndex;
  pFVar2 = this->Property;
  pvVar3 = this->Container;
  if ((iVar1 < 0) || (pFVar2->ArrayDim <= iVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FTestPropertyPathFunctionsStructKey *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (pvVar3 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FTestPropertyPathFunctionsStructKey *)(*pcVar4)();
      return pFVar6;
    }
  }
  return (FTestPropertyPathFunctionsStructKey *)
         ((longlong)pvVar3 +
         (longlong)pFVar2->Offset_Internal + (longlong)pFVar2->ElementSize * (longlong)iVar1);
}

// GetValuePtr<void> @ 1422ca680

void * __thiscall UE::FPropertyValueInContainer::GetValuePtr<void>(FPropertyValueInContainer *this)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  iVar1 = this->ArrayIndex;
  pFVar2 = this->Property;
  pvVar5 = this->Container;
  if ((iVar1 < 0) || (pFVar2->ArrayDim <= iVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if (pvVar5 == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  return (void *)((longlong)pvVar5 +
                 (longlong)pFVar2->Offset_Internal + (longlong)pFVar2->ElementSize * (longlong)iVar1
                 );
}

