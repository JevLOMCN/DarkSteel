// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// StaticStruct @ 14dc99a90

UScriptStruct * __cdecl FMovieGraphEvaluationResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphEvaluationResult,(UObject *)pUVar1,
                         L"MovieGraphEvaluationResult");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationResult.OuterSingleton;
}

// GetAllComponentsOfType<UPrimitiveComponent> @ 14dca6b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
FMovieGraphEvaluationResult::GetAllComponentsOfType<UPrimitiveComponent>
          (FMovieGraphEvaluationResult *this,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  AActor *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FMovieGraphEvaluationResult *pFVar7;
  FMovieGraphEvaluationResult *pFVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  int iVar11;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *pTVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  undefined1 auStackY_278 [32];
  undefined1 local_228;
  undefined1 local_227 [7];
  longlong local_220;
  ulonglong local_218;
  FMovieGraphEvaluationResult *local_210;
  int iStack_208;
  uint uStack_204;
  undefined1 *local_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  int local_1f0;
  int iStack_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  FMovieGraphEvaluationResult *local_1d0;
  UClass *local_1c8;
  UClass *local_1c0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *local_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  FMovieGraphEvaluationResult *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_108 [12];
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  iStack_208 = 0;
  puVar1 = &(this->MatchingActors).Elements.field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar11 = *(int *)&(this->MatchingActors).Elements.field_0x28;
  local_218 = 1;
  uStack_204 = 1;
  iStack_1f4 = 0;
  local_1f0 = iStack_208;
  if (iVar11 != 0) {
    puVar22 = *(uint **)&(this->MatchingActors).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uStack_204 = *puVar22;
    while (uStack_204 == 0) {
      iStack_208 = iStack_208 + 1;
      local_1f0 = local_1f0 + 0x20;
      uStack_204 = 1;
      iStack_1f4 = iVar11;
      if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iStack_208) goto LAB_14dca6c1c;
      uStack_204 = puVar22[iStack_208];
    }
    uStack_204 = ~(uStack_204 - 1) & uStack_204;
    uVar3 = (ulonglong)uStack_204 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1e0 = (int)lVar19;
    iStack_1f4 = local_1f0 + -1 + local_1e0;
    if (iVar11 < iStack_1f4) {
      iStack_1f4 = iVar11;
    }
  }
LAB_14dca6c1c:
  uVar21 = *(uint *)&(this->MatchingActors).Elements.field_0x28;
  iStack_1e8 = *(int *)&(this->MatchingActors).Elements.field_0x8 -
               *(int *)&(this->MatchingActors).Elements.field_0x34;
  uVar20 = uVar21 & 0xffffffe0;
  TStack_180._padding_ = CONCAT44(uStack_204,iStack_208);
  uStack_1f8 = 0xffffffff;
  TStack_180.CurrentBitIndex = iStack_1f4;
  TStack_180.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar21 >> 5;
  TStack_180._28_4_ = local_10c;
  TStack_180.BaseBitIndex = local_1f0;
  uStack_160 = CONCAT44(uStack_1e4,iStack_1e8);
  local_210 = this;
  local_200 = puVar1;
  local_1d0 = this;
  local_188 = this;
  TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar11 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar12;
  }
  uVar4 = *(uint *)&(this->MatchingActors).Elements.field_0x28;
  if (uVar21 != uVar4) {
    puVar16 = *(undefined1 **)&(this->MatchingActors).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar21 == 0) {
      iVar18 = iVar18 + 1;
      uVar20 = uVar20 + 0x20;
      uVar21 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar18) goto LAB_14dca6d1b;
      uVar21 = *(uint *)(puVar16 + (longlong)iVar18 * 4);
    }
    uVar3 = (ulonglong)(~(uVar21 - 1) & uVar21) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1dc = (int)lVar19;
    uVar21 = local_1dc + -1 + uVar20;
    if ((int)uVar4 < (int)uVar21) {
      uVar21 = uVar4;
    }
  }
LAB_14dca6d1b:
  while( true ) {
    pFVar8 = local_188;
    if (*(int *)&(local_188->MatchingActors).Elements.field_0x8 -
        *(int *)&(local_188->MatchingActors).Elements.field_0x34 != (int)uStack_160) {
      local_228 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_228);
    }
    pFVar7 = local_1d0;
    if (((TStack_180.CurrentBitIndex == uVar21) &&
        (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pFVar8 == local_1d0)) break;
    local_48 = (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)0x0;
    local_40 = 0;
    local_3c = 0x18;
    this_00 = *(AActor **)
               (*(longlong *)&(pFVar8->MatchingActors).Elements +
               (longlong)TStack_180.CurrentBitIndex * 0x10);
    if (this_00 != (AActor *)0x0) {
      pUVar13 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar13 != (UClass *)0x0) goto LAB_14dca6db4;
LAB_14dca6de7:
        pUVar14 = (UClass *)0x0;
      }
      else {
        if (pUVar13 == (UClass *)0x0) goto LAB_14dca6de7;
        UE::GC::MarkAsReachable((UObject *)pUVar13);
LAB_14dca6db4:
        pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar14 == (UClass *)0x0) goto LAB_14dca6de7;
        iVar11 = (int)pUVar14->_padding_;
        if (((int)pUVar13->_padding_ < iVar11) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar11 * 8) !=
            &pUVar14->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        pUVar14 = pUVar13;
        if (!bVar10) goto LAB_14dca6de7;
      }
      pUVar15 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar14 == pUVar15) {
        local_1c8 = pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        AActor::
        ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1c8,
                   (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)local_108);
      }
      else {
        local_1c0 = pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        AActor::
        ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1c0,
                   (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)local_108);
      }
    }
    if ((__return_storage_ptr__ == local_108) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar12;
    }
    lVar19 = (longlong)local_40;
    if (local_40 != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,local_40,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      pTVar12 = local_108;
      if (local_48 != (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar12 = local_48;
      }
      memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 8,pTVar12,
              lVar19 << 3);
      local_40 = 0;
    }
    if (local_48 != (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_48);
    }
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  }
  pTVar2 = &local_1d0->MatchingComponents;
  iStack_1b0 = 0;
  iVar11 = *(int *)&(local_1d0->MatchingComponents).Elements.field_0x28;
  puVar1 = &(local_1d0->MatchingComponents).Elements.field_0x10;
  local_198 = 0;
  iStack_19c = 0;
  if (iVar11 != 0) {
    puVar22 = *(uint **)&(local_1d0->MatchingComponents).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar21 = *puVar22;
    while (uVar21 == 0) {
      iStack_1b0 = iStack_1b0 + 1;
      local_198 = local_198 + 0x20;
      iStack_19c = iVar11;
      if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iStack_1b0) goto LAB_14dca6f7f;
      uVar21 = puVar22[iStack_1b0];
    }
    local_218 = (ulonglong)(~(uVar21 - 1) & uVar21);
    uVar3 = local_218 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1d8 = (int)lVar19;
    iStack_19c = local_1d8 + -1 + local_198;
    if (iVar11 < iStack_19c) {
      iStack_19c = iVar11;
    }
  }
LAB_14dca6f7f:
  uVar21 = *(uint *)&(local_1d0->MatchingComponents).Elements.field_0x28;
  uStack_1ac = (undefined4)local_218;
  uVar20 = uVar21 & 0xffffffe0;
  iStack_194 = iStack_1f4;
  iStack_190 = *(int *)&(local_1d0->MatchingComponents).Elements.field_0x8 -
               *(int *)&(local_1d0->MatchingComponents).Elements.field_0x34;
  uStack_1a0 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
  TStack_150.CurrentBitIndex = iStack_19c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar21 >> 5;
  TStack_150._28_4_ = iStack_1f4;
  TStack_150.BaseBitIndex = local_198;
  uStack_130 = CONCAT44(uStack_18c,iStack_190);
  local_1b8 = pTVar2;
  local_1a8 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar11 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar12;
  }
  uVar4 = *(uint *)&(pFVar7->MatchingComponents).Elements.field_0x28;
  if (uVar21 != uVar4) {
    puVar16 = *(undefined1 **)&(pFVar7->MatchingComponents).Elements.field_0x20;
    puVar17 = puVar1;
    if (puVar16 != (undefined1 *)0x0) {
      puVar17 = puVar16;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar21 == 0) {
      iVar18 = iVar18 + 1;
      uVar20 = uVar20 + 0x20;
      uVar21 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar18) goto LAB_14dca7080;
      uVar21 = *(uint *)(puVar17 + (longlong)iVar18 * 4);
    }
    uVar3 = (ulonglong)(~(uVar21 - 1) & uVar21) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1d4 = (int)lVar19;
    uVar21 = local_1d4 + -1 + uVar20;
    if ((int)uVar4 < (int)uVar21) {
      uVar21 = uVar4;
    }
  }
