// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// Advance @ 141f6efa0

bool __thiscall TObjectIterator<UScriptStruct>::Advance(TObjectIterator<UScriptStruct> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->ObjectArray).ArrayNum;
  uVar6 = this->Index + 1;
  this->Index = uVar6;
  if ((int)uVar6 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(longlong *)((this->ObjectArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) != 0)
      {
        return true;
      }
      uVar6 = this->Index + 1;
      this->Index = uVar6;
      iVar5 = (this->ObjectArray).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return false;
}

// Advance @ 142021e40

bool __thiscall TObjectIterator<UClass>::Advance(TObjectIterator<UClass> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->ObjectArray).ArrayNum;
  uVar6 = this->Index + 1;
  this->Index = uVar6;
  if ((int)uVar6 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(longlong *)((this->ObjectArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) != 0)
      {
        return true;
      }
      uVar6 = this->Index + 1;
      this->Index = uVar6;
      iVar5 = (this->ObjectArray).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return false;
}

// TObjectIterator<UClass> @ 1420e8d40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectIterator<UClass> * __thiscall
TObjectIterator<UClass>::TObjectIterator<UClass>
          (TObjectIterator<UClass> *this,EObjectFlags param_1,bool param_2,
          EInternalObjectFlags param_3)

{
  EInternalObjectFlags EVar1;
  UClass *pUVar2;
  
  this->Index = -1;
  (this->ObjectArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectArray).ArrayNum = 0;
  (this->ObjectArray).ArrayMax = 0;
  EVar1 = GetObjectIteratorDefaultInternalExclusionFlags(param_3);
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar2,&this->ObjectArray,param_2,param_1,EVar1);
  Advance(this);
  return this;
}

// TObjectIterator<UObject> @ 1420e8dc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectIterator<UObject> * __thiscall
TObjectIterator<UObject>::TObjectIterator<UObject>
          (TObjectIterator<UObject> *this,EObjectFlags param_1,bool param_2,
          EInternalObjectFlags param_3)

{
  EInternalObjectFlags EVar1;
  UClass *pUVar2;
  
  EVar1 = GetObjectIteratorDefaultInternalExclusionFlags(param_3);
  pUVar2 = Z_Construct_UClass_UObject_NoRegister();
  TObjectIteratorBase<1>::TObjectIteratorBase<1>
            ((TObjectIteratorBase<1> *)this,pUVar2,false,param_1,EVar1);
  return this;
}

// operator++ @ 1420ee950

void __thiscall TObjectIterator<UObject>::operator++(TObjectIterator<UObject> *this)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  FUObjectItem *pFVar4;
  
  do {
    do {
      bVar2 = FUObjectArray::TIterator::Advance((TIterator *)this);
      if (!bVar2) {
        return;
      }
      lVar3 = 0;
      if (*(longlong *)&this->field_0x10 != 0) {
        lVar3 = *(longlong *)(*(longlong *)&this->field_0x10 + 8);
      }
    } while ((*(uint *)(lVar3 + 8) & *(uint *)&this->field_0x20) != 0);
    if (*(longlong *)&this->field_0x10 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)&this->field_0x10 + 8);
    }
    uVar1 = *(uint *)&this->field_0x24;
    pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar3 + 0xc));
  } while ((uVar1 & (uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x20)) != 0);
  return;
}

// Advance @ 142260630

bool __thiscall TObjectIterator<UPackage>::Advance(TObjectIterator<UPackage> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->ObjectArray).ArrayNum;
  uVar6 = this->Index + 1;
  this->Index = uVar6;
  if ((int)uVar6 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(longlong *)((this->ObjectArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) != 0)
      {
        return true;
      }
      uVar6 = this->Index + 1;
      this->Index = uVar6;
      iVar5 = (this->ObjectArray).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return false;
}

// Advance @ 142297900

bool __thiscall TObjectIterator<UField>::Advance(TObjectIterator<UField> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->ObjectArray).ArrayNum;
  uVar6 = this->Index + 1;
  this->Index = uVar6;
  if ((int)uVar6 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(longlong *)((this->ObjectArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) != 0)
      {
        return true;
      }
      uVar6 = this->Index + 1;
      this->Index = uVar6;
      iVar5 = (this->ObjectArray).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return false;
}

