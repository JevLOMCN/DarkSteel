// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// FBVHParticles @ 14373c2b0

FBVHParticles * __thiscall
Chaos::FBVHParticles::FBVHParticles(FBVHParticles *this,FBVHParticles *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FBVHParticles *pFVar11;
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *this_00;
  uint uVar12;
  longlong lVar13;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TParticles_N_02_Chaos__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FBVHParticles_Chaos__6B_;
  iVar4 = (int)param_1->_padding_;
  if (iVar4 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)this,(int)this->_padding_ + iVar4);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  uVar12 = (int)param_1->_padding_ - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 * 0x18;
    do {
      uVar10 = 0;
      if ((int)uVar12 < (int)param_1->_padding_) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FBVHParticles *)(*pcVar6)();
        return pFVar11;
      }
      puVar2 = (undefined8 *)(param_1->_padding_ + lVar13);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar3 = *(undefined8 *)(param_1->_padding_ + 0x10 + lVar13);
      uVar10 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FBVHParticles *)(*pcVar6)();
        return pFVar11;
      }
      lVar5 = this->_padding_;
      puVar2 = (undefined8 *)(lVar5 + lVar13);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      *(undefined8 *)(lVar5 + 0x10 + lVar13) = uVar3;
      lVar13 = lVar13 + -0x18;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  this_00 = ::operator_new(0xd8);
  iVar4 = CollisionParticlesBVHDepth;
  if (this_00 ==
      (TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
       *)0x0) {
    this->MBVH = (TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                  *)0x0;
    return this;
  }
  *(undefined4 *)&this_00->_padding_ = 0;
  *(undefined2 *)((longlong)&this_00->_padding_ + 4) = 0x401;
  (this_00->MGlobalObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->MGlobalObjects).ArrayNum = 0;
  (this_00->MGlobalObjects).ArrayMax = 0;
  *(undefined8 *)&this_00->MWorldSpaceBoxes = 0;
  *(undefined8 *)&(this_00->MWorldSpaceBoxes).field_0x8 = 0;
  *(undefined8 *)&(this_00->MWorldSpaceBoxes).field_0x20 = 0;
  this_00->_padding_ =
       (longlong)
       &
       ___7__TBoundingVolumeHierarchy_V__TParticles_N_02_Chaos__V__TArray_HV__TSizedDefaultAllocator__0CA_____N_02_Chaos__6B_
  ;
  this_00->MObjects = (TParticles<double,3> *)this;
  *(undefined4 *)&(this_00->MWorldSpaceBoxes).field_0x28 = 0;
  *(undefined4 *)&(this_00->MWorldSpaceBoxes).field_0x2c = 0x80;
  *(undefined4 *)&(this_00->MWorldSpaceBoxes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this_00->MWorldSpaceBoxes).field_0x34 = 0;
  *(undefined8 *)&(this_00->MWorldSpaceBoxes).field_0x40 = 0;
  *(undefined4 *)&(this_00->MWorldSpaceBoxes).field_0x48 = 0;
  this_00->MMaxLevels = iVar4;
  (this_00->MScratchAllObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->MScratchAllObjects).ArrayNum = 0;
  (this_00->MScratchAllObjects).ArrayMax = 0;
  (this_00->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Elements).ArrayNum = 0;
  (this_00->Elements).ArrayMax = 0;
  (this_00->Leafs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Leafs).ArrayNum = 0;
  (this_00->Leafs).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this_00->CriticalSection,4000);
  if (0 < (int)this->_padding_) {
    TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
    ::UpdateHierarchy(this_00,false,false,0.0);
  }
  this->MBVH = this_00;
  return this;
}

// FBVHParticles @ 14373c520

FBVHParticles * __thiscall
Chaos::FBVHParticles::FBVHParticles(FBVHParticles *this,FBVHParticles *param_1)

