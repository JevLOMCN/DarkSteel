// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// OnPhysicsObjectUnregistered_Internal @ 148313410

void __thiscall
FPhysicsReplicationCacheAsync::OnPhysicsObjectUnregistered_Internal
          (FPhysicsReplicationCacheAsync *this,FPhysicsObject *param_1)

{
  FPhysicsObject *local_res10 [3];
  
  local_res10[0] = param_1;
  TMapBase<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
  ::Remove((TMapBase<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
            *)&this->ReplicationCache_Internal,param_1);
  if (this->_padding_ != 0) {
    TArray<Chaos::FPhysicsObject_const_*,TSizedDefaultAllocator<32>_>::Remove
              ((TArray<Chaos::FPhysicsObject_const_*,TSizedDefaultAllocator<32>_> *)
               (this->_padding_ + 0x10),local_res10);
  }
  this->bUpdateAfterRemoval = true;
  return;
}

// OnPostSolve_Internal @ 148313890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPhysicsReplicationCacheAsync::OnPostSolve_Internal(FPhysicsReplicationCacheAsync *this)

{
  int *piVar1;
  TMap<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
  *pTVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  bool bVar30;
  EObjectStateType EVar31;
  int iVar32;
  int iVar33;
  FPhysicsReplicationCacheAsyncOutput *pFVar34;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  FScriptContainerElement *pFVar35;
  ulonglong uVar36;
  longlong lVar37;
  uint uVar38;
  longlong lVar39;
  TArray<FRigidBodyState,TSizedDefaultAllocator<32>_> *pTVar40;
  longlong lVar41;
  uint uVar42;
  longlong lVar43;
  TArray<Chaos::FPhysicsObject_const_*,TSizedDefaultAllocator<32>_> *pTVar44;
  FReadPhysicsObjectInterface<1> aFStackX_10 [8];
  uint uStackX_18;
  TArray<Chaos::FPhysicsObject_const_*,TSizedDefaultAllocator<32>_> *pTStackX_20;
  undefined1 auStack_190 [16];
  uint uStack_180;
  uint uStack_17c;
  longlong lStack_178;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
  *pTStack_170;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
  *pTStack_168;
  undefined2 uStack_160;
  longlong lStack_158;
  int *piStack_150;
  TArray<FRigidBodyState,TSizedDefaultAllocator<32>_> *pTStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  TVector<double,3> TStack_128;
  undefined1 auStack_110 [32];
  longlong lStack_f0;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
  *pTStack_e8;
  
  pTVar2 = &this->ReplicationCache_Internal;
  if (((*(int *)&(this->ReplicationCache_Internal).field_0x8 !=
        *(int *)&(this->ReplicationCache_Internal).field_0x34) ||
      (this->bUpdateAfterRemoval != false)) && (lVar41 = this->_padding_, lVar41 != 0)) {
    pFVar34 = (FPhysicsReplicationCacheAsyncOutput *)this->_padding_;
    lStack_158 = lVar41;
    if (pFVar34 == (FPhysicsReplicationCacheAsyncOutput *)0x0) {
      lVar43 = this->_padding_;
      pFVar34 = Chaos::
                TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
                ::NewDataHelper<FPhysicsReplicationCacheAsyncOutput>
                          ((TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
                            *)this,(TArray<TUniquePtr<FPhysicsReplicationCacheAsyncOutput,TDefaultDelete<FPhysicsReplicationCacheAsyncOutput>_>,TSizedDefaultAllocator<32>_>
                                    *)&this->_padding_,
                           (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>
                            *)&this->_padding_);
      pFVar34->_padding_ = lVar43;
      this->_padding_ = (longlong)pFVar34;
    }
    pTVar44 = &pFVar34->ReplicationCache_Key_Marshal;
    pFVar34->SolverFrame = *(int *)(lVar41 + 0x328) + 1;
    piVar1 = &(pFVar34->ReplicationCache_Key_Marshal).ArrayNum;
    uVar38 = *(int *)&(this->ReplicationCache_Internal).field_0x8 -
             *(int *)&(this->ReplicationCache_Internal).field_0x34;
    iVar33 = *piVar1;
    pTStackX_20 = pTVar44;
    if (iVar33 < (int)uVar38) {
      iVar32 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,uVar38 - iVar33,&pTVar44->AllocatorInstance,piVar1,
                          &(pFVar34->ReplicationCache_Key_Marshal).ArrayMax);
      memset((pTVar44->AllocatorInstance).Data + (longlong)iVar32 * 8,0,
             (longlong)(int)(uVar38 - iVar33) << 3);
    }
    else {
      if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
      }
      if ((int)uVar38 < iVar33) {
        uVar42 = iVar33 - uVar38;
        if (((int)(uVar38 | uVar42) < 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar42 != 0) {
          pFVar35 = (pTVar44->AllocatorInstance).Data + (longlong)(int)uVar38 * 8;
          iVar33 = (*piVar1 - uVar42) - uVar38;
          if (iVar33 != 0) {
            memmove(pFVar35,pFVar35 + (longlong)(int)uVar42 * 8,(longlong)iVar33 << 3);
          }
          *piVar1 = *piVar1 - uVar42;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar44->AllocatorInstance,*piVar1,
                     &(pFVar34->ReplicationCache_Key_Marshal).ArrayMax);
        }
      }
    }
    pTVar40 = &pFVar34->ReplicationCache_Value_Marshal;
    iVar33 = (pFVar34->ReplicationCache_Value_Marshal).ArrayNum;
    piVar1 = &(pFVar34->ReplicationCache_Value_Marshal).ArrayNum;
    uVar38 = *(int *)&(this->ReplicationCache_Internal).field_0x8 -
             *(int *)&(this->ReplicationCache_Internal).field_0x34;
    piStack_150 = piVar1;
    pTStack_148 = pTVar40;
    if (iVar33 < (int)uVar38) {
      iVar32 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x80,0x10,uVar38 - iVar33,&pTVar40->AllocatorInstance,piVar1,
                          &(pFVar34->ReplicationCache_Value_Marshal).ArrayMax);
      DefaultConstructItems<FRigidBodyState,int>
                ((pTVar40->AllocatorInstance).Data + (longlong)iVar32 * 0x80,uVar38 - iVar33);
    }
    else {
      if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
      }
      if ((int)uVar38 < iVar33) {
        uVar42 = iVar33 - uVar38;
        if (((int)(uVar38 | uVar42) < 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar42 != 0) {
          pFVar35 = (pTVar40->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x80;
          iVar33 = (*piVar1 - uVar42) - uVar38;
          if (iVar33 != 0) {
            memmove(pFVar35,pFVar35 + (longlong)(int)uVar42 * 0x80,(longlong)iVar33 << 7);
          }
          *piVar1 = *piVar1 - uVar42;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,&pTVar40->AllocatorInstance,*piVar1,
                     &(pFVar34->ReplicationCache_Value_Marshal).ArrayMax);
        }
      }
    }
    uVar38 = 0;
    TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)auStack_110,
               (TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
                *)pTVar2);
    dVar29 = _UNK_15127a5a8;
    dVar28 = ___xmm_404ca5dc0d03cf26404ca5dc0d03cf26;
    uStack_160 = 0;
    stack0xfffffffffffffe78 = auStack_110._16_16_;
    auStack_190._0_8_ = auStack_110._8_8_;
    lStack_178 = lStack_f0;
    pTStack_170 = pTStack_e8;
    uVar36 = auStack_110._24_8_ >> 0x20;
    pTStack_168 = (TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
                   *)pTVar2;
    if (auStack_110._28_4_ < *(int *)(auStack_110._16_8_ + 0x18)) {
      piVar1 = &(pFVar34->ReplicationCache_Key_Marshal).ArrayNum;
      lVar41 = 0;
      lVar43 = 0;
      do {
        lVar39 = (longlong)(int)uVar36 * 0xb0;
        lVar8 = *(longlong *)auStack_110._0_8_;
        dVar12 = *(double *)(lStack_158 + 0x280) - (double)ReplicationCacheCvars::LingerForSeconds;
        pdVar4 = (double *)(lVar39 + 0x10 + lVar8);
        if (dVar12 < *pdVar4 || dVar12 == *pdVar4) {
          if (*(longlong *)(lVar39 + lVar8) != 0) {
            aFStackX_10[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
            this_00 = Chaos::FReadPhysicsObjectInterface<1>::GetRigidParticle
                                (aFStackX_10,*(FPhysicsObject **)(lVar39 + lVar8));
            pTVar44 = pTStackX_20;
            if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              uStackX_18 = *(uint *)&this_00->field_0x8;
              lVar9 = *(longlong *)this_00;
              uVar42 = 0;
              if ((int)uStackX_18 < *(int *)(lVar9 + 0x550)) {
                uVar42 = ~uStackX_18 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar9 = *(longlong *)(lVar9 + 0x548);
              puVar3 = (undefined8 *)(lVar9 + (longlong)(int)uStackX_18 * 0x18);
              uVar13 = puVar3[1];
              uVar7 = *(undefined8 *)(lVar9 + 0x10 + (longlong)(int)uStackX_18 * 0x18);
              puVar5 = (undefined8 *)(lVar39 + 0x20 + lVar8);
              *puVar5 = *puVar3;
              puVar5[1] = uVar13;
              *(undefined8 *)(lVar39 + 0x30 + lVar8) = uVar7;
              uStackX_18 = *(uint *)&this_00->field_0x8;
              lVar9 = *(longlong *)this_00;
              uVar42 = 0;
              if ((int)uStackX_18 < *(int *)(lVar9 + 0x568)) {
                uVar42 = ~uStackX_18 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar37 = (longlong)(int)uStackX_18;
              lVar9 = *(longlong *)(lVar9 + 0x560);
              fVar6 = *(float *)(lVar9 + 4 + lVar37 * 0x10);
              uVar7 = *(undefined8 *)(lVar9 + 8 + lVar37 * 0x10);
              *(double *)(lVar39 + 0x40 + lVar8) = (double)*(float *)(lVar9 + lVar37 * 0x10);
              *(double *)(lVar39 + 0x48 + lVar8) = (double)fVar6;
              dVar12 = (double)(float)((ulonglong)uVar7 >> 0x20);
              auVar11._8_4_ = SUB84(dVar12,0);
              auVar11._0_8_ = (double)(float)uVar7;
              auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
              *(undefined1 (*) [16])(lVar39 + 0x50 + lVar8) = auVar11;
              Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                        (*(TKinematicGeometryParticlesImp<double,3,0> **)this_00,&TStack_128,
                         *(int *)&this_00->field_0x8);
              puVar3 = (undefined8 *)(lVar39 + 0x60 + lVar8);
              *puVar3 = TStack_128._0_8_;
              puVar3[1] = TStack_128._8_8_;
              *(undefined8 *)(lVar39 + 0x70 + lVar8) = TStack_128._16_8_;
              Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
                        (*(TKinematicGeometryParticlesImp<double,3,0> **)this_00,
                         (TVector<double,3> *)&dStack_140,*(int *)&this_00->field_0x8);
              pdVar4 = (double *)(lVar39 + 0x78 + lVar8);
              *pdVar4 = dStack_140 * dVar28;
              pdVar4[1] = dStack_138 * dVar29;
              *(double *)(lVar39 + 0x88 + lVar8) = dStack_130 * dVar28;
              EVar31 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
              uStackX_18 = ~uVar38 >> 0x1f;
              *(bool *)(lVar39 + 0x90 + lVar8) = EVar31 == Sleeping;
              uVar7 = *(undefined8 *)(lVar39 + lVar8);
              uVar42 = 0;
              if ((int)uVar38 < *piVar1) {
                uVar42 = uStackX_18;
              }
              if ((uVar42 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pTVar44 = pTStackX_20;
              *(undefined8 *)((pTStackX_20->AllocatorInstance).Data + lVar43) = uVar7;
              puVar3 = (undefined8 *)(lVar39 + 0x20 + lVar8);
              uVar7 = *puVar3;
              uVar13 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x30 + lVar8);
              uVar14 = *puVar3;
              uVar15 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x40 + lVar8);
              uVar16 = *puVar3;
              uVar17 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x50 + lVar8);
              uVar18 = *puVar3;
              uVar19 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x60 + lVar8);
              uVar20 = *puVar3;
              uVar21 = puVar3[1];
              uVar42 = 0;
              if ((int)uVar38 < *piStack_150) {
                uVar42 = uStackX_18;
              }
              puVar3 = (undefined8 *)(lVar39 + 0x70 + lVar8);
              uVar22 = *puVar3;
              uVar23 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x80 + lVar8);
              uVar24 = *puVar3;
              uVar25 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x90 + lVar8);
              uVar26 = *puVar3;
              uVar27 = puVar3[1];
              if ((uVar42 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uVar38 = uVar38 + 1;
              lVar43 = lVar43 + 8;
              pFVar35 = (pTStack_148->AllocatorInstance).Data;
              *(undefined8 *)(pFVar35 + lVar41) = uVar7;
              *(undefined8 *)(pFVar35 + lVar41 + 8) = uVar13;
              *(undefined8 *)(pFVar35 + lVar41 + 0x10) = uVar14;
              *(undefined8 *)(pFVar35 + lVar41 + 0x10 + 8) = uVar15;
              *(undefined8 *)(pFVar35 + lVar41 + 0x20) = uVar16;
              *(undefined8 *)(pFVar35 + lVar41 + 0x20 + 8) = uVar17;
              *(undefined8 *)(pFVar35 + lVar41 + 0x30) = uVar18;
              *(undefined8 *)(pFVar35 + lVar41 + 0x30 + 8) = uVar19;
              *(undefined8 *)(pFVar35 + lVar41 + 0x40) = uVar20;
              *(undefined8 *)(pFVar35 + lVar41 + 0x40 + 8) = uVar21;
              *(undefined8 *)(pFVar35 + lVar41 + 0x50) = uVar22;
              *(undefined8 *)(pFVar35 + lVar41 + 0x50 + 8) = uVar23;
              *(undefined8 *)(pFVar35 + lVar41 + 0x60) = uVar24;
              *(undefined8 *)(pFVar35 + lVar41 + 0x60 + 8) = uVar25;
              *(undefined8 *)(pFVar35 + lVar41 + 0x70) = uVar26;
              *(undefined8 *)(pFVar35 + lVar41 + 0x70 + 8) = uVar27;
              lVar41 = lVar41 + 0x80;
            }
          }
        }
        else {
          TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_170,(int)uVar36);
          uStack_160 = CONCAT11(uStack_160._1_1_,1);
          uVar42 = 0;
          if ((int)uVar38 < *piVar1) {
            uVar42 = ~uVar38 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar38 = uVar38 + 1;
          *(undefined8 *)((pTVar44->AllocatorInstance).Data + lVar43) = 0;
          lVar43 = lVar43 + 8;
          lVar41 = lVar41 + 0x80;
        }
        uStack_180 = uStack_180 & ~auStack_190._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_190);
        uVar36 = (ulonglong)uStack_17c;
      } while ((int)uStack_17c < *(int *)(auStack_190._8_8_ + 0x18));
      if (((char)uStack_160 != '\0') && (uStack_160._1_1_ != '\0')) {
        uVar38 = *(int *)&(pTStack_168->Elements).field_0x8 -
                 *(int *)&(pTStack_168->Elements).field_0x34;
        if (uVar38 < 4) {
          iVar33 = 1;
        }
        else {
          uVar36 = (ulonglong)((uVar38 >> 1) + 7) * 2 + 1;
          lVar41 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar41 == 0; lVar41 = lVar41 + -1) {
            }
          }
          iVar33 = 1 << ((byte)lVar41 & 0x1f);
        }
        if (((0 < (int)uVar38) && (pTStack_168->HashSize < iVar33)) ||
           (iVar33 < pTStack_168->HashSize)) {
          pTStack_168->HashSize = iVar33;
          TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
          ::Rehash(pTStack_168);
        }
      }
    }
    this->bUpdateAfterRemoval = false;
    if (this->_padding_ != 0) {
      (**(code **)(this->_padding_ + 200))(this);
      this->_padding_ = 0;
    }
  }
  return;
}

