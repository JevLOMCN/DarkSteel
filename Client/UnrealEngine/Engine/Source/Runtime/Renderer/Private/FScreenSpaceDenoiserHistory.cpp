// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// ~FScreenSpaceDenoiserHistory @ 1447f6a00

void __thiscall
FScreenSpaceDenoiserHistory::~FScreenSpaceDenoiserHistory(FScreenSpaceDenoiserHistory *this)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  ForElementType<UE::Math::TIntRect<int>_> FVar2;
  longlong lVar3;
  TRefCountPtr<IPooledRenderTarget> *pTVar4;
  
  pTVar4 = &this->TileClassification;
  if (pTVar4->Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)(pTVar4->Reference->_padding_ + 0x38))();
  }
  lVar3 = 3;
  do {
    pTVar1 = pTVar4 + -1;
    pTVar4 = pTVar4 + -1;
    lVar3 = lVar3 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar3 != 0);
  FVar2 = (this->Scissors).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Math::TIntRect<int>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// operator= @ 1447f9b30

FScreenSpaceDenoiserHistory * __thiscall
FScreenSpaceDenoiserHistory::operator=
          (FScreenSpaceDenoiserHistory *this,FScreenSpaceDenoiserHistory *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  undefined8 *puVar2;
  ForElementType<UE::Math::TIntRect<int>_> FVar3;
  IPooledRenderTarget *pIVar4;
  longlong lVar5;
  TStaticArray<TRefCountPtr<IPooledRenderTarget>,3,4294967295> *pTVar6;
  TRefCountPtr<IPooledRenderTarget> *pTVar7;
  longlong lVar8;
  
  if (this != param_1) {
    if ((param_1->Scissors).AllocatorInstance.SecondaryData ==
        (ForElementType<UE::Math::TIntRect<int>_>)0x0) {
      memmove(this,param_1,0x10);
    }
    FVar3 = (this->Scissors).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<UE::Math::TIntRect<int>_>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    (this->Scissors).AllocatorInstance.SecondaryData =
         (param_1->Scissors).AllocatorInstance.SecondaryData;
    (param_1->Scissors).AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TIntRect<int>_>)0x0;
    (this->Scissors).ArrayNum = (param_1->Scissors).ArrayNum;
    (this->Scissors).ArrayMax = (param_1->Scissors).ArrayMax;
    (param_1->Scissors).ArrayNum = 0;
    (param_1->Scissors).ArrayMax = 1;
  }
  pTVar6 = &this->RT;
  lVar8 = 3;
  lVar5 = 0x20 - (longlong)pTVar6;
  do {
    puVar2 = (undefined8 *)((longlong)param_1 + lVar5 + (longlong)pTVar6);
    if (pTVar6 != (TStaticArray<TRefCountPtr<IPooledRenderTarget>,3,4294967295> *)puVar2) {
      pIVar4 = pTVar6->Elements[0].Reference;
      pTVar6->Elements[0].Reference = (IPooledRenderTarget *)*puVar2;
      *puVar2 = 0;
      if (pIVar4 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar4->_padding_ + 0x38))();
      }
    }
    pTVar6 = (TStaticArray<TRefCountPtr<IPooledRenderTarget>,3,4294967295> *)(pTVar6->Elements + 1);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  pTVar7 = &param_1->TileClassification;
  pTVar1 = &this->TileClassification;
  if (pTVar1 != pTVar7) {
    pIVar4 = pTVar1->Reference;
    pTVar1->Reference = pTVar7->Reference;
    pTVar7->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar4 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar4->_padding_ + 0x38))();
    }
  }
  return this;
}

// GetGPUSizeBytes @ 1454f6620

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FScreenSpaceDenoiserHistory::GetGPUSizeBytes(FScreenSpaceDenoiserHistory *this,bool param_1)