{
  int iVar1;
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar2;
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar3;
  
  TParticles<double,3>::TParticles<double,3>
            ((TParticles<double,3> *)this,(TParticles<double,3> *)param_1);
  this->_padding_ = (longlong)&___7FBVHParticles_Chaos__6B_;
  pTVar3 = ::operator_new(0xd8);
  if (pTVar3 == (TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                 *)0x0) {
    this->MBVH = (TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                  *)0x0;
  }
  else {
    pTVar2 = param_1->MBVH;
    *(undefined4 *)&pTVar3->_padding_ = 0;
    *(undefined2 *)((longlong)&pTVar3->_padding_ + 4) = 0x401;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TBoundingVolumeHierarchy_V__TParticles_N_02_Chaos__V__TArray_HV__TSizedDefaultAllocator__0CA_____N_02_Chaos__6B_
    ;
    pTVar3->MObjects = pTVar2->MObjects;
    (pTVar3->MGlobalObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar3->MGlobalObjects).AllocatorInstance.Data =
         (pTVar2->MGlobalObjects).AllocatorInstance.Data;
    (pTVar2->MGlobalObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar3->MGlobalObjects).ArrayNum = (pTVar2->MGlobalObjects).ArrayNum;
    (pTVar3->MGlobalObjects).ArrayMax = (pTVar2->MGlobalObjects).ArrayMax;
    (pTVar2->MGlobalObjects).ArrayNum = 0;
    (pTVar2->MGlobalObjects).ArrayMax = 0;
    *(undefined8 *)&(pTVar3->MWorldSpaceBoxes).field_0x0 = 0;
    *(undefined8 *)&(pTVar3->MWorldSpaceBoxes).field_0x8 = 0;
    *(undefined8 *)&(pTVar3->MWorldSpaceBoxes).field_0x20 = 0;
    *(undefined4 *)&(pTVar3->MWorldSpaceBoxes).field_0x28 = 0;
    *(undefined4 *)&(pTVar3->MWorldSpaceBoxes).field_0x2c = 0x80;
    *(undefined4 *)&(pTVar3->MWorldSpaceBoxes).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar3->MWorldSpaceBoxes).field_0x34 = 0;
    *(undefined8 *)&(pTVar3->MWorldSpaceBoxes).field_0x40 = 0;
    *(undefined4 *)&(pTVar3->MWorldSpaceBoxes).field_0x48 = 0;
    TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
                *)&pTVar3->MWorldSpaceBoxes,
               (TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
                *)&pTVar2->MWorldSpaceBoxes);
    (pTVar3->MScratchAllObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar3->MScratchAllObjects).ArrayNum = 0;
    (pTVar3->MScratchAllObjects).ArrayMax = 0;
    iVar1 = pTVar2->MMaxLevels;
    (pTVar3->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar3->MMaxLevels = iVar1;
    (pTVar3->Elements).AllocatorInstance.Data = (pTVar2->Elements).AllocatorInstance.Data;
    (pTVar2->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar3->Elements).ArrayNum = (pTVar2->Elements).ArrayNum;
    (pTVar3->Elements).ArrayMax = (pTVar2->Elements).ArrayMax;
    (pTVar2->Elements).ArrayNum = 0;
    (pTVar2->Elements).ArrayMax = 0;
    (pTVar3->Leafs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar3->Leafs).AllocatorInstance.Data = (pTVar2->Leafs).AllocatorInstance.Data;
    (pTVar2->Leafs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar3->Leafs).ArrayNum = (pTVar2->Leafs).ArrayNum;
    (pTVar3->Leafs).ArrayMax = (pTVar2->Leafs).ArrayMax;
    (pTVar2->Leafs).ArrayNum = 0;
    (pTVar2->Leafs).ArrayMax = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar3->CriticalSection,4000);
    this->MBVH = pTVar3;
  }
  return this;
}

// FBVHParticles @ 14373c6b0

FBVHParticles * __thiscall
Chaos::FBVHParticles::FBVHParticles(FBVHParticles *this,TParticles<double,3> *param_1)

