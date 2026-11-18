// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// EvaluateAndSaveResult @ 14e1a9b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FOptimusConstantContainerInstance::EvaluateAndSaveResult
          (FOptimusConstantContainerInstance *this,FOptimusConstantIdentifier *param_1,
          FString *param_2,
          TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
          *param_3)

{
  undefined1 *puVar1;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this_00;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar5;
  TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar6;
  TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar12;
  undefined4 *puVar13;
  byte bVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ForAnyElementType *pFVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined1 auStackY_3a8 [32];
  undefined1 local_358;
  undefined1 local_357;
  FEngine local_356 [6];
  ForAnyElementType local_350;
  int local_348;
  int local_344;
  float local_340 [2];
  TKeyInitializer<FOptimusConstantIdentifier_const_&> local_338;
  TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_330;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *local_328;
  int iStack_320;
  uint uStack_31c;
  undefined1 *local_318;
  undefined4 uStack_310;
  int iStack_30c;
  int local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  int local_2f8;
  int local_2f4;
  TPairInitializer<FName_const_&,float_&&> local_2f0;
  FOptimusConstantIdentifier *local_2e0;
  FOptimusConstantIdentifier *local_2d8;
  TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_2d0;
  longlong *local_2c8;
  uint uStack_2c0;
  uint uStack_2bc;
  TBitArray<FDefaultBitArrayAllocator> *local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  uint local_2a8;
  int iStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  longlong *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  longlong local_238;
  float *local_230;
  FScriptContainerElement *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  code *local_218;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
  *local_210;
  TStringView<wchar_t> local_208;
  code *local_1f8 [5];
  undefined8 *local_1d0;
  undefined4 local_1ac;
  undefined1 local_1a8 [32];
  uint *local_188;
  uint local_180;
  undefined4 local_17c;
  undefined4 local_178;
  int local_174;
  ForElementType<FSetElementId> local_168;
  int local_160;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
  local_158;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
  local_108;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_17c = 0x80;
  puVar1 = &param_3->field_0x10;
  local_1a8._0_8_ = 0;
  local_1a8._8_8_ = 0;
  uVar23 = 1;
  local_188 = (uint *)0x0;
  iStack_320 = 0;
  local_180 = 0;
  local_174 = 0;
  local_168 = (ForElementType<FSetElementId>)0x0;
  local_160 = 0;
  local_308 = 0;
  local_178 = 0xffffffff;
  iVar25 = *(int *)&param_3->field_0x28;
  uStack_31c = 1;
  iStack_30c = local_308;
  if (iVar25 != 0) {
    puVar22 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uStack_31c = *puVar22;
    local_308 = 0;
    iStack_320 = 0;
    while (uStack_31c == 0) {
      lVar15 = (longlong)iStack_320;
      local_308 = local_308 + 0x20;
      iStack_320 = iStack_320 + 1;
      uStack_31c = 1;
      iStack_30c = iVar25;
      if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_320) goto LAB_14e1a9c5d;
      uStack_31c = puVar22[lVar15 + 1];
    }
    uStack_31c = -uStack_31c & uStack_31c;
    uVar17 = (ulonglong)uStack_31c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_2f8 = (int)lVar15;
    iStack_30c = local_2f8 + -1 + local_308;
    if (iVar25 < iStack_30c) {
      iStack_30c = iVar25;
    }
  }