// OnPreSimulate_Internal @ 1483145b0

void __thiscall
FPhysicsReplicationCacheAsync::OnPreSimulate_Internal(FPhysicsReplicationCacheAsync *this)

{
  FPhysicsObject **ppFVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  FPhysicsReplicationCacheData *pFVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  FPhysicsObject **ppFVar12;
  ulonglong *puVar13;
  undefined1 auStackX_8 [8];
  
  lVar4 = this->_padding_;
  if (lVar4 != 0) {
    lVar5 = this->_padding_;
    if (lVar5 != 0) {
      ppFVar12 = *(FPhysicsObject ***)(lVar4 + 0x10);
      iVar3 = *(int *)(lVar4 + 0x18);
      ppFVar1 = ppFVar12 + iVar3;
      while( true ) {
        if (*(int *)(lVar4 + 0x18) != iVar3) {
          `TCheckedPointerIterator<Chaos::FPhysicsObject_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_8);
        }
        if (ppFVar12 == ppFVar1) break;
        uVar9 = ((uint)((ulonglong)*ppFVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppFVar12 >> 4))
                * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        pFVar8 = TMapBase<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
                 ::FindOrAddImpl<Chaos::FPhysicsObject_const_*_const_&>
                           ((TMapBase<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
                             *)&this->ReplicationCache_Internal,uVar9 >> 0x10 ^ uVar9,ppFVar12);
        ppFVar12 = ppFVar12 + 1;
        pFVar8->AccessTime = *(double *)(lVar5 + 0x280);
      }
    }
    puVar13 = *(ulonglong **)(lVar4 + 0x20);
    iVar3 = *(int *)(lVar4 + 0x28);
    puVar2 = puVar13 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x28) != iVar3) {
        `TCheckedPointerIterator<Chaos::FPhysicsObject_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
      }
      if (puVar13 == puVar2) break;
      uVar6 = *puVar13;
      if (*(int *)&(this->ReplicationCache_Internal).field_0x8 ==
          *(int *)&(this->ReplicationCache_Internal).field_0x34) {
LAB_14831a4e9:
        this->bUpdateAfterRemoval = true;
        puVar13 = puVar13 + 1;
      }
      else {
        uVar9 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        puVar7 = *(undefined1 **)&(this->ReplicationCache_Internal).field_0x40;
        puVar11 = &(this->ReplicationCache_Internal).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar11 = puVar7;
        }
        iVar10 = *(int *)(puVar11 +
                         ((longlong)*(int *)&(this->ReplicationCache_Internal).field_0x48 - 1U &
                         (longlong)(int)(uVar9 >> 0x10 ^ uVar9)) * 4);
        if (iVar10 == -1) goto LAB_14831a4e9;
        do {
          if (*(ulonglong *)
               ((longlong)iVar10 * 0xb0 + *(longlong *)&this->ReplicationCache_Internal) == uVar6) {
            TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
                             *)&this->ReplicationCache_Internal,iVar10);
            goto LAB_14831a4e9;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0xb0 + 0xa0 +
                           *(longlong *)&this->ReplicationCache_Internal);
        } while (iVar10 != -1);
        this->bUpdateAfterRemoval = true;
        puVar13 = puVar13 + 1;
      }
    }
  }
  return;
}

