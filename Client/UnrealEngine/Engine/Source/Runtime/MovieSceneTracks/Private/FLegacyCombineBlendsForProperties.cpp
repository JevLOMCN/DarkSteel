// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// FLegacyCombineBlendsForProperties @ 146807e70

FLegacyCombineBlendsForProperties * __thiscall
UE::MovieScene::FLegacyCombineBlendsForProperties::FLegacyCombineBlendsForProperties
          (FLegacyCombineBlendsForProperties *this,TBitArray<FDefaultBitArrayAllocator> *param_1,
          FAccumulationBuffers *param_2,FEntityAllocationWriteContext param_3)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  FBuiltInComponentTypes *pFVar4;
  uint uVar5;
  ForElementType<unsigned_int> _Dst;
  
  (this->CachedRelevantProperties).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->CachedRelevantProperties).NumBits = 0;
  (this->CachedRelevantProperties).MaxBits = 0;
  uVar5 = param_1->NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar5) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
    }
    (this->CachedRelevantProperties).MaxBits = uVar3;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->CachedRelevantProperties,0);
  }
  iVar1 = param_1->NumBits;
  (this->CachedRelevantProperties).NumBits = iVar1;
  if (iVar1 != 0) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
    }
    FVar2 = (this->CachedRelevantProperties).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      _Dst = FVar2;
    }
    memcpy((void *)_Dst,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  pFVar4 = FBuiltInComponentTypes::Get();
  this->PropertyRegistry = &pFVar4->PropertyRegistry;
  this->AccumulationBuffers = param_2;
  (this->WriteContext).SystemSerial = param_3.SystemSerial;
  return this;
}

// ForEachAllocation @ 1468325a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FLegacyCombineBlendsForProperties::ForEachAllocation
          (FLegacyCombineBlendsForProperties *this,FEntityAllocationProxy *param_1,
          TRead<FMovieSceneBlendChannelID> param_2)

{
  int iVar1;
  ulonglong uVar2;
  ushort uVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  FPropertyRegistry *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FEntityAllocation *pFVar11;
  FComponentMask *pFVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ForElementType<unsigned_int> FVar17;
  FPropertyDefinition *pFVar18;
  uint uVar19;
  
  pFVar11 = FEntityAllocationProxy::GetAllocation(param_1);
  pFVar12 = FEntityAllocationProxy::GetAllocationType(param_1);
  iVar4 = (this->CachedRelevantProperties).NumBits;
  iVar16 = 0;
  iVar15 = 0;
  if (iVar4 != 0) {
    FVar5 = (this->CachedRelevantProperties).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<unsigned_int>)this;
    if (FVar5 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar5;
    }
    uVar9 = *(uint *)FVar17;
    while (uVar9 == 0) {
      lVar13 = (longlong)iVar16;
      iVar15 = iVar15 + 0x20;
      iVar16 = iVar16 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) {
        return;
      }
      uVar9 = *(uint *)((uchar *)((longlong)FVar17 + 4) + lVar13 * 4);
    }
    uVar9 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar14 = (int)lVar13 + -1 + iVar15;
    if ((int)uVar14 < iVar4) {
      uVar19 = 0xffffffff;
      while( true ) {
        pFVar6 = this->PropertyRegistry;
        uVar10 = 0;
        if ((int)uVar14 < (pFVar6->Properties).ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar18 = (FPropertyDefinition *)
                  ((pFVar6->Properties).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x70);
        uVar3 = (pFVar18->PropertyType).Value;
        if (((uVar3 != 0xffff) && ((int)(uint)uVar3 < (pFVar12->Bits).NumBits)) &&
           ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar3 >> 5].Pad >> (uVar3 & 0x1f)
            & 1) != 0)) break;
        FVar5 = (this->CachedRelevantProperties).AllocatorInstance.SecondaryData;
        iVar4 = (this->CachedRelevantProperties).NumBits;
        uVar19 = ~uVar9 & uVar19;
        FVar17 = (ForElementType<unsigned_int>)this;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar17 = FVar5;
        }
        iVar1 = iVar4 + -1;
        uVar9 = uVar19 & *(uint *)((longlong)FVar17 + (longlong)iVar16 * 4);
        while (uVar9 == 0) {
          lVar13 = (longlong)iVar16;
          iVar15 = iVar15 + 0x20;
          iVar16 = iVar16 + 1;
          if ((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5 < iVar16) {
            return;
          }
          uVar19 = 0xffffffff;
          uVar9 = *(uint *)((uchar *)((longlong)FVar17 + 4) + lVar13 * 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar2 = (ulonglong)uVar9 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar14 = (int)lVar13 + -1 + iVar15;
        if (iVar4 <= (int)uVar14) {
          return;
        }
      }
      ProcessPropertyType(this,pFVar11,pFVar12,pFVar18,(FMovieSceneBlendChannelID *)param_2);
    }
  }
  return;
}

