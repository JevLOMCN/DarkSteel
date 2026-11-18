// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 9

// StaticClass @ 14e72ebf0

UClass * __cdecl UInterchangeMaterialXPipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeMaterialXPipeline",
               &Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialXPipeline,0x138,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Interchange",
               InternalConstructor<UInterchangeMaterialXPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialXPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.InnerSingleton;
}

// UInterchangeMaterialXPipeline @ 14e767ce0

/* WARNING: Type propagation algorithm not settling */

UInterchangeMaterialXPipeline * __thiscall
UInterchangeMaterialXPipeline::UInterchangeMaterialXPipeline(UInterchangeMaterialXPipeline *this)

{
  FTopLevelAssetPath *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  UMaterialXPipelineSettings *pUVar3;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
  *pTVar7;
  TMap<EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>
  *pTVar8;
  TMap<EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXEDF,FSoftObjectPath,0>_>
  *pTVar9;
  TMap<EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXVDF,FSoftObjectPath,0>_>
  *pTVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FObjectInitializer *pFVar14;
  UClass *pUVar15;
  UInterchangeMaterialXPipeline *pUVar16;
  byte bVar17;
  int iVar18;
  char *pcVar19;
  undefined1 *puVar20;
  wchar_t *pwVar21;
  uint uVar22;
  TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
  *pTVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  int iVar25;
  undefined1 *puVar26;
  uint *puVar27;
  TMap<EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>
  *pTVar28;
  TMap<EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXEDF,FSoftObjectPath,0>_>
  *pTVar29;
  TMap<EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXVDF,FSoftObjectPath,0>_>
  *pTVar30;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
  local_288;
  undefined1 local_286;
  undefined1 local_285;
  undefined1 local_284;
  undefined1 local_283;
  undefined1 local_282;
  undefined1 local_281;
  undefined1 local_280 [8];
  TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
  *local_278;
  undefined8 uStack_270;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_268;
  uint uStack_260;
  int iStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  int local_250;
  undefined4 uStack_24c;
  ulonglong local_248;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  int local_1c0;
  int local_1bc;
  undefined1 local_1b8 [4];
  int local_1b4;
  int local_1b0;
  undefined1 local_1ac [4];
  int local_1a8;
  undefined1 local_1a4 [12];
  TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
  *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  TMap<EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  TMap<EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXEDF,FSoftObjectPath,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  TMap<EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXVDF,FSoftObjectPath,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FString *local_d8;
  undefined1 *local_d0;
  FString *local_c8;
  undefined1 *local_c0;
  FString *local_b8;
  undefined1 *local_b0;
  undefined4 local_8c;
  undefined4 local_6c;
  undefined4 local_4c;
  
  pFVar14 = FObjectInitializer::Get();
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,pFVar14);
  this->_padding_ = (longlong)&___7UInterchangeMaterialXPipeline__6B_;
  pUVar15 = UMaterialXPipelineSettings::StaticClass();
  if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar15);
  }
  pUVar3 = (UMaterialXPipelineSettings *)(pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar15 = UMaterialXPipelineSettings::StaticClass();
  iVar18 = (int)pUVar15->_padding_;
  if (((*(int *)(pUVar3->_padding_ + 0x38) < iVar18) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar18 * 8)
       != &pUVar15->_padding_)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ret->IsA(T::StaticClass())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                          ,0x1181,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pUVar16 = (UInterchangeMaterialXPipeline *)(*pcVar5)();
    return pUVar16;
  }
  (this->MaterialXSettings).field0_0x0.DebugPtr = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->bVolumetricMaterial = true;
  pUVar3 = (this->MaterialXSettings).field0_0x0.DebugPtr;
  pTVar23 = &pUVar3->PredefinedSurfaceShaders;
  local_1e0._padding_._0_4_ = 0;
  local_248 = 1;
  local_1e0._padding_._4_4_ = 1;
  local_1e0.UnvisitedBitMask = 0xffffffff;
  pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)&(pUVar3->PredefinedSurfaceShaders).field_0x10;
  local_1e0.CurrentBitIndex = 0;
  local_1e0.BaseBitIndex = 0;
  local_1e0.Array = pTVar24;
  if (*(int *)&(pUVar3->PredefinedSurfaceShaders).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
  }
  uVar13 = *(uint *)&(pUVar3->PredefinedSurfaceShaders).field_0x28;
  uStack_270 = CONCAT44(local_1e0._padding_._4_4_,(undefined4)local_1e0._padding_);
  bVar17 = (byte)uVar13 & 0x1f;
  local_250 = *(int *)&(pUVar3->PredefinedSurfaceShaders).field_0x8 -
              *(int *)&(pUVar3->PredefinedSurfaceShaders).field_0x34;
  iStack_25c = local_1e0.CurrentBitIndex;
  uStack_260 = local_1e0.UnvisitedBitMask;
  uStack_254 = local_1e0._28_4_;
  iStack_258 = local_1e0.BaseBitIndex;
  local_200._padding_._0_4_ = (int)uVar13 >> 5;
  local_200._padding_._4_4_ = 1 << bVar17;
  local_200.UnvisitedBitMask = -1 << bVar17;
  pTStack_268 = local_1e0.Array;
  local_200.BaseBitIndex = uVar13 & 0xffffffe0;
  uStack_170 = CONCAT44(uStack_24c,local_250);
  TStack_190.Array = local_1e0.Array;
  local_278 = pTVar23;
  local_200.Array = pTVar24;
  local_200.CurrentBitIndex = uVar13;
  local_198 = pTVar23;
  TStack_190._padding_ = uStack_270;
  TStack_190._16_8_ = _uStack_260;
  TStack_190._24_8_ = _iStack_258;
  if (((int)uVar13 < 0) ||
     (uVar12 = *(uint *)&(pUVar3->PredefinedSurfaceShaders).field_0x28, (int)uVar12 < (int)uVar13))
  {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pUVar16 = (UInterchangeMaterialXPipeline *)(*pcVar5)();
      return pUVar16;
    }
    uVar12 = *(uint *)&(pUVar3->PredefinedSurfaceShaders).field_0x28;
  }
  if (uVar13 != uVar12) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_200);
    pTVar24 = local_200.Array;
    uVar13 = local_200.CurrentBitIndex;
  }
  while( true ) {
    pTVar7 = local_198;
    if (*(int *)&local_198->field_0x8 - *(int *)&local_198->field_0x34 != (int)uStack_170) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXShaders,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_190.CurrentBitIndex == uVar13) && (TStack_190.Array == pTVar24)) &&
       (pTVar7 == pTVar23)) break;
    local_288.TypeIndex = '\0';
    pcVar19 = (char *)((longlong)TStack_190.CurrentBitIndex * 0x30 + *(longlong *)pTVar7);
    this_00 = (FTopLevelAssetPath *)(pcVar19 + 8);
    local_288._padding_ = *pcVar19;
    if (this_00->PackageName == (FName)0x0) {
      local_210.Data.ArrayMax = 0;
      local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.Data.ArrayNum = 0;
    }
    else {
      FTopLevelAssetPath::ToString(this_00,&local_210);
    }
    iVar18 = local_210.Data.ArrayNum + -1;
    FVar6.Data = local_210.Data.AllocatorInstance.Data;
    if (local_210.Data.ArrayNum == 0) {
      iVar18 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,(wchar_t *)FVar6.Data);
    TMapBase<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>_>
    ::
    FindOrAddImpl<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>
              (&PathToEnumMapping,uVar12,&local_210,&local_288);
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
  }
  pUVar3 = (this->MaterialXSettings).field0_0x0.DebugPtr;
  iVar25 = 0;
  pTVar28 = &pUVar3->PredefinedBSDF;
  iVar18 = *(int *)&(pUVar3->PredefinedBSDF).field_0x28;
  puVar1 = &(pUVar3->PredefinedBSDF).field_0x10;
  iStack_258 = 0;
  uVar13 = (uint)local_248;
  iStack_25c = 0;
  if (iVar18 != 0) {
    puVar27 = *(uint **)&(pUVar3->PredefinedBSDF).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar12 = *puVar27;
    while (uVar12 == 0) {
      iVar25 = iVar25 + 1;
      iStack_258 = iStack_258 + 0x20;
      iStack_25c = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14e76800b;
      uVar12 = puVar27[iVar25];
    }
    uVar13 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_1c0 = (int)lVar4;
    iStack_25c = local_1c0 + -1 + iStack_258;
    if (iVar18 < iStack_25c) {
      iStack_25c = iVar18;
    }
  }
