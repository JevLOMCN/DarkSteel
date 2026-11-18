// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 78

// operator=<FMassEntityHandle_const_,int> @ 1470d0e40

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=<FMassEntityHandle_const_,int>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FMassEntityHandle *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// AddUniqueImpl<FMassEntityHandle_const_&> @ 1470d5cf0

int __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FMassEntityHandle_const_&>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,FMassEntityHandle *param_1)

{
  FMassEntityHandle *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMassEntityHandle *pFVar6;
  
  pFVar1 = (FMassEntityHandle *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if ((pFVar6->Index == (*param_1).Index) && (pFVar6->SerialNumber == (*param_1).SerialNumber))
      {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FMassEntityHandle *)(pFVar2 + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// Append<FMassEntityHandle,TSizedDefaultAllocator<32>_> @ 1470d7470

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
Append<FMassEntityHandle,TSizedDefaultAllocator<32>_>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// Append<TArrayView<FMassArchetypeEntityCollection_const_,int>_> @ 1470d7510

void __thiscall
TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
Append<TArrayView<FMassArchetypeEntityCollection_const_,int>_>
          (TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  ConstructItems<FMassArchetypeEntityCollection,FMassArchetypeEntityCollection,int>
            ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x28,param_1->DataPtr,iVar1);
  return;
}

// Append<TArrayView<FMassEntityHandle_const_,int>_> @ 1470d75c0

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
Append<TArrayView<FMassEntityHandle_const_,int>_>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1->DataPtr,(longlong)iVar1 << 3)
  ;
  return;
}

// CopyToEmpty<int,int> @ 1470d9120

void __thiscall
TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
          (TArray<int_const_,TSizedDefaultAllocator<32>_> *this,int *param_1,int param_2,int param_3
          )

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 2);
  }
  return;
}

// CopyToEmpty<FMassEntityHandle,int> @ 1470d91b0

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::CopyToEmpty<FMassEntityHandle,int>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,FMassEntityHandle *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// CopyToEmpty<TArray<int_const_,TSizedDefaultAllocator<32>_>,int> @ 1470d9240

void __thiscall
TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<TArray<int_const_,TSizedDefaultAllocator<32>_>,int>
          (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          TArray<int_const_,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TArray<int_const_,TSizedDefaultAllocator<32>_>,TArray<int_const_,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// Sort<UE::Mass::Test::Observers::EntityIndexSorted::<lambda>_> @ 1470eee80

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
Sort<UE::Mass::Test::Observers::EntityIndexSorted::<lambda>_>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,<lambda> *param_1)

{
  FIdentityFunctor local_res8;
  
  AlgoImpl::
  IntroSortInternal<FMassEntityHandle,int,FIdentityFunctor,TDereferenceWrapper<FMassEntityHandle,UE::Mass::Test::Observers::EntityIndexSorted::<lambda>_>_>
            ((FMassEntityHandle *)(this->AllocatorInstance).Data,this->ArrayNum,local_res8,
             (TDereferenceWrapper<FMassEntityHandle,UE::Mass::Test::Observers::EntityIndexSorted::<lambda>_>
              )param_1);
  return;
}

// TArray<int_const_,TSizedDefaultAllocator<32>_> @ 1470f1550

TArray<int_const_,TSizedDefaultAllocator<32>_> * __thiscall
TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
          (TArray<int_const_,TSizedDefaultAllocator<32>_> *this,
          initializer_list<int_const_> *param_1)

{
  int *_Src;
  int *piVar1;
  int iVar2;
  
  _Src = param_1->_First;
  piVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)piVar1 - (longlong)_Src >> 2);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  return this;
}

// TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_> @ 1470f15e0

TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>::
TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>
          (TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FMassEntityHandle_const_> *param_1)