LAB_14e1a9c5d:
  uVar19 = *(uint *)&param_3->field_0x28;
  iStack_300 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  uVar18 = uVar19 & 0xffffffe0;
  TStack_290._padding_ = CONCAT44(uStack_31c,iStack_320);
  uStack_310 = 0xffffffff;
  TStack_290.CurrentBitIndex = iStack_30c;
  TStack_290.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_290._28_4_ = local_1ac;
  TStack_290.BaseBitIndex = local_308;
  uStack_270 = CONCAT44(uStack_2fc,iStack_300);
  local_330 = (TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)param_3;
  local_328 = param_3;
  local_318 = puVar1;
  local_2e0 = param_1;
  local_2d0 = (TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)this;
  local_298 = (TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)param_3;
  TStack_290.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar25 < (int)uVar19)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar5 = local_330;
  uVar24 = *(uint *)&param_3->field_0x28;
  if (uVar19 != uVar24) {
    puVar21 = *(undefined1 **)&param_3->field_0x20;
    if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14e1a9d70;
      uVar19 = *(uint *)(puVar21 + lVar15 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_2f4 = (int)lVar15;
    uVar19 = local_2f4 + -1 + uVar18;
    if ((int)uVar24 < (int)uVar19) {
      uVar19 = uVar24;
    }
  }
LAB_14e1a9d70:
  do {
    pTVar7 = local_298;
    if (*(int *)&(local_298->Elements).field_0x8 - *(int *)&(local_298->Elements).field_0x34 !=
        (int)uStack_270) {
      local_358 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_358);
    }
    if (((TStack_290.CurrentBitIndex == uVar19) &&
        (TStack_290.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar5))
    {
      iVar25 = 0;
      local_158.Elements._44_4_ = 0x80;
      local_158.Elements._0_8_ = 0;
      local_158.Elements._8_8_ = 0;
      local_158.Elements._32_8_ = 0;
      local_158.Elements._40_4_ = 0;
      local_158.Elements._52_4_ = 0;
      local_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_158.HashSize = 0;
      local_158.Elements._48_4_ = 0xffffffff;
      TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      operator=(&local_158,
                (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                 *)local_1a8);
      local_1f8[0] = (code *)0x0;
      local_1d0 = FMemory::Malloc(0x58,8);
      this_00 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)(local_1d0 + 1);
      *local_1d0 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FOptimusConstantContainerInstance::EvaluateAndSaveResult'::`2'::<lambda_1>,0,1>
                    ::_vftable_;
      TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
      TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                (this_00,(TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                          *)&local_158);
      if (this_00 !=
          (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0)
      {
        local_1f8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FOptimusConstantContainerInstance::EvaluateAndSaveResult'::__l2::<lambda_1>,TOptional<float>,FName>
                       ::Call;
      }
      local_228 = (param_2->Data).AllocatorInstance.Data;
      iVar16 = (param_2->Data).ArrayNum;
      iStack_220 = iVar16 + -1;
      if (iVar16 == 0) {
        iStack_220 = 0;
      }
      local_208._12_4_ = uStack_21c;
      local_208.Size = iStack_220;
      local_208.DataPtr = (wchar_t *)local_228;
      Optimus::Expression::FEngine::Parse
                (local_356,&local_b8,&local_208,
                 (TFunction<TOptional<float>___cdecl(FName)> *)local_1f8);
      local_158.HashSize = 0;
      if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_158.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_158.Elements);
      uVar17 = (ulonglong)local_b8.TypeIndex;
      if ((1 < uVar17) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Optimus::Expression::FParseError,Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar17) != '\0') {
        bVar9 = false;
        goto LAB_14e1aa52c;
      }
      local_350.Data = (FScriptContainerElement *)0x0;
      local_344 = 0;
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
      }
      local_348 = 0;
      if ((int)uVar23 < 1) goto LAB_14e1aa449;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar23,&local_350,0,&local_344);
      break;
    }
    local_340[1] = 0.0;
    local_230 = local_340 + 1;
    lVar15 = *(longlong *)&pTVar7->Elements + (longlong)TStack_290.CurrentBitIndex * 0x20;
    local_238 = lVar15;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,float_&&>_>
              ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                *)local_1a8,&local_2f0,(bool *)&local_238);
    if ((*(int *)(lVar15 + 0x10) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("DependentConstant.Value.Num() != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusConstant.cpp"
                           ,0xb4,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    uVar18 = *(uint *)(lVar15 + 0x10);
    uVar24 = uVar23;
    if (((1 < (int)uVar18) && (uVar24 = uVar18, uVar23 != 1)) && (uVar24 = uVar23, uVar23 != uVar18)
       ) goto LAB_14e1aa572;
    TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
    uVar23 = uVar24;
  } while( true );
LAB_14e1a9ff0:
  uVar19 = local_180;
  uStack_2c0 = 0;
  uStack_2bc = 1;
  uStack_2ac = uStack_2c0;
  local_2a8 = uStack_2c0;
  if (local_180 != 0) {
    puVar22 = (uint *)(local_1a8 + 0x10);
    if (local_188 != (uint *)0x0) {
      puVar22 = local_188;
    }
    uVar18 = *puVar22;
    while (uVar18 == 0) {
      lVar15 = (longlong)(int)uStack_2c0;
      local_2a8 = local_2a8 + 0x20;
      uStack_2c0 = uStack_2c0 + 1;
      uStack_2ac = local_180;
      if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2c0)
      goto LAB_14e1aa073;
      uVar18 = puVar22[lVar15 + 1];
    }
    uStack_2bc = -uVar18 & uVar18;
    uVar17 = (ulonglong)uStack_2bc * 2 + 1;
    lVar15 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_2f0.Key._4_4_ = (int)lVar15;
    uStack_2ac = local_2f0.Key._4_4_ + -1 + local_2a8;
    if ((int)local_180 < (int)uStack_2ac) {
      uStack_2ac = local_180;
    }
  }
LAB_14e1aa073:
  local_2c8 = (longlong *)local_1a8;
  iStack_2a4 = iStack_30c;
  local_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10);
  uVar18 = local_180 & 0xffffffe0;
  iStack_2a0 = local_1a8._8_4_ - local_174;
  TStack_260._padding_ = CONCAT44(uStack_2bc,uStack_2c0);
  uStack_2b0 = 0xffffffff;
  TStack_260.CurrentBitIndex = uStack_2ac;
  TStack_260.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)local_180 >> 5;
  TStack_260._28_4_ = iStack_30c;
  TStack_260.BaseBitIndex = local_2a8;
  uStack_240 = CONCAT44(uStack_29c,iStack_2a0);
  bVar14 = (byte)local_180;
  local_268 = local_2c8;
  TStack_260.Array = local_2b8;
  if (((int)local_180 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  if (uVar19 != local_180) {
    puVar22 = (uint *)(local_1a8 + 0x10);
    if (local_188 != (uint *)0x0) {
      puVar22 = local_188;
    }
    uVar19 = -1 << (bVar14 & 0x1f) & puVar22[iVar16];
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = local_180;
      if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14e1aa190;
      uVar19 = puVar22[lVar15 + 1];
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_2f0.Value._0_4_ = (int)lVar15;
    uVar19 = (uVar18 - 1) + (int)local_2f0.Value;
    if ((int)local_180 < (int)uVar19) {
      uVar19 = local_180;
    }
  }
LAB_14e1aa190:
  do {
    plVar8 = local_268;
    if ((int)local_268[1] - *(int *)((longlong)local_268 + 0x34) != (int)uStack_240) {
      local_357 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_357);
    }
    lVar15 = (longlong)TStack_260.CurrentBitIndex;
    if (((TStack_260.CurrentBitIndex == uVar19) &&
        (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10))) &&
       (plVar8 == (longlong *)local_1a8)) break;
    lVar3 = *plVar8;
    pTVar12 = TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::Find(local_330,*(FName *)(lVar3 + lVar15 * 0x14));
    if ((pTVar12 == (TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    if (*(int *)&pTVar12->field_0x10 < 1) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_472631438341046048>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusConstant.cpp"
                         ,0xe0,"Values.Num() >= 1");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      bVar9 = false;
      goto LAB_14e1aa516;
    }
    if ((iVar25 < 0) || (*(int *)&pTVar12->field_0x10 <= iVar25)) {
      puVar13 = *(undefined4 **)&pTVar12->field_0x8;
    }
    else {
      if ((iVar25 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      puVar13 = (undefined4 *)(*(longlong *)&pTVar12->field_0x8 + (longlong)iVar25 * 4);
    }
    *(undefined4 *)(lVar3 + 8 + lVar15 * 0x14) = *puVar13;
    TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
  } while( true );
  local_108.Elements._44_4_ = 0x80;
  local_108.Elements._0_8_ = 0;
  local_108.Elements._8_8_ = 0;
  local_108.Elements._32_8_ = 0;
  local_108.Elements._40_4_ = 0;
  local_108.Elements._52_4_ = 0;
  local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_108.HashSize = 0;
  local_108.Elements._48_4_ = 0xffffffff;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=(&local_108,
            (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)local_1a8);
  local_210 = &local_108;
  local_218 = UE::Core::Private::Function::
              TFunctionRefCaller<`FOptimusConstantContainerInstance::EvaluateAndSaveResult'::__l28::<lambda_2>,TOptional<float>,FName>
              ::Call;
  if ((local_b8.TypeIndex != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_340[0] = Optimus::Expression::FEngine::Execute
                           (local_356,(FExpressionObject *)&local_b8,
                            (TFunctionRef<TOptional<float>___cdecl(FName)> *)&local_218);
  local_108.HashSize = 0;
  if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108.Elements);
  if (((local_350.Data <= (FScriptContainerElement *)local_340) &&
      ((FScriptContainerElement *)local_340 < local_350.Data + (longlong)local_344 * 4)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  if (local_348 == local_344) {
    local_348 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_350,&local_344);
  }
  iVar16 = local_348 + 1;
  iVar25 = iVar25 + 1;
  *(float *)(local_350.Data + (longlong)local_348 * 4) = local_340[0];
  local_348 = iVar16;
  if ((int)uVar23 <= iVar25) goto LAB_14e1aa449;
  goto LAB_14e1a9ff0;
LAB_14e1aa572:
  bVar9 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_472631438341046084>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusConstant.cpp"
                     ,0xbc,"NumInvocations == DependentConstant.Value.Num()");
  if (bVar9) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  bVar9 = false;
  goto LAB_14e1aa5a1;
LAB_14e1aa449:
  pTVar6 = local_2d0;
  local_2d8 = local_2e0;
  TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FOptimusConstantIdentifier_const_&>_>
            (local_2d0,&local_338,(bool *)&local_2d8);
  iVar25 = local_348;
  _Src.Data = local_350.Data;
  pFVar20 = (ForAnyElementType *)
            (*(longlong *)&pTVar6->Elements + 0x18 + (longlong)(int)local_338.Key * 0x30);
  if (pFVar20 != &local_350) {
    lVar15 = (longlong)local_348;
    piVar2 = (int *)((longlong)&pFVar20[1].Data + 4);
    iVar16 = *piVar2;
    *(int *)&pFVar20[1].Data = local_348;
    if ((local_348 == 0) && (iVar16 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_348,iVar16,pFVar20,local_348,piVar2);
      if (iVar25 != 0) {
        memcpy(pFVar20->Data,_Src.Data,lVar15 << 2);
      }
    }
  }
  bVar9 = true;
LAB_14e1aa516:
  if (local_350.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data);
  }
LAB_14e1aa52c:
  if ((1 < (ulonglong)local_b8.TypeIndex) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_b8.TypeIndex])(&local_b8);
LAB_14e1aa5a1:
  local_160 = 0;
  if (local_168 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_168);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1a8);
  return bVar9;
}

// GetConstantValuePerInvocation @ 14e1c0d70

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
FOptimusConstantContainerInstance::GetConstantValuePerInvocation
          (FOptimusConstantContainerInstance *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOptimusConstantIdentifier *param_1)

{
  void *_Src;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusConstantIdentifier>
                    ((TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this,uVar1,param_1);
  if (iVar2 == -1) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)&this->ConstantToValuePerInvocation;
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x18);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      iVar2 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      __return_storage_ptr__->ArrayNum = iVar2;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
        return __return_storage_ptr__;
      }
      goto LAB_14e1c0e20;
    }
  }
  __return_storage_ptr__->ArrayNum = 0;
LAB_14e1c0e20:
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// Initialize @ 14e1ec140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FOptimusConstantContainerInstance::Initialize
          (FOptimusConstantContainerInstance *this,FOptimusConstantContainer *param_1,
          TMap<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,0>_>
          *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  FName *pFVar3;
  FName FVar4;
  FOptimusConstantIdentifier *pFVar5;
  void *pvVar6;
  code *pcVar7;
  TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar8;
  FOptimusConstantContainer *pFVar9;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar14;
  FString *pFVar15;
  FString *pFVar16;
  undefined8 *puVar17;
  ForElementType<FSetElementId> _Dst;
  longlong lVar18;
  ulonglong uVar19;
  ForElementType<FSetElementId> _Src;
  int iVar20;
  FScriptContainerElement *pFVar21;
  FName FVar22;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar23;
  ForAnyElementType *pFVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  uint uVar27;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar28;
  TMap<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *this_00;
  uint uVar29;
  FName *pFVar30;
  int iVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  undefined1 *puVar33;
  uint *puVar34;
  FOptimusConstantIdentifier *pFVar35;
  FOptimusConstantIdentifier *pFVar36;
  float fVar37;
  undefined1 auStackY_448 [32];
  undefined1 local_408;
  undefined1 local_407;
  undefined1 local_406;
  undefined1 local_405;
  undefined1 local_404;
  undefined1 local_403;
  undefined1 local_402 [2];
  uint local_400;
  ForAnyElementType local_3f8;
  undefined8 local_3f0;
  TArray<float,TSizedDefaultAllocator<32>_> local_3e8;
  FScriptContainerElement *local_3d8;
  uint local_3d0;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *local_3c8;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *local_3c0;
  TMap<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  FName local_3a0;
  TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_398;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *local_390;
  undefined8 uStack_388;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_380;
  uint uStack_378;
  int iStack_374;
  int iStack_370;
  undefined4 uStack_36c;
  int local_368;
  undefined4 uStack_364;
  longlong local_360;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_358;
  FName local_338;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *local_330;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *local_328;
  FOptimusConstantContainer *local_320;
  int local_318;
  int local_314;
  FString local_310;
  FString local_300;
  int local_2f0;
  FName *local_2e8;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *local_2e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d8;
  undefined8 uStack_2b8;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a8;
  undefined8 uStack_288;
  FString local_280;
  FString local_270;
  TArray<float,TSizedDefaultAllocator<32>_> local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FOptimusConstantIdentifier local_218;
  FOptimusConstantIdentifier local_1f8;
  FString local_1d8 [2];
  undefined4 local_1ac;
  undefined1 local_1a8 [32];
  void *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  void *local_168;
  undefined4 local_160;
  TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  local_158;
  TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  local_108;
  void *local_b8;
  undefined8 local_b0;
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_3d0 = 0;
  iVar20 = (param_1->KernelContainers).ArrayNum;
  if (iVar20 < 1) {
    return true;
  }
  local_360 = 0;
  local_3b8 = param_2;
  local_398 = (TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)this;
  local_320 = param_1;
  do {
    pFVar9 = local_320;
    lVar18 = local_360;
    this_00 = local_3b8;
    uVar29 = 0;
    if ((int)local_3d0 < iVar20) {
      uVar29 = ~local_3d0 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    pFVar21 = (pFVar9->KernelContainers).AllocatorInstance.Data + lVar18 * 0x70;
    iVar20 = *(int *)(pFVar21 + 8);
    pFVar30 = *(FName **)pFVar21;
    pFVar3 = pFVar30 + (longlong)iVar20 * 9;
    local_3d8 = pFVar21;
    while( true ) {
      if (*(int *)(pFVar21 + 8) != iVar20) {
        local_408 = 0;
        `TCheckedPointerIterator<FOptimusConstant_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_408);
      }
      if (pFVar30 == pFVar3) break;
      if ((pFVar30[3] == (FName)0x0) || (pFVar30[5] == (FName)0x0)) {
        if ((int)pFVar30[7].ComparisonIndex.Value < 2) {
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_472631438341046213>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusConstant.cpp"
                              ,0x3b,"!InputConstant.Definition.Expression.IsEmpty()");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          goto LAB_14e1ec2d6;
        }
        local_1a8._0_8_ = (FScriptContainerElement *)0x0;
        local_1a8._8_8_ = 0;
        local_188 = (void *)0x0;
        local_180 = 0;
        local_17c = 0x80;
        local_178 = 0xffffffff;
        local_174 = 0;
        local_168 = (void *)0x0;
        local_160 = 0;
        local_b8 = (void *)0x0;
        local_b0 = 0;
        local_98 = (void *)0x0;
        local_90 = 0;
        local_8c = 0x80;
        local_88 = 0xffffffff;
        local_84 = 0;
        local_78 = (void *)0x0;
        local_70 = 0;
        pTVar14 = TMapBase<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                  ::FindChecked((TMapBase<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                                 *)this_00,pFVar30[8].ComparisonIndex.Value);
        local_218.NodePath = *pFVar30;
        local_218.GroupName = pFVar30[1];
        local_218.ConstantName = pFVar30[2];
        bVar11 = EvaluateAndSaveResult(this,&local_218,(FString *)(pFVar30 + 6),pTVar14);
        local_70 = 0;
        if (!bVar11) {
          if (local_78 != (void *)0x0) {
            FMemory::Free(local_78);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&local_b8,0);
          if (local_98 != (void *)0x0) {
            FMemory::Free(local_98);
          }
          if (local_b8 != (void *)0x0) {
            FMemory::Free(local_b8);
          }
          local_160 = 0;
          if (local_168 != (void *)0x0) {
            FMemory::Free(local_168);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_1a8,0);
          if (local_188 != (void *)0x0) {
            FMemory::Free(local_188);
          }
          if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_1a8._0_8_);
          }
          return false;
        }
        if (local_78 != (void *)0x0) {
          FMemory::Free(local_78);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&local_b8,0);
        if (local_98 != (void *)0x0) {
          FMemory::Free(local_98);
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        local_160 = 0;
        if (local_168 != (void *)0x0) {
          FMemory::Free(local_168);
        }
        bVar11 = local_1a8._12_4_ != 0;
        local_1a8._8_8_ = (ulonglong)(uint)local_1a8._12_4_ << 0x20;
        if (bVar11) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,0,(ForAnyElementType *)local_1a8,0,(int *)(local_1a8 + 0xc));
        }
        local_178 = 0xffffffff;
        local_174 = 0;
        local_180 = 0;
        if (0x80 < local_17c) {
          local_17c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),0);
        }
        if (local_188 != (void *)0x0) {
          FMemory::Free(local_188);
        }
        if ((FScriptContainerElement *)local_1a8._0_8_ == (FScriptContainerElement *)0x0)
        goto LAB_14e1ec2d6;
        FMemory::Free((void *)local_1a8._0_8_);
        pFVar30 = pFVar30 + 9;
      }
      else {
        pTVar13 = GetConstantValuePerInvocation
                            (this,&local_260,(FOptimusConstantIdentifier *)(pFVar30 + 3));
        local_2e8 = pFVar30;
        TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<FOptimusConstantIdentifier_const_&>_>
                  ((TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)this,(TKeyInitializer<FOptimusConstantIdentifier_const_&> *)&local_3b0,
                   (bool *)&local_2e8);
        pTVar28 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                  (*(longlong *)
                    &((TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                       *)this)->Elements + (longlong)(int)local_3b0 * 0x30 + 0x18);
        if (pTVar28 != pTVar13) {
          pFVar21 = (pTVar28->AllocatorInstance).Data;
          if (pFVar21 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar21);
          }
          (pTVar28->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
          (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar28->ArrayNum = pTVar13->ArrayNum;
          pTVar28->ArrayMax = pTVar13->ArrayMax;
          pTVar13->ArrayNum = 0;
          pTVar13->ArrayMax = 0;
        }
        pFVar21 = local_3d8;
        this_00 = local_3b8;
        if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.AllocatorInstance.Data);
          pFVar21 = local_3d8;
          this_00 = local_3b8;
        }
