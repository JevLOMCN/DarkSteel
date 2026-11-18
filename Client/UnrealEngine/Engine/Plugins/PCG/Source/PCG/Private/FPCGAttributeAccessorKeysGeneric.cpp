// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetGenericObjectKeys @ 1499f5790

bool __thiscall
FPCGAttributeAccessorKeysGeneric<FPCGSelectGrammarCriterion,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysGeneric<FPCGSelectGrammarCriterion,void> *this,int param_1,
          TArrayView<void_*,int> *param_2)

{
  FPCGSelectGrammarCriterion *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void **ppvVar10;
  
  ppvVar10 = param_2->DataPtr;
  iVar9 = (this->Objects).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = param_1 + 1;
      pFVar1 = (this->Objects).DataPtr;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *ppvVar10 = pFVar1 + param_1;
      iVar9 = (this->Objects).ArrayNum;
      ppvVar10 = ppvVar10 + 1;
      uVar7 = uVar7 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetGenericObjectKeys @ 1499f5910

bool __thiscall
FPCGAttributeAccessorKeysGeneric<FPCGSelectGrammarCriterion,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysGeneric<FPCGSelectGrammarCriterion,void> *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  FPCGSelectGrammarCriterion *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void **ppvVar10;
  
  ppvVar10 = param_2->DataPtr;
  iVar9 = (this->Objects).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = param_1 + 1;
      pFVar1 = (this->Objects).DataPtr;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *ppvVar10 = pFVar1 + param_1;
      iVar9 = (this->Objects).ArrayNum;
      ppvVar10 = ppvVar10 + 1;
      uVar7 = uVar7 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetGenericObjectKeys @ 1499f5a90

bool __thiscall
FPCGAttributeAccessorKeysGeneric<FPCGSubdivisionSubmodule,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysGeneric<FPCGSubdivisionSubmodule,void> *this,int param_1,
          TArrayView<void_*,int> *param_2)

{
  FPCGSubdivisionSubmodule *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void **ppvVar10;
  
  ppvVar10 = param_2->DataPtr;
  iVar9 = (this->Objects).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = param_1 + 1;
      pFVar1 = (this->Objects).DataPtr;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *ppvVar10 = pFVar1 + param_1;
      iVar9 = (this->Objects).ArrayNum;
      ppvVar10 = ppvVar10 + 1;
      uVar7 = uVar7 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetGenericObjectKeys @ 1499f5c10

bool __thiscall
FPCGAttributeAccessorKeysGeneric<FPCGSubdivisionSubmodule,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysGeneric<FPCGSubdivisionSubmodule,void> *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  FPCGSubdivisionSubmodule *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void **ppvVar10;
  
  ppvVar10 = param_2->DataPtr;
  iVar9 = (this->Objects).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = param_1 + 1;
      pFVar1 = (this->Objects).DataPtr;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *ppvVar10 = pFVar1 + param_1;
      iVar9 = (this->Objects).ArrayNum;
      ppvVar10 = ppvVar10 + 1;
      uVar7 = uVar7 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetNum @ 1499f9b80

int __thiscall
FPCGAttributeAccessorKeysGeneric<FPCGSelectGrammarCriterion,void>::GetNum
          (FPCGAttributeAccessorKeysGeneric<FPCGSelectGrammarCriterion,void> *this)

{
  return (this->Objects).ArrayNum;
}

// GetNum @ 1499f9b90

int __thiscall
FPCGAttributeAccessorKeysGeneric<FPCGSubdivisionSubmodule,void>::GetNum
          (FPCGAttributeAccessorKeysGeneric<FPCGSubdivisionSubmodule,void> *this)

{
  return (this->Objects).ArrayNum;
}

// IsClassSupported @ 149a00470

bool __thiscall
FPCGAttributeAccessorKeysGeneric<FPCGSelectGrammarCriterion,void>::IsClassSupported
          (FPCGAttributeAccessorKeysGeneric<FPCGSelectGrammarCriterion,void> *this,UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPCGSelectGrammarCriterion.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGSelectGrammarCriterion.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGSelectGrammarCriterion,(UObject *)pUVar3,
                           L"PCGSelectGrammarCriterion");
      if (Z_Registration_Info_UScriptStruct_FPCGSelectGrammarCriterion.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGSelectGrammarCriterion.OuterSingleton)->
                 _padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGSelectGrammarCriterion.OuterSingleton)->_padding_))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsClassSupported @ 149a004f0

bool __thiscall
FPCGAttributeAccessorKeysGeneric<FPCGSubdivisionSubmodule,void>::IsClassSupported
          (FPCGAttributeAccessorKeysGeneric<FPCGSubdivisionSubmodule,void> *this,UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPCGSubdivisionSubmodule.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGSubdivisionSubmodule.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGSubdivisionSubmodule,(UObject *)pUVar3,
                           L"PCGSubdivisionSubmodule");
      if (Z_Registration_Info_UScriptStruct_FPCGSubdivisionSubmodule.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGSubdivisionSubmodule.OuterSingleton)->
                 _padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGSubdivisionSubmodule.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

