// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 2

// FLODGroupIIHelper @ 14e766000

FLODGroupIIHelper * __thiscall
`UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups'::__l5::
FLODGroupIIHelper::FLODGroupIIHelper(void *this,FLODGroupIIHelper *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  TSet<TTuple<FString,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  ::operator=(this,(TSet<TTuple<FString,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                    *)param_1);
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x58);
  *(UInterchangeStaticMeshFactoryNode **)((longlong)this + 0x50) =
       param_1->LODGroupStaticMeshFactoryNode;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->DisabledIdenticals).ArrayNum;
  _Src = (param_1->DisabledIdenticals).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x60) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 100) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 100));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// DataEquals @ 14e79df60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups'::__l5::
FLODGroupIIHelper::DataEquals(void *this,FLODGroupIIHelper *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  bool bVar19;
  undefined1 uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  TTransform<double> *pTVar24;
  int iVar25;
  longlong lVar26;
  FLODGroupIIHelper *pFVar27;
  wchar_t *pwVar28;
  int iVar29;
  FString *pFVar30;
  uint uVar31;
  uint uVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  int iVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  
  iVar29 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if (iVar29 != *(int *)&(param_1->Meshes).field_0x8 - *(int *)&(param_1->Meshes).field_0x34) {
    return false;
  }
  iVar21 = 0;
  iVar25 = *(int *)((longlong)this + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar22 = 1;
  iVar23 = iVar21;
  iVar34 = iVar21;
  if (iVar25 != 0) {
    pTVar33 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar33 = pTVar1;
    }
    uVar32 = *(uint *)(pTVar33->AllocatorInstance).InlineData;
    while (uVar32 == 0) {
      lVar26 = (longlong)iVar21;
      iVar34 = iVar34 + 0x20;
      iVar21 = iVar21 + 1;
      iVar23 = iVar25;
      if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14e79e01e;
      uVar32 = *(uint *)((pTVar33->AllocatorInstance).InlineData + lVar26 * 4 + 4);
    }
    uVar22 = -uVar32 & uVar32;
    uVar2 = (ulonglong)uVar22 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_res10 = (int)lVar26;
    iVar23 = iVar34 + -1 + local_res10;
    if (iVar25 < iVar23) {
      iVar23 = iVar25;
    }
  }
LAB_14e79e01e:
  uVar32 = *(uint *)((longlong)this + 0x28);
  uVar31 = uVar32 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar22,iVar21);
  TStack_98.CurrentBitIndex = iVar23;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  TStack_98._28_4_ = iVar23;
  TStack_98.BaseBitIndex = iVar34;
  uStack_78 = CONCAT44(uStack_a4,iVar29);
  iVar29 = (int)uVar32 >> 5;
  TStack_98.Array = pTVar1;
  if ((((int)uVar32 < 0) || (iVar25 < (int)uVar32)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  dVar18 = __real_3f1a36e2e0000000;
  uVar17 = _UNK_15061cc8c;
  uVar16 = _UNK_15061cc88;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar22 = *(uint *)((longlong)this + 0x28);
  if (uVar32 != uVar22) {
    pTVar33 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar33 = pTVar1;
    }
    uVar32 = -1 << ((byte)uVar32 & 0x1f) &
             *(uint *)((pTVar33->AllocatorInstance).InlineData + (longlong)iVar29 * 4);
    while (uVar32 == 0) {
      lVar26 = (longlong)iVar29;
      uVar31 = uVar31 + 0x20;
      iVar29 = iVar29 + 1;
      uVar32 = uVar22;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_14e79e130;
      uVar32 = *(uint *)((pTVar33->AllocatorInstance).InlineData + lVar26 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar32 = (int)lVar26 + -1 + uVar31;
    if ((int)uVar22 < (int)uVar32) {
      uVar32 = uVar22;
    }
  }
LAB_14e79e130:
  while( true ) {
    if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_98.CurrentBitIndex == uVar32) && (TStack_98.Array == pTVar1)) {
      return true;
    }
    pFVar30 = (FString *)(*(longlong *)this + (longlong)TStack_98.CurrentBitIndex * 0x80);
    iVar25 = (pFVar30->Data).ArrayNum;
    iVar29 = iVar25 + -1;
    if (iVar25 == 0) {
      pwVar28 = L"";
      iVar29 = 0;
    }
    else {
      pwVar28 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
    }
    uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar29,pwVar28);
    iVar29 = TSet<TTuple<FString,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                         *)param_1,uVar22,pFVar30);
    if (iVar29 == -1) break;
    pFVar27 = param_1;
    pTVar24 = TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
              ::FindChecked((TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
                             *)param_1,pFVar30);
    dVar9 = (pTVar24->Translation).ZW.m128d_f64[0] - (double)pFVar30[4].Data.AllocatorInstance.Data;
    dVar10 = (pTVar24->Translation).ZW.m128d_f64[1] - *(double *)&pFVar30[4].Data.ArrayNum;
    dVar35 = (pTVar24->Translation).XY.m128d_f64[0] - (double)pFVar30[3].Data.AllocatorInstance.Data
    ;
    dVar37 = (pTVar24->Translation).XY.m128d_f64[1] - *(double *)&pFVar30[3].Data.ArrayNum;
    lVar26 = -(ulonglong)
              (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar17,
                                         SUB84(dVar10,0) & uVar16));
    auVar4._8_4_ = (int)lVar26;
    auVar4._0_8_ = -(ulonglong)
                    (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar15,
                                               SUB84(dVar9,0) & uVar14));
    auVar4._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar22 = movmskpd((int)pFVar27,auVar4);
    lVar26 = -(ulonglong)
              (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar17,
                                         SUB84(dVar37,0) & uVar16));
    auVar11._8_4_ = (int)lVar26;
    auVar11._0_8_ =
         -(ulonglong)
          (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar15,
                                     SUB84(dVar35,0) & uVar14));
    auVar11._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar29 = movmskpd((int)pTVar24,auVar11);
    if ((uVar22 & 0x3fffffff) != 0 || iVar29 != 0) {
      return false;
    }
    dVar35 = (pTVar24->Rotation).ZW.m128d_f64[0];
    dVar37 = (pTVar24->Rotation).ZW.m128d_f64[1];
    dVar39 = (pTVar24->Rotation).XY.m128d_f64[0];
    dVar40 = (pTVar24->Rotation).XY.m128d_f64[1];
    dVar9 = dVar35 - (double)pFVar30[2].Data.AllocatorInstance.Data;
    dVar10 = dVar37 - *(double *)&pFVar30[2].Data.ArrayNum;
    dVar35 = dVar35 + (double)pFVar30[2].Data.AllocatorInstance.Data;
    dVar37 = dVar37 + *(double *)&pFVar30[2].Data.ArrayNum;
    dVar36 = dVar39 - (double)pFVar30[1].Data.AllocatorInstance.Data;
    dVar38 = dVar40 - *(double *)&pFVar30[1].Data.ArrayNum;
    dVar39 = dVar39 + (double)pFVar30[1].Data.AllocatorInstance.Data;
    dVar40 = dVar40 + *(double *)&pFVar30[1].Data.ArrayNum;
    lVar26 = -(ulonglong)
              (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar17,
                                         SUB84(dVar10,0) & uVar16));
    auVar5._8_4_ = (int)lVar26;
    auVar5._0_8_ = -(ulonglong)
                    (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar15,
                                               SUB84(dVar9,0) & uVar14));
    auVar5._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar25 = movmskpd(0,auVar5);
    lVar26 = -(ulonglong)
              (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar17,
                                         SUB84(dVar38,0) & uVar16));
    auVar6._8_4_ = (int)lVar26;
    auVar6._0_8_ = -(ulonglong)
                    (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar15,
                                               SUB84(dVar36,0) & uVar14));
    auVar6._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar22 = movmskpd(iVar29,auVar6);
    uVar31 = iVar25 << 2 | uVar22;
    if (uVar31 != 0) {
      lVar26 = -(ulonglong)
                (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar17,
                                           SUB84(dVar37,0) & uVar16));
      auVar7._8_4_ = (int)lVar26;
      auVar7._0_8_ = -(ulonglong)
                      (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar15,
                                                 SUB84(dVar35,0) & uVar14));
      auVar7._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar31 = movmskpd(uVar31,auVar7);
      lVar26 = -(ulonglong)
                (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar17,
                                           SUB84(dVar40,0) & uVar16));
      auVar12._8_4_ = (int)lVar26;
      auVar12._0_8_ =
           -(ulonglong)
            (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar15,
                                       SUB84(dVar39,0) & uVar14));
      auVar12._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar22 = movmskpd(uVar22,auVar12);
      if ((uVar31 & 0x3fffffff) != 0 || uVar22 != 0) {
        return false;
      }
    }
    dVar9 = (pTVar24->Scale3D).ZW.m128d_f64[0] - (double)pFVar30[6].Data.AllocatorInstance.Data;
    dVar10 = (pTVar24->Scale3D).ZW.m128d_f64[1] - *(double *)&pFVar30[6].Data.ArrayNum;
    dVar35 = (pTVar24->Scale3D).XY.m128d_f64[0] - (double)pFVar30[5].Data.AllocatorInstance.Data;
    dVar37 = (pTVar24->Scale3D).XY.m128d_f64[1] - *(double *)&pFVar30[5].Data.ArrayNum;
    lVar26 = -(ulonglong)
              (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar17,
                                         SUB84(dVar10,0) & uVar16));
    auVar8._8_4_ = (int)lVar26;
    auVar8._0_8_ = -(ulonglong)
                    (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar15,
                                               SUB84(dVar9,0) & uVar14));
    auVar8._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar31 = movmskpd(0,auVar8);
    lVar26 = -(ulonglong)
              (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar17,
                                         SUB84(dVar37,0) & uVar16));
    auVar13._8_4_ = (int)lVar26;
    auVar13._0_8_ =
         -(ulonglong)
          (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar15,
                                     SUB84(dVar35,0) & uVar14));
    auVar13._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar29 = movmskpd(uVar22,auVar13);
    if ((uVar31 & 0x3fffffff) != 0 || iVar29 != 0) {
      return false;
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  return false;
}