LAB_14e1ec2d6:
        pFVar30 = pFVar30 + 9;
      }
    }
    local_108.Pairs.Elements._0_8_ = 0;
    local_108.Pairs.Elements._32_8_ = 0;
    pTVar14 = (TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
               *)(pFVar21 + 0x30);
    local_108.Pairs.Elements._40_4_ = 0;
    local_108.Pairs.Elements._52_4_ = 0;
    local_108.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_108.Pairs.HashSize = 0;
    pTVar23 = (TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
               *)(pFVar21 + 0x20);
    local_108.Pairs.Elements._8_8_ = 0;
    local_108.Pairs.Elements._44_4_ = 0x80;
    local_108.Pairs.Elements._48_4_ = 0xffffffff;
    local_358._padding_._0_4_ = 0;
    local_358._padding_._4_4_ = 1;
    local_358.UnvisitedBitMask = 0xffffffff;
    local_358.CurrentBitIndex = 0;
    local_358.BaseBitIndex = 0;
    local_3c8 = pTVar14;
    local_358.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar14;
    local_330 = pTVar23;
    if (*(int *)(pFVar21 + 0x48) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_358);
    }
    uVar29 = *(uint *)(pFVar21 + 0x48);
    local_368 = *(int *)(pFVar21 + 0x28) - *(int *)(pFVar21 + 0x54);
    uStack_388 = CONCAT44(local_358._padding_._4_4_,(undefined4)local_358._padding_);
    iStack_374 = local_358.CurrentBitIndex;
    uStack_378 = local_358.UnvisitedBitMask;
    uStack_36c = local_358._28_4_;
    iStack_370 = local_358.BaseBitIndex;
    uVar26 = uVar29 & 0xffffffe0;
    pTStack_380 = local_358.Array;
    iVar20 = (int)uVar29 >> 5;
    uStack_288 = CONCAT44(uStack_364,local_368);
    TStack_2a8.Array = local_358.Array;
    local_400 = uVar29;
    local_390 = pTVar23;
    local_2b0 = pTVar23;
    TStack_2a8._padding_ = uStack_388;
    TStack_2a8._16_8_ = _uStack_378;
    TStack_2a8._24_8_ = _iStack_370;
    if (((int)uVar29 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    uVar27 = *(uint *)(pFVar21 + 0x48);
    if (uVar29 != uVar27) {
      pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar14;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar21 + 0x40) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar32 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar21 + 0x40);
      }
      uVar29 = -1 << ((byte)uVar29 & 0x1f) &
               *(uint *)((pTVar32->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
      while (uVar29 == 0) {
        lVar18 = (longlong)iVar20;
        uVar26 = uVar26 + 0x20;
        iVar20 = iVar20 + 1;
        local_400 = uVar27;
        uVar29 = uVar27;
        if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14e1ec681;
        uVar29 = *(uint *)((pTVar32->AllocatorInstance).InlineData + lVar18 * 4 + 4);
      }
      uVar19 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_318 = (int)lVar18;
      local_400 = local_318 + -1 + uVar26;
      uVar29 = local_400;
      if ((int)uVar27 < (int)local_400) {
        local_400 = uVar27;
        uVar29 = uVar27;
      }
    }
LAB_14e1ec681:
    while( true ) {
      pTVar10 = local_2b0;
      if (*(int *)&local_2b0->field_0x8 - *(int *)&local_2b0->field_0x34 != (int)uStack_288) {
        local_407 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_407);
      }
      if (((TStack_2a8.CurrentBitIndex == uVar29) &&
          ((TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
            *)TStack_2a8.Array == pTVar14)) && (pTVar10 == pTVar23)) break;
      lVar18 = *(longlong *)pTVar10;
      pFVar3 = (FName *)(lVar18 + (longlong)TStack_2a8.CurrentBitIndex * 0x14);
      pTVar14 = TMapBase<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                ::FindChecked((TMapBase<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                               *)local_3b8,
                              *(int *)(lVar18 + 8 + (longlong)TStack_2a8.CurrentBitIndex * 0x14));
      iVar20 = *(int *)&pTVar14->field_0x28;
      puVar1 = &pTVar14->field_0x10;
      uVar29 = 1;
      iVar31 = 0;
      iStack_370 = 0;
      iStack_374 = 0;
      if (iVar20 != 0) {
        puVar34 = (uint *)puVar1;
        if (*(uint **)&pTVar14->field_0x20 != (uint *)0x0) {
          puVar34 = *(uint **)&pTVar14->field_0x20;
        }
        uVar26 = *puVar34;
        iStack_370 = 0;
        while (uVar26 == 0) {
          lVar18 = (longlong)iVar31;
          iStack_370 = iStack_370 + 0x20;
          iVar31 = iVar31 + 1;
          iStack_374 = iVar20;
          if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar31) goto LAB_14e1ec76d;
          uVar26 = puVar34[lVar18 + 1];
        }
        uVar29 = -uVar26 & uVar26;
        uVar19 = (ulonglong)uVar29 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_314 = (int)lVar18;
        iStack_374 = local_314 + -1 + iStack_370;
        if (iVar20 < iStack_374) {
          iStack_374 = iVar20;
        }
      }
