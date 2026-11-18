// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 14

// StaticClass @ 14ddbb860

UClass * __cdecl UMovieGraphImageSequenceOutputNode_MultiLayerEXR::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_MultiLayerEXR.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",
               L"MovieGraphImageSequenceOutputNode_MultiLayerEXR",
               &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_MultiLayerEXR.
                InnerSingleton,StaticRegisterNativesUMovieGraphImageSequenceOutputNode_MultiLayerEXR
               ,0x248,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphImageSequenceOutputNode_MultiLayerEXR>,
               InternalVTableHelperCtorCaller<UMovieGraphImageSequenceOutputNode_MultiLayerEXR>,
               local_res8,UMovieGraphImageSequenceOutputNode_EXR::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_MultiLayerEXR.InnerSingleton;
}

// UMovieGraphImageSequenceOutputNode_MultiLayerEXR @ 14ddc6e10

UMovieGraphImageSequenceOutputNode_MultiLayerEXR * __thiscall
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::UMovieGraphImageSequenceOutputNode_MultiLayerEXR
          (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *this,FVTableHelper *param_1)

{
  UMovieGraphImageSequenceOutputNode_EXR::UMovieGraphImageSequenceOutputNode_EXR
            ((UMovieGraphImageSequenceOutputNode_EXR *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphImageSequenceOutputNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphEvaluationNodeInjector__;
  this->bMultipart = true;
  ::FString::FString(&this->BurnInLayerNameFormat,L"BurnIn");
  return this;
}

// ~UMovieGraphImageSequenceOutputNode_MultiLayerEXR @ 14ddcb980

void __thiscall
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::~UMovieGraphImageSequenceOutputNode_MultiLayerEXR
          (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphImageSequenceOutputNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphEvaluationNodeInjector__;
  pFVar1 = (this->BurnInLayerNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphImageSequenceOutputNode_EXR::~UMovieGraphImageSequenceOutputNode_EXR
            ((UMovieGraphImageSequenceOutputNode_EXR *)this);
  return;
}

// operator() @ 14ddcce50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UMovieGraphImageSequenceOutputNode_MultiLayerEXR::GetFilenameToEXROutputConfigMappings'::__l2::
<lambda_1>::operator()(void *this,FMovieGraphResolveArgs *param_1,FMovieGraphResolveArgs *param_2)

{
  undefined1 *puVar1;
  FString *pFVar2;
  FString *pFVar3;
  ulonglong uVar4;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar5
  ;
  int iVar6;
  uint uVar7;
  void *_Src;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar10;
  bool bVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  FMovieGraphResolveArgs *pFVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 auStackY_268 [32];
  undefined1 local_228;
  undefined1 local_227 [7];
  FString local_220;
  FString local_210;
  FString local_200;
  int local_1f0;
  ulonglong local_1e8;
  FMovieGraphResolveArgs *local_1e0;
  FMovieGraphResolveArgs *local_1d8;
  int iStack_1d0;
  uint uStack_1cc;
  undefined1 *local_1c8;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  undefined1 local_1a4 [12];
  FString *local_198;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_190;
  int iStack_188;
  undefined4 uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  FMovieGraphResolveArgs *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  longlong local_100;
  FStringFormatArg *local_f8;
  FString *local_f0;
  FString *local_e8;
  FStringFormatArg local_e0;
  undefined4 local_a4;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  iStack_1d0 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_1e8 = 1;
  puVar1 = &(param_1->FilenameArguments).field_0x10;
  local_1b8 = 0;
  iVar6 = *(int *)&(param_1->FilenameArguments).field_0x28;
  uStack_1cc = 1;
  iStack_1bc = 0;
  if (iVar6 != 0) {
    puVar20 = *(uint **)&(param_1->FilenameArguments).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uStack_1cc = *puVar20;
    local_1b8 = 0;
    while (uStack_1cc == 0) {
      lVar12 = (longlong)iStack_1d0;
      iStack_1d0 = iStack_1d0 + 1;
      local_1b8 = local_1b8 + 0x20;
      uStack_1cc = 1;
      iStack_1bc = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d0) goto LAB_14ddccf4f;
      uStack_1cc = puVar20[lVar12 + 1];
    }
    uStack_1cc = ~(uStack_1cc - 1) & uStack_1cc;
    uVar4 = (ulonglong)uStack_1cc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1f0 = (int)lVar12;
    iStack_1bc = local_1b8 + -1 + local_1f0;
    if (iVar6 < iStack_1bc) {
      iStack_1bc = iVar6;
    }
  }
LAB_14ddccf4f:
  uStack_1c0 = 0xffffffff;
  iStack_1b0 = *(int *)&(param_1->FilenameArguments).field_0x8 -
               *(int *)&(param_1->FilenameArguments).field_0x34;
  TStack_158._padding_ = CONCAT44(uStack_1cc,iStack_1d0);
  TStack_158.CurrentBitIndex = iStack_1bc;
  TStack_158.UnvisitedBitMask = 0xffffffff;
  TStack_158._28_4_ = local_a4;
  TStack_158.BaseBitIndex = local_1b8;
  uStack_138 = CONCAT44(uStack_1ac,iStack_1b0);
  uVar17 = *(uint *)&(param_1->FilenameArguments).field_0x28;
  iVar14 = (int)uVar17 >> 5;
  uVar16 = uVar17 & 0xffffffe0;
  local_1e0 = param_2;
  local_1d8 = param_1;
  local_1c8 = puVar1;
  local_160 = param_1;
  TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar6 < (int)uVar17)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar7 = *(uint *)&(param_1->FilenameArguments).field_0x28;
  if (uVar17 != uVar7) {
    puVar19 = *(undefined1 **)&(param_1->FilenameArguments).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar14;
      iVar14 = iVar14 + 1;
      uVar16 = uVar16 + 0x20;
      uVar17 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ddcd051;
      uVar17 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1a8 = (int)lVar12;
    uVar17 = local_1a8 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar17) {
      uVar17 = uVar7;
    }
  }
LAB_14ddcd051:
  while( true ) {
    pFVar18 = local_160;
    if (*(int *)&(local_160->FilenameArguments).field_0x8 -
        *(int *)&(local_160->FilenameArguments).field_0x34 != (int)uStack_138) {
      local_228 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_228);
    }
    if (((TStack_158.CurrentBitIndex == uVar17) &&
        (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pFVar18 == param_1)) break;
    lVar12 = *(longlong *)&pFVar18->FilenameArguments + (longlong)TStack_158.CurrentBitIndex * 0x28;
    local_198 = &local_220;
    local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.Data.ArrayNum = *(int *)(lVar12 + 0x18);
    lVar15 = (longlong)local_220.Data.ArrayNum;
    _Src = *(void **)(lVar12 + 0x10);
    if (local_220.Data.ArrayNum == 0) {
      local_220.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_220.Data.ArrayNum,0,(ForAnyElementType *)&local_220,
                 local_220.Data.ArrayNum,&local_220.Data.ArrayMax);
      memcpy(local_220.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_e0,&local_220);
    local_f8 = &local_e0;
    local_100 = lVar12;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FStringFormatArg_&&>_>
              (&local_98,(TPairInitializer<FString_const_&,FStringFormatArg_&&> *)local_1a4,
               (bool *)&local_100);
    if (local_e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.StringValue.Data.AllocatorInstance.Data);
    }
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  }
  pTVar5 = &param_1->FileMetadata;
  iStack_188 = 0;
  puVar1 = &(param_1->FileMetadata).field_0x10;
  local_170 = 0;
  iVar6 = *(int *)&(param_1->FileMetadata).field_0x28;
  iStack_174 = 0;
  if (iVar6 != 0) {
    puVar20 = *(uint **)&(param_1->FileMetadata).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_188;
      iStack_188 = iStack_188 + 1;
      local_170 = local_170 + 0x20;
      iStack_174 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_14ddcd1e0;
      uVar17 = puVar20[lVar12 + 1];
    }
    local_1e8 = (ulonglong)(~(uVar17 - 1) & uVar17);
    uVar4 = local_1e8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1a4._4_4_ = (undefined4)lVar12;
    iStack_174 = local_170 + -1 + local_1a4._4_4_;
    if (iVar6 < iStack_174) {
      iStack_174 = iVar6;
    }
  }