{
  IPooledRenderTarget *pIVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  TStaticArray<TRefCountPtr<IPooledRenderTarget>,3,4294967295> *pTVar5;
  longlong lVar6;
  
  lVar4 = 0;
  pTVar5 = &this->RT;
  uVar3 = 0;
  lVar6 = 3;
  do {
    pIVar1 = pTVar5->Elements[0].Reference;
    uVar2 = uVar3;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      uVar2 = (**(code **)(pIVar1->_padding_ + 0x18))();
    }
    if (((param_1) && (uVar2 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)((pTVar5->Elements[0].Reference)->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    pTVar5 = (TStaticArray<TRefCountPtr<IPooledRenderTarget>,3,4294967295> *)(pTVar5->Elements + 1);
    lVar4 = lVar4 + (ulonglong)uVar2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pIVar1 = (this->TileClassification).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    uVar3 = (**(code **)(pIVar1->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar3 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->TileClassification).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  return (ulonglong)uVar3 + lVar4;
}

// operator= @ 1455216b0

FScreenSpaceDenoiserHistory * __thiscall
FScreenSpaceDenoiserHistory::operator=
          (FScreenSpaceDenoiserHistory *this,FScreenSpaceDenoiserHistory *param_1)

{
  int iVar1;
  ForElementType<UE::Math::TIntRect<int>_> FVar2;
  IPooledRenderTarget *pIVar3;
  IPooledRenderTarget *pIVar4;
  int *piVar5;
  ForElementType<UE::Math::TIntRect<int>_> FVar6;
  ForElementType<UE::Math::TIntRect<int>_> FVar7;
  
  if (this != param_1) {
    FVar2 = (param_1->Scissors).AllocatorInstance.SecondaryData;
    piVar5 = &(this->Scissors).ArrayMax;
    iVar1 = (param_1->Scissors).ArrayNum;
    FVar7 = (ForElementType<UE::Math::TIntRect<int>_>)param_1;
    if (FVar2 != (ForElementType<UE::Math::TIntRect<int>_>)0x0) {
      FVar7 = FVar2;
    }
    (this->Scissors).ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar5 == 0)) {
      *piVar5 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntRect<int>_>_>
                (0x10,4,iVar1,*piVar5,(ForElementType<UE::Math::TIntRect<int>_> *)this,iVar1,piVar5)
      ;
      FVar2 = (this->Scissors).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<UE::Math::TIntRect<int>_>)this;
      if (FVar2 != (ForElementType<UE::Math::TIntRect<int>_>)0x0) {
        FVar6 = FVar2;
      }
      ConstructItems<UE::Math::TIntRect<int>,UE::Math::TIntRect<int>,int>
                ((void *)FVar6,(TIntRect<int> *)FVar7,iVar1);
    }
  }
  pIVar3 = (param_1->RT).Elements[0].Reference;
  pIVar4 = (this->RT).Elements[0].Reference;
  if (pIVar4 != pIVar3) {
    (this->RT).Elements[0].Reference = pIVar3;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x30))();
    }
    if (pIVar4 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar4->_padding_ + 0x38))(pIVar4);
    }
  }
  pIVar3 = (param_1->RT).Elements[1].Reference;
  pIVar4 = (this->RT).Elements[1].Reference;
  if (pIVar4 != pIVar3) {
    (this->RT).Elements[1].Reference = pIVar3;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x30))();
    }
    if (pIVar4 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar4->_padding_ + 0x38))(pIVar4);
    }
  }
  pIVar3 = (param_1->RT).Elements[2].Reference;
  pIVar4 = (this->RT).Elements[2].Reference;
  if (pIVar4 != pIVar3) {
    (this->RT).Elements[2].Reference = pIVar3;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x30))();
    }
    if (pIVar4 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar4->_padding_ + 0x38))(pIVar4);
    }
  }
  pIVar3 = (param_1->TileClassification).Reference;
  pIVar4 = (this->TileClassification).Reference;
  if (pIVar4 != pIVar3) {
    (this->TileClassification).Reference = pIVar3;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x30))();
    }
    if (pIVar4 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar4->_padding_ + 0x38))(pIVar4);
    }
  }
  return this;
}