LAB_14e1ec76d:
      uVar26 = *(uint *)&pTVar14->field_0x28;
      uVar27 = uVar26 & 0xffffffe0;
      local_368 = *(int *)&pTVar14->field_0x8 - *(int *)&pTVar14->field_0x34;
      uStack_388 = CONCAT44(uVar29,iVar31);
      uStack_378 = 0xffffffff;
      uStack_36c = local_1ac;
      TStack_2d8._padding_ = uStack_388;
      iVar31 = (int)uVar26 >> 5;
      uStack_2b8 = CONCAT44(uStack_364,local_368);
      TStack_2d8.UnvisitedBitMask = 0xffffffff;
      TStack_2d8.CurrentBitIndex = iStack_374;
      TStack_2d8.BaseBitIndex = iStack_370;
      TStack_2d8._28_4_ = local_1ac;
      local_3c0 = pTVar14;
      local_390 = pTVar14;
      pTStack_380 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_2e0 = pTVar14;
      TStack_2d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar26 < 0) || (iVar20 < (int)uVar26)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      uVar29 = *(uint *)&pTVar14->field_0x28;
      if (uVar26 != uVar29) {
        puVar33 = puVar1;
        if (*(undefined1 **)&pTVar14->field_0x20 != (undefined1 *)0x0) {
          puVar33 = *(undefined1 **)&pTVar14->field_0x20;
        }
        uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar33 + (longlong)iVar31 * 4);
        while (uVar26 == 0) {
          lVar18 = (longlong)iVar31;
          uVar27 = uVar27 + 0x20;
          iVar31 = iVar31 + 1;
          uVar26 = uVar29;
          if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
          goto LAB_14e1ec870;
          uVar26 = *(uint *)(puVar33 + lVar18 * 4 + 4);
        }
        uVar19 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_2f0 = (int)lVar18;
        uVar26 = local_2f0 + -1 + uVar27;
        if ((int)uVar29 < (int)uVar26) {
          uVar26 = uVar29;
        }
      }
