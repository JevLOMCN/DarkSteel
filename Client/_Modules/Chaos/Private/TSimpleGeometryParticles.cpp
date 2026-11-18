// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// ~TSimpleGeometryParticles<float,3> @ 143a39a30

void __thiscall
Chaos::TSimpleGeometryParticles<float,3>::~TSimpleGeometryParticles<float,3>
          (TSimpleGeometryParticles<float,3> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TSimpleGeometryParticles_M_02_Chaos__6B_;
  *(undefined ***)&this->MGeometry =
       &___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            (*(TRefCountPtr<Chaos::FImplicitObject> **)&(this->MGeometry).field_0x8,
             *(int *)&(this->MGeometry).field_0x10);
  pvVar1 = *(void **)&(this->MGeometry).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MR = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MR).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7__TParticles_M_02_Chaos__6B_;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

// Serialize @ 143a91550

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TSimpleGeometryParticles<float,3>::Serialize
          (TSimpleGeometryParticles<float,3> *this,FChaosArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  bool bVar14;
  int iVar15;
  FChaosArchive *pFVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 local_res18 [16];
  undefined8 *local_e8 [2];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined **local_c8;
  TArray<Chaos::TRotation<double,3>,TSizedDefaultAllocator<32>_> local_c0;
  undefined **local_b0;
  TArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_a8;
  undefined **local_98;
  TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
  local_90 [5];
  
  TParticles<float,3>::Serialize((TParticles<float,3> *)this,(FArchive *)param_1);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FFortniteValkyrieBranchObjectVersion::GUID);
  iVar15 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FFortniteValkyrieBranchObjectVersion::GUID);
  uVar22 = 0;
  if (iVar15 < 3) {
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98 = &
               ___7__TArrayCollectionArray_V__TUniquePtr_VFImplicitObject_Chaos__U__TDefaultDelete_VFImplicitObject_Chaos_______Chaos__6B_
    ;
    local_b0 = &
               ___7__TArrayCollectionArray_V__TSerializablePtr_VFImplicitObject_Chaos___Chaos___Chaos__6B_
    ;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    local_90[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90[0].ArrayNum = 0;
    local_90[0].ArrayMax = 0;
    pFVar16 = operator<<<Chaos::FImplicitObject_TSizedDefaultAllocator<32>_>(param_1,&local_a8);
    operator<<<Chaos::FImplicitObject_TSizedDefaultAllocator<32>_>(pFVar16,local_90);
    if ((param_1->_padding_ & 1) != 0) {
      TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                ((TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *)
                 &(this->MGeometry).field_0x8,local_a8.ArrayNum,Default);
      iVar15 = local_a8.ArrayNum;
      uVar18 = (ulonglong)local_a8.ArrayNum;
      pFVar3 = local_a8.AllocatorInstance.Data + uVar18 * 8;
      FVar23.Data = local_a8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar18 != iVar15) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<Chaos::TSerializablePtr<Chaos::FImplicitObject>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (FVar23.Data == pFVar3) break;
        plVar17 = (longlong *)
                  (**(code **)(**(longlong **)FVar23.Data + 0x38))
                            (*(longlong **)FVar23.Data,local_e8);
        uVar20 = 0;
        if ((int)uVar22 < *(int *)&(this->MGeometry).field_0x10) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar19 = (longlong)(int)uVar22;
        uVar22 = uVar22 + 1;
        plVar4 = (longlong *)(*(longlong *)&(this->MGeometry).field_0x8 + lVar19 * 8);
        if (plVar4 != plVar17) {
          puVar9 = (undefined8 *)*plVar4;
          *plVar4 = *plVar17;
          *plVar17 = 0;
          if (puVar9 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar9 + 1);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar5 == 1) && (*(int *)((longlong)puVar9 + 0xc) == 0)) {
              (**(code **)*puVar9)(puVar9,1);
            }
          }
        }
        if (local_e8[0] != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_e8[0] + 1);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (*(int *)((longlong)local_e8[0] + 0xc) == 0)) {
            (**(code **)*local_e8[0])(local_e8[0],1);
          }
        }
        uVar18 = local_a8._8_8_ & 0xffffffff;
        FVar23.Data = FVar23.Data + 8;
      }
    }
    local_98 = &
               ___7__TArrayCollectionArray_V__TUniquePtr_VFImplicitObject_Chaos__U__TDefaultDelete_VFImplicitObject_Chaos_______Chaos__6B_
    ;
    DestructItems<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,int>
              ((TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *)
               local_90[0].AllocatorInstance.Data,local_90[0].ArrayNum);
    if (local_90[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90[0].AllocatorInstance.Data);
    }
    local_b0 = &
               ___7__TArrayCollectionArray_V__TSerializablePtr_VFImplicitObject_Chaos___Chaos___Chaos__6B_
    ;
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  else {
    operator<<<Chaos::FImplicitObject_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *)
                       &(this->MGeometry).field_0x8);
  }
  lVar19 = 0;
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  puVar2 = &(this->MR).field_0x8;
  iVar15 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if (iVar15 < 0x32) {
    local_c8 = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    TArray<Chaos::TRotation<double,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_c0,*(int *)&(this->MR).field_0x10,No);
    iVar15 = *(int *)&(this->MR).field_0x10;
    uVar22 = 0;
    if (0 < iVar15) {
      lVar24 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar22 < iVar15) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar10 = *(longlong *)puVar2;
        fVar6 = *(float *)(lVar10 + lVar24);
        fVar7 = *(float *)(lVar10 + lVar24 + 0xc);
        uVar8 = *(undefined8 *)(lVar10 + lVar24 + 4);
        dVar13 = (double)(float)((ulonglong)uVar8 >> 0x20);
        uVar20 = 0;
        if ((int)uVar22 < local_c0.ArrayNum) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar22 = uVar22 + 1;
        lVar24 = lVar24 + 0x10;
        *(double *)(local_c0.AllocatorInstance.Data + lVar19) = (double)fVar6;
        auVar12._8_4_ = SUB84(dVar13,0);
        auVar12._0_8_ = (double)(float)uVar8;
        auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(local_c0.AllocatorInstance.Data + lVar19 + 8) = auVar12;
        *(double *)(local_c0.AllocatorInstance.Data + lVar19 + 0x18) = (double)fVar7;
        lVar19 = lVar19 + 0x20;
        iVar15 = *(int *)&(this->MR).field_0x10;
      } while ((int)uVar22 < iVar15);
    }
    uVar21 = 0;
    operator<<<Chaos::TRotation<double,3>_TSizedDefaultAllocator<32>_>(param_1,&local_c0);
    (**(code **)(*(longlong *)&this->MR + 8))(&this->MR,local_c0._8_8_ & 0xffffffff);
    uVar18 = uVar21;
    uVar25 = uVar21;
    if (0 < local_c0.ArrayNum) {
      do {
        uVar20 = (uint)uVar21;
        uVar22 = 0;
        if ((int)uVar20 < local_c0.ArrayNum) {
          uVar22 = ~uVar20 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_d8 = (float)*(double *)(local_c0.AllocatorInstance.Data + uVar18);
        fStack_d4 = (float)*(double *)(local_c0.AllocatorInstance.Data + uVar18 + 8);
        fStack_d0 = (float)*(double *)(local_c0.AllocatorInstance.Data + uVar18 + 0x10);
        fStack_cc = (float)*(double *)(local_c0.AllocatorInstance.Data + uVar18 + 0x18);
        uVar22 = 0;
        if ((int)uVar20 < *(int *)&(this->MR).field_0x10) {
          uVar22 = ~uVar20 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar19 = *(longlong *)puVar2;
        uVar21 = (ulonglong)(uVar20 + 1);
        *(undefined8 *)(lVar19 + uVar25) = CONCAT44(fStack_d4,local_d8);
        ((undefined8 *)(lVar19 + uVar25))[1] = CONCAT44(fStack_cc,fStack_d0);
        uVar18 = uVar18 + 0x20;
        uVar25 = uVar25 + 0x10;
      } while ((int)(uVar20 + 1) < local_c0.ArrayNum);
    }
    local_c8 = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
  }
  else {
    operator<<<Chaos::TRotation<float,3>_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<Chaos::TRotation<float,3>,TSizedDefaultAllocator<32>_> *)puVar2);
  }
  return;
}

