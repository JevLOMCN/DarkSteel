// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// FPBDKinematicTriangleMeshCollisions @ 143c44ba0

FPBDKinematicTriangleMeshCollisions * __thiscall
Chaos::Softs::FPBDKinematicTriangleMeshCollisions::FPBDKinematicTriangleMeshCollisions
          (FPBDKinematicTriangleMeshCollisions *this,int param_1,FPBDFlatWeightMap *param_2,
          FPBDFlatWeightMap *param_3,float param_4,float param_5)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  FPBDKinematicTriangleMeshCollisions *pFVar5;
  
  this->NumParticles = param_1;
  this->Thickness = param_2;
  this->FrictionCoefficient = param_3;
  this->Stiffness = param_4;
  this->ColliderThickness = param_5;
  this->TriangleMesh = (FTriangleMesh *)0x0;
  (this->Positions).DataPtr = (TVector<float,3> *)0x0;
  (this->Positions).ArrayNum = 0;
  (this->PAndInvM).DataPtr = (FPAndInvM *)0x0;
  (this->PAndInvM).ArrayNum = 0;
  (this->Velocities).DataPtr = (TVector<float,3> *)0x0;
  (this->Velocities).ArrayNum = 0;
  this->SpatialHash = (THierarchicalSpatialHash<int,float> *)0x0;
  (this->CollidingParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollidingParticles).ArrayNum = 0;
  (this->CollidingParticles).ArrayMax = 0;
  (this->CollidingElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollidingElements).ArrayNum = 0;
  (this->CollidingElements).ArrayMax = 0;
  (this->Timers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar3 = __real_38d1b717;
  (this->Timers).ArrayNum = 0;
  (this->Timers).ArrayMax = 0;
  iVar1 = (this->Thickness->MapView).MapValues.ArrayNum;
  if ((((0 < iVar1) &&
       (fVar3 < (float)(*(uint *)&(this->Thickness->MapView).OffsetRange.field_0x4 &
                       __xmm_7fffffff7fffffff7fffffff7fffffff))) && (iVar1 != param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Thickness.HasWeightMap() || Thickness.Num() == NumParticles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                         ,0x1f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPBDKinematicTriangleMeshCollisions *)(*pcVar2)();
    return pFVar5;
  }
  iVar1 = (this->FrictionCoefficient->MapView).MapValues.ArrayNum;
  if (((0 < iVar1) &&
      (fVar3 < (float)(*(uint *)&(this->FrictionCoefficient->MapView).OffsetRange.field_0x4 &
                      __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
     ((iVar1 != this->NumParticles &&
      (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("!FrictionCoefficient.HasWeightMap() || FrictionCoefficient.Num() == NumParticles"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                          ,0x20,L""), bVar4)))) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPBDKinematicTriangleMeshCollisions *)(*pcVar2)();
    return pFVar5;
  }
  return this;
}

// Reset @ 143c71120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Reset(FPBDKinematicTriangleMeshCollisions *this)

{
  int *piVar1;
  TArray<TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  (this->CollidingParticles).ArrayNum = 0;
  if ((this->CollidingParticles).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CollidingParticles).AllocatorInstance,0,
               &(this->CollidingParticles).ArrayMax);
  }
  (this->CollidingElements).ArrayNum = 0;
  if ((this->CollidingElements).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->CollidingElements).AllocatorInstance,0,
               &(this->CollidingElements).ArrayMax);
  }
  pTVar2 = &this->Timers;
  local_40.InlineData[0] = '\0';
  local_40.InlineData[1] = '\0';
  local_40.InlineData[2] = '\0';
  local_40.InlineData[3] = '\0';
  local_40._padding_ = 0;
  uVar3 = this->NumParticles;
  uVar8 = (ulonglong)uVar3;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_30 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  if (-1 < (int)uVar3) {
    DestructItems<TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,int>
              ((TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
               (pTVar2->AllocatorInstance).Data,(this->Timers).ArrayNum);
    piVar1 = &(this->Timers).ArrayMax;
    (this->Timers).ArrayNum = 0;
    if (*piVar1 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar3) {
      do {
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (pFVar4 <= (FScriptContainerElement *)local_78) {
          if ((FScriptContainerElement *)local_78 < pFVar4 + (longlong)*piVar1 * 0x50) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        iVar7 = (this->Timers).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->Timers).ArrayNum = iVar7 + 1;
        this_00 = (TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                   *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x50);
        *(undefined8 *)&this_00->Elements = 0;
        *(undefined8 *)&(this_00->Elements).field_0x8 = 0;
        *(undefined8 *)&(this_00->Elements).field_0x20 = 0;
        *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
        *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
        *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
        (this_00->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
        this_00->HashSize = 0;
        TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
        operator=(this_00,(TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                           *)local_78);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    local_30 = local_30 & 0xffffffff00000000;
    if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_40.SecondaryData);
    }
    iVar7 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_48 = 0xffffffff;
    local_44 = 0;
    local_50 = 0;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar8);
}

// operator() @ 143c897e0

void __thiscall
`Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  ForElementType<FSetElementId> FVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  TVector<float,3> *pTVar11;
  uint *puVar12;
  ulonglong uVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  int iVar16;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *pTVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  TTriangleCollisionPoint<float> *pTVar23;
  float fVar24;
  FIdentityFunctor local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> local_1a8;
  undefined1 local_198;
  undefined1 local_197 [3];
  undefined4 local_194;
  uint local_190;
  longlong local_188;
  longlong *local_178;
  undefined1 auStack_170 [16];
  uint uStack_160;
  uint uStack_15c;
  longlong local_158;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *pTStack_150
  ;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *local_148;
  char local_140;
  char cStack_13f;
  longlong *local_138;
  undefined1 auStack_130 [16];
  uint uStack_120;
  uint uStack_11c;
  longlong local_118;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *pTStack_110
  ;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *local_108;
  undefined2 local_100;
  undefined4 local_f8;
  undefined1 local_f4 [4];
  undefined4 local_f0;
  FValueComparisonClass<_public:___cdecl__public:_void___cdecl_Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init(Chaos::Softs::FSolverParticlesRange_const_&,float)_::_2_::<lambda_1>::operator()(int)const_::_24_::<lambda_3>_>
  local_e8;
  longlong local_e0;
  code *local_d8;
  undefined1 *local_d0;
  FScriptContainerElement *local_c8;
  undefined4 *local_c0;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *pTStack_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *pTStack_60;
  
  lVar19 = *(longlong *)((longlong)this + 0x10);
  if ((*(longlong *)(lVar19 + 8) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar20 = *(longlong *)(lVar19 + 8);
  uVar15 = *(int *)(lVar19 + 0x10) + param_1;
  uVar22 = 0;
  if ((int)uVar15 < *(int *)(lVar20 + 0x98)) {
    uVar22 = ~uVar15 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(float *)(*(longlong *)(lVar20 + 0x90) + (longlong)(int)uVar15 * 4) == 0.0) {
    return;
  }
  fVar24 = Chaos::Softs::FPBDFlatWeightMap::GetValue
                     (*(FPBDFlatWeightMap **)(*(longlong *)this + 8),param_1);
  lVar19 = *(longlong *)this;
  uVar15 = (uint)~param_1 >> 0x1f;
  uVar22 = 0;
  if (param_1 < *(int *)(lVar19 + 0x88)) {
    uVar22 = uVar15;
  }
  local_190 = uVar15;
  if ((uVar22 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_188 = (longlong)param_1 * 0x50;
  pTVar17 = (TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> *
            )(*(longlong *)(lVar19 + 0x80) + local_188);
  local_e0 = (longlong)param_1;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::TIterator::
  TIterator((TIterator *)local_b8,pTVar17);
  local_140 = '\0';
  cStack_13f = '\0';
  stack0xfffffffffffffe98 = local_b8._16_16_;
  local_178 = (longlong *)local_b8._0_8_;
  auStack_170._0_8_ = local_b8._8_8_;
  local_158 = local_98;
  pTStack_150 = pTStack_90;
  uVar13 = local_b8._24_8_ >> 0x20;
  uVar22 = local_b8._28_4_;
  local_148 = pTVar17;
  if ((int)uVar22 < *(int *)(local_b8._16_8_ + 0x18)) {
    do {
      *(float *)(*local_178 + 4 + (longlong)(int)uVar22 * 0x10) =
           *(float *)(*local_178 + 4 + (longlong)(int)uVar13 * 0x10) +
           *(float *)((longlong)this + 8);
      if (KinematicColliderMaxTimer < *(float *)(*local_178 + 4 + (longlong)(int)uVar22 * 0x10)) {
        TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
        RemoveByIndex(pTStack_150,(int)uVar13);
        local_140 = '\x01';
      }
      uStack_160 = uStack_160 & ~auStack_170._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_170);
      uVar13 = (ulonglong)uStack_15c;
      uVar22 = uStack_15c;
    } while ((int)uStack_15c < *(int *)(auStack_170._8_8_ + 0x18));
    if ((local_140 != '\0') && (cStack_13f != '\0')) {
      uVar22 = *(int *)&(local_148->Elements).field_0x8 - *(int *)&(local_148->Elements).field_0x34;
      if (uVar22 < 4) {
        iVar8 = 1;
      }
      else {
        uVar13 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_f8 = (undefined4)lVar19;
        iVar8 = 1 << ((byte)lVar19 & 0x1f);
      }
      if (((0 < (int)uVar22) && (local_148->HashSize < iVar8)) || (iVar8 < local_148->HashSize)) {
        local_148->HashSize = iVar8;
        TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
        Rehash(local_148);
      }
    }
  }
  lVar19 = *(longlong *)((longlong)this + 0x10);
  if ((*(longlong *)(lVar19 + 8) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar11 = Chaos::TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)(lVar19 + 8),*(int *)(lVar19 + 0x10) + param_1);
  lVar19 = *(longlong *)this;
  local_d0 = local_res20;
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<``Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
             ::Call;
  bVar6 = Chaos::FTriangleMesh::PointProximityQuery<float>
                    (*(FTriangleMesh **)(lVar19 + 0x20),
                     *(THierarchicalSpatialHash<int,float> **)(lVar19 + 0x58),
                     (TArrayView<Chaos::TVector<float,3>_const_,int> *)(lVar19 + 0x28),param_1,
                     pTVar11,fVar24 * __real_3fc00000,*(float *)(lVar19 + 0x1c) * __real_3fc00000,
                     (TFunctionRef<bool___cdecl(int,int)> *)&local_d8,&local_1a8);
  if (!bVar6) goto LAB_143c8a118;
  if (3 < local_1a8.ArrayNum) {
    local_res10 = SUB41(param_1,0);
    AlgoImpl::
    IntroSortInternal<Chaos::TTriangleCollisionPoint<float>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,__Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>_>
              ((TTriangleCollisionPoint<float> *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum
               ,local_res10,(<lambda_2> *)&local_198);
    if (local_1a8.ArrayNum < 3) {
      iVar16 = 3 - local_1a8.ArrayNum;
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,4,iVar16,&local_1a8.AllocatorInstance,&local_1a8.ArrayNum,
                         &local_1a8.ArrayMax);
      DefaultConstructItems<Chaos::TTriangleCollisionPoint<float>,int>
                (local_1a8.AllocatorInstance.Data + (longlong)iVar8 * 0x38,iVar16);
    }
    else if (3 < local_1a8.ArrayNum) {
      iVar8 = local_1a8.ArrayNum + -3;
      if (iVar8 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (iVar8 == 0) goto LAB_143c89c16;
      iVar16 = (local_1a8.ArrayNum - iVar8) + -3;
      if (iVar16 != 0) {
        memmove((TTriangleCollisionPoint<float> *)(local_1a8.AllocatorInstance.Data + 0xa8),
                (TTriangleCollisionPoint<float> *)(local_1a8.AllocatorInstance.Data + 0xa8) + iVar8,
                (longlong)iVar16 * 0x38);
      }
      local_1a8.ArrayNum = local_1a8.ArrayNum - iVar8;
    }
  }
LAB_143c89c16:
  iVar8 = local_1a8.ArrayNum;
  pFVar18 = local_1a8.AllocatorInstance.Data + 8;
  pTVar23 = (TTriangleCollisionPoint<float> *)
            (local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayNum * 0x38);
  while( true ) {
    if (local_1a8.ArrayNum != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TTriangleCollisionPoint<float>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    lVar19 = *(longlong *)this;
    if ((TTriangleCollisionPoint<float> *)(pFVar18 + -8) == pTVar23) break;
    uVar22 = 0;
    if (param_1 < *(int *)(lVar19 + 0x88)) {
      uVar22 = uVar15;
    }
    if ((uVar22 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar17 = (TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
               *)(*(longlong *)(lVar19 + 0x80) + local_188);
    uVar22 = *(uint *)pFVar18;
    local_194 = 0;
    if (*(int *)&(pTVar17->Elements).field_0x8 != *(int *)&(pTVar17->Elements).field_0x34) {
      FVar3 = (pTVar17->Hash).SecondaryData;
      FVar14 = (ForElementType<FSetElementId>)&pTVar17->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar14 = FVar3;
      }
      uVar9 = *(uint *)((longlong)FVar14 + (ulonglong)(pTVar17->HashSize - 1U & uVar22) * 4);
      if (uVar9 != 0xffffffff) {
        do {
          puVar12 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&pTVar17->Elements);
          if (*puVar12 == uVar22) {
            if (puVar12 != (uint *)0x0) goto LAB_143c89d34;
            break;
          }
          uVar9 = puVar12[2];
        } while (uVar9 != 0xffffffff);
      }
    }
    local_c0 = &local_194;
    local_c8 = pFVar18;
    TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
    EmplaceByHash<TPairInitializer<int_const_&,float_&&>_>
              (pTVar17,(uint)local_f4,(TPairInitializer<int_const_&,float_&&> *)(ulonglong)uVar22,
               (bool *)&local_c8);
LAB_143c89d34:
    pFVar18 = pFVar18 + 0x38;
  }
  uVar22 = 0;
  if (param_1 < *(int *)(lVar19 + 0x88)) {
    uVar22 = uVar15;
  }
  if ((uVar22 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar20 = local_188;
  if (3 < *(int *)(*(longlong *)(lVar19 + 0x80) + 8 + local_188) -
          *(int *)(*(longlong *)(lVar19 + 0x80) + 0x34 + local_188)) {
    lVar19 = *(longlong *)this;
    uVar22 = 0;
    if (param_1 < *(int *)(lVar19 + 0x88)) {
      uVar22 = uVar15;
    }
    if ((uVar22 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_e8.Predicate.Predicate =
         (TDereferenceWrapper<float,_public:___cdecl__public:_void___cdecl_Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init(Chaos::Softs::FSolverParticlesRange_const_&,float)_::_2_::<lambda_1>::operator()(int)const_::_24_::<lambda_3>_>
          )local_197;
    TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
    Sort<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<__Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init_::__l2::<lambda_1>::operator()_::__l24::<lambda_3>_>_>
              ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                *)(*(longlong *)(lVar19 + 0x80) + lVar20),&local_e8);
  }
  lVar19 = *(longlong *)this;
  uVar22 = 0;
  if (param_1 < *(int *)(lVar19 + 0x88)) {
    uVar22 = uVar15;
  }
  if ((uVar22 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar19 = *(longlong *)(lVar19 + 0x80);
  if (0 < *(int *)(lVar19 + 8 + lVar20) - *(int *)(lVar19 + 0x34 + lVar20)) {
    piVar4 = *(int **)((longlong)this + 0x18);
    LOCK();
    iVar8 = *piVar4;
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    lVar19 = *(longlong *)this;
    bVar6 = iVar8 < 0;
    if ((bVar6 || *(int *)(lVar19 + 0x68) <= iVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar21 = (longlong)iVar8;
    *(int *)(*(longlong *)(lVar19 + 0x60) + lVar21 * 4) = param_1;
    lVar19 = *(longlong *)this;
    iVar16 = 0;
    uVar22 = 0;
    if (param_1 < *(int *)(lVar19 + 0x88)) {
      uVar22 = local_190;
    }
    if ((uVar22 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar17 = (TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
               *)(*(longlong *)(lVar19 + 0x80) + lVar20);
    TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::TIterator
    ::TIterator((TIterator *)local_88,pTVar17);
    local_100 = 0;
    stack0xfffffffffffffed8 = local_88._16_16_;
    local_138 = (longlong *)local_88._0_8_;
    auStack_130._0_8_ = local_88._8_8_;
    local_118 = local_68;
    pTStack_110 = pTStack_60;
    uVar13 = local_88._24_8_ >> 0x20;
    local_108 = pTVar17;
    if ((int)local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      lVar19 = 0;
      uVar22 = local_88._28_4_;
      do {
        if (lVar19 < 3) {
          lVar20 = *(longlong *)this;
          uVar2 = *(undefined4 *)(*local_138 + (longlong)(int)uVar13 * 0x10);
          if ((bVar6 || *(int *)(lVar20 + 0x78) <= iVar8) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar1 = lVar19 + lVar21 * 3;
          iVar16 = iVar16 + 1;
          lVar19 = lVar19 + 1;
          *(undefined4 *)(*(longlong *)(lVar20 + 0x70) + lVar1 * 4) = uVar2;
        }
        else {
          TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
          RemoveByIndex(pTStack_110,uVar22);
          local_100 = CONCAT11(local_100._1_1_,1);
        }
        uStack_120 = uStack_120 & ~auStack_130._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_130);
        uVar13 = (ulonglong)uStack_11c;
        uVar22 = uStack_11c;
      } while ((int)uStack_11c < *(int *)(auStack_130._8_8_ + 0x18));
      if (((char)local_100 != '\0') && (local_100._1_1_ != '\0')) {
        uVar22 = *(int *)&(local_108->Elements).field_0x8 -
                 *(int *)&(local_108->Elements).field_0x34;
        if (uVar22 < 4) {
          iVar10 = 1;
        }
        else {
          uVar13 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_f0 = (undefined4)lVar19;
          iVar10 = 1 << ((byte)lVar19 & 0x1f);
        }
        if (((0 < (int)uVar22) && (local_108->HashSize < iVar10)) || (iVar10 < local_108->HashSize))
        {
          local_108->HashSize = iVar10;
          TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
          Rehash(local_108);
        }
      }
    }
    lVar19 = (longlong)iVar16;
    if (lVar19 < 3) {
      lVar20 = (lVar19 + lVar21 * 3) * 4;
      lVar19 = 3 - lVar19;
      do {
        lVar21 = *(longlong *)this;
        if ((bVar6 || *(int *)(lVar21 + 0x78) <= iVar8) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)(lVar20 + *(longlong *)(lVar21 + 0x70)) = 0xffffffff;
        lVar20 = lVar20 + 4;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
LAB_143c8a118:
  if ((TTriangleCollisionPoint<float> *)local_1a8.AllocatorInstance.Data !=
      (TTriangleCollisionPoint<float> *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  return;
}

// Apply @ 143c8ed60

void __thiscall
Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Apply
          (FPBDKinematicTriangleMeshCollisions *this,FSolverParticlesRange *param_1,float param_2)

{
  TVector<float,2> *pTVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FPBDFlatWeightMap *pFVar7;
  FPBDFlatWeightMap *pFVar8;
  FScriptContainerElement *pFVar9;
  float *pfVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FPAndInvM *pFVar13;
  FTriangleMesh *pFVar14;
  FTriangleMesh *pFVar15;
  TVector<float,3> *pTVar16;
  code *pcVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar25;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar26;
  float *pfVar27;
  TVector<float,3> *pTVar28;
  TVector<float,3> *pTVar29;
  TVector<float,3> *pTVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  undefined8 in_stack_fffffffffffffd20;
  undefined8 in_stack_fffffffffffffd28;
  undefined8 in_stack_fffffffffffffd48;
  undefined8 in_stack_fffffffffffffd50;
  undefined4 uVar52;
  undefined1 local_288;
  TVector<float,2> *local_278;
  longlong local_260;
  uint local_254;
  longlong local_240;
  longlong local_230;
  float local_228;
  float local_224;
  float local_220;
  float local_218;
  float local_214;
  float local_210;
  undefined8 local_208;
  undefined8 local_1fc;
  undefined8 local_1f0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1e0;
  TArrayView<Chaos::TVector<float,3>,int> local_1d0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1c0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1b0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1a0;
  TArrayView<Chaos::TVector<float,3>,int> local_190;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_180;
  TArrayView<Chaos::TVector<float,3>,int> local_170;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_160;
  TArrayView<Chaos::TVector<float,3>,int> local_150;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_140;
  TArrayView<Chaos::TVector<float,3>,int> local_130;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_120;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_110;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_100;
  TArrayView<Chaos::TVector<float,3>,int> local_f0 [11];
  
  uVar47 = (undefined4)((ulonglong)in_stack_fffffffffffffd20 >> 0x20);
  uVar49 = (undefined4)((ulonglong)in_stack_fffffffffffffd28 >> 0x20);
  uVar51 = (undefined4)((ulonglong)in_stack_fffffffffffffd48 >> 0x20);
  uVar52 = (undefined4)((ulonglong)in_stack_fffffffffffffd50 >> 0x20);
  if ((this->CollidingParticles).ArrayNum != 0) {
    if ((this->TriangleMesh == (FTriangleMesh *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("TriangleMesh",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDKinematicTriangleMeshCollisions.cpp"
                            ,0x95,L""), bVar19)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    bVar19 = -1 < CpuChannel->Enabled;
    if (bVar19) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId150,
                 "FPBDKinematicTriangleMeshCollisions_ApplyKinematicConstraints",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDKinematicTriangleMeshCollisions.cpp"
                 ,0x96);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId150);
    }
    fVar39 = KinematicColliderMaxDepthMultiplier;
    fVar42 = KinematicColliderFalloffMultiplier;
    if (bChaos_KinematicTriangleMesh_ISPC_Enabled == false) {
      local_254 = 0;
      if (0 < (this->CollidingParticles).ArrayNum) {
        local_230 = 0;
        local_260 = 0;
        uVar41 = __xmm_80000000800000008000000080000000;
        fVar42 = __real_3f800000;
        do {
          fVar39 = __real_38d1b717;
          uVar21 = 0;
          if ((int)local_254 < (this->CollidingParticles).ArrayNum) {
            uVar21 = ~local_254 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          iVar4 = *(int *)((this->CollidingParticles).AllocatorInstance.Data + local_230);
          pFVar7 = this->Thickness;
          if (((pFVar7->MapView).MapValues.ArrayNum < 1) ||
             (fVar34 = *(float *)&(pFVar7->MapView).OffsetRange.field_0x4,
             (float)((uint)fVar34 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar39)) {
            fVar43 = *(float *)&(pFVar7->MapView).OffsetRange;
          }
          else {
            fVar43 = *(float *)&(pFVar7->MapView).OffsetRange;
            pfVar27 = TArrayView<float_const_,int>::operator[](&(pFVar7->MapView).MapValues,iVar4);
            fVar43 = fVar34 * *pfVar27 + fVar43;
          }
          fVar43 = fVar43 + this->ColliderThickness;
          local_240 = 0;
          fVar34 = fVar43 * KinematicColliderFalloffMultiplier;
          if (fVar43 * KinematicColliderFalloffMultiplier <= fVar39) {
            fVar34 = fVar39;
          }
          fVar39 = (float)((uint)(fVar43 * KinematicColliderMaxDepthMultiplier) ^ uVar41);
          fVar34 = fVar42 / fVar34;
          lVar33 = local_260;
          do {
            uVar21 = 0;
            if ((int)local_254 < (this->CollidingElements).ArrayNum) {
              uVar21 = ~local_254 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            uVar21 = *(uint *)((this->CollidingElements).AllocatorInstance.Data + lVar33);
            lVar32 = (longlong)(int)uVar21;
            if (uVar21 == 0xffffffff) break;
            pFVar14 = this->TriangleMesh;
            uVar31 = ~uVar21 >> 0x1f;
            uVar22 = 0;
            if ((int)uVar21 < (pFVar14->MElements).ArrayNum) {
              uVar22 = uVar31;
            }
            if ((uVar22 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pFVar15 = this->TriangleMesh;
            uVar22 = *(uint *)((pFVar14->MElements).AllocatorInstance.Data + lVar32 * 0xc);
            uVar23 = 0;
            if ((int)uVar21 < (pFVar15->MElements).ArrayNum) {
              uVar23 = uVar31;
            }
            if ((uVar23 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pFVar14 = this->TriangleMesh;
            uVar23 = *(uint *)((pFVar15->MElements).AllocatorInstance.Data + lVar32 * 0xc + 4);
            uVar24 = 0;
            if ((int)uVar21 < (pFVar14->MElements).ArrayNum) {
              uVar24 = uVar31;
            }
            if ((uVar24 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            uVar21 = *(uint *)((pFVar14->MElements).AllocatorInstance.Data + lVar32 * 0xc + 8);
            if ((*(longlong *)&param_1->field_0x8 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x57,L""), bVar20)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pTVar28 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                          iVar4 + *(int *)&param_1->field_0x10);
            uVar31 = 0;
            if ((int)uVar22 < (this->Positions).ArrayNum) {
              uVar31 = ~uVar22 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar20)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pTVar29 = (this->Positions).DataPtr + (int)uVar22;
            uVar31 = 0;
            if ((int)uVar23 < (this->Positions).ArrayNum) {
              uVar31 = ~uVar23 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar20)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pTVar30 = (this->Positions).DataPtr + (int)uVar23;
            uVar31 = 0;
            if ((int)uVar21 < (this->Positions).ArrayNum) {
              uVar31 = ~uVar21 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar20)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            uVar3 = *(undefined8 *)pTVar29;
            local_1fc = *(undefined8 *)pTVar30;
            fVar35 = *(float *)&pTVar30->field_0x8 - *(float *)&pTVar29->field_0x8;
            pTVar16 = (this->Positions).DataPtr;
            fVar46 = (float)local_1fc - (float)uVar3;
            local_1f0 = *(undefined8 *)(pTVar16 + (int)uVar21);
            pTVar16 = pTVar16 + (int)uVar21;
            fVar36 = *(float *)&pTVar16->field_0x8 - *(float *)&pTVar29->field_0x8;
            fVar38 = (float)local_1f0 - (float)uVar3;
            local_208._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
            fVar37 = (float)((ulonglong)local_1f0 >> 0x20) - local_208._4_4_;
            local_208._4_4_ = (float)((ulonglong)local_1fc >> 0x20) - local_208._4_4_;
            fVar48 = local_208._4_4_ * fVar36 - fVar35 * fVar37;
            fVar50 = fVar38 * fVar35 - fVar46 * fVar36;
            fVar36 = fVar46 * fVar37 - fVar38 * local_208._4_4_;
            fVar35 = fVar50 * fVar50 + fVar48 * fVar48 + fVar36 * fVar36;
            uVar47 = fVar36;
            uVar49 = fVar48;
            uVar51 = fVar50;
            if ((fVar35 != fVar42) &&
               (uVar47 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
               uVar49 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
               uVar51 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
               __real_322bcc77 <= fVar35)) {
              fVar35 = __real_3f800000 / SQRT(fVar35);
              uVar47 = fVar35 * fVar36;
              uVar49 = fVar35 * fVar48;
              uVar51 = fVar35 * fVar50;
            }
            fVar48 = (float)(uVar49 ^ uVar41);
            fVar50 = (float)(uVar51 ^ uVar41);
            fVar46 = (float)(uVar47 ^ uVar41);
            local_208 = uVar3;
            FindClosestPointAndBaryOnTriangle<float,3>
                      ((TVector<float,3> *)&local_228,pTVar29,pTVar30,pTVar16,pTVar28,
                       (TVector<float,3> *)&local_218);
            fVar38 = *(float *)&pTVar28->field_0x4 - local_224;
            fVar35 = *(float *)pTVar28 - local_228;
            fVar36 = *(float *)&pTVar28->field_0x8 - local_220;
            fVar37 = fVar38 * fVar50 + fVar48 * fVar35 + fVar46 * fVar36;
            if (((fVar37 < fVar43) && (fVar39 <= fVar37)) &&
               (fVar38 = fVar38 - fVar37 * fVar50, fVar35 = fVar35 - fVar37 * fVar48,
               fVar36 = fVar36 - fVar46 * fVar37,
               fVar35 = fVar42 - SQRT(fVar35 * fVar35 + fVar38 * fVar38 + fVar36 * fVar36) * fVar34,
               0.0 < fVar35)) {
              fVar42 = fVar35 * this->Stiffness * (fVar43 - fVar37);
              *(float *)pTVar28 = fVar42 * fVar48 + *(float *)pTVar28;
              *(float *)&pTVar28->field_0x4 = fVar42 * fVar50 + *(float *)&pTVar28->field_0x4;
              *(float *)&pTVar28->field_0x8 = fVar46 * fVar42 + *(float *)&pTVar28->field_0x8;
              pFVar7 = this->FrictionCoefficient;
              if (((pFVar7->MapView).MapValues.ArrayNum < 1) ||
                 (fVar42 = *(float *)&(pFVar7->MapView).OffsetRange.field_0x4,
                 (float)((uint)fVar42 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717))
              {
                fVar35 = *(float *)&(pFVar7->MapView).OffsetRange;
              }
              else {
                fVar35 = *(float *)&(pFVar7->MapView).OffsetRange;
                pfVar27 = TArrayView<float_const_,int>::operator[]
                                    (&(pFVar7->MapView).MapValues,iVar4);
                fVar35 = fVar42 * *pfVar27 + fVar35;
              }
              fVar42 = __real_3f800000;
              if (0.0 < fVar35) {
                pTVar29 = FSolverParticlesRange::X(param_1,iVar4);
                pTVar30 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                                    (&this->Velocities,uVar22);
                fVar42 = local_218 * *(float *)pTVar30;
                fVar40 = local_218 * *(float *)&pTVar30->field_0x4;
                fVar38 = local_218 * *(float *)&pTVar30->field_0x8;
                pTVar30 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                                    (&this->Velocities,uVar23);
                fVar45 = local_214 * *(float *)pTVar30;
                fVar36 = local_214 * *(float *)&pTVar30->field_0x4;
                fVar44 = local_214 * *(float *)&pTVar30->field_0x8;
                pTVar30 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                                    (&this->Velocities,uVar21);
                fVar35 = (fVar43 - fVar37) * fVar35;
                fVar38 = (*(float *)&pTVar28->field_0x8 - *(float *)&pTVar29->field_0x8) -
                         (local_210 * *(float *)&pTVar30->field_0x8 + fVar44 + fVar38) * param_2;
                fVar37 = (*(float *)&pTVar28->field_0x4 - *(float *)&pTVar29->field_0x4) -
                         (local_210 * *(float *)&pTVar30->field_0x4 + fVar36 + fVar40) * param_2;
                fVar36 = (*(float *)pTVar28 - *(float *)pTVar29) -
                         (local_210 * *(float *)pTVar30 + fVar45 + fVar42) * param_2;
                fVar42 = fVar48 * fVar36 + fVar50 * fVar37 + fVar38 * fVar46;
                fVar38 = fVar38 - fVar46 * fVar42;
                fVar36 = fVar36 - fVar42 * fVar48;
                fVar37 = fVar37 - fVar42 * fVar50;
                fVar42 = SQRT(fVar36 * fVar36 + fVar37 * fVar37 + fVar38 * fVar38);
                if (fVar42 <= fVar35) {
                  fVar35 = fVar42;
                }
                if (__real_322bcc77 <= fVar42) {
                  fVar35 = fVar35 / fVar42;
                }
                else {
                  fVar35 = 0.0;
                }
                fVar35 = (float)((uint)fVar35 ^ __xmm_80000000800000008000000080000000);
                *(float *)pTVar28 = fVar36 * fVar35 + *(float *)pTVar28;
                *(float *)&pTVar28->field_0x4 = fVar35 * fVar37 + *(float *)&pTVar28->field_0x4;
                *(float *)&pTVar28->field_0x8 = fVar35 * fVar38 + *(float *)&pTVar28->field_0x8;
                fVar42 = __real_3f800000;
              }
            }
            local_240 = local_240 + 1;
            lVar33 = lVar33 + 4;
            uVar41 = __xmm_80000000800000008000000080000000;
          } while (local_240 < 3);
          local_254 = local_254 + 1;
          local_230 = local_230 + 4;
          local_260 = local_260 + 0xc;
        } while ((int)local_254 < (this->CollidingParticles).ArrayNum);
      }
    }
    else {
      pFVar7 = this->FrictionCoefficient;
      iVar4 = (pFVar7->MapView).MapValues.ArrayNum;
      if (((0 < iVar4) &&
          (__real_38d1b717 <
           (float)(*(uint *)&(pFVar7->MapView).OffsetRange.field_0x4 &
                  __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
         (__real_38d1b717 < *(float *)&(pFVar7->MapView).OffsetRange)) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
      local_278 = &(pFVar7->MapView).OffsetRange;
      pFVar8 = this->Thickness;
      if (((pFVar8->MapView).MapValues.ArrayNum < 1) ||
         ((float)(*(uint *)&(pFVar8->MapView).OffsetRange.field_0x4 &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
        fVar39 = this->ColliderThickness + *(float *)&(pFVar8->MapView).OffsetRange;
        fVar42 = fVar39 * KinematicColliderFalloffMultiplier;
        if (fVar39 * KinematicColliderFalloffMultiplier <= __real_38d1b717) {
          fVar42 = __real_38d1b717;
        }
        uVar41 = (uint)(fVar39 * KinematicColliderMaxDepthMultiplier) ^
                 __xmm_80000000800000008000000080000000;
        fVar42 = __real_3f800000 / fVar42;
        if ((iVar4 < 1) ||
           ((float)(*(uint *)&(pFVar7->MapView).OffsetRange.field_0x4 &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        iVar4 = (this->CollidingParticles).ArrayNum;
        iVar5 = (this->PAndInvM).ArrayNum;
        fVar34 = this->Stiffness;
        if (bVar18) {
          pfVar27 = (this->FrictionCoefficient->MapView).MapValues.DataPtr;
          pTVar1 = &(this->FrictionCoefficient->MapView).OffsetRange;
          pFVar9 = (this->TriangleMesh->MElements).AllocatorInstance.Data;
          pFVar11 = (this->CollidingElements).AllocatorInstance.Data;
          pFVar12 = (this->CollidingParticles).AllocatorInstance.Data;
          pTVar28 = (this->Velocities).DataPtr;
          if (iVar5 == 0) {
            pTVar29 = (this->Positions).DataPtr;
            pTVar25 = FSolverParticlesRange::XArray(param_1,&local_190);
            pTVar30 = pTVar25->DataPtr;
            pTVar26 = FSolverParticlesRange::GetPAndInvM(param_1,&local_180);
            ApplyKinematicTriangleCollisionsWithFrictionMap
                      (pTVar26->DataPtr,pTVar30,pTVar29,pTVar28,pFVar12,pFVar11,pFVar9,
                       CONCAT44(uVar47,param_2),CONCAT44(uVar49,fVar39),fVar42,uVar41,fVar34,pTVar1,
                       pfVar27,iVar4);
          }
          else {
            pFVar13 = (this->PAndInvM).DataPtr;
            pTVar25 = FSolverParticlesRange::XArray(param_1,&local_170);
            pTVar29 = pTVar25->DataPtr;
            pTVar26 = FSolverParticlesRange::GetPAndInvM(param_1,&local_160);
            ApplyKinematicTriangleCollisionsWithFrictionMapPAndInvM
                      (pTVar26->DataPtr,pTVar29,pFVar13,pTVar28,pFVar12,pFVar11,pFVar9,
                       CONCAT44(uVar47,param_2),CONCAT44(uVar49,fVar39),fVar42,uVar41,fVar34,pTVar1,
                       pfVar27,iVar4);
          }
        }
        else if (bVar20) {
          uVar2 = *(undefined4 *)&(this->FrictionCoefficient->MapView).OffsetRange;
          if (iVar5 == 0) {
            pFVar9 = (this->TriangleMesh->MElements).AllocatorInstance.Data;
            pFVar11 = (this->CollidingElements).AllocatorInstance.Data;
            pFVar12 = (this->CollidingParticles).AllocatorInstance.Data;
            pTVar28 = (this->Velocities).DataPtr;
            pTVar29 = (this->Positions).DataPtr;
            pTVar25 = FSolverParticlesRange::XArray(param_1,&local_150);
            pTVar30 = pTVar25->DataPtr;
            pTVar26 = FSolverParticlesRange::GetPAndInvM(param_1,&local_140);
            ApplyKinematicTriangleCollisionsWithFriction
                      (pTVar26->DataPtr,pTVar30,pTVar29,pTVar28,pFVar12,pFVar11,pFVar9,
                       CONCAT44(uVar47,param_2),CONCAT44(uVar49,fVar39),fVar42,uVar41,fVar34,
                       CONCAT44(uVar51,uVar2),CONCAT44(uVar52,iVar4));
          }
          else {
            pFVar9 = (this->TriangleMesh->MElements).AllocatorInstance.Data;
            pFVar11 = (this->CollidingElements).AllocatorInstance.Data;
            pFVar12 = (this->CollidingParticles).AllocatorInstance.Data;
            pTVar28 = (this->Velocities).DataPtr;
            pFVar13 = (this->PAndInvM).DataPtr;
            pTVar25 = FSolverParticlesRange::XArray(param_1,&local_130);
            pTVar29 = pTVar25->DataPtr;
            pTVar26 = FSolverParticlesRange::GetPAndInvM(param_1,&local_120);
            ApplyKinematicTriangleCollisionsWithFrictionPAndInvM
                      (pTVar26->DataPtr,pTVar29,pFVar13,pTVar28,pFVar12,pFVar11,pFVar9,
                       CONCAT44(uVar47,param_2),CONCAT44(uVar49,fVar39),fVar42,uVar41,fVar34,
                       CONCAT44(uVar51,uVar2),CONCAT44(uVar52,iVar4));
          }
        }
        else {
          pFVar9 = (this->CollidingElements).AllocatorInstance.Data;
          pFVar11 = (this->CollidingParticles).AllocatorInstance.Data;
          pFVar12 = (this->TriangleMesh->MElements).AllocatorInstance.Data;
          if (iVar5 == 0) {
            pTVar28 = (this->Positions).DataPtr;
            pTVar26 = FSolverParticlesRange::GetPAndInvM(param_1,&local_110);
            ApplyKinematicTriangleCollisions
                      (pTVar26->DataPtr,pTVar28,pFVar11,pFVar9,pFVar12,fVar39,fVar42,uVar41,fVar34,
                       iVar4);
          }
          else {
            pFVar13 = (this->PAndInvM).DataPtr;
            pTVar26 = FSolverParticlesRange::GetPAndInvM(param_1,&local_100);
            ApplyKinematicTriangleCollisionsPAndInvM
                      (pTVar26->DataPtr,pFVar13,pFVar11,pFVar9,pFVar12,fVar39,fVar42,uVar41,fVar34,
                       iVar4);
          }
        }
      }
      else {
        iVar5 = (this->CollidingParticles).ArrayNum;
        iVar6 = (this->PAndInvM).ArrayNum;
        if (bVar20) {
          pfVar27 = (pFVar7->MapView).MapValues.DataPtr;
          if (iVar6 == 0) {
            if ((iVar4 < 1) ||
               (local_288 = 1,
               (float)(*(uint *)&(pFVar7->MapView).OffsetRange.field_0x4 &
                      __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
              local_288 = 0;
            }
            fVar34 = this->Stiffness;
            pFVar9 = (this->TriangleMesh->MElements).AllocatorInstance.Data;
            fVar43 = this->ColliderThickness;
            pfVar10 = (pFVar8->MapView).MapValues.DataPtr;
            pFVar11 = (this->CollidingElements).AllocatorInstance.Data;
            pFVar12 = (this->CollidingParticles).AllocatorInstance.Data;
            pTVar28 = (this->Velocities).DataPtr;
            pTVar29 = (this->Positions).DataPtr;
            pTVar25 = FSolverParticlesRange::XArray(param_1,local_f0);
            pTVar30 = pTVar25->DataPtr;
            pTVar26 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1e0);
            ApplyKinematicTriangleCollisionsWithFrictionAndMaps
                      (pTVar26->DataPtr,pTVar30,pTVar29,pTVar28,pFVar12,pFVar11,pFVar9,
                       &(pFVar8->MapView).OffsetRange,pfVar10,param_2,fVar43,fVar42,
                       CONCAT44(uVar51,fVar39),CONCAT44(uVar52,fVar34),local_288,local_278,pfVar27,
                       iVar5);
          }
          else {
            if ((iVar4 < 1) ||
               (local_288 = 1,
               (float)(*(uint *)&(pFVar7->MapView).OffsetRange.field_0x4 &
                      __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
              local_288 = 0;
            }
            fVar34 = this->Stiffness;
            pFVar9 = (this->TriangleMesh->MElements).AllocatorInstance.Data;
            fVar43 = this->ColliderThickness;
            pfVar10 = (pFVar8->MapView).MapValues.DataPtr;
            pFVar11 = (this->CollidingElements).AllocatorInstance.Data;
            pFVar12 = (this->CollidingParticles).AllocatorInstance.Data;
            pTVar28 = (this->Velocities).DataPtr;
            pFVar13 = (this->PAndInvM).DataPtr;
            pTVar25 = FSolverParticlesRange::XArray(param_1,&local_1d0);
            pTVar29 = pTVar25->DataPtr;
            pTVar26 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1c0);
            ApplyKinematicTriangleCollisionsWithFrictionAndMapsPAndInvM
                      (pTVar26->DataPtr,pTVar29,pFVar13,pTVar28,pFVar12,pFVar11,pFVar9,
                       &(pFVar8->MapView).OffsetRange,pfVar10,param_2,fVar43,fVar42,
                       CONCAT44(uVar51,fVar39),CONCAT44(uVar52,fVar34),local_288,local_278,pfVar27,
                       iVar5);
          }
        }
        else {
          fVar34 = this->Stiffness;
          fVar43 = this->ColliderThickness;
          if (iVar6 == 0) {
            pFVar9 = (this->CollidingElements).AllocatorInstance.Data;
            pFVar11 = (this->CollidingParticles).AllocatorInstance.Data;
            pfVar27 = (pFVar8->MapView).MapValues.DataPtr;
            pFVar12 = (this->TriangleMesh->MElements).AllocatorInstance.Data;
            pTVar28 = (this->Positions).DataPtr;
            pTVar26 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1b0);
            ApplyKinematicTriangleCollisionsWithMaps
                      (pTVar26->DataPtr,pTVar28,pFVar11,pFVar9,pFVar12,
                       &(pFVar8->MapView).OffsetRange,pfVar27,fVar43,fVar42,fVar39,fVar34,iVar5);
          }
          else {
            pfVar27 = (pFVar8->MapView).MapValues.DataPtr;
            pFVar9 = (this->CollidingElements).AllocatorInstance.Data;
            pFVar11 = (this->CollidingParticles).AllocatorInstance.Data;
            pFVar13 = (this->PAndInvM).DataPtr;
            pFVar12 = (this->TriangleMesh->MElements).AllocatorInstance.Data;
            pTVar26 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1a0);
            ApplyKinematicTriangleCollisionsWithMapsPAndInvM
                      (pTVar26->DataPtr,pFVar13,pFVar11,pFVar9,pFVar12,
                       &(pFVar8->MapView).OffsetRange,pfVar27,fVar43,fVar42,fVar39,fVar34,iVar5);
          }
        }
      }
    }
    if (bVar19) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// Init @ 143ca2bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init
          (FPBDKinematicTriangleMeshCollisions *this,FSolverParticlesRange *param_1,float param_2)

{
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStackY_168 [32];
  uint local_128 [2];
  FSolverParticlesRange *local_120;
  code *local_118;
  FPBDKinematicTriangleMeshCollisions **local_110;
  FPBDKinematicTriangleMeshCollisions *local_108;
  float local_100;
  FSolverParticlesRange *local_f8;
  uint *local_f0;
  undefined1 local_e8 [24];
  undefined8 uStack_d0;
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  void *local_a8;
  ulonglong local_a0;
  undefined1 local_98 [24];
  undefined8 uStack_80;
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  void *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar10 = -1 < CpuChannel->Enabled;
  local_120 = param_1;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId46,"FPBDKinematicTriangleMeshCollisions_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDKinematicTriangleMeshCollisions.cpp"
               ,0x2e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId46);
  }
  if ((*(int *)&param_1->field_0x14 != this->NumParticles) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles.Size() == NumParticles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDKinematicTriangleMeshCollisions.cpp"
                         ,0x2f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->TriangleMesh == (FTriangleMesh *)0x0) ||
      (this->SpatialHash == (THierarchicalSpatialHash<int,float> *)0x0)) ||
     ((this->TriangleMesh->MElements).ArrayNum == 0)) {
    (this->CollidingParticles).ArrayNum = 0;
    if ((this->CollidingParticles).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->CollidingParticles).AllocatorInstance,0,
                 &(this->CollidingParticles).ArrayMax);
    }
    (this->CollidingElements).ArrayNum = 0;
    if ((this->CollidingElements).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->CollidingElements).AllocatorInstance,0,
                 &(this->CollidingElements).ArrayMax);
    }
    local_60 = 0;
    local_98._16_8_ = 0;
    uStack_80 = 0;
    local_50 = 0;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    TArray<TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,TSizedDefaultAllocator<32>_>
    ::Init(&this->Timers,
           (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
           local_98,this->NumParticles);
    local_50 = local_50 & 0xffffffff00000000;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    iVar7 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  else {
    if ((this->Timers).ArrayNum != this->NumParticles) {
      local_b0 = 0;
      local_e8._16_8_ = 0;
      uStack_d0 = 0;
      local_a0 = 0;
      local_e8._0_8_ = (FScriptContainerElement *)0x0;
      local_e8._8_8_ = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (void *)0x0;
      TArray<TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,TSizedDefaultAllocator<32>_>
      ::Init(&this->Timers,
             (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
             local_e8,this->NumParticles);
      local_a0 = local_a0 & 0xffffffff00000000;
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      iVar7 = SUB84(local_e8._8_8_,4);
      local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
      if (iVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
      }
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_c0 = 0;
      if (0x80 < local_bc) {
        local_bc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->CollidingParticles,this->NumParticles,Default);
    uVar4 = this->NumParticles;
    pTVar1 = &this->CollidingElements;
    iVar7 = (this->CollidingElements).ArrayNum;
    piVar3 = &(this->CollidingElements).ArrayNum;
    if (iVar7 < (int)uVar4) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar4 - iVar7,&pTVar1->AllocatorInstance,piVar3,
                 &(this->CollidingElements).ArrayMax);
    }
    else {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if ((int)uVar4 < iVar7) {
        uVar8 = iVar7 - uVar4;
        if (((int)(uVar8 | uVar4) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar8 != 0) {
          pFVar2 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0xc;
          iVar7 = (*piVar3 - uVar8) - uVar4;
          if (iVar7 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar8 * 0xc,(longlong)iVar7 * 0xc);
          }
          *piVar3 = *piVar3 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,&pTVar1->AllocatorInstance,*piVar3,&(this->CollidingElements).ArrayMax);
        }
      }
    }
    local_f8 = local_120;
    local_f0 = local_128;
    local_110 = &local_108;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init'::__l2::<lambda_1>,void,int>
                ::Call;
    local_128[0] = 0;
    local_108 = this;
    local_100 = param_2;
    PhysicsParallelFor(this->NumParticles,(TFunctionRef<void___cdecl(int)> *)&local_118,false);
    uVar4 = local_128[0];
    lVar9 = (longlong)(int)local_128[0];
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->CollidingParticles,local_128[0],No);
    iVar7 = *piVar3;
    if (iVar7 < (int)uVar4) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar4 - iVar7,&pTVar1->AllocatorInstance,piVar3,
                 &(this->CollidingElements).ArrayMax);
    }
    else {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if ((int)uVar4 < iVar7) {
        uVar8 = iVar7 - uVar4;
        if (((int)(uVar8 | uVar4) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar8 != 0) {
          pFVar2 = (pTVar1->AllocatorInstance).Data + lVar9 * 0xc;
          iVar7 = (*piVar3 - uVar8) - uVar4;
          if (iVar7 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar8 * 0xc,(longlong)iVar7 * 0xc);
          }
          *piVar3 = *piVar3 - uVar8;
        }
      }
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

