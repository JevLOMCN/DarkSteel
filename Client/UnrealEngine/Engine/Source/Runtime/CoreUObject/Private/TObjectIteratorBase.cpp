// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// TObjectIteratorBase<1> @ 142010ab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectIteratorBase<1> * __thiscall
TObjectIteratorBase<1>::TObjectIteratorBase<1>
          (TObjectIteratorBase<1> *this,UClass *param_1,bool param_2,EObjectFlags param_3,
          EInternalObjectFlags param_4)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  TObjectIteratorBase<1> *pTVar6;
  FUObjectItem *pFVar7;
  UClass *pUVar8;
  longlong lVar9;
  
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)&GUObjectArray;
  this->_padding_ = 0;
  if (param_2) {
    *(int *)&this->_padding_ = GUObjectArray.ObjLastNonGCIndex;
  }
  FUObjectArray::TIterator::Advance((TIterator *)this);
  this->Class = param_1;
  this->ExclusionFlags = param_3;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  this->InternalExclusionFlags =
       EVar5 | param_4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
  if ((this->Class == (UClass *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Class",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                         ,0x70,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TObjectIteratorBase<1> *)(*pcVar3)();
    return pTVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(this->_padding_ + 0x30));
  do {
    lVar9 = 0;
    if (this->_padding_ != 0) {
      lVar9 = *(longlong *)(this->_padding_ + 8);
    }
    if (((*(EObjectFlags *)(lVar9 + 8) & this->ExclusionFlags) == RF_NoFlags) &&
       (EVar5 = this->InternalExclusionFlags,
       pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar9 + 0xc)),
       (EVar5 & (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) ==
       Borrowed)) {
      pUVar8 = Z_Construct_UClass_UObject_NoRegister();
      pUVar2 = this->Class;
      if (pUVar2 == pUVar8) {
        return this;
      }
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == &pUVar2->_padding_)) {
        return this;
      }
    }
    bVar4 = FUObjectArray::TIterator::Advance((TIterator *)this);
    if (!bVar4) {
      return this;
    }
  } while( true );
}

// operator++ @ 1420ee9d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall TObjectIteratorBase<1>::operator++(TObjectIteratorBase<1> *this)

{
  int iVar1;
  EInternalObjectFlags EVar2;
  UClass *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  FUObjectItem *pFVar6;
  longlong lVar7;
  
LAB_1420ee9e3:
  do {
    do {
      bVar4 = FUObjectArray::TIterator::Advance((TIterator *)this);
      if (!bVar4) {
        return;
      }
      lVar7 = 0;
      if (this->_padding_ != 0) {
        lVar7 = *(longlong *)(this->_padding_ + 8);
      }
    } while ((*(EObjectFlags *)(lVar7 + 8) & this->ExclusionFlags) != RF_NoFlags);
    pUVar5 = Z_Construct_UClass_UObject_NoRegister();
    pUVar3 = this->Class;
    if (pUVar3 != pUVar5) {
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_1420ee9e3;
    }
    EVar2 = this->InternalExclusionFlags;
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar7 + 0xc));
    if ((EVar2 & (EInternalObjectFlags)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x20))
        == Borrowed) {
      return;
    }
  } while( true );
}