// SetGeometryImpl @ 143a91db0

void __thiscall
Chaos::TSimpleGeometryParticles<float,3>::SetGeometryImpl
          (TSimpleGeometryParticles<float,3> *this,int param_1,
          TRefCountPtr<Chaos::FImplicitObject> *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FImplicitObject *pFVar3;
  FImplicitObject *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1 < *(int *)&(this->MGeometry).field_0x10) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar2 = *(longlong *)&(this->MGeometry).field_0x8;
  pFVar3 = *(FImplicitObject **)(lVar2 + (longlong)param_1 * 8);
  pFVar4 = param_2->Reference;
  if (pFVar3 != pFVar4) {
    *(FImplicitObject **)(lVar2 + (longlong)param_1 * 8) = pFVar4;
    if (pFVar4 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar3->_padding_;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  return;
}

// TSimpleGeometryParticles<double,3> @ 143af94a0

TSimpleGeometryParticles<double,3> * __thiscall
Chaos::TSimpleGeometryParticles<double,3>::TSimpleGeometryParticles<double,3>
          (TSimpleGeometryParticles<double,3> *this,TSimpleGeometryParticles<double,3> *param_1)

{
  TArrayCollectionArray<Chaos::TRotation<float,3>_> *pTVar1;
  
  TParticles<double,3>::TParticles<double,3>
            ((TParticles<double,3> *)this,(TParticles<double,3> *)param_1);
  pTVar1 = &this->MR;
  this->_padding_ = (longlong)&___7__TSimpleGeometryParticles_N_02_Chaos__6B_;
  *(undefined ***)pTVar1 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MR).field_0x8 = 0;
  *(undefined8 *)&(this->MR).field_0x8 = *(undefined8 *)&(param_1->MR).field_0x8;
  *(undefined8 *)&(param_1->MR).field_0x8 = 0;
  *(undefined4 *)&(this->MR).field_0x10 = *(undefined4 *)&(param_1->MR).field_0x10;
  *(undefined4 *)&(this->MR).field_0x14 = *(undefined4 *)&(param_1->MR).field_0x14;
  *(undefined8 *)&(param_1->MR).field_0x10 = 0;
  *(undefined ***)pTVar1 = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGeometry = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MGeometry).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometry).field_0x8 = *(undefined8 *)&(param_1->MGeometry).field_0x8;
  *(undefined8 *)&(param_1->MGeometry).field_0x8 = 0;
  *(undefined4 *)&(this->MGeometry).field_0x10 = *(undefined4 *)&(param_1->MGeometry).field_0x10;
  *(undefined4 *)&(this->MGeometry).field_0x14 = *(undefined4 *)&(param_1->MGeometry).field_0x14;
  *(undefined8 *)&(param_1->MGeometry).field_0x10 = 0;
  *(undefined ***)&this->MGeometry =
       &___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar1);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGeometry)
  ;
  return this;
}