// ProcessPropertyType @ 146858f20

void __thiscall
UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType
          (FLegacyCombineBlendsForProperties *this,FEntityAllocation *param_1,
          FComponentMask *param_2,FPropertyDefinition *param_3,FMovieSceneBlendChannelID *param_4)

{
  ushort uVar1;
  FComponentTypeID FVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  ulonglong uVar7;
  UClass *this_00;
  UMovieSceneBlenderSystem *pUVar8;
  FMovieSceneBlendChannelID *pFVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_b4;
  undefined1 local_b3 [3];
  longlong local_b0;
  FScriptContainerElement *local_a8;
  TComponentLock<UE::MovieScene::FReadErasedOptional> local_a0;
  FAccumulationResult local_80;
  TComponentLock<UE::MovieScene::TWrite<double>_> local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::FComponentMask_const&___ptr64,UE::MovieScene::FPropertyDefinition_const&___ptr64,FMovieSceneBlendChannelID_const*___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::FComponentMask_const&___ptr64,UE::MovieScene::FPropertyDefinition_const&___ptr64,FMovieSceneBlendChannelID_const*___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::FComponentMask_const&___ptr64,UE::MovieScene::FPropertyDefinition_const&___ptr64,FMovieSceneBlendChannelID_const*___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    this_00 = UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
    pUVar8 = UClass::GetDefaultObject<UMovieSceneBlenderSystem>(this_00);
    if ((pUVar8 == (UMovieSceneBlenderSystem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneBlenderSystem.h"
                           ,0x41,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    `private:_void___cdecl_UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::FComponentMask_const&___ptr64,UE::MovieScene::FPropertyDefinition_const&___ptr64,FMovieSceneBlendChannelID_const*___ptr64)const___ptr64'
    ::__l2::BlenderSystemID.Value = (pUVar8->SystemID).Value;
    _Init_thread_footer(&`private:_void___cdecl_UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::FComponentMask_const&___ptr64,UE::MovieScene::FPropertyDefinition_const&___ptr64,FMovieSceneBlendChannelID_const*___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar1 = param_3->CompositeSize;
  pFVar13 = (this->PropertyRegistry->CompositeDefinitions).AllocatorInstance.Data +
            (ulonglong)param_3->VariableSizeCompositeOffset * 4;
  local_a8 = pFVar13;
  FEntityAllocation::TryReadComponentsErased
            (param_1,&local_a0,(FComponentTypeID)(param_3->InitialValueType).Value);
  iVar12 = 0;
  if (uVar1 != 0) {
    uVar11 = 1;
    local_b0 = 0;
    do {
      if ((param_3->DoubleCompositeMask & uVar11) != 0) {
        if ((iVar12 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar2.Value = *(ushort *)pFVar13;
        if ((((FVar2.Value != 0xffff) && ((int)(uint)FVar2.Value < (param_2->Bits).NumBits)) &&
            ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[FVar2.Value >> 5].Pad >>
              (FVar2.Value & 0x1f) & 1) != 0)) &&
           (((FAccumulationBuffers::FindResults(this->AccumulationBuffers,&local_80,FVar2),
             local_80.Absolutes != (FBlendResult *)0x0 ||
             (local_80.Relatives != (FBlendResult *)0x0)) ||
            ((local_80.Additives != (FBlendResult *)0x0 ||
             ((local_80.AdditivesFromBase != (FBlendResult *)0x0 ||
              (local_80.Overrides != (FAdditiveAndOverrides *)0x0)))))))) {
          if ((iVar12 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(ushort *)(pFVar13 + 2);
          FEntityAllocation::WriteComponents<double>
                    (param_1,&local_58,(TComponentTypeID<double>)FVar2.Value,
                     (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
          uVar5 = local_58._24_8_;
          if (local_a0._16_8_ == 0) {
            iVar10 = 0;
            pFVar9 = param_4;
            if (param_1->Size != 0) {
              do {
                if ((pFVar9->SystemID).Value !=
                    `private:_void___cdecl_UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::FComponentMask_const&___ptr64,UE::MovieScene::FPropertyDefinition_const&___ptr64,FMovieSceneBlendChannelID_const*___ptr64)const___ptr64'
                    ::__l2::BlenderSystemID.Value) {
                  local_b3[0] = 0;
                  `UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType'::__l22::
                  <lambda_2>::operator()(local_b3);
                }
                BlendResults(&local_80,pFVar9->ChannelID,(double *)(uVar5 + (longlong)iVar10 * 8));
                iVar10 = iVar10 + 1;
                pFVar9 = pFVar9 + 1;
              } while (iVar10 < (int)(uint)param_1->Size);
            }
          }
          else {
            iVar10 = 0;
            pFVar9 = param_4;
            if (param_1->Size != 0) {
              do {
                if ((pFVar9->SystemID).Value !=
                    `private:_void___cdecl_UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::FComponentMask_const&___ptr64,UE::MovieScene::FPropertyDefinition_const&___ptr64,FMovieSceneBlendChannelID_const*___ptr64)const___ptr64'
                    ::__l2::BlenderSystemID.Value) {
                  local_b4 = 0;
                  `UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType'::__l18::
                  <lambda_1>::operator()(&local_b4);
                }
                BlendResultsWithInitial
                          (&local_80,pFVar9->ChannelID,
                           *(double *)
                            ((longlong)(local_a0._24_4_ * iVar10) + (ulonglong)uVar3 +
                            local_a0._16_8_),(double *)(uVar5 + (longlong)iVar10 * 8));
                iVar10 = iVar10 + 1;
                pFVar9 = pFVar9 + 1;
                pFVar13 = local_a8;
              } while (iVar10 < (int)(uint)param_1->Size);
            }
          }
          if (local_58._0_8_ != 0) {
            uVar7 = local_58._8_8_;
            if ((ulonglong)local_58._8_8_ < *(ulonglong *)(local_58._0_8_ + 0x28)) {
              uVar7 = *(ulonglong *)(local_58._0_8_ + 0x28);
            }
            *(ulonglong *)(local_58._0_8_ + 0x28) = uVar7;
            LOCK();
            *(int *)(local_58._0_8_ + 0x30) = *(int *)(local_58._0_8_ + 0x30) + -1;
            UNLOCK();
            if (local_58._16_4_ == 1) {
              ReleaseSRWLockExclusive((PSRWLOCK)(local_58._0_8_ + 0x20));
            }
          }
        }
      }
      local_b0 = local_b0 + 1;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      pFVar13 = pFVar13 + 4;
      iVar12 = iVar12 + 1;
      local_a8 = pFVar13;
    } while (iVar12 < (int)(uint)uVar1);
  }
  if (local_a0._0_8_ != 0) {
    LOCK();
    *(int *)(local_a0._0_8_ + 0x30) = *(int *)(local_a0._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_a0._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_a0._0_8_ + 0x20));
    }
  }
  return;
}

// operator() @ 1504f4ad0

bool __thiscall
`UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType'::__l18::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2203290773712010773>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2203290773712010773>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::FComponentMask_const&___ptr64,UE::MovieScene::FPropertyDefinition_const&___ptr64,FMovieSceneBlendChannelID_const*___ptr64)const___ptr64'::`18'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f5190

bool __thiscall
`UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType'::__l22::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2203290773712010764>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2203290773712010764>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::FLegacyCombineBlendsForProperties::ProcessPropertyType(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::FComponentMask_const&___ptr64,UE::MovieScene::FPropertyDefinition_const&___ptr64,FMovieSceneBlendChannelID_const*___ptr64)const___ptr64'::`22'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