LAB_14e1ec870:
      while( true ) {
        pTVar23 = local_2e0;
        if (*(int *)&local_2e0->field_0x8 - *(int *)&local_2e0->field_0x34 != (int)uStack_2b8) {
          local_406 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_406);
        }
        if (((TStack_2d8.CurrentBitIndex == uVar26) &&
            (TStack_2d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar23 == pTVar14)) break;
        pFVar30 = (FName *)((longlong)TStack_2d8.CurrentBitIndex * 0x20 + *(longlong *)pTVar23);
        if (*pFVar3 == (FName)0x0) {
          TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
          ::Emplace<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>
                    (&local_108,pFVar30,(TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar30 + 1));
        }
        else {
          pFVar15 = ::FName::ToString(pFVar30,&local_240);
          pFVar16 = ::FName::ToString(pFVar3,&local_250);
          ::FString::ConcatFC(&local_280,pFVar16,L".");
          ::FString::ConcatFF(&local_310,&local_280,pFVar15);
          FVar25.Data = (FScriptContainerElement *)L"";
          if (local_310.Data.ArrayNum != 0) {
            FVar25.Data = local_310.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_338,(wchar_t *)FVar25.Data);
          if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_310.Data.AllocatorInstance.Data);
          }
          if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_280.Data.AllocatorInstance.Data);
          }
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
          FVar22 = pFVar30[1];
          fVar37 = 0.0;
          uVar29 = pFVar30[2].ComparisonIndex.Value;
          FVar4 = (FName)((longlong)FVar22 + (longlong)(int)uVar29 * 4);
          while( true ) {
            if (pFVar30[2].ComparisonIndex.Value != uVar29) {
              local_405 = 0;
              `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_405);
            }
            if (FVar22 == FVar4) break;
            fVar37 = fVar37 + *(float *)FVar22;
            FVar22 = (FName)((longlong)FVar22 + 4);
          }
          local_3b0._4_4_ = fVar37;
          pTVar13 = TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                    ::Emplace<FName_const_&>(&local_108,&local_338);
          TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
                    (pTVar13,(float *)((longlong)&local_3b0 + 4),1,pTVar13->ArrayMax);
          pTVar14 = local_3c0;
        }
        TStack_2d8.UnvisitedBitMask = TStack_2d8.UnvisitedBitMask & ~TStack_2d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d8);
      }
      TStack_2a8.UnvisitedBitMask = TStack_2a8.UnvisitedBitMask & ~TStack_2a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a8);
      pTVar23 = local_330;
      pTVar14 = local_3c8;
      uVar29 = local_400;
    }
    local_400 = *(uint *)(local_3d8 + 0x18);
    uVar19 = (ulonglong)(int)local_400;
    pTVar14 = *(TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                **)(local_3d8 + 0x10);
    local_3c8 = (TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                 *)((longlong)&pTVar14->field_0x0 + uVar19 * 9 * 8);
    pFVar36 = (FOptimusConstantIdentifier *)&pTVar14->field_0x18;
    pTVar23 = local_3c8;
    pFVar21 = local_3d8;
    this = (FOptimusConstantContainerInstance *)local_398;
    while( true ) {
      local_3c0 = pTVar14;
      if (*(int *)(pFVar21 + 0x18) != (int)uVar19) {
        local_404 = 0;
        `TCheckedPointerIterator<FOptimusConstant_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_404);
      }
      iVar20 = local_108.Pairs.HashSize;
      if (pTVar14 == pTVar23) break;
      if ((pFVar36->NodePath == (FName)0x0) || (pFVar36->ConstantName == (FName)0x0)) {
        if ((int)pFVar36[1].GroupName.ComparisonIndex.Value < 2) {
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_472631438341046152>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusConstant.cpp"
                              ,0x78,"!OutputConstant.Definition.Expression.IsEmpty()");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        else {
          lVar18 = (longlong)local_108.Pairs.HashSize;
          local_158.Pairs.Elements._0_8_ = 0;
          local_158.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_158.Pairs.Elements._8_8_ = 0;
          local_158.Pairs.Elements._32_8_ = 0;
          local_158.Pairs.Elements._40_4_ = 0;
          local_158.Pairs.Elements._44_4_ = 0x80;
          local_158.Pairs.Elements._48_4_ = 0xffffffff;
          local_158.Pairs.Elements._52_4_ = 0;
          local_158.Pairs.HashSize = 0;
          if (1 < (uint)local_108.Pairs.HashSize) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_158.Pairs.Hash.SecondaryData,0,
                       local_108.Pairs.HashSize,4);
          }
          _Src = (ForElementType<FSetElementId>)&local_108.Pairs.Hash;
          if (local_108.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            _Src = local_108.Pairs.Hash.SecondaryData;
          }
          _Dst = (ForElementType<FSetElementId>)&local_158.Pairs.Hash;
          if (local_158.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            _Dst = local_158.Pairs.Hash.SecondaryData;
          }
          if (iVar20 != 0) {
            memcpy((void *)_Dst,(void *)_Src,lVar18 << 2);
          }
          local_158.Pairs.HashSize = iVar20;
          TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&local_158,
                      (TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&local_108);
          iVar20 = *(int *)(pFVar21 + 8);
          pFVar35 = *(FOptimusConstantIdentifier **)pFVar21;
          pFVar5 = pFVar35 + (longlong)iVar20 * 3;
          while( true ) {
            if (*(int *)(pFVar21 + 8) != iVar20) {
              local_403 = 0;
              `TCheckedPointerIterator<FOptimusConstant_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&local_403);
            }
            this = (FOptimusConstantContainerInstance *)local_398;
            pTVar14 = local_3c0;
            if (pFVar35 == pFVar5) break;
            uVar29 = ::GetTypeHash(pFVar35);
            pTVar8 = local_398;
            iVar31 = TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FOptimusConstantIdentifier>(local_398,uVar29,pFVar35);
            local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (iVar31 == -1) {
LAB_14e1ecd87:
              local_3e8.ArrayNum = 0;
              local_3e8.ArrayMax = 0;
            }
            else {
              lVar18 = (longlong)iVar31 * 0x30 + *(longlong *)&pTVar8->Elements;
              puVar17 = (undefined8 *)(lVar18 + 0x18);
              if (lVar18 == 0) {
                puVar17 = (undefined8 *)0x0;
              }
              if (puVar17 == (undefined8 *)0x0) goto LAB_14e1ecd87;
              iVar31 = *(int *)(puVar17 + 1);
              pvVar6 = (void *)*puVar17;
              local_3e8.ArrayNum = iVar31;
              if (iVar31 == 0) {
                local_3e8.ArrayNum = 0;
                local_3e8.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar31,0,&local_3e8.AllocatorInstance,iVar31,&local_3e8.ArrayMax);
                memcpy(local_3e8.AllocatorInstance.Data,pvVar6,(longlong)iVar31 << 2);
              }
            }
            if (pFVar35->GroupName == (FName)0x0) {
              local_3a0 = pFVar35->ConstantName;
            }
            else {
              pFVar15 = ::FName::ToString(&pFVar35->ConstantName,&local_230);
              pFVar16 = ::FName::ToString(&pFVar35->GroupName,local_1d8);
              ::FString::ConcatFC(&local_270,pFVar16,L".");
              ::FString::ConcatFF(&local_300,&local_270,pFVar15);
              FVar25.Data = (FScriptContainerElement *)L"";
              if (local_300.Data.ArrayNum != 0) {
                FVar25.Data = local_300.Data.AllocatorInstance.Data;
              }
              ::FName::FName(&local_3a0,(wchar_t *)FVar25.Data);
              if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_300.Data.AllocatorInstance.Data);
              }
              if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_270.Data.AllocatorInstance.Data);
              }
              if (local_1d8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8[0].Data.AllocatorInstance.Data);
              }
              if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_230.Data.AllocatorInstance.Data);
              }
            }
            if (pFVar35->GroupName == pFVar36[-1].GroupName) {
              pTVar13 = TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                        ::Emplace<FName_const_&>(&local_158,&local_3a0);
              FVar25.Data = local_3e8.AllocatorInstance.Data;
              if (pTVar13 != &local_3e8) {
                iVar31 = local_3e8.ArrayNum;
                lVar18 = (longlong)local_3e8.ArrayNum;
                piVar2 = &pTVar13->ArrayMax;
                pTVar13->ArrayNum = local_3e8.ArrayNum;
                if ((local_3e8.ArrayNum == 0) && (*piVar2 == 0)) {
                  *piVar2 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,local_3e8.ArrayNum,*piVar2,&pTVar13->AllocatorInstance,
                             local_3e8.ArrayNum,piVar2);
                  if (iVar31 != 0) {
                    memcpy((pTVar13->AllocatorInstance).Data,FVar25.Data,lVar18 << 2);
                  }
                }
              }
            }
            else {
              fVar37 = 0.0;
              iVar31 = local_3e8.ArrayNum;
              pFVar21 = local_3e8.AllocatorInstance.Data + (longlong)local_3e8.ArrayNum * 4;
              FVar25.Data = local_3e8.AllocatorInstance.Data;
              while( true ) {
                if (local_3e8.ArrayNum != iVar31) {
                  local_402[0] = 0;
                  `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_402);
                }
                if (FVar25.Data == pFVar21) break;
                fVar37 = fVar37 + *(float *)FVar25.Data;
                FVar25.Data = FVar25.Data + 4;
              }
              local_3a8._4_4_ = fVar37;
              pTVar13 = TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                        ::Emplace<FName_const_&>(&local_158,&local_3a0);
              TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
                        (pTVar13,(float *)((longlong)&local_3a8 + 4),1,pTVar13->ArrayMax);
            }
            if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e8.AllocatorInstance.Data);
            }
            pFVar35 = pFVar35 + 3;
            pFVar21 = local_3d8;
          }
          local_1f8.NodePath.ComparisonIndex.Value = *(uint *)&local_3c0->field_0x0;
          local_1f8.NodePath.Number = *(uint *)&local_3c0->field_0x4;
          local_1f8.GroupName.ComparisonIndex.Value = *(uint *)&local_3c0->field_0x8;
          local_1f8.GroupName.Number = *(uint *)&local_3c0->field_0xc;
          local_1f8.ConstantName.ComparisonIndex.Value = *(uint *)&local_3c0->field_0x10;
          local_1f8.ConstantName.Number = *(uint *)&local_3c0->field_0x14;
          bVar11 = EvaluateAndSaveResult
                             ((FOptimusConstantContainerInstance *)local_398,&local_1f8,
                              (FString *)(pFVar36 + 1),
                              (TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                               *)&local_158);
          local_158.Pairs.HashSize = 0;
          if (!bVar11) {
            if (local_158.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_158.Pairs.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)&local_158);
            local_108.Pairs.HashSize = 0;
            if (local_108.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_108.Pairs.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)&local_108);
            return false;
          }
          if (local_158.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_158.Pairs.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&local_158);
          pTVar23 = local_3c8;
        }
