// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// FPCGComponentOctreeAndMap @ 149ca2730

FPCGComponentOctreeAndMap * __thiscall
FPCGComponentOctreeAndMap::FPCGComponentOctreeAndMap
          (FPCGComponentOctreeAndMap *this,TVector<double> *param_1,double param_2)

{
  TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::
  TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>(&this->Octree,param_1,param_2);
  *(undefined8 *)&this->ComponentToIdMap = 0;
  *(undefined8 *)&(this->ComponentToIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentToIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ComponentToIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x48 = 0;
  (this->Lock).Mutex.Mutex.Ptr = (void *)0x0;
  return this;
}

// AddOrUpdateComponent @ 149caa680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPCGComponentOctreeAndMap::AddOrUpdateComponent
          (FPCGComponentOctreeAndMap *this,UPCGComponent *param_1,TBox<double> *param_2,
          bool *param_3,bool *param_4)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  UPCGComponent *pUVar20;
  bool bVar21;
  TSharedRef<FPCGComponentOctreeID,1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  FPCGComponentRef *pFVar24;
  FPCGComponentOctreeID *pFVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_XMM1 [16];
  undefined8 uVar34;
  undefined1 auVar33 [16];
  uint uVar35;
  uint uVar36;
  UPCGComponent *local_258;
  FPCGComponentOctreeID *local_250;
  TReferenceControllerBase<1> *pTStack_248;
  undefined1 local_240 [16];
  TReferenceControllerBase<1> *local_230;
  UPCGComponent *local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [48];
  TVector<double>_u_0 TStack_1b8;
  double local_1a0;
  UPCGComponent **local_198;
  FPCGComponentOctreeID **local_190;
  TVector<double>_u_0 local_188;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined8 local_158;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 local_e8;
  
  SRWLock = &this->Lock;
  local_258 = param_1;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pTVar22 = TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
            ::Find((TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
                    *)&this->ComponentToIdMap,local_258);
  if (pTVar22 != (TSharedRef<FPCGComponentOctreeID,1> *)0x0) {
    pFVar24 = TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::GetElementById
                        (&this->Octree,pTVar22->Object->Id);
    uVar34 = in_XMM1._8_8_;
    local_1e8._0_8_ = (pFVar24->IdShared).Object;
    local_1e8._8_8_ = (pFVar24->IdShared).SharedReferenceCount.ReferenceController;
    if ((TReferenceControllerBase<1> *)local_1e8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_1e8._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_1e8._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1e8._16_8_ = (pFVar24->Component).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UPCGComponent *)local_1e8._16_8_ != (UPCGComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1e8._16_8_);
      uVar34 = in_XMM1._8_8_;
    }
    local_1e8._24_8_ = (pFVar24->Bounds).Origin.field0_0x0._s_0.X;
    local_1e8._32_8_ = (pFVar24->Bounds).Origin.field0_0x0._s_0.Y;
    unique0x0000d600 = *(undefined1 (*) [16])((longlong)&(pFVar24->Bounds).Origin.field0_0x0 + 0x10)
    ;
    TStack_1b8._s_0.Y = (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Y;
    TStack_1b8._s_0.Z = (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Z;
    auVar19._4_8_ = uVar34;
    auVar19._0_4_ = local_1e8._44_4_;
    auVar33._0_8_ = auVar19._0_8_ << 0x20;
    auVar33._8_4_ = local_1e8._48_4_;
    auVar33._12_4_ = local_1e8._52_4_;
    dVar15 = (double)local_1e8._24_8_ - auVar33._8_8_;
    local_1a0 = (pFVar24->Bounds).SphereRadius;
    dVar14 = (double)local_1e8._32_8_ - TStack_1b8._s_0.Y;
    dVar12 = (double)local_1e8._24_8_ + auVar33._8_8_;
    dVar11 = (double)local_1e8._32_8_ + TStack_1b8._s_0.Y;
    dVar13 = local_1e8._40_8_ - TStack_1b8._s_0.Z;
    dVar26 = local_1e8._40_8_ + TStack_1b8._s_0.Z;
    FPCGComponentRef::UpdateBounds((FPCGComponentRef *)local_1e8);
    local_120 = 1;
    auVar4._8_4_ = SUB84((double)local_1e8._32_8_ - TStack_1b8._s_0.Y,0);
    auVar4._0_8_ = (double)local_1e8._24_8_ - TStack_1b8._s_0.X;
    auVar4._12_4_ = (int)((ulonglong)((double)local_1e8._32_8_ - TStack_1b8._s_0.Y) >> 0x20);
    *(undefined1 (*) [16])&(param_2->Min).field0_0x0 = auVar4;
    auVar3._8_4_ = SUB84((double)local_1e8._24_8_ + TStack_1b8._s_0.X,0);
    auVar3._0_8_ = (double)local_1e8._40_8_ - TStack_1b8._s_0.Z;
    auVar3._12_4_ = (int)((ulonglong)((double)local_1e8._24_8_ + TStack_1b8._s_0.X) >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_2->Min).field0_0x0 + 0x10) = auVar3;
    auVar5._8_4_ = SUB84((double)local_1e8._40_8_ + TStack_1b8._s_0.Z,0);
    auVar5._0_8_ = (double)local_1e8._32_8_ + TStack_1b8._s_0.Y;
    auVar5._12_4_ = (int)((ulonglong)((double)local_1e8._40_8_ + TStack_1b8._s_0.Z) >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_2->Max).field0_0x0 + 8) = auVar5;
    param_2->IsValid = 1;
    param_2->Pad[0] = (char)uStack_11f;
    param_2->Pad[1] = (char)((uint7)uStack_11f >> 8);
    param_2->Pad[2] = (char)((uint7)uStack_11f >> 0x10);
    param_2->Pad[3] = (char)((uint7)uStack_11f >> 0x18);
    param_2->Pad[4] = (char)((uint7)uStack_11f >> 0x20);
    param_2->Pad[5] = (char)((uint7)uStack_11f >> 0x28);
    param_2->Pad[6] = (char)((uint7)uStack_11f >> 0x30);
    if (param_2->IsValid == '\0') {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBounds.IsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGComponentOctree.cpp"
                          ,99,L"");
      if (bVar21) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (param_2->IsValid != '\0') goto LAB_149caac12;
LAB_149caac87:
      TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::RemoveElement
                (&this->Octree,pTVar22->Object->Id);
      TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::AddElement
                (&this->Octree,(FPCGComponentRef *)local_1e8);
      *param_3 = true;
    }
    else {
LAB_149caac12:
      dVar15 = dVar15 - (param_2->Min).field0_0x0._s_0.X;
      uVar35 = SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar36 = (uint)((ulonglong)dVar15 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar36,uVar35) &&
             (double)CONCAT44(uVar36,uVar35) != __real_3f1a36e2e0000000) ||
           (dVar14 = dVar14 - (param_2->Min).field0_0x0._s_0.Y,
           uVar35 = SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar36 = (uint)((ulonglong)dVar14 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
           , __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar36,uVar35) &&
             (double)CONCAT44(uVar36,uVar35) != __real_3f1a36e2e0000000)) ||
          (dVar13 = dVar13 - (param_2->Min).field0_0x0._s_0.Z,
          uVar35 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar36 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar36,uVar35) &&
          (double)CONCAT44(uVar36,uVar35) != __real_3f1a36e2e0000000)) ||
         (((dVar12 = dVar12 - (param_2->Max).field0_0x0._s_0.X,
           uVar35 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar36 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
           , __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar36,uVar35) &&
             (double)CONCAT44(uVar36,uVar35) != __real_3f1a36e2e0000000 ||
           (dVar11 = dVar11 - (param_2->Max).field0_0x0._s_0.Y,
           uVar35 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar36 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
           , __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar36,uVar35) &&
             (double)CONCAT44(uVar36,uVar35) != __real_3f1a36e2e0000000)) ||
          (dVar26 = dVar26 - (param_2->Max).field0_0x0._s_0.Z,
          uVar35 = SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar36 = (uint)((ulonglong)dVar26 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar36,uVar35) &&
          (double)CONCAT44(uVar36,uVar35) != __real_3f1a36e2e0000000)))) goto LAB_149caac87;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1e8._8_8_);
    goto LAB_149caace6;
  }
  pTVar23 = ::operator_new(0x28);
  if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
    pTVar23 = (TReferenceControllerBase<1> *)0x0;
    local_250 = ___xmm_00000000000000000000000000000010;
    pTStack_248 = _UNK_150651568;
    pFVar25 = (FPCGComponentOctreeID *)&DAT_00000010;