LAB_14e76800b:
  uVar12 = *(uint *)&(pUVar3->PredefinedBSDF).field_0x28;
  uVar22 = uVar12 & 0xffffffe0;
  local_250 = *(int *)&(pUVar3->PredefinedBSDF).field_0x8 -
              *(int *)&(pUVar3->PredefinedBSDF).field_0x34;
  uStack_270 = CONCAT44(uVar13,iVar25);
  uStack_260 = 0xffffffff;
  uStack_254 = local_8c;
  TStack_160._padding_ = uStack_270;
  iVar25 = (int)uVar12 >> 5;
  uStack_140 = CONCAT44(uStack_24c,local_250);
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160.CurrentBitIndex = iStack_25c;
  TStack_160.BaseBitIndex = iStack_258;
  TStack_160._28_4_ = local_8c;
  local_278 = (TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
               *)pTVar28;
  pTStack_268 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_168 = pTVar28;
  TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar18 < (int)uVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pUVar16 = (UInterchangeMaterialXPipeline *)(*pcVar5)();
    return pUVar16;
  }
  uVar13 = *(uint *)&(pUVar3->PredefinedBSDF).field_0x28;
  if (uVar12 != uVar13) {
    puVar20 = *(undefined1 **)&(pUVar3->PredefinedBSDF).field_0x20;
    puVar26 = puVar1;
    if (puVar20 != (undefined1 *)0x0) {
      puVar26 = puVar20;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar25 * 4);
    while (uVar12 == 0) {
      iVar25 = iVar25 + 1;
      uVar22 = uVar22 + 0x20;
      uVar12 = uVar13;
      if ((int)(((int)(uVar13 - 1) >> 0x1f & 0x1fU) + (uVar13 - 1)) >> 5 < iVar25)
      goto LAB_14e768110;
      uVar12 = *(uint *)(puVar26 + (longlong)iVar25 * 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_1bc = (int)lVar4;
    uVar12 = local_1bc + -1 + uVar22;
    if ((int)uVar13 < (int)uVar12) {
      uVar12 = uVar13;
    }
  }
LAB_14e768110:
  while( true ) {
    pTVar8 = local_168;
    if (*(int *)&local_168->field_0x8 - *(int *)&local_168->field_0x34 != (int)uStack_140) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXBSDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_160.CurrentBitIndex == uVar12) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar28)
       ) break;
    local_285 = 1;
    puVar20 = (undefined1 *)((longlong)TStack_160.CurrentBitIndex * 0x30 + *(longlong *)pTVar8);
    local_286 = *puVar20;
    if (*(longlong *)(puVar20 + 8) == 0) {
      local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_240.Data.ArrayNum = 0;
      local_240.Data.ArrayMax = 0;
      iVar18 = 0;
    }
    else {
      FTopLevelAssetPath::ToString((FTopLevelAssetPath *)(puVar20 + 8),&local_240);
      iVar18 = local_240.Data.ArrayNum;
    }
    pwVar21 = L"";
    if (iVar18 == 0) {
      iVar18 = 0;
    }
    else {
      iVar18 = iVar18 + -1;
      pwVar21 = (wchar_t *)local_240.Data.AllocatorInstance.Data;
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar21);
    iVar18 = TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>(&PathToEnumMapping,uVar13,&local_240);
    if ((iVar18 == -1) || ((longlong)iVar18 * 0x20 + PathToEnumMapping._0_8_ == 0)) {
      local_d8 = &local_240;
      local_d0 = &local_286;
      TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
      ::
      EmplaceByHash<TPairInitializer<FString_&&,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_&&>_>
                (&PathToEnumMapping,(uint)local_1b8,
                 (TPairInitializer<FString_&&,TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>_&&>
                  *)(ulonglong)uVar13,(bool *)&local_d8);
    }
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  }
  iVar25 = 0;
  iStack_258 = 0;
  pUVar3 = (this->MaterialXSettings).field0_0x0.DebugPtr;
  pTVar29 = &pUVar3->PredefinedEDF;
  iVar18 = *(int *)&(pUVar3->PredefinedEDF).field_0x28;
  puVar1 = &(pUVar3->PredefinedEDF).field_0x10;
  uVar13 = (uint)local_248;
  iStack_25c = 0;
  if (iVar18 != 0) {
    puVar27 = *(uint **)&(pUVar3->PredefinedEDF).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar12 = *puVar27;
    while (uVar12 == 0) {
      iVar25 = iVar25 + 1;
      iStack_258 = iStack_258 + 0x20;
      iStack_25c = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14e7682bd;
      uVar12 = puVar27[iVar25];
    }
    uVar13 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_1b4 = (int)lVar4;
    iStack_25c = iStack_258 + -1 + local_1b4;
    if (iVar18 < iStack_25c) {
      iStack_25c = iVar18;
    }
  }