LAB_14dca7080:
  do {
    pTVar9 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_227[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_227);
    }
    if (((TStack_150.CurrentBitIndex == uVar21) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    {
      return __return_storage_ptr__;
    }
    lVar19 = *(longlong *)
              (*(longlong *)&pTVar9->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (lVar19 == 0) {
LAB_14dca71a3:
      local_220 = 0;
    }
    else {
      pUVar13 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar11 = (int)pUVar13->_padding_;
      if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < iVar11) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar13->_padding_)) goto LAB_14dca71a3;
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_220 = lVar19;
      if (((pFVar5 <= (FScriptContainerElement *)&local_220) &&
          ((FScriptContainerElement *)&local_220 <
           pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar12;
      }
      iVar11 = __return_storage_ptr__->ArrayNum;
      if (iVar11 == __return_storage_ptr__->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      *(longlong *)(pFVar5 + (longlong)iVar11 * 8) = local_220;
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// FMovieGraphEvaluationResult @ 14dcade30

FMovieGraphEvaluationResult * __thiscall
FMovieGraphEvaluationResult::FMovieGraphEvaluationResult
          (FMovieGraphEvaluationResult *this,
          TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_1,TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                   *param_2)

{
  *(undefined8 *)&(this->MatchingActors).Elements = 0;
  *(undefined8 *)&(this->MatchingActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MatchingActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MatchingActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MatchingActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MatchingActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MatchingActors).Elements.field_0x34 = 0;
  (this->MatchingActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MatchingActors).HashSize = 0;
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
  Move<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
            (&this->MatchingActors,param_1);
  *(undefined8 *)&(this->MatchingComponents).Elements = 0;
  *(undefined8 *)&(this->MatchingComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MatchingComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MatchingComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MatchingComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MatchingComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MatchingComponents).Elements.field_0x34 = 0;
  (this->MatchingComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MatchingComponents).HashSize = 0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
            (&this->MatchingComponents,param_2);
  return this;
}

// FMovieGraphEvaluationResult @ 14dcadec0

FMovieGraphEvaluationResult * __thiscall
FMovieGraphEvaluationResult::FMovieGraphEvaluationResult(FMovieGraphEvaluationResult *this)

{
  *(undefined8 *)&(this->MatchingActors).Elements = 0;
  *(undefined8 *)&(this->MatchingActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MatchingActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MatchingActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MatchingActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MatchingActors).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->MatchingActors).Elements.field_0x30 = 0xffffffff;
  (this->MatchingActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MatchingActors).HashSize = 0;
  *(undefined8 *)&(this->MatchingComponents).Elements = 0;
  *(undefined8 *)&(this->MatchingComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MatchingComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MatchingComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MatchingComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MatchingComponents).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->MatchingComponents).Elements.field_0x30 = 0xffffffff;
  (this->MatchingComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MatchingComponents).HashSize = 0;
  return this;
}

// operator() @ 14dcb5050

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FMovieGraphEvaluationResult::Intersect'::__l2::<lambda_1>::operator()
          (void *this,
          TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
          *param_1,TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                   *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *pTVar6;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  int iVar9;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint *puVar19;
  bool *pbVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  undefined1 local_res20 [8];
  undefined1 local_148 [4];
  uint local_144;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  TObjectPtr<UActorComponent> local_100;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar9 = *(int *)&(param_1->Elements).field_0x28;
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  local_120 = 0;
  iStack_138 = 0;
  uStack_134 = 1;
  iStack_124 = 0;
  if (iVar9 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar21;
    }
    uVar15 = *puVar18;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      iStack_124 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_14dcb50fe;
      uVar15 = puVar18[lVar11 + 1];
    }
    uStack_134 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_134 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_110 = (int)lVar11;
    iStack_124 = local_120 + -1 + local_110;
    if (iVar9 < iStack_124) {
      iStack_124 = iVar9;
    }
  }
LAB_14dcb50fe:
  uVar15 = *(uint *)&(param_1->Elements).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_118 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  TStack_88._padding_ = CONCAT44(uStack_134,iStack_138);
  uStack_128 = 0xffffffff;
  TStack_88.CurrentBitIndex = iStack_124;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = local_120;
  uStack_68 = CONCAT44(uStack_114,iStack_118);
  local_144 = uVar15;
  local_140 = param_1;
  local_130 = (undefined1 *)pTVar21;
  local_f8 = pTVar21;
  local_90 = param_1;
  TStack_88.Array = pTVar21;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar15 != uVar2) {
    puVar16 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar21;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar2;
      local_144 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14dcb5220;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_10c = (int)lVar11;
    uVar15 = local_10c + -1 + uVar14;
    local_144 = uVar15;
    if ((int)uVar2 < (int)uVar15) {
      uVar15 = uVar2;
      local_144 = uVar2;
    }
  }
LAB_14dcb5220:
  do {
    pTVar7 = local_90;
    if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
        (int)uStack_68) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_88.CurrentBitIndex == uVar15) && (TStack_88.Array == pTVar21)) &&
       (pTVar7 == param_1)) {
      return;
    }
    iVar9 = *(int *)&(param_2->Elements).field_0x28;
    puVar16 = &(param_2->Elements).field_0x10;
    iStack_e8 = 0;
    local_d0 = 0;
    pbVar20 = (bool *)((longlong)TStack_88.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements);
    uStack_e4 = 1;
    iStack_d4 = 0;
    if (iVar9 != 0) {
      puVar18 = *(uint **)&(param_2->Elements).field_0x20;
      puVar19 = (uint *)puVar16;
      if (puVar18 != (uint *)0x0) {
        puVar19 = puVar18;
      }
      uVar15 = *puVar19;
      while (uVar15 == 0) {
        lVar11 = (longlong)iStack_e8;
        local_d0 = local_d0 + 0x20;
        iStack_e8 = iStack_e8 + 1;
        iStack_d4 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_14dcb52ee;
        uVar15 = puVar19[lVar11 + 1];
      }
      uStack_e4 = -uVar15 & uVar15;
      uVar1 = (ulonglong)uStack_e4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_108 = (int)lVar11;
      iStack_d4 = local_d0 + -1 + local_108;
      if (iVar9 < iStack_d4) {
        iStack_d4 = iVar9;
      }
    }
LAB_14dcb52ee:
    uVar15 = *(uint *)&(param_2->Elements).field_0x28;
    iStack_cc = iStack_124;
    uVar14 = uVar15 & 0xffffffe0;
    iStack_c8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
    TStack_b8._padding_ = CONCAT44(uStack_e4,iStack_e8);
    uStack_d8 = 0xffffffff;
    TStack_b8.CurrentBitIndex = iStack_d4;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar15 >> 5;
    TStack_b8._28_4_ = iStack_124;
    TStack_b8.BaseBitIndex = local_d0;
    uStack_98 = CONCAT44(uStack_c4,iStack_c8);
    local_f0 = param_2;
    local_e0 = puVar16;
    local_c0 = param_2;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar16;
    if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)&(param_2->Elements).field_0x28;
    if (uVar15 != uVar2) {
      puVar3 = *(undefined1 **)&(param_2->Elements).field_0x20;
      puVar17 = puVar16;
      if (puVar3 != (undefined1 *)0x0) {
        puVar17 = puVar3;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
      while (uVar15 == 0) {
        lVar11 = (longlong)iVar13;
        uVar14 = uVar14 + 0x20;
        iVar13 = iVar13 + 1;
        uVar15 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14dcb5400;
        uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_104 = (int)lVar11;
      uVar15 = local_104 + -1 + uVar14;
      if ((int)uVar2 < (int)uVar15) {
        uVar15 = uVar2;
      }
    }
LAB_14dcb5400:
    while( true ) {
      pTVar6 = local_c0;
      if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
          (int)uStack_98) {
        local_148[0] = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
      }
      if (((TStack_b8.CurrentBitIndex == uVar15) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar16)) &&
         (pTVar6 == param_2)) break;
      if (*(longlong *)pbVar20 != 0) {
        pTVar10 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                            ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                              *)(*(longlong *)
                                  (*(longlong *)&pTVar6->Elements +
                                  (longlong)TStack_b8.CurrentBitIndex * 0x10) + 0x248));
        uVar1 = *(ulonglong *)pbVar20;
        uVar14 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        if (*(int *)&(pTVar10->Elements).field_0x8 != *(int *)&(pTVar10->Elements).field_0x34) {
          FVar4 = (pTVar10->Hash).SecondaryData;
          FVar12 = (ForElementType<FSetElementId>)&pTVar10->Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar12 = FVar4;
          }
          iVar9 = *(int *)((longlong)FVar12 +
                          (ulonglong)(pTVar10->HashSize - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
          if (iVar9 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)&pTVar10->Elements + (longlong)iVar9 * 0x10) == uVar1)
              {
                TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                ::Emplace<TObjectPtr<UActorComponent>_const_&>
                          ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                            *)(*(longlong *)this + 0x50),&local_100,pbVar20);
                break;
              }
              iVar9 = *(int *)(*(longlong *)&pTVar10->Elements + 8 + (longlong)iVar9 * 0x10);
            } while (iVar9 != -1);
          }
        }
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    pTVar21 = local_f8;
    uVar15 = local_144;
  } while( true );
}

// Append @ 14dcba770

void __thiscall
FMovieGraphEvaluationResult::Append
          (FMovieGraphEvaluationResult *this,FMovieGraphEvaluationResult *param_1)