LAB_14e1ecfba:
        uVar19 = (ulonglong)local_400;
        pTVar14 = (TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                   *)&pTVar14->field_0x48;
        pFVar36 = pFVar36 + 3;
      }
      else {
        uVar29 = ::GetTypeHash(pFVar36);
        iVar20 = TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FOptimusConstantIdentifier>
                           ((TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)this,uVar29,pFVar36);
        if (iVar20 == -1) {
LAB_14e1ecb26:
          local_3f8.Data = (FScriptContainerElement *)0x0;
          local_3f0 = 0;
        }
        else {
          local_3f8.Data = (FScriptContainerElement *)0x0;
          lVar18 = (longlong)iVar20 * 0x30 +
                   *(longlong *)
                    &((TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                       *)this)->Elements;
          puVar17 = (undefined8 *)(lVar18 + 0x18);
          if (lVar18 == 0) {
            puVar17 = (undefined8 *)0x0;
          }
          if (puVar17 == (undefined8 *)0x0) goto LAB_14e1ecb26;
          iVar20 = *(int *)(puVar17 + 1);
          pvVar6 = (void *)*puVar17;
          local_3f0 = CONCAT44(local_3f0._4_4_,iVar20);
          if (iVar20 == 0) {
            local_3f0 = 0;
            pFVar21 = local_3d8;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar20,0,&local_3f8,iVar20,(int *)((longlong)&local_3f0 + 4));
            memcpy(local_3f8.Data,pvVar6,(longlong)iVar20 << 2);
            pFVar21 = local_3d8;
          }
        }
        local_328 = pTVar14;
        TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<FOptimusConstantIdentifier_const_&>_>
                  ((TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)this,(TKeyInitializer<FOptimusConstantIdentifier_const_&> *)&local_3a8,
                   (bool *)&local_328);
        pFVar24 = (ForAnyElementType *)
                  (*(longlong *)
                    &((TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                       *)this)->Elements + (longlong)(int)local_3a8 * 0x30 + 0x18);
        if (pFVar24 != &local_3f8) {
          if (pFVar24->Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar24->Data);
          }
          pFVar24->Data = local_3f8.Data;
          local_3f8.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)&pFVar24[1].Data = (undefined4)local_3f0;
          *(undefined4 *)((longlong)&pFVar24[1].Data + 4) = local_3f0._4_4_;
          local_3f0 = 0;
        }
        pTVar23 = local_3c8;
        if (local_3f8.Data == (FScriptContainerElement *)0x0) goto LAB_14e1ecfba;
        FMemory::Free(local_3f8.Data);
        pTVar14 = (TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                   *)&pTVar14->field_0x48;
        uVar19 = (ulonglong)local_400;
        pFVar36 = pFVar36 + 3;
        pTVar23 = local_3c8;
      }
    }
    local_108.Pairs.HashSize = 0;
    if (local_108.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108.Pairs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_108);
    local_3d0 = local_3d0 + 1;
    local_360 = local_360 + 1;
    iVar20 = (local_320->KernelContainers).ArrayNum;
    if (iVar20 <= (int)local_3d0) {
      return true;
    }
  } while( true );
}