// PopulateReplicationCache_Internal @ 1483174f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPhysicsReplicationCacheAsync::PopulateReplicationCache_Internal
          (FPhysicsReplicationCacheAsync *this)

{
  int *piVar1;
  TMap<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
  *pTVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  bool bVar30;
  EObjectStateType EVar31;
  int iVar32;
  int iVar33;
  FPhysicsReplicationCacheAsyncOutput *pFVar34;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  FScriptContainerElement *pFVar35;
  ulonglong uVar36;
  longlong lVar37;
  uint uVar38;
  longlong lVar39;
  TArray<FRigidBodyState,TSizedDefaultAllocator<32>_> *pTVar40;
  longlong lVar41;
  uint uVar42;
  longlong lVar43;
  TArray<Chaos::FPhysicsObject_const_*,TSizedDefaultAllocator<32>_> *pTVar44;
  FReadPhysicsObjectInterface<1> local_res10 [8];
  uint local_res18;
  TArray<Chaos::FPhysicsObject_const_*,TSizedDefaultAllocator<32>_> *local_res20;
  undefined1 auStack_190 [16];
  uint uStack_180;
  uint uStack_17c;
  longlong local_178;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
  *pTStack_170;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
  *local_168;
  undefined2 local_160;
  longlong local_158;
  int *local_150;
  TArray<FRigidBodyState,TSizedDefaultAllocator<32>_> *local_148;
  double local_140;
  double dStack_138;
  double local_130;
  TVector<double,3> local_128;
  undefined1 local_110 [32];
  longlong local_f0;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
  *pTStack_e8;
  
  pTVar2 = &this->ReplicationCache_Internal;
  if (((*(int *)&(this->ReplicationCache_Internal).field_0x8 !=
        *(int *)&(this->ReplicationCache_Internal).field_0x34) ||
      (this->bUpdateAfterRemoval != false)) && (lVar41 = this->_padding_, lVar41 != 0)) {
    pFVar34 = (FPhysicsReplicationCacheAsyncOutput *)this->_padding_;
    local_158 = lVar41;
    if (pFVar34 == (FPhysicsReplicationCacheAsyncOutput *)0x0) {
      lVar43 = this->_padding_;
      pFVar34 = Chaos::
                TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
                ::NewDataHelper<FPhysicsReplicationCacheAsyncOutput>
                          ((TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
                            *)this,(TArray<TUniquePtr<FPhysicsReplicationCacheAsyncOutput,TDefaultDelete<FPhysicsReplicationCacheAsyncOutput>_>,TSizedDefaultAllocator<32>_>
                                    *)&this->_padding_,
                           (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>
                            *)&this->_padding_);
      pFVar34->_padding_ = lVar43;
      this->_padding_ = (longlong)pFVar34;
    }
    pTVar44 = &pFVar34->ReplicationCache_Key_Marshal;
    pFVar34->SolverFrame = *(int *)(lVar41 + 0x328) + 1;
    piVar1 = &(pFVar34->ReplicationCache_Key_Marshal).ArrayNum;
    uVar38 = *(int *)&(this->ReplicationCache_Internal).field_0x8 -
             *(int *)&(this->ReplicationCache_Internal).field_0x34;
    iVar33 = *piVar1;
    local_res20 = pTVar44;
    if (iVar33 < (int)uVar38) {
      iVar32 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,uVar38 - iVar33,&pTVar44->AllocatorInstance,piVar1,
                          &(pFVar34->ReplicationCache_Key_Marshal).ArrayMax);
      memset((pTVar44->AllocatorInstance).Data + (longlong)iVar32 * 8,0,
             (longlong)(int)(uVar38 - iVar33) << 3);
    }
    else {
      if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
      }
      if ((int)uVar38 < iVar33) {
        uVar42 = iVar33 - uVar38;
        if (((int)(uVar38 | uVar42) < 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar42 != 0) {
          pFVar35 = (pTVar44->AllocatorInstance).Data + (longlong)(int)uVar38 * 8;
          iVar33 = (*piVar1 - uVar42) - uVar38;
          if (iVar33 != 0) {
            memmove(pFVar35,pFVar35 + (longlong)(int)uVar42 * 8,(longlong)iVar33 << 3);
          }
          *piVar1 = *piVar1 - uVar42;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar44->AllocatorInstance,*piVar1,
                     &(pFVar34->ReplicationCache_Key_Marshal).ArrayMax);
        }
      }
    }
    pTVar40 = &pFVar34->ReplicationCache_Value_Marshal;
    iVar33 = (pFVar34->ReplicationCache_Value_Marshal).ArrayNum;
    piVar1 = &(pFVar34->ReplicationCache_Value_Marshal).ArrayNum;
    uVar38 = *(int *)&(this->ReplicationCache_Internal).field_0x8 -
             *(int *)&(this->ReplicationCache_Internal).field_0x34;
    local_150 = piVar1;
    local_148 = pTVar40;
    if (iVar33 < (int)uVar38) {
      iVar32 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x80,0x10,uVar38 - iVar33,&pTVar40->AllocatorInstance,piVar1,
                          &(pFVar34->ReplicationCache_Value_Marshal).ArrayMax);
      DefaultConstructItems<FRigidBodyState,int>
                ((pTVar40->AllocatorInstance).Data + (longlong)iVar32 * 0x80,uVar38 - iVar33);
    }
    else {
      if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
      }
      if ((int)uVar38 < iVar33) {
        uVar42 = iVar33 - uVar38;
        if (((int)(uVar38 | uVar42) < 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar42 != 0) {
          pFVar35 = (pTVar40->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x80;
          iVar33 = (*piVar1 - uVar42) - uVar38;
          if (iVar33 != 0) {
            memmove(pFVar35,pFVar35 + (longlong)(int)uVar42 * 0x80,(longlong)iVar33 << 7);
          }
          *piVar1 = *piVar1 - uVar42;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,&pTVar40->AllocatorInstance,*piVar1,
                     &(pFVar34->ReplicationCache_Value_Marshal).ArrayMax);
        }
      }
    }
    uVar38 = 0;
    TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_110,
               (TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
                *)pTVar2);
    dVar29 = _UNK_15127a5a8;
    dVar28 = ___xmm_404ca5dc0d03cf26404ca5dc0d03cf26;
    local_160 = 0;
    stack0xfffffffffffffe78 = local_110._16_16_;
    auStack_190._0_8_ = local_110._8_8_;
    local_178 = local_f0;
    pTStack_170 = pTStack_e8;
    uVar36 = local_110._24_8_ >> 0x20;
    local_168 = (TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
                 *)pTVar2;
    if (local_110._28_4_ < *(int *)(local_110._16_8_ + 0x18)) {
      piVar1 = &(pFVar34->ReplicationCache_Key_Marshal).ArrayNum;
      lVar41 = 0;
      lVar43 = 0;
      do {
        lVar39 = (longlong)(int)uVar36 * 0xb0;
        lVar8 = *(longlong *)local_110._0_8_;
        dVar12 = *(double *)(local_158 + 0x280) - (double)ReplicationCacheCvars::LingerForSeconds;
        pdVar4 = (double *)(lVar39 + 0x10 + lVar8);
        if (dVar12 < *pdVar4 || dVar12 == *pdVar4) {
          if (*(longlong *)(lVar39 + lVar8) != 0) {
            local_res10[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
            this_00 = Chaos::FReadPhysicsObjectInterface<1>::GetRigidParticle
                                (local_res10,*(FPhysicsObject **)(lVar39 + lVar8));
            pTVar44 = local_res20;
            if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              local_res18 = *(uint *)&this_00->field_0x8;
              lVar9 = *(longlong *)this_00;
              uVar42 = 0;
              if ((int)local_res18 < *(int *)(lVar9 + 0x550)) {
                uVar42 = ~local_res18 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar9 = *(longlong *)(lVar9 + 0x548);
              puVar3 = (undefined8 *)(lVar9 + (longlong)(int)local_res18 * 0x18);
              uVar13 = puVar3[1];
              uVar7 = *(undefined8 *)(lVar9 + 0x10 + (longlong)(int)local_res18 * 0x18);
              puVar5 = (undefined8 *)(lVar39 + 0x20 + lVar8);
              *puVar5 = *puVar3;
              puVar5[1] = uVar13;
              *(undefined8 *)(lVar39 + 0x30 + lVar8) = uVar7;
              local_res18 = *(uint *)&this_00->field_0x8;
              lVar9 = *(longlong *)this_00;
              uVar42 = 0;
              if ((int)local_res18 < *(int *)(lVar9 + 0x568)) {
                uVar42 = ~local_res18 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar37 = (longlong)(int)local_res18;
              lVar9 = *(longlong *)(lVar9 + 0x560);
              fVar6 = *(float *)(lVar9 + 4 + lVar37 * 0x10);
              uVar7 = *(undefined8 *)(lVar9 + 8 + lVar37 * 0x10);
              *(double *)(lVar39 + 0x40 + lVar8) = (double)*(float *)(lVar9 + lVar37 * 0x10);
              *(double *)(lVar39 + 0x48 + lVar8) = (double)fVar6;
              dVar12 = (double)(float)((ulonglong)uVar7 >> 0x20);
              auVar11._8_4_ = SUB84(dVar12,0);
              auVar11._0_8_ = (double)(float)uVar7;
              auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
              *(undefined1 (*) [16])(lVar39 + 0x50 + lVar8) = auVar11;
              Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                        (*(TKinematicGeometryParticlesImp<double,3,0> **)this_00,&local_128,
                         *(int *)&this_00->field_0x8);
              puVar3 = (undefined8 *)(lVar39 + 0x60 + lVar8);
              *puVar3 = local_128._0_8_;
              puVar3[1] = local_128._8_8_;
              *(undefined8 *)(lVar39 + 0x70 + lVar8) = local_128._16_8_;
              Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
                        (*(TKinematicGeometryParticlesImp<double,3,0> **)this_00,
                         (TVector<double,3> *)&local_140,*(int *)&this_00->field_0x8);
              pdVar4 = (double *)(lVar39 + 0x78 + lVar8);
              *pdVar4 = local_140 * dVar28;
              pdVar4[1] = dStack_138 * dVar29;
              *(double *)(lVar39 + 0x88 + lVar8) = local_130 * dVar28;
              EVar31 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
              local_res18 = ~uVar38 >> 0x1f;
              *(bool *)(lVar39 + 0x90 + lVar8) = EVar31 == Sleeping;
              uVar7 = *(undefined8 *)(lVar39 + lVar8);
              uVar42 = 0;
              if ((int)uVar38 < *piVar1) {
                uVar42 = local_res18;
              }
              if ((uVar42 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pTVar44 = local_res20;
              *(undefined8 *)((local_res20->AllocatorInstance).Data + lVar43) = uVar7;
              puVar3 = (undefined8 *)(lVar39 + 0x20 + lVar8);
              uVar7 = *puVar3;
              uVar13 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x30 + lVar8);
              uVar14 = *puVar3;
              uVar15 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x40 + lVar8);
              uVar16 = *puVar3;
              uVar17 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x50 + lVar8);
              uVar18 = *puVar3;
              uVar19 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x60 + lVar8);
              uVar20 = *puVar3;
              uVar21 = puVar3[1];
              uVar42 = 0;
              if ((int)uVar38 < *local_150) {
                uVar42 = local_res18;
              }
              puVar3 = (undefined8 *)(lVar39 + 0x70 + lVar8);
              uVar22 = *puVar3;
              uVar23 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x80 + lVar8);
              uVar24 = *puVar3;
              uVar25 = puVar3[1];
              puVar3 = (undefined8 *)(lVar39 + 0x90 + lVar8);
              uVar26 = *puVar3;
              uVar27 = puVar3[1];
              if ((uVar42 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uVar38 = uVar38 + 1;
              lVar43 = lVar43 + 8;
              pFVar35 = (local_148->AllocatorInstance).Data;
              *(undefined8 *)(pFVar35 + lVar41) = uVar7;
              *(undefined8 *)(pFVar35 + lVar41 + 8) = uVar13;
              *(undefined8 *)(pFVar35 + lVar41 + 0x10) = uVar14;
              *(undefined8 *)(pFVar35 + lVar41 + 0x10 + 8) = uVar15;
              *(undefined8 *)(pFVar35 + lVar41 + 0x20) = uVar16;
              *(undefined8 *)(pFVar35 + lVar41 + 0x20 + 8) = uVar17;
              *(undefined8 *)(pFVar35 + lVar41 + 0x30) = uVar18;
              *(undefined8 *)(pFVar35 + lVar41 + 0x30 + 8) = uVar19;
              *(undefined8 *)(pFVar35 + lVar41 + 0x40) = uVar20;
              *(undefined8 *)(pFVar35 + lVar41 + 0x40 + 8) = uVar21;
              *(undefined8 *)(pFVar35 + lVar41 + 0x50) = uVar22;
              *(undefined8 *)(pFVar35 + lVar41 + 0x50 + 8) = uVar23;
              *(undefined8 *)(pFVar35 + lVar41 + 0x60) = uVar24;
              *(undefined8 *)(pFVar35 + lVar41 + 0x60 + 8) = uVar25;
              *(undefined8 *)(pFVar35 + lVar41 + 0x70) = uVar26;
              *(undefined8 *)(pFVar35 + lVar41 + 0x70 + 8) = uVar27;
              lVar41 = lVar41 + 0x80;
            }
          }
        }
        else {
          TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_170,(int)uVar36);
          local_160 = CONCAT11(local_160._1_1_,1);
          uVar42 = 0;
          if ((int)uVar38 < *piVar1) {
            uVar42 = ~uVar38 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar38 = uVar38 + 1;
          *(undefined8 *)((pTVar44->AllocatorInstance).Data + lVar43) = 0;
          lVar43 = lVar43 + 8;
          lVar41 = lVar41 + 0x80;
        }
        uStack_180 = uStack_180 & ~auStack_190._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_190);
        uVar36 = (ulonglong)uStack_17c;
      } while ((int)uStack_17c < *(int *)(auStack_190._8_8_ + 0x18));
      if (((char)local_160 != '\0') && (local_160._1_1_ != '\0')) {
        uVar38 = *(int *)&(local_168->Elements).field_0x8 -
                 *(int *)&(local_168->Elements).field_0x34;
        if (uVar38 < 4) {
          iVar33 = 1;
        }
        else {
          uVar36 = (ulonglong)((uVar38 >> 1) + 7) * 2 + 1;
          lVar41 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar41 == 0; lVar41 = lVar41 + -1) {
            }
          }
          iVar33 = 1 << ((byte)lVar41 & 0x1f);
        }
        if (((0 < (int)uVar38) && (local_168->HashSize < iVar33)) || (iVar33 < local_168->HashSize))
        {
          local_168->HashSize = iVar33;
          TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
          ::Rehash(local_168);
        }
      }
    }
    this->bUpdateAfterRemoval = false;
    if (this->_padding_ != 0) {
      (**(code **)(this->_padding_ + 200))(this);
      this->_padding_ = 0;
    }
  }
  return;
}