LAB_14ddcd1e0:
  uStack_184 = (undefined4)local_1e8;
  uStack_178 = 0xffffffff;
  iStack_16c = iStack_1bc;
  iStack_168 = *(int *)&(param_1->FileMetadata).field_0x8 -
               *(int *)&(param_1->FileMetadata).field_0x34;
  TStack_128._padding_ = CONCAT44(uStack_184,iStack_188);
  TStack_128.CurrentBitIndex = iStack_174;
  TStack_128.UnvisitedBitMask = 0xffffffff;
  TStack_128._28_4_ = iStack_1bc;
  TStack_128.BaseBitIndex = local_170;
  uStack_108 = CONCAT44(uStack_164,iStack_168);
  uVar17 = *(uint *)&(param_1->FileMetadata).field_0x28;
  iVar14 = (int)uVar17 >> 5;
  uVar16 = uVar17 & 0xffffffe0;
  local_190 = pTVar5;
  local_180 = puVar1;
  local_130 = pTVar5;
  TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar6 < (int)uVar17)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar7 = *(uint *)&(param_1->FileMetadata).field_0x28;
  pFVar18 = local_1e0;
  if (uVar17 != uVar7) {
    puVar19 = *(undefined1 **)&(param_1->FileMetadata).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar14;
      iVar14 = iVar14 + 1;
      uVar16 = uVar16 + 0x20;
      uVar17 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ddcd2e0;
      uVar17 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar17 = (int)lVar12 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar17) {
      uVar17 = uVar7;
    }
  }