{
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar1;
  
  TParticles<double,3>::TParticles<double,3>((TParticles<double,3> *)this,param_1);
  this->_padding_ = (longlong)&___7FBVHParticles_Chaos__6B_;
  pTVar1 = ::operator_new(0xd8);
  if (pTVar1 != (TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                 *)0x0) {
    pTVar1 = TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
             ::
             TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                       (pTVar1,(TParticles<double,3> *)this,CollisionParticlesBVHDepth,false,0.0);
    this->MBVH = pTVar1;
    return this;
  }
  this->MBVH = (TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                *)0x0;
  return this;
}

// FBVHParticles @ 14373c720

FBVHParticles * __thiscall Chaos::FBVHParticles::FBVHParticles(FBVHParticles *this)

{
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TParticles_N_02_Chaos__6B_;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->_padding_)
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FBVHParticles_Chaos__6B_;
  pTVar1 = ::operator_new(0xd8);
  if (pTVar1 != (TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                 *)0x0) {
    pTVar1 = TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
             ::
             TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                       (pTVar1,(TParticles<double,3> *)this,CollisionParticlesBVHDepth,false,0.0);
    this->MBVH = pTVar1;
    return this;
  }
  this->MBVH = (TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                *)0x0;
  return this;
}

// ~FBVHParticles @ 14373e950

void __thiscall Chaos::FBVHParticles::~FBVHParticles(FBVHParticles *this)

{
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  pTVar1 = this->MBVH;
  this->_padding_ = (longlong)&___7FBVHParticles_Chaos__6B_;
  if (pTVar1 != (TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                 *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&pTVar1->CriticalSection);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar1->Leafs).AllocatorInstance.Data,
               (pTVar1->Leafs).ArrayNum);
    pFVar2 = (pTVar1->Leafs).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<Chaos::TBVHNode<double,3>,int>
              ((TBVHNode<double,3> *)(pTVar1->Elements).AllocatorInstance.Data,
               (pTVar1->Elements).ArrayNum);
    pFVar2 = (pTVar1->Elements).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pTVar1->MScratchAllObjects).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)&(pTVar1->MWorldSpaceBoxes).field_0x48 = 0;
    pvVar3 = *(void **)&(pTVar1->MWorldSpaceBoxes).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<int,Chaos::TAABB<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,Chaos::TAABB<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,Chaos::TAABB<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pTVar1->MWorldSpaceBoxes);
    pFVar2 = (pTVar1->MGlobalObjects).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0xd8);
  }
  this->_padding_ = (longlong)&___7__TParticles_N_02_Chaos__6B_;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

// operator= @ 143741880

