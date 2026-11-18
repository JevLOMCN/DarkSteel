// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// FScriptArrayHelper @ 1420ea440

FScriptArrayHelper * __thiscall
FScriptArrayHelper::FScriptArrayHelper
          (FScriptArrayHelper *this,EInternal param_1,FProperty *param_2,void *param_3,int param_4,
          uint param_5,EArrayPropertyFlags param_6)

{
  code *pcVar1;
  bool bVar2;
  FScriptArrayHelper *pFVar3;
  
  this->ElementAlignment = param_5;
  this->ArrayFlags = param_6;
  this->InnerProperty = param_2;
  this->ElementSize = param_4;
  (this->field1_0x8).HeapArray = param_3;
  if (param_4 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1177,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScriptArrayHelper *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->InnerProperty == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1178,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScriptArrayHelper *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// AddValues @ 1420f1650

int __thiscall FScriptArrayHelper::AddValues(FScriptArrayHelper *this,int param_1)

{
  uint uVar1;
  TScriptArray<TMemoryImageAllocator<0>_> *pTVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  void *_Dst;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)(uint)param_1;
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x10f6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  pTVar2 = (this->field1_0x8).FreezableArray;
  uVar1 = this->ElementAlignment;
  iVar6 = this->ElementSize;
  if ((this->ArrayFlags & UsesMemoryImageAllocator) == None) {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                         ,0x54,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    iVar7 = pTVar2->ArrayNum;
    pTVar2->ArrayNum = iVar7 + param_1;
    if (pTVar2->ArrayMax < iVar7 + param_1) {
      TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)pTVar2,iVar7,iVar6,uVar1);
    }
  }
  else {
    iVar7 = TScriptArray<TMemoryImageAllocator<0>_>::Add(pTVar2,param_1,iVar6,uVar1);
  }
  if (0 < param_1) {
    pTVar2 = (this->field1_0x8).FreezableArray;
    if (pTVar2->ArrayNum == 0) {
      _Dst = (void *)0x0;
    }
    else {
      uVar8 = pTVar2->_padding_;
      if (((this->ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0)) {
        uVar8 = (longlong)&pTVar2->_padding_ + ((longlong)uVar8 >> 0x18);
      }
      _Dst = (void *)((longlong)iVar7 * (longlong)this->ElementSize + uVar8);
    }
    if (((uint)(int)this->InnerProperty->PropertyFlags >> 9 & 1) != 0) {
      memset(_Dst,0,(longlong)param_1 * (longlong)this->ElementSize);
      return iVar7;
    }
    do {
      pFVar3 = this->InnerProperty;
      if (((uint)(int)pFVar3->PropertyFlags >> 9 & 1) == 0) {
        (**(code **)(pFVar3->_padding_ + 0x150))();
      }
      else {
        memset(_Dst,0,(longlong)pFVar3->ElementSize * (longlong)pFVar3->ArrayDim);
      }
      _Dst = (void *)((longlong)_Dst + (longlong)this->ElementSize);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return iVar7;
}

// EmptyAndAddValues @ 1420f68c0

void __thiscall FScriptArrayHelper::EmptyAndAddValues(FScriptArrayHelper *this,int param_1)

{
  EArrayPropertyFlags EVar1;
  uint uVar2;
  int iVar3;
  FProperty *pFVar4;
  code *pcVar5;
  bool bVar6;
  TScriptArray<TMemoryImageAllocator<0>_> *this_00;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((param_1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x10a6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = (this->field1_0x8).FreezableArray;
  uVar2 = this_00->ArrayNum;
  uVar8 = (ulonglong)uVar2;
  if (uVar2 == 0) {
    if (param_1 == 0) goto LAB_1420f69cc;
  }
  else if (((this->InnerProperty->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None
           ) && (0 < (int)uVar2)) {
    uVar7 = this_00->_padding_;
    if (((this->ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar7 & 1) != 0)) {
      uVar7 = (longlong)&this_00->_padding_ + ((longlong)uVar7 >> 0x18);
    }
    do {
      pFVar4 = this->InnerProperty;
      if ((pFVar4->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(pFVar4->_padding_ + 0x138))(pFVar4,uVar7);
      }
      uVar7 = uVar7 + (longlong)this->ElementSize;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    this_00 = (this->field1_0x8).FreezableArray;
  }
  EVar1 = this->ArrayFlags;
  uVar2 = this->ElementAlignment;
  iVar3 = this->ElementSize;
  ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this_00)->ArrayNum = 0;
  if ((EVar1 & UsesMemoryImageAllocator) == None) {
    if (param_1 != ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this_00)->ArrayMax) {
      TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this_00,param_1,iVar3,uVar2);
    }
  }
  else if (param_1 != ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this_00)->ArrayMax) {
    TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo(this_00,param_1,iVar3,uVar2);
    AddValues(this,param_1);
    return;
  }
LAB_1420f69cc:
  AddValues(this,param_1);
  return;
}

// AddUninitializedValues @ 142130ff0

int __thiscall FScriptArrayHelper::AddUninitializedValues(FScriptArrayHelper *this,int param_1)

{
  uint uVar1;
  int iVar2;
  TScriptArray<TMemoryImageAllocator<0>_> *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x10f6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  this_00 = (this->field1_0x8).FreezableArray;
  if ((this->ArrayFlags & UsesMemoryImageAllocator) != None) {
    iVar5 = TScriptArray<TMemoryImageAllocator<0>_>::Add
                      (this_00,param_1,this->ElementSize,this->ElementAlignment);
    return iVar5;
  }
  uVar1 = this->ElementAlignment;
  iVar5 = this->ElementSize;
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                       ,0x54,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar2 = this_00->ArrayNum;
  this_00->ArrayNum = iVar2 + param_1;
  if (this_00->ArrayMax < iVar2 + param_1) {
    TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
              ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this_00,iVar2,iVar5,uVar1);
  }
  return iVar2;
}

// DestructItems @ 1421380b0

void __thiscall FScriptArrayHelper::DestructItems(FScriptArrayHelper *this,int param_1,int param_2)

{
  TScriptArray<TMemoryImageAllocator<0>_> *pTVar1;
  FProperty *pFVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (((this->InnerProperty->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None) &&
     (0 < param_2)) {
    pTVar1 = (this->field1_0x8).FreezableArray;
    if (pTVar1->ArrayNum == 0) {
      lVar3 = 0;
    }
    else {
      uVar4 = pTVar1->_padding_;
      if (((this->ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar4 & 1) != 0)) {
        uVar4 = (longlong)&pTVar1->_padding_ + ((longlong)uVar4 >> 0x18);
      }
      lVar3 = (longlong)this->ElementSize * (longlong)param_1 + uVar4;
    }
    uVar4 = (ulonglong)(uint)param_2;
    do {
      pFVar2 = this->InnerProperty;
      if ((pFVar2->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(pFVar2->_padding_ + 0x138))(pFVar2,lVar3);
      }
      lVar3 = lVar3 + this->ElementSize;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// EmptyAndAddUninitializedValues @ 142138810

void __thiscall
FScriptArrayHelper::EmptyAndAddUninitializedValues(FScriptArrayHelper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x10b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EmptyValues(this,param_1);
  AddUninitializedValues(this,param_1);
  return;
}

// EmptyValues @ 1421388b0

void __thiscall FScriptArrayHelper::EmptyValues(FScriptArrayHelper *this,int param_1)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  uint uVar3;
  TScriptArray<TMemoryImageAllocator<0>_> *this_00;
  
  iVar2 = ((this->field1_0x8).FreezableArray)->ArrayNum;
  if (iVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
  }
  else {
    DestructItems(this,0,iVar2);
  }
  this_00 = (this->field1_0x8).FreezableArray;
  EVar1 = this->ArrayFlags;
  uVar3 = this->ElementAlignment;
  iVar2 = this->ElementSize;
  this_00->ArrayNum = 0;
  if ((EVar1 & UsesMemoryImageAllocator) == None) {
    if (param_1 != this_00->ArrayMax) {
      TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this_00,param_1,iVar2,uVar3);
    }
  }
  else if (param_1 != this_00->ArrayMax) {
    TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo(this_00,param_1,iVar2,uVar3);
    return;
  }
  return;
}

// ExpandForIndex @ 142138930

bool __thiscall FScriptArrayHelper::ExpandForIndex(FScriptArrayHelper *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x10be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar1 = ((this->field1_0x8).FreezableArray)->ArrayNum;
  if (iVar1 <= param_1) {
    AddValues(this,(param_1 - iVar1) + 1);
    return true;
  }
  return false;
}

// RemoveValues @ 14214a990

void __thiscall FScriptArrayHelper::RemoveValues(FScriptArrayHelper *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_18;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1127,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1 < 0) || (((this->field1_0x8).FreezableArray)->ArrayNum < param_1 + param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index + Count <= Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1128,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DestructItems(this,param_1,param_2);
  local_18.__this = this;
  local_18.Index = param_1;
  local_18.Count = param_2;
  WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>(this,&local_18);
  return;
}