// TSimpleGeometryParticles<double,3> @ 143af9560

TSimpleGeometryParticles<double,3> * __thiscall
Chaos::TSimpleGeometryParticles<double,3>::TSimpleGeometryParticles<double,3>
          (TSimpleGeometryParticles<double,3> *this,TParticles<double,3> *param_1)

{
  TParticles<double,3>::TParticles<double,3>((TParticles<double,3> *)this,param_1);
  this->_padding_ = (longlong)&___7__TSimpleGeometryParticles_N_02_Chaos__6B_;
  *(undefined ***)&this->MR = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MR).field_0x8 = 0;
  *(undefined8 *)&(this->MR).field_0x10 = 0;
  *(undefined8 *)&(this->MGeometry).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometry).field_0x10 = 0;
  *(undefined ***)&this->MGeometry =
       &___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MR);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGeometry)
  ;
  return this;
}

// TSimpleGeometryParticles<double,3> @ 143af95d0

TSimpleGeometryParticles<double,3> * __thiscall
Chaos::TSimpleGeometryParticles<double,3>::TSimpleGeometryParticles<double,3>
          (TSimpleGeometryParticles<double,3> *this)

{
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
  *(undefined8 *)&(this->MR).field_0x8 = 0;
  this->_padding_ = (longlong)&___7__TSimpleGeometryParticles_N_02_Chaos__6B_;
  *(undefined8 *)&(this->MR).field_0x10 = 0;
  *(undefined ***)&this->MR = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGeometry =
       &___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  *(undefined8 *)&(this->MGeometry).field_0x8 = 0;
  *(undefined8 *)&(this->MGeometry).field_0x10 = 0;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MR);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGeometry)
  ;
  return this;
}

// ~TSimpleGeometryParticles<double,3> @ 143afc770

void __thiscall
Chaos::TSimpleGeometryParticles<double,3>::~TSimpleGeometryParticles<double,3>
          (TSimpleGeometryParticles<double,3> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TSimpleGeometryParticles_N_02_Chaos__6B_;
  *(undefined ***)&this->MGeometry =
       &___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            (*(TRefCountPtr<Chaos::FImplicitObject> **)&(this->MGeometry).field_0x8,
             *(int *)&(this->MGeometry).field_0x10);
  pvVar1 = *(void **)&(this->MGeometry).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MR = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MR).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7__TParticles_N_02_Chaos__6B_;
  this->_padding_ = (longlong)&___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