FBVHParticles * __thiscall
Chaos::FBVHParticles::operator=(FBVHParticles *this,FBVHParticles *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  longlong *plVar4;
  int *piVar5;
  TArray<Chaos::TBVHNode<double,3>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Chaos::TBVHNode<double,3>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar9;
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar10;
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar11;
  FScriptContainerElement *pFVar12;
  
  pTVar10 = param_1->MBVH;
  pTVar11 = this->MBVH;
  pTVar1 = &pTVar10->MGlobalObjects;
  pTVar2 = &pTVar11->MGlobalObjects;
  pTVar11->MObjects = pTVar10->MObjects;
  if (pTVar2 != pTVar1) {
    pFVar12 = (pTVar2->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pTVar11->MGlobalObjects).ArrayNum = (pTVar10->MGlobalObjects).ArrayNum;
    (pTVar11->MGlobalObjects).ArrayMax = (pTVar10->MGlobalObjects).ArrayMax;
    (pTVar10->MGlobalObjects).ArrayNum = 0;
    (pTVar10->MGlobalObjects).ArrayMax = 0;
  }
  if (&pTVar11->MWorldSpaceBoxes != &pTVar10->MWorldSpaceBoxes) {
    TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
                *)&pTVar11->MWorldSpaceBoxes,
               (TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
                *)&pTVar10->MWorldSpaceBoxes);
  }
  pTVar6 = &pTVar10->Elements;
  pTVar7 = &pTVar11->Elements;
  pTVar11->MMaxLevels = pTVar10->MMaxLevels;
  if (pTVar7 != pTVar6) {
    DestructItems<Chaos::TBVHNode<double,3>,int>
              ((TBVHNode<double,3> *)(pTVar7->AllocatorInstance).Data,(pTVar11->Elements).ArrayNum);
    pFVar12 = (pTVar7->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar7->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pTVar11->Elements).ArrayNum = (pTVar10->Elements).ArrayNum;
    (pTVar11->Elements).ArrayMax = (pTVar10->Elements).ArrayMax;
    (pTVar10->Elements).ArrayNum = 0;
    (pTVar10->Elements).ArrayMax = 0;
  }
  pTVar8 = &pTVar10->Leafs;
  pTVar9 = &pTVar11->Leafs;
  if (pTVar9 != pTVar8) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar9->AllocatorInstance).Data,
               (pTVar11->Leafs).ArrayNum);
    pFVar12 = (pTVar9->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar9->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pTVar11->Leafs).ArrayNum = (pTVar10->Leafs).ArrayNum;
    (pTVar11->Leafs).ArrayMax = (pTVar10->Leafs).ArrayMax;
    (pTVar10->Leafs).ArrayNum = 0;
    (pTVar10->Leafs).ArrayMax = 0;
  }
  plVar3 = &this->_padding_;
  plVar4 = &param_1->_padding_;
  if (plVar3 != plVar4) {
    if ((void *)*plVar3 != (void *)0x0) {
      FMemory::Free((void *)*plVar3);
    }
    *plVar3 = *plVar4;
    *plVar4 = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  TArrayCollection::ResizeHelper((TArrayCollection *)this,(int)param_1->_padding_);
  *(undefined4 *)&param_1->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  piVar5 = (int *)((longlong)&param_1->_padding_ + 4);
  *piVar5 = *piVar5 + 1;
  return this;
}

// operator= @ 143741a10

FBVHParticles * __thiscall
Chaos::FBVHParticles::operator=(FBVHParticles *this,FBVHParticles *param_1)

{
  FBVHParticles *pFVar1;
  FBVHParticles local_58;
  
  pFVar1 = FBVHParticles(&local_58,param_1);
  operator=(this,pFVar1);
  ~FBVHParticles(&local_58);
  return this;
}

// FindAllIntersections @ 143773a00

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FBVHParticles::FindAllIntersections
          (FBVHParticles *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TAABB<double,3> *param_1)

{
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::FindAllIntersections(this->MBVH,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Serialize @ 1437ab3a0

void __thiscall Chaos::FBVHParticles::Serialize(FBVHParticles *this,FChaosArchive *param_1)

{
  int *piVar1;
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar2;
  int *piVar3;
  FArchive *pFVar4;
  
  TParticles<double,3>::Serialize((TParticles<double,3> *)this,(FArchive *)param_1);
  pTVar2 = this->MBVH;
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&pTVar2->MGlobalObjects);
  TBox<double,3>::SerializeAsAABBs<int>((FArchive *)param_1,&pTVar2->MWorldSpaceBoxes);
  piVar1 = &pTVar2->MMaxLevels;
  piVar3 = *(int **)param_1->_padding_;
  if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  pFVar4 = TArrayPrivateFriend::Serialize<Chaos::TBVHNode<double,3>,TSizedDefaultAllocator<32>_>
                     ((FArchive *)param_1,&pTVar2->Elements);
  TArrayPrivateFriend::
  Serialize<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (pFVar4,&pTVar2->Leafs);
  return;
}

// UpdateAccelerationStructures @ 1437b8500

void __thiscall Chaos::FBVHParticles::UpdateAccelerationStructures(FBVHParticles *this)

{
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::UpdateHierarchy(this->MBVH,false,false,0.0);
  return;
}