LAB_149caa7c5:
    if (((pFVar25->_padding_ == 0) || (*(longlong *)&pFVar25->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar25->_padding_ + 8) < 1)) {
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar25->_padding_ = (longlong)pFVar25;
      if (pTVar23 != *(TReferenceControllerBase<1> **)&pFVar25->_padding_) {
        if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar6 = *(longlong **)&pFVar25->_padding_;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))();
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar25->_padding_ = pTVar23;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    }
  }
  else {
    pTVar23->SharedReferenceCount = (atomic<int>)0x1;
    pTVar23->WeakReferenceCount = (atomic<int>)0x1;
    pTVar23->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPCGComponentOctreeID___00_SharedPointerInternals__6B_
    ;
    pTVar23[1]._padding_ = 0;
    pTVar23[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar23[1].WeakReferenceCount = (atomic<int>)0x0;
    pFVar25 = (FPCGComponentOctreeID *)(pTVar23 + 1);
    pTVar23[2]._padding_ = -1;
    local_250 = pFVar25;
    pTStack_248 = pTVar23;
    if (pFVar25 != (FPCGComponentOctreeID *)0x0) goto LAB_149caa7c5;
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar21) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar20 = local_258;
  local_240._8_8_ = local_250;
  local_230 = pTStack_248;
  if (pTStack_248 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_248->SharedReferenceCount = (atomic<int>)((int)pTStack_248->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_258 == (UPCGComponent *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGComponentOctree.cpp"
                          ,9,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  local_228 = pUVar20;
  FPCGComponentRef::UpdateBounds((FPCGComponentRef *)(local_240 + 8));
  local_120 = 1;
  auVar9._8_4_ = SUB84(dStack_218 - local_200,0);
  auVar9._0_8_ = local_220 - dStack_208;
  auVar9._12_4_ = (int)((ulonglong)(dStack_218 - local_200) >> 0x20);
  *(undefined1 (*) [16])&(param_2->Min).field0_0x0 = auVar9;
  auVar8._8_4_ = SUB84(local_220 + dStack_208,0);
  auVar8._0_8_ = local_210 - dStack_1f8;
  auVar8._12_4_ = (int)((ulonglong)(local_220 + dStack_208) >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->Min).field0_0x0 + 0x10) = auVar8;
  auVar10._8_4_ = SUB84(local_210 + dStack_1f8,0);
  auVar10._0_8_ = dStack_218 + local_200;
  auVar10._12_4_ = (int)((ulonglong)(local_210 + dStack_1f8) >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->Max).field0_0x0 + 8) = auVar10;
  param_2->IsValid = 1;
  param_2->Pad[0] = (char)uStack_11f;
  param_2->Pad[1] = (char)((uint7)uStack_11f >> 8);
  param_2->Pad[2] = (char)((uint7)uStack_11f >> 0x10);
  param_2->Pad[3] = (char)((uint7)uStack_11f >> 0x18);
  param_2->Pad[4] = (char)((uint7)uStack_11f >> 0x20);
  param_2->Pad[5] = (char)((uint7)uStack_11f >> 0x28);
  param_2->Pad[6] = (char)((uint7)uStack_11f >> 0x30);
  if ((param_2->IsValid == '\0') &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBounds.IsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGComponentOctree.cpp"
                          ,0x44,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_e8._0_1_ = (local_258->LastGeneratedBounds).IsValid;
  local_e8._1_1_ = (local_258->LastGeneratedBounds).Pad[0];
  local_e8._2_1_ = (local_258->LastGeneratedBounds).Pad[1];
  local_e8._3_1_ = (local_258->LastGeneratedBounds).Pad[2];
  local_e8._4_1_ = (local_258->LastGeneratedBounds).Pad[3];
  local_e8._5_1_ = (local_258->LastGeneratedBounds).Pad[4];
  local_e8._6_1_ = (local_258->LastGeneratedBounds).Pad[5];
  local_e8._7_1_ = (local_258->LastGeneratedBounds).Pad[6];
  auVar3 = *(undefined1 (*) [16])&(local_258->LastGeneratedBounds).Min.field0_0x0;
  auVar4 = *(undefined1 (*) [16])((longlong)&(local_258->LastGeneratedBounds).Min.field0_0x0 + 0x10)
  ;
  auVar5 = *(undefined1 (*) [16])((longlong)&(local_258->LastGeneratedBounds).Max.field0_0x0 + 8);
  if (local_258->bGenerated != false) {
    if ((undefined1)local_e8 == '\0') {
      if (param_2->IsValid != '\0') {
LAB_149caa9f9:
        *(undefined1 (*) [16])&(param_2->Min).field0_0x0 = auVar3;
        *(undefined1 (*) [16])((longlong)&(param_2->Min).field0_0x0 + 0x10) = auVar4;
        *(undefined1 (*) [16])((longlong)&(param_2->Max).field0_0x0 + 8) = auVar5;
        param_2->IsValid = (undefined1)local_e8;
        param_2->Pad[0] = local_e8._1_1_;
        param_2->Pad[1] = local_e8._2_1_;
        param_2->Pad[2] = local_e8._3_1_;
        param_2->Pad[3] = local_e8._4_1_;
        param_2->Pad[4] = local_e8._5_1_;
        param_2->Pad[5] = local_e8._6_1_;
        param_2->Pad[6] = local_e8._7_1_;
        UE::Math::TBoxSphereBounds<double,double>::TBoxSphereBounds<double,double>
                  ((TBoxSphereBounds<double,double> *)&local_188._s_0,param_2);
        local_220 = local_188._s_0.X;
        dStack_218 = local_188._s_0.Y;
        local_210 = local_188._s_0.Z;
        dStack_208 = dStack_170;
        local_200 = local_168;
        dStack_1f8 = dStack_160;
        local_1f0 = local_158;
      }
    }
    else if (((((param_2->IsValid == '\0') ||
               (dVar26 = auVar3._0_8_ - (param_2->Min).field0_0x0._s_0.X,
               auVar27._0_8_ =
                    (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
               , auVar27._8_4_ = auVar3._8_4_ & _UNK_15061cc88,
               auVar27._12_4_ = auVar3._12_4_ & _UNK_15061cc8c,
               __real_3f1a36e2e0000000 < auVar27._0_8_)) ||
              (auVar16._4_8_ = auVar27._8_8_, auVar16._0_4_ = auVar3._4_4_,
              auVar28._0_8_ = auVar16._0_8_ << 0x20, auVar28._8_4_ = auVar3._8_4_,
              auVar28._12_4_ = auVar3._12_4_,
              dVar26 = auVar28._8_8_ - (param_2->Min).field0_0x0._s_0.Y,
              __real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
             ((dVar26 = auVar4._0_8_ - (param_2->Min).field0_0x0._s_0.Z,
              auVar29._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
              auVar29._8_4_ = auVar4._8_4_ & _UNK_15061cc88,
              auVar29._12_4_ = auVar4._12_4_ & _UNK_15061cc8c,
              __real_3f1a36e2e0000000 < auVar29._0_8_ ||
              (auVar17._4_8_ = auVar29._8_8_, auVar17._0_4_ = auVar4._4_4_,
              auVar30._0_8_ = auVar17._0_8_ << 0x20, auVar30._8_4_ = auVar4._8_4_,
              auVar30._12_4_ = auVar4._12_4_,
              dVar26 = auVar30._8_8_ - (param_2->Max).field0_0x0._s_0.X,
              __real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))))
            || ((dVar26 = auVar5._0_8_ - (param_2->Max).field0_0x0._s_0.Y,
                auVar31._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     ), auVar31._8_4_ = auVar5._8_4_ & _UNK_15061cc88,
                auVar31._12_4_ = auVar5._12_4_ & _UNK_15061cc8c,
                __real_3f1a36e2e0000000 < auVar31._0_8_ ||
                (auVar18._4_8_ = auVar31._8_8_, auVar18._0_4_ = auVar5._4_4_,
                auVar32._0_8_ = auVar18._0_8_ << 0x20, auVar32._8_4_ = auVar5._8_4_,
                auVar32._12_4_ = auVar5._12_4_,
                dVar26 = auVar32._8_8_ - (param_2->Max).field0_0x0._s_0.Z,
                __real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))))
    goto LAB_149caa9f9;
  }
  TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::AddElement
            (&this->Octree,(FPCGComponentRef *)(local_240 + 8));
  local_198 = &local_258;
  *param_3 = true;
  local_190 = &local_250;
  *param_4 = true;
  TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UPCGComponent_*_const_&,TSharedRef<FPCGComponentOctreeID,1>_&&>_>
            ((TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
              *)&this->ComponentToIdMap,
             (TPairInitializer<UPCGComponent_*_const_&,TSharedRef<FPCGComponentOctreeID,1>_&&> *)
             local_240,(bool *)&local_198);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_230);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_248);
LAB_149caace6:
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// Contains @ 149cb9070

bool __thiscall
FPCGComponentOctreeAndMap::Contains(FPCGComponentOctreeAndMap *this,UPCGComponent *param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedRef<FPCGComponentOctreeID,1> *pTVar4;
  
  SRWLock = &this->Lock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar4 = TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
           ::Find((TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
                   *)&this->ComponentToIdMap,param_1);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pTVar4 != (TSharedRef<FPCGComponentOctreeID,1> *)0x0;
}

// GetAllComponents @ 149cc6060

TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> * __thiscall
FPCGComponentOctreeAndMap::GetAllComponents
          (FPCGComponentOctreeAndMap *this,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *pTVar3;
  
  SRWLock = &this->Lock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
  ::GetKeys<DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>
            ((TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
              *)&this->ComponentToIdMap,__return_storage_ptr__);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return __return_storage_ptr__;
}

// GetBounds @ 149cc67e0

TBox<double> * __thiscall
FPCGComponentOctreeAndMap::GetBounds
          (FPCGComponentOctreeAndMap *this,TBox<double> *__return_storage_ptr__,
          UPCGComponent *param_1)

{
  FPlatformRWLock *SRWLock;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FOctreeElementId2 FVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  TBox<double> *pTVar13;
  TSharedRef<FPCGComponentOctreeID,1> *pTVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  undefined7 uStack_57;
  
  SRWLock = &this->Lock;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Mutex",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                        ,0x1c,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TBox<double> *)(*pcVar9)();
      return pTVar13;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar14 = TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
            ::Find((TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
                    *)&this->ComponentToIdMap,param_1);
  if (pTVar14 != (TSharedRef<FPCGComponentOctreeID,1> *)0x0) {
    FVar8 = pTVar14->Object->Id;
    uVar18 = FVar8.NodeIndex;
    uVar16 = 0;
    if ((int)uVar18 < (this->Octree).TreeElements.ArrayNum) {
      uVar16 = ~uVar18 >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        pTVar13 = (TBox<double> *)(*pcVar9)();
        return pTVar13;
      }
    }
    uVar20 = FVar8.ElementIndex;
    pFVar19 = (this->Octree).TreeElements.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x510;
    uVar16 = 0;
    if ((int)uVar20 < *(int *)(pFVar19 + 0x508)) {
      uVar16 = ~uVar20 >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        pTVar13 = (TBox<double> *)(*pcVar9)();
        return pTVar13;
      }
    }
    lVar15 = (longlong)(int)uVar20;
    pFVar17 = *(FScriptContainerElement **)(pFVar19 + 0x500);
    if (*(FScriptContainerElement **)(pFVar19 + 0x500) == (FScriptContainerElement *)0x0) {
      pFVar17 = pFVar19;
    }
    dVar1 = *(double *)(pFVar17 + lVar15 * 0x50 + 0x30);
    dVar2 = *(double *)(pFVar17 + lVar15 * 0x50 + 0x38);
    dVar3 = *(double *)(pFVar17 + lVar15 * 0x50 + 0x40);
    dVar4 = *(double *)(pFVar17 + lVar15 * 0x50 + 0x28);
    dVar5 = *(double *)(pFVar17 + lVar15 * 0x50 + 0x18);
    dVar6 = *(double *)(pFVar17 + lVar15 * 0x50 + 0x20);
    dVar10 = dVar3 + *(double *)(pFVar17 + lVar15 * 0x50 + 0x28);
    dVar7 = *(double *)(pFVar17 + lVar15 * 0x50 + 0x20);
    (__return_storage_ptr__->Min).field0_0x0._s_0.X =
         *(double *)(pFVar17 + lVar15 * 0x50 + 0x18) - dVar1;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar6 - dVar2;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar4 - dVar3;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar5;
    auVar11._8_4_ = SUB84(dVar10,0);
    auVar11._0_8_ = dVar2 + dVar7;
    auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = auVar11;
    __return_storage_ptr__->IsValid = 1;
    __return_storage_ptr__->Pad[0] = (char)uStack_57;
    __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_57 >> 8);
    __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_57 >> 0x10);
    __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_57 >> 0x18);
    __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_57 >> 0x20);
    __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_57 >> 0x28);
    __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_57 >> 0x30);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return __return_storage_ptr__;
}

