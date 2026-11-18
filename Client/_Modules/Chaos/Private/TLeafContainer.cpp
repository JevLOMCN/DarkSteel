// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_> @ 143c42f10

TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_> * __thiscall
Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_>::
TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_>
          (TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_> *this,
          TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_> *param_1)

{
  int iVar1;
  TAABBTreeLeafArray<int,0,float> *pTVar2;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)&param_1->field_0x8;
  pTVar2 = *(TAABBTreeLeafArray<int,0,float> **)param_1;
  *(int *)&this->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0xc = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0xc);
  ConstructItems<Chaos::TAABBTreeLeafArray<int,0,float>,Chaos::TAABBTreeLeafArray<int,0,float>,int>
            (*(void **)this,pTVar2,iVar1);
  return this;
}

// operator= @ 143c45ff0

TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_> * __thiscall
Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_>::operator=
          (TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_> *this,
          TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TAABBTreeLeafArray<int,0,float> *pTVar3;
  
  if (this != param_1) {
    DestructItems<Chaos::TAABBTreeLeafArray<int,0,float>,int>
              (*(TAABBTreeLeafArray<int,0,float> **)this,*(int *)&this->field_0x8);
    iVar2 = *(int *)&param_1->field_0x8;
    puVar1 = &this->field_0xc;
    pTVar3 = *(TAABBTreeLeafArray<int,0,float> **)param_1;
    *(int *)&this->field_0x8 = iVar2;
    if ((iVar2 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,*(int *)puVar1,(ForAnyElementType *)this,iVar2,(int *)puVar1);
    ConstructItems<Chaos::TAABBTreeLeafArray<int,0,float>,Chaos::TAABBTreeLeafArray<int,0,float>,int>
              (*(void **)this,pTVar3,iVar2);
  }
  return this;
}

// operator[] @ 143d05230

TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> * __thiscall
Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_>::
operator[](TLeafContainer<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *)
         (this->_padding_ + (longlong)param_1 * 0x48);
}

// operator[] @ 143d052b0

TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> * __thiscall
Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_>::
operator[](TLeafContainer<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *)
         (this->_padding_ + (longlong)param_1 * 0x48);
}

// Add @ 143d38f40

int __thiscall
Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_>::Add
          (TLeafContainer<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_>
           *this,TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *pTVar7;
  
  iVar2 = this->NumOfValidElements;
  iVar6 = iVar2 + 1;
  this->NumOfValidElements = iVar6;
  if (iVar6 <= (int)this->_padding_) {
    pTVar7 = operator[](this,iVar2);
    lVar4 = param_1->_padding_;
    pTVar7->_padding_ = param_1->_padding_;
    pTVar7->_padding_ = lVar4;
    pTVar7->_padding_ = param_1->_padding_;
    lVar4 = param_1->_padding_;
    pTVar7->_padding_ = param_1->_padding_;
    pTVar7->_padding_ = lVar4;
    pTVar7->_padding_ = param_1->_padding_;
    TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
    ::operator=(&pTVar7->Elems,&param_1->Elems);
    pTVar7->bDirtyLeaf = param_1->bDirtyLeaf;
    return this->NumOfValidElements + -1;
  }
  if (((TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *)this->_padding_ <=
       param_1) &&
     (param_1 < (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *)this->_padding_
                + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  iVar6 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)this,piVar1);
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>::
  TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>
            ((TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *)
             (this->_padding_ + (longlong)iVar6 * 0x48),param_1);
  return this->NumOfValidElements + -1;
}

// Reset @ 143d67cd0

void __thiscall
Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_>::
Reset(TLeafContainer<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_> *this
     )

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForAnyElementType *pFVar8;
  
  uVar6 = 0;
  if (this->NumOfValidElements < 1) {
    this->NumOfValidElements = 0;
    return;
  }
  lVar7 = 0;
  do {
    uVar5 = 0;
    if ((int)uVar6 < (int)this->_padding_) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pFVar8 = (ForAnyElementType *)(lVar2 + 0x30 + lVar7);
    iVar1 = *(int *)((longlong)&pFVar8[1].Data + 4);
    *(undefined4 *)&pFVar8[1].Data = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,pFVar8,0,(int *)((longlong)&pFVar8[1].Data + 4));
    }
    *(undefined1 *)(lVar2 + 0x40 + lVar7) = 0;
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 0x48;
  } while ((int)uVar6 < this->NumOfValidElements);
  this->NumOfValidElements = 0;
  return;
}