LAB_14ddcd2e0:
  while( true ) {
    pTVar10 = local_130;
    if (*(int *)&local_130->field_0x8 - *(int *)&local_130->field_0x34 != (int)uStack_108) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_227);
    }
    if (((TStack_128.CurrentBitIndex == uVar17) &&
        (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar5)
       ) break;
    pFVar3 = (FString *)(*(longlong *)pTVar10 + (longlong)TStack_128.CurrentBitIndex * 0x28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl
              (&local_210,pwVar13,
               (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                *)&local_98);
    if (pFVar3 != &local_210) {
      pFVar8 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pFVar3->Data).AllocatorInstance.Data = local_210.Data.AllocatorInstance.Data;
      local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = local_210.Data.ArrayNum;
      (pFVar3->Data).ArrayMax = local_210.Data.ArrayMax;
      local_210.Data.ArrayNum = 0;
      local_210.Data.ArrayMax = 0;
    }
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar3 + 1;
    if (pFVar3[1].Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl
              (&local_200,pwVar13,
               (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                *)&local_98);
    if (pFVar2 != &local_200) {
      pFVar8 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pFVar2->Data).AllocatorInstance.Data = local_200.Data.AllocatorInstance.Data;
      local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar3[1].Data.ArrayNum = local_200.Data.ArrayNum;
      pFVar3[1].Data.ArrayMax = local_200.Data.ArrayMax;
      local_200.Data.ArrayNum = 0;
      local_200.Data.ArrayMax = 0;
    }
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    pFVar18 = local_1e0;
    local_f0 = pFVar3;
    local_e8 = pFVar2;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&local_1e0->FileMetadata,
               (TPairInitializer<FString_const_&,FString_const_&> *)(local_1a4 + 8),
               (bool *)&local_f0);
    TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
  }
  if (pFVar18 != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(pFVar18->FilenameArguments).field_0x38,
               (int *)&(pFVar18->FilenameArguments).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->FilenameArguments).field_0x38,
               *(int *)&(param_1->FilenameArguments).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pFVar18,
                (TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// GetBranchRestriction @ 14dddf330

EMovieGraphBranchRestriction __thiscall
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::GetBranchRestriction
          (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *this)

{
  return Globals;
}

// GetFilenameToEXROutputConfigMappings @ 14dddfff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::GetFilenameToEXROutputConfigMappings
          (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *this,
          UMovieGraphImageSequenceOutputNode_MultiLayerEXR *param_1,UMovieGraphPipeline *param_2,
          FMovieGraphOutputMergerFrame *param_3,
          TMap<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>_>
          *param_4)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  FMovieGraphRenderDataIdentifier *pFVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [3];
  int local_1b4;
  FString local_1b0;
  FString local_1a0;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  int local_15c;
  UMovieGraphPipeline *local_158;
  UMovieGraphImageSequenceOutputNode_MultiLayerEXR *local_150;
  UMovieGraphImageSequenceOutputNode_MultiLayerEXR *local_148;
  FString *local_140;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FName *local_108;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_190 = &param_3->ImageOutputData;
  iStack_188 = 0;
  uStack_184 = 1;
  puVar1 = &(param_3->ImageOutputData).field_0x10;
  local_170 = 0;
  iVar9 = *(int *)&(param_3->ImageOutputData).field_0x28;
  iStack_174 = 0;
  if (iVar9 != 0) {
    puVar16 = *(uint **)&(param_3->ImageOutputData).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    local_170 = 0;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_188;
      iStack_188 = iStack_188 + 1;
      local_170 = local_170 + 0x20;
      iStack_174 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_14dde00be;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_184 = ~(uVar14 - 1) & uVar14;
    uVar3 = (ulonglong)uStack_184 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_160 = (int)lVar10;
    iStack_174 = local_170 + -1 + local_160;
    if (iVar9 < iStack_174) {
      iStack_174 = iVar9;
    }
  }
LAB_14dde00be:
  uStack_178 = 0xffffffff;
  iStack_168 = *(int *)&(param_3->ImageOutputData).field_0x8 -
               *(int *)&(param_3->ImageOutputData).field_0x34;
  TStack_130._padding_ = CONCAT44(uStack_184,iStack_188);
  TStack_130.CurrentBitIndex = iStack_174;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  TStack_130._28_4_ = iStack_174;
  TStack_130.BaseBitIndex = local_170;
  uStack_110 = CONCAT44(uStack_164,iStack_168);
  uVar14 = *(uint *)&(param_3->ImageOutputData).field_0x28;
  iVar11 = (int)uVar14 >> 5;
  uVar12 = uVar14 & 0xffffffe0;
  local_180 = puVar1;
  iStack_16c = iStack_174;
  local_158 = param_2;
  local_150 = param_1;
  local_148 = this;
  local_138 = local_190;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar9 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_3->ImageOutputData).field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&(param_3->ImageOutputData).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      iVar11 = iVar11 + 1;
      uVar12 = uVar12 + 0x20;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14dde01d0;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_15c = (int)lVar10;
    uVar14 = local_15c + -1 + uVar12;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14dde01d0:
  while( true ) {
    pTVar7 = local_138;
    if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    if (((TStack_130.CurrentBitIndex == uVar14) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar7 == &param_3->ImageOutputData)) {
      return;
    }
    pFVar13 = (FMovieGraphRenderDataIdentifier *)
              ((longlong)TStack_130.CurrentBitIndex * 0x58 + *(longlong *)pTVar7);
    local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.Data.ArrayNum = 0;
    local_1b0.Data.ArrayMax = 0;
    local_f8._0_8_ = (FScriptContainerElement *)0x0;
    local_f8._8_8_ = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_cc = 0x80;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_8_ = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    ResolveOutputFilename
              (local_148,&local_1a0,local_150,local_158,param_3,pFVar13,
               (FMovieGraphResolveArgs *)local_f8,&local_1b0);
    iVar9 = local_1a0.Data.ArrayNum + -1;
    FVar6.Data = local_1a0.Data.AllocatorInstance.Data;
    if (local_1a0.Data.ArrayNum == 0) {
      iVar9 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar6.Data);
    iVar9 = TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
                        *)param_4,uVar12,&local_1a0);
    if ((iVar9 == -1) || (lVar10 = (longlong)iVar9 * 0xe0 + *(longlong *)param_4, lVar10 == 0)) {
      local_140 = &local_1a0;
      TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                ((TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
                  *)param_4,(uint)&local_1b4,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar12,
                 (bool *)&local_140);
      lVar10 = (longlong)local_1b4 * 0xe0 + *(longlong *)param_4;
    }
    if (((*(FMovieGraphRenderDataIdentifier **)(lVar10 + 0x10) <= pFVar13) &&
        (pFVar13 < *(FMovieGraphRenderDataIdentifier **)(lVar10 + 0x10) + *(int *)(lVar10 + 0x1c)))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) break;
    iVar9 = *(int *)(lVar10 + 0x18);
    if (iVar9 == *(int *)(lVar10 + 0x1c)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,(ForAnyElementType *)(lVar10 + 0x10),(int *)(lVar10 + 0x1c));
    }
    *(int *)(lVar10 + 0x18) = iVar9 + 1;
    pFVar2 = (FName *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar9 * 0x48);
    *pFVar2 = pFVar13->RootBranchName;
    local_108 = pFVar2;
    ::FString::FString((FString *)(pFVar2 + 1),&pFVar13->LayerName);
    ::FString::FString((FString *)(pFVar2 + 3),&pFVar13->RendererName);
    ::FString::FString((FString *)(pFVar2 + 5),&pFVar13->SubResourceName);
    ::FString::FString((FString *)(pFVar2 + 7),&pFVar13->CameraName);
    FVar6.Data = local_1b0.Data.AllocatorInstance.Data;
    iVar9 = local_1b0.Data.ArrayNum + -1;
    if (local_1b0.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    ::FString::AssignRange
              ((FString *)(lVar10 + 0xc0),(wchar_t *)local_1b0.Data.AllocatorInstance.Data,iVar9);
    iVar9 = *(int *)((longlong)pFVar13[1].RootBranchName + 8);
    if (iVar9 < *(int *)(lVar10 + 0xd0)) {
      iVar9 = *(int *)(lVar10 + 0xd0);
    }
    *(int *)(lVar10 + 0xd0) = iVar9;
    iVar9 = (int)((ulonglong)*(undefined8 *)((longlong)pFVar13[1].RootBranchName + 8) >> 0x20);
    if (iVar9 < *(int *)(lVar10 + 0xd4)) {
      iVar9 = *(int *)(lVar10 + 0xd4);
    }
    *(int *)(lVar10 + 0xd4) = iVar9;
    `UMovieGraphImageSequenceOutputNode_MultiLayerEXR::GetFilenameToEXROutputConfigMappings'::__l2::
    <lambda_1>::operator()
              (local_1b7,(FMovieGraphResolveArgs *)local_f8,
               (FMovieGraphResolveArgs *)(lVar10 + 0x20));
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a8,0,local_a8._8_4_);
    iVar9 = SUB84(local_a8._8_8_,4);
    local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
    if (iVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
    }
    local_78 = 0xffffffff;
    local_74 = 0;
    local_80 = 0;
    if (0x80 < local_7c) {
      local_7c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    local_b0 = 0;
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_f8,0,local_f8._8_4_);
    iVar9 = SUB84(local_f8._8_8_,4);
    local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
    if (iVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
    }
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_d0 = 0;
    if (0x80 < local_cc) {
      local_cc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f8._0_8_);
    }
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// GetPrivateStaticClass @ 14dde3960

UClass * __cdecl UMovieGraphImageSequenceOutputNode_MultiLayerEXR::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_MultiLayerEXR.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",
               L"MovieGraphImageSequenceOutputNode_MultiLayerEXR",
               &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_MultiLayerEXR.
                InnerSingleton,StaticRegisterNativesUMovieGraphImageSequenceOutputNode_MultiLayerEXR
               ,0x248,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphImageSequenceOutputNode_MultiLayerEXR>,
               InternalVTableHelperCtorCaller<UMovieGraphImageSequenceOutputNode_MultiLayerEXR>,
               local_res8,UMovieGraphImageSequenceOutputNode_EXR::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_MultiLayerEXR.InnerSingleton;
}

// InjectNodesPostEvaluation @ 14dde7530

void __thiscall
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::InjectNodesPostEvaluation
          (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *this,FName *param_1,
          UMovieGraphEvaluatedConfig *param_2,
          TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieGraphOutputBurnInNode *pUVar6;
  int iVar7;
  UMovieGraphOutputBurnInNode *local_38;
  FSoftObjectPath local_30;
  
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    pUVar6 = NewObject<UMovieGraphOutputBurnInNode>((UObject *)param_2);
    *(byte *)&pUVar6->_padding_ = (byte)pUVar6->_padding_ | 1;
    *(byte *)&pUVar6->_padding_ = (byte)pUVar6->_padding_ | 1;
    pUVar6->bOverride_OutputName = '\x01';
    pUVar6->bOverride_LayerNameFormat = '\x01';
    pUVar6->bOverride_OutputRestriction = '\x01';
    pUVar6->bOverride_FileNameFormat = '\x01';
    ::FString::operator=(&pUVar6->OutputName,L"MULTI_EXR");
    iVar5 = (int)this->_padding_;
    iVar7 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange(&pUVar6->FileNameFormat,(wchar_t *)this->_padding_,iVar7);
    local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_30.AssetPath.PackageName.Number = 0;
    local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_30.AssetPath.AssetName.Number = 0;
    local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.SubPathString.Data.ArrayNum = 0;
    local_30.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_30,(UObject *)this[-1]._padding_);
    FSoftClassPath::operator=(&pUVar6->OutputRestriction,(FSoftClassPath *)&local_30);
    if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)((longlong)&pUVar6->_padding_ + 1) = 0;
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)&pUVar6->_padding_,(FSoftObjectPath *)&this->_padding_);
    iVar5 = (int)this->_padding_;
    iVar7 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange(&pUVar6->LayerNameFormat,(wchar_t *)this->_padding_,iVar7);
    pFVar2 = (param_3->AllocatorInstance).Data;
    local_38 = pUVar6;
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)param_3->ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_3->ArrayNum;
    if (iVar5 == param_3->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar5 + 1;
    *(UMovieGraphOutputBurnInNode **)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) =
         local_38;
  }
  return;
}

// OnReceiveImageDataImpl @ 14ddecb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ddedba6) */
/* WARNING: Removing unreachable block (ram,0x00014ddedb71) */
/* WARNING: Removing unreachable block (ram,0x00014ddedbbc) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::OnReceiveImageDataImpl
          (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *this,UMovieGraphPipeline *param_1,
          FMovieGraphOutputMergerFrame *param_2,
          TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
          *param_3)

{
  int *piVar1;
  FString *pFVar2;
  void *pvVar3;
  IImagePixelDataPayload *pIVar4;
  FImagePixelData *pFVar5;
  code *pcVar6;
  FName FVar7;
  undefined8 uVar8;
  UMovieGraphPipeline *pUVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  UMovieGraphEvaluatedConfig *this_00;
  UClass *pUVar14;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar15;
  char *pcVar16;
  UWorld *pUVar17;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar18;
  TFuture<bool> *pTVar19;
  byte bVar20;
  FScriptContainerElement *pFVar21;
  ulonglong uVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  FMovieGraphRenderDataIdentifier *pFVar25;
  IImagePixelDataPayload IVar26;
  longlong lVar27;
  undefined8 uVar28;
  char cVar29;
  FMovieGraphOutputMergerFrame *pFVar30;
  FMovieGraphRenderDataIdentifier *pFVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  IImagePixelDataPayload IVar34;
  UMovieGraphImageSequenceOutputNode_MultiLayerEXR *pUVar35;
  uint uVar36;
  undefined8 *puVar37;
  undefined1 auStackY_488 [32];
  undefined1 local_438;
  char local_437;
  ForAnyElementType local_430;
  undefined8 local_428;
  uint local_420;
  char local_41c;
  undefined1 local_41b;
  undefined1 local_41a;
  undefined1 local_419;
  undefined1 local_418 [8];
  FString local_410;
  int local_400;
  FMovieGraphOutputMergerFrame *local_3f8;
  UMovieGraphImageSequenceOutputNode_MultiLayerEXR *local_3f0;
  UMovieGraphImageSequenceOutputNode_MultiLayerEXR *local_3e8;
  FString local_3e0;
  int local_3d0;
  undefined1 local_3c8 [16];
  undefined8 local_3b8;
  undefined8 *local_3b0;
  ForAnyElementType local_3a8;
  int local_3a0;
  int local_39c;
  UMovieGraphPipeline *local_398;
  undefined8 local_390;
  uint local_388;
  undefined8 local_380;
  FMovieGraphOutputFutureData local_378;
  FString local_2f8;
  undefined8 local_2e8;
  FEXRImageWriteTask *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_290;
  undefined8 uStack_270;
  int local_268;
  undefined4 uStack_264;
  FSoftObjectPath local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_240;
  UObject *local_220;
  FString *local_218;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_210;
  FMovieGraphRenderDataValidationInfo local_200;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  longlong lStack_1b0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a8;
  uint uStack_1a0;
  int iStack_19c;
  ulonglong uStack_198;
  int local_190;
  undefined4 uStack_18c;
  FString local_188;
  undefined1 local_178 [8];
  TReferenceControllerBase<1> *local_170;
  longlong *local_168;
  longlong lStack_160;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  uint uStack_150;
  int iStack_14c;
  ulonglong local_148;
  undefined8 uStack_140;
  undefined1 local_138 [24];
  undefined8 uStack_120;
  void *local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  ForElementType<FSetElementId> FStack_100;
  ulonglong uStack_f0;
  undefined1 local_e8 [32];
  undefined8 local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_420 = 0;
  local_3f8 = param_2;
  local_3f0 = this;
  local_398 = param_1;
  if ((param_2 == (FMovieGraphOutputMergerFrame *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRawFrameData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                          ,0x2bf,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
            ::operator->(&param_2->EvaluatedConfig);
  FVar7 = UMovieGraphNode::GlobalsPinName;
  pUVar14 = StaticClass();
  UMovieGraphEvaluatedConfig::GetSettingsForBranch(this_00,&local_210,pUVar14,FVar7,false,true);
  if (local_210.ArrayNum < 1) {
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
  }
  else {
    pUVar35 = *(UMovieGraphImageSequenceOutputNode_MultiLayerEXR **)local_210.AllocatorInstance.Data
    ;
    local_3e8 = pUVar35;
    FMemory::Free(local_210.AllocatorInstance.Data);
    if (pUVar35 != (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *)0x0) {
      pUVar14 = StaticClass();
      iVar12 = (int)pUVar14->_padding_;
      if ((iVar12 <= *(int *)(pUVar35->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar35->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
          &pUVar14->_padding_)) goto LAB_14ddecccb;
    }
  }
  local_3e8 = (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ParentNode",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                      ,0x2c5,L"Multi-Layer EXR should not exist without a parent node in the graph."
                     );
  pUVar35 = (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *)0x0;
  if (bVar11) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14ddecccb:
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  GetFilenameToEXROutputConfigMappings
            (this,pUVar35,param_1,param_2,
             (TMap<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>_>
              *)local_e8);
  local_240._padding_._0_4_ = 0;
  local_240._padding_._4_4_ = 1;
  local_240.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  local_240.UnvisitedBitMask = 0xffffffff;
  local_240.CurrentBitIndex = 0;
  local_240.BaseBitIndex = 0;
  if (local_c0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_240);
  }
  iVar12 = local_c0;
  local_1e8 = (longlong *)local_e8;
  TStack_1e0._padding_ = CONCAT44(local_240._padding_._4_4_,(undefined4)local_240._padding_);
  TStack_1e0.CurrentBitIndex = local_240.CurrentBitIndex;
  TStack_1e0.UnvisitedBitMask = local_240.UnvisitedBitMask;
  uStack_270._4_4_ = local_240._28_4_;
  uStack_270._0_4_ = local_240.BaseBitIndex;
  local_268 = local_e8._8_4_ - local_b4;
  TStack_1e0.Array = local_240.Array;
  uStack_1c0 = CONCAT44(uStack_264,local_268);
  bVar20 = (byte)local_c0 & 0x1f;
  local_290._padding_ = CONCAT44(1 << bVar20,local_c0 >> 5);
  local_290.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  local_290.CurrentBitIndex = local_c0;
  local_290.UnvisitedBitMask = -1 << bVar20;
  local_290._24_8_ = CONCAT44(local_240.CurrentBitIndex,local_c0) & 0xffffffffffffffe0;
  TStack_1e0._24_8_ = uStack_270;
  if ((local_c0 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (iVar12 != local_c0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_290);
  }
  local_1b8 = (longlong *)local_e8;
  lStack_1b0 = local_290._padding_;
  pTStack_1a8 = local_290.Array;
  uStack_1a0 = local_290.UnvisitedBitMask;
  iStack_19c = local_290.CurrentBitIndex;
  uStack_198 = local_290._24_8_;
  local_190 = local_e8._8_4_ - local_b4;
  lStack_160 = local_290._padding_;
  local_158 = local_290.Array;
  uStack_150 = local_290.UnvisitedBitMask;
  iStack_14c = local_290.CurrentBitIndex;
  uStack_140 = CONCAT44(uStack_18c,local_190);
  local_148 = local_290._24_8_;
  local_168 = local_1b8;
  do {
    plVar10 = local_1e8;
    if ((int)local_1e8[1] - *(int *)((longlong)local_1e8 + 0x34) != (int)uStack_1c0) {
      local_41b = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_41b);
    }
    if (((TStack_1e0.CurrentBitIndex == iStack_14c) && (TStack_1e0.Array == local_158)) &&
       (plVar10 == local_168)) {
      local_a0 = 0;
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      return;
    }
    puVar37 = (undefined8 *)((longlong)TStack_1e0.CurrentBitIndex * 0xe0 + *plVar10);
    local_437 = pUVar35->bMultipart;
    local_3b0 = puVar37;
    if ((bool)local_437 == false) {
      pFVar31 = (FMovieGraphRenderDataIdentifier *)puVar37[2];
      iVar12 = *(int *)(puVar37 + 3);
      pFVar25 = pFVar31 + iVar12;
      cVar29 = '\n';
      while( true ) {
        while( true ) {
          if (*(int *)(puVar37 + 3) != iVar12) {
            local_41a = 0;
            `TCheckedPointerIterator<FMovieGraphRenderDataIdentifier,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_41a);
          }
          if (pFVar31 == pFVar25) goto LAB_14dded26e;
          pTVar15 = TMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
                    ::FindChecked((TMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
                                   *)&local_3f8->ImageOutputData,pFVar31);
          if ((pTVar15->Ptr == (FImagePixelData *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ImageData.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                                  ,0x2db,
                                  L"Unexpected empty image data: incorrectly moved or its production failed?"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcVar16 = (char *)((longlong)&pUVar35->_padding_ + 2);
          if ((pTVar15->Ptr->Payload).Object[0x31].field_0x5 == '\0') {
            pcVar16 = (char *)((longlong)&pUVar35->_padding_ + 1);
          }
          if (cVar29 != '\n') break;
          pFVar31 = pFVar31 + 1;
          cVar29 = *pcVar16;
        }
        if (*pcVar16 != cVar29) break;
        pFVar31 = pFVar31 + 1;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        atexit(`UMovieGraphImageSequenceOutputNode_MultiLayerEXR::OnReceiveImageDataImpl'::__l45::
               _dynamic_atexit_destructor_for____LoggedMessages__ForceMultiPart__);
        _Init_thread_footer(&::_TSS2);
      }
      pUVar17 = MoviePipeline::FindCurrentWorld();
      if (__LastRenderWorld__ForceMultiPart != pUVar17) {
        __LastRenderWorld__ForceMultiPart = MoviePipeline::FindCurrentWorld();
        DestructItems<FString,int>
                  ((FString *)__LoggedMessages__ForceMultiPart.AllocatorInstance.Data,
                   __LoggedMessages__ForceMultiPart.ArrayNum);
        __LoggedMessages__ForceMultiPart.ArrayNum = 0;
        if (__LoggedMessages__ForceMultiPart.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&__LoggedMessages__ForceMultiPart.AllocatorInstance,0,
                     &__LoggedMessages__ForceMultiPart.ArrayMax);
        }
      }
      ::FString::PrintfImpl
                (&local_3e0,
                 L"An EXR is being generated that containins layers with differing compression types (can happen especially when generating Object IDs or using PPMs). Forcing EXR multipart ON."
                );
      local_420 = local_420 | 0x10;
      pFVar32 = __LoggedMessages__ForceMultiPart.AllocatorInstance.Data +
                (longlong)__LoggedMessages__ForceMultiPart.ArrayNum * 0x10;
      iVar12 = local_3e0.Data.ArrayNum;
      for (FVar24 = __LoggedMessages__ForceMultiPart.AllocatorInstance; FVar24.Data != pFVar32;
          FVar24.Data = FVar24.Data + 0x10) {
        iVar13 = *(int *)(FVar24.Data + 8);
        if (iVar13 == iVar12) {
          if (iVar13 < 2) goto LAB_14dded248;
          iVar12 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)FVar24.Data,
                              (wchar_t *)local_3e0.Data.AllocatorInstance.Data);
          bVar11 = iVar12 == 0;
          iVar12 = local_3e0.Data.ArrayNum;
        }
        else {
          bVar11 = iVar13 + iVar12 == 1;
        }
        if (bVar11) goto LAB_14dded248;
      }
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      if (((__LoggedMessages__ForceMultiPart.AllocatorInstance.Data <=
            (FScriptContainerElement *)&local_3e0) &&
          ((FScriptContainerElement *)&local_3e0 <
           __LoggedMessages__ForceMultiPart.AllocatorInstance.Data +
           (longlong)__LoggedMessages__ForceMultiPart.ArrayMax * 0x10)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (__LoggedMessages__ForceMultiPart.ArrayNum == __LoggedMessages__ForceMultiPart.ArrayMax) {
        __LoggedMessages__ForceMultiPart.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&__LoggedMessages__ForceMultiPart.AllocatorInstance,
                        &__LoggedMessages__ForceMultiPart.ArrayMax);
      }
      FVar24.Data = local_3e0.Data.AllocatorInstance.Data;
      pFVar25 = (FMovieGraphRenderDataIdentifier *)
                (__LoggedMessages__ForceMultiPart.AllocatorInstance.Data +
                (longlong)__LoggedMessages__ForceMultiPart.ArrayNum * 0x10);
      __LoggedMessages__ForceMultiPart.ArrayNum = __LoggedMessages__ForceMultiPart.ArrayNum + 1;
      (pFVar25->RootBranchName).ComparisonIndex = 0;
      (pFVar25->RootBranchName).Number = 0;
      lVar33 = (longlong)local_3e0.Data.ArrayNum;
      *(int *)&(pFVar25->LayerName).Data.AllocatorInstance.Data = local_3e0.Data.ArrayNum;
      piVar1 = (int *)((longlong)&(pFVar25->LayerName).Data.AllocatorInstance.Data + 4);
      local_3c8._8_8_ = pFVar25;
      if (local_3e0.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_3e0.Data.ArrayNum,0,(ForAnyElementType *)pFVar25,
                   local_3e0.Data.ArrayNum,piVar1);
        memcpy((void *)pFVar25->RootBranchName,FVar24.Data,lVar33 * 2);
      }
LAB_14dded248:
      local_437 = '\x01';
      puVar37 = local_3b0;
      if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
        puVar37 = local_3b0;
      }
    }
LAB_14dded26e:
    bVar11 = *(bool *)((longlong)&pUVar35->_padding_ + 1);
    local_3c8._8_8_ = &local_3a8;
    local_3a8.Data = (FScriptContainerElement *)0x0;
    local_3a0 = *(int *)(puVar37 + 1);
    lVar33 = (longlong)local_3a0;
    pvVar3 = (void *)*puVar37;
    if (local_3a0 == 0) {
      local_39c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3a0,0,&local_3a8,local_3a0,&local_39c);
      memcpy(local_3a8.Data,pvVar3,lVar33 * 2);
    }
    pUVar35 = local_3f0;
    UMovieGraphImageSequenceOutputNode_EXR::CreateImageWriteTask
              ((UMovieGraphImageSequenceOutputNode_EXR *)local_3f0,(FString *)local_3c8,
               (EEXRCompressionFormat)&local_3a8,bVar11);
    pFVar30 = local_3f8;
    UMovieGraphImageSequenceOutputNode_EXR::PrepareTaskGlobalMetadata
              ((UMovieGraphImageSequenceOutputNode_EXR *)pUVar35,
               (FEXRImageWriteTask *)local_3c8._0_8_,local_3f8,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)(puVar37 + 0xe));
    local_400 = 100000;
    local_41c = '\0';
    lVar33 = 0;
    local_3d0 = 0;
    pFVar25 = (FMovieGraphRenderDataIdentifier *)puVar37[2];
    local_388 = *(uint *)(puVar37 + 3);
    uVar22 = (ulonglong)(int)local_388;
    local_3c8._8_8_ = pFVar25 + uVar22;
    while( true ) {
      uVar28 = local_3c8._8_8_;
      if (*(int *)(puVar37 + 3) != (int)uVar22) {
        local_419 = 0;
        `TCheckedPointerIterator<FMovieGraphRenderDataIdentifier,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_419);
      }
      pUVar9 = local_398;
      if (pFVar25 == (FMovieGraphRenderDataIdentifier *)uVar28) break;
      pTVar15 = TMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
                ::FindChecked((TMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
                               *)&pFVar30->ImageOutputData,pFVar25);
      if ((pTVar15->Ptr == (FImagePixelData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ImageData.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                              ,0x2fb,
                              L"Unexpected empty image data: incorrectly moved or its production failed?"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pIVar4 = (pTVar15->Ptr->Payload).Object;
      if (*(int *)(pIVar4 + 0x40) == 0) {
LAB_14dded410:
        bVar11 = false;
      }
      else {
        local_260.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_260.AssetPath.PackageName.Number = 0;
        local_260.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_260.AssetPath.AssetName.Number = 0;
        local_260.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_260.SubPathString.Data.ArrayNum = 0;
        local_260.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_260,(UObject *)pUVar35->_padding_);
        local_420 = local_420 | 1;
        IVar26 = pIVar4[0x3f];
        IVar34 = (IImagePixelDataPayload)
                 ((longlong)IVar26 + (longlong)*(int *)(pIVar4 + 0x40) * 0x20);
        for (; IVar26 != IVar34; IVar26 = (IImagePixelDataPayload)((longlong)IVar26 + 0x20)) {
          bVar11 = FSoftObjectPath::operator==((FSoftObjectPath *)IVar26,&local_260);
          if (bVar11) goto LAB_14dded410;
        }
        bVar11 = true;
      }
      if (((local_420 & 1) != 0) &&
         (local_420 = local_420 & 0xfffffffe,
         local_260.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_260.SubPathString.Data.AllocatorInstance.Data);
      }
      uVar28 = local_3c8._0_8_;
      if (!bVar11) {
        uVar23 = ((FMovieGraphTraversalContext *)(pIVar4 + 3))->ShotIndex;
        lVar33 = (longlong)(int)uVar23;
        iVar12 = *(int *)(pIVar4 + 0x31);
        if (local_400 < *(int *)(pIVar4 + 0x31)) {
          iVar12 = local_400;
        }
        local_400 = iVar12;
        if (local_437 != '\0') {
          if (pIVar4[0x31].field_0x5 == '\0') {
            local_438 = *(undefined1 *)((longlong)&local_3e8->_padding_ + 1);
          }
          else {
            local_438 = *(undefined1 *)((longlong)&local_3e8->_padding_ + 2);
          }
          if (((*(undefined1 **)(local_3c8._0_8_ + 0x20) <= &local_438) &&
              (&local_438 <
               *(undefined1 **)(local_3c8._0_8_ + 0x20) + *(int *)(local_3c8._0_8_ + 0x2c))) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = *(int *)(uVar28 + 0x28);
          if (iVar12 == *(int *)(uVar28 + 0x2c)) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,(ForAnyElementType *)(uVar28 + 0x20),(int *)(uVar28 + 0x2c));
          }
          *(int *)(uVar28 + 0x28) = iVar12 + 1;
          *(undefined1 *)((longlong)iVar12 + *(longlong *)(uVar28 + 0x20)) = local_438;
        }
        local_218 = &local_410;
        local_410.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_410.Data.ArrayNum = *(int *)(pIVar4 + 0x3e);
        lVar27 = (longlong)local_410.Data.ArrayNum;
        IVar26 = pIVar4[0x3d];
        if (local_410.Data.ArrayNum == 0) {
          local_410.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_410.Data.ArrayNum,0,(ForAnyElementType *)&local_410,
                     local_410.Data.ArrayNum,&local_410.Data.ArrayMax);
          memcpy(local_410.Data.AllocatorInstance.Data,(void *)IVar26,lVar27 * 2);
        }
        pUVar9 = local_398;
        if ((local_41c == '\0') || (1 < local_410.Data.ArrayNum)) {
          local_41c = '\x01';
          pFVar30 = local_3f8;
        }
        else {
          uVar36 = 0;
          if ((int)uVar23 < (local_398->ActiveShotList).ArrayNum) {
            uVar36 = ~uVar23 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar30 = local_3f8;
          iVar12 = *(int *)(*(longlong *)
                             ((pUVar9->ActiveShotList).AllocatorInstance.Data + lVar33 * 8) + 0x58);
          UE::MovieGraph::FMovieGraphOutputMergerFrame::GetValidationInfo
                    (local_3f8,&local_200,pFVar25,false);
          local_428._0_4_ = 0;
          local_430.Data = (FScriptContainerElement *)0x0;
          local_428 = 0;
          if (1 < local_200.BranchCount) {
            if (local_200.LayerCount < local_200.BranchCount) {
              pFVar32 = (FScriptContainerElement *)
                        ::FName::ToString(&pFVar25->RootBranchName,&local_188);
              if (((local_430.Data <= pFVar32) &&
                  (pFVar32 < local_430.Data + (longlong)local_428._4_4_ * 0x10)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar13 = (int)local_428;
              if ((int)local_428 == local_428._4_4_) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_430,(int *)((longlong)&local_428 + 4));
              }
              local_428 = CONCAT44(local_428._4_4_,iVar13 + 1);
              pFVar21 = local_430.Data + (longlong)iVar13 * 0x10;
              *(undefined8 *)pFVar21 = 0;
              *(undefined8 *)pFVar21 = *(undefined8 *)pFVar32;
              *(undefined8 *)pFVar32 = 0;
              *(int *)(pFVar21 + 8) = *(int *)(pFVar32 + 8);
              *(int *)(pFVar21 + 0xc) = *(int *)(pFVar32 + 0xc);
              *(undefined8 *)(pFVar32 + 8) = 0;
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
            }
            else {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_430,(int *)((longlong)&local_428 + 4));
              local_428 = CONCAT44(local_428._4_4_,iVar13 + 1);
              ::FString::FString((FString *)(local_430.Data + (longlong)iVar13 * 0x10),
                                 &pFVar25->LayerName);
            }
          }
          iVar13 = (int)local_428;
          if (1 < local_200.ActiveBranchRendererCount) {
            pFVar2 = &pFVar25->RendererName;
            if ((local_430.Data <= pFVar2) &&
               (pFVar2 < local_430.Data + (longlong)local_428._4_4_ * 0x10)) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar13 = (int)local_428;
            }
            if (iVar13 == local_428._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_430,(int *)((longlong)&local_428 + 4));
            }
            local_428 = CONCAT44(local_428._4_4_,iVar13 + 1);
            ::FString::FString((FString *)(local_430.Data + (longlong)iVar13 * 0x10),pFVar2);
            iVar13 = (int)local_428;
          }
          if (1 < local_200.ActiveRendererSubresourceCount) {
            pFVar2 = &pFVar25->SubResourceName;
            if ((local_430.Data <= pFVar2) &&
               (pFVar2 < local_430.Data + (longlong)local_428._4_4_ * 0x10)) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar13 = (int)local_428;
            }
            if (iVar13 == local_428._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_430,(int *)((longlong)&local_428 + 4));
            }
            local_428 = CONCAT44(local_428._4_4_,iVar13 + 1);
            ::FString::FString((FString *)(local_430.Data + (longlong)iVar13 * 0x10),pFVar2);
            iVar13 = (int)local_428;
          }
          if (1 < iVar12) {
            pFVar2 = &pFVar25->CameraName;
            if ((local_430.Data <= pFVar2) &&
               (pFVar2 < local_430.Data + (longlong)local_428._4_4_ * 0x10)) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar13 = (int)local_428;
            }
            if (iVar13 == local_428._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_430,(int *)((longlong)&local_428 + 4));
            }
            local_428 = CONCAT44(local_428._4_4_,iVar13 + 1);
            ::FString::FString((FString *)(local_430.Data + (longlong)iVar13 * 0x10),pFVar2);
            iVar13 = (int)local_428;
          }
          bVar11 = iVar13 == 0;
          if (bVar11) {
            local_418[0] = 0;
            bVar11 = `UMovieGraphImageSequenceOutputNode_MultiLayerEXR::OnReceiveImageDataImpl'::
                     __l109::<lambda_2>::operator()(local_418);
            if (bVar11) {
              bVar11 = (int)local_428 == 0;
              iVar13 = (int)local_428;
              goto LAB_14dded980;
            }
          }
          else {
LAB_14dded980:
            if ((bVar11 || iVar13 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar12 = *(int *)(local_430.Data + 8) + -1;
            if (*(int *)(local_430.Data + 8) == 0) {
              iVar12 = 0;
            }
            ::FString::AssignRange(&local_410,*(wchar_t **)local_430.Data,iVar12);
            uVar23 = 1;
            if (1 < (int)local_428) {
              do {
                uVar36 = 0;
                if ((int)uVar23 < (int)local_428) {
                  uVar36 = ~uVar23 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                ::FString::PrintfImpl(&local_2f8,L"%s_%s");
                local_420 = local_420 | 2;
                if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_410.Data.AllocatorInstance.Data);
                }
                local_410.Data.AllocatorInstance.Data = local_2f8.Data.AllocatorInstance.Data;
                local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_410.Data.ArrayNum = local_2f8.Data.ArrayNum;
                local_410.Data.ArrayMax = local_2f8.Data.ArrayMax;
                local_2f8.Data.ArrayNum = 0;
                local_2f8.Data.ArrayMax = 0;
                uVar23 = uVar23 + 1;
                pFVar30 = local_3f8;
              } while ((int)uVar23 < (int)local_428);
            }
          }
          DestructItems<FString,int>((FString *)local_430.Data,(int)local_428);
          if (local_430.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_430.Data);
          }
        }
        local_3b8 = 0;
        if (((pFVar30->EvaluatedConfig).Object == (UObject *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                ,0x61,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = UMovieGraphFileOutputNode::GetNumFileOutputNodes
                           ((UMovieGraphEvaluatedConfig *)(pFVar30->EvaluatedConfig).Object,
                            &pFVar25->RootBranchName);
        pFVar5 = pTVar15->Ptr;
        if (iVar12 < 2) {
          (**(code **)(pFVar5->_padding_ + 0x18))(pFVar5,&local_380);
          uVar28 = local_380;
          local_420 = local_420 | 8;
          local_380 = 0;
        }
        else {
          (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5,&local_390);
          uVar28 = local_390;
          local_420 = local_420 | 4;
          local_390 = 0;
        }
        local_138._16_8_ = 0;
        uStack_120 = 0;
        FStack_100.InlineData[0] = '\0';
        FStack_100.InlineData[1] = '\0';
        FStack_100.InlineData[2] = '\0';
        FStack_100.InlineData[3] = '\0';
        FStack_100._padding_ = 0;
        local_138._0_8_ = (FScriptContainerElement *)0x0;
        local_138._8_8_ = 0;
        local_118 = (void *)0x0;
        uStack_110 = 0x8000000000;
        local_108 = 0xffffffff;
        FStack_100.SecondaryData = (ForElementType<FSetElementId>)0x0;
        uStack_f0 = 0;
        local_220 = (pFVar30->EvaluatedConfig).Object;
        local_3b8 = uVar28;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_220 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_220);
        }
        pUVar35 = local_3e8;
        pTVar18 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)FMovieGraphOCIOHelper::ResolveOpenColorIOContext
                               ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                 *)local_98,
                                (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                 *)&local_3e8->_padding_,pFVar25,local_398,
                                (TObjectPtr<UMovieGraphEvaluatedConfig>)&local_220,
                                (FMovieGraphTraversalContext *)(pIVar4 + 3));
        if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)local_138 != pTVar18) {
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::
          Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)local_138,pTVar18);
        }
        local_50 = 0;
        if ((void *)local_98._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_98._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_98);
        uVar8 = local_3c8._0_8_;
        iVar12 = local_3d0;
        local_3b8 = 0;
        local_2e8 = uVar28;
        UMovieGraphImageSequenceOutputNode_EXR::UpdateTaskPerLayer
                  ((UMovieGraphImageSequenceOutputNode_EXR *)local_3f0,
                   (FEXRImageWriteTask *)local_3c8._0_8_,
                   (UMovieGraphImageSequenceOutputNode *)pUVar35,(FImagePixelData *)&local_2e8,
                   local_3d0,&local_410,
                   (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    *)local_138);
        puVar37 = local_3b0;
        *(int *)(uVar8 + 0x70) = *(int *)(local_3b0 + 0x1a);
        *(int *)(uVar8 + 0x74) = *(int *)((longlong)local_3b0 + 0xd4);
        UE::MovieGraph::UpdateMetadataLayerNamesToMatchExrLayerNames
                  (pFVar25,&local_410,
                   (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                    *)(uVar8 + 0x78));
        local_3d0 = iVar12 + 1;
        uStack_f0 = uStack_f0 & 0xffffffff00000000;
        if (FStack_100.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FStack_100.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_138,0,local_138._8_4_);
        iVar12 = SUB84(local_138._8_8_,4);
        local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
        if (iVar12 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
        }
        local_108 = 0xffffffff;
        uVar22 = uStack_110 >> 0x20;
        uStack_110 = uStack_110 & 0xffffffff00000000;
        if (0x80 < (uint)uVar22) {
          uStack_110 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
        }
        if (local_118 != (void *)0x0) {
          FMemory::Free(local_118);
        }
        if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_138._0_8_);
        }
        if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_410.Data.AllocatorInstance.Data);
        }
      }
      pFVar25 = pFVar25 + 1;
      uVar22 = (ulonglong)local_388;
      pUVar35 = local_3f0;
      pFVar30 = local_3f8;
    }
    local_378.Shot = (UMoviePipelineExecutorShot *)0x0;
    local_378.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_378.FilePath.Data.ArrayNum = 0;
    local_378.FilePath.Data.ArrayMax = 0;
    local_378.FrameTemplatedFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_378.FrameTemplatedFilePath.Data.ArrayNum = 0;
    local_378.FrameTemplatedFilePath.Data.ArrayMax = 0;
    local_378.DataIdentifier.RootBranchName.ComparisonIndex.Value = 0;
    local_378.DataIdentifier.RootBranchName.Number = 0;
    local_378.DataIdentifier.LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_378.DataIdentifier.LayerName.Data.ArrayNum = 0;
    local_378.DataIdentifier.LayerName.Data.ArrayMax = 0;
    local_378.DataIdentifier.RendererName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_378.DataIdentifier.RendererName.Data.ArrayNum = 0;
    local_378.DataIdentifier.RendererName.Data.ArrayMax = 0;
    local_378.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_378.DataIdentifier.SubResourceName.Data.ArrayNum = 0;
    local_378.DataIdentifier.SubResourceName.Data.ArrayMax = 0;
    local_378.DataIdentifier.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_378.DataIdentifier.CameraName.Data.ArrayNum = 0;
    local_378.DataIdentifier.CameraName.Data.ArrayMax = 0;
    local_378.OriginNodeClass = (UClass *)0x0;
    local_378.RenderLayerIndex = 0;
    uVar36 = (uint)lVar33;
    uVar23 = 0;
    if ((int)uVar36 < (local_398->ActiveShotList).ArrayNum) {
      uVar23 = ~uVar36 >> 0x1f;
    }
    iVar12 = 0;
    if (uVar23 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = local_378.FilePath.Data.ArrayMax;
    }
    local_378.Shot =
         *(UMoviePipelineExecutorShot **)
          ((pUVar9->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar36 * 8);
    if (&local_378.FilePath != (FString *)puVar37) {
      iVar13 = *(int *)(puVar37 + 1);
      pvVar3 = (void *)*puVar37;
      local_378.FilePath.Data.ArrayNum = iVar13;
      if ((iVar13 == 0) && (iVar12 == 0)) {
        local_378.FilePath.Data.ArrayNum = 0;
        local_378.FilePath.Data.ArrayMax = 0;
        pUVar35 = local_3f0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar13,iVar12,(ForAnyElementType *)&local_378.FilePath,iVar13,
                   &local_378.FilePath.Data.ArrayMax);
        pUVar35 = local_3f0;
        if (iVar13 != 0) {
          memcpy(local_378.FilePath.Data.AllocatorInstance.Data,pvVar3,(longlong)iVar13 * 2);
          pUVar35 = local_3f0;
        }
      }
    }
    uVar23 = *(int *)(puVar37 + 0x19) - 1;
    if (*(int *)(puVar37 + 0x19) == 0) {
      uVar23 = 0;
    }
    ::FString::AssignRange(&local_378.FrameTemplatedFilePath,(wchar_t *)puVar37[0x18],uVar23);
    local_2d8 = 0;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_378.DataIdentifier.RootBranchName.ComparisonIndex.Value = 0;
    local_378.DataIdentifier.RootBranchName.Number = 0;
    if (local_378.DataIdentifier.LayerName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DataIdentifier.LayerName.Data.AllocatorInstance.Data);
    }
    local_378.DataIdentifier.LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0 = 0;
    local_378.DataIdentifier.LayerName.Data.ArrayNum = 0;
    local_378.DataIdentifier.LayerName.Data.ArrayMax = 0;
    local_2c8 = 0;
    if (local_378.DataIdentifier.RendererName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DataIdentifier.RendererName.Data.AllocatorInstance.Data);
    }
    local_378.DataIdentifier.RendererName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_2c0 = 0;
    local_378.DataIdentifier.RendererName.Data.ArrayNum = 0;
    local_378.DataIdentifier.RendererName.Data.ArrayMax = 0;
    local_2b8 = 0;
    if (local_378.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
    }
    local_378.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_2b0 = 0;
    local_378.DataIdentifier.SubResourceName.Data.ArrayNum = 0;
    local_378.DataIdentifier.SubResourceName.Data.ArrayMax = 0;
    local_2a8 = 0;
    if (local_378.DataIdentifier.CameraName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DataIdentifier.CameraName.Data.AllocatorInstance.Data);
    }
    local_378.DataIdentifier.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_2a0 = 0;
    local_378.DataIdentifier.CameraName.Data.ArrayNum = 0;
    local_378.DataIdentifier.CameraName.Data.ArrayMax = 0;
    local_298 = 0;
    local_378.OriginNodeClass = (UClass *)pUVar35->_padding_;
    local_378.RenderLayerIndex = local_400;
    local_2e0 = (FEXRImageWriteTask *)local_3c8._0_8_;
    local_3c8._0_8_ = (FEXRImageWriteTask *)0x0;
    pTVar19 = (TFuture<bool> *)
              (**(code **)(*(longlong *)pUVar35->_padding_ + 8))
                        ((longlong *)pUVar35->_padding_,local_178,&local_2e0);
    UMovieGraphPipeline::AddOutputFuture(pUVar9,pTVar19,&local_378);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170);
    if (local_2e0 != (FEXRImageWriteTask *)0x0) {
      (*(code *)**(undefined8 **)local_2e0)(local_2e0,1);
    }
    if (local_378.DataIdentifier.CameraName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DataIdentifier.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_378.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
    }
    if (local_378.DataIdentifier.RendererName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DataIdentifier.RendererName.Data.AllocatorInstance.Data);
    }
    if (local_378.DataIdentifier.LayerName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.DataIdentifier.LayerName.Data.AllocatorInstance.Data);
    }
    if (local_378.FrameTemplatedFilePath.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.FrameTemplatedFilePath.Data.AllocatorInstance.Data);
    }
    if (local_378.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.FilePath.Data.AllocatorInstance.Data);
    }
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
    pUVar35 = local_3e8;
  } while( true );
}

// ResolveOutputFilename @ 14ddfbca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::ResolveOutputFilename
          (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *this,FString *__return_storage_ptr__,
          UMovieGraphImageSequenceOutputNode_MultiLayerEXR *param_1,UMovieGraphPipeline *param_2,
          FMovieGraphOutputMergerFrame *param_3,FMovieGraphRenderDataIdentifier *param_4,
          FMovieGraphResolveArgs *param_5,FString *param_6)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  FMovieGraphResolveArgs *pFVar4;
  bool bVar5;
  FString *pFVar6;
  UMovieGraphGlobalOutputSettingNode *pUVar7;
  longlong lVar8;
  undefined1 auStackY_338 [32];
  FString local_2f8;
  undefined4 local_2e8;
  FString local_2e0;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_2d0;
  undefined1 local_2c8 [8];
  UMovieGraphPipeline *local_2c0;
  FMovieGraphRenderDataIdentifier *local_2b8;
  FMovieGraphResolveArgs *local_2b0;
  UMovieGraphImageSequenceOutputNode_MultiLayerEXR *local_2a8;
  FString local_2a0;
  FString *local_290;
  FString *local_288;
  FString local_280;
  FString local_270;
  FString *local_260;
  FString *local_258;
  FString local_250;
  FString local_240;
  FString *local_230;
  FString local_228;
  FString local_218;
  undefined1 local_208 [32];
  void *local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  FMovieGraphFilenameResolveParams local_1b8;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2b8 = param_4;
  local_2b0 = param_5;
  local_2e8 = 0;
  local_2c0 = param_2;
  local_2a8 = this;
  local_230 = __return_storage_ptr__;
  if ((param_3->EvaluatedConfig).Object == (UObject *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
  }
  pUVar7 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                     ((UMovieGraphEvaluatedConfig *)(param_3->EvaluatedConfig).Object,
                      param_4->RootBranchName,true,false);
  if (pUVar7 == (UMovieGraphGlobalOutputSettingNode *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6260183900736191541>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                       ,0x3cb,"OutputSettings");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    local_2d0.DebugPtr = (UMovieGraphEvaluatedConfig *)&local_2e0;
    local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e0.Data.ArrayNum = (int)param_1->_padding_;
    lVar8 = (longlong)local_2e0.Data.ArrayNum;
    _Src = (void *)param_1->_padding_;
    if (local_2e0.Data.ArrayNum == 0) {
      local_2e0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_2e0.Data.ArrayNum,0,(ForAnyElementType *)&local_2e0,
                 local_2e0.Data.ArrayNum,&local_2e0.Data.ArrayMax);
      memcpy(local_2e0.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
    }
    UE::MoviePipeline::ValidateOutputFormatString(&local_2e0,false,true,false);
    local_208._0_8_ = (FScriptContainerElement *)0x0;
    local_208._8_8_ = 0;
    local_1e8 = (void *)0x0;
    local_1e0 = 0;
    local_1dc = 0x80;
    local_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1c8 = (ForElementType<FSetElementId>)0x0;
    local_1c0 = 0;
    ::FString::FString(&local_270,L"");
    ::FString::FString(&local_280,L"render_pass");
    local_290 = &local_280;
    local_288 = &local_270;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_208,(TPairInitializer<FString_&&,FString_&&> *)local_2c8,(bool *)&local_290)
    ;
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_240,L"exr");
    ::FString::FString(&local_250,L"ext");
    local_260 = &local_250;
    local_258 = &local_240;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_208,(TPairInitializer<FString_&&,FString_&&> *)(local_2c8 + 4),
               (bool *)&local_260);
    if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    local_2d0.ObjectPtr.field0_0x0 = (FObjectPtr)(param_3->EvaluatedConfig).Object;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_2d0.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_2d0.DebugPtr);
    }
    FMovieGraphFilenameResolveParams::MakeResolveParams
              (&local_1b8,local_2b8,local_2c0,
               (TObjectPtr<UMovieGraphEvaluatedConfig> *)&local_2d0.ObjectPtr,
               &param_3->TraversalContext,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_208);
    ::operator/(&local_2a0,&(pUVar7->OutputDirectory).Path,&local_2e0);
    pFVar4 = local_2b0;
    UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
              (&local_2f8,&local_2a0,&local_1b8,local_2b0);
    pFVar6 = UMovieGraphImageSequenceOutputNode::GetFrameTemplatedFileName
                       ((UMovieGraphImageSequenceOutputNode *)local_2a8,&local_228,&local_1b8,
                        &local_2a0,pFVar4);
    if (param_6 != pFVar6) {
      pFVar1 = (param_6->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_6->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_6->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (param_6->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar5 = FPaths::IsRelative(&local_2f8);
    if (bVar5) {
      pFVar6 = FPaths::ConvertRelativePathToFull(&local_218,&local_2f8);
      if (&local_2f8 != pFVar6) {
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
        local_2f8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2f8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_2f8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_2f8.Data.AllocatorInstance.Data;
    local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = local_2f8.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_2f8.Data.ArrayMax;
    local_2f8.Data.ArrayNum = 0;
    local_2f8.Data.ArrayMax = 0;
    local_2e8 = 1;
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_1b8);
    local_1c0 = 0;
    if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_208,0,local_208._8_4_);
    iVar3 = SUB84(local_208._8_8_,4);
    local_208._8_8_ = local_208._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_208,0,(int *)(local_208 + 0xc));
    }
    local_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1e0 = 0;
    if (0x80 < local_1dc) {
      local_1dc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10),0);
    }
    if (local_1e8 != (void *)0x0) {
      FMemory::Free(local_1e8);
    }
    if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_208._0_8_);
    }
    if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// ShouldCropOverscanImpl @ 14ddfef00

bool __thiscall
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::ShouldCropOverscanImpl
          (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *this)

{
  return false;
}

// StaticRegisterNativesUMovieGraphImageSequenceOutputNode_MultiLayerEXR @ 14ddff1f0

void __cdecl
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::
StaticRegisterNativesUMovieGraphImageSequenceOutputNode_MultiLayerEXR(void)

{
  return;
}

// UpdateTelemetry @ 14de02cf0

void __thiscall
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::UpdateTelemetry
          (UMovieGraphImageSequenceOutputNode_MultiLayerEXR *this,
          FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesMultiEXR = true;
  return;
}

// operator() @ 15058fb60

bool __thiscall
`UMovieGraphImageSequenceOutputNode_MultiLayerEXR::OnReceiveImageDataImpl'::__l109::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6260183900736191685>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6260183900736191685>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

