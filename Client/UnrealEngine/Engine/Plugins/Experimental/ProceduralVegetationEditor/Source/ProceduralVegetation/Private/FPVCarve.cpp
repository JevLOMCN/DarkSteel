// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 7

// ApplyCarve @ 14da6c270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPVCarve::ApplyCarve
          (FManagedArrayCollection *param_1,FManagedArrayCollection *param_2,ECarveBasis param_3,
          float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  code *pcVar9;
  float fVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  TManagedArray<float> *pTVar14;
  TManagedArray<float> *pTVar15;
  ulonglong uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  float *pfVar24;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar25;
  TVector<float> *pTVar26;
  TVector<float> *pTVar27;
  float *pfVar28;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar29;
  ulonglong uVar30;
  undefined1 *puVar31;
  ForElementType<FSetElementId> FVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  TManagedArray<UE::Math::TVector<float>_> *pTVar35;
  FScriptContainerElement *pFVar36;
  ForAnyElementType FVar37;
  uint uVar38;
  uint uVar39;
  uint *puVar40;
  ulonglong uVar41;
  longlong lVar42;
  bool bVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStackY_1828 [32];
  bool bStack_17e7;
  bool bStack_17e6;
  bool abStack_17e5 [13];
  uint uStack_17d8;
  uint uStack_17d4;
  FScriptContainerElement *pFStack_17d0;
  FScriptContainerElement *pFStack_17c8;
  TArray<bool,TSizedDefaultAllocator<32>_> TStack_17c0;
  uint uStack_17b0;
  ulonglong uStack_17a8;
  TArray<bool,TSizedDefaultAllocator<32>_> TStack_17a0;
  TArray<bool,TSizedDefaultAllocator<32>_> TStack_1790;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_1780;
  uint uStack_1770;
  float afStack_1768 [2];
  FScriptContainerElement *pFStack_1760;
  FScriptContainerElement *pFStack_1758;
  TVector2<float>_u_0 TStack_1750;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_1748;
  longlong lStack_1740;
  FScriptContainerElement *pFStack_1738;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_1730;
  TVector2<float>_u_0 TStack_1728;
  TVector<float>_u_0 TStack_1720;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_1710;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1700;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_16e0;
  FManagedArrayCollection *pFStack_16d8;
  FManagedArrayCollection *pFStack_16d0;
  longlong *plStack_16c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_16c0;
  undefined8 uStack_16a0;
  undefined1 auStack_1698 [40];
  int iStack_1670;
  undefined4 uStack_166c;
  longlong *plStack_1668;
  longlong lStack_1660;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  int iStack_1640;
  undefined4 uStack_163c;
  longlong *plStack_1638;
  longlong lStack_1630;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  FFoliageFacade FStack_1608;
  FPointFacade FStack_1388;
  FPointFacade FStack_f58;
  FFoliageFacade FStack_b28;
  FBranchFacade FStack_8a8;
  FPlantFacade FStack_5b8;
  FBranchFacade FStack_4c8;
  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> TStack_1d8;
  undefined1 auStack_188 [64];
  undefined1 *puStack_148;
  int iStack_140;
  undefined1 auStack_138 [40];
  int iStack_110;
  int iStack_104;
  void *pvStack_f8;
  undefined4 uStack_f0;
  ulonglong uStack_e8;
  
  if (param_4 == 0.0) {
    return;
  }
  if (param_3 != FromBottom) {
    CarveFromTop(param_1,param_2,param_4,param_3);
    return;
  }
  uStack_e8 = __security_cookie.value ^ (ulonglong)auStackY_1828;
  bVar43 = -1 < CpuChannel->Enabled;
  pFStack_16d8 = param_2;
  pFStack_16d0 = param_1;
  if (bVar43) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId377,"PVCarve::CarveFromBottom",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVCarve.cpp"
               ,0x179);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId377);
  }
  PV::Facades::FBranchFacade::FBranchFacade(&FStack_8a8,param_2);
  PV::Facades::FPointFacade::FPointFacade(&FStack_f58,param_2);
  PV::Facades::FFoliageFacade::FFoliageFacade(&FStack_b28,param_2);
  PV::Facades::FPlantFacade::FPlantFacade(&FStack_5b8,param_2);
  PV::Facades::FBranchFacade::FBranchFacade(&FStack_4c8,param_1);
  PV::Facades::FPointFacade::FPointFacade(&FStack_1388,param_1);
  PV::Facades::FFoliageFacade::FFoliageFacade(&FStack_1608,param_1,0);
  pTVar35 = FStack_f58.Positions.ConstAttributeArray;
  if (FStack_f58.Positions.ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    iVar18 = FManagedArrayCollection::NumElements
                       (FStack_f58.Positions.ConstCollection,FStack_f58.Positions.Group);
    pTVar35 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    iVar18 = (**(code **)(*(longlong *)FStack_f58.Positions.ConstAttributeArray + 0x60))
                       (FStack_f58.Positions.ConstAttributeArray);
  }
  if (iVar18 != 0) {
    if (FStack_8a8.Parents.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar18 = FManagedArrayCollection::NumElements
                         (FStack_8a8.Parents.ConstCollection,FStack_8a8.Parents.Group);
      pTVar29 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
    }
    else {
      iVar18 = (**(code **)(*(longlong *)FStack_8a8.Parents.ConstAttributeArray + 0x60))();
      pTVar29 = FStack_8a8.Parents.ConstAttributeArray;
    }
    if (iVar18 != 0) {
      TStack_1790.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_1790.ArrayNum = 0;
      TStack_1790.ArrayMax = 0;
      if (pTVar35 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        iVar18 = FManagedArrayCollection::NumElements
                           (FStack_f58.Positions.ConstCollection,FStack_f58.Positions.Group);
      }
      else {
        iVar18 = (**(code **)(*(longlong *)pTVar35 + 0x60))(pTVar35);
      }
      bStack_17e7 = false;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init(&TStack_1790,&bStack_17e7,iVar18);
      TStack_17c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_17c0.ArrayNum = 0;
      TStack_17c0.ArrayMax = 0;
      if (pTVar29 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
        iVar18 = FManagedArrayCollection::NumElements
                           (FStack_8a8.Parents.ConstCollection,FStack_8a8.Parents.Group);
      }
      else {
        iVar18 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
      }
      bStack_17e6 = false;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init(&TStack_17c0,&bStack_17e6,iVar18);
      TStack_17a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_17a0.ArrayNum = 0;
      TStack_17a0.ArrayMax = 0;
      if (FStack_b28.NameIdsAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) {
        iVar18 = FManagedArrayCollection::NumElements
                           (FStack_b28.NameIdsAttribute.ConstCollection,
                            FStack_b28.NameIdsAttribute.Group);
      }
      else {
        iVar18 = (**(code **)(*(longlong *)FStack_b28.NameIdsAttribute.ConstAttributeArray + 0x60))
                           ();
      }
      abStack_17e5[0] = false;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init(&TStack_17a0,abStack_17e5,iVar18);
      TStack_1d8.Pairs.Elements._0_8_ = 0;
      TStack_1d8.Pairs.Elements._8_8_ = 0;
      TStack_1d8.Pairs.Elements._32_8_ = 0;
      TStack_1d8.Pairs.Elements._40_4_ = 0;
      TStack_1d8.Pairs.Elements._44_4_ = 0x80;
      TStack_1d8.Pairs.Elements._48_4_ = 0xffffffff;
      TStack_1d8.Pairs.Elements._52_4_ = 0;
      TStack_1d8.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      TStack_1d8.Pairs.HashSize = 0;
      auStack_188._0_8_ = 0;
      auStack_188._8_8_ = 0;
      auStack_188._32_8_ = 0;
      auStack_188._40_4_ = 0;
      auStack_188._44_4_ = 0x80;
      auStack_188._48_4_ = 0xffffffff;
      auStack_188._52_4_ = 0;
      puStack_148 = (undefined1 *)0x0;
      iStack_140 = 0;
      ComputeMetadata((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                      &TStack_1d8,
                      (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                       *)auStack_188,&FStack_8a8,&FStack_f58);
      PV::Facades::FPlantFacade::GetPlantNumbersToTrunkIndicesMap
                (&FStack_5b8,
                 (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                 auStack_138);
      TStack_1700.Array = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_138 + 0x10);
      TStack_1700._padding_._0_4_ = 0;
      TStack_1700._padding_._4_4_ = 1;
      TStack_1700.UnvisitedBitMask = 0xffffffff;
      TStack_1700.CurrentBitIndex = 0;
      TStack_1700.BaseBitIndex = 0;
      if (iStack_110 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1700);
      }
      TStack_16c0._padding_ =
           CONCAT44(TStack_1700._padding_._4_4_,(undefined4)TStack_1700._padding_);
      plStack_16c8 = (longlong *)auStack_138;
      TStack_16c0.CurrentBitIndex = TStack_1700.CurrentBitIndex;
      TStack_16c0.UnvisitedBitMask = TStack_1700.UnvisitedBitMask;
      TStack_16c0._28_4_ = TStack_1700._28_4_;
      TStack_16c0.BaseBitIndex = TStack_1700.BaseBitIndex;
      iStack_1670 = auStack_138._8_4_ - iStack_104;
      auStack_1698._16_8_ = TStack_1700.Array;
      uStack_16a0 = CONCAT44(uStack_166c,iStack_1670);
      TStack_16c0.Array = TStack_1700.Array;
      auStack_1698._0_8_ = plStack_16c8;
      auStack_1698._8_8_ = TStack_16c0._padding_;
      auStack_1698._24_8_ = TStack_16c0._16_8_;
      auStack_1698._32_8_ = TStack_16c0._24_8_;
      pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1698,
                           (TBitArray<FDefaultBitArrayAllocator> *)(auStack_138 + 0x10),iStack_110);
      uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar10 = __real_3f800000;
      plStack_1668 = (longlong *)auStack_138;
      lStack_1660 = pTVar22->_padding_;
      pTStack_1658 = pTVar22->Array;
      uStack_1650._0_4_ = pTVar22->UnvisitedBitMask;
      uStack_1650._4_4_ = pTVar22->CurrentBitIndex;
      uStack_1648 = *(undefined8 *)&pTVar22->BaseBitIndex;
      iStack_1640 = auStack_138._8_4_ - iStack_104;
      uStack_1610 = CONCAT44(uStack_163c,iStack_1640);
      fVar46 = __real_322bcc77;
      fVar47 = __real_3dcccccd;
      plStack_1638 = plStack_1668;
      lStack_1630 = lStack_1660;
      pTStack_1628 = pTStack_1658;
      uStack_1620 = uStack_1650;
      uStack_1618 = uStack_1648;
      while( true ) {
        plVar13 = plStack_16c8;
        uVar41 = 0;
        if ((int)plStack_16c8[1] - *(int *)((longlong)plStack_16c8 + 0x34) != (int)uStack_16a0) {
          abStack_17e5[1] = false;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(abStack_17e5 + 1);
        }
        if (((TStack_16c0.CurrentBitIndex == uStack_1620._4_4_) &&
            (TStack_16c0.Array == pTStack_1628)) && (plVar13 == plStack_1638)) break;
        pFStack_1758 = *(FScriptContainerElement **)
                        (*plVar13 + (longlong)TStack_16c0.CurrentBitIndex * 0x10);
        pFStack_17d0 = (FScriptContainerElement *)((ulonglong)pFStack_1758 >> 0x20);
        uVar38 = (uint)((ulonglong)pFStack_1758 >> 0x20);
        pTVar23 = PV::Facades::FBranchFacade::GetPoints(&FStack_8a8,uVar38);
        pTVar14 = FStack_f58.LengthFromRoot.ConstAttributeArray;
        uVar33 = pTVar23->ArrayNum;
        uStack_17d8 = uVar33;
        pTStack_1730 = pTVar23;
        if ((int)uVar33 < 2) {
          uVar33 = 0;
          if ((int)uVar38 < TStack_17c0.ArrayNum) {
            uVar33 = ~uVar38 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          TStack_17c0.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
        }
        else {
          if (FStack_f58.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0) {
LAB_14da70c84:
            pfVar24 = &DefaultLengthFromRoot;
          }
          else {
            iVar18 = *(int *)(pTVar23->AllocatorInstance).Data;
            bVar17 = TManagedArrayAccessor<float>::IsValidIndex(&FStack_f58.LengthFromRoot,iVar18);
            if (!bVar17) goto LAB_14da70c84;
            pfVar24 = TManagedArrayAccessor<float>::operator[](&FStack_f58.LengthFromRoot,iVar18);
          }
          fVar44 = *pfVar24;
          uVar39 = uVar33 - 1;
          uVar38 = 0;
          if ((int)uVar39 < pTVar23->ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (pTVar14 == (TManagedArray<float> *)0x0) {
LAB_14da70d16:
            pfVar24 = &DefaultLengthFromRoot;
          }
          else {
            iVar18 = *(int *)((pTVar23->AllocatorInstance).Data + (longlong)(int)uVar39 * 4);
            bVar17 = TManagedArrayAccessor<float>::IsValidIndex(&FStack_f58.LengthFromRoot,iVar18);
            if (!bVar17) goto LAB_14da70d16;
            pfVar24 = TManagedArrayAccessor<float>::operator[](&FStack_f58.LengthFromRoot,iVar18);
          }
          TStack_1728._s_0.Y = *pfVar24;
          TStack_1750._s_0.X = 0.0;
          TStack_1750._s_0.Y = 1.0;
          TStack_1728._s_0.X = fVar44;
          fVar44 = FMath::GetMappedRangeValueClamped<float,float>
                             ((TVector2<float> *)&TStack_1750._s_0,
                              (TVector2<float> *)&TStack_1728._s_0,param_4);
          uStack_17b0 = 0;
          uStack_17a8 = 0;
          uVar30 = uVar41;
          uVar38 = uStack_17b0;
          uVar16 = uStack_17a8;
          if (0 < (longlong)(int)uVar33) {
            do {
              uVar38 = (uint)uVar30;
              uVar39 = 0;
              if ((int)uVar38 < pTVar23->ArrayNum) {
                uVar39 = ~uVar38 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar18 = *(int *)((pTVar23->AllocatorInstance).Data + uVar41 * 4);
              if (((pTVar14 == (TManagedArray<float> *)0x0) || (iVar18 < 0)) ||
                 (iVar19 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14), iVar19 <= iVar18)) {
                pfVar24 = &DefaultLengthFromRoot;
              }
              else {
                pfVar24 = TManagedArrayAccessor<float>::operator[]
                                    (&FStack_f58.LengthFromRoot,iVar18);
              }
              uVar16 = uVar41;
              if (fVar44 < *pfVar24 || fVar44 == *pfVar24) break;
              uVar41 = uVar41 + 1;
              uVar30 = (ulonglong)(uVar38 + 1);
              uVar38 = uVar38 + 1;
              uVar16 = uVar41;
            } while ((longlong)uVar41 < (longlong)(int)uVar33);
          }
          uStack_17a8 = uVar16;
          uStack_17b0 = uVar38;
          uStack_17d4 = uStack_17b0 - 1;
          pFStack_1760 = (FScriptContainerElement *)(uStack_17a8 - 1);
          pTStack_16e0 = PV::Facades::FBranchFacade::GetChildren(&FStack_8a8,(int)pFStack_17d0);
          uStack_1770 = pTStack_16e0->ArrayNum;
          uVar41 = (ulonglong)(int)uStack_1770;
          pFStack_17c8 = (pTStack_16e0->AllocatorInstance).Data;
          pFVar34 = pFStack_17c8 + uVar41 * 4;
          pFStack_1738 = pFVar34;
LAB_14da70e4c:
          while( true ) {
            if (pTStack_16e0->ArrayNum != (int)uVar41) {
              abStack_17e5[2] = false;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (abStack_17e5 + 2);
            }
            if (pFStack_17c8 == pFVar34) break;
            uVar33 = *(uint *)pFStack_17c8;
            if (auStack_188._8_4_ == auStack_188._52_4_) goto LAB_14da7162b;
            puVar31 = auStack_188 + 0x38;
            if (puStack_148 != (undefined1 *)0x0) {
              puVar31 = puStack_148;
            }
            iVar18 = *(int *)(puVar31 + (ulonglong)(iStack_140 - 1U & uVar33) * 4);
            if (iVar18 == -1) goto LAB_14da7162b;
            do {
              if (*(uint *)(auStack_188._0_8_ + (longlong)iVar18 * 0x10) == uVar33) {
                puVar31 = auStack_188 + 0x38;
                if (puStack_148 != (undefined1 *)0x0) {
                  puVar31 = puStack_148;
                }
                uVar38 = *(uint *)(puVar31 + (ulonglong)(iStack_140 - 1U & uVar33) * 4);
                if (uVar38 == 0xffffffff) goto LAB_14da70f3f;
                goto LAB_14da70f20;
              }
              iVar18 = *(int *)(auStack_188._0_8_ + 8 + (longlong)iVar18 * 0x10);
            } while (iVar18 != -1);
            pFStack_17c8 = pFStack_17c8 + 4;
            uVar41 = (ulonglong)uStack_1770;
          }
          if (((FStack_b28.FoliageIdsAttribute.ConstAttributeArray ==
                (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
              (iVar18 = (int)pFStack_17d0, iVar18 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)FStack_b28.FoliageIdsAttribute.ConstAttributeArray
                                   + 0x60))(), iVar19 <= iVar18)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
                     _dynamic_atexit_destructor_for__EmptyArray__);
              _Init_thread_footer(&::_TSS0);
            }
            pTVar23 = &::EmptyArray;
          }
          else {
            pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                                (&FStack_b28.FoliageIdsAttribute,iVar18);
          }
          pTVar14 = FStack_b28.LengthFromRootAttribute.ConstAttributeArray;
          pFVar36 = (pTVar23->AllocatorInstance).Data;
          iVar18 = pTVar23->ArrayNum;
          pFVar34 = pFVar36 + (longlong)iVar18 * 4;
          while( true ) {
            if (pTVar23->ArrayNum != iVar18) {
              abStack_17e5[7] = false;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (abStack_17e5 + 7);
            }
            pTVar25 = pTStack_1730;
            pFVar12 = pFStack_1760;
            if (pFVar36 == pFVar34) break;
            uVar33 = *(uint *)pFVar36;
            if (((pTVar14 == (TManagedArray<float> *)0x0) || ((int)uVar33 < 0)) ||
               (iVar19 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14), iVar19 <= (int)uVar33)
               ) {
              pfVar24 = &DefaultLengthFromRoot;
            }
            else {
              pfVar24 = TManagedArrayAccessor<float>::operator[]
                                  (&FStack_b28.LengthFromRootAttribute,uVar33);
            }
            if (*pfVar24 <= fVar44 && fVar44 != *pfVar24) {
              uVar33 = *(uint *)pFVar36;
              uVar38 = 0;
              if ((int)uVar33 < TStack_17a0.ArrayNum) {
                uVar38 = ~uVar33 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              TStack_17a0.AllocatorInstance.Data[(int)uVar33] = (FScriptContainerElement)0x1;
            }
            pFVar36 = pFVar36 + 4;
          }
          uVar33 = 0;
          lVar42 = 0;
          if (0 < (longlong)pFStack_1760) {
            do {
              uVar38 = 0;
              if ((int)uVar33 < pTVar25->ArrayNum) {
                uVar38 = ~uVar33 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar38 = *(uint *)((pTVar25->AllocatorInstance).Data + lVar42 * 4);
              uVar39 = 0;
              if ((int)uVar38 < TStack_1790.ArrayNum) {
                uVar39 = ~uVar38 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar33 = uVar33 + 1;
              lVar42 = lVar42 + 1;
              TStack_1790.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
            } while (lVar42 < (longlong)pFVar12);
          }
          uVar33 = uStack_17d4;
          lVar42 = (longlong)(int)uStack_17d4;
          uVar39 = ~uStack_17d4;
          uVar38 = 0;
          if ((int)uStack_17d4 < pTVar25->ArrayNum) {
            uVar38 = uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uStack_17d8 = uStack_17d8 - uVar33;
          TStack_1780.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar34 = (pTVar25->AllocatorInstance).Data + lVar42 * 4;
          if ((int)uStack_17d8 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uStack_17d8);
          }
          if (((pFVar34 == (FScriptContainerElement *)0x0) && (uStack_17d8 != 0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Ptr != nullptr || Count == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x2d3,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          TStack_1780.ArrayNum = uStack_17d8;
          if (uStack_17d8 == 0) {
            TStack_1780.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uStack_17d8,0,&TStack_1780.AllocatorInstance,uStack_17d8,
                       &TStack_1780.ArrayMax);
            memcpy(TStack_1780.AllocatorInstance.Data,pFVar34,(longlong)(int)uStack_17d8 << 2);
          }
          if (((FStack_4c8.BranchPoints.ConstAttributeArray !=
                (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
              (iVar18 = (int)pFStack_17d0, -1 < iVar18)) &&
             (iVar19 = (**(code **)(*(longlong *)FStack_4c8.BranchPoints.ConstAttributeArray + 0x60)
                       )(), iVar18 < iVar19)) {
            TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                      (&FStack_4c8.BranchPoints,iVar18,&TStack_1780);
          }
          uVar38 = 0;
          if ((int)uVar33 < pTVar25->ArrayNum) {
            uVar38 = uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar33 = *(uint *)((pTVar25->AllocatorInstance).Data + (longlong)pFVar12 * 4);
          lVar42 = (longlong)(int)uVar33;
          uVar38 = 0;
          if ((int)uStack_17b0 < pTVar25->ArrayNum) {
            uVar38 = ~uStack_17b0 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar35 = FStack_f58.Positions.ConstAttributeArray;
          iVar18 = *(int *)((pTVar25->AllocatorInstance).Data + uStack_17a8 * 4);
          if (((FStack_f58.Positions.ConstAttributeArray ==
                (TManagedArray<UE::Math::TVector<float>_> *)0x0) || ((int)uVar33 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)FStack_f58.Positions.ConstAttributeArray + 0x60))
                                 (FStack_f58.Positions.ConstAttributeArray), iVar19 <= (int)uVar33))
          {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              DefaultPosition.field0_0x0._0_8_ =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              DefaultPosition.field0_0x0._s_0.Z =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              _Init_thread_footer(&::_TSS0);
            }
            pTVar26 = &DefaultPosition;
          }
          else {
            pTVar26 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                (&FStack_f58.Positions,uVar33);
          }
          if (((pTVar35 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) || (iVar18 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)pTVar35 + 0x60))(pTVar35), iVar19 <= iVar18)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              DefaultPosition.field0_0x0._0_8_ =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              DefaultPosition.field0_0x0._s_0.Z =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              _Init_thread_footer(&::_TSS0);
            }
            pTVar27 = &DefaultPosition;
          }
          else {
            pTVar27 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                (&FStack_f58.Positions,iVar18);
          }
          pTVar14 = FStack_f58.LengthFromRoot.ConstAttributeArray;
          if (((FStack_f58.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
              ((int)uVar33 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)FStack_f58.LengthFromRoot.ConstAttributeArray +
                                   0x60))(FStack_f58.LengthFromRoot.ConstAttributeArray),
             iVar19 <= (int)uVar33)) {
            pfVar24 = &DefaultLengthFromRoot;
          }
          else {
            pfVar24 = TManagedArrayAccessor<float>::operator[](&FStack_f58.LengthFromRoot,uVar33);
          }
          fVar1 = *pfVar24;
          if (((pTVar14 == (TManagedArray<float> *)0x0) || (iVar18 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14), iVar19 <= iVar18)) {
            pfVar24 = &DefaultLengthFromRoot;
          }
          else {
            pfVar24 = TManagedArrayAccessor<float>::operator[](&FStack_f58.LengthFromRoot,iVar18);
          }
          pTVar14 = FStack_f58.PointScale.ConstAttributeArray;
          fVar45 = *pfVar24 - fVar1;
          if (fVar46 < (float)((uint)fVar45 & uVar11)) {
            fVar46 = (fVar44 - fVar1) / fVar45;
          }
          else {
            fVar46 = fVar10;
            if (fVar44 < *pfVar24) {
              fVar46 = 0.0;
            }
          }
          fVar1 = (pTVar27->field0_0x0)._s_0.X;
          if (fVar10 <= fVar46) {
            fVar46 = fVar10;
          }
          fVar45 = (pTVar26->field0_0x0)._s_0.X;
          if (fVar46 <= 0.0) {
            fVar46 = 0.0;
          }
          if (fVar10 <= fVar46) {
            fVar46 = fVar10;
          }
          if (fVar46 <= fVar47) {
            fVar46 = fVar47;
          }
          fVar47 = (pTVar27->field0_0x0)._s_0.Y;
          fVar2 = (pTVar26->field0_0x0)._s_0.Y;
          fVar3 = (pTVar26->field0_0x0)._s_0.Y;
          fVar4 = (pTVar26->field0_0x0)._s_0.X;
          fVar48 = ((pTVar27->field0_0x0)._s_0.Z - (pTVar26->field0_0x0)._s_0.Z) * fVar46 +
                   (pTVar26->field0_0x0)._s_0.Z;
          if (((FStack_f58.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
              (iVar18 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)FStack_f58.PointScale.ConstAttributeArray + 0x60))
                                 (FStack_f58.PointScale.ConstAttributeArray), iVar19 <= iVar18)) {
            pfVar24 = &DefaultPScale;
          }
          else {
            pfVar24 = TManagedArrayAccessor<float>::operator[](&FStack_f58.PointScale,iVar18);
          }
          if (((pTVar14 == (TManagedArray<float> *)0x0) || ((int)uVar33 < 0)) ||
             (iVar18 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14), iVar18 <= (int)uVar33))
          {
            pfVar28 = &DefaultPScale;
          }
          else {
            pfVar28 = TManagedArrayAccessor<float>::operator[](&FStack_f58.PointScale,uVar33);
          }
          fVar5 = *pfVar24;
          fVar6 = *pfVar28;
          fVar7 = *pfVar28;
          if (((FStack_1388.Positions.AttributeArray ==
                (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
              (FStack_1388.Positions.Collection == (FManagedArrayCollection *)0x0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AttributeArray!=nullptr && !IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x74,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar35 = FStack_1388.Positions.AttributeArray;
          uVar39 = ~uVar33 >> 0x1f;
          (FStack_1388.Positions.AttributeArray)->field_0x8 = 1;
          uVar38 = 0;
          if ((int)uVar33 < *(int *)&(FStack_1388.Positions.AttributeArray)->field_0x18) {
            uVar38 = uVar39;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar14 = FStack_1388.LengthFromRoot.AttributeArray;
          lVar8 = *(longlong *)&pTVar35->field_0x10;
          *(ulonglong *)(lVar8 + lVar42 * 0xc) =
               CONCAT44((fVar47 - fVar2) * fVar46 + fVar3,(fVar1 - fVar45) * fVar46 + fVar4);
          *(float *)(lVar8 + 8 + lVar42 * 0xc) = fVar48;
          if (((FStack_1388.LengthFromRoot.AttributeArray == (TManagedArray<float> *)0x0) ||
              (FStack_1388.LengthFromRoot.Collection == (FManagedArrayCollection *)0x0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AttributeArray!=nullptr && !IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x74,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar14->field_0x8 = 1;
          uVar20 = 0;
          uVar38 = uVar20;
          if ((int)uVar33 < *(int *)&pTVar14->field_0x18) {
            uVar38 = uVar39;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar15 = FStack_1388.LengthFromSeed.AttributeArray;
          *(float *)(*(longlong *)&pTVar14->field_0x10 + lVar42 * 4) = fVar44;
          if (((FStack_1388.LengthFromSeed.AttributeArray == (TManagedArray<float> *)0x0) ||
              (FStack_1388.LengthFromSeed.Collection == (FManagedArrayCollection *)0x0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AttributeArray!=nullptr && !IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x74,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar15->field_0x8 = 1;
          uVar38 = uVar20;
          if ((int)uVar33 < *(int *)&pTVar15->field_0x18) {
            uVar38 = uVar39;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar14 = FStack_1388.PointScale.AttributeArray;
          *(float *)(*(longlong *)&pTVar15->field_0x10 + lVar42 * 4) = fVar44;
          if (((FStack_1388.PointScale.AttributeArray == (TManagedArray<float> *)0x0) ||
              (FStack_1388.PointScale.Collection == (FManagedArrayCollection *)0x0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AttributeArray!=nullptr && !IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x74,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar14->field_0x8 = 1;
          if ((int)uVar33 < *(int *)&pTVar14->field_0x18) {
            uVar20 = uVar39;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          *(float *)(*(longlong *)&pTVar14->field_0x10 + lVar42 * 4) =
               (fVar5 - fVar6) * fVar46 + fVar7;
          PV::Facades::FPlantFacade::GetBranchIndices(&FStack_5b8,&TStack_1710,(int)pFStack_1758);
          uVar30 = (ulonglong)TStack_1710.ArrayNum;
          uVar41 = 0x9d4c;
          uStack_17d4 = TStack_1710.ArrayNum;
          uStack_17a8 = 0x9d4c;
          pFStack_1760 = TStack_1710.AllocatorInstance.Data + uVar30 * 4;
          FVar37.Data = TStack_1710.AllocatorInstance.Data;
          while( true ) {
            pFVar34 = pFStack_1760;
            pFStack_17d0 = FVar37.Data;
            if (TStack_1710.ArrayNum != (uint)uVar30) {
              abStack_17e5[8] = false;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (abStack_17e5 + 8);
            }
            if (FVar37.Data == pFVar34) break;
            uVar33 = *(uint *)FVar37.Data;
            uVar38 = 0;
            if ((int)uVar33 < TStack_17c0.ArrayNum) {
              uVar38 = ~uVar33 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (TStack_17c0.AllocatorInstance.Data[(int)uVar33] == (FScriptContainerElement)0x0) {
              uVar33 = *(uint *)FVar37.Data;
              if (((FStack_4c8.BranchPoints.ConstAttributeArray ==
                    (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
                  ((int)uVar33 < 0)) ||
                 (iVar18 = (**(code **)(*(longlong *)FStack_4c8.BranchPoints.ConstAttributeArray +
                                       0x60))(), iVar18 <= (int)uVar33)) {
                if ((*(int *)(uVar41 + *(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8)) < ::_TSS0) &&
                   (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                  atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                         _dynamic_atexit_destructor_for__EmptyPoints__);
                  _Init_thread_footer(&::_TSS0);
                }
                pTVar23 = &EmptyPoints;
              }
              else {
                pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::
                          operator[](&FStack_4c8.BranchPoints,uVar33);
              }
              pFVar36 = (pTVar23->AllocatorInstance).Data;
              iVar18 = pTVar23->ArrayNum;
              pFVar34 = pFVar36 + (longlong)iVar18 * 4;
              while( true ) {
                if (pTVar23->ArrayNum != iVar18) {
                  abStack_17e5[9] = false;
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(abStack_17e5 + 9);
                }
                pTVar29 = FStack_1608.FoliageIdsAttribute.ConstAttributeArray;
                if (pFVar36 == pFVar34) break;
                uVar33 = *(uint *)pFVar36;
                if (((FStack_1388.Positions.ConstAttributeArray ==
                      (TManagedArray<UE::Math::TVector<float>_> *)0x0) || ((int)uVar33 < 0)) ||
                   (iVar19 = (**(code **)(*(longlong *)FStack_1388.Positions.ConstAttributeArray +
                                         0x60))(), iVar19 <= (int)uVar33)) {
                  if ((*(int *)(uVar41 + *(longlong *)
                                          ((longlong)ThreadLocalStoragePointer +
                                          (ulonglong)_tls_index * 8)) < ::_TSS0) &&
                     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                    DefaultPosition.field0_0x0._0_8_ =
                         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                    DefaultPosition.field0_0x0._s_0.Z =
                         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    _Init_thread_footer(&::_TSS0);
                  }
                  pTVar26 = &DefaultPosition;
                }
                else {
                  pTVar26 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                      (&FStack_1388.Positions,uVar33);
                }
                fVar46 = (pTVar26->field0_0x0)._s_0.Z;
                fVar47 = (pTVar26->field0_0x0)._s_0.X;
                fVar1 = (pTVar26->field0_0x0)._s_0.Y;
                if (((FStack_1388.Positions.AttributeArray ==
                      (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
                    (FStack_1388.Positions.Collection == (FManagedArrayCollection *)0x0)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("AttributeArray!=nullptr && !IsConst()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x74,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar35 = FStack_1388.Positions.AttributeArray;
                (FStack_1388.Positions.AttributeArray)->field_0x8 = 1;
                uVar33 = *(uint *)pFVar36;
                lVar42 = (longlong)(int)uVar33;
                uVar38 = 0;
                if ((int)uVar33 < *(int *)&(FStack_1388.Positions.AttributeArray)->field_0x18) {
                  uVar38 = ~uVar33 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                lVar8 = *(longlong *)&pTVar35->field_0x10;
                *(float *)(lVar8 + lVar42 * 0xc) = fVar47;
                *(float *)(lVar8 + 4 + lVar42 * 0xc) = fVar1;
                *(float *)(lVar8 + 8 + lVar42 * 0xc) = fVar46 - fVar48;
                uVar33 = *(uint *)pFVar36;
                if (((FStack_1388.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0)
                    || ((int)uVar33 < 0)) ||
                   (iVar19 = (**(code **)(*(longlong *)
                                           FStack_1388.LengthFromRoot.ConstAttributeArray + 0x60))()
                   , iVar19 <= (int)uVar33)) {
                  pfVar24 = &DefaultLengthFromRoot;
                }
                else {
                  pfVar24 = TManagedArrayAccessor<float>::operator[]
                                      (&FStack_1388.LengthFromRoot,uVar33);
                }
                pTVar14 = FStack_1388.LengthFromRoot.AttributeArray;
                fVar46 = *pfVar24 - fVar44;
                if (fVar46 <= 0.0) {
                  fVar46 = 0.0;
                }
                if (((FStack_1388.LengthFromRoot.AttributeArray == (TManagedArray<float> *)0x0) ||
                    (FStack_1388.LengthFromRoot.Collection == (FManagedArrayCollection *)0x0)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("AttributeArray!=nullptr && !IsConst()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x74,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar14->field_0x8 = 1;
                uVar33 = *(uint *)pFVar36;
                uVar38 = 0;
                if ((int)uVar33 < *(int *)&pTVar14->field_0x18) {
                  uVar38 = ~uVar33 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                *(float *)(*(longlong *)&pTVar14->field_0x10 + (longlong)(int)uVar33 * 4) = fVar46;
                uVar33 = *(uint *)pFVar36;
                if (((FStack_1388.LengthFromSeed.ConstAttributeArray == (TManagedArray<float> *)0x0)
                    || ((int)uVar33 < 0)) ||
                   (iVar19 = (**(code **)(*(longlong *)
                                           FStack_1388.LengthFromSeed.ConstAttributeArray + 0x60))()
                   , iVar19 <= (int)uVar33)) {
                  pfVar24 = &DefaultLengthFromSeed;
                }
                else {
                  pfVar24 = TManagedArrayAccessor<float>::operator[]
                                      (&FStack_1388.LengthFromSeed,uVar33);
                }
                pTVar14 = FStack_1388.LengthFromSeed.AttributeArray;
                fVar46 = *pfVar24 - fVar44;
                if (fVar46 <= 0.0) {
                  fVar46 = 0.0;
                }
                if (((FStack_1388.LengthFromSeed.AttributeArray == (TManagedArray<float> *)0x0) ||
                    (FStack_1388.LengthFromSeed.Collection == (FManagedArrayCollection *)0x0)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("AttributeArray!=nullptr && !IsConst()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x74,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar14->field_0x8 = 1;
                uVar33 = *(uint *)pFVar36;
                uVar38 = 0;
                if ((int)uVar33 < *(int *)&pTVar14->field_0x18) {
                  uVar38 = ~uVar33 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar36 = pFVar36 + 4;
                *(float *)(*(longlong *)&pTVar14->field_0x10 + (longlong)(int)uVar33 * 4) = fVar46;
              }
              uVar33 = *(uint *)pFStack_17d0;
              if (((FStack_1608.FoliageIdsAttribute.ConstAttributeArray ==
                    (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
                  ((int)uVar33 < 0)) ||
                 (iVar18 = (**(code **)(*(longlong *)
                                         FStack_1608.FoliageIdsAttribute.ConstAttributeArray + 0x60)
                           )(FStack_1608.FoliageIdsAttribute.ConstAttributeArray),
                 iVar18 <= (int)uVar33)) {
                if ((*(int *)(uVar41 + *(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8)) < ::_TSS0) &&
                   (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                  atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
                         _dynamic_atexit_destructor_for__EmptyArray__);
                  _Init_thread_footer(&::_TSS0);
                }
                pTVar23 = &::EmptyArray;
              }
              else {
                pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::
                          operator[](&FStack_1608.FoliageIdsAttribute,uVar33);
              }
              pTVar14 = FStack_1608.LengthFromRootAttribute.ConstAttributeArray;
              pTVar35 = FStack_1608.PivotPointsAttribute.ConstAttributeArray;
              pFVar34 = (pTVar23->AllocatorInstance).Data;
              iVar18 = pTVar23->ArrayNum;
              pFStack_1758 = pFVar34 + (longlong)iVar18 * 4;
              while( true ) {
                pFVar36 = pFStack_1758;
                if (pTVar23->ArrayNum != iVar18) {
                  abStack_17e5[10] = false;
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(abStack_17e5 + 10);
                }
                uVar41 = uStack_17a8;
                FVar37.Data = pFStack_17d0;
                if (pFVar34 == pFVar36) break;
                iVar19 = *(int *)pFVar34;
                if (((pTVar35 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) || (iVar19 < 0))
                   || (iVar21 = (**(code **)(*(longlong *)pTVar35 + 0x60))(pTVar35),
                      iVar21 <= iVar19)) {
                  if ((*(int *)(uStack_17a8 +
                               *(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)) <
                       ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                    DefaultPivotPoint.field0_0x0._0_8_ =
                         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                    DefaultPivotPoint.field0_0x0._s_0.Z =
                         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    _Init_thread_footer(&::_TSS0);
                  }
                  pTVar26 = &DefaultPivotPoint;
                }
                else {
                  pTVar26 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                      (&FStack_1608.PivotPointsAttribute,iVar19);
                }
                TStack_1720._s_0.X = (pTVar26->field0_0x0)._s_0.X;
                TStack_1720._s_0.Y = (pTVar26->field0_0x0)._s_0.Y;
                iVar19 = *(int *)pFVar34;
                TStack_1720._s_0.Z = (pTVar26->field0_0x0)._s_0.Z - fVar48;
                if ((FStack_1608.Collection == (FManagedArrayCollection *)0x0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!IsConst()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                                        ,0x129,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if ((((((FStack_1608.NamesAttribute.ConstAttributeArray !=
                         (TManagedArray<FString> *)0x0) &&
                       (FStack_1608.NameIdsAttribute.ConstAttributeArray !=
                        (TManagedArray<int> *)0x0)) &&
                      (FStack_1608.BranchIdsAttribute.ConstAttributeArray !=
                       (TManagedArray<int> *)0x0)) &&
                     ((pTVar35 != (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
                      (FStack_1608.UpVectorsAttribute.ConstAttributeArray !=
                       (TManagedArray<UE::Math::TVector<float>_> *)0x0)))) &&
                    (FStack_1608.NormalVectorsAttribute.ConstAttributeArray !=
                     (TManagedArray<UE::Math::TVector<float>_> *)0x0)) &&
                   (((FStack_1608.ScalesAttribute.ConstAttributeArray != (TManagedArray<float> *)0x0
                     && (pTVar14 != (TManagedArray<float> *)0x0)) &&
                    ((pTVar29 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0 &&
                     ((FStack_1608.ParentBoneIdsAttribute.ConstAttributeArray !=
                       (TManagedArray<int> *)0x0 &&
                      (bVar17 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
                                          (&FStack_1608.PivotPointsAttribute,iVar19), bVar17))))))))
                {
                  TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
                            (&FStack_1608.PivotPointsAttribute,iVar19,
                             (TVector<float> *)&TStack_1720._s_0);
                }
                iVar19 = *(int *)pFVar34;
                if (((pTVar14 == (TManagedArray<float> *)0x0) || (iVar19 < 0)) ||
                   (iVar21 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14), iVar21 <= iVar19))
                {
                  pfVar24 = &DefaultLengthFromRoot;
                }
                else {
                  pfVar24 = TManagedArrayAccessor<float>::operator[]
                                      (&FStack_1608.LengthFromRootAttribute,iVar19);
                }
                iVar19 = *(int *)pFVar34;
                afStack_1768[0] = *pfVar24 - fVar44;
                if ((FStack_1608.Collection == (FManagedArrayCollection *)0x0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!IsConst()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                                        ,0x90,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if ((((((FStack_1608.NamesAttribute.ConstAttributeArray !=
                         (TManagedArray<FString> *)0x0) &&
                       (FStack_1608.NameIdsAttribute.ConstAttributeArray !=
                        (TManagedArray<int> *)0x0)) &&
                      ((FStack_1608.BranchIdsAttribute.ConstAttributeArray !=
                        (TManagedArray<int> *)0x0 &&
                       (((pTVar35 != (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
                         (FStack_1608.UpVectorsAttribute.ConstAttributeArray !=
                          (TManagedArray<UE::Math::TVector<float>_> *)0x0)) &&
                        (FStack_1608.NormalVectorsAttribute.ConstAttributeArray !=
                         (TManagedArray<UE::Math::TVector<float>_> *)0x0)))))) &&
                     ((FStack_1608.ScalesAttribute.ConstAttributeArray !=
                       (TManagedArray<float> *)0x0 && (pTVar14 != (TManagedArray<float> *)0x0)))) &&
                    (pTVar29 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
                   ((FStack_1608.ParentBoneIdsAttribute.ConstAttributeArray !=
                     (TManagedArray<int> *)0x0 &&
                    (bVar17 = TManagedArrayAccessor<float>::IsValidIndex
                                        (&FStack_1608.LengthFromRootAttribute,iVar19), bVar17)))) {
                  TManagedArrayAccessor<float>::ModifyAt
                            (&FStack_1608.LengthFromRootAttribute,iVar19,afStack_1768);
                }
                pFVar34 = pFVar34 + 4;
              }
            }
            uVar30 = (ulonglong)uStack_17d4;
            FVar37.Data = FVar37.Data + 4;
          }
          if (TStack_1710.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(TStack_1710.AllocatorInstance.Data);
          }
          fVar46 = __real_322bcc77;
          fVar47 = __real_3dcccccd;
          if (TStack_1780.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(TStack_1780.AllocatorInstance.Data);
            fVar46 = __real_322bcc77;
            fVar47 = __real_3dcccccd;
          }
        }
        TStack_16c0.UnvisitedBitMask = TStack_16c0.UnvisitedBitMask & ~TStack_16c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_16c0);
      }
      uStack_f0 = 0;
      if (pvStack_f8 != (void *)0x0) {
        FMemory::Free(pvStack_f8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)auStack_138);
      RemoveEntriesAndRecomputeAttributes
                (pFStack_16d0,pFStack_16d8,&TStack_1790,&TStack_17c0,&TStack_17a0);
      iStack_140 = 0;
      if (puStack_148 != (undefined1 *)0x0) {
        FMemory::Free(puStack_148);
      }
      TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)auStack_188);
      TStack_1d8.Pairs.HashSize = 0;
      if (TStack_1d8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)TStack_1d8.Pairs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&TStack_1d8);
      if (TStack_17a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_17a0.AllocatorInstance.Data);
      }
      if (TStack_17c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_17c0.AllocatorInstance.Data);
      }
      if (TStack_1790.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_1790.AllocatorInstance.Data);
      }
    }
  }
  if (bVar43) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
  while (uVar38 = puVar40[2], uVar38 != 0xffffffff) {
LAB_14da70f20:
    puVar40 = (uint *)((longlong)(int)uVar38 * 0x10 + auStack_188._0_8_);
    if (*puVar40 == uVar33) {
      if (puVar40 != (uint *)0x0) goto LAB_14da70f6c;
      goto LAB_14da70f41;
    }
  }
LAB_14da70f3f:
  puVar40 = (uint *)0x0;
LAB_14da70f41:
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar17) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14da70f6c:
  if ((float)puVar40[1] <= fVar44 && fVar44 != (float)puVar40[1]) {
    puVar40 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::FindChecked(&TStack_1d8,*(uint *)pFStack_17c8);
    uVar33 = *puVar40;
    uVar38 = 0;
    if ((int)uVar33 < TStack_17c0.ArrayNum) {
      uVar38 = ~uVar33 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TStack_17c0.AllocatorInstance.Data[(int)uVar33] = (FScriptContainerElement)0x1;
    pTVar23 = PV::Facades::FBranchFacade::GetPoints(&FStack_8a8,uVar33);
    pFVar36 = (pTVar23->AllocatorInstance).Data;
    iVar18 = pTVar23->ArrayNum;
    pFVar34 = pFVar36 + (longlong)iVar18 * 4;
    while( true ) {
      if (pTVar23->ArrayNum != iVar18) {
        abStack_17e5[3] = false;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (abStack_17e5 + 3);
      }
      if (pFVar36 == pFVar34) break;
      uVar38 = *(uint *)pFVar36;
      uVar39 = 0;
      if ((int)uVar38 < TStack_1790.ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar36 = pFVar36 + 4;
      TStack_1790.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
    }
    if (((FStack_b28.FoliageIdsAttribute.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar33 < 0)) ||
       (iVar18 = (**(code **)(*(longlong *)FStack_b28.FoliageIdsAttribute.ConstAttributeArray + 0x60
                             ))(), iVar18 <= (int)uVar33)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
               _dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar23 = &::EmptyArray;
    }
    else {
      pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&FStack_b28.FoliageIdsAttribute,uVar33);
    }
    pFVar36 = (pTVar23->AllocatorInstance).Data;
    iVar18 = pTVar23->ArrayNum;
    pFVar34 = pFVar36 + (longlong)iVar18 * 4;
    while( true ) {
      if (pTVar23->ArrayNum != iVar18) {
        abStack_17e5[4] = false;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (abStack_17e5 + 4);
      }
      if (pFVar36 == pFVar34) break;
      uVar38 = *(uint *)pFVar36;
      uVar39 = 0;
      if ((int)uVar38 < TStack_17a0.ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar36 = pFVar36 + 4;
      TStack_17a0.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
    }
    if (((FStack_8a8.Children.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar33 < 0)) ||
       (iVar18 = (**(code **)(*(longlong *)FStack_8a8.Children.ConstAttributeArray + 0x60))(),
       iVar18 <= (int)uVar33)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetChildren'::__l2::
               _dynamic_atexit_destructor_for__EmptyChildren__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar23 = &EmptyChildren;
    }
    else {
      pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&FStack_8a8.Children,uVar33);
    }
    iVar18 = pTVar23->ArrayNum;
    uVar33 = 0;
    pFVar34 = pFStack_1738;
    pTStack_1748 = pTVar23;
    if (0 < iVar18) {
      lStack_1740 = 0;
LAB_14da71221:
      lVar42 = lStack_1740;
      uVar38 = 0;
      if ((int)uVar33 < iVar18) {
        uVar38 = ~uVar33 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar38 = *(uint *)((pTVar23->AllocatorInstance).Data + lVar42);
      if (TStack_1d8.Pairs.Elements._8_4_ != TStack_1d8.Pairs.Elements._52_4_) {
        FVar32 = (ForElementType<FSetElementId>)&TStack_1d8.Pairs.Hash;
        if (TStack_1d8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar32 = TStack_1d8.Pairs.Hash.SecondaryData;
        }
        for (iVar18 = *(int *)((longlong)FVar32 +
                              (ulonglong)(TStack_1d8.Pairs.HashSize - 1U & uVar38) * 4);
            iVar18 != -1;
            iVar18 = *(int *)(TStack_1d8.Pairs.Elements._0_8_ + 8 + (longlong)iVar18 * 0x10)) {
          if (*(uint *)(TStack_1d8.Pairs.Elements._0_8_ + (longlong)iVar18 * 0x10) == uVar38) {
            uVar38 = 0;
            if ((int)uVar33 < pTVar23->ArrayNum) {
              uVar38 = ~uVar33 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar38 = *(uint *)((pTVar23->AllocatorInstance).Data + lVar42);
            if (TStack_1d8.Pairs.Elements._8_4_ == TStack_1d8.Pairs.Elements._52_4_)
            goto LAB_14da71371;
            FVar32 = (ForElementType<FSetElementId>)&TStack_1d8.Pairs.Hash;
            if (TStack_1d8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar32 = TStack_1d8.Pairs.Hash.SecondaryData;
            }
            uVar39 = *(uint *)((longlong)FVar32 +
                              (ulonglong)(TStack_1d8.Pairs.HashSize - 1U & uVar38) * 4);
            goto joined_r0x00014da71350;
          }
        }
      }
      goto LAB_14da7160d;
    }
  }
LAB_14da7162b:
  pFStack_17c8 = pFStack_17c8 + 4;
  uVar41 = (ulonglong)uStack_1770;
  goto LAB_14da70e4c;
joined_r0x00014da71350:
  if (uVar39 == 0xffffffff) goto LAB_14da71371;
  puVar40 = (uint *)((longlong)(int)uVar39 * 0x10 + TStack_1d8.Pairs.Elements._0_8_);
  if (*puVar40 == uVar38) {
    if (puVar40 != (uint *)0x0) goto LAB_14da71399;
    goto LAB_14da71373;
  }
  uVar39 = puVar40[2];
  goto joined_r0x00014da71350;
LAB_14da71371:
  puVar40 = (uint *)0x0;
LAB_14da71373:
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar17) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14da71399:
  uVar38 = puVar40[1];
  uVar39 = 0;
  if ((int)uVar38 < TStack_17c0.ArrayNum) {
    uVar39 = ~uVar38 >> 0x1f;
  }
  if ((uVar39 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  TStack_17c0.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
  if (((FStack_8a8.BranchPoints.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar38 < 0)) ||
     (iVar18 = (**(code **)(*(longlong *)FStack_8a8.BranchPoints.ConstAttributeArray + 0x60))(),
     iVar18 <= (int)uVar38)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
             _dynamic_atexit_destructor_for__EmptyPoints__);
      _Init_thread_footer(&::_TSS0);
    }
    pTVar23 = &EmptyPoints;
  }
  else {
    pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                        (&FStack_8a8.BranchPoints,uVar38);
  }
  pFVar36 = (pTVar23->AllocatorInstance).Data;
  iVar18 = pTVar23->ArrayNum;
  pFVar34 = pFVar36 + (longlong)iVar18 * 4;
  while( true ) {
    if (pTVar23->ArrayNum != iVar18) {
      abStack_17e5[5] = false;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (abStack_17e5 + 5);
    }
    if (pFVar36 == pFVar34) break;
    uVar39 = *(uint *)pFVar36;
    uVar20 = 0;
    if ((int)uVar39 < TStack_1790.ArrayNum) {
      uVar20 = ~uVar39 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar36 = pFVar36 + 4;
    TStack_1790.AllocatorInstance.Data[(int)uVar39] = (FScriptContainerElement)0x1;
  }
  if (((FStack_b28.FoliageIdsAttribute.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar38 < 0)) ||
     (iVar18 = (**(code **)(*(longlong *)FStack_b28.FoliageIdsAttribute.ConstAttributeArray + 0x60))
                         (), iVar18 <= (int)uVar38)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
    pTVar25 = &::EmptyArray;
  }
  else {
    pTVar25 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                        (&FStack_b28.FoliageIdsAttribute,uVar38);
  }
  pFVar36 = (pTVar25->AllocatorInstance).Data;
  iVar18 = pTVar25->ArrayNum;
  pFVar34 = pFVar36 + (longlong)iVar18 * 4;
  while( true ) {
    if (pTVar25->ArrayNum != iVar18) {
      abStack_17e5[6] = false;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (abStack_17e5 + 6);
    }
    pTVar23 = pTStack_1748;
    lVar42 = lStack_1740;
    if (pFVar36 == pFVar34) break;
    uVar38 = *(uint *)pFVar36;
    uVar39 = 0;
    if ((int)uVar38 < TStack_17a0.ArrayNum) {
      uVar39 = ~uVar38 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar36 = pFVar36 + 4;
    TStack_17a0.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
  }
LAB_14da7160d:
  iVar18 = pTVar23->ArrayNum;
  lStack_1740 = lVar42 + 4;
  uVar33 = uVar33 + 1;
  pFVar34 = pFStack_1738;
  if (iVar18 <= (int)uVar33) goto LAB_14da7162b;
  goto LAB_14da71221;
}

// CarveFromBottom @ 14da706e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPVCarve::CarveFromBottom
          (FManagedArrayCollection *param_1,FManagedArrayCollection *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  code *pcVar9;
  float fVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  TManagedArray<float> *pTVar14;
  TManagedArray<float> *pTVar15;
  ulonglong uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  float *pfVar24;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar25;
  TVector<float> *pTVar26;
  TVector<float> *pTVar27;
  float *pfVar28;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar29;
  ulonglong uVar30;
  undefined1 *puVar31;
  ForElementType<FSetElementId> FVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  TManagedArray<UE::Math::TVector<float>_> *pTVar35;
  FScriptContainerElement *pFVar36;
  ForAnyElementType FVar37;
  uint uVar38;
  uint uVar39;
  uint *puVar40;
  ulonglong uVar41;
  longlong lVar42;
  bool bVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStackY_1828 [32];
  bool local_17e7;
  bool local_17e6;
  bool local_17e5 [13];
  uint local_17d8;
  uint local_17d4;
  FScriptContainerElement *local_17d0;
  FScriptContainerElement *local_17c8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_17c0;
  uint local_17b0;
  ulonglong local_17a8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_17a0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_1790;
  TArray<int,TSizedDefaultAllocator<32>_> local_1780;
  uint local_1770;
  float local_1768 [2];
  FScriptContainerElement *local_1760;
  FScriptContainerElement *local_1758;
  TVector2<float>_u_0 local_1750;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1748;
  longlong local_1740;
  FScriptContainerElement *local_1738;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1730;
  TVector2<float>_u_0 local_1728;
  TVector<float>_u_0 local_1720;
  TArray<int,TSizedDefaultAllocator<32>_> local_1710;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1700;
  TArray<int,TSizedDefaultAllocator<32>_> *local_16e0;
  FManagedArrayCollection *local_16d8;
  FManagedArrayCollection *local_16d0;
  longlong *local_16c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_16c0;
  undefined8 uStack_16a0;
  undefined1 local_1698 [40];
  int local_1670;
  undefined4 uStack_166c;
  longlong *local_1668;
  longlong lStack_1660;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  int local_1640;
  undefined4 uStack_163c;
  longlong *local_1638;
  longlong lStack_1630;
  TBitArray<FDefaultBitArrayAllocator> *local_1628;
  undefined8 uStack_1620;
  undefined8 local_1618;
  undefined8 uStack_1610;
  FFoliageFacade local_1608;
  FPointFacade local_1388;
  FPointFacade local_f58;
  FFoliageFacade local_b28;
  FBranchFacade local_8a8;
  FPlantFacade local_5b8;
  FBranchFacade local_4c8;
  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> local_1d8;
  undefined1 local_188 [64];
  undefined1 *local_148;
  int local_140;
  undefined1 local_138 [40];
  int local_110;
  int local_104;
  void *local_f8;
  undefined4 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1828;
  bVar43 = -1 < CpuChannel->Enabled;
  local_16d8 = param_2;
  local_16d0 = param_1;
  if (bVar43) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId377,"PVCarve::CarveFromBottom",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVCarve.cpp"
               ,0x179);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId377);
  }
  PV::Facades::FBranchFacade::FBranchFacade(&local_8a8,param_2);
  PV::Facades::FPointFacade::FPointFacade(&local_f58,param_2);
  PV::Facades::FFoliageFacade::FFoliageFacade(&local_b28,param_2);
  PV::Facades::FPlantFacade::FPlantFacade(&local_5b8,param_2);
  PV::Facades::FBranchFacade::FBranchFacade(&local_4c8,param_1);
  PV::Facades::FPointFacade::FPointFacade(&local_1388,param_1);
  PV::Facades::FFoliageFacade::FFoliageFacade(&local_1608,param_1,0);
  pTVar35 = local_f58.Positions.ConstAttributeArray;
  if (local_f58.Positions.ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    iVar18 = FManagedArrayCollection::NumElements
                       (local_f58.Positions.ConstCollection,local_f58.Positions.Group);
    pTVar35 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    iVar18 = (**(code **)(*(longlong *)local_f58.Positions.ConstAttributeArray + 0x60))
                       (local_f58.Positions.ConstAttributeArray);
  }
  if (iVar18 != 0) {
    if (local_8a8.Parents.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar18 = FManagedArrayCollection::NumElements
                         (local_8a8.Parents.ConstCollection,local_8a8.Parents.Group);
      pTVar29 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
    }
    else {
      iVar18 = (**(code **)(*(longlong *)local_8a8.Parents.ConstAttributeArray + 0x60))();
      pTVar29 = local_8a8.Parents.ConstAttributeArray;
    }
    if (iVar18 != 0) {
      local_1790.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1790.ArrayNum = 0;
      local_1790.ArrayMax = 0;
      if (pTVar35 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        iVar18 = FManagedArrayCollection::NumElements
                           (local_f58.Positions.ConstCollection,local_f58.Positions.Group);
      }
      else {
        iVar18 = (**(code **)(*(longlong *)pTVar35 + 0x60))(pTVar35);
      }
      local_17e7 = false;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_1790,&local_17e7,iVar18);
      local_17c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_17c0.ArrayNum = 0;
      local_17c0.ArrayMax = 0;
      if (pTVar29 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
        iVar18 = FManagedArrayCollection::NumElements
                           (local_8a8.Parents.ConstCollection,local_8a8.Parents.Group);
      }
      else {
        iVar18 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
      }
      local_17e6 = false;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_17c0,&local_17e6,iVar18);
      local_17a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_17a0.ArrayNum = 0;
      local_17a0.ArrayMax = 0;
      if (local_b28.NameIdsAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) {
        iVar18 = FManagedArrayCollection::NumElements
                           (local_b28.NameIdsAttribute.ConstCollection,
                            local_b28.NameIdsAttribute.Group);
      }
      else {
        iVar18 = (**(code **)(*(longlong *)local_b28.NameIdsAttribute.ConstAttributeArray + 0x60))()
        ;
      }
      local_17e5[0] = false;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_17a0,local_17e5,iVar18);
      local_1d8.Pairs.Elements._0_8_ = 0;
      local_1d8.Pairs.Elements._8_8_ = 0;
      local_1d8.Pairs.Elements._32_8_ = 0;
      local_1d8.Pairs.Elements._40_4_ = 0;
      local_1d8.Pairs.Elements._44_4_ = 0x80;
      local_1d8.Pairs.Elements._48_4_ = 0xffffffff;
      local_1d8.Pairs.Elements._52_4_ = 0;
      local_1d8.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_1d8.Pairs.HashSize = 0;
      local_188._0_8_ = 0;
      local_188._8_8_ = 0;
      local_188._32_8_ = 0;
      local_188._40_4_ = 0;
      local_188._44_4_ = 0x80;
      local_188._48_4_ = 0xffffffff;
      local_188._52_4_ = 0;
      local_148 = (undefined1 *)0x0;
      local_140 = 0;
      ComputeMetadata((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                      &local_1d8,
                      (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                       *)local_188,&local_8a8,&local_f58);
      PV::Facades::FPlantFacade::GetPlantNumbersToTrunkIndicesMap
                (&local_5b8,
                 (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                 local_138);
      local_1700.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
      local_1700._padding_._0_4_ = 0;
      local_1700._padding_._4_4_ = 1;
      local_1700.UnvisitedBitMask = 0xffffffff;
      local_1700.CurrentBitIndex = 0;
      local_1700.BaseBitIndex = 0;
      if (local_110 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1700);
      }
      TStack_16c0._padding_ = CONCAT44(local_1700._padding_._4_4_,(undefined4)local_1700._padding_);
      local_16c8 = (longlong *)local_138;
      TStack_16c0.CurrentBitIndex = local_1700.CurrentBitIndex;
      TStack_16c0.UnvisitedBitMask = local_1700.UnvisitedBitMask;
      TStack_16c0._28_4_ = local_1700._28_4_;
      TStack_16c0.BaseBitIndex = local_1700.BaseBitIndex;
      local_1670 = local_138._8_4_ - local_104;
      local_1698._16_8_ = local_1700.Array;
      uStack_16a0 = CONCAT44(uStack_166c,local_1670);
      TStack_16c0.Array = local_1700.Array;
      local_1698._0_8_ = local_16c8;
      local_1698._8_8_ = TStack_16c0._padding_;
      local_1698._24_8_ = TStack_16c0._16_8_;
      local_1698._32_8_ = TStack_16c0._24_8_;
      pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_1698,
                           (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),local_110);
      uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar10 = __real_3f800000;
      local_1668 = (longlong *)local_138;
      lStack_1660 = pTVar22->_padding_;
      pTStack_1658 = pTVar22->Array;
      uStack_1650._0_4_ = pTVar22->UnvisitedBitMask;
      uStack_1650._4_4_ = pTVar22->CurrentBitIndex;
      uStack_1648 = *(undefined8 *)&pTVar22->BaseBitIndex;
      local_1640 = local_138._8_4_ - local_104;
      uStack_1610 = CONCAT44(uStack_163c,local_1640);
      fVar46 = __real_322bcc77;
      fVar47 = __real_3dcccccd;
      local_1638 = local_1668;
      lStack_1630 = lStack_1660;
      local_1628 = pTStack_1658;
      uStack_1620 = uStack_1650;
      local_1618 = uStack_1648;
      while( true ) {
        plVar13 = local_16c8;
        uVar41 = 0;
        if ((int)local_16c8[1] - *(int *)((longlong)local_16c8 + 0x34) != (int)uStack_16a0) {
          local_17e5[1] = false;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_17e5 + 1);
        }
        if (((TStack_16c0.CurrentBitIndex == uStack_1620._4_4_) && (TStack_16c0.Array == local_1628)
            ) && (plVar13 == local_1638)) break;
        local_1758 = *(FScriptContainerElement **)
                      (*plVar13 + (longlong)TStack_16c0.CurrentBitIndex * 0x10);
        local_17d0 = (FScriptContainerElement *)((ulonglong)local_1758 >> 0x20);
        uVar38 = (uint)((ulonglong)local_1758 >> 0x20);
        pTVar23 = PV::Facades::FBranchFacade::GetPoints(&local_8a8,uVar38);
        pTVar14 = local_f58.LengthFromRoot.ConstAttributeArray;
        uVar33 = pTVar23->ArrayNum;
        local_17d8 = uVar33;
        local_1730 = pTVar23;
        if ((int)uVar33 < 2) {
          uVar33 = 0;
          if ((int)uVar38 < local_17c0.ArrayNum) {
            uVar33 = ~uVar38 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_17c0.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
        }
        else {
          if (local_f58.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0) {
LAB_14da70c84:
            pfVar24 = &DefaultLengthFromRoot;
          }
          else {
            iVar18 = *(int *)(pTVar23->AllocatorInstance).Data;
            bVar17 = TManagedArrayAccessor<float>::IsValidIndex(&local_f58.LengthFromRoot,iVar18);
            if (!bVar17) goto LAB_14da70c84;
            pfVar24 = TManagedArrayAccessor<float>::operator[](&local_f58.LengthFromRoot,iVar18);
          }
          fVar44 = *pfVar24;
          uVar39 = uVar33 - 1;
          uVar38 = 0;
          if ((int)uVar39 < pTVar23->ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (pTVar14 == (TManagedArray<float> *)0x0) {
LAB_14da70d16:
            pfVar24 = &DefaultLengthFromRoot;
          }
          else {
            iVar18 = *(int *)((pTVar23->AllocatorInstance).Data + (longlong)(int)uVar39 * 4);
            bVar17 = TManagedArrayAccessor<float>::IsValidIndex(&local_f58.LengthFromRoot,iVar18);
            if (!bVar17) goto LAB_14da70d16;
            pfVar24 = TManagedArrayAccessor<float>::operator[](&local_f58.LengthFromRoot,iVar18);
          }
          local_1728._s_0.Y = *pfVar24;
          local_1750._s_0.X = 0.0;
          local_1750._s_0.Y = 1.0;
          local_1728._s_0.X = fVar44;
          fVar44 = FMath::GetMappedRangeValueClamped<float,float>
                             ((TVector2<float> *)&local_1750._s_0,
                              (TVector2<float> *)&local_1728._s_0,param_3);
          local_17b0 = 0;
          local_17a8 = 0;
          uVar30 = uVar41;
          uVar38 = local_17b0;
          uVar16 = local_17a8;
          if (0 < (longlong)(int)uVar33) {
            do {
              uVar38 = (uint)uVar30;
              uVar39 = 0;
              if ((int)uVar38 < pTVar23->ArrayNum) {
                uVar39 = ~uVar38 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar18 = *(int *)((pTVar23->AllocatorInstance).Data + uVar41 * 4);
              if (((pTVar14 == (TManagedArray<float> *)0x0) || (iVar18 < 0)) ||
                 (iVar19 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14), iVar19 <= iVar18)) {
                pfVar24 = &DefaultLengthFromRoot;
              }
              else {
                pfVar24 = TManagedArrayAccessor<float>::operator[](&local_f58.LengthFromRoot,iVar18)
                ;
              }
              uVar16 = uVar41;
              if (fVar44 < *pfVar24 || fVar44 == *pfVar24) break;
              uVar41 = uVar41 + 1;
              uVar30 = (ulonglong)(uVar38 + 1);
              uVar38 = uVar38 + 1;
              uVar16 = uVar41;
            } while ((longlong)uVar41 < (longlong)(int)uVar33);
          }
          local_17a8 = uVar16;
          local_17b0 = uVar38;
          local_17d4 = local_17b0 - 1;
          local_1760 = (FScriptContainerElement *)(local_17a8 - 1);
          local_16e0 = PV::Facades::FBranchFacade::GetChildren(&local_8a8,(int)local_17d0);
          local_1770 = local_16e0->ArrayNum;
          uVar41 = (ulonglong)(int)local_1770;
          local_17c8 = (local_16e0->AllocatorInstance).Data;
          pFVar34 = local_17c8 + uVar41 * 4;
          local_1738 = pFVar34;
LAB_14da70e4c:
          while( true ) {
            if (local_16e0->ArrayNum != (int)uVar41) {
              local_17e5[2] = false;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_17e5 + 2);
            }
            if (local_17c8 == pFVar34) break;
            uVar33 = *(uint *)local_17c8;
            if (local_188._8_4_ == local_188._52_4_) goto LAB_14da7162b;
            puVar31 = local_188 + 0x38;
            if (local_148 != (undefined1 *)0x0) {
              puVar31 = local_148;
            }
            iVar18 = *(int *)(puVar31 + (ulonglong)(local_140 - 1U & uVar33) * 4);
            if (iVar18 == -1) goto LAB_14da7162b;
            do {
              if (*(uint *)(local_188._0_8_ + (longlong)iVar18 * 0x10) == uVar33) {
                puVar31 = local_188 + 0x38;
                if (local_148 != (undefined1 *)0x0) {
                  puVar31 = local_148;
                }
                uVar38 = *(uint *)(puVar31 + (ulonglong)(local_140 - 1U & uVar33) * 4);
                if (uVar38 == 0xffffffff) goto LAB_14da70f3f;
                goto LAB_14da70f20;
              }
              iVar18 = *(int *)(local_188._0_8_ + 8 + (longlong)iVar18 * 0x10);
            } while (iVar18 != -1);
            local_17c8 = local_17c8 + 4;
            uVar41 = (ulonglong)local_1770;
          }
          if (((local_b28.FoliageIdsAttribute.ConstAttributeArray ==
                (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
              (iVar18 = (int)local_17d0, iVar18 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)local_b28.FoliageIdsAttribute.ConstAttributeArray +
                                   0x60))(), iVar19 <= iVar18)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
                     _dynamic_atexit_destructor_for__EmptyArray__);
              _Init_thread_footer(&::_TSS0);
            }
            pTVar23 = &::EmptyArray;
          }
          else {
            pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                                (&local_b28.FoliageIdsAttribute,iVar18);
          }
          pTVar14 = local_b28.LengthFromRootAttribute.ConstAttributeArray;
          pFVar36 = (pTVar23->AllocatorInstance).Data;
          iVar18 = pTVar23->ArrayNum;
          pFVar34 = pFVar36 + (longlong)iVar18 * 4;
          while( true ) {
            if (pTVar23->ArrayNum != iVar18) {
              local_17e5[7] = false;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_17e5 + 7);
            }
            pTVar25 = local_1730;
            pFVar12 = local_1760;
            if (pFVar36 == pFVar34) break;
            uVar33 = *(uint *)pFVar36;
            if (((pTVar14 == (TManagedArray<float> *)0x0) || ((int)uVar33 < 0)) ||
               (iVar19 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14), iVar19 <= (int)uVar33)
               ) {
              pfVar24 = &DefaultLengthFromRoot;
            }
            else {
              pfVar24 = TManagedArrayAccessor<float>::operator[]
                                  (&local_b28.LengthFromRootAttribute,uVar33);
            }
            if (*pfVar24 <= fVar44 && fVar44 != *pfVar24) {
              uVar33 = *(uint *)pFVar36;
              uVar38 = 0;
              if ((int)uVar33 < local_17a0.ArrayNum) {
                uVar38 = ~uVar33 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_17a0.AllocatorInstance.Data[(int)uVar33] = (FScriptContainerElement)0x1;
            }
            pFVar36 = pFVar36 + 4;
          }
          uVar33 = 0;
          lVar42 = 0;
          if (0 < (longlong)local_1760) {
            do {
              uVar38 = 0;
              if ((int)uVar33 < pTVar25->ArrayNum) {
                uVar38 = ~uVar33 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar38 = *(uint *)((pTVar25->AllocatorInstance).Data + lVar42 * 4);
              uVar39 = 0;
              if ((int)uVar38 < local_1790.ArrayNum) {
                uVar39 = ~uVar38 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar33 = uVar33 + 1;
              lVar42 = lVar42 + 1;
              local_1790.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
            } while (lVar42 < (longlong)pFVar12);
          }
          uVar33 = local_17d4;
          lVar42 = (longlong)(int)local_17d4;
          uVar39 = ~local_17d4;
          uVar38 = 0;
          if ((int)local_17d4 < pTVar25->ArrayNum) {
            uVar38 = uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_17d8 = local_17d8 - uVar33;
          local_1780.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar34 = (pTVar25->AllocatorInstance).Data + lVar42 * 4;
          if ((int)local_17d8 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_17d8);
          }
          if (((pFVar34 == (FScriptContainerElement *)0x0) && (local_17d8 != 0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Ptr != nullptr || Count == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x2d3,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_1780.ArrayNum = local_17d8;
          if (local_17d8 == 0) {
            local_1780.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_17d8,0,&local_1780.AllocatorInstance,local_17d8,
                       &local_1780.ArrayMax);
            memcpy(local_1780.AllocatorInstance.Data,pFVar34,(longlong)(int)local_17d8 << 2);
          }
          if (((local_4c8.BranchPoints.ConstAttributeArray !=
                (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
              (iVar18 = (int)local_17d0, -1 < iVar18)) &&
             (iVar19 = (**(code **)(*(longlong *)local_4c8.BranchPoints.ConstAttributeArray + 0x60))
                                 (), iVar18 < iVar19)) {
            TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                      (&local_4c8.BranchPoints,iVar18,&local_1780);
          }
          uVar38 = 0;
          if ((int)uVar33 < pTVar25->ArrayNum) {
            uVar38 = uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar33 = *(uint *)((pTVar25->AllocatorInstance).Data + (longlong)pFVar12 * 4);
          lVar42 = (longlong)(int)uVar33;
          uVar38 = 0;
          if ((int)local_17b0 < pTVar25->ArrayNum) {
            uVar38 = ~local_17b0 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar35 = local_f58.Positions.ConstAttributeArray;
          iVar18 = *(int *)((pTVar25->AllocatorInstance).Data + local_17a8 * 4);
          if (((local_f58.Positions.ConstAttributeArray ==
                (TManagedArray<UE::Math::TVector<float>_> *)0x0) || ((int)uVar33 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)local_f58.Positions.ConstAttributeArray + 0x60))
                                 (local_f58.Positions.ConstAttributeArray), iVar19 <= (int)uVar33))
          {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              DefaultPosition.field0_0x0._0_8_ =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              DefaultPosition.field0_0x0._s_0.Z =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              _Init_thread_footer(&::_TSS0);
            }
            pTVar26 = &DefaultPosition;
          }
          else {
            pTVar26 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                (&local_f58.Positions,uVar33);
          }
          if (((pTVar35 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) || (iVar18 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)pTVar35 + 0x60))(pTVar35), iVar19 <= iVar18)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              DefaultPosition.field0_0x0._0_8_ =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              DefaultPosition.field0_0x0._s_0.Z =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              _Init_thread_footer(&::_TSS0);
            }
            pTVar27 = &DefaultPosition;
          }
          else {
            pTVar27 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                (&local_f58.Positions,iVar18);
          }
          pTVar14 = local_f58.LengthFromRoot.ConstAttributeArray;
          if (((local_f58.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
              ((int)uVar33 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)local_f58.LengthFromRoot.ConstAttributeArray + 0x60
                                   ))(local_f58.LengthFromRoot.ConstAttributeArray),
             iVar19 <= (int)uVar33)) {
            pfVar24 = &DefaultLengthFromRoot;
          }
          else {
            pfVar24 = TManagedArrayAccessor<float>::operator[](&local_f58.LengthFromRoot,uVar33);
          }
          fVar1 = *pfVar24;
          if (((pTVar14 == (TManagedArray<float> *)0x0) || (iVar18 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14), iVar19 <= iVar18)) {
            pfVar24 = &DefaultLengthFromRoot;
          }
          else {
            pfVar24 = TManagedArrayAccessor<float>::operator[](&local_f58.LengthFromRoot,iVar18);
          }
          pTVar14 = local_f58.PointScale.ConstAttributeArray;
          fVar45 = *pfVar24 - fVar1;
          if (fVar46 < (float)((uint)fVar45 & uVar11)) {
            fVar46 = (fVar44 - fVar1) / fVar45;
          }
          else {
            fVar46 = fVar10;
            if (fVar44 < *pfVar24) {
              fVar46 = 0.0;
            }
          }
          fVar1 = (pTVar27->field0_0x0)._s_0.X;
          if (fVar10 <= fVar46) {
            fVar46 = fVar10;
          }
          fVar45 = (pTVar26->field0_0x0)._s_0.X;
          if (fVar46 <= 0.0) {
            fVar46 = 0.0;
          }
          if (fVar10 <= fVar46) {
            fVar46 = fVar10;
          }
          if (fVar46 <= fVar47) {
            fVar46 = fVar47;
          }
          fVar47 = (pTVar27->field0_0x0)._s_0.Y;
          fVar2 = (pTVar26->field0_0x0)._s_0.Y;
          fVar3 = (pTVar26->field0_0x0)._s_0.Y;
          fVar4 = (pTVar26->field0_0x0)._s_0.X;
          fVar48 = ((pTVar27->field0_0x0)._s_0.Z - (pTVar26->field0_0x0)._s_0.Z) * fVar46 +
                   (pTVar26->field0_0x0)._s_0.Z;
          if (((local_f58.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
              (iVar18 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)local_f58.PointScale.ConstAttributeArray + 0x60))
                                 (local_f58.PointScale.ConstAttributeArray), iVar19 <= iVar18)) {
            pfVar24 = &DefaultPScale;
          }
          else {
            pfVar24 = TManagedArrayAccessor<float>::operator[](&local_f58.PointScale,iVar18);
          }
          if (((pTVar14 == (TManagedArray<float> *)0x0) || ((int)uVar33 < 0)) ||
             (iVar18 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14), iVar18 <= (int)uVar33))
          {
            pfVar28 = &DefaultPScale;
          }
          else {
            pfVar28 = TManagedArrayAccessor<float>::operator[](&local_f58.PointScale,uVar33);
          }
          fVar5 = *pfVar24;
          fVar6 = *pfVar28;
          fVar7 = *pfVar28;
          if (((local_1388.Positions.AttributeArray ==
                (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
              (local_1388.Positions.Collection == (FManagedArrayCollection *)0x0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AttributeArray!=nullptr && !IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x74,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar35 = local_1388.Positions.AttributeArray;
          uVar39 = ~uVar33 >> 0x1f;
          (local_1388.Positions.AttributeArray)->field_0x8 = 1;
          uVar38 = 0;
          if ((int)uVar33 < *(int *)&(local_1388.Positions.AttributeArray)->field_0x18) {
            uVar38 = uVar39;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar14 = local_1388.LengthFromRoot.AttributeArray;
          lVar8 = *(longlong *)&pTVar35->field_0x10;
          *(ulonglong *)(lVar8 + lVar42 * 0xc) =
               CONCAT44((fVar47 - fVar2) * fVar46 + fVar3,(fVar1 - fVar45) * fVar46 + fVar4);
          *(float *)(lVar8 + 8 + lVar42 * 0xc) = fVar48;
          if (((local_1388.LengthFromRoot.AttributeArray == (TManagedArray<float> *)0x0) ||
              (local_1388.LengthFromRoot.Collection == (FManagedArrayCollection *)0x0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AttributeArray!=nullptr && !IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x74,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar14->field_0x8 = 1;
          uVar20 = 0;
          uVar38 = uVar20;
          if ((int)uVar33 < *(int *)&pTVar14->field_0x18) {
            uVar38 = uVar39;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar15 = local_1388.LengthFromSeed.AttributeArray;
          *(float *)(*(longlong *)&pTVar14->field_0x10 + lVar42 * 4) = fVar44;
          if (((local_1388.LengthFromSeed.AttributeArray == (TManagedArray<float> *)0x0) ||
              (local_1388.LengthFromSeed.Collection == (FManagedArrayCollection *)0x0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AttributeArray!=nullptr && !IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x74,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar15->field_0x8 = 1;
          uVar38 = uVar20;
          if ((int)uVar33 < *(int *)&pTVar15->field_0x18) {
            uVar38 = uVar39;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar14 = local_1388.PointScale.AttributeArray;
          *(float *)(*(longlong *)&pTVar15->field_0x10 + lVar42 * 4) = fVar44;
          if (((local_1388.PointScale.AttributeArray == (TManagedArray<float> *)0x0) ||
              (local_1388.PointScale.Collection == (FManagedArrayCollection *)0x0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AttributeArray!=nullptr && !IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x74,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar14->field_0x8 = 1;
          if ((int)uVar33 < *(int *)&pTVar14->field_0x18) {
            uVar20 = uVar39;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          *(float *)(*(longlong *)&pTVar14->field_0x10 + lVar42 * 4) =
               (fVar5 - fVar6) * fVar46 + fVar7;
          PV::Facades::FPlantFacade::GetBranchIndices(&local_5b8,&local_1710,(int)local_1758);
          uVar30 = (ulonglong)local_1710.ArrayNum;
          uVar41 = 0x9d4c;
          local_17d4 = local_1710.ArrayNum;
          local_17a8 = 0x9d4c;
          local_1760 = local_1710.AllocatorInstance.Data + uVar30 * 4;
          FVar37.Data = local_1710.AllocatorInstance.Data;
          while( true ) {
            pFVar34 = local_1760;
            local_17d0 = FVar37.Data;
            if (local_1710.ArrayNum != (uint)uVar30) {
              local_17e5[8] = false;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_17e5 + 8);
            }
            if (FVar37.Data == pFVar34) break;
            uVar33 = *(uint *)FVar37.Data;
            uVar38 = 0;
            if ((int)uVar33 < local_17c0.ArrayNum) {
              uVar38 = ~uVar33 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (local_17c0.AllocatorInstance.Data[(int)uVar33] == (FScriptContainerElement)0x0) {
              uVar33 = *(uint *)FVar37.Data;
              if (((local_4c8.BranchPoints.ConstAttributeArray ==
                    (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
                  ((int)uVar33 < 0)) ||
                 (iVar18 = (**(code **)(*(longlong *)local_4c8.BranchPoints.ConstAttributeArray +
                                       0x60))(), iVar18 <= (int)uVar33)) {
                if ((*(int *)(uVar41 + *(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8)) < ::_TSS0) &&
                   (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                  atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                         _dynamic_atexit_destructor_for__EmptyPoints__);
                  _Init_thread_footer(&::_TSS0);
                }
                pTVar23 = &EmptyPoints;
              }
              else {
                pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::
                          operator[](&local_4c8.BranchPoints,uVar33);
              }
              pFVar36 = (pTVar23->AllocatorInstance).Data;
              iVar18 = pTVar23->ArrayNum;
              pFVar34 = pFVar36 + (longlong)iVar18 * 4;
              while( true ) {
                if (pTVar23->ArrayNum != iVar18) {
                  local_17e5[9] = false;
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_17e5 + 9);
                }
                pTVar29 = local_1608.FoliageIdsAttribute.ConstAttributeArray;
                if (pFVar36 == pFVar34) break;
                uVar33 = *(uint *)pFVar36;
                if (((local_1388.Positions.ConstAttributeArray ==
                      (TManagedArray<UE::Math::TVector<float>_> *)0x0) || ((int)uVar33 < 0)) ||
                   (iVar19 = (**(code **)(*(longlong *)local_1388.Positions.ConstAttributeArray +
                                         0x60))(), iVar19 <= (int)uVar33)) {
                  if ((*(int *)(uVar41 + *(longlong *)
                                          ((longlong)ThreadLocalStoragePointer +
                                          (ulonglong)_tls_index * 8)) < ::_TSS0) &&
                     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                    DefaultPosition.field0_0x0._0_8_ =
                         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                    DefaultPosition.field0_0x0._s_0.Z =
                         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    _Init_thread_footer(&::_TSS0);
                  }
                  pTVar26 = &DefaultPosition;
                }
                else {
                  pTVar26 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                      (&local_1388.Positions,uVar33);
                }
                fVar46 = (pTVar26->field0_0x0)._s_0.Z;
                fVar47 = (pTVar26->field0_0x0)._s_0.X;
                fVar1 = (pTVar26->field0_0x0)._s_0.Y;
                if (((local_1388.Positions.AttributeArray ==
                      (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
                    (local_1388.Positions.Collection == (FManagedArrayCollection *)0x0)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("AttributeArray!=nullptr && !IsConst()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x74,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar35 = local_1388.Positions.AttributeArray;
                (local_1388.Positions.AttributeArray)->field_0x8 = 1;
                uVar33 = *(uint *)pFVar36;
                lVar42 = (longlong)(int)uVar33;
                uVar38 = 0;
                if ((int)uVar33 < *(int *)&(local_1388.Positions.AttributeArray)->field_0x18) {
                  uVar38 = ~uVar33 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                lVar8 = *(longlong *)&pTVar35->field_0x10;
                *(float *)(lVar8 + lVar42 * 0xc) = fVar47;
                *(float *)(lVar8 + 4 + lVar42 * 0xc) = fVar1;
                *(float *)(lVar8 + 8 + lVar42 * 0xc) = fVar46 - fVar48;
                uVar33 = *(uint *)pFVar36;
                if (((local_1388.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0)
                    || ((int)uVar33 < 0)) ||
                   (iVar19 = (**(code **)(*(longlong *)local_1388.LengthFromRoot.ConstAttributeArray
                                         + 0x60))(), iVar19 <= (int)uVar33)) {
                  pfVar24 = &DefaultLengthFromRoot;
                }
                else {
                  pfVar24 = TManagedArrayAccessor<float>::operator[]
                                      (&local_1388.LengthFromRoot,uVar33);
                }
                pTVar14 = local_1388.LengthFromRoot.AttributeArray;
                fVar46 = *pfVar24 - fVar44;
                if (fVar46 <= 0.0) {
                  fVar46 = 0.0;
                }
                if (((local_1388.LengthFromRoot.AttributeArray == (TManagedArray<float> *)0x0) ||
                    (local_1388.LengthFromRoot.Collection == (FManagedArrayCollection *)0x0)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("AttributeArray!=nullptr && !IsConst()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x74,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar14->field_0x8 = 1;
                uVar33 = *(uint *)pFVar36;
                uVar38 = 0;
                if ((int)uVar33 < *(int *)&pTVar14->field_0x18) {
                  uVar38 = ~uVar33 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                *(float *)(*(longlong *)&pTVar14->field_0x10 + (longlong)(int)uVar33 * 4) = fVar46;
                uVar33 = *(uint *)pFVar36;
                if (((local_1388.LengthFromSeed.ConstAttributeArray == (TManagedArray<float> *)0x0)
                    || ((int)uVar33 < 0)) ||
                   (iVar19 = (**(code **)(*(longlong *)local_1388.LengthFromSeed.ConstAttributeArray
                                         + 0x60))(), iVar19 <= (int)uVar33)) {
                  pfVar24 = &DefaultLengthFromSeed;
                }
                else {
                  pfVar24 = TManagedArrayAccessor<float>::operator[]
                                      (&local_1388.LengthFromSeed,uVar33);
                }
                pTVar14 = local_1388.LengthFromSeed.AttributeArray;
                fVar46 = *pfVar24 - fVar44;
                if (fVar46 <= 0.0) {
                  fVar46 = 0.0;
                }
                if (((local_1388.LengthFromSeed.AttributeArray == (TManagedArray<float> *)0x0) ||
                    (local_1388.LengthFromSeed.Collection == (FManagedArrayCollection *)0x0)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("AttributeArray!=nullptr && !IsConst()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x74,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar14->field_0x8 = 1;
                uVar33 = *(uint *)pFVar36;
                uVar38 = 0;
                if ((int)uVar33 < *(int *)&pTVar14->field_0x18) {
                  uVar38 = ~uVar33 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar36 = pFVar36 + 4;
                *(float *)(*(longlong *)&pTVar14->field_0x10 + (longlong)(int)uVar33 * 4) = fVar46;
              }
              uVar33 = *(uint *)local_17d0;
              if (((local_1608.FoliageIdsAttribute.ConstAttributeArray ==
                    (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
                  ((int)uVar33 < 0)) ||
                 (iVar18 = (**(code **)(*(longlong *)
                                         local_1608.FoliageIdsAttribute.ConstAttributeArray + 0x60))
                                     (local_1608.FoliageIdsAttribute.ConstAttributeArray),
                 iVar18 <= (int)uVar33)) {
                if ((*(int *)(uVar41 + *(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8)) < ::_TSS0) &&
                   (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                  atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
                         _dynamic_atexit_destructor_for__EmptyArray__);
                  _Init_thread_footer(&::_TSS0);
                }
                pTVar23 = &::EmptyArray;
              }
              else {
                pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::
                          operator[](&local_1608.FoliageIdsAttribute,uVar33);
              }
              pTVar14 = local_1608.LengthFromRootAttribute.ConstAttributeArray;
              pTVar35 = local_1608.PivotPointsAttribute.ConstAttributeArray;
              pFVar34 = (pTVar23->AllocatorInstance).Data;
              iVar18 = pTVar23->ArrayNum;
              local_1758 = pFVar34 + (longlong)iVar18 * 4;
              while( true ) {
                pFVar36 = local_1758;
                if (pTVar23->ArrayNum != iVar18) {
                  local_17e5[10] = false;
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_17e5 + 10);
                }
                uVar41 = local_17a8;
                FVar37.Data = local_17d0;
                if (pFVar34 == pFVar36) break;
                iVar19 = *(int *)pFVar34;
                if (((pTVar35 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) || (iVar19 < 0))
                   || (iVar21 = (**(code **)(*(longlong *)pTVar35 + 0x60))(pTVar35),
                      iVar21 <= iVar19)) {
                  if ((*(int *)(local_17a8 +
                               *(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)) <
                       ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                    DefaultPivotPoint.field0_0x0._0_8_ =
                         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                    DefaultPivotPoint.field0_0x0._s_0.Z =
                         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    _Init_thread_footer(&::_TSS0);
                  }
                  pTVar26 = &DefaultPivotPoint;
                }
                else {
                  pTVar26 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                      (&local_1608.PivotPointsAttribute,iVar19);
                }
                local_1720._s_0.X = (pTVar26->field0_0x0)._s_0.X;
                local_1720._s_0.Y = (pTVar26->field0_0x0)._s_0.Y;
                iVar19 = *(int *)pFVar34;
                local_1720._s_0.Z = (pTVar26->field0_0x0)._s_0.Z - fVar48;
                if ((local_1608.Collection == (FManagedArrayCollection *)0x0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!IsConst()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                                        ,0x129,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if ((((((local_1608.NamesAttribute.ConstAttributeArray !=
                         (TManagedArray<FString> *)0x0) &&
                       (local_1608.NameIdsAttribute.ConstAttributeArray != (TManagedArray<int> *)0x0
                       )) && (local_1608.BranchIdsAttribute.ConstAttributeArray !=
                              (TManagedArray<int> *)0x0)) &&
                     ((pTVar35 != (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
                      (local_1608.UpVectorsAttribute.ConstAttributeArray !=
                       (TManagedArray<UE::Math::TVector<float>_> *)0x0)))) &&
                    (local_1608.NormalVectorsAttribute.ConstAttributeArray !=
                     (TManagedArray<UE::Math::TVector<float>_> *)0x0)) &&
                   (((local_1608.ScalesAttribute.ConstAttributeArray != (TManagedArray<float> *)0x0
                     && (pTVar14 != (TManagedArray<float> *)0x0)) &&
                    ((pTVar29 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0 &&
                     ((local_1608.ParentBoneIdsAttribute.ConstAttributeArray !=
                       (TManagedArray<int> *)0x0 &&
                      (bVar17 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
                                          (&local_1608.PivotPointsAttribute,iVar19), bVar17))))))))
                {
                  TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
                            (&local_1608.PivotPointsAttribute,iVar19,
                             (TVector<float> *)&local_1720._s_0);
                }
                iVar19 = *(int *)pFVar34;
                if (((pTVar14 == (TManagedArray<float> *)0x0) || (iVar19 < 0)) ||
                   (iVar21 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14), iVar21 <= iVar19))
                {
                  pfVar24 = &DefaultLengthFromRoot;
                }
                else {
                  pfVar24 = TManagedArrayAccessor<float>::operator[]
                                      (&local_1608.LengthFromRootAttribute,iVar19);
                }
                iVar19 = *(int *)pFVar34;
                local_1768[0] = *pfVar24 - fVar44;
                if ((local_1608.Collection == (FManagedArrayCollection *)0x0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!IsConst()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                                        ,0x90,L""), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if ((((((local_1608.NamesAttribute.ConstAttributeArray !=
                         (TManagedArray<FString> *)0x0) &&
                       (local_1608.NameIdsAttribute.ConstAttributeArray != (TManagedArray<int> *)0x0
                       )) && ((local_1608.BranchIdsAttribute.ConstAttributeArray !=
                               (TManagedArray<int> *)0x0 &&
                              (((pTVar35 != (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
                                (local_1608.UpVectorsAttribute.ConstAttributeArray !=
                                 (TManagedArray<UE::Math::TVector<float>_> *)0x0)) &&
                               (local_1608.NormalVectorsAttribute.ConstAttributeArray !=
                                (TManagedArray<UE::Math::TVector<float>_> *)0x0)))))) &&
                     ((local_1608.ScalesAttribute.ConstAttributeArray != (TManagedArray<float> *)0x0
                      && (pTVar14 != (TManagedArray<float> *)0x0)))) &&
                    (pTVar29 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
                   ((local_1608.ParentBoneIdsAttribute.ConstAttributeArray !=
                     (TManagedArray<int> *)0x0 &&
                    (bVar17 = TManagedArrayAccessor<float>::IsValidIndex
                                        (&local_1608.LengthFromRootAttribute,iVar19), bVar17)))) {
                  TManagedArrayAccessor<float>::ModifyAt
                            (&local_1608.LengthFromRootAttribute,iVar19,local_1768);
                }
                pFVar34 = pFVar34 + 4;
              }
            }
            uVar30 = (ulonglong)local_17d4;
            FVar37.Data = FVar37.Data + 4;
          }
          if (local_1710.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1710.AllocatorInstance.Data);
          }
          fVar46 = __real_322bcc77;
          fVar47 = __real_3dcccccd;
          if (local_1780.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1780.AllocatorInstance.Data);
            fVar46 = __real_322bcc77;
            fVar47 = __real_3dcccccd;
          }
        }
        TStack_16c0.UnvisitedBitMask = TStack_16c0.UnvisitedBitMask & ~TStack_16c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_16c0);
      }
      local_f0 = 0;
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_138);
      RemoveEntriesAndRecomputeAttributes(local_16d0,local_16d8,&local_1790,&local_17c0,&local_17a0)
      ;
      local_140 = 0;
      if (local_148 != (undefined1 *)0x0) {
        FMemory::Free(local_148);
      }
      TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_188);
      local_1d8.Pairs.HashSize = 0;
      if (local_1d8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1d8.Pairs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_1d8);
      if (local_17a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_17a0.AllocatorInstance.Data);
      }
      if (local_17c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_17c0.AllocatorInstance.Data);
      }
      if (local_1790.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1790.AllocatorInstance.Data);
      }
    }
  }
  if (bVar43) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
  while (uVar38 = puVar40[2], uVar38 != 0xffffffff) {
LAB_14da70f20:
    puVar40 = (uint *)((longlong)(int)uVar38 * 0x10 + local_188._0_8_);
    if (*puVar40 == uVar33) {
      if (puVar40 != (uint *)0x0) goto LAB_14da70f6c;
      goto LAB_14da70f41;
    }
  }
LAB_14da70f3f:
  puVar40 = (uint *)0x0;
LAB_14da70f41:
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar17) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14da70f6c:
  if ((float)puVar40[1] <= fVar44 && fVar44 != (float)puVar40[1]) {
    puVar40 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::FindChecked(&local_1d8,*(uint *)local_17c8);
    uVar33 = *puVar40;
    uVar38 = 0;
    if ((int)uVar33 < local_17c0.ArrayNum) {
      uVar38 = ~uVar33 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_17c0.AllocatorInstance.Data[(int)uVar33] = (FScriptContainerElement)0x1;
    pTVar23 = PV::Facades::FBranchFacade::GetPoints(&local_8a8,uVar33);
    pFVar36 = (pTVar23->AllocatorInstance).Data;
    iVar18 = pTVar23->ArrayNum;
    pFVar34 = pFVar36 + (longlong)iVar18 * 4;
    while( true ) {
      if (pTVar23->ArrayNum != iVar18) {
        local_17e5[3] = false;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_17e5 + 3);
      }
      if (pFVar36 == pFVar34) break;
      uVar38 = *(uint *)pFVar36;
      uVar39 = 0;
      if ((int)uVar38 < local_1790.ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar36 = pFVar36 + 4;
      local_1790.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
    }
    if (((local_b28.FoliageIdsAttribute.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar33 < 0)) ||
       (iVar18 = (**(code **)(*(longlong *)local_b28.FoliageIdsAttribute.ConstAttributeArray + 0x60)
                 )(), iVar18 <= (int)uVar33)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
               _dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar23 = &::EmptyArray;
    }
    else {
      pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_b28.FoliageIdsAttribute,uVar33);
    }
    pFVar36 = (pTVar23->AllocatorInstance).Data;
    iVar18 = pTVar23->ArrayNum;
    pFVar34 = pFVar36 + (longlong)iVar18 * 4;
    while( true ) {
      if (pTVar23->ArrayNum != iVar18) {
        local_17e5[4] = false;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_17e5 + 4);
      }
      if (pFVar36 == pFVar34) break;
      uVar38 = *(uint *)pFVar36;
      uVar39 = 0;
      if ((int)uVar38 < local_17a0.ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar36 = pFVar36 + 4;
      local_17a0.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
    }
    if (((local_8a8.Children.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar33 < 0)) ||
       (iVar18 = (**(code **)(*(longlong *)local_8a8.Children.ConstAttributeArray + 0x60))(),
       iVar18 <= (int)uVar33)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetChildren'::__l2::
               _dynamic_atexit_destructor_for__EmptyChildren__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar23 = &EmptyChildren;
    }
    else {
      pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_8a8.Children,uVar33);
    }
    iVar18 = pTVar23->ArrayNum;
    uVar33 = 0;
    pFVar34 = local_1738;
    local_1748 = pTVar23;
    if (0 < iVar18) {
      local_1740 = 0;
LAB_14da71221:
      lVar42 = local_1740;
      uVar38 = 0;
      if ((int)uVar33 < iVar18) {
        uVar38 = ~uVar33 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar38 = *(uint *)((pTVar23->AllocatorInstance).Data + lVar42);
      if (local_1d8.Pairs.Elements._8_4_ != local_1d8.Pairs.Elements._52_4_) {
        FVar32 = (ForElementType<FSetElementId>)&local_1d8.Pairs.Hash;
        if (local_1d8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar32 = local_1d8.Pairs.Hash.SecondaryData;
        }
        for (iVar18 = *(int *)((longlong)FVar32 +
                              (ulonglong)(local_1d8.Pairs.HashSize - 1U & uVar38) * 4); iVar18 != -1
            ; iVar18 = *(int *)(local_1d8.Pairs.Elements._0_8_ + 8 + (longlong)iVar18 * 0x10)) {
          if (*(uint *)(local_1d8.Pairs.Elements._0_8_ + (longlong)iVar18 * 0x10) == uVar38) {
            uVar38 = 0;
            if ((int)uVar33 < pTVar23->ArrayNum) {
              uVar38 = ~uVar33 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar38 = *(uint *)((pTVar23->AllocatorInstance).Data + lVar42);
            if (local_1d8.Pairs.Elements._8_4_ == local_1d8.Pairs.Elements._52_4_)
            goto LAB_14da71371;
            FVar32 = (ForElementType<FSetElementId>)&local_1d8.Pairs.Hash;
            if (local_1d8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar32 = local_1d8.Pairs.Hash.SecondaryData;
            }
            uVar39 = *(uint *)((longlong)FVar32 +
                              (ulonglong)(local_1d8.Pairs.HashSize - 1U & uVar38) * 4);
            goto joined_r0x00014da71350;
          }
        }
      }
      goto LAB_14da7160d;
    }
  }
LAB_14da7162b:
  local_17c8 = local_17c8 + 4;
  uVar41 = (ulonglong)local_1770;
  goto LAB_14da70e4c;
joined_r0x00014da71350:
  if (uVar39 == 0xffffffff) goto LAB_14da71371;
  puVar40 = (uint *)((longlong)(int)uVar39 * 0x10 + local_1d8.Pairs.Elements._0_8_);
  if (*puVar40 == uVar38) {
    if (puVar40 != (uint *)0x0) goto LAB_14da71399;
    goto LAB_14da71373;
  }
  uVar39 = puVar40[2];
  goto joined_r0x00014da71350;
LAB_14da71371:
  puVar40 = (uint *)0x0;
LAB_14da71373:
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar17) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14da71399:
  uVar38 = puVar40[1];
  uVar39 = 0;
  if ((int)uVar38 < local_17c0.ArrayNum) {
    uVar39 = ~uVar38 >> 0x1f;
  }
  if ((uVar39 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_17c0.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
  if (((local_8a8.BranchPoints.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar38 < 0)) ||
     (iVar18 = (**(code **)(*(longlong *)local_8a8.BranchPoints.ConstAttributeArray + 0x60))(),
     iVar18 <= (int)uVar38)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
             _dynamic_atexit_destructor_for__EmptyPoints__);
      _Init_thread_footer(&::_TSS0);
    }
    pTVar23 = &EmptyPoints;
  }
  else {
    pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                        (&local_8a8.BranchPoints,uVar38);
  }
  pFVar36 = (pTVar23->AllocatorInstance).Data;
  iVar18 = pTVar23->ArrayNum;
  pFVar34 = pFVar36 + (longlong)iVar18 * 4;
  while( true ) {
    if (pTVar23->ArrayNum != iVar18) {
      local_17e5[5] = false;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_17e5 + 5);
    }
    if (pFVar36 == pFVar34) break;
    uVar39 = *(uint *)pFVar36;
    uVar20 = 0;
    if ((int)uVar39 < local_1790.ArrayNum) {
      uVar20 = ~uVar39 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar36 = pFVar36 + 4;
    local_1790.AllocatorInstance.Data[(int)uVar39] = (FScriptContainerElement)0x1;
  }
  if (((local_b28.FoliageIdsAttribute.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar38 < 0)) ||
     (iVar18 = (**(code **)(*(longlong *)local_b28.FoliageIdsAttribute.ConstAttributeArray + 0x60))
                         (), iVar18 <= (int)uVar38)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
    pTVar25 = &::EmptyArray;
  }
  else {
    pTVar25 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                        (&local_b28.FoliageIdsAttribute,uVar38);
  }
  pFVar36 = (pTVar25->AllocatorInstance).Data;
  iVar18 = pTVar25->ArrayNum;
  pFVar34 = pFVar36 + (longlong)iVar18 * 4;
  while( true ) {
    if (pTVar25->ArrayNum != iVar18) {
      local_17e5[6] = false;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_17e5 + 6);
    }
    pTVar23 = local_1748;
    lVar42 = local_1740;
    if (pFVar36 == pFVar34) break;
    uVar38 = *(uint *)pFVar36;
    uVar39 = 0;
    if ((int)uVar38 < local_17a0.ArrayNum) {
      uVar39 = ~uVar38 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar36 = pFVar36 + 4;
    local_17a0.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x1;
  }
LAB_14da7160d:
  iVar18 = pTVar23->ArrayNum;
  local_1740 = lVar42 + 4;
  uVar33 = uVar33 + 1;
  pFVar34 = local_1738;
  if (iVar18 <= (int)uVar33) goto LAB_14da7162b;
  goto LAB_14da71221;
}

// CarveFromTop @ 14da72880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FPVCarve::CarveFromTop
          (FManagedArrayCollection *param_1,FManagedArrayCollection *param_2,float param_3,
          ECarveBasis param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  float fVar8;
  ECarveBasis EVar9;
  FManagedArrayCollection *this;
  FName FVar10;
  TManagedArray<float> *pTVar11;
  TManagedArray<float> *pTVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  float *pfVar19;
  TVector<float> *pTVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  int *piVar22;
  TVector<float> *pTVar23;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar24;
  float *pfVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  ForElementType<FSetElementId> FVar28;
  uint uVar29;
  uint uVar30;
  TManagedArray<UE::Math::TVector<float>_> *pTVar31;
  FScriptContainerElement *pFVar32;
  uint *puVar33;
  uint uVar34;
  ForAnyElementType FVar35;
  FScriptContainerElement *pFVar36;
  longlong lVar37;
  longlong lVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStackY_1728 [32];
  ForAnyElementType local_16d0;
  undefined8 local_16c8;
  ECarveBasis local_16c0;
  bool local_16bf;
  bool local_16be;
  bool local_16bd [13];
  uint local_16b0;
  uint local_16ac;
  int local_16a8;
  FScriptContainerElement *local_16a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1698;
  longlong local_1690;
  FScriptContainerElement *local_1688;
  TArray<bool,TSizedDefaultAllocator<32>_> local_1680;
  float local_1670;
  float local_166c;
  float local_1668;
  TArray<bool,TSizedDefaultAllocator<32>_> local_1660;
  TArray<bool,TSizedDefaultAllocator<32>_> local_1650;
  TVector<float> *local_1640;
  TArray<int,TSizedDefaultAllocator<32>_> local_1638;
  uint local_1628;
  FScriptContainerElement *local_1620;
  uint local_1618;
  uint local_1614;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1610;
  FScriptContainerElement *local_1608;
  TArray<int,TSizedDefaultAllocator<32>_> local_1600;
  TArray<int,TSizedDefaultAllocator<32>_> local_15f0;
  FManagedArrayCollection *local_15e0;
  FManagedArrayCollection *local_15d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_15d0;
  FScriptContainerElement *local_15c8;
  FScriptContainerElement *local_15c0;
  FPointFacade local_15b8;
  FBranchFacade local_1188;
  FPlantFacade local_e98;
  FFoliageFacade local_da8;
  FPointFacade local_b28;
  FBranchFacade local_6f8;
  FFoliageFacade local_408;
  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> local_188;
  undefined1 local_138 [64];
  undefined1 *local_f8;
  int local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1728;
  bVar39 = -1 < CpuChannel->Enabled;
  local_16c0 = param_4;
  local_15e0 = param_2;
  local_15d8 = param_1;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId141,"PVCarve::CarveFromTop",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVCarve.cpp"
               ,0x8d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId141);
  }
  fVar8 = __real_3f800000;
  local_1670 = __real_3f800000 - param_3;
  PV::Facades::FBranchFacade::FBranchFacade(&local_1188,param_2);
  PV::Facades::FPointFacade::FPointFacade(&local_15b8,param_2);
  PV::Facades::FFoliageFacade::FFoliageFacade(&local_da8,param_2);
  PV::Facades::FPlantFacade::FPlantFacade(&local_e98,param_2);
  PV::Facades::FBranchFacade::FBranchFacade(&local_6f8,param_1);
  PV::Facades::FPointFacade::FPointFacade(&local_b28,param_1);
  PV::Facades::FFoliageFacade::FFoliageFacade(&local_408,param_1,0);
  pTVar31 = local_15b8.Positions.ConstAttributeArray;
  FVar10 = local_15b8.Positions.Group;
  this = local_15b8.Positions.ConstCollection;
  if (local_15b8.Positions.ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    iVar14 = FManagedArrayCollection::NumElements
                       (local_15b8.Positions.ConstCollection,local_15b8.Positions.Group);
  }
  else {
    iVar14 = (**(code **)(*(longlong *)local_15b8.Positions.ConstAttributeArray + 0x60))
                       (local_15b8.Positions.ConstAttributeArray);
  }
  if (iVar14 != 0) {
    if (local_1188.Parents.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar14 = FManagedArrayCollection::NumElements
                         (local_1188.Parents.ConstCollection,local_1188.Parents.Group);
      local_1188.Parents.ConstAttributeArray =
           (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
    }
    else {
      iVar14 = (**(code **)(*(longlong *)local_1188.Parents.ConstAttributeArray + 0x60))
                         (local_1188.Parents.ConstAttributeArray);
    }
    if (iVar14 != 0) {
      if (local_1188.Parents.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
        iVar14 = FManagedArrayCollection::NumElements
                           (local_1188.Parents.ConstCollection,local_1188.Parents.Group);
      }
      else {
        iVar14 = (**(code **)(*(longlong *)local_1188.Parents.ConstAttributeArray + 0x60))
                           (local_1188.Parents.ConstAttributeArray);
      }
      local_1650.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1650.ArrayNum = 0;
      local_1650.ArrayMax = 0;
      if (pTVar31 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        iVar15 = FManagedArrayCollection::NumElements(this,FVar10);
      }
      else {
        iVar15 = (**(code **)(*(longlong *)pTVar31 + 0x60))(pTVar31);
      }
      local_16bf = false;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_1650,&local_16bf,iVar15);
      local_1680.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1680.ArrayNum = 0;
      local_1680.ArrayMax = 0;
      local_16be = false;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_1680,&local_16be,iVar14);
      local_1660.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1660.ArrayNum = 0;
      local_1660.ArrayMax = 0;
      if (local_da8.NameIdsAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) {
        iVar14 = FManagedArrayCollection::NumElements
                           (local_da8.NameIdsAttribute.ConstCollection,
                            local_da8.NameIdsAttribute.Group);
      }
      else {
        iVar14 = (**(code **)(*(longlong *)local_da8.NameIdsAttribute.ConstAttributeArray + 0x60))()
        ;
      }
      local_16bd[0] = false;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_1660,local_16bd,iVar14);
      local_188.Pairs.Elements._0_8_ = 0;
      local_188.Pairs.Elements._8_8_ = 0;
      local_188.Pairs.Elements._32_8_ = 0;
      local_188.Pairs.Elements._40_4_ = 0;
      local_188.Pairs.Elements._44_4_ = 0x80;
      local_188.Pairs.Elements._48_4_ = 0xffffffff;
      local_188.Pairs.Elements._52_4_ = 0;
      local_188.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_188.Pairs.HashSize = 0;
      local_138._0_8_ = 0;
      local_138._8_8_ = 0;
      local_138._32_8_ = 0;
      local_138._40_4_ = 0;
      local_138._44_4_ = 0x80;
      local_138._48_4_ = 0xffffffff;
      local_138._52_4_ = 0;
      local_f8 = (undefined1 *)0x0;
      local_f0 = 0;
      ComputeMetadata((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                      &local_188,
                      (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                       *)local_138,&local_1188,&local_15b8);
      pTVar31 = local_15b8.Positions.ConstAttributeArray;
      local_16d0.Data = (FScriptContainerElement *)0x0;
      local_16c8 = 0;
      if (local_15b8.Positions.ConstAttributeArray ==
          (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        uVar16 = FManagedArrayCollection::NumElements
                           (local_15b8.Positions.ConstCollection,local_15b8.Positions.Group);
      }
      else {
        uVar16 = (**(code **)(*(longlong *)local_15b8.Positions.ConstAttributeArray + 0x60))
                           (local_15b8.Positions.ConstAttributeArray);
      }
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (local_16c8._4_4_ < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar16,&local_16d0,(int)local_16c8,(int *)((longlong)&local_16c8 + 4));
      }
      EVar9 = local_16c0;
      iVar14 = 0;
LAB_14da72c80:
      do {
        if (pTVar31 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
          iVar15 = FManagedArrayCollection::NumElements
                             (local_15b8.Positions.ConstCollection,local_15b8.Positions.Group);
        }
        else {
          iVar15 = (**(code **)(*(longlong *)pTVar31 + 0x60))(pTVar31);
        }
        if (iVar15 <= iVar14) {
          local_166c = 0.0;
          local_1668 = fVar8;
          if (EVar9 == Radius) {
            local_166c = fVar8;
            local_1668 = 0.0;
          }
          fVar40 = local_1668;
          fVar43 = local_166c;
          PV::Facades::FPlantFacade::GetPlantNumbers(&local_e98,&local_15f0);
          local_1628 = local_15f0.ArrayNum;
          uVar26 = (ulonglong)(int)local_1628;
          local_15c0 = local_15f0.AllocatorInstance.Data + uVar26 * 4;
          FVar35.Data = local_15f0.AllocatorInstance.Data;
          fVar41 = __real_7f7fffff;
          fVar45 = __real_322bcc77;
          uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          while( true ) {
            pFVar36 = local_15c0;
            local_1608 = FVar35.Data;
            if (local_15f0.ArrayNum != (int)uVar26) {
              local_16c0 = LengthFromRoot;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_16c0);
            }
            fVar47 = __real_00800000;
            if (FVar35.Data == pFVar36) break;
            PV::Facades::FPlantFacade::GetBranchIndices(&local_e98,&local_1600,*(int *)FVar35.Data);
            local_1614 = local_1600.ArrayNum;
            uVar26 = (ulonglong)(int)local_1614;
            local_15c8 = local_1600.AllocatorInstance.Data + uVar26 * 4;
            FVar35.Data = local_1600.AllocatorInstance.Data;
            fVar48 = fVar41;
            while( true ) {
              pFVar36 = local_15c8;
              local_16a0 = FVar35.Data;
              if (local_1600.ArrayNum != (int)uVar26) {
                local_16bd[1] = false;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_16bd + 1);
              }
              if (FVar35.Data == pFVar36) break;
              pTVar21 = PV::Facades::FBranchFacade::GetPoints(&local_1188,*(uint *)FVar35.Data);
              pFVar32 = (pTVar21->AllocatorInstance).Data;
              iVar14 = pTVar21->ArrayNum;
              pFVar36 = pFVar32 + (longlong)iVar14 * 4;
              fVar41 = fVar47;
              while( true ) {
                fVar47 = fVar41;
                if (pTVar21->ArrayNum != iVar14) {
                  local_16bd[2] = false;
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_16bd + 2);
                }
                if (pFVar32 == pFVar36) break;
                uVar30 = *(uint *)pFVar32;
                uVar34 = 0;
                if ((int)uVar30 < (int)local_16c8) {
                  uVar34 = ~uVar30 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar34 = *(uint *)pFVar32;
                fVar41 = *(float *)(local_16d0.Data + (longlong)(int)uVar30 * 4);
                if (fVar48 <= *(float *)(local_16d0.Data + (longlong)(int)uVar30 * 4)) {
                  fVar41 = fVar48;
                }
                fVar48 = fVar41;
                uVar30 = 0;
                if ((int)uVar34 < (int)local_16c8) {
                  uVar30 = ~uVar34 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar32 = pFVar32 + 4;
                fVar41 = *(float *)(local_16d0.Data + (longlong)(int)uVar34 * 4);
                if (*(float *)(local_16d0.Data + (longlong)(int)uVar34 * 4) <= fVar47) {
                  fVar41 = fVar47;
                }
              }
              pTVar21 = PV::Facades::FBranchFacade::GetPoints(&local_1188,*(uint *)FVar35.Data);
              pFVar32 = (pTVar21->AllocatorInstance).Data;
              iVar14 = pTVar21->ArrayNum;
              pFVar36 = pFVar32 + (longlong)iVar14 * 4;
              while( true ) {
                if (pTVar21->ArrayNum != iVar14) {
                  local_16bd[3] = false;
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_16bd + 3);
                }
                if (pFVar32 == pFVar36) break;
                uVar30 = *(uint *)pFVar32;
                uVar34 = 0;
                if ((int)uVar30 < (int)local_16c8) {
                  uVar34 = ~uVar30 >> 0x1f;
                }
                if (uVar34 == 0) {
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar13) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                if (fVar45 < (float)((uint)(fVar47 - fVar48) & uVar16)) {
                  fVar41 = (*(float *)(local_16d0.Data + (longlong)(int)uVar30 * 4) - fVar48) /
                           (fVar47 - fVar48);
                }
                else {
                  fVar41 = fVar8;
                  if (*(float *)(local_16d0.Data + (longlong)(int)uVar30 * 4) < fVar47) {
                    fVar41 = 0.0;
                  }
                }
                uVar30 = *(uint *)pFVar32;
                if (fVar8 <= fVar41) {
                  fVar41 = fVar8;
                }
                if (fVar41 <= 0.0) {
                  fVar41 = 0.0;
                }
                uVar34 = 0;
                if ((int)uVar30 < (int)local_16c8) {
                  uVar34 = ~uVar30 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar32 = pFVar32 + 4;
                *(float *)(local_16d0.Data + (longlong)(int)uVar30 * 4) =
                     fVar41 * (fVar40 - fVar43) + fVar43;
              }
              uVar30 = *(uint *)FVar35.Data;
              uVar34 = 0;
              if ((int)uVar30 < local_1680.ArrayNum) {
                uVar34 = ~uVar30 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (local_1680.AllocatorInstance.Data[(int)uVar30] == (FScriptContainerElement)0x0) {
                uVar30 = *(uint *)FVar35.Data;
                if (((local_1188.BranchPoints.ConstAttributeArray ==
                      (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
                    ((int)uVar30 < 0)) ||
                   (iVar14 = (**(code **)(*(longlong *)local_1188.BranchPoints.ConstAttributeArray +
                                         0x60))(), iVar14 <= (int)uVar30)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
                  {
                    atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                           _dynamic_atexit_destructor_for__EmptyPoints__);
                    _Init_thread_footer(&::_TSS0);
                  }
                  pTVar21 = &EmptyPoints;
                }
                else {
                  pTVar21 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::
                            operator[](&local_1188.BranchPoints,uVar30);
                }
                iVar14 = pTVar21->ArrayNum;
                local_16a8 = iVar14;
                local_1698 = pTVar21;
                if (iVar14 == 0) {
                  uVar30 = *(uint *)FVar35.Data;
                  uVar34 = 0;
                  if ((int)uVar30 < local_1680.ArrayNum) {
                    uVar34 = ~uVar30 >> 0x1f;
                  }
                  if ((uVar34 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  local_1680.AllocatorInstance.Data[(int)uVar30] = (FScriptContainerElement)0x1;
                }
                else {
                  if ((iVar14 < 1) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if (local_15b8.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) {
LAB_14da7337b:
                    pfVar19 = &DefaultPScale;
                  }
                  else {
                    iVar15 = *(int *)(pTVar21->AllocatorInstance).Data;
                    bVar13 = TManagedArrayAccessor<float>::IsValidIndex
                                       (&local_15b8.PointScale,iVar15);
                    if (!bVar13) goto LAB_14da7337b;
                    pfVar19 = TManagedArrayAccessor<float>::operator[]
                                        (&local_15b8.PointScale,iVar15);
                  }
                  uVar30 = *(uint *)FVar35.Data;
                  fVar43 = *pfVar19;
                  bVar13 = TManagedArrayAccessor<int>::IsValidIndex
                                     (&local_e98.BranchParentNumbers,uVar30);
                  if ((!bVar13) ||
                     (piVar22 = TManagedArrayAccessor<int>::operator[]
                                          (&local_e98.BranchParentNumbers,uVar30), *piVar22 != 0)) {
                    if ((pTVar21->ArrayNum < 1) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    local_1640 = PV::Facades::FPointFacade::GetPosition
                                           (&local_15b8,*(int *)(pTVar21->AllocatorInstance).Data);
                    if (local_1188.BranchParentNumbers.ConstAttributeArray ==
                        (TManagedArray<int> *)0x0) {
LAB_14da73436:
                      iVar14 = -1;
                    }
                    else {
                      uVar30 = *(uint *)FVar35.Data;
                      bVar13 = TManagedArrayAccessor<int>::IsValidIndex
                                         (&local_1188.BranchParentNumbers,uVar30);
                      if (!bVar13) goto LAB_14da73436;
                      piVar22 = TManagedArrayAccessor<int>::operator[]
                                          (&local_1188.BranchParentNumbers,uVar30);
                      iVar14 = *piVar22;
                    }
                    piVar22 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              ::FindChecked(&local_188,iVar14);
                    pTVar21 = PV::Facades::FBranchFacade::GetPoints(&local_1188,*piVar22);
                    pTVar31 = local_15b8.Positions.ConstAttributeArray;
                    pTVar20 = local_1640;
                    uVar30 = 0;
                    local_1688 = (FScriptContainerElement *)0x0;
                    uVar29 = 0;
                    pFVar36 = (FScriptContainerElement *)0x0;
                    iVar14 = pTVar21->ArrayNum;
                    fVar43 = __real_7f7fffff;
                    uVar34 = 0;
                    if (0 < iVar14) {
                      do {
                        uVar30 = uVar34;
                        uVar34 = 0;
                        if ((int)uVar29 < iVar14) {
                          uVar34 = ~uVar29 >> 0x1f;
                        }
                        if ((uVar34 == 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        iVar14 = *(int *)((pTVar21->AllocatorInstance).Data + (longlong)pFVar36 * 4)
                        ;
                        if (((pTVar31 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
                            (iVar14 < 0)) ||
                           (iVar15 = (**(code **)(*(longlong *)pTVar31 + 0x60))(pTVar31),
                           iVar15 <= iVar14)) {
                          if ((*(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
                             (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                            DefaultPosition.field0_0x0._0_8_ =
                                 UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                            DefaultPosition.field0_0x0._s_0.Z =
                                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                            _Init_thread_footer(&::_TSS0);
                          }
                          pTVar23 = &DefaultPosition;
                        }
                        else {
                          pTVar23 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                              (&local_15b8.Positions,iVar14);
                        }
                        fVar41 = (pTVar23->field0_0x0)._s_0.X - (pTVar20->field0_0x0)._s_0.X;
                        fVar42 = (pTVar23->field0_0x0)._s_0.Y - (pTVar20->field0_0x0)._s_0.Y;
                        fVar40 = (pTVar23->field0_0x0)._s_0.Z - (pTVar20->field0_0x0)._s_0.Z;
                        fVar40 = SQRT(fVar42 * fVar42 + fVar41 * fVar41 + fVar40 * fVar40);
                        if (fVar40 < fVar43) {
                          fVar43 = fVar40;
                          local_1688 = pFVar36;
                          uVar30 = uVar29;
                        }
                        iVar14 = pTVar21->ArrayNum;
                        uVar29 = uVar29 + 1;
                        pFVar36 = pFVar36 + 1;
                        uVar34 = uVar30;
                      } while ((int)uVar29 < iVar14);
                    }
                    pFVar36 = local_1688;
                    uVar34 = 0;
                    if ((int)uVar30 < iVar14) {
                      uVar34 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar34 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar14 = *(int *)((pTVar21->AllocatorInstance).Data + (longlong)pFVar36 * 4);
                    if (((local_b28.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0)
                        || (iVar14 < 0)) ||
                       (iVar15 = (**(code **)(*(longlong *)local_b28.PointScale.ConstAttributeArray
                                             + 0x60))(), iVar15 <= iVar14)) {
                      pfVar19 = &DefaultPScale;
                    }
                    else {
                      pfVar19 = TManagedArrayAccessor<float>::operator[]
                                          (&local_b28.PointScale,iVar14);
                    }
                    fVar43 = *pfVar19;
                    pTVar21 = local_1698;
                    iVar14 = local_16a8;
                  }
                  fVar40 = local_1670;
                  uVar34 = 1;
                  local_16b0 = 1;
                  lVar37 = 1;
                  local_1690 = 1;
                  uVar30 = local_16b0;
                  lVar38 = local_1690;
                  if (1 < iVar14) {
                    fVar41 = local_1670 + __real_38d1b717;
                    do {
                      uVar30 = 0;
                      if ((int)uVar34 < pTVar21->ArrayNum) {
                        uVar30 = ~uVar34 >> 0x1f;
                      }
                      if ((uVar30 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      uVar29 = *(uint *)((pTVar21->AllocatorInstance).Data + lVar37 * 4);
                      uVar30 = 0;
                      if ((int)uVar29 < (int)local_16c8) {
                        uVar30 = ~uVar29 >> 0x1f;
                      }
                      if ((uVar30 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      uVar30 = uVar34;
                      lVar38 = lVar37;
                      if (fVar41 < *(float *)(local_16d0.Data + (longlong)(int)uVar29 * 4) ||
                          fVar41 == *(float *)(local_16d0.Data + (longlong)(int)uVar29 * 4)) break;
                      uVar34 = uVar34 + 1;
                      lVar37 = lVar37 + 1;
                      uVar30 = uVar34;
                      lVar38 = lVar37;
                    } while ((int)uVar34 < iVar14);
                  }
                  local_1690 = lVar38;
                  local_16b0 = uVar30;
                  lVar38 = local_1690;
                  uVar30 = local_16b0;
                  uVar34 = local_16b0 - 1;
                  local_16ac = uVar34;
                  if (uVar34 == iVar14 - 1U) {
                    uVar30 = 0;
                    if ((int)uVar34 < pTVar21->ArrayNum) {
                      uVar30 = ~uVar34 >> 0x1f;
                    }
                    if ((uVar30 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar14 = *(int *)((pTVar21->AllocatorInstance).Data + lVar38 * 4 + -4);
                    if ((local_15b8.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0)
                       || (bVar13 = TManagedArrayAccessor<float>::IsValidIndex
                                              (&local_15b8.PointScale,iVar14), !bVar13)) {
                      pfVar19 = &DefaultPScale;
                    }
                    else {
                      pfVar19 = TManagedArrayAccessor<float>::operator[]
                                          (&local_15b8.PointScale,iVar14);
                    }
                    UpdatePointScales(&local_b28,&local_15b8,pTVar21,*pfVar19,iVar14,fVar8,uVar34,
                                      fVar43);
                    FVar35.Data = local_16a0;
                  }
                  else {
                    local_15d0 = PV::Facades::FBranchFacade::GetChildren
                                           (&local_1188,*(uint *)local_16a0);
                    local_1618 = local_15d0->ArrayNum;
                    uVar26 = (ulonglong)(int)local_1618;
                    pFVar32 = (local_15d0->AllocatorInstance).Data;
                    pFVar36 = pFVar32 + uVar26 * 4;
                    local_1620 = pFVar36;
LAB_14da73842:
                    while( true ) {
                      local_1688 = pFVar32;
                      if (local_15d0->ArrayNum != (int)uVar26) {
                        local_16bd[4] = false;
                        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(local_16bd + 4);
                      }
                      if (pFVar32 == pFVar36) break;
                      if (local_138._8_4_ == local_138._52_4_) goto LAB_14da741a6;
                      puVar27 = local_138 + 0x38;
                      if (local_f8 != (undefined1 *)0x0) {
                        puVar27 = local_f8;
                      }
                      iVar14 = *(int *)(puVar27 + (ulonglong)(local_f0 - 1U & *(uint *)pFVar32) * 4)
                      ;
                      if (iVar14 == -1) goto LAB_14da741a6;
                      do {
                        if (*(uint *)(local_138._0_8_ + (longlong)iVar14 * 0x10) == *(uint *)pFVar32
                           ) {
                          puVar27 = local_138 + 0x38;
                          if (local_f8 != (undefined1 *)0x0) {
                            puVar27 = local_f8;
                          }
                          uVar29 = *(uint *)(puVar27 +
                                            (ulonglong)(local_f0 - 1U & *(uint *)pFVar32) * 4);
                          if (uVar29 == 0xffffffff) goto LAB_14da7392f;
                          goto LAB_14da73910;
                        }
                        iVar14 = *(int *)(local_138._0_8_ + 8 + (longlong)iVar14 * 0x10);
                      } while (iVar14 != -1);
                      pFVar32 = pFVar32 + 4;
                      uVar26 = (ulonglong)local_1618;
                      pTVar21 = local_1698;
                    }
                    uVar30 = *(uint *)local_16a0;
                    if (((local_da8.FoliageIdsAttribute.ConstAttributeArray ==
                          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
                        ((int)uVar30 < 0)) ||
                       (iVar14 = (**(code **)(*(longlong *)
                                               local_da8.FoliageIdsAttribute.ConstAttributeArray +
                                             0x60))(), iVar14 <= (int)uVar30)) {
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
                         (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                        atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
                               _dynamic_atexit_destructor_for__EmptyArray__);
                        _Init_thread_footer(&::_TSS0);
                      }
                      pTVar21 = &::EmptyArray;
                    }
                    else {
                      pTVar21 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::
                                operator[](&local_da8.FoliageIdsAttribute,uVar30);
                    }
                    pTVar11 = local_da8.LengthFromRootAttribute.ConstAttributeArray;
                    pFVar32 = (pTVar21->AllocatorInstance).Data;
                    iVar14 = pTVar21->ArrayNum;
                    pFVar36 = pFVar32 + (longlong)iVar14 * 4;
                    while( true ) {
                      if (pTVar21->ArrayNum != iVar14) {
                        local_16bd[9] = false;
                        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(local_16bd + 9);
                      }
                      lVar38 = local_1690;
                      pTVar24 = local_1698;
                      iVar15 = local_16a8;
                      if (pFVar32 == pFVar36) break;
                      uVar30 = 0;
                      if ((int)uVar34 < local_1698->ArrayNum) {
                        uVar30 = -local_16b0 >> 0x1f;
                      }
                      if ((uVar30 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      iVar15 = *(int *)((pTVar24->AllocatorInstance).Data + local_1690 * 4 + -4);
                      if (((local_15b8.LengthFromRoot.ConstAttributeArray ==
                            (TManagedArray<float> *)0x0) || (iVar15 < 0)) ||
                         (iVar18 = (**(code **)(*(longlong *)
                                                 local_15b8.LengthFromRoot.ConstAttributeArray +
                                               0x60))(), iVar18 <= iVar15)) {
                        pfVar19 = &DefaultLengthFromRoot;
                      }
                      else {
                        pfVar19 = TManagedArrayAccessor<float>::operator[]
                                            (&local_15b8.LengthFromRoot,iVar15);
                      }
                      uVar30 = *(uint *)pFVar32;
                      if (((pTVar11 == (TManagedArray<float> *)0x0) || ((int)uVar30 < 0)) ||
                         (iVar15 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11),
                         iVar15 <= (int)uVar30)) {
                        pfVar25 = &DefaultLengthFromRoot;
                      }
                      else {
                        pfVar25 = TManagedArrayAccessor<float>::operator[]
                                            (&local_da8.LengthFromRootAttribute,uVar30);
                      }
                      if (*pfVar19 < *pfVar25) {
                        uVar30 = *(uint *)pFVar32;
                        uVar34 = 0;
                        if ((int)uVar30 < local_1660.ArrayNum) {
                          uVar34 = ~uVar30 >> 0x1f;
                        }
                        if ((uVar34 == 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        local_1660.AllocatorInstance.Data[(int)uVar30] =
                             (FScriptContainerElement)0x1;
                      }
                      pFVar32 = pFVar32 + 4;
                      uVar34 = local_16ac;
                    }
                    uVar30 = local_16b0 + 1;
                    if ((int)uVar30 < local_16a8) {
                      lVar37 = local_1690 * 4;
                      do {
                        lVar37 = lVar37 + 4;
                        uVar34 = 0;
                        if ((int)uVar30 < pTVar24->ArrayNum) {
                          uVar34 = ~uVar30 >> 0x1f;
                        }
                        if ((uVar34 == 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        uVar34 = *(uint *)((pTVar24->AllocatorInstance).Data + lVar37);
                        uVar29 = 0;
                        if ((int)uVar34 < local_1650.ArrayNum) {
                          uVar29 = ~uVar34 >> 0x1f;
                        }
                        if ((uVar29 == 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        uVar30 = uVar30 + 1;
                        local_1650.AllocatorInstance.Data[(int)uVar34] =
                             (FScriptContainerElement)0x1;
                      } while ((int)uVar30 < iVar15);
                    }
                    uVar30 = local_16b0;
                    if ((pTVar24->ArrayNum < 1) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pFVar36 = (pTVar24->AllocatorInstance).Data;
                    uVar34 = uVar30 + 1;
                    local_1638.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
                    }
                    if (((pFVar36 == (FScriptContainerElement *)0x0) && (uVar34 != 0)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Ptr != nullptr || Count == 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x2d3,L""), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    local_1638.ArrayNum = uVar34;
                    if (uVar34 == 0) {
                      local_1638.ArrayMax = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,uVar34,0,&local_1638.AllocatorInstance,uVar34,
                                 &local_1638.ArrayMax);
                      memcpy(local_1638.AllocatorInstance.Data,pFVar36,(longlong)(int)uVar34 << 2);
                    }
                    uVar34 = *(uint *)local_16a0;
                    if (((local_6f8.BranchPoints.ConstAttributeArray !=
                          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
                        (-1 < (int)uVar34)) &&
                       (iVar14 = (**(code **)(*(longlong *)
                                               local_6f8.BranchPoints.ConstAttributeArray + 0x60))()
                       , (int)uVar34 < iVar14)) {
                      TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                                (&local_6f8.BranchPoints,uVar34,&local_1638);
                    }
                    uVar34 = 0;
                    if ((int)uVar30 < pTVar24->ArrayNum) {
                      uVar34 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar34 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    uVar34 = *(uint *)((pTVar24->AllocatorInstance).Data + lVar38 * 4);
                    lVar37 = (longlong)(int)uVar34;
                    uVar29 = 0;
                    if ((int)(uVar30 - 1) < pTVar24->ArrayNum) {
                      uVar29 = -uVar30 >> 0x1f;
                    }
                    if ((uVar29 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pTVar31 = local_15b8.Positions.ConstAttributeArray;
                    uVar30 = *(uint *)((pTVar24->AllocatorInstance).Data + lVar38 * 4 + -4);
                    uVar26 = (ulonglong)_tls_index;
                    if (((local_15b8.Positions.ConstAttributeArray ==
                          (TManagedArray<UE::Math::TVector<float>_> *)0x0) || ((int)uVar34 < 0)) ||
                       (iVar14 = (**(code **)(*(longlong *)local_15b8.Positions.ConstAttributeArray
                                             + 0x60))(local_15b8.Positions.ConstAttributeArray),
                       iVar14 <= (int)uVar34)) {
                      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8)
                                   + 0x9d4c) < ::_TSS0) &&
                         (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                        DefaultPosition.field0_0x0._0_8_ =
                             UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                        DefaultPosition.field0_0x0._s_0.Z =
                             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                        _Init_thread_footer(&::_TSS0);
                      }
                      pTVar20 = &DefaultPosition;
                    }
                    else {
                      pTVar20 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                          (&local_15b8.Positions,uVar34);
                    }
                    if (((pTVar31 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
                        ((int)uVar30 < 0)) ||
                       (iVar14 = (**(code **)(*(longlong *)pTVar31 + 0x60))(pTVar31),
                       iVar14 <= (int)uVar30)) {
                      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8)
                                   + 0x9d4c) < ::_TSS0) &&
                         (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                        DefaultPosition.field0_0x0._0_8_ =
                             UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                        DefaultPosition.field0_0x0._s_0.Z =
                             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                        _Init_thread_footer(&::_TSS0);
                      }
                      pTVar23 = &DefaultPosition;
                    }
                    else {
                      pTVar23 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                          (&local_15b8.Positions,uVar30);
                    }
                    uVar29 = 0;
                    if ((int)uVar34 < (int)local_16c8) {
                      uVar29 = ~uVar34 >> 0x1f;
                    }
                    if (uVar29 == 0) {
                      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar13) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                    }
                    fVar41 = *(float *)(local_16d0.Data + lVar37 * 4);
                    uVar29 = 0;
                    if ((int)uVar30 < (int)local_16c8) {
                      uVar29 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar29 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    fVar42 = fVar41 - *(float *)(local_16d0.Data + (longlong)(int)uVar30 * 4);
                    if (fVar45 < (float)((uint)fVar42 & uVar16)) {
                      fVar45 = (fVar40 - *(float *)(local_16d0.Data + (longlong)(int)uVar30 * 4)) /
                               fVar42;
                    }
                    else {
                      fVar45 = fVar8;
                      if (fVar40 < fVar41) {
                        fVar45 = 0.0;
                      }
                    }
                    fVar40 = (pTVar20->field0_0x0)._s_0.X;
                    if (fVar8 <= fVar45) {
                      fVar45 = fVar8;
                    }
                    fVar41 = (pTVar23->field0_0x0)._s_0.X;
                    fVar42 = (pTVar20->field0_0x0)._s_0.Y;
                    fVar1 = (pTVar23->field0_0x0)._s_0.Y;
                    fVar2 = (pTVar20->field0_0x0)._s_0.Z;
                    fVar3 = (pTVar23->field0_0x0)._s_0.Z;
                    if (fVar45 <= 0.0) {
                      fVar45 = 0.0;
                    }
                    if (fVar8 <= fVar45) {
                      fVar45 = fVar8;
                    }
                    if (fVar45 <= __real_3dcccccd) {
                      fVar45 = __real_3dcccccd;
                    }
                    fVar4 = (pTVar23->field0_0x0)._s_0.X;
                    fVar5 = (pTVar23->field0_0x0)._s_0.Y;
                    fVar6 = (pTVar23->field0_0x0)._s_0.Z;
                    if (((local_15b8.LengthFromRoot.ConstAttributeArray ==
                          (TManagedArray<float> *)0x0) || ((int)uVar34 < 0)) ||
                       (iVar14 = (**(code **)(*(longlong *)
                                               local_15b8.LengthFromRoot.ConstAttributeArray + 0x60)
                                 )(), iVar14 <= (int)uVar34)) {
                      pfVar19 = &DefaultLengthFromRoot;
                    }
                    else {
                      pfVar19 = TManagedArrayAccessor<float>::operator[]
                                          (&local_15b8.LengthFromRoot,uVar34);
                    }
                    if (((local_15b8.LengthFromRoot.ConstAttributeArray ==
                          (TManagedArray<float> *)0x0) || ((int)uVar30 < 0)) ||
                       (iVar14 = (**(code **)(*(longlong *)
                                               local_15b8.LengthFromRoot.ConstAttributeArray + 0x60)
                                 )(), iVar14 <= (int)uVar30)) {
                      pfVar25 = &DefaultLengthFromRoot;
                    }
                    else {
                      pfVar25 = TManagedArrayAccessor<float>::operator[]
                                          (&local_15b8.LengthFromRoot,uVar30);
                    }
                    pTVar11 = local_15b8.PointScale.ConstAttributeArray;
                    fVar46 = (*pfVar19 - *pfVar25) * fVar45 + *pfVar25;
                    if (((local_15b8.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0)
                        || ((int)uVar34 < 0)) ||
                       (iVar14 = (**(code **)(*(longlong *)local_15b8.PointScale.ConstAttributeArray
                                             + 0x60))(local_15b8.PointScale.ConstAttributeArray),
                       iVar14 <= (int)uVar34)) {
                      pfVar19 = &DefaultPScale;
                    }
                    else {
                      pfVar19 = TManagedArrayAccessor<float>::operator[]
                                          (&local_15b8.PointScale,uVar34);
                    }
                    if (((pTVar11 == (TManagedArray<float> *)0x0) || ((int)uVar30 < 0)) ||
                       (iVar14 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11),
                       iVar14 <= (int)uVar30)) {
                      pfVar25 = &DefaultPScale;
                    }
                    else {
                      pfVar25 = TManagedArrayAccessor<float>::operator[]
                                          (&local_15b8.PointScale,uVar30);
                    }
                    pTVar31 = local_b28.Positions.AttributeArray;
                    fVar44 = (*pfVar19 - *pfVar25) * fVar45 + *pfVar25;
                    if (((local_b28.Positions.AttributeArray ==
                          (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
                        (local_b28.Positions.Collection == (FManagedArrayCollection *)0x0)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("AttributeArray!=nullptr && !IsConst()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                            ,0x74,L""), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pTVar31->field_0x8 = 1;
                    uVar16 = 0;
                    if ((int)uVar34 < *(int *)&pTVar31->field_0x18) {
                      uVar16 = ~uVar34 >> 0x1f;
                    }
                    if ((uVar16 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pTVar11 = local_b28.LengthFromRoot.AttributeArray;
                    lVar38 = *(longlong *)&pTVar31->field_0x10;
                    *(ulonglong *)(lVar38 + lVar37 * 0xc) =
                         CONCAT44((fVar42 - fVar1) * fVar45 + fVar5,
                                  (fVar40 - fVar41) * fVar45 + fVar4);
                    *(float *)(lVar38 + 8 + lVar37 * 0xc) = (fVar2 - fVar3) * fVar45 + fVar6;
                    if (((local_b28.LengthFromRoot.AttributeArray == (TManagedArray<float> *)0x0) ||
                        (local_b28.LengthFromRoot.Collection == (FManagedArrayCollection *)0x0)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("AttributeArray!=nullptr && !IsConst()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                            ,0x74,L""), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pTVar11->field_0x8 = 1;
                    uVar16 = 0;
                    if ((int)uVar34 < *(int *)&pTVar11->field_0x18) {
                      uVar16 = ~uVar34 >> 0x1f;
                    }
                    if ((uVar16 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pTVar12 = local_b28.LengthFromSeed.AttributeArray;
                    *(float *)(*(longlong *)&pTVar11->field_0x10 + lVar37 * 4) = fVar46;
                    if (((local_b28.LengthFromSeed.AttributeArray == (TManagedArray<float> *)0x0) ||
                        (local_b28.LengthFromSeed.Collection == (FManagedArrayCollection *)0x0)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("AttributeArray!=nullptr && !IsConst()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                            ,0x74,L""), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pTVar12->field_0x8 = 1;
                    uVar16 = 0;
                    if ((int)uVar34 < *(int *)&pTVar12->field_0x18) {
                      uVar16 = ~uVar34 >> 0x1f;
                    }
                    if ((uVar16 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pTVar11 = local_b28.PointScale.AttributeArray;
                    *(float *)(*(longlong *)&pTVar12->field_0x10 + lVar37 * 4) = fVar46;
                    if (((local_b28.PointScale.AttributeArray == (TManagedArray<float> *)0x0) ||
                        (local_b28.PointScale.Collection == (FManagedArrayCollection *)0x0)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("AttributeArray!=nullptr && !IsConst()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                            ,0x74,L""), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pTVar11->field_0x8 = 1;
                    uVar16 = 0;
                    if ((int)uVar34 < *(int *)&pTVar11->field_0x18) {
                      uVar16 = ~uVar34 >> 0x1f;
                    }
                    if ((uVar16 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    *(float *)(*(longlong *)&pTVar11->field_0x10 + lVar37 * 4) = fVar44;
                    UpdatePointScales(&local_b28,&local_15b8,local_1698,fVar44,uVar34,
                                      ((float)(int)local_16b0 + fVar45) / (float)local_16a8,
                                      local_16b0,fVar43);
                    FVar35.Data = local_16a0;
                    fVar45 = __real_322bcc77;
                    uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                    if (local_1638.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1638.AllocatorInstance.Data);
                      FVar35.Data = local_16a0;
                      fVar45 = __real_322bcc77;
                      uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                    }
                  }
                }
              }
              FVar35.Data = FVar35.Data + 4;
              uVar26 = (ulonglong)local_1614;
              fVar41 = __real_7f7fffff;
              fVar43 = local_166c;
              fVar40 = local_1668;
            }
            if (local_1600.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1600.AllocatorInstance.Data);
            }
            FVar35.Data = local_1608 + 4;
            uVar26 = (ulonglong)local_1628;
          }
          if (local_15f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_15f0.AllocatorInstance.Data);
          }
          RemoveEntriesAndRecomputeAttributes
                    (local_15d8,local_15e0,&local_1650,&local_1680,&local_1660);
          if (local_16d0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_16d0.Data);
          }
          local_f0 = 0;
          if (local_f8 != (undefined1 *)0x0) {
            FMemory::Free(local_f8);
          }
          TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_138);
          local_188.Pairs.HashSize = 0;
          if (local_188.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_188.Pairs.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&local_188);
          if (local_1660.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1660.AllocatorInstance.Data);
          }
          if (local_1680.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1680.AllocatorInstance.Data);
          }
          if (local_1650.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1650.AllocatorInstance.Data);
          }
          break;
        }
        if ((EVar9 == LengthFromRoot) || (EVar9 == FromBottom)) {
          if ((local_15b8.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
             (bVar13 = TManagedArrayAccessor<float>::IsValidIndex(&local_15b8.LengthFromRoot,iVar14)
             , !bVar13)) {
            pfVar19 = &DefaultLengthFromRoot;
          }
          else {
            pfVar19 = TManagedArrayAccessor<float>::operator[](&local_15b8.LengthFromRoot,iVar14);
          }
LAB_14da72df3:
          if (((local_16d0.Data <= pfVar19) &&
              (pfVar19 < local_16d0.Data + (longlong)local_16c8._4_4_ * 4)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar15 = (int)local_16c8;
          if ((int)local_16c8 == local_16c8._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_16d0,(int *)((longlong)&local_16c8 + 4));
          }
          local_16c8 = CONCAT44(local_16c8._4_4_,iVar15 + 1);
          *(float *)(local_16d0.Data + (longlong)iVar15 * 4) = *pfVar19;
        }
        else {
          if (EVar9 == ZPosition) {
            pTVar20 = PV::Facades::FPointFacade::GetPosition(&local_15b8,iVar14);
            pfVar19 = &(pTVar20->field0_0x0)._s_0.Z;
            if (((local_16d0.Data <= pfVar19) &&
                (pfVar19 < local_16d0.Data + (longlong)local_16c8._4_4_ * 4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar15 = (int)local_16c8;
            if ((int)local_16c8 == local_16c8._4_4_) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_16d0,(int *)((longlong)&local_16c8 + 4));
            }
            iVar14 = iVar14 + 1;
            local_16c8 = CONCAT44(local_16c8._4_4_,iVar15 + 1);
            *(float *)(local_16d0.Data + (longlong)iVar15 * 4) = *pfVar19;
            pTVar31 = local_15b8.Positions.ConstAttributeArray;
            goto LAB_14da72c80;
          }
          if (EVar9 == Radius) {
            if ((local_15b8.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
               (bVar13 = TManagedArrayAccessor<float>::IsValidIndex(&local_15b8.PointScale,iVar14),
               !bVar13)) {
              pfVar19 = &DefaultPScale;
            }
            else {
              pfVar19 = TManagedArrayAccessor<float>::operator[](&local_15b8.PointScale,iVar14);
            }
            goto LAB_14da72df3;
          }
        }
        iVar14 = iVar14 + 1;
      } while( true );
    }
  }
  if (bVar39) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
  while (uVar29 = puVar33[2], uVar29 != 0xffffffff) {
LAB_14da73910:
    puVar33 = (uint *)((longlong)(int)uVar29 * 0x10 + local_138._0_8_);
    if (*puVar33 == *(uint *)pFVar32) {
      if (puVar33 != (uint *)0x0) goto LAB_14da73957;
      goto LAB_14da73931;
    }
  }
LAB_14da7392f:
  puVar33 = (uint *)0x0;
LAB_14da73931:
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar13) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14da73957:
  uVar29 = 0;
  if ((int)uVar34 < pTVar21->ArrayNum) {
    uVar29 = -uVar30 >> 0x1f;
  }
  if ((uVar29 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = *(int *)((pTVar21->AllocatorInstance).Data + lVar38 * 4 + -4);
  if (((local_15b8.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
      (iVar14 < 0)) ||
     (iVar15 = (**(code **)(*(longlong *)local_15b8.LengthFromRoot.ConstAttributeArray + 0x60))(),
     iVar15 <= iVar14)) {
    pfVar19 = &DefaultLengthFromRoot;
  }
  else {
    pfVar19 = TManagedArrayAccessor<float>::operator[](&local_15b8.LengthFromRoot,iVar14);
  }
  pFVar36 = local_1620;
  uVar34 = local_16ac;
  if (*pfVar19 < (float)puVar33[1]) {
    if (local_188.Pairs.Elements._8_4_ != local_188.Pairs.Elements._52_4_) {
      FVar28 = (ForElementType<FSetElementId>)&local_188.Pairs.Hash;
      if (local_188.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar28 = local_188.Pairs.Hash.SecondaryData;
      }
      uVar30 = *(uint *)((longlong)FVar28 +
                        (ulonglong)(local_188.Pairs.HashSize - 1U & *(uint *)pFVar32) * 4);
      while (uVar30 != 0xffffffff) {
        puVar33 = (uint *)((longlong)(int)uVar30 * 0x10 + local_188.Pairs.Elements._0_8_);
        if (*puVar33 == *(uint *)pFVar32) {
          if (puVar33 != (uint *)0x0) goto LAB_14da73a78;
          goto LAB_14da73a52;
        }
        uVar30 = puVar33[2];
      }
    }
    puVar33 = (uint *)0x0;
LAB_14da73a52:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pair != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                        ,0x288,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_14da73a78:
    uVar30 = puVar33[1];
    uVar34 = 0;
    if ((int)uVar30 < local_1680.ArrayNum) {
      uVar34 = ~uVar30 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_1680.AllocatorInstance.Data[(int)uVar30] = (FScriptContainerElement)0x1;
    if (((local_1188.BranchPoints.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar30 < 0)) ||
       (iVar14 = (**(code **)(*(longlong *)local_1188.BranchPoints.ConstAttributeArray + 0x60))(),
       iVar14 <= (int)uVar30)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
               _dynamic_atexit_destructor_for__EmptyPoints__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar21 = &EmptyPoints;
    }
    else {
      pTVar21 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_1188.BranchPoints,uVar30);
    }
    pFVar32 = (pTVar21->AllocatorInstance).Data;
    iVar14 = pTVar21->ArrayNum;
    pFVar36 = pFVar32 + (longlong)iVar14 * 4;
    while( true ) {
      if (pTVar21->ArrayNum != iVar14) {
        local_16bd[5] = false;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_16bd + 5);
      }
      if (pFVar32 == pFVar36) break;
      uVar34 = *(uint *)pFVar32;
      uVar29 = 0;
      if ((int)uVar34 < local_1650.ArrayNum) {
        uVar29 = ~uVar34 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar32 = pFVar32 + 4;
      local_1650.AllocatorInstance.Data[(int)uVar34] = (FScriptContainerElement)0x1;
    }
    if (((local_da8.FoliageIdsAttribute.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar30 < 0)) ||
       (iVar14 = (**(code **)(*(longlong *)local_da8.FoliageIdsAttribute.ConstAttributeArray + 0x60)
                 )(), iVar14 <= (int)uVar30)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
               _dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar21 = &::EmptyArray;
    }
    else {
      pTVar21 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_da8.FoliageIdsAttribute,uVar30);
    }
    pFVar32 = (pTVar21->AllocatorInstance).Data;
    iVar14 = pTVar21->ArrayNum;
    pFVar36 = pFVar32 + (longlong)iVar14 * 4;
    while( true ) {
      if (pTVar21->ArrayNum != iVar14) {
        local_16bd[6] = false;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_16bd + 6);
      }
      if (pFVar32 == pFVar36) break;
      uVar34 = *(uint *)pFVar32;
      uVar29 = 0;
      if ((int)uVar34 < local_1660.ArrayNum) {
        uVar29 = ~uVar34 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar32 = pFVar32 + 4;
      local_1660.AllocatorInstance.Data[(int)uVar34] = (FScriptContainerElement)0x1;
    }
    if (((local_1188.Children.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar30 < 0)) ||
       (iVar14 = (**(code **)(*(longlong *)local_1188.Children.ConstAttributeArray + 0x60))(),
       iVar14 <= (int)uVar30)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetChildren'::__l2::
               _dynamic_atexit_destructor_for__EmptyChildren__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar21 = &EmptyChildren;
    }
    else {
      pTVar21 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_1188.Children,uVar30);
    }
    iVar14 = pTVar21->ArrayNum;
    pFVar36 = local_1620;
    pFVar32 = local_1688;
    lVar38 = local_1690;
    uVar34 = local_16ac;
    local_1610 = pTVar21;
    uVar30 = local_16b0;
    if (0 < iVar14) {
      uVar29 = 0;
      local_1640 = (TVector<float> *)0x0;
LAB_14da73d82:
      pTVar20 = local_1640;
      uVar30 = 0;
      if ((int)uVar29 < iVar14) {
        uVar30 = ~uVar29 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar30 = *(uint *)((longlong)&pTVar20->field0_0x0 +
                        (longlong)(pTVar21->AllocatorInstance).Data);
      if (local_188.Pairs.Elements._8_4_ != local_188.Pairs.Elements._52_4_) {
        FVar28 = (ForElementType<FSetElementId>)&local_188.Pairs.Hash;
        if (local_188.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar28 = local_188.Pairs.Hash.SecondaryData;
        }
        for (iVar14 = *(int *)((longlong)FVar28 +
                              (ulonglong)(local_188.Pairs.HashSize - 1U & uVar30) * 4); iVar14 != -1
            ; iVar14 = *(int *)(local_188.Pairs.Elements._0_8_ + 8 + (longlong)iVar14 * 0x10)) {
          if (*(uint *)(local_188.Pairs.Elements._0_8_ + (longlong)iVar14 * 0x10) == uVar30) {
            uVar30 = 0;
            if ((int)uVar29 < pTVar21->ArrayNum) {
              uVar30 = ~uVar29 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar30 = *(uint *)((longlong)&pTVar20->field0_0x0 +
                              (longlong)(pTVar21->AllocatorInstance).Data);
            if (local_188.Pairs.Elements._8_4_ == local_188.Pairs.Elements._52_4_)
            goto LAB_14da73edf;
            FVar28 = (ForElementType<FSetElementId>)&local_188.Pairs.Hash;
            if (local_188.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar28 = local_188.Pairs.Hash.SecondaryData;
            }
            uVar34 = *(uint *)((longlong)FVar28 +
                              (ulonglong)(local_188.Pairs.HashSize - 1U & uVar30) * 4);
            if (uVar34 == 0xffffffff) goto LAB_14da73edf;
            goto LAB_14da73ec0;
          }
        }
      }
      goto LAB_14da7417c;
    }
  }
LAB_14da741a6:
  pFVar32 = pFVar32 + 4;
  uVar26 = (ulonglong)local_1618;
  pTVar21 = local_1698;
  goto LAB_14da73842;
  while (uVar34 = puVar33[2], uVar34 != 0xffffffff) {
LAB_14da73ec0:
    puVar33 = (uint *)((longlong)(int)uVar34 * 0x10 + local_188.Pairs.Elements._0_8_);
    if (*puVar33 == uVar30) {
      if (puVar33 != (uint *)0x0) goto LAB_14da73f07;
      goto LAB_14da73ee1;
    }
  }
LAB_14da73edf:
  puVar33 = (uint *)0x0;
LAB_14da73ee1:
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar13) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14da73f07:
  uVar30 = puVar33[1];
  uVar34 = 0;
  if ((int)uVar30 < local_1680.ArrayNum) {
    uVar34 = ~uVar30 >> 0x1f;
  }
  if ((uVar34 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_1680.AllocatorInstance.Data[(int)uVar30] = (FScriptContainerElement)0x1;
  if (((local_1188.BranchPoints.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar30 < 0)) ||
     (iVar14 = (**(code **)(*(longlong *)local_1188.BranchPoints.ConstAttributeArray + 0x60))(),
     iVar14 <= (int)uVar30)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
             _dynamic_atexit_destructor_for__EmptyPoints__);
      _Init_thread_footer(&::_TSS0);
    }
    pTVar21 = &EmptyPoints;
  }
  else {
    pTVar21 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                        (&local_1188.BranchPoints,uVar30);
  }
  pFVar32 = (pTVar21->AllocatorInstance).Data;
  iVar14 = pTVar21->ArrayNum;
  pFVar36 = pFVar32 + (longlong)iVar14 * 4;
  while( true ) {
    if (pTVar21->ArrayNum != iVar14) {
      local_16bd[7] = false;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_16bd + 7);
    }
    if (pFVar32 == pFVar36) break;
    uVar34 = *(uint *)pFVar32;
    uVar17 = 0;
    if ((int)uVar34 < local_1650.ArrayNum) {
      uVar17 = ~uVar34 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar32 = pFVar32 + 4;
    local_1650.AllocatorInstance.Data[(int)uVar34] = (FScriptContainerElement)0x1;
  }
  if (((local_da8.FoliageIdsAttribute.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar30 < 0)) ||
     (iVar14 = (**(code **)(*(longlong *)local_da8.FoliageIdsAttribute.ConstAttributeArray + 0x60))
                         (), iVar14 <= (int)uVar30)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
    pTVar24 = &::EmptyArray;
  }
  else {
    pTVar24 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                        (&local_da8.FoliageIdsAttribute,uVar30);
  }
  pFVar32 = (pTVar24->AllocatorInstance).Data;
  iVar14 = pTVar24->ArrayNum;
  pFVar36 = pFVar32 + (longlong)iVar14 * 4;
  while( true ) {
    if (pTVar24->ArrayNum != iVar14) {
      local_16bd[8] = false;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_16bd + 8);
    }
    pTVar20 = local_1640;
    pTVar21 = local_1610;
    if (pFVar32 == pFVar36) break;
    uVar30 = *(uint *)pFVar32;
    uVar34 = 0;
    if ((int)uVar30 < local_1660.ArrayNum) {
      uVar34 = ~uVar30 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar32 = pFVar32 + 4;
    local_1660.AllocatorInstance.Data[(int)uVar30] = (FScriptContainerElement)0x1;
  }
LAB_14da7417c:
  iVar14 = pTVar21->ArrayNum;
  local_1640 = (TVector<float> *)((longlong)&pTVar20->field0_0x0 + 4);
  uVar29 = uVar29 + 1;
  pFVar36 = local_1620;
  pFVar32 = local_1688;
  lVar38 = local_1690;
  uVar34 = local_16ac;
  uVar30 = local_16b0;
  if (iVar14 <= (int)uVar29) goto LAB_14da741a6;
  goto LAB_14da73d82;
}

// ComputeMetadata @ 14da75ff0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
FPVCarve::ComputeMetadata
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1,
          TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *param_2,
          FBranchFacade *param_3,FPointFacade *param_4)

{
  int iVar1;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TManagedArray<int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  int local_res10 [2];
  float local_res18 [2];
  float local_88 [2];
  undefined1 local_80 [8];
  TPairInitializer<int_const_&,float_&&> local_78;
  int *local_68;
  float *local_60;
  float *local_58;
  float *local_50;
  float *local_48;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId549,"PVCarve::ComputeMetadata",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVCarve.cpp"
               ,0x225);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId549);
  }
  pTVar2 = (param_3->Parents).ConstAttributeArray;
  if (pTVar2 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    iVar6 = FManagedArrayCollection::NumElements
                      ((param_3->Parents).ConstCollection,(param_3->Parents).Group);
  }
  else {
    iVar6 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             param_1,iVar6);
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
              *)param_2,iVar6);
  local_res10[0] = 0;
  if (0 < iVar6) {
    do {
      iVar1 = local_res10[0];
      pTVar3 = (param_3->BranchNumbers).ConstAttributeArray;
      if (((pTVar3 == (TManagedArray<int> *)0x0) || (local_res10[0] < 0)) ||
         (iVar7 = (**(code **)(*(longlong *)pTVar3 + 0x60))(), iVar7 <= iVar1)) {
        local_res18[0] = -NAN;
      }
      else {
        pfVar8 = (float *)TManagedArrayAccessor<int>::operator[](&param_3->BranchNumbers,iVar1);
        local_res18[0] = *pfVar8;
      }
      local_78.Value = local_res18;
      local_68 = local_res10;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)param_1,(TPairInitializer<int_const_&,int_const_&> *)local_80,
                 (bool *)&local_78.Value);
      pTVar9 = PV::Facades::FBranchFacade::GetPoints(param_3,local_res10[0]);
      if ((pTVar9->ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("BranchPoints.Num() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVCarve.cpp"
                             ,0x231,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pTVar9->ArrayNum < 1) {
        local_50 = local_res18;
        local_88[1] = 0.0;
        local_48 = local_88 + 1;
        TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,float_&&>_>
                  ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                    *)param_2,&local_78,(bool *)&local_50);
      }
      else {
        pTVar9 = PV::Facades::FBranchFacade::GetPoints(param_3,local_res10[0]);
        if ((pTVar9->ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar1 = *(int *)(pTVar9->AllocatorInstance).Data;
        if ((((param_4->LengthFromRoot).ConstAttributeArray == (TManagedArray<float> *)0x0) ||
            (iVar1 < 0)) ||
           (iVar7 = (**(code **)(*(longlong *)(param_4->LengthFromRoot).ConstAttributeArray + 0x60))
                              (), iVar7 <= iVar1)) {
          pfVar8 = &DefaultLengthFromRoot;
        }
        else {
          pfVar8 = TManagedArrayAccessor<float>::operator[](&param_4->LengthFromRoot,iVar1);
        }
        local_88[0] = *pfVar8;
        local_60 = local_res18;
        local_58 = local_88;
        TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,float_const_&>_>
                  ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                    *)param_2,(TPairInitializer<int_const_&,float_const_&> *)(local_80 + 4),
                   (bool *)&local_60);
      }
      local_res10[0] = local_res10[0] + 1;
    } while (local_res10[0] < iVar6);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RecomputeAttributes @ 14da9f380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FPVCarve::RecomputeAttributes
          (FManagedArrayCollection *param_1,FManagedArrayCollection *param_2,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  TManagedArray<float> *pTVar12;
  TManagedArray<float> *pTVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  uint *puVar21;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar22;
  float *pfVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  ForAnyElementType FVar26;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  ForAnyElementType local_10b8;
  undefined8 local_10b0;
  undefined1 local_10a8;
  undefined1 local_10a7;
  undefined1 local_10a6;
  undefined1 local_10a5;
  uint local_10a4;
  FScriptContainerElement *local_10a0;
  undefined4 local_1098;
  undefined4 uStack_1094;
  TArray<float,TSizedDefaultAllocator<32>_> local_1090;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1080;
  int local_1078;
  float local_1070 [2];
  float local_1068 [2];
  uint local_1060;
  FScriptContainerElement *local_1058;
  FScriptContainerElement *local_1050;
  TArray<int,TSizedDefaultAllocator<32>_> local_1048;
  TArray<int,TSizedDefaultAllocator<32>_> local_1038;
  TArray<int,TSizedDefaultAllocator<32>_> local_1028;
  FScriptContainerElement *local_1018;
  FPlantFacade local_1008;
  FPointFacade local_f18;
  FBranchFacade local_ae8;
  FBranchFacade local_7f8;
  FPointFacade local_508;
  
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId55,"PVCarve::RecomputeAttributes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVCarve.cpp"
               ,0x37);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId55);
  }
  PV::Facades::FBranchFacade::FBranchFacade(&local_7f8,param_2);
  PV::Facades::FPointFacade::FPointFacade(&local_508,param_2);
  PV::Facades::FBranchFacade::FBranchFacade(&local_ae8,param_1);
  PV::Facades::FPlantFacade::FPlantFacade(&local_1008,param_1);
  PV::Facades::FPointFacade::FPointFacade(&local_f18,param_1);
  PV::Facades::FPlantFacade::GetPlantNumbers(&local_1008,&local_1028);
  fVar10 = __real_3f800000;
  fVar9 = __real_322bcc77;
  local_1060 = local_1028.ArrayNum;
  uVar24 = (ulonglong)(int)local_1060;
  local_1018 = local_1028.AllocatorInstance.Data + uVar24 * 4;
  FVar26.Data = local_1028.AllocatorInstance.Data;
  do {
    pFVar5 = local_1018;
    local_1058 = FVar26.Data;
    if (local_1028.ArrayNum != (int)uVar24) {
      local_10a8 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_10a8);
    }
    fVar36 = __real_7f7fffff;
    fVar35 = __real_00800000;
    if (FVar26.Data == pFVar5) {
      if (local_1028.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1028.AllocatorInstance.Data);
      }
      if (bVar33) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_10b8.Data = (FScriptContainerElement *)0x0;
    local_10b0 = 0;
    if (local_ae8.Parents.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      uVar15 = FManagedArrayCollection::NumElements
                         (local_ae8.Parents.ConstCollection,local_ae8.Parents.Group);
    }
    else {
      uVar15 = (**(code **)(*(longlong *)local_ae8.Parents.ConstAttributeArray + 0x60))();
    }
    uVar24 = (ulonglong)uVar15;
    local_1098 = 0x7f7fffff;
    uStack_1094 = 0x800000;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    uVar8 = local_10b0 >> 0x20;
    local_10b0 = local_10b0 & 0xffffffff00000000;
    iVar17 = 0;
    if ((uint)uVar8 != uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar15,&local_10b8,0,(int *)((longlong)&local_10b0 + 4));
      iVar17 = (int)local_10b0;
    }
    if (0 < (int)uVar15) {
      do {
        iVar16 = iVar17;
        if ((local_10b8.Data <= (FScriptContainerElement *)&local_1098) &&
           ((FScriptContainerElement *)&local_1098 <
            local_10b8.Data + (longlong)local_10b0._4_4_ * 8)) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar16 = (int)local_10b0;
        }
        if (iVar16 == local_10b0._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_10b8,(int *)((longlong)&local_10b0 + 4));
        }
        iVar17 = iVar16 + 1;
        local_10b0 = CONCAT44(local_10b0._4_4_,iVar17);
        *(ulonglong *)(local_10b8.Data + (longlong)iVar16 * 8) = CONCAT44(uStack_1094,local_1098);
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    PV::Facades::FPlantFacade::GetBranchIndices(&local_1008,&local_1048,*(int *)FVar26.Data);
    fVar4 = __real_3f000000;
    fVar3 = __real_bf000000;
    uVar24 = (ulonglong)local_1048.ArrayNum;
    local_1050 = local_1048.AllocatorInstance.Data + uVar24 * 4;
    local_10a4 = local_1048.ArrayNum;
    FVar26.Data = local_1048.AllocatorInstance.Data;
    pTVar27 = local_7f8.BranchPoints.ConstAttributeArray;
    pTVar32 = local_ae8.BranchPoints.ConstAttributeArray;
    while( true ) {
      pFVar5 = local_1050;
      if (local_1048.ArrayNum != (uint)uVar24) {
        local_10a7 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_10a7);
      }
      uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      if (FVar26.Data == pFVar5) break;
      uVar15 = *(uint *)FVar26.Data;
      if (((pTVar32 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
          ((int)uVar15 < 0)) ||
         (iVar17 = (**(code **)(*(longlong *)pTVar32 + 0x60))(pTVar32), iVar17 <= (int)uVar15)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                 _dynamic_atexit_destructor_for__EmptyPoints__);
          _Init_thread_footer(&::_TSS0);
        }
        pTVar20 = &EmptyPoints;
      }
      else {
        pTVar20 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                            (&local_ae8.BranchPoints,uVar15);
      }
      iVar17 = pTVar20->ArrayNum;
      uVar15 = *(uint *)FVar26.Data;
      local_1078 = iVar17;
      if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
        puVar25 = &param_3->field_0x38;
        if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
          puVar25 = *(undefined1 **)&param_3->field_0x40;
        }
        iVar16 = *(int *)(puVar25 + (ulonglong)(*(int *)&param_3->field_0x48 - 1U & uVar15) * 4);
        if (iVar16 != -1) {
          do {
            if (*(uint *)(*(longlong *)param_3 + (longlong)iVar16 * 0x10) == uVar15) {
              if (iVar16 != -1) {
                puVar21 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                  ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                                 *)param_3,uVar15);
                uVar15 = *puVar21;
              }
              break;
            }
            iVar16 = *(int *)(*(longlong *)param_3 + 8 + (longlong)iVar16 * 0x10);
          } while (iVar16 != -1);
        }
      }
      if (((pTVar27 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
          ((int)uVar15 < 0)) ||
         (iVar16 = (**(code **)(*(longlong *)pTVar27 + 0x60))(pTVar27), iVar16 <= (int)uVar15)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                 _dynamic_atexit_destructor_for__EmptyPoints__);
          _Init_thread_footer(&::_TSS0);
        }
        local_1080 = &EmptyPoints;
      }
      else {
        local_1080 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                               (&local_7f8.BranchPoints,uVar15);
      }
      uVar15 = 0;
      if (0 < iVar17) {
        lVar31 = 0;
        local_10a0 = (FScriptContainerElement *)0x0;
        fVar34 = fVar35;
        do {
          iVar16 = local_1080->ArrayNum;
          fVar35 = (float)(int)uVar15 * (fVar10 / (float)iVar17) * (float)iVar16;
          uVar18 = -((int)ROUND(fVar3 - (fVar35 + fVar35)) >> 1);
          uVar29 = iVar16 - 1U;
          if ((int)uVar18 < (int)(iVar16 - 1U)) {
            uVar29 = uVar18;
          }
          uVar18 = 0;
          if (0 < (int)uVar29) {
            uVar18 = uVar29;
          }
          uVar29 = 0;
          if (uVar18 != 0) {
            uVar29 = uVar18 - 1;
          }
          uVar7 = 0;
          if ((int)uVar29 < iVar16) {
            uVar7 = ~uVar29 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar16 = *(int *)((local_1080->AllocatorInstance).Data + (longlong)(int)uVar29 * 4);
          if (((local_508.BudHormoneLevels.ConstAttributeArray ==
                (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar16 < 0))
             || (iVar19 = (**(code **)(*(longlong *)local_508.BudHormoneLevels.ConstAttributeArray +
                                      0x60))(), iVar19 <= iVar16)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              atexit(`PV::Facades::FPointFacade::GetBudHormoneLevels'::__l2::
                     _dynamic_atexit_destructor_for__EmptyArray__);
              _Init_thread_footer(&::_TSS0);
            }
            pTVar22 = &::EmptyArray;
          }
          else {
            pTVar22 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                                (&local_508.BudHormoneLevels,iVar16);
          }
          if ((pTVar22->ArrayNum < 5) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BudHormoneLevelsAtOldPreviousPointIndex.Num() >= 5",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVCarve.cpp"
                                  ,0x5c,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((pTVar22->ArrayNum < 5) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar11 = local_1080;
          fVar1 = *(float *)((pTVar22->AllocatorInstance).Data + 0x10);
          uVar29 = 0;
          if ((int)uVar18 < local_1080->ArrayNum) {
            uVar29 = ~uVar18 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar16 = *(int *)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar18 * 4);
          if (((local_508.BudHormoneLevels.ConstAttributeArray ==
                (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar16 < 0))
             || (iVar19 = (**(code **)(*(longlong *)local_508.BudHormoneLevels.ConstAttributeArray +
                                      0x60))(), iVar19 <= iVar16)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              atexit(`PV::Facades::FPointFacade::GetBudHormoneLevels'::__l2::
                     _dynamic_atexit_destructor_for__EmptyArray__);
              _Init_thread_footer(&::_TSS0);
            }
            pTVar22 = &::EmptyArray;
          }
          else {
            pTVar22 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                                (&local_508.BudHormoneLevels,iVar16);
          }
          if ((pTVar22->ArrayNum < 5) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BudHormoneLevelsAtOldCurrentPointIndex.Num() >= 5",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVCarve.cpp"
                                  ,0x61,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((pTVar22->ArrayNum < 5) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar18 = ~uVar15 >> 0x1f;
          fVar2 = *(float *)((pTVar22->AllocatorInstance).Data + 0x10);
          uVar29 = 0;
          if ((int)uVar15 < pTVar20->ArrayNum) {
            uVar29 = uVar18;
          }
          if ((uVar29 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar16 = *(int *)((pTVar20->AllocatorInstance).Data + lVar31);
          if (((local_f18.BudHormoneLevels.ConstAttributeArray ==
                (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar16 < 0))
             || (iVar19 = (**(code **)(*(longlong *)local_f18.BudHormoneLevels.ConstAttributeArray +
                                      0x60))(), iVar19 <= iVar16)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              atexit(`PV::Facades::FPointFacade::GetBudHormoneLevels'::__l2::
                     _dynamic_atexit_destructor_for__EmptyArray__);
              _Init_thread_footer(&::_TSS0);
            }
            pTVar22 = &::EmptyArray;
          }
          else {
            pTVar22 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                                (&local_f18.BudHormoneLevels,iVar16);
          }
          local_1090.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1090.ArrayNum = pTVar22->ArrayNum;
          lVar30 = (longlong)local_1090.ArrayNum;
          pFVar5 = (pTVar22->AllocatorInstance).Data;
          if (local_1090.ArrayNum == 0) {
            local_1090.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_1090.ArrayNum,0,&local_1090.AllocatorInstance,local_1090.ArrayNum,
                       &local_1090.ArrayMax);
            memcpy(local_1090.AllocatorInstance.Data,pFVar5,lVar30 << 2);
          }
          if ((local_1090.ArrayNum < 4) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentBudHormoneLevels.Num() >= 4",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVCarve.cpp"
                                  ,0x66,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((local_1090.ArrayNum < 5) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = local_10a0;
          *(float *)(local_1090.AllocatorInstance.Data + 0x10) =
               (fVar2 - fVar1) * (fVar35 - (float)((int)ROUND((fVar35 + fVar35) - fVar4) >> 1)) +
               fVar1;
          uVar29 = 0;
          if ((int)uVar15 < pTVar20->ArrayNum) {
            uVar29 = uVar18;
          }
          if ((uVar29 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar16 = *(int *)((pTVar20->AllocatorInstance).Data + lVar31);
          if (((local_f18.BudHormoneLevels.ConstAttributeArray !=
                (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < iVar16))
             && (iVar19 = (**(code **)(*(longlong *)local_f18.BudHormoneLevels.ConstAttributeArray +
                                      0x60))(), iVar16 < iVar19)) {
            TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::ModifyAt
                      (&local_f18.BudHormoneLevels,iVar16,&local_1090);
          }
          uVar29 = 0;
          if ((int)uVar15 < pTVar20->ArrayNum) {
            uVar29 = uVar18;
          }
          if ((uVar29 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar16 = *(int *)((pTVar20->AllocatorInstance).Data + lVar31);
          if (((local_f18.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
              (iVar16 < 0)) ||
             (iVar19 = (**(code **)(*(longlong *)local_f18.PointScale.ConstAttributeArray + 0x60))()
             , iVar19 <= iVar16)) {
            pfVar23 = &DefaultPScale;
          }
          else {
            pfVar23 = TManagedArrayAccessor<float>::operator[](&local_f18.PointScale,iVar16);
          }
          fVar1 = *pfVar23;
          uVar29 = *(uint *)FVar26.Data;
          fVar35 = fVar1;
          if (fVar36 <= fVar1) {
            fVar35 = fVar36;
          }
          fVar36 = fVar35;
          fVar35 = fVar1;
          if (fVar1 <= fVar34) {
            fVar35 = fVar34;
          }
          uVar18 = 0;
          if ((int)uVar29 < (int)local_10b0) {
            uVar18 = ~uVar29 >> 0x1f;
          }
          if (uVar18 == 0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          uVar18 = *(uint *)FVar26.Data;
          fVar34 = *(float *)(local_10b8.Data + (longlong)(int)uVar29 * 8);
          if (fVar1 <= *(float *)(local_10b8.Data + (longlong)(int)uVar29 * 8)) {
            fVar34 = fVar1;
          }
          uVar29 = 0;
          if ((int)uVar18 < (int)local_10b0) {
            uVar29 = ~uVar18 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(float *)(local_10b8.Data + (longlong)(int)uVar18 * 8) = fVar34;
          uVar29 = *(uint *)FVar26.Data;
          uVar18 = 0;
          if ((int)uVar29 < (int)local_10b0) {
            uVar18 = ~uVar29 >> 0x1f;
          }
          if (uVar18 == 0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          uVar18 = *(uint *)FVar26.Data;
          fVar34 = *(float *)(local_10b8.Data + (longlong)(int)uVar29 * 8 + 4);
          if (*(float *)(local_10b8.Data + (longlong)(int)uVar29 * 8 + 4) <= fVar1) {
            fVar34 = fVar1;
          }
          uVar29 = 0;
          if ((int)uVar18 < (int)local_10b0) {
            uVar29 = ~uVar18 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(float *)(local_10b8.Data + (longlong)(int)uVar18 * 8 + 4) = fVar34;
          if (local_1090.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1090.AllocatorInstance.Data);
          }
          local_10a0 = pFVar5 + 1;
          uVar15 = uVar15 + 1;
          lVar31 = lVar31 + 4;
          pTVar27 = local_7f8.BranchPoints.ConstAttributeArray;
          pTVar32 = local_ae8.BranchPoints.ConstAttributeArray;
          fVar34 = fVar35;
        } while ((int)uVar15 < local_1078);
      }
      uVar24 = (ulonglong)local_10a4;
      FVar26.Data = FVar26.Data + 4;
    }
    if (local_1048.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1048.AllocatorInstance.Data);
    }
    PV::Facades::FPlantFacade::GetBranchIndices(&local_1008,&local_1038,*(int *)local_1058);
    pTVar13 = local_f18.PlantGradients.ConstAttributeArray;
    pTVar12 = local_f18.BranchGradients.ConstAttributeArray;
    local_10a4 = local_1038.ArrayNum;
    uVar24 = (ulonglong)(int)local_10a4;
    local_1050 = local_1038.AllocatorInstance.Data + uVar24 * 4;
    FVar26.Data = local_1038.AllocatorInstance.Data;
    while( true ) {
      pFVar5 = local_1050;
      local_10a0 = FVar26.Data;
      if (local_1038.ArrayNum != (int)uVar24) {
        local_10a6 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_10a6);
      }
      if (FVar26.Data == pFVar5) break;
      uVar29 = *(uint *)FVar26.Data;
      if (((local_ae8.BranchPoints.ConstAttributeArray ==
            (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || ((int)uVar29 < 0)) ||
         (iVar17 = (**(code **)(*(longlong *)local_ae8.BranchPoints.ConstAttributeArray + 0x60))(),
         iVar17 <= (int)uVar29)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                 _dynamic_atexit_destructor_for__EmptyPoints__);
          _Init_thread_footer(&::_TSS0);
        }
        pTVar20 = &EmptyPoints;
      }
      else {
        pTVar20 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                            (&local_ae8.BranchPoints,uVar29);
      }
      uVar29 = *(uint *)FVar26.Data;
      uVar18 = 0;
      if ((int)uVar29 < (int)local_10b0) {
        uVar18 = ~uVar29 >> 0x1f;
      }
      if (uVar18 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      fVar3 = *(float *)(local_10b8.Data + (longlong)(int)uVar29 * 8 + 4);
      uVar29 = *(uint *)FVar26.Data;
      uVar18 = 0;
      if ((int)uVar29 < (int)local_10b0) {
        uVar18 = ~uVar29 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar28 = (pTVar20->AllocatorInstance).Data;
      iVar17 = pTVar20->ArrayNum;
      fVar4 = *(float *)(local_10b8.Data + (longlong)(int)uVar29 * 8);
      pFVar5 = pFVar28 + (longlong)iVar17 * 4;
      while( true ) {
        if (pTVar20->ArrayNum != iVar17) {
          local_10a5 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_10a5);
        }
        if (pFVar28 == pFVar5) break;
        iVar16 = *(int *)pFVar28;
        if (((local_f18.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
            (iVar16 < 0)) ||
           (iVar19 = (**(code **)(*(longlong *)local_f18.PointScale.ConstAttributeArray + 0x60))(),
           iVar19 <= iVar16)) {
          pfVar23 = &DefaultPScale;
        }
        else {
          pfVar23 = TManagedArrayAccessor<float>::operator[](&local_f18.PointScale,iVar16);
        }
        if (fVar9 < (float)((uint)(fVar35 - fVar36) & uVar15)) {
          local_1070[0] = (*pfVar23 - fVar36) / (fVar35 - fVar36);
        }
        else {
          local_1070[0] = fVar10;
          if (*pfVar23 < fVar35) {
            local_1070[0] = 0.0;
          }
        }
        iVar16 = *(int *)pFVar28;
        if (fVar10 <= local_1070[0]) {
          local_1070[0] = fVar10;
        }
        if (local_1070[0] <= 0.0) {
          local_1070[0] = 0.0;
        }
        if (((pTVar13 != (TManagedArray<float> *)0x0) && (-1 < iVar16)) &&
           (iVar19 = (**(code **)(*(longlong *)pTVar13 + 0x60))(pTVar13), iVar16 < iVar19)) {
          TManagedArrayAccessor<float>::ModifyAt(&local_f18.PlantGradients,iVar16,local_1070);
        }
        iVar16 = *(int *)pFVar28;
        if (((local_f18.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
            (iVar16 < 0)) ||
           (iVar19 = (**(code **)(*(longlong *)local_f18.PointScale.ConstAttributeArray + 0x60))(),
           iVar19 <= iVar16)) {
          pfVar23 = &DefaultPScale;
        }
        else {
          pfVar23 = TManagedArrayAccessor<float>::operator[](&local_f18.PointScale,iVar16);
        }
        fVar34 = fVar3 - fVar4;
        if (fVar9 < (float)((uint)fVar34 & uVar15)) {
          local_1068[0] = (*pfVar23 - fVar4) / fVar34;
        }
        else {
          local_1068[0] = fVar10;
          if (*pfVar23 < fVar3) {
            local_1068[0] = 0.0;
          }
        }
        iVar16 = *(int *)pFVar28;
        if (fVar10 <= local_1068[0]) {
          local_1068[0] = fVar10;
        }
        if (local_1068[0] <= 0.0) {
          local_1068[0] = 0.0;
        }
        if (((pTVar12 != (TManagedArray<float> *)0x0) && (-1 < iVar16)) &&
           (iVar19 = (**(code **)(*(longlong *)pTVar12 + 0x60))(pTVar12), iVar16 < iVar19)) {
          TManagedArrayAccessor<float>::ModifyAt(&local_f18.BranchGradients,iVar16,local_1068);
        }
        pFVar28 = pFVar28 + 4;
      }
      FVar26.Data = local_10a0 + 4;
      uVar24 = (ulonglong)local_10a4;
    }
    if (local_1038.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1038.AllocatorInstance.Data);
    }
    if (local_10b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10b8.Data);
    }
    FVar26.Data = local_1058 + 4;
    uVar24 = (ulonglong)local_1060;
  } while( true );
}

// RemoveEntriesAndRecomputeAttributes @ 14daa2bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPVCarve::RemoveEntriesAndRecomputeAttributes
          (FManagedArrayCollection *param_1,FManagedArrayCollection *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_4,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_5)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  byte bVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 auStackY_288 [32];
  undefined1 local_258 [8];
  longlong *local_250;
  uint uStack_248;
  uint uStack_244;
  TBitArray<FDefaultBitArrayAllocator> *local_240;
  undefined4 uStack_238;
  uint uStack_234;
  uint local_230;
  uint uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  int local_21c;
  TPairInitializer<int_const_&,int_const_&> local_218;
  longlong *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_200;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined1 local_198 [40];
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  FScriptContainerElement local_160 [8];
  ForAnyElementType local_158;
  uint local_150;
  undefined1 local_148 [72];
  undefined4 local_100;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  int local_c4;
  void *local_b8;
  undefined4 local_b0;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  ulonglong uVar13;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  bVar16 = -1 < CpuChannel->Enabled;
  local_218.Value = (int *)param_2;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId580,"PVCarve::RemoveEntriesAndRecomputeAttributes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVCarve.cpp"
               ,0x244);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId580);
  }
  PV::Facades::FTreeFacade::RemoveEntriesAndReIndexAttributes
            ((FRemoveEntriesResult *)local_148,param_1,param_3,param_4,param_5);
  uVar13 = 0;
  local_198._0_8_ = (FScriptContainerElement *)0x0;
  local_198._8_8_ = 0;
  local_198._32_8_ = (ForElementType<unsigned_int>)0x0;
  uVar11 = 0;
  local_170 = 0;
  local_16c = 0x80;
  local_168 = -1;
  local_164 = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  uVar8 = local_f8._8_4_ - local_c4;
  if (uVar8 == 0) goto LAB_14daa2df2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar8);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_198,uVar8);
  uVar9 = 1;
  if (3 < uVar8) {
    uVar12 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_220 = (undefined4)lVar7;
    uVar9 = 1 << ((byte)lVar7 & 0x1f);
  }
  if ((local_150 != 0) && ((int)uVar9 <= (int)local_150)) goto LAB_14daa2df2;
  local_150 = uVar9;
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_158,0,0,4);
  }
  if (uVar9 != 0) {
    uVar8 = uVar9;
    if (uVar9 < 2) {
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_14daa2d13;
      }
    }
    else {
LAB_14daa2d13:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_158,0,uVar8,4);
    }
    if (0 < (int)uVar9) {
      uVar14 = (ulonglong)uVar9;
      uVar12 = uVar13;
      do {
        FVar6.Data = local_160;
        if (local_158.Data != (FScriptContainerElement *)0x0) {
          FVar6.Data = local_158.Data;
        }
        uVar4 = (longlong)(int)uVar9 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar6.Data + uVar4 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if ((local_150 != 0) &&
     (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)&local_208,
                 (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_198), local_200.CurrentBitIndex < (local_200.Array)->NumBits)) {
    do {
      puVar15 = (uint *)((longlong)local_200.CurrentBitIndex * 0x10 + *local_208);
      uVar8 = local_150 - 1 & *puVar15;
      puVar15[3] = uVar8;
      FVar6.Data = local_160;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FVar6.Data = local_158.Data;
      }
      uVar12 = (longlong)(int)local_150 - 1U & (longlong)(int)uVar8;
      puVar15[2] = *(uint *)(FVar6.Data + uVar12 * 4);
      *(int *)(FVar6.Data + uVar12 * 4) = local_200.CurrentBitIndex;
      local_200.UnvisitedBitMask = local_200.UnvisitedBitMask & ~local_200._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_200);
    } while (local_200.CurrentBitIndex < (local_200.Array)->NumBits);
  }
LAB_14daa2df2:
  uVar8 = local_d0;
  local_230 = 0;
  uStack_234 = local_230;
  uStack_244 = 1;
  if (local_d0 != 0) {
    puVar15 = (uint *)(local_f8 + 0x10);
    if (local_d8 != (uint *)0x0) {
      puVar15 = local_d8;
    }
    uVar9 = *puVar15;
    uVar12 = uVar13;
    local_230 = 0;
    uVar11 = 0;
    while (uVar9 == 0) {
      iVar10 = (int)uVar13;
      local_230 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)local_230;
      uVar11 = iVar10 + 1;
      uVar13 = (ulonglong)uVar11;
      uStack_234 = local_d0;
      if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_14daa2e82;
      uVar9 = puVar15[(longlong)iVar10 + 1];
    }
    uStack_244 = -uVar9 & uVar9;
    uVar13 = (ulonglong)uStack_244 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_21c = (int)lVar7;
    uStack_234 = (local_230 - 1) + local_21c;
    if ((int)local_d0 < (int)uStack_234) {
      uStack_234 = local_d0;
    }
  }
LAB_14daa2e82:
  local_250 = (longlong *)local_f8;
  local_240 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  uVar9 = local_d0 & 0xffffffe0;
  iStack_228 = local_f8._8_4_ - local_c4;
  uStack_238 = 0xffffffff;
  TStack_1d8.CurrentBitIndex = uStack_234;
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  TStack_1d8._padding_ = CONCAT44(uStack_244,uVar11);
  iVar10 = (int)local_d0 >> 5;
  TStack_1d8._28_4_ = uStack_234;
  TStack_1d8.BaseBitIndex = local_230;
  uStack_1b8 = CONCAT44(uStack_224,iStack_228);
  bVar5 = (byte)local_d0;
  uStack_248 = uVar11;
  uStack_22c = uStack_234;
  local_1e0 = local_250;
  TStack_1d8.Array = local_240;
  if (((int)local_d0 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uVar8 != local_d0) {
    puVar15 = (uint *)(local_f8 + 0x10);
    if (local_d8 != (uint *)0x0) {
      puVar15 = local_d8;
    }
    uVar11 = -1 << (bVar5 & 0x1f) & puVar15[iVar10];
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar10;
      uVar9 = uVar9 + 0x20;
      iVar10 = iVar10 + 1;
      uVar8 = local_d0;
      if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14daa2f9d;
      uVar11 = puVar15[lVar7 + 1];
    }
    uVar13 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar8 = (int)lVar7 + -1 + uVar9;
    if ((int)local_d0 < (int)uVar8) {
      uVar8 = local_d0;
    }
  }
LAB_14daa2f9d:
  while( true ) {
    plVar2 = local_1e0;
    if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_258);
    }
    if (((TStack_1d8.CurrentBitIndex == uVar8) &&
        (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
       (plVar2 == (longlong *)local_f8)) break;
    local_1a8 = (longlong)TStack_1d8.CurrentBitIndex * 0x10 + *plVar2;
    local_1b0 = local_1a8 + 4;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_198,&local_218,(bool *)&local_1b0);
    TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
  }
  RecomputeAttributes(param_1,(FManagedArrayCollection *)local_218.Value,
                      (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                      local_198);
  local_150 = 0;
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_198);
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8);
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  local_100 = 0;
  if ((void *)local_148._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_148._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdatePointScales @ 14daac730

void __cdecl
FPVCarve::UpdatePointScales
          (FPointFacade *param_1,FPointFacade *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,float param_4,int param_5,float param_6,
          int param_7,float param_8)

{
  TManagedArray<float> **ppTVar1;
  float fVar2;
  TManagedArray<float> *pTVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId34,"PVCarve::UpdatePointScales",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVCarve.cpp"
               ,0x22);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId34);
  }
  ppTVar1 = &(param_2->PointScale).ConstAttributeArray;
  if ((((param_2->PointScale).ConstAttributeArray == (TManagedArray<float> *)0x0) || (param_5 < 0))
     || (iVar8 = (**(code **)(*(longlong *)*ppTVar1 + 0x60))(), iVar8 <= param_5)) {
    pfVar12 = &DefaultPScale;
  }
  else {
    pfVar12 = TManagedArrayAccessor<float>::operator[](&param_2->PointScale,param_5);
  }
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  fVar2 = *pfVar12;
  uVar14 = 0;
  fVar17 = ((param_6 * param_8) / param_8) * param_4;
  if (-1 < param_7) {
    lVar13 = 0;
    fVar18 = param_8 - fVar2;
    fVar19 = (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    do {
      uVar9 = 0;
      if ((int)uVar14 < param_3->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = *ppTVar1;
      iVar8 = *(int *)((param_3->AllocatorInstance).Data + lVar13);
      if (((pTVar3 == (TManagedArray<float> *)0x0) || (iVar8 < 0)) ||
         (iVar10 = (**(code **)(*(longlong *)pTVar3 + 0x60))(), iVar10 <= iVar8)) {
        pfVar12 = &DefaultPScale;
      }
      else {
        pfVar12 = TManagedArrayAccessor<float>::operator[](&param_2->PointScale,iVar8);
      }
      if (fVar5 < fVar19) {
        fVar16 = (*pfVar12 - fVar2) / fVar18;
      }
      else {
        fVar16 = fVar6;
        if (*pfVar12 < param_8) {
          fVar16 = 0.0;
        }
      }
      if (fVar6 <= fVar16) {
        fVar16 = fVar6;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      if ((((param_1->PointScale).AttributeArray == (TManagedArray<float> *)0x0) ||
          ((param_1->PointScale).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributeArray!=nullptr && !IsConst()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x74,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ((param_1->PointScale).AttributeArray)->field_0x8 = 1;
      pTVar3 = (param_1->PointScale).AttributeArray;
      uVar9 = 0;
      if ((int)uVar14 < param_3->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = *(uint *)((param_3->AllocatorInstance).Data + lVar13);
      uVar11 = 0;
      if ((int)uVar9 < *(int *)&pTVar3->field_0x18) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 4;
      *(float *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar9 * 4) =
           fVar16 * (param_6 * param_8 - fVar17) + fVar17;
    } while ((int)uVar14 <= param_7);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