{
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
  Append<FDefaultSetAllocator>(&this->MatchingActors,&param_1->MatchingActors);
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  ::Append<FDefaultSetAllocator>(&this->MatchingComponents,&param_1->MatchingComponents);
  return;
}

// Difference @ 14dcc0fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMovieGraphEvaluationResult * __thiscall
FMovieGraphEvaluationResult::Difference
          (FMovieGraphEvaluationResult *this,FMovieGraphEvaluationResult *__return_storage_ptr__,
          FMovieGraphEvaluationResult *param_1)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ForElementType<TObjectPtr<UActorComponent>_> FVar4;
  ulonglong uVar5;
  TObjectPtr<AActor_const_>_u_0 TVar6;
  TObjectPtr<UActorComponent_const_>_u_0 TVar7;
  AActor *pAVar8;
  UObject *pUVar9;
  code *pcVar10;
  undefined8 uVar11;
  FMovieGraphEvaluationResult *pFVar12;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar13;
  bool bVar14;
  int iVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar16;
  TObjectPtr<UClass>_u_0 TVar17;
  UClass *pUVar18;
  UClass *pUVar19;
  FMovieGraphEvaluationResult *pFVar20;
  UClass *pUVar21;
  UClass *pUVar22;
  byte bVar23;
  uint uVar24;
  ForElementType<TObjectPtr<UActorComponent>_> FVar25;
  ForElementType<AActor_*> FVar26;
  longlong lVar27;
  ForElementType<TObjectPtr<UActorComponent>_> FVar28;
  uint uVar29;
  uint uVar30;
  TObjectPtr<AActor_const_>_u_0 *pTVar31;
  TObjectPtr<UActorComponent_const_>_u_0 *pTVar32;
  int iVar33;
  uint uVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  uint *puVar37;
  uint *puVar38;
  int iVar39;
  undefined8 *puVar40;
  longlong *plVar41;
  undefined1 auStackY_6b8 [32];
  undefined1 local_668;
  undefined1 local_667;
  undefined1 local_666;
  undefined1 local_665;
  undefined1 local_664 [4];
  FMovieGraphEvaluationResult *local_660;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_658;
  undefined8 local_638;
  undefined1 local_630 [8];
  FMovieGraphEvaluationResult *local_628;
  undefined8 uStack_620;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  int local_600;
  undefined4 uStack_5fc;
  TObjectPtr<AActor_const_>_u_0 local_5f8;
  FMovieGraphEvaluationResult *local_5f0;
  int local_5e8;
  uint uStack_5e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5e0;
  uint local_5d8;
  uint uStack_5d4;
  uint uStack_5d0;
  undefined4 uStack_5cc;
  FMovieGraphEvaluationResult *local_5c8;
  TBitArray<FDefaultBitArrayAllocator> *local_5c0;
  FMovieGraphEvaluationResult *local_5b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5b0;
  undefined8 local_590;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_588;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_568;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_548;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_528;
  TObjectPtr<AActor_const_>_u_0 local_508;
  TObjectPtr<UActorComponent_const_>_u_0 local_500;
  TObjectPtr<UClass>_u_0 local_4f8;
  TObjectPtr<UClass>_u_0 local_4f0;
  TObjectPtr<AActor_const_>_u_0 local_4e8;
  TObjectPtr<UActorComponent_const_>_u_0 local_4e0;
  TObjectPtr<AActor_const_>_u_0 local_4d8;
  UClass *local_4d0;
  UClass *local_4c8;
  TObjectPtr<UClass>_u_0 local_4c0;
  TObjectPtr<UActorComponent_const_>_u_0 local_4b8;
  undefined1 local_4b0 [8];
  TObjectPtr<UActorComponent> local_4a8;
  TObjectPtr<AActor_const_>_u_0 local_4a0;
  int local_498;
  int local_494;
  int local_490;
  undefined1 local_488 [12];
  uint uStack_47c;
  TBitArray<FDefaultBitArrayAllocator> *local_478;
  undefined8 uStack_470;
  longlong local_468;
  int iStack_460;
  undefined4 uStack_45c;
  undefined1 local_458 [12];
  uint uStack_44c;
  TBitArray<FDefaultBitArrayAllocator> *local_448;
  undefined8 uStack_440;
  longlong local_438;
  int iStack_430;
  undefined4 uStack_42c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_428;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_420;
  undefined8 uStack_400;
  FMovieGraphEvaluationResult *local_3f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3f0;
  int iStack_3d0;
  undefined4 uStack_3cc;
  FMovieGraphEvaluationResult *local_3c8;
  longlong lStack_3c0;
  TBitArray<FDefaultBitArrayAllocator> *local_3b8;
  undefined8 uStack_3b0;
  int iStack_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  FMovieGraphEvaluationResult *local_398;
  longlong lStack_390;
  TBitArray<FDefaultBitArrayAllocator> *local_388;
  undefined8 uStack_380;
  int iStack_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  TRangedForConstIterator local_368;
  TRangedForConstIterator local_338;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_308;
  undefined4 local_2cc;
  undefined4 local_2ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_268;
  ForElementType<AActor_*> local_248;
  int local_1f0;
  int local_1ec;
  ForElementType<TObjectPtr<UActorComponent>_> local_1e8;
  int local_120;
  int local_11c;
  ForElementType<TObjectPtr<UActorComponent>_> local_118;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  local_5f0 = __return_storage_ptr__;
  local_5c8 = param_1;
  FMovieGraphEvaluationResult(__return_storage_ptr__);
  local_568._padding_._4_4_ = 1;
  puVar1 = &(this->MatchingActors).Elements.field_0x10;
  local_568._padding_._0_4_ = 0;
  local_568.UnvisitedBitMask = 0xffffffff;
  local_568.CurrentBitIndex = 0;
  local_568.BaseBitIndex = 0;
  local_568.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(this->MatchingActors).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_568);
  }
  TStack_658._padding_ = CONCAT44(local_568._padding_._4_4_,(undefined4)local_568._padding_);
  TStack_658._16_8_ = CONCAT44(local_568.CurrentBitIndex,local_568.UnvisitedBitMask);
  TStack_658._24_8_ = CONCAT44(local_568._28_4_,local_568.BaseBitIndex);
  local_638._0_4_ =
       *(int *)&(this->MatchingActors).Elements.field_0x8 -
       *(int *)&(this->MatchingActors).Elements.field_0x34;
  TStack_658.Array = local_568.Array;
  local_478 = local_568.Array;
  uStack_45c = local_638._4_4_;
  local_660 = this;
  local_488._0_8_ = this;
  unique0x10002ece = TStack_658._padding_;
  uStack_470 = TStack_658._16_8_;
  local_468 = TStack_658._24_8_;
  iStack_460 = (int)local_638;
  pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_2a8,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(this->MatchingActors).Elements.field_0x28);
  TStack_658._padding_ = pTVar16->_padding_;
  TStack_658.Array = pTVar16->Array;
  TStack_658.UnvisitedBitMask = pTVar16->UnvisitedBitMask;
  TStack_658.CurrentBitIndex = pTVar16->CurrentBitIndex;
  TStack_658._24_8_ = *(undefined8 *)&pTVar16->BaseBitIndex;
  local_638._0_4_ =
       *(int *)&(this->MatchingActors).Elements.field_0x8 -
       *(int *)&(this->MatchingActors).Elements.field_0x34;
  local_368.InitialNum = (int)local_638;
  local_368._44_4_ = local_638._4_4_;
  local_660 = this;
  local_368._padding_ = (longlong)this;
  local_368._padding_ = TStack_658._padding_;
  local_368._padding_ = (longlong)TStack_658.Array;
  local_368._padding_ = TStack_658._16_8_;
  local_368._padding_ = TStack_658._24_8_;
  bVar14 = TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_488,&local_368);
  if (bVar14) {
    do {
      pTVar31 = (TObjectPtr<AActor_const_>_u_0 *)
                ((longlong)uStack_470._4_4_ * 0x10 +
                *(longlong *)
                 &((TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                    *)local_488._0_8_)->Elements);
      TVar6 = (TObjectPtr<AActor_const_>_u_0)pTVar31->DebugPtr;
      if (TVar6.DebugPtr != (AActor *)0x0) {
        local_508 = TVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr),
           UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
        uVar24 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
        uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
        iVar15 = TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<AActor_const_>_>
                           (&param_1->MatchingActors,uVar24 >> 0x10 ^ uVar24,
                            (TObjectPtr<AActor_const_> *)&local_508.ObjectPtr);
        if (iVar15 == -1) {
          TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<AActor>_const_&>
                    (&__return_storage_ptr__->MatchingActors,(TObjectPtr<AActor> *)local_4b0,
                     (bool *)pTVar31);
        }
      }
      uStack_470 = CONCAT44(uStack_470._4_4_,(uint)uStack_470 & ~uStack_47c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_488 + 8));
      bVar14 = TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_488,&local_368);
    } while (bVar14);
  }
  puVar1 = &(this->MatchingComponents).Elements.field_0x10;
  local_548._padding_._0_4_ = 0;
  pTVar2 = &this->MatchingComponents;
  local_548._padding_._4_4_ = 1;
  local_548.UnvisitedBitMask = 0xffffffff;
  local_548.CurrentBitIndex = 0;
  local_548.BaseBitIndex = 0;
  local_548.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(this->MatchingComponents).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_548);
  }
  TStack_658._padding_ = CONCAT44(local_548._padding_._4_4_,(undefined4)local_548._padding_);
  TStack_658._16_8_ = CONCAT44(local_548.CurrentBitIndex,local_548.UnvisitedBitMask);
  TStack_658._24_8_ = CONCAT44(local_548._28_4_,local_548.BaseBitIndex);
  iStack_430 = *(int *)&(this->MatchingComponents).Elements.field_0x8 -
               *(int *)&(this->MatchingComponents).Elements.field_0x34;
  TStack_658.Array = local_548.Array;
  local_448 = local_548.Array;
  uStack_42c = local_638._4_4_;
  local_660 = (FMovieGraphEvaluationResult *)pTVar2;
  local_458._0_8_ = pTVar2;
  unique0x10002eee = TStack_658._padding_;
  uStack_440 = TStack_658._16_8_;
  local_438 = TStack_658._24_8_;
  local_638._0_4_ = iStack_430;
  pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_288,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(this->MatchingComponents).Elements.field_0x28);
  TStack_658._padding_ = pTVar16->_padding_;
  TStack_658.Array = pTVar16->Array;
  TStack_658.UnvisitedBitMask = pTVar16->UnvisitedBitMask;
  TStack_658.CurrentBitIndex = pTVar16->CurrentBitIndex;
  TStack_658._24_8_ = *(undefined8 *)&pTVar16->BaseBitIndex;
  local_638._0_4_ =
       *(int *)&(this->MatchingComponents).Elements.field_0x8 -
       *(int *)&(this->MatchingComponents).Elements.field_0x34;
  local_338.InitialNum = (int)local_638;
  local_338._44_4_ = local_638._4_4_;
  local_660 = (FMovieGraphEvaluationResult *)pTVar2;
  local_338._padding_ = (longlong)pTVar2;
  local_338._padding_ = TStack_658._padding_;
  local_338._padding_ = (longlong)TStack_658.Array;
  local_338._padding_ = TStack_658._16_8_;
  local_338._padding_ = TStack_658._24_8_;
  bVar14 = TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_458,&local_338);
  if (bVar14) {
    do {
      pTVar32 = (TObjectPtr<UActorComponent_const_>_u_0 *)
                ((longlong)uStack_440._4_4_ * 0x10 +
                *(longlong *)
                 (TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_458._0_8_);
      TVar7 = (TObjectPtr<UActorComponent_const_>_u_0)pTVar32->DebugPtr;
      if (TVar7.DebugPtr != (UActorComponent *)0x0) {
        local_500 = TVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr),
           UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
        }
        uVar24 = ((uint)((ulonglong)TVar7.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar7.DebugPtr >> 4)) * -0x7a143595;
        uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
        iVar15 = TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UActorComponent_const_>_>
                           (&param_1->MatchingComponents,uVar24 >> 0x10 ^ uVar24,
                            (TObjectPtr<UActorComponent_const_> *)&local_500.ObjectPtr);
        if (iVar15 == -1) {
          TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
          ::Emplace<TObjectPtr<UActorComponent>_const_&>
                    (&__return_storage_ptr__->MatchingComponents,
                     (TObjectPtr<UActorComponent> *)(local_4b0 + 4),(bool *)pTVar32);
        }
      }
      uStack_440 = CONCAT44(uStack_440._4_4_,(uint)uStack_440 & ~uStack_44c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_458 + 8));
      bVar14 = TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_458,&local_338);
    } while (bVar14);
  }
  local_11c = 0x18;
  local_1e8.SecondaryData = (ForElementType<TObjectPtr<UActorComponent>_>)0x0;
  puVar1 = &(__return_storage_ptr__->MatchingActors).Elements.field_0x10;
  local_120 = 0;
  local_248.SecondaryData = (ForElementType<AActor_*>)0x0;
  local_1f0 = 0;
  local_1ec = 10;
  local_528._padding_._0_4_ = 0;
  local_528._padding_._4_4_ = 1;
  local_528.UnvisitedBitMask = 0xffffffff;
  local_528.CurrentBitIndex = 0;
  local_528.BaseBitIndex = 0;
  local_528.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_528);
  }
  TStack_658._padding_ = CONCAT44(local_528._padding_._4_4_,(undefined4)local_528._padding_);
  TStack_658.CurrentBitIndex = local_528.CurrentBitIndex;
  TStack_658.UnvisitedBitMask = local_528.UnvisitedBitMask;
  TStack_658._28_4_ = local_528._28_4_;
  TStack_658.BaseBitIndex = local_528.BaseBitIndex;
  iStack_3d0 = *(int *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x8 -
               *(int *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x34;
  TStack_658.Array = local_528.Array;
  TStack_3f0.Array = local_528.Array;
  uStack_3cc = local_638._4_4_;
  local_660 = __return_storage_ptr__;
  local_3f8 = __return_storage_ptr__;
  TStack_3f0._padding_ = TStack_658._padding_;
  TStack_3f0._16_8_ = TStack_658._16_8_;
  TStack_3f0._24_8_ = TStack_658._24_8_;
  local_638._0_4_ = iStack_3d0;
  pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_268,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x28);
  TStack_658._padding_ = pTVar16->_padding_;
  TStack_658.Array = pTVar16->Array;
  TStack_658.UnvisitedBitMask = pTVar16->UnvisitedBitMask;
  TStack_658.CurrentBitIndex = pTVar16->CurrentBitIndex;
  TStack_658.BaseBitIndex = pTVar16->BaseBitIndex;
  TStack_658._28_4_ = *(undefined4 *)&pTVar16->field_0x1c;
  local_638 = CONCAT44(local_638._4_4_,
                       *(int *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x8 -
                       *(int *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x34);
  uStack_3a0 = local_638;
  local_660 = __return_storage_ptr__;
  local_3c8 = __return_storage_ptr__;
  lStack_3c0 = TStack_658._padding_;
  local_3b8 = TStack_658.Array;
  uStack_3b0 = TStack_658._16_8_;
  local_3a8 = TStack_658._24_8_;
  while( true ) {
    pFVar20 = local_3f8;
    if (*(int *)&(local_3f8->MatchingActors).Elements.field_0x8 -
        *(int *)&(local_3f8->MatchingActors).Elements.field_0x34 != iStack_3d0) {
      local_668 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_668);
    }
    iVar15 = local_1f0;
    if (((TStack_3f0.CurrentBitIndex == iStack_3ac) && (TStack_3f0.Array == local_3b8)) &&
       (pFVar20 == local_3c8)) break;
    pAVar8 = *(AActor **)
              (*(longlong *)&(pFVar20->MatchingActors).Elements +
              (longlong)TStack_3f0.CurrentBitIndex * 0x10);
    local_120 = 0;
    if ((local_11c < 0) && (local_11c != 0)) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UActorComponent>_>_>
                (8,8,0,&local_1e8,0,&local_11c);
    }
    TVar17.DebugPtr = Z_Construct_UClass_UActorComponent_NoRegister();
    local_4f8.DebugPtr = TVar17.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar17.DebugPtr != (UClass *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)TVar17.DebugPtr);
    }
    pUVar18 = TSubclassOf<UActorComponent>::operator*
                        ((TSubclassOf<UActorComponent> *)&local_4f8.ObjectPtr);
    pUVar19 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar18 == pUVar19) {
      local_4f0.DebugPtr = TVar17.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar17.DebugPtr != (UClass *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)TVar17.DebugPtr);
      }
      AActor::
      ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (pAVar8,(TSubclassOf<UActorComponent>)&local_4f0,
                 (TArray<TObjectPtr<UActorComponent>,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                  *)&local_1e8);
    }
    else {
      local_4c0.DebugPtr = TVar17.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar17.DebugPtr != (UClass *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)TVar17.DebugPtr);
      }
      AActor::
      ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (pAVar8,(TSubclassOf<UActorComponent>)&local_4c0,
                 (TArray<TObjectPtr<UActorComponent>,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                  *)&local_1e8);
    }
    local_588._padding_._4_4_ = 1;
    puVar1 = &(param_1->MatchingComponents).Elements.field_0x10;
    local_588._padding_._0_4_ = 0;
    pTVar2 = &param_1->MatchingComponents;
    local_588.UnvisitedBitMask = 0xffffffff;
    local_588.CurrentBitIndex = 0;
    local_588.BaseBitIndex = 0;
    local_588.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(param_1->MatchingComponents).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_588);
    }
    uStack_620 = CONCAT44(local_588._padding_._4_4_,(undefined4)local_588._padding_);
    uStack_610._4_4_ = local_588.CurrentBitIndex;
    uStack_610._0_4_ = local_588.UnvisitedBitMask;
    uStack_608._4_4_ = local_588._28_4_;
    uStack_608._0_4_ = local_588.BaseBitIndex;
    local_600 = *(int *)&(param_1->MatchingComponents).Elements.field_0x8 -
                *(int *)&(param_1->MatchingComponents).Elements.field_0x34;
    pTStack_618 = local_588.Array;
    uStack_400 = CONCAT44(uStack_5fc,local_600);
    TStack_420.Array = local_588.Array;
    local_628 = (FMovieGraphEvaluationResult *)pTVar2;
    local_428 = pTVar2;
    TStack_420._padding_ = uStack_620;
    TStack_420._16_8_ = uStack_610;
    TStack_420._24_8_ = uStack_608;
    pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_308,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                         *(int *)&(param_1->MatchingComponents).Elements.field_0x28);
    uStack_620 = pTVar16->_padding_;
    pTStack_618 = pTVar16->Array;
    uVar11._0_4_ = pTVar16->UnvisitedBitMask;
    uVar11._4_4_ = pTVar16->CurrentBitIndex;
    uStack_608 = *(undefined8 *)&pTVar16->BaseBitIndex;
    uStack_610 = uVar11;
    local_5c0 = pTStack_618;