LAB_14e7682bd:
  uVar12 = *(uint *)&(pUVar3->PredefinedEDF).field_0x28;
  uVar22 = uVar12 & 0xffffffe0;
  local_250 = *(int *)&(pUVar3->PredefinedEDF).field_0x8 -
              *(int *)&(pUVar3->PredefinedEDF).field_0x34;
  uStack_270 = CONCAT44(uVar13,iVar25);
  uStack_260 = 0xffffffff;
  uStack_254 = local_6c;
  TStack_130._padding_ = uStack_270;
  iVar25 = (int)uVar12 >> 5;
  uStack_110 = CONCAT44(uStack_24c,local_250);
  TStack_130.UnvisitedBitMask = 0xffffffff;
  TStack_130.CurrentBitIndex = iStack_25c;
  TStack_130.BaseBitIndex = iStack_258;
  TStack_130._28_4_ = local_6c;
  local_278 = (TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
               *)pTVar29;
  pTStack_268 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_138 = pTVar29;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar18 < (int)uVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pUVar16 = (UInterchangeMaterialXPipeline *)(*pcVar5)();
    return pUVar16;
  }
  uVar13 = *(uint *)&(pUVar3->PredefinedEDF).field_0x28;
  if (uVar12 != uVar13) {
    puVar20 = *(undefined1 **)&(pUVar3->PredefinedEDF).field_0x20;
    puVar26 = puVar1;
    if (puVar20 != (undefined1 *)0x0) {
      puVar26 = puVar20;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar25 * 4);
    while (uVar12 == 0) {
      iVar25 = iVar25 + 1;
      uVar22 = uVar22 + 0x20;
      uVar12 = uVar13;
      if ((int)(((int)(uVar13 - 1) >> 0x1f & 0x1fU) + (uVar13 - 1)) >> 5 < iVar25)
      goto LAB_14e7683d0;
      uVar12 = *(uint *)(puVar26 + (longlong)iVar25 * 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_1b0 = (int)lVar4;
    uVar12 = local_1b0 + -1 + uVar22;
    if ((int)uVar13 < (int)uVar12) {
      uVar12 = uVar13;
    }
  }
LAB_14e7683d0:
  while( true ) {
    pTVar9 = local_138;
    if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXEDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_130.CurrentBitIndex == uVar12) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar29)
       ) break;
    local_283 = 2;
    puVar20 = (undefined1 *)((longlong)TStack_130.CurrentBitIndex * 0x30 + *(longlong *)pTVar9);
    local_284 = *puVar20;
    if (*(longlong *)(puVar20 + 8) == 0) {
      local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_230.Data.ArrayNum = 0;
      local_230.Data.ArrayMax = 0;
      iVar18 = 0;
    }
    else {
      FTopLevelAssetPath::ToString((FTopLevelAssetPath *)(puVar20 + 8),&local_230);
      iVar18 = local_230.Data.ArrayNum;
    }
    pwVar21 = L"";
    if (iVar18 == 0) {
      iVar18 = 0;
    }
    else {
      iVar18 = iVar18 + -1;
      pwVar21 = (wchar_t *)local_230.Data.AllocatorInstance.Data;
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar21);
    iVar18 = TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>(&PathToEnumMapping,uVar13,&local_230);
    if ((iVar18 == -1) || ((longlong)iVar18 * 0x20 + PathToEnumMapping._0_8_ == 0)) {
      local_c8 = &local_230;
      local_c0 = &local_284;
      TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
      ::
      EmplaceByHash<TPairInitializer<FString_&&,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_&&>_>
                (&PathToEnumMapping,(uint)local_1ac,
                 (TPairInitializer<FString_&&,TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>_&&>
                  *)(ulonglong)uVar13,(bool *)&local_c8);
    }
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  iVar25 = 0;
  iStack_258 = 0;
  pUVar3 = (this->MaterialXSettings).field0_0x0.DebugPtr;
  pTVar30 = &pUVar3->PredefinedVDF;
  iVar18 = *(int *)&(pUVar3->PredefinedVDF).field_0x28;
  puVar1 = &(pUVar3->PredefinedVDF).field_0x10;
  iStack_25c = 0;
  if (iVar18 != 0) {
    puVar27 = *(uint **)&(pUVar3->PredefinedVDF).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar13 = *puVar27;
    while (uVar13 == 0) {
      iVar25 = iVar25 + 1;
      iStack_258 = iStack_258 + 0x20;
      iStack_25c = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14e76858e;
      uVar13 = puVar27[iVar25];
    }
    local_248 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = local_248 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_1a8 = (int)lVar4;
    iStack_25c = iStack_258 + -1 + local_1a8;
    if (iVar18 < iStack_25c) {
      iStack_25c = iVar18;
    }
  }