// RemapComponent @ 149cd5ab0

bool __thiscall
FPCGComponentOctreeAndMap::RemapComponent
          (FPCGComponentOctreeAndMap *this,UPCGComponent *param_1,UPCGComponent *param_2,
          bool *param_3)

{
  FPlatformRWLock *SRWLock;
  TMap<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
  *this_00;
  UPCGComponent *pUVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  TSharedRef<FPCGComponentOctreeID,1> *pTVar9;
  FPCGComponentRef *pFVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  UPCGComponent *local_168;
  FPCGComponentOctreeID *local_160;
  TReferenceControllerBase<1> *local_158;
  TPairInitializer<UPCGComponent_*_const_&,TSharedRef<FPCGComponentOctreeID,1>_&&> local_150;
  UPCGComponent *local_140;
  FPCGComponentRef local_138;
  UPCGComponent **local_e8;
  FPCGComponentOctreeID **local_e0;
  
  SRWLock = &this->Lock;
  local_168 = param_2;
  local_150.Value = (TSharedRef<FPCGComponentOctreeID,1> *)param_3;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  this_00 = &this->ComponentToIdMap;
  pTVar9 = TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
           ::Find((TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
                   *)this_00,param_1);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (pTVar9 != (TSharedRef<FPCGComponentOctreeID,1> *)0x0) {
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar9 = TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
             ::Find((TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
                     *)this_00,param_1);
    if (pTVar9 != (TSharedRef<FPCGComponentOctreeID,1> *)0x0) {
      local_160 = pTVar9->Object;
      local_158 = (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_158 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_158->SharedReferenceCount = (atomic<int>)((int)local_158->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar10 = TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::GetElementById
                          (&this->Octree,local_160->Id);
      local_138.IdShared.Object = (pFVar10->IdShared).Object;
      local_138.IdShared.SharedReferenceCount.ReferenceController =
           (pFVar10->IdShared).SharedReferenceCount.ReferenceController;
      if (local_138.IdShared.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_138.IdShared.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_138.IdShared.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar1 = (pFVar10->Component).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGComponent *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pUVar1 = local_168;
      local_138.Bounds.Origin.field0_0x0._s_0.X = (pFVar10->Bounds).Origin.field0_0x0._s_0.X;
      local_138.Bounds.Origin.field0_0x0._s_0.Y = (pFVar10->Bounds).Origin.field0_0x0._s_0.Y;
      local_138.Bounds.Origin.field0_0x0._s_0.Z = (pFVar10->Bounds).Origin.field0_0x0._s_0.Z;
      local_138.Bounds.BoxExtent.field0_0x0._s_0.X = (pFVar10->Bounds).BoxExtent.field0_0x0._s_0.X;
      local_138.Bounds.BoxExtent.field0_0x0._8_16_ =
           *(undefined1 (*) [16])((longlong)&(pFVar10->Bounds).BoxExtent.field0_0x0 + 8);
      dVar3 = local_138.Bounds.Origin.field0_0x0._s_0.Y -
              local_138.Bounds.BoxExtent.field0_0x0._8_8_;
      dVar14 = local_138.Bounds.Origin.field0_0x0._s_0.Y +
               local_138.Bounds.BoxExtent.field0_0x0._8_8_;
      local_138.Bounds.SphereRadius = (pFVar10->Bounds).SphereRadius;
      dVar5 = local_138.Bounds.Origin.field0_0x0._s_0.X +
              local_138.Bounds.BoxExtent.field0_0x0._s_0.X;
      dVar12 = local_138.Bounds.Origin.field0_0x0._s_0.X -
               local_138.Bounds.BoxExtent.field0_0x0._s_0.X;
      auVar6._4_8_ = local_138.Bounds.BoxExtent.field0_0x0._s_0.X;
      auVar6._0_4_ = local_138.Bounds.BoxExtent.field0_0x0._12_4_;
      auVar11._0_8_ = auVar6._0_8_ << 0x20;
      auVar11._8_4_ = local_138.Bounds.BoxExtent.field0_0x0._16_4_;
      auVar11._12_4_ = local_138.Bounds.BoxExtent.field0_0x0._20_4_;
      dVar4 = local_138.Bounds.Origin.field0_0x0._s_0.Z - auVar11._8_8_;
      dVar13 = local_138.Bounds.Origin.field0_0x0._s_0.Z + auVar11._8_8_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_168 != (UPCGComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_168);
      }
      local_138.Component.field0_0x0.DebugPtr = (TObjectPtr<UPCGComponent>_u_0)pUVar1;
      FPCGComponentRef::UpdateBounds(&local_138);
      dVar12 = (local_138.Bounds.Origin.field0_0x0._s_0.X -
               local_138.Bounds.BoxExtent.field0_0x0._s_0.X) - dVar12;
      if ((((__real_3f1a36e2e0000000 <
             (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
           (dVar3 = (local_138.Bounds.Origin.field0_0x0._s_0.Y -
                    local_138.Bounds.BoxExtent.field0_0x0._s_0.Y) - dVar3,
           uVar15 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar16 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
           (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000)) ||
          (dVar4 = (local_138.Bounds.Origin.field0_0x0._s_0.Z -
                   local_138.Bounds.BoxExtent.field0_0x0._s_0.Z) - dVar4,
          uVar15 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar16 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
          (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000)) ||
         (((dVar5 = (local_138.Bounds.Origin.field0_0x0._s_0.X +
                    local_138.Bounds.BoxExtent.field0_0x0._s_0.X) - dVar5,
           uVar15 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar16 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
           (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000 ||
           (dVar14 = (local_138.Bounds.Origin.field0_0x0._s_0.Y +
                     local_138.Bounds.BoxExtent.field0_0x0._s_0.Y) - dVar14,
           __real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
          (dVar13 = (local_138.Bounds.Origin.field0_0x0._s_0.Z +
                    local_138.Bounds.BoxExtent.field0_0x0._s_0.Z) - dVar13,
          __real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      *(bool *)&(local_150.Value)->Object = bVar7;
      TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::RemoveElement
                (&this->Octree,pTVar9->Object->Id);
      TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::AddElement(&this->Octree,&local_138);
      local_140 = param_1;
      if (*(int *)&(this->ComponentToIdMap).field_0x8 !=
          *(int *)&(this->ComponentToIdMap).field_0x34) {
        uVar15 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                 -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<UPCGComponent_const_*>
                  ((TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
                    *)this_00,uVar15 >> 0x10 ^ uVar15,&local_140);
      }
      local_e8 = &local_168;
      local_e0 = &local_160;
      TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UPCGComponent_*_const_&,TSharedRef<FPCGComponentOctreeID,1>_&&>_>
                ((TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
                  *)this_00,&local_150,(bool *)&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.IdShared.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_158)
      ;
      if (SRWLock != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      return true;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return false;
}

// RemoveComponent @ 149cd72c0

bool __thiscall
FPCGComponentOctreeAndMap::RemoveComponent(FPCGComponentOctreeAndMap *this,UPCGComponent *param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedRef<FPCGComponentOctreeID,1> *pTVar4;
  uint uVar5;
  UPCGComponent *local_res8;
  
  SRWLock = &this->Lock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pTVar4 = TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
           ::Find((TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
                   *)&this->ComponentToIdMap,param_1);
  if (pTVar4 == (TSharedRef<FPCGComponentOctreeID,1> *)0x0) {
    bVar2 = false;
  }
  else {
    TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::RemoveElement
              (&this->Octree,pTVar4->Object->Id);
    local_res8 = param_1;
    if (*(int *)&(this->ComponentToIdMap).field_0x8 != *(int *)&(this->ComponentToIdMap).field_0x34)
    {
      uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<UPCGComponent_const_*>
                ((TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
                  *)&this->ComponentToIdMap,uVar5 >> 0x10 ^ uVar5,&local_res8);
    }
    bVar2 = true;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return bVar2;
}

// Reset @ 149cd8a90

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FPCGComponentOctreeAndMap::Reset
          (FPCGComponentOctreeAndMap *this,TVector<double> *param_1,double param_2)

{
  TArray<TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::FNode,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::FNode,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 *puVar5;
  FPlatformRWLock *SRWLock;
  TArray<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
  *pTVar6;
  TArray<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
  *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  undefined8 uVar12;
  uint uVar13;
  bool bVar14;
  TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> *pTVar15;
  TMap<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
  *this_00;
  TOctree2<FPCGComponentRef,FPCGComponentRefSemantics> local_d8;
  
  SRWLock = &this->Lock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pTVar15 = TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::
            TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>(&local_d8,param_1,param_2);
  pTVar1 = &(this->Octree).TreeNodes;
  dVar11 = (pTVar15->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y;
  pTVar2 = &pTVar15->TreeNodes;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.X =
       (pTVar15->RootNodeContext).Bounds.Center.field0_0x0._s_0.X;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Y = dVar11;
  dVar11 = (pTVar15->RootNodeContext).Bounds.Center.field0_0x0._s_0.W;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Z =
       (pTVar15->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.W = dVar11;
  dVar11 = (pTVar15->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Y;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.X =
       (pTVar15->RootNodeContext).Bounds.Extent.field0_0x0._s_0.X;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Y = dVar11;
  dVar11 = (pTVar15->RootNodeContext).Bounds.Extent.field0_0x0._s_0.W;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Z =
       (pTVar15->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Z;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.W = dVar11;
  dVar11 = (pTVar15->RootNodeContext).ChildCenterOffset;
  (this->Octree).RootNodeContext.ChildExtent = (pTVar15->RootNodeContext).ChildExtent;
  (this->Octree).RootNodeContext.ChildCenterOffset = dVar11;
  uVar13 = (pTVar15->RootNodeContext).OutCullBits;
  uVar12 = *(undefined8 *)&(pTVar15->RootNodeContext).field_0x58;
  (this->Octree).RootNodeContext.InCullBits = (pTVar15->RootNodeContext).InCullBits;
  (this->Octree).RootNodeContext.OutCullBits = uVar13;
  *(undefined8 *)&(this->Octree).RootNodeContext.field_0x58 = uVar12;
  if (pTVar1 != pTVar2) {
    pFVar9 = (pTVar1->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Octree).TreeNodes.ArrayNum = (pTVar15->TreeNodes).ArrayNum;
    (this->Octree).TreeNodes.ArrayMax = (pTVar15->TreeNodes).ArrayMax;
    (pTVar15->TreeNodes).ArrayNum = 0;
    (pTVar15->TreeNodes).ArrayMax = 0;
  }
  pTVar3 = &pTVar15->ParentLinks;
  pTVar4 = &(this->Octree).ParentLinks;
  if (pTVar4 != pTVar3) {
    pFVar9 = (pTVar4->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Octree).ParentLinks.ArrayNum = (pTVar15->ParentLinks).ArrayNum;
    (this->Octree).ParentLinks.ArrayMax = (pTVar15->ParentLinks).ArrayMax;
    (pTVar15->ParentLinks).ArrayNum = 0;
    (pTVar15->ParentLinks).ArrayMax = 0;
  }
  pTVar6 = &pTVar15->TreeElements;
  pTVar7 = &(this->Octree).TreeElements;
  if (pTVar7 != pTVar6) {
    DestructItems<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
              ((TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *
               )(pTVar7->AllocatorInstance).Data,(this->Octree).TreeElements.ArrayNum);
    pFVar9 = (pTVar7->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar7->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Octree).TreeElements.ArrayNum = (pTVar15->TreeElements).ArrayNum;
    (this->Octree).TreeElements.ArrayMax = (pTVar15->TreeElements).ArrayMax;
    (pTVar15->TreeElements).ArrayNum = 0;
    (pTVar15->TreeElements).ArrayMax = 0;
  }
  pTVar3 = &pTVar15->FreeList;
  pTVar4 = &(this->Octree).FreeList;
  if (pTVar4 != pTVar3) {
    pFVar9 = (pTVar4->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Octree).FreeList.ArrayNum = (pTVar15->FreeList).ArrayNum;
    (this->Octree).FreeList.ArrayMax = (pTVar15->FreeList).ArrayMax;
    (pTVar15->FreeList).ArrayNum = 0;
    (pTVar15->FreeList).ArrayMax = 0;
  }
  (this->Octree).MinLeafExtent = pTVar15->MinLeafExtent;
  if (local_d8.FreeList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.FreeList.AllocatorInstance.Data);
  }
  DestructItems<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             local_d8.TreeElements.AllocatorInstance.Data,local_d8.TreeElements.ArrayNum);
  if ((TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
      local_d8.TreeElements.AllocatorInstance.Data !=
      (TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_d8.TreeElements.AllocatorInstance.Data);
  }
  if (local_d8.ParentLinks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.ParentLinks.AllocatorInstance.Data);
  }
  if (local_d8.TreeNodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.TreeNodes.AllocatorInstance.Data);
  }
  this_00 = &this->ComponentToIdMap;
  bVar14 = 1 < *(int *)&(this->ComponentToIdMap).field_0x48;
  if (!bVar14) {
    TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ComponentToIdMap).field_0x8);
  puVar5 = &(this->ComponentToIdMap).field_0xc;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x8 = 0;
  if (*(int *)puVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar5);
  }
  *(undefined4 *)&(this->ComponentToIdMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x34 = 0;
  iVar8 = *(int *)&(this->ComponentToIdMap).field_0x2c;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x28 = 0;
  if ((iVar8 < 0) || (0x80 < iVar8)) {
    *(undefined4 *)&(this->ComponentToIdMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ComponentToIdMap).field_0x10,0);
  }
  if (bVar14) {
    *(undefined4 *)&(this->ComponentToIdMap).field_0x48 = 1;
    TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// FPCGComponentOctreeAndMap @ 149e35190

/* WARNING: Type propagation algorithm not settling */

FPCGComponentOctreeAndMap * __thiscall
FPCGComponentOctreeAndMap::FPCGComponentOctreeAndMap(FPCGComponentOctreeAndMap *this)

{
  int *piVar1;
  TArray<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
  *pTVar2;
  int iVar3;
  
  pTVar2 = &(this->Octree).TreeElements;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.X = 0.0;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Y = 0.0;
  piVar1 = &(this->Octree).TreeNodes.ArrayMax;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Z = 0.0;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.W = 1.0;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.X = 0.0;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Y = 0.0;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Z = 0.0;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.W = 1.0;
  (this->Octree).TreeNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Octree).TreeNodes.ArrayNum = 0;
  (this->Octree).ParentLinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Octree).ParentLinks.ArrayNum = 0;
  (this->Octree).ParentLinks.ArrayMax = 0;
  (this->Octree).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Octree).FreeList.ArrayNum = 0;
  (this->Octree).FreeList.ArrayMax = 0;
  *piVar1 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Octree).TreeElements.ArrayNum = 0;
  (this->Octree).TreeElements.ArrayMax = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&(this->Octree).TreeNodes.AllocatorInstance,piVar1);
  (this->Octree).TreeNodes.ArrayNum = iVar3 + 1;
  DefaultConstructItems<TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::FNode,int>
            ((this->Octree).TreeNodes.AllocatorInstance.Data + (longlong)iVar3 * 8,1);
  iVar3 = (this->Octree).TreeElements.ArrayNum;
  if (iVar3 == (this->Octree).TreeElements.ArrayMax) {
    iVar3 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x510,8,&pTVar2->AllocatorInstance,&(this->Octree).TreeElements.ArrayMax);
  }
  (this->Octree).TreeElements.ArrayNum = iVar3 + 1;
  DefaultConstructItems<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 0x510,1);
  *(undefined8 *)&this->ComponentToIdMap = 0;
  *(undefined8 *)&(this->ComponentToIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentToIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ComponentToIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentToIdMap).field_0x48 = 0;
  (this->Lock).Mutex.Mutex.Ptr = (void *)0x0;
  return this;
}

// ~FPCGComponentOctreeAndMap @ 149f34260

void __thiscall
FPCGComponentOctreeAndMap::~FPCGComponentOctreeAndMap(FPCGComponentOctreeAndMap *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  *(undefined4 *)&(this->ComponentToIdMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ComponentToIdMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentToIdMap);
  pFVar2 = (this->Octree).FreeList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             (this->Octree).TreeElements.AllocatorInstance.Data,(this->Octree).TreeElements.ArrayNum
            );
  pFVar2 = (this->Octree).TreeElements.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Octree).ParentLinks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Octree).TreeNodes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