LAB_14dcc1671:
    pTVar13 = local_428;
    if (*(int *)&(local_428->Elements).field_0x8 - *(int *)&(local_428->Elements).field_0x34 !=
        (int)uStack_400) {
      local_667 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_667);
    }
    if (((TStack_420.CurrentBitIndex != uVar11._4_4_) || (TStack_420.Array != local_5c0)) ||
       (pTVar13 != pTVar2)) {
      plVar41 = (longlong *)
                ((longlong)TStack_420.CurrentBitIndex * 0x10 + *(longlong *)&pTVar13->Elements);
      FVar25 = (ForElementType<TObjectPtr<UActorComponent>_>)&local_1e8;
      if (local_1e8.SecondaryData != (ForElementType<TObjectPtr<UActorComponent>_>)0x0) {
        FVar25 = local_1e8.SecondaryData;
      }
      lVar27 = *plVar41;
      FVar28 = (ForElementType<TObjectPtr<UActorComponent>_>)
               ((longlong)FVar25 + (longlong)local_120 * 8);
      for (; FVar25 != FVar28;
          FVar25 = (ForElementType<TObjectPtr<UActorComponent>_>)((longlong)FVar25 + 8)) {
        if (*(longlong *)FVar25 == 0) {
          bVar14 = lVar27 == 0;
        }
        else {
          bVar14 = *(longlong *)FVar25 == lVar27;
        }
        if (bVar14) {
          TVar6 = (TObjectPtr<AActor_const_>_u_0)
                  ((TObjectPtr<AActor_const_>_u_0 *)(lVar27 + 0xa8))->DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar6.DebugPtr != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
          }
          FVar26 = (ForElementType<AActor_*>)&local_248;
          if (local_248.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar26 = local_248.SecondaryData;
          }
          FVar3 = (ForElementType<AActor_*>)((longlong)FVar26 + (longlong)local_1f0 * 8);
          goto joined_r0x00014dcc1755;
        }
      }
      goto LAB_14dcc19ec;
    }
    TStack_3f0.UnvisitedBitMask = TStack_3f0.UnvisitedBitMask & ~TStack_3f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3f0);
    param_1 = local_5c8;
  }
  FVar26 = (ForElementType<AActor_*>)&local_248;
  if (local_248.SecondaryData != (ForElementType<AActor_*>)0x0) {
    FVar26 = local_248.SecondaryData;
  }
  FVar3 = (ForElementType<AActor_*>)((longlong)FVar26 + (longlong)local_1f0 * 8);
  while( true ) {
    if (local_1f0 != iVar15) {
      local_666 = 0;
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_666);
    }
    if (FVar26 == FVar3) break;
    TVar6 = (TObjectPtr<AActor_const_>_u_0)*(TObjectPtr<AActor_const_>_u_0 *)FVar26;
    local_4d8 = TVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    if (*(int *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x8 !=
        *(int *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x34) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (AActor *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
      }
      uVar24 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
      uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
      TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
      RemoveImpl<TObjectPtr<AActor_const_>_>
                (&__return_storage_ptr__->MatchingActors,uVar24 >> 0x10 ^ uVar24,
                 (TObjectPtr<AActor_const_> *)&local_4d8.ObjectPtr);
    }
    FVar26 = (ForElementType<AActor_*>)((longlong)FVar26 + 8);
  }
  puVar1 = &(param_1->MatchingActors).Elements.field_0x10;
  local_118.SecondaryData = (ForElementType<TObjectPtr<UActorComponent>_>)0x0;
  local_50 = 0;
  iVar33 = 0;
  local_4c = 0x18;
  iVar15 = *(int *)&(param_1->MatchingActors).Elements.field_0x28;
  uStack_608._0_4_ = 0;
  uVar24 = 1;
  uStack_610._4_4_ = 0;
  if (iVar15 != 0) {
    puVar37 = *(uint **)&(param_1->MatchingActors).Elements.field_0x20;
    if (puVar37 == (uint *)0x0) {
      puVar37 = (uint *)puVar1;
    }
    uVar34 = *puVar37;
    while (uVar34 == 0) {
      lVar27 = (longlong)iVar33;
      uStack_608._0_4_ = (int)uStack_608 + 0x20;
      iVar33 = iVar33 + 1;
      uStack_610._4_4_ = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar33) goto LAB_14dcc1bd0;
      uVar34 = puVar37[lVar27 + 1];
    }
    uVar24 = -uVar34 & uVar34;
    uVar5 = (ulonglong)uVar24 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_4a8.field0_0x0._4_4_ = (undefined4)lVar27;
    uStack_610._4_4_ = local_4a8.field0_0x0._4_4_ + -1 + (int)uStack_608;
    if (iVar15 < uStack_610._4_4_) {
      uStack_610._4_4_ = iVar15;
    }
  }