LAB_14e76858e:
  uVar13 = *(uint *)&(pUVar3->PredefinedVDF).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  local_250 = *(int *)&(pUVar3->PredefinedVDF).field_0x8 -
              *(int *)&(pUVar3->PredefinedVDF).field_0x34;
  uStack_260 = 0xffffffff;
  uStack_270 = CONCAT44((int)local_248,iVar25);
  uStack_254 = local_4c;
  iVar25 = (int)uVar13 >> 5;
  uStack_e0 = CONCAT44(uStack_24c,local_250);
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_25c;
  TStack_100.BaseBitIndex = iStack_258;
  TStack_100._28_4_ = local_4c;
  local_278 = (TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
               *)pTVar30;
  pTStack_268 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_108 = pTVar30;
  TStack_100._padding_ = uStack_270;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar18 < (int)uVar13)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pUVar16 = (UInterchangeMaterialXPipeline *)(*pcVar5)();
    return pUVar16;
  }
  uVar22 = *(uint *)&(pUVar3->PredefinedVDF).field_0x28;
  if (uVar13 != uVar22) {
    puVar20 = *(undefined1 **)&(pUVar3->PredefinedVDF).field_0x20;
    puVar26 = puVar1;
    if (puVar20 != (undefined1 *)0x0) {
      puVar26 = puVar20;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar25 * 4);
    while (uVar13 == 0) {
      iVar25 = iVar25 + 1;
      uVar12 = uVar12 + 0x20;
      uVar13 = uVar22;
      if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < iVar25)
      goto LAB_14e7686a0;
      uVar13 = *(uint *)(puVar26 + (longlong)iVar25 * 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = (uVar12 - 1) + (int)lVar4;
    if ((int)uVar22 < (int)uVar13) {
      uVar13 = uVar22;
    }
  }
LAB_14e7686a0:
  while( true ) {
    pTVar10 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXVDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_280);
    }
    if (((TStack_100.CurrentBitIndex == uVar13) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar10 == pTVar30)) break;
    local_281 = 3;
    puVar20 = (undefined1 *)((longlong)TStack_100.CurrentBitIndex * 0x30 + *(longlong *)pTVar10);
    local_282 = *puVar20;
    if (*(longlong *)(puVar20 + 8) == 0) {
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.Data.ArrayNum = 0;
      local_220.Data.ArrayMax = 0;
      iVar18 = 0;
    }
    else {
      FTopLevelAssetPath::ToString((FTopLevelAssetPath *)(puVar20 + 8),&local_220);
      iVar18 = local_220.Data.ArrayNum;
    }
    pwVar21 = L"";
    if (iVar18 == 0) {
      iVar18 = 0;
    }
    else {
      iVar18 = iVar18 + -1;
      pwVar21 = (wchar_t *)local_220.Data.AllocatorInstance.Data;
    }
    uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar21);
    iVar18 = TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>(&PathToEnumMapping,uVar12,&local_220);
    if ((iVar18 == -1) || ((longlong)iVar18 * 0x20 + PathToEnumMapping._0_8_ == 0)) {
      local_b8 = &local_220;
      local_b0 = &local_282;
      TSet<TTuple<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>,0>,FDefaultSetAllocator>
      ::
      EmplaceByHash<TPairInitializer<FString_&&,TVariant<enum_EInterchangeMaterialXShaders,enum_EInterchangeMaterialXBSDF,enum_EInterchangeMaterialXEDF,enum_EInterchangeMaterialXVDF>_&&>_>
                (&PathToEnumMapping,(uint)local_1a4,
                 (TPairInitializer<FString_&&,TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>_&&>
                  *)(ulonglong)uVar12,(bool *)&local_b8);
    }
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  return this;
}