{
  FMassEntityHandle *_Src;
  FMassEntityHandle *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<signed_char,TSizedDefaultAllocator<32>_> @ 1470f1670

TArray<signed_char,TSizedDefaultAllocator<32>_> * __thiscall
TArray<signed_char,TSizedDefaultAllocator<32>_>::TArray<signed_char,TSizedDefaultAllocator<32>_>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *this,
          initializer_list<signed_char> *param_1)

{
  schar *_Src;
  int iVar1;
  
  _Src = param_1->_First;
  iVar1 = *(int *)&param_1->_Last - (int)_Src;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1);
  return this;
}

// TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> @ 1470f1700

TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>
          (TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UScriptStruct_const_*> *param_1)

{
  UScriptStruct **_Src;
  UScriptStruct **ppUVar1;
  int iVar2;
  
  _Src = param_1->_First;
  ppUVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)ppUVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> @ 1470f1790

TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FInstancedStruct> *param_1)

{
  FInstancedStruct *pFVar1;
  FInstancedStruct *pFVar2;
  int iVar3;
  
  pFVar1 = param_1->_First;
  pFVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<FInstancedStruct,FInstancedStruct,int>((this->AllocatorInstance).Data,pFVar1,iVar3)
  ;
  return this;
}

// TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> @ 1470f1820

TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>
          (TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FMassArchetypeEntityCollection> *param_1)

{
  FMassArchetypeEntityCollection *pFVar1;
  FMassArchetypeEntityCollection *pFVar2;
  int iVar3;
  
  pFVar1 = param_1->_First;
  pFVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x28);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<FMassArchetypeEntityCollection,FMassArchetypeEntityCollection,int>
            ((this->AllocatorInstance).Data,pFVar1,iVar3);
  return this;
}

// TArray<FStructArrayView,TSizedDefaultAllocator<32>_> @ 1470f18d0

TArray<FStructArrayView,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FStructArrayView,TSizedDefaultAllocator<32>_>::
TArray<FStructArrayView,TSizedDefaultAllocator<32>_>
          (TArray<FStructArrayView,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FStructArrayView> *param_1)

{
  FStructArrayView *_Src;
  longlong lVar1;
  int iVar2;
  
  _Src = param_1->_First;
  lVar1 = (longlong)param_1->_Last - (longlong)_Src;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(lVar1 >> 2) - (int)(lVar1 >> 0x3f);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x18);
  return this;
}

// TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_> @ 1470f1990

TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>::
TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>
          (TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FTestFragment_Bool> *param_1)

{
  FTestFragment_Bool *_Src;
  int iVar1;
  
  _Src = param_1->_First;
  iVar1 = *(int *)&param_1->_Last - (int)_Src;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1);
  return this;
}

// TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_> @ 1470f1a20

TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>
          (TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FTestFragment_Float> *param_1)

{
  FTestFragment_Float *_Src;
  FTestFragment_Float *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 2);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  return this;
}

// TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 1470f1ab0

TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<int_const_,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int_const_,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  
  pTVar1 = param_1->_First;
  pTVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)((longlong)pTVar2 - (longlong)pTVar1 >> 4);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<TArray<int_const_,TSizedDefaultAllocator<32>_>,TArray<int_const_,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar1,iVar3);
  return this;
}

// TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 1470f1b40

TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  
  pTVar1 = param_1->_First;
  pTVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)((longlong)pTVar2 - (longlong)pTVar1 >> 4);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,int>
            ((this->AllocatorInstance).Data,pTVar1,iVar3);
  return this;
}

// TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_> @ 1470f1bd0

TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
          (TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<TArrayView<FMassEntityHandle_const_,int>_> *param_1)

{
  TArrayView<FMassEntityHandle_const_,int> *_Src;
  TArrayView<FMassEntityHandle_const_,int> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 4);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  return this;
}

// TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 1470f1c70

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,initializer_list<TRefCountPtr<FBaseGraphTask>_> *param_1)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  int iVar5;
  
  pTVar1 = param_1->_First;
  pTVar2 = param_1->_Last;
  (this->AllocatorInstance).SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  iVar5 = (int)((longlong)pTVar2 - (longlong)pTVar1 >> 3);
  this->ArrayNum = iVar5;
  if (iVar5 == 0) {
    this->ArrayMax = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
            (8,8,iVar5,0,&this->AllocatorInstance,iVar5,&this->ArrayMax);
  FVar3 = (this->AllocatorInstance).SecondaryData;
  FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
  if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar4 = FVar3;
  }
  ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
            ((void *)FVar4,pTVar1,iVar5);
  return this;
}

// TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_> @ 1470f1d10

TArray<FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>::
TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>
          (void *this,initializer_list<FMassEntityStorageTest::EEntityManagerMode> *param_1)

{
  EEntityManagerMode *_Src;
  EEntityManagerMode *pEVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pEVar1 = param_1->_Last;
  *(undefined8 *)this = 0;
  iVar2 = (int)((longlong)pEVar1 - (longlong)_Src >> 2);
  *(int *)((longlong)this + 8) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,this,iVar2,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar2 << 2);
  return this;
}

// TArray<bool,TSizedDefaultAllocator<32>_> @ 1470f1da0

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
TArray<bool,TSizedDefaultAllocator<32>_>::TArray<bool,TSizedDefaultAllocator<32>_>
          (TArray<bool,TSizedDefaultAllocator<32>_> *this,initializer_list<bool> *param_1)

{
  bool *_Src;
  int iVar1;
  
  _Src = param_1->_First;
  iVar1 = *(int *)&param_1->_Last - (int)_Src;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1);
  return this;
}

// ~TArray<int_const_,TSizedDefaultAllocator<32>_> @ 1470f69a0