LAB_14dcc1bd0:
  uVar34 = *(uint *)&(param_1->MatchingActors).Elements.field_0x28;
  bVar23 = (byte)uVar34 & 0x1f;
  local_600 = *(int *)&(param_1->MatchingActors).Elements.field_0x8 -
              *(int *)&(param_1->MatchingActors).Elements.field_0x34;
  uVar30 = uVar34 & 0xffffffe0;
  iVar39 = (int)uVar34 >> 5;
  uStack_5e4 = 1 << bVar23;
  uVar29 = -1 << bVar23;
  uStack_620 = CONCAT44(uVar24,iVar33);
  uStack_610._0_4_ = 0xffffffff;
  uStack_608._4_4_ = local_2cc;
  TStack_658._padding_ = uStack_620;
  local_638 = CONCAT44(uStack_5fc,local_600);
  TStack_658.UnvisitedBitMask = 0xffffffff;
  TStack_658.CurrentBitIndex = uStack_610._4_4_;
  TStack_658.BaseBitIndex = (int)uStack_608;
  TStack_658._28_4_ = local_2cc;
  local_660 = param_1;
  TStack_658.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_628 = param_1;
  pTStack_618 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_5e8 = iVar39;
  pTStack_5e0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_5d8 = uVar29;
  uStack_5d4 = uVar34;
  uStack_5d0 = uVar30;
  if ((((int)uVar34 < 0) || (iVar15 < (int)uVar34)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    pFVar20 = (FMovieGraphEvaluationResult *)(*pcVar10)();
    return pFVar20;
  }
  uVar24 = *(uint *)&(param_1->MatchingActors).Elements.field_0x28;
  if (uVar34 != uVar24) {
    puVar35 = *(undefined1 **)&(param_1->MatchingActors).Elements.field_0x20;
    if (puVar35 == (undefined1 *)0x0) {
      puVar35 = puVar1;
    }
    uVar29 = uVar29 & *(uint *)(puVar35 + (longlong)iVar39 * 4);
    while (uVar29 == 0) {
      uStack_5d0 = uVar30 + 0x20;
      local_5e8 = iVar39 + 1;
      if ((int)(((int)(uVar24 - 1) >> 0x1f & 0x1fU) + (uVar24 - 1)) >> 5 < local_5e8)
      goto LAB_14dcc1d0b;
      uVar29 = *(uint *)(puVar35 + (longlong)iVar39 * 4 + 4);
      local_5d8 = 0xffffffff;
      uVar30 = uStack_5d0;
      iVar39 = local_5e8;
    }
    uStack_5e4 = -uVar29 & uVar29;
    uVar5 = (ulonglong)uStack_5e4 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_498 = (int)lVar27;
    uStack_5d4 = (uVar30 - 1) + local_498;
    if ((int)uVar24 < (int)uStack_5d4) {
LAB_14dcc1d0b:
      uStack_5d4 = uVar24;
    }
  }
  TStack_5b0._padding_ = CONCAT44(uStack_5e4,local_5e8);
  local_5b8 = local_5c8;
  TStack_5b0.CurrentBitIndex = uStack_5d4;
  TStack_5b0.UnvisitedBitMask = local_5d8;
  TStack_5b0._28_4_ = uStack_5cc;
  TStack_5b0.BaseBitIndex = uStack_5d0;
  TStack_5b0.Array = pTStack_5e0;
  local_590 = CONCAT44(local_590._4_4_,
                       *(int *)&(local_5c8->MatchingActors).Elements.field_0x8 -
                       *(int *)&(local_5c8->MatchingActors).Elements.field_0x34);
  local_398 = local_5c8;
  local_388 = pTStack_5e0;
  uStack_370 = local_590;
  lStack_390 = TStack_5b0._padding_;
  uStack_380 = TStack_5b0._16_8_;
  local_378 = TStack_5b0._24_8_;
  do {
    pFVar20 = local_660;
    if (*(int *)&(local_660->MatchingActors).Elements.field_0x8 -
        *(int *)&(local_660->MatchingActors).Elements.field_0x34 != (int)local_638) {
      local_665 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_665);
    }
    iVar15 = local_50;
    pFVar12 = local_5f0;
    if (((TStack_658.CurrentBitIndex == iStack_37c) && (TStack_658.Array == local_388)) &&
       (pFVar20 == local_398)) {
      FVar25 = (ForElementType<TObjectPtr<UActorComponent>_>)&local_118;
      if (local_118.SecondaryData != (ForElementType<TObjectPtr<UActorComponent>_>)0x0) {
        FVar25 = local_118.SecondaryData;
      }
      FVar28 = (ForElementType<TObjectPtr<UActorComponent>_>)
               ((longlong)FVar25 + (longlong)local_50 * 8);
      while( true ) {
        if (local_50 != iVar15) {
          `TCheckedPointerIterator<TObjectPtr<UActorComponent>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_630);
        }
        if (FVar25 == FVar28) break;
        TVar7 = *(TObjectPtr<UActorComponent_const_>_u_0 *)FVar25;
        local_4b8 = TVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar7.DebugPtr != (UActorComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
        }
        if (*(int *)&(pFVar12->MatchingComponents).Elements.field_0x8 !=
            *(int *)&(pFVar12->MatchingComponents).Elements.field_0x34) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar7.DebugPtr != (UActorComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
          }
          uVar24 = ((uint)((ulonglong)TVar7.DebugPtr >> 0x14) & 0xffff ^
                   (uint)((ulonglong)TVar7.DebugPtr >> 4)) * -0x7a143595;
          uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
          TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TObjectPtr<UActorComponent_const_>_>
                    (&pFVar12->MatchingComponents,uVar24 >> 0x10 ^ uVar24,
                     (TObjectPtr<UActorComponent_const_> *)&local_4b8.ObjectPtr);
        }
        FVar25 = (ForElementType<TObjectPtr<UActorComponent>_>)((longlong)FVar25 + 8);
      }
      if (local_118.SecondaryData != (ForElementType<TObjectPtr<UActorComponent>_>)0x0) {
        FMemory::Free((void *)local_118.SecondaryData);
      }
      if (local_248.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_248.SecondaryData);
      }
      if (local_1e8.SecondaryData != (ForElementType<TObjectPtr<UActorComponent>_>)0x0) {
        FMemory::Free((void *)local_1e8.SecondaryData);
      }
      return pFVar12;
    }
    pUVar18 = (UClass *)0x0;
    puVar40 = (undefined8 *)
              ((longlong)TStack_658.CurrentBitIndex * 0x10 +
              *(longlong *)&(pFVar20->MatchingActors).Elements);
    pAVar8 = (AActor *)*puVar40;
    local_120 = 0;
    if ((local_11c < 0) && (local_11c != 0)) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UActorComponent>_>_>
                (8,8,0,&local_1e8,0,&local_11c);
    }
    pUVar19 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar19 != (UClass *)0x0) goto LAB_14dcc1e17;
LAB_14dcc1e48:
      pUVar21 = pUVar18;
    }
    else {
      if (pUVar19 == (UClass *)0x0) goto LAB_14dcc1e48;
      UE::GC::MarkAsReachable((UObject *)pUVar19);
LAB_14dcc1e17:
      pUVar21 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar21 == (UClass *)0x0) goto LAB_14dcc1e48;
      iVar15 = (int)pUVar21->_padding_;
      if (((int)pUVar19->_padding_ < iVar15) ||
         ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar15 * 8) !=
          &pUVar21->_padding_)) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      pUVar21 = pUVar19;
      if (!bVar14) goto LAB_14dcc1e48;
    }
    pUVar22 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar21 == pUVar22) {
      local_4d0 = pUVar19;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      AActor::
      ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (pAVar8,(TSubclassOf<UActorComponent>)&local_4d0,
                 (TArray<TObjectPtr<UActorComponent>,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                  *)&local_1e8);
    }
    else {
      local_4c8 = pUVar19;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      AActor::
      ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (pAVar8,(TSubclassOf<UActorComponent>)&local_4c8,
                 (TArray<TObjectPtr<UActorComponent>,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                  *)&local_1e8);
    }
    pFVar20 = local_5f0;
    iVar15 = *(int *)&(local_5f0->MatchingComponents).Elements.field_0x28;
    puVar1 = &(local_5f0->MatchingComponents).Elements.field_0x10;
    uStack_608._0_4_ = 0;
    uVar24 = 1;
    pTVar2 = &local_5f0->MatchingComponents;
    uStack_610._4_4_ = 0;
    if (iVar15 != 0) {
      puVar37 = *(uint **)&(local_5f0->MatchingComponents).Elements.field_0x20;
      puVar38 = (uint *)puVar1;
      if (puVar37 != (uint *)0x0) {
        puVar38 = puVar37;
      }
      uVar34 = *puVar38;
      while (uVar34 == 0) {
        iVar33 = (int)pUVar18;
        uStack_608._0_4_ = (int)uStack_608 + 0x20;
        uVar34 = iVar33 + 1;
        pUVar18 = (UClass *)(ulonglong)uVar34;
        uStack_610._4_4_ = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar34)
        goto LAB_14dcc1f50;
        uVar34 = puVar38[(longlong)iVar33 + 1];
      }
      uVar24 = -uVar34 & uVar34;
      uVar5 = (ulonglong)uVar24 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_494 = (int)lVar27;
      uStack_610._4_4_ = (int)uStack_608 + -1 + local_494;
      if (iVar15 < uStack_610._4_4_) {
        uStack_610._4_4_ = iVar15;
      }
    }
LAB_14dcc1f50:
    local_600 = *(int *)&(local_5f0->MatchingComponents).Elements.field_0x8 -
                *(int *)&(local_5f0->MatchingComponents).Elements.field_0x34;
    uVar34 = *(uint *)&(local_5f0->MatchingComponents).Elements.field_0x28;
    uStack_620 = CONCAT44(uVar24,(int)pUVar18);
    uVar24 = uVar34 & 0xffffffe0;
    uStack_610._0_4_ = 0xffffffff;
    uStack_608._4_4_ = local_2ac;
    TStack_5b0._padding_ = uStack_620;
    iVar33 = (int)uVar34 >> 5;
    local_590 = CONCAT44(uStack_5fc,local_600);
    TStack_5b0.UnvisitedBitMask = 0xffffffff;
    TStack_5b0.CurrentBitIndex = uStack_610._4_4_;
    TStack_5b0.BaseBitIndex = (int)uStack_608;
    TStack_5b0._28_4_ = local_2ac;
    local_628 = (FMovieGraphEvaluationResult *)pTVar2;
    pTStack_618 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_5b8 = (FMovieGraphEvaluationResult *)pTVar2;
    TStack_5b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar34 < 0) || (iVar15 < (int)uVar34)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      pFVar20 = (FMovieGraphEvaluationResult *)(*pcVar10)();
      return pFVar20;
    }
    uVar29 = *(uint *)&(pFVar20->MatchingComponents).Elements.field_0x28;
    if (uVar34 != uVar29) {
      puVar35 = *(undefined1 **)&(pFVar20->MatchingComponents).Elements.field_0x20;
      puVar36 = puVar1;
      if (puVar35 != (undefined1 *)0x0) {
        puVar36 = puVar35;
      }
      uVar34 = -1 << ((byte)uVar34 & 0x1f) & *(uint *)(puVar36 + (longlong)iVar33 * 4);
      while (uVar34 == 0) {
        lVar27 = (longlong)iVar33;
        uVar24 = uVar24 + 0x20;
        iVar33 = iVar33 + 1;
        uVar34 = uVar29;
        if ((int)(((int)(uVar29 - 1) >> 0x1f & 0x1fU) + (uVar29 - 1)) >> 5 < iVar33)
        goto LAB_14dcc2060;
        uVar34 = *(uint *)(puVar36 + lVar27 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
      lVar27 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_490 = (int)lVar27;
      uVar34 = (uVar24 - 1) + local_490;
      if ((int)uVar29 < (int)uVar34) {
        uVar34 = uVar29;
      }
    }
LAB_14dcc2060:
    while( true ) {
      pFVar20 = local_5b8;
      if (*(int *)&(local_5b8->MatchingActors).Elements.field_0x8 -
          *(int *)&(local_5b8->MatchingActors).Elements.field_0x34 != (int)local_590) {
        local_664[0] = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_664);
      }
      if (((TStack_5b0.CurrentBitIndex == uVar34) &&
          (TStack_5b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pFVar20 == (FMovieGraphEvaluationResult *)pTVar2)) break;
      FVar28 = (ForElementType<TObjectPtr<UActorComponent>_>)
               (*(longlong *)&(pFVar20->MatchingActors).Elements +
               (longlong)TStack_5b0.CurrentBitIndex * 0x10);
      FVar25 = (ForElementType<TObjectPtr<UActorComponent>_>)&local_1e8;
      if (local_1e8.SecondaryData != (ForElementType<TObjectPtr<UActorComponent>_>)0x0) {
        FVar25 = local_1e8.SecondaryData;
      }
      FVar4 = (ForElementType<TObjectPtr<UActorComponent>_>)
              ((longlong)FVar25 + (longlong)local_120 * 8);
      if (FVar25 != FVar4) {
        do {
          if (*(longlong *)FVar25 == *(longlong *)FVar28) {
            FVar25 = (ForElementType<TObjectPtr<UActorComponent>_>)&local_118;
            if (local_118.SecondaryData != (ForElementType<TObjectPtr<UActorComponent>_>)0x0) {
              FVar25 = local_118.SecondaryData;
            }
            if ((ulonglong)FVar25 <= (ulonglong)FVar28) {
              FVar25 = (ForElementType<TObjectPtr<UActorComponent>_>)&local_118;
              if (local_118.SecondaryData != (ForElementType<TObjectPtr<UActorComponent>_>)0x0) {
                FVar25 = local_118.SecondaryData;
              }
              if (((ulonglong)FVar28 < (ulonglong)((longlong)FVar25 + (longlong)local_4c * 8)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar10 = (code *)swi(3);
                pFVar20 = (FMovieGraphEvaluationResult *)(*pcVar10)();
                return pFVar20;
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UActorComponent>_>_>
                                   (0x808,&local_118,&local_4c);
            }
            FVar25 = (ForElementType<TObjectPtr<UActorComponent>_>)&local_118;
            if (local_118.SecondaryData != (ForElementType<TObjectPtr<UActorComponent>_>)0x0) {
              FVar25 = local_118.SecondaryData;
            }
            lVar27 = (longlong)local_50;
            pUVar9 = *(UObject **)FVar28;
            local_50 = local_50 + 1;
            *(UObject **)((longlong)FVar25 + lVar27 * 8) = pUVar9;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar9);
            }
            TVar6.DebugPtr = (AActor *)*puVar40;
            local_4a0.DebugPtr = TVar6.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar6.DebugPtr != (AActor *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
            }
            pFVar20 = local_5f0;
            if (*(int *)&(local_5f0->MatchingActors).Elements.field_0x8 !=
                *(int *)&(local_5f0->MatchingActors).Elements.field_0x34) {
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (TVar6.DebugPtr != (AActor *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
              }
              uVar24 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
                       (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
              uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
              TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
              RemoveImpl<TObjectPtr<AActor_const_>_>
                        (&pFVar20->MatchingActors,uVar24 >> 0x10 ^ uVar24,
                         (TObjectPtr<AActor_const_> *)&local_4a0.ObjectPtr);
            }
            break;
          }
          FVar25 = (ForElementType<TObjectPtr<UActorComponent>_>)((longlong)FVar25 + 8);
        } while (FVar25 != FVar4);
      }
      TStack_5b0.UnvisitedBitMask = TStack_5b0.UnvisitedBitMask & ~TStack_5b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5b0);
    }
    TStack_658.UnvisitedBitMask = TStack_658.UnvisitedBitMask & ~TStack_658._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_658);
  } while( true );
joined_r0x00014dcc1755:
  if (FVar26 == FVar3) goto LAB_14dcc177b;
  if (TVar6.DebugPtr == (AActor *)0x0) {
    bVar14 = *(AActor **)FVar26 == (AActor *)0x0;
  }
  else {
    bVar14 = TVar6.DebugPtr == *(AActor **)FVar26;
  }
  if (bVar14) goto LAB_14dcc196f;
  FVar26 = (ForElementType<AActor_*>)((longlong)FVar26 + 8);
  goto joined_r0x00014dcc1755;
LAB_14dcc177b:
  local_4e8 = TVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar6.DebugPtr != (AActor *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
  }
  uVar24 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
  uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
  iVar15 = TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
           FindIndexByHash<TObjectPtr<AActor_const_>_>
                     (&__return_storage_ptr__->MatchingActors,uVar24 >> 0x10 ^ uVar24,
                      (TObjectPtr<AActor_const_> *)&local_4e8.ObjectPtr);
  if (iVar15 != -1) {
    FVar26 = (ForElementType<AActor_*>)&local_248;
    if (local_248.SecondaryData != (ForElementType<AActor_*>)0x0) {
      FVar26 = local_248.SecondaryData;
    }
    local_5f8 = TVar6;
    if ((ulonglong)FVar26 <= &local_5f8) {
      FVar26 = (ForElementType<AActor_*>)&local_248;
      if (local_248.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar26 = local_248.SecondaryData;
      }
      if ((&local_5f8 <
           (TObjectPtr<AActor_const_>_u_0 *)((longlong)FVar26 + (longlong)local_1ec * 8)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar10 = (code *)swi(3);
        pFVar20 = (FMovieGraphEvaluationResult *)(*pcVar10)();
        return pFVar20;
      }
    }
    if (local_1f0 == local_1ec) {
      local_1f0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                            (0x808,&local_248,&local_1ec);
    }
    FVar26 = (ForElementType<AActor_*>)&local_248;
    if (local_248.SecondaryData != (ForElementType<AActor_*>)0x0) {
      FVar26 = local_248.SecondaryData;
    }
    lVar27 = (longlong)local_1f0;
    local_1f0 = local_1f0 + 1;
    ((TObjectPtr<AActor_const_>_u_0 *)((longlong)FVar26 + lVar27 * 8))->DebugPtr =
         (AActor *)local_5f8;
    iVar15 = local_120;
    lVar27 = (longlong)local_120;
    FVar25 = (ForElementType<TObjectPtr<UActorComponent>_>)&local_1e8;
    if (local_1e8.SecondaryData != (ForElementType<TObjectPtr<UActorComponent>_>)0x0) {
      FVar25 = local_1e8.SecondaryData;
    }
    if ((local_120 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      pFVar20 = (FMovieGraphEvaluationResult *)(*pcVar10)();
      return pFVar20;
    }
    TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
    ::Reserve(&__return_storage_ptr__->MatchingComponents,
              (*(int *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x8 -
              *(int *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x34) + iVar15);
    FVar28 = (ForElementType<TObjectPtr<UActorComponent>_>)((longlong)FVar25 + lVar27 * 8);
    for (; FVar25 != FVar28;
        FVar25 = (ForElementType<TObjectPtr<UActorComponent>_>)((longlong)FVar25 + 8)) {
      TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UActorComponent>_const_&>
                (&__return_storage_ptr__->MatchingComponents,&local_4a8,(bool *)FVar25);
    }
  }
LAB_14dcc196f:
  TVar7.DebugPtr = (UActorComponent *)*plVar41;
  local_4e0.DebugPtr = TVar7.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar7.DebugPtr != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
  }
  if (*(int *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x8 !=
      *(int *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x34) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar7.DebugPtr != (UActorComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
    }
    uVar24 = ((uint)((ulonglong)TVar7.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)TVar7.DebugPtr >> 4)) * -0x7a143595;
    uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
    TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TObjectPtr<UActorComponent_const_>_>
              (&__return_storage_ptr__->MatchingComponents,uVar24 >> 0x10 ^ uVar24,
               (TObjectPtr<UActorComponent_const_> *)&local_4e0.ObjectPtr);
  }
LAB_14dcc19ec:
  local_120 = 0;
  if ((local_11c < 0) && (local_11c != 0)) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UActorComponent>_>_>
              (8,8,0,&local_1e8,0,&local_11c);
  }
  TStack_420.UnvisitedBitMask = TStack_420.UnvisitedBitMask & ~TStack_420._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_420);
  goto LAB_14dcc1671;
}

// Intersect @ 14dcd5de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMovieGraphEvaluationResult * __thiscall
FMovieGraphEvaluationResult::Intersect
          (FMovieGraphEvaluationResult *this,FMovieGraphEvaluationResult *__return_storage_ptr__,
          FMovieGraphEvaluationResult *param_1)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  TObjectPtr<AActor_const_>_u_0 TVar5;
  TObjectPtr<UActorComponent_const_>_u_0 TVar6;
  code *pcVar7;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *this_00;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  int iVar10;
  FMovieGraphEvaluationResult *pFVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  TObjectPtr<AActor_const_>_u_0 *pTVar15;
  TObjectPtr<UActorComponent_const_>_u_0 *pTVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res20 [8];
  undefined1 local_178 [8];
  ulonglong local_170;
  FMovieGraphEvaluationResult *local_168;
  FMovieGraphEvaluationResult *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  TObjectPtr<AActor> local_128;
  TObjectPtr<UActorComponent> local_120;
  TObjectPtr<AActor_const_>_u_0 local_118;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_110;
  TObjectPtr<UActorComponent_const_>_u_0 local_108;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  FMovieGraphEvaluationResult *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_110 = &__return_storage_ptr__->MatchingComponents;
  *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements = 0;
  puVar1 = &(this->MatchingActors).Elements.field_0x10;
  *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x20 = 0;
  iStack_158 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x2c = 0x80;
  local_140 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x34 = 0;
  (__return_storage_ptr__->MatchingActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->MatchingActors).HashSize = 0;
  *(undefined8 *)&local_110->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x34 = 0;
  (__return_storage_ptr__->MatchingComponents).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->MatchingComponents).HashSize = 0;
  iVar10 = *(int *)&(this->MatchingActors).Elements.field_0x28;
  local_170 = 1;
  uStack_154 = 1;
  iStack_144 = iStack_158;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->MatchingActors).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uStack_154 = *puVar18;
    local_140 = 0;
    iStack_158 = 0;
    while (uStack_154 == 0) {
      lVar12 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      uStack_154 = 1;
      iStack_144 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_14dcd5eee;
      uStack_154 = puVar18[lVar12 + 1];
    }
    uStack_154 = -uStack_154 & uStack_154;
    uVar3 = (ulonglong)uStack_154 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_130 = (int)lVar12;
    iStack_144 = local_140 + -1 + local_130;
    if (iVar10 < iStack_144) {
      iStack_144 = iVar10;
    }
  }
LAB_14dcd5eee:
  uVar14 = *(uint *)&(this->MatchingActors).Elements.field_0x28;
  iStack_138 = *(int *)&(this->MatchingActors).Elements.field_0x8 -
               *(int *)&(this->MatchingActors).Elements.field_0x34;
  uVar19 = uVar14 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uStack_154,iStack_158);
  uStack_148 = 0xffffffff;
  TStack_c8.CurrentBitIndex = iStack_144;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_140;
  uStack_a8 = CONCAT44(uStack_134,iStack_138);
  local_160 = this;
  local_150 = puVar1;
  local_d0 = this;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FMovieGraphEvaluationResult *)(*pcVar7)();
    return pFVar11;
  }
  uVar4 = *(uint *)&(this->MatchingActors).Elements.field_0x28;
  if (uVar14 != uVar4) {
    puVar17 = *(undefined1 **)&(this->MatchingActors).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14dcd6020;
      uVar14 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_12c = (int)lVar12;
    uVar14 = local_12c + -1 + uVar19;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14dcd6020:
  while( true ) {
    pFVar11 = local_d0;
    if (*(int *)&(local_d0->MatchingActors).Elements.field_0x8 -
        *(int *)&(local_d0->MatchingActors).Elements.field_0x34 != (int)uStack_a8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c8.CurrentBitIndex == uVar14) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar11 == this))
    break;
    pTVar15 = (TObjectPtr<AActor_const_>_u_0 *)
              ((longlong)TStack_c8.CurrentBitIndex * 0x10 +
              *(longlong *)&(pFVar11->MatchingActors).Elements);
    TVar5 = (TObjectPtr<AActor_const_>_u_0)pTVar15->DebugPtr;
    if (TVar5.DebugPtr != (AActor *)0x0) {
      local_118 = TVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      uVar19 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
      uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
      iVar10 = TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
               FindIndexByHash<TObjectPtr<AActor_const_>_>
                         (&param_1->MatchingActors,uVar19 >> 0x10 ^ uVar19,
                          (TObjectPtr<AActor_const_> *)&local_118.ObjectPtr);
      if (iVar10 != -1) {
        TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<AActor>_const_&>
                  (&__return_storage_ptr__->MatchingActors,&local_128,(bool *)pTVar15);
      }
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  iStack_f8 = 0;
  local_e0 = 0;
  pTVar2 = &this->MatchingComponents;
  iVar10 = *(int *)&(this->MatchingComponents).Elements.field_0x28;
  local_f0 = &(this->MatchingComponents).Elements.field_0x10;
  iStack_e4 = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->MatchingComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_f0;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar12 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14dcd617f;
      uVar14 = puVar18[lVar12 + 1];
    }
    local_170 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = local_170 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_128.field0_0x0._4_4_ = (undefined4)lVar12;
    iStack_e4 = local_e0 + -1 + local_128.field0_0x0._4_4_;
    if (iVar10 < iStack_e4) {
      iStack_e4 = iVar10;
    }
  }
LAB_14dcd617f:
  uVar14 = *(uint *)&(this->MatchingComponents).Elements.field_0x28;
  puVar1 = &(this->MatchingComponents).Elements.field_0x10;
  uStack_f4 = (undefined4)local_170;
  iStack_dc = iStack_144;
  iStack_d8 = *(int *)&(this->MatchingComponents).Elements.field_0x8 -
              *(int *)&(this->MatchingComponents).Elements.field_0x34;
  uVar19 = uVar14 & 0xffffffe0;
  uStack_e8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_98.CurrentBitIndex = iStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_98._28_4_ = iStack_144;
  TStack_98.BaseBitIndex = local_e0;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = pTVar2;
  local_a0 = pTVar2;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FMovieGraphEvaluationResult *)(*pcVar7)();
    return pFVar11;
  }
  this_00 = local_110;
  uVar4 = *(uint *)&(this->MatchingComponents).Elements.field_0x28;
  if (uVar14 != uVar4) {
    puVar17 = *(undefined1 **)&(this->MatchingComponents).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14dcd6280;
      uVar14 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14dcd6280:
  while( true ) {
    pTVar8 = local_a0;
    if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
        (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if (((TStack_98.CurrentBitIndex == uVar14) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    pTVar16 = (TObjectPtr<UActorComponent_const_>_u_0 *)
              ((longlong)TStack_98.CurrentBitIndex * 0x10 + *(longlong *)&pTVar8->Elements);
    TVar6 = (TObjectPtr<UActorComponent_const_>_u_0)pTVar16->DebugPtr;
    if (TVar6.DebugPtr != (UActorComponent *)0x0) {
      local_108 = TVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
      }
      uVar19 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
      uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
      iVar10 = TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TObjectPtr<UActorComponent_const_>_>
                         (&param_1->MatchingComponents,uVar19 >> 0x10 ^ uVar19,
                          (TObjectPtr<UActorComponent_const_> *)&local_108.ObjectPtr);
      if (iVar10 != -1) {
        TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
        ::Emplace<TObjectPtr<UActorComponent>_const_&>(this_00,&local_120,(bool *)pTVar16);
      }
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  local_168 = __return_storage_ptr__;
  `FMovieGraphEvaluationResult::Intersect'::__l2::<lambda_1>::operator()
            (&local_168,pTVar2,&param_1->MatchingActors);
  `FMovieGraphEvaluationResult::Intersect'::__l2::<lambda_1>::operator()
            (&local_168,&param_1->MatchingComponents,&this->MatchingActors);
  return __return_storage_ptr__;
}

// Reset @ 14dce0a90

void __thiscall FMovieGraphEvaluationResult::Reset(FMovieGraphEvaluationResult *this)

{
  int iVar1;
  
  if (*(int *)&(this->MatchingActors).Elements.field_0x8 !=
      *(int *)&(this->MatchingActors).Elements.field_0x34) {
    TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
    UnhashElements(&this->MatchingActors);
    iVar1 = *(int *)&(this->MatchingActors).Elements.field_0xc;
    *(undefined4 *)&(this->MatchingActors).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,
                 (int *)&(this->MatchingActors).Elements.field_0xc);
    }
    *(undefined4 *)&(this->MatchingActors).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->MatchingActors).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->MatchingActors).Elements.field_0x28 = 0;
  }
  if (*(int *)&(this->MatchingComponents).Elements.field_0x8 !=
      *(int *)&(this->MatchingComponents).Elements.field_0x34) {
    TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->MatchingComponents);
    iVar1 = *(int *)&(this->MatchingComponents).Elements.field_0xc;
    *(undefined4 *)&(this->MatchingComponents).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->MatchingComponents,0,
                 (int *)&(this->MatchingComponents).Elements.field_0xc);
    }
    *(undefined4 *)&(this->MatchingComponents).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->MatchingComponents).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->MatchingComponents).Elements.field_0x28 = 0;
  }
  return;
}

// Union @ 14dcebce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieGraphEvaluationResult * __thiscall
FMovieGraphEvaluationResult::Union
          (FMovieGraphEvaluationResult *this,FMovieGraphEvaluationResult *__return_storage_ptr__,
          FMovieGraphEvaluationResult *param_1)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 auStack_e8 [32];
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> local_c8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pTVar1 = TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
           ::Union(&this->MatchingComponents,&local_78,&param_1->MatchingComponents);
  pTVar2 = TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
           Union(&this->MatchingActors,&local_c8,&param_1->MatchingActors);
  *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->MatchingActors).Elements.field_0x34 = 0;
  (__return_storage_ptr__->MatchingActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->MatchingActors).HashSize = 0;
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
  Move<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
            (&__return_storage_ptr__->MatchingActors,pTVar2);
  *(undefined8 *)&(__return_storage_ptr__->MatchingComponents).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->MatchingComponents).Elements.field_0x34 = 0;
  (__return_storage_ptr__->MatchingComponents).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->MatchingComponents).HashSize = 0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
            (&__return_storage_ptr__->MatchingComponents,pTVar1);
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  local_78.HashSize = 0;
  if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78.Elements);
  return __return_storage_ptr__;
}