// UInterchangeMaterialXPipeline @ 14e7687f0

UInterchangeMaterialXPipeline * __thiscall
UInterchangeMaterialXPipeline::UInterchangeMaterialXPipeline
          (UInterchangeMaterialXPipeline *this,FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bVolumetricMaterial = true;
  this->_padding_ = (longlong)&___7UInterchangeMaterialXPipeline__6B_;
  (this->MaterialXSettings).field0_0x0.DebugPtr = (UMaterialXPipelineSettings *)0x0;
  return this;
}

// ~UInterchangeMaterialXPipeline @ 14e76c320

void __thiscall
UInterchangeMaterialXPipeline::~UInterchangeMaterialXPipeline(UInterchangeMaterialXPipeline *this)

{
  this->_padding_ = (longlong)&___7UInterchangeMaterialXPipeline__6B_;
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// AdjustSettingsForContext @ 14e780ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeMaterialXPipeline::AdjustSettingsForContext
          (UInterchangeMaterialXPipeline *this,FInterchangePipelineContextParams *param_1)

{
  UMaterialXPipelineSettings *pUVar1;
  bool bVar2;
  TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
  *pTVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  EInterchangeMaterialXShaders local_b7 [15];
  TPairInitializer<EInterchangeMaterialXShaders_const_&,FSoftObjectPath_const_&> local_a8;
  undefined1 local_98 [24];
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined1 local_68 [64];
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UInterchangePipelineBase::AdjustSettingsForContext((UInterchangePipelineBase *)this,param_1);
  pUVar1 = (this->MaterialXSettings).field0_0x0.DebugPtr;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_a8.Value = (FSoftObjectPath *)CONCAT44(local_a8.Value._4_4_,0x48);
    local_a8.Key = (EInterchangeMaterialXShaders *)0x152f5ad50;
    local_98._0_8_ = L"/InterchangeAssets/Substrate/MX_VolumetricFogCloud.MX_VolumetricFogCloud";
    local_98._8_8_ = local_a8.Value;
    local_b7[0] = Volume;
    local_98._16_8_ = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    FSoftObjectPath::SetPath((FSoftObjectPath *)(local_98 + 0x10),(TStringView<wchar_t> *)local_98);
    local_a8.Key = local_b7;
    local_a8.Value = (FSoftObjectPath *)(local_98 + 0x10);
    local_98._0_8_ = &local_a8;
    local_98._8_8_ = local_98;
    pTVar3 = TMap<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
             ::
             TMap<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
                       (local_68,(initializer_list<TPairInitializer<EInterchangeMaterialXShaders_const_&,FSoftObjectPath_const_&>_>
                                  *)local_98);
    bFOGCloudVolumetricAsset =
         `UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
         operator()<TMap<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>_>
                   (&local_b8,pTVar3);
    local_20 = 0;
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXShaders,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXShaders,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_68);
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    _Init_thread_footer(&::_TSS0);
  }
  bVar2 = `UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
          operator()<TMap<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>_>
                    (&local_b8,&pUVar1->PredefinedSurfaceShaders);
  if ((((bVar2) &&
       (bVar2 = `UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
                operator()<TMap<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>_>
                          (&local_b8,&pUVar1->PredefinedBSDF), bVar2)) &&
      (bVar2 = `UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
               operator()<TMap<enum_EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXEDF,FSoftObjectPath,0>_>_>
                         (&local_b8,&pUVar1->PredefinedEDF), bVar2)) &&
     ((bVar2 = `UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
               operator()<TMap<enum_EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXVDF,FSoftObjectPath,0>_>_>
                         (&local_b8,&pUVar1->PredefinedVDF), bVar2 &&
      (bFOGCloudVolumetricAsset != false)))) {
    return;
  }
  if (2 < (byte)LogInterchangePipeline._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
  }
  return;
}

// CanExecuteOnAnyThread @ 14e782730

bool __thiscall
UInterchangeMaterialXPipeline::CanExecuteOnAnyThread
          (UInterchangeMaterialXPipeline *this,EInterchangePipelineTask param_1)

{
  return true;
}

// ExecutePipeline @ 14e7a8410

void __thiscall
UInterchangeMaterialXPipeline::ExecutePipeline
          (UInterchangeMaterialXPipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  return;
}

// GetPrivateStaticClass @ 14e7b9c80

UClass * __cdecl UInterchangeMaterialXPipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeMaterialXPipeline",
               &Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialXPipeline,0x138,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Interchange",
               InternalConstructor<UInterchangeMaterialXPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialXPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.InnerSingleton;
}

// StaticRegisterNativesUInterchangeMaterialXPipeline @ 14e7e46b0

void __cdecl UInterchangeMaterialXPipeline::StaticRegisterNativesUInterchangeMaterialXPipeline(void)

{
  return;
}