// Serialize @ 143b3e250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TSimpleGeometryParticles<double,3>::Serialize
          (TSimpleGeometryParticles<double,3> *this,FChaosArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  double dVar15;
  bool bVar16;
  int iVar17;
  FChaosArchive *pFVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_f8 [2];
  undefined **local_f0;
  TArray<Chaos::TRotation<double,3>,TSizedDefaultAllocator<32>_> local_e8;
  undefined **local_d0;
  TArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_c8;
  undefined **local_b8;
  TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
  local_b0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 *local_88 [9];
  
  puVar10 = (ulonglong *)param_1->_padding_;
  uVar24 = 0;
  plVar19 = &param_1->_padding_;
  puVar1 = (uint *)*puVar10 + 1;
  if ((uint *)puVar10[1] < puVar1) {
    local_f8[0] = (uint)((*plVar19 & 1) == 0);
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_f8);
    if (1 < local_f8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar22 = local_f8[0];
    if ((*plVar19 & 1) != 0) goto LAB_143b3e2da;
  }
  else {
    uVar22 = *(uint *)*puVar10;
    *puVar10 = (ulonglong)puVar1;
LAB_143b3e2da:
    if (uVar22 == 0) {
      local_res18[0] = 0;
      bVar16 = `Chaos::TParticles<double,3>::Serialize'::__l3::<lambda_1>::operator()(local_res18);
      if (!bVar16) goto LAB_143b3e310;
    }
  }
  TArrayPrivateFriend::Serialize<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,
             (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  TArrayCollection::ResizeHelper((TArrayCollection *)this,(int)this->_padding_);
LAB_143b3e310:
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *piVar2 = *piVar2 + 1;
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FFortniteValkyrieBranchObjectVersion::GUID);
  iVar17 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FFortniteValkyrieBranchObjectVersion::GUID);
  if (iVar17 < 3) {
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8 = &
               ___7__TArrayCollectionArray_V__TUniquePtr_VFImplicitObject_Chaos__U__TDefaultDelete_VFImplicitObject_Chaos_______Chaos__6B_
    ;
    local_d0 = &
               ___7__TArrayCollectionArray_V__TSerializablePtr_VFImplicitObject_Chaos___Chaos___Chaos__6B_
    ;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    pFVar18 = operator<<<Chaos::FImplicitObject_TSizedDefaultAllocator<32>_>(param_1,&local_c8);
    operator<<<Chaos::FImplicitObject_TSizedDefaultAllocator<32>_>(pFVar18,&local_b0);
    if ((*plVar19 & 1) != 0) {
      TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                ((TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *)
                 &(this->MGeometry).field_0x8,local_c8.ArrayNum,Default);
      iVar17 = local_c8.ArrayNum;
      uVar20 = (ulonglong)local_c8.ArrayNum;
      pFVar4 = local_c8.AllocatorInstance.Data + uVar20 * 8;
      FVar25.Data = local_c8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar20 != iVar17) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<Chaos::TSerializablePtr<Chaos::FImplicitObject>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (FVar25.Data == pFVar4) break;
        plVar19 = (longlong *)
                  (**(code **)(**(longlong **)FVar25.Data + 0x38))
                            (*(longlong **)FVar25.Data,local_88);
        uVar22 = 0;
        if ((int)uVar24 < *(int *)&(this->MGeometry).field_0x10) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar21 = (longlong)(int)uVar24;
        uVar24 = uVar24 + 1;
        plVar5 = (longlong *)(*(longlong *)&(this->MGeometry).field_0x8 + lVar21 * 8);
        if (plVar5 != plVar19) {
          puVar11 = (undefined8 *)*plVar5;
          *plVar5 = *plVar19;
          *plVar19 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar11 + 1);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if ((iVar6 == 1) && (*(int *)((longlong)puVar11 + 0xc) == 0)) {
              (**(code **)*puVar11)(puVar11,1);
            }
          }
        }
        if (local_88[0] != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(local_88[0] + 1);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar6 == 1) && (*(int *)((longlong)local_88[0] + 0xc) == 0)) {
            (**(code **)*local_88[0])(local_88[0],1);
          }
        }
        uVar20 = local_c8._8_8_ & 0xffffffff;
        FVar25.Data = FVar25.Data + 8;
      }
    }
    local_b8 = &
               ___7__TArrayCollectionArray_V__TUniquePtr_VFImplicitObject_Chaos__U__TDefaultDelete_VFImplicitObject_Chaos_______Chaos__6B_
    ;
    DestructItems<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,int>
              ((TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *)
               local_b0.AllocatorInstance.Data,local_b0.ArrayNum);
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
    local_d0 = &
               ___7__TArrayCollectionArray_V__TSerializablePtr_VFImplicitObject_Chaos___Chaos___Chaos__6B_
    ;
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
  else {
    operator<<<Chaos::FImplicitObject_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *)
                       &(this->MGeometry).field_0x8);
  }
  lVar21 = 0;
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  puVar3 = &(this->MR).field_0x8;
  iVar17 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if (iVar17 < 0x32) {
    local_f0 = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    TArray<Chaos::TRotation<double,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_e8,*(int *)&(this->MR).field_0x10,No);
    iVar17 = *(int *)&(this->MR).field_0x10;
    uVar24 = 0;
    if (0 < iVar17) {
      lVar26 = 0;
      do {
        uVar22 = 0;
        if ((int)uVar24 < iVar17) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar12 = *(longlong *)puVar3;
        fVar7 = *(float *)(lVar12 + lVar26);
        fVar8 = *(float *)(lVar12 + lVar26 + 0xc);
        uVar9 = *(undefined8 *)(lVar12 + lVar26 + 4);
        dVar15 = (double)(float)((ulonglong)uVar9 >> 0x20);
        uVar22 = 0;
        if ((int)uVar24 < local_e8.ArrayNum) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar24 = uVar24 + 1;
        lVar26 = lVar26 + 0x10;
        *(double *)(local_e8.AllocatorInstance.Data + lVar21) = (double)fVar7;
        auVar14._8_4_ = SUB84(dVar15,0);
        auVar14._0_8_ = (double)(float)uVar9;
        auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        *(undefined1 (*) [16])(local_e8.AllocatorInstance.Data + lVar21 + 8) = auVar14;
        *(double *)(local_e8.AllocatorInstance.Data + lVar21 + 0x18) = (double)fVar8;
        lVar21 = lVar21 + 0x20;
        iVar17 = *(int *)&(this->MR).field_0x10;
      } while ((int)uVar24 < iVar17);
    }
    uVar23 = 0;
    operator<<<Chaos::TRotation<double,3>_TSizedDefaultAllocator<32>_>(param_1,&local_e8);
    (**(code **)(*(longlong *)&this->MR + 8))(&this->MR,local_e8._8_8_ & 0xffffffff);
    uVar20 = uVar23;
    uVar27 = uVar23;
    if (0 < local_e8.ArrayNum) {
      do {
        uVar22 = (uint)uVar23;
        uVar24 = 0;
        if ((int)uVar22 < local_e8.ArrayNum) {
          uVar24 = ~uVar22 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_98 = (float)*(double *)(local_e8.AllocatorInstance.Data + uVar20);
        fStack_94 = (float)*(double *)(local_e8.AllocatorInstance.Data + uVar20 + 8);
        fStack_90 = (float)*(double *)(local_e8.AllocatorInstance.Data + uVar20 + 0x10);
        fStack_8c = (float)*(double *)(local_e8.AllocatorInstance.Data + uVar20 + 0x18);
        uVar24 = 0;
        if ((int)uVar22 < *(int *)&(this->MR).field_0x10) {
          uVar24 = ~uVar22 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar21 = *(longlong *)puVar3;
        uVar23 = (ulonglong)(uVar22 + 1);
        *(undefined8 *)(lVar21 + uVar27) = CONCAT44(fStack_94,local_98);
        ((undefined8 *)(lVar21 + uVar27))[1] = CONCAT44(fStack_8c,fStack_90);
        uVar20 = uVar20 + 0x20;
        uVar27 = uVar27 + 0x10;
      } while ((int)(uVar22 + 1) < local_e8.ArrayNum);
    }
    local_f0 = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  else {
    operator<<<Chaos::TRotation<float,3>_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<Chaos::TRotation<float,3>,TSizedDefaultAllocator<32>_> *)puVar3);
  }
  return;
}

// SetGeometryImpl @ 143b3fe40

void __thiscall
Chaos::TSimpleGeometryParticles<double,3>::SetGeometryImpl
          (TSimpleGeometryParticles<double,3> *this,int param_1,
          TRefCountPtr<Chaos::FImplicitObject> *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FImplicitObject *pFVar3;
  FImplicitObject *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1 < *(int *)&(this->MGeometry).field_0x10) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar2 = *(longlong *)&(this->MGeometry).field_0x8;
  pFVar3 = *(FImplicitObject **)(lVar2 + (longlong)param_1 * 8);
  pFVar4 = param_2->Reference;
  if (pFVar3 != pFVar4) {
    *(FImplicitObject **)(lVar2 + (longlong)param_1 * 8) = pFVar4;
    if (pFVar4 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar3->_padding_;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  return;
}