void __thiscall
TArray<int_const_,TSizedDefaultAllocator<32>_>::~TArray<int_const_,TSizedDefaultAllocator<32>_>
          (TArray<int_const_,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_> @ 1470f69c0

void __thiscall
TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>::
~TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>
          (TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<signed_char,TSizedDefaultAllocator<32>_> @ 1470f69e0

void __thiscall
TArray<signed_char,TSizedDefaultAllocator<32>_>::~TArray<signed_char,TSizedDefaultAllocator<32>_>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_> @ 1470f6a00

void __thiscall
TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>::
~TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>
          (TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_> @ 1470f6a20

void __thiscall
TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>::
~TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>
          (TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<USubsystem_*,TSizedDefaultAllocator<32>_> @ 1470f6a40

void __thiscall
TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::~TArray<USubsystem_*,TSizedDefaultAllocator<32>_>
          (TArray<USubsystem_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> @ 1470f6a60

void __thiscall
TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>
          (TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> @ 1470f6a80

void __thiscall
TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>
          (TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<TWeakObjectPtr<UMassProcessor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> @ 1470f6aa0

void __thiscall
TArray<TWeakObjectPtr<UMassProcessor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
~TArray<TWeakObjectPtr<UMassProcessor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          (TArray<TWeakObjectPtr<UMassProcessor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> @ 1470f6ac0

void __thiscall
TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_>::
~TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_>
          (TArray<UE::Mass::FArchetypeGroupType,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> @ 1470f6ae0

void __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::
~TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> @ 1470f6b20

void __thiscall
TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>
          (TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMassArchetypeEntityCollection,int>
            ((FMassArchetypeEntityCollection *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> @ 1470f6b60

void __thiscall
TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>
          (TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMassArchetypeEntityCollectionWithPayload,int>
            ((FMassArchetypeEntityCollectionWithPayload *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> @ 1470f6ba0

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FMassProcessingPhaseConfig,TSizedDefaultAllocator<32>_> @ 1470f6bc0

void __thiscall
TArray<FMassProcessingPhaseConfig,TSizedDefaultAllocator<32>_>::
~TArray<FMassProcessingPhaseConfig,TSizedDefaultAllocator<32>_>
          (TArray<FMassProcessingPhaseConfig,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMassProcessingPhaseConfig,int>
            ((FMassProcessingPhaseConfig *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> @ 1470f6c00

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_>::
~TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_>
          (TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMassProcessorOrderInfo,int>
            ((FMassProcessorOrderInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_> @ 1470f6c40

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_>::
~TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_>
          (TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMassProcessorDependencySolver::FNode,int>
            ((FNode *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FStructArrayView,TSizedDefaultAllocator<32>_> @ 1470f6c80

void __thiscall
TArray<FStructArrayView,TSizedDefaultAllocator<32>_>::
~TArray<FStructArrayView,TSizedDefaultAllocator<32>_>
          (TArray<FStructArrayView,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_> @ 1470f6ca0

void __thiscall
TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>::
~TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>
          (TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_> @ 1470f6cc0

void __thiscall
TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>
          (TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_> @ 1470f6ce0

void __thiscall
TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>
          (TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 1470f6d00

void __thiscall
TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<int_const_,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int_const_,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 1470f6d40

void __thiscall
TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data
             ,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_> @ 1470f6d80

void __thiscall
TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
          (TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_> @ 1470f6da0

void __thiscall
TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_>::
~TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_>
          (TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TFunction<bool___cdecl(FMassExecutionContext_&)>,int>
            ((TFunction<bool___cdecl(FMassExecutionContext_&)> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<TSharedPtr<FMassEntityManager,1>,TSizedDefaultAllocator<32>_> @ 1470f6de0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<FMassEntityManager,1>,TSizedDefaultAllocator<32>_>::
~TArray<TSharedPtr<FMassEntityManager,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedPtr<FMassEntityManager,1>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FMassEntityManager,1>,int>
            ((TSharedPtr<FMassEntityManager,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<TSubclassOf<UMassProcessor>,TSizedDefaultAllocator<32>_> @ 1470f6e20

void __thiscall
TArray<TSubclassOf<UMassProcessor>,TSizedDefaultAllocator<32>_>::
~TArray<TSubclassOf<UMassProcessor>,TSizedDefaultAllocator<32>_>
          (TArray<TSubclassOf<UMassProcessor>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_> @ 1470f6e40

void __thiscall
TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_>::
~TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_>
          (TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TWeakPtr<int,1>,int>
            ((TWeakPtr<int,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_> @ 1470f6e80

void __thiscall
TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>::
~TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// operator= @ 1470f8fe0

TArray<int_const_,TSizedDefaultAllocator<32>_> * __thiscall
TArray<int_const_,TSizedDefaultAllocator<32>_>::operator=
          (TArray<int_const_,TSizedDefaultAllocator<32>_> *this,
          initializer_list<int_const_> *param_1)

{
  CopyToEmpty<int,int>
            (this,param_1->_First,(int)((longlong)param_1->_Last - (longlong)param_1->_First >> 2),
             this->ArrayMax);
  return this;
}

// operator= @ 1470f9010

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::operator=
          (TArray<int,TSizedDefaultAllocator<32>_> *this,initializer_list<int> *param_1)

{
  CopyToEmpty<int,int>
            (this,param_1->_First,(int)((longlong)param_1->_Last - (longlong)param_1->_First >> 2),
             this->ArrayMax);
  return this;
}

// operator= @ 1470f9040

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// operator= @ 1470f90a0

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FMassEntityHandle> *param_1)

{
  CopyToEmpty<FMassEntityHandle,int>
            (this,param_1->_First,(int)((longlong)param_1->_Last - (longlong)param_1->_First >> 3),
             this->ArrayMax);
  return this;
}

// operator= @ 1470f90d0

TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *param_1)

{
  DestructItems<TArray<int_const_,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int_const_,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  CopyToEmpty<TArray<int_const_,TSizedDefaultAllocator<32>_>,int>
            (this,param_1->_First,(int)((longlong)param_1->_Last - (longlong)param_1->_First >> 4),
             this->ArrayMax);
  return this;
}

// operator= @ 1470f9120

TArray<FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>::operator=
          (void *this,
          TArray<FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_> *param_1)

{
  if (this != param_1) {
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(FScriptContainerElement **)this = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)this + 8) = param_1->ArrayNum;
    *(int *)((longlong)this + 0xc) = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// AddZeroed @ 147110420

int __thiscall
TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<USubsystem_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// AddZeroed @ 147110490

int __thiscall
TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  pFVar2 = (this->AllocatorInstance).Data + (longlong)iVar1 * 0x10;
  *(undefined8 *)pFVar2 = 0;
  *(undefined8 *)(pFVar2 + 8) = 0;
  return iVar1;
}

// AddZeroed @ 1471104e0

int __thiscall
TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
::AddZeroed(TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
            *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// Append @ 147110550

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Append
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,FMassEntityHandle *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 == (FMassEntityHandle *)0x0) && (param_2 != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data + (longlong)iVar3 * 8,param_1,(longlong)param_2 << 3);
  }
  return;
}

// Find @ 14711e770

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::Find
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 4) {
    pFVar2 = pFVar1;
    do {
      if (*(int *)pFVar2 == *param_1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 2);
      }
      pFVar2 = pFVar2 + 4;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 4);
  }
  return -1;
}

// Find @ 14711e7b0

int __thiscall
TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::Find
          (TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *this,UScriptStruct **param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar2 = pFVar1;
    do {
      if (*(UScriptStruct **)pFVar2 == *param_1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
      }
      pFVar2 = pFVar2 + 8;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  return -1;
}

// Find @ 14711e7f0

int __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Find
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,FMassEntityHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar2 = pFVar1;
    do {
      if ((*(int *)pFVar2 == (*param_1).Index) && (*(int *)(pFVar2 + 4) == (*param_1).SerialNumber))
      {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
      }
      pFVar2 = pFVar2 + 8;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  return -1;
}

// Insert @ 147122480

int __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,FMassEntityHandle *param_1,
          int param_2)

{
  FMassEntityHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (FMassEntityHandle *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 8;
  memmove(pFVar5 + 8,pFVar5,(longlong)(iVar4 - param_2) << 3);
  *(FMassEntityHandle *)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = *param_1;
  return param_2;
}

// RemoveAt @ 14719a550

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14719a620

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  if (*(void **)(_Dst + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x18));
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x30,(longlong)iVar4 * 0x30);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtSwapImpl @ 14719a790

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 8,
            (longlong)iVar2 << 3);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// Reset @ 14719b9a0

void __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::Reset
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 14719b9f0

void __thiscall
TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>::Reset
          (TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 14719ba40

void __thiscall
TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::Reset
          (TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 14719ba90

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 14719bae0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FMassProcessorOrderInfo *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FMassProcessorOrderInfo *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<FMassProcessorOrderInfo,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FMassProcessorOrderInfo,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// Reset @ 14719bb70

void __thiscall
TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  TFunction<bool___cdecl(FMassExecutionContext_&)> *pTVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pTVar2 = (TFunction<bool___cdecl(FMassExecutionContext_&)> *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<TFunction<bool___cdecl(FMassExecutionContext_&)>,int>(pTVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<TFunction<bool___cdecl(FMassExecutionContext_&)>,int>(pTVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// SetNum @ 14719d280

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FMassEntityHandle,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// Sort @ 1471ab850

void __thiscall
TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Sort
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FMassEntityHandle,int,FIdentityFunctor,TDereferenceWrapper<FMassEntityHandle,TLess<void>_>_>
            ((FMassEntityHandle *)(this->AllocatorInstance).Data,this->ArrayNum,local_res8[0],
             (TLess<void> *)local_res8);
  return;
}