// ProcessAsyncInputs @ 14831a370

void __thiscall
FPhysicsReplicationCacheAsync::ProcessAsyncInputs(FPhysicsReplicationCacheAsync *this)

{
  FPhysicsObject **ppFVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  FPhysicsReplicationCacheData *pFVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  FPhysicsObject **ppFVar12;
  ulonglong *puVar13;
  undefined1 local_res8 [8];
  
  lVar4 = this->_padding_;
  if (lVar4 != 0) {
    lVar5 = this->_padding_;
    if (lVar5 != 0) {
      ppFVar12 = *(FPhysicsObject ***)(lVar4 + 0x10);
      iVar3 = *(int *)(lVar4 + 0x18);
      ppFVar1 = ppFVar12 + iVar3;
      while( true ) {
        if (*(int *)(lVar4 + 0x18) != iVar3) {
          `TCheckedPointerIterator<Chaos::FPhysicsObject_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (ppFVar12 == ppFVar1) break;
        uVar9 = ((uint)((ulonglong)*ppFVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppFVar12 >> 4))
                * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        pFVar8 = TMapBase<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
                 ::FindOrAddImpl<Chaos::FPhysicsObject_const_*_const_&>
                           ((TMapBase<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>_>
                             *)&this->ReplicationCache_Internal,uVar9 >> 0x10 ^ uVar9,ppFVar12);
        ppFVar12 = ppFVar12 + 1;
        pFVar8->AccessTime = *(double *)(lVar5 + 0x280);
      }
    }
    puVar13 = *(ulonglong **)(lVar4 + 0x20);
    iVar3 = *(int *)(lVar4 + 0x28);
    puVar2 = puVar13 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x28) != iVar3) {
        `TCheckedPointerIterator<Chaos::FPhysicsObject_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar13 == puVar2) break;
      uVar6 = *puVar13;
      if (*(int *)&(this->ReplicationCache_Internal).field_0x8 ==
          *(int *)&(this->ReplicationCache_Internal).field_0x34) {
LAB_14831a4e9:
        this->bUpdateAfterRemoval = true;
        puVar13 = puVar13 + 1;
      }
      else {
        uVar9 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        puVar7 = *(undefined1 **)&(this->ReplicationCache_Internal).field_0x40;
        puVar11 = &(this->ReplicationCache_Internal).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar11 = puVar7;
        }
        iVar10 = *(int *)(puVar11 +
                         ((longlong)*(int *)&(this->ReplicationCache_Internal).field_0x48 - 1U &
                         (longlong)(int)(uVar9 >> 0x10 ^ uVar9)) * 4);
        if (iVar10 == -1) goto LAB_14831a4e9;
        do {
          if (*(ulonglong *)
               ((longlong)iVar10 * 0xb0 + *(longlong *)&this->ReplicationCache_Internal) == uVar6) {
            TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FPhysicsReplicationCacheData,0>,FDefaultSetAllocator>
                             *)&this->ReplicationCache_Internal,iVar10);
            goto LAB_14831a4e9;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0xb0 + 0xa0 +
                           *(longlong *)&this->ReplicationCache_Internal);
        } while (iVar10 != -1);
        this->bUpdateAfterRemoval = true;
        puVar13 = puVar13 + 1;
      }
    }
  }
  return;
}

