// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 5

// AcquireTrackNode @ 14e6960b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSkeletalAnimationTrackNode * __thiscall
UE::Interchange::Gltf::Private::AnimationHelpers::FAnimationHandler::AcquireTrackNode
          (FAnimationHandler *this,FString *param_1,FAnimationTimes *param_2)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  UInterchangeBaseNodeContainer *pUVar5;
  FAnimation *pFVar6;
  undefined1 *puVar7;
  code *pcVar8;
  double dVar9;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar10;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  UInterchangeSkeletalAnimationTrackNode **ppUVar15;
  UClass *pUVar16;
  UInterchangeSkeletalAnimationTrackNode *pUVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [8];
  UInterchangeSkeletalAnimationTrackNode *local_240;
  FString local_238;
  FAttributeKey local_228;
  FAttributeKey local_218;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_208;
  int iStack_200;
  uint uStack_1fc;
  undefined1 *local_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int local_1e8;
  int iStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  int local_1d8;
  int local_1d4;
  TPairInitializer<FString_const_&,UInterchangeSkeletalAnimationTrackNode_*_const_&> local_1d0;
  double local_1c0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1b8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString *local_120;
  UInterchangeSkeletalAnimationTrackNode **local_118;
  FString local_110;
  TAttributeHandle<FString,void> local_100;
  TAttributeHandle<FString,void> local_e8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  iVar18 = (param_1->Data).ArrayNum;
  if (iVar18 == 0) {
    pwVar21 = L"";
    iVar18 = 0;
  }
  else {
    pwVar21 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar18 = iVar18 + -1;
  }
  uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar21);
  iVar18 = TSet<TTuple<FString,UInterchangeSkeletalAnimationTrackNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeSkeletalAnimationTrackNode_*,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,UInterchangeSkeletalAnimationTrackNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeSkeletalAnimationTrackNode_*,0>,FDefaultSetAllocator>
                       *)&this->RootJointIndexToTrackNodeMap,uVar14,param_1);
  if (iVar18 == -1) {
    pUVar5 = this->NodeContainer;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar16 = Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar16);
    local_c8._8_8_ = pUVar5;
    local_240 = (UInterchangeSkeletalAnimationTrackNode *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar19 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar19 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    ::FString::PrintfImpl(&local_140,L"%d");
    ::FString::FString(&local_150,"_");
    ::FString::FString(&local_160,"\\SkeletalAnimation\\");
    ::FString::ConcatFF(&local_170,&local_160,param_1);
    ::FString::ConcatFF(&local_180,&local_170,&local_150);
    ::FString::ConcatFF(&local_110,&local_180,&local_140);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    pUVar5 = this->NodeContainer;
    ::FString::FString(&local_130,L"");
    UInterchangeBaseNodeContainer::SetupNode
              (pUVar5,(UInterchangeBaseNode *)local_240,&local_110,&this->GLTFAnimation->Name,
               TranslatedAsset,&local_130);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    UInterchangeSkeletalAnimationTrackNode::SetCustomSkeletonNodeUid(local_240,param_1);
    pFVar6 = this->GLTFAnimation;
    iStack_200 = 0;
    iVar18 = *(int *)&(pFVar6->Extras).field_0x28;
    local_1f8 = &(pFVar6->Extras).field_0x10;
    local_1e8 = 0;
    uStack_1fc = 1;
    local_208 = &pFVar6->Extras;
    iStack_1ec = 0;
    if (iVar18 != 0) {
      puVar24 = *(uint **)&(pFVar6->Extras).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)local_1f8;
      }
      uVar14 = *puVar24;
      while (uVar14 == 0) {
        lVar20 = (longlong)iStack_200;
        local_1e8 = local_1e8 + 0x20;
        iStack_200 = iStack_200 + 1;
        iStack_1ec = iVar18;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_200)
        goto LAB_14e696390;
        uVar14 = puVar24[lVar20 + 1];
      }
      uStack_1fc = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_1fc * 2 + 1;
      lVar20 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_1d8 = (int)lVar20;
      iStack_1ec = local_1e8 + -1 + local_1d8;
      if (iVar18 < iStack_1ec) {
        iStack_1ec = iVar18;
      }
    }
LAB_14e696390:
    uVar14 = *(uint *)&(pFVar6->Extras).field_0x28;
    iStack_1e0 = *(int *)&(pFVar6->Extras).field_0x8 - *(int *)&(pFVar6->Extras).field_0x34;
    puVar1 = &(pFVar6->Extras).field_0x10;
    uStack_1f0 = 0xffffffff;
    TStack_1a8.CurrentBitIndex = iStack_1ec;
    TStack_1a8.UnvisitedBitMask = 0xffffffff;
    uVar22 = uVar14 & 0xffffffe0;
    TStack_1a8._padding_ = CONCAT44(uStack_1fc,iStack_200);
    iVar18 = (int)uVar14 >> 5;
    TStack_1a8._28_4_ = iStack_1ec;
    TStack_1a8.BaseBitIndex = local_1e8;
    uStack_188 = CONCAT44(uStack_1dc,iStack_1e0);
    iStack_1e4 = iStack_1ec;
    local_1b8 = local_208;
    local_1b0 = local_208;
    TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1f8;
    if (((int)uVar14 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pUVar17 = (UInterchangeSkeletalAnimationTrackNode *)(*pcVar8)();
      return pUVar17;
    }
    pTVar10 = local_1b8;
    uVar4 = *(uint *)&(pFVar6->Extras).field_0x28;
    if (uVar14 != uVar4) {
      puVar7 = *(undefined1 **)&(pFVar6->Extras).field_0x20;
      puVar23 = puVar1;
      if (puVar7 != (undefined1 *)0x0) {
        puVar23 = puVar7;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar18 * 4);
      while (uVar14 == 0) {
        lVar20 = (longlong)iVar18;
        uVar22 = uVar22 + 0x20;
        iVar18 = iVar18 + 1;
        uVar14 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14e696491;
        uVar14 = *(uint *)(puVar23 + lVar20 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_1d4 = (int)lVar20;
      uVar14 = local_1d4 + -1 + uVar22;
      if ((int)uVar4 < (int)uVar14) {
        uVar14 = uVar4;
      }
    }
LAB_14e696491:
    while( true ) {
      pTVar11 = local_1b0;
      if (*(int *)&local_1b0->field_0x8 - *(int *)&local_1b0->field_0x34 != (int)uStack_188) {
        local_248[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_248);
      }
      pUVar17 = local_240;
      if (((TStack_1a8.CurrentBitIndex == uVar14) &&
          (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar11 == pTVar10)) break;
      local_238.Data.ArrayMax = -1;
      pFVar2 = (FString *)(*(longlong *)pTVar11 + (longlong)TStack_1a8.CurrentBitIndex * 0x28);
      local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.Data.ArrayNum = 0;
      if ((local_240 == (UInterchangeSkeletalAnimationTrackNode *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InterchangeNode",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                              ,0x8f,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pUVar17 = (UInterchangeSkeletalAnimationTrackNode *)(*pcVar8)();
        return pUVar17;
      }
      UInterchangeUserDefinedAttributesAPI::MakeUserDefinedPropertyKey
                (&local_228,pFVar2,false,false);
      cVar13 = (**(code **)(pUVar17->_padding_ + 0x2c0))(pUVar17,&local_228);
      if (cVar13 == '\0') {
        UInterchangeUserDefinedAttributesAPI::MakeUserDefinedPropertyKey
                  (&local_218,pFVar2,false,true);
        cVar13 = (**(code **)(pUVar17->_padding_ + 0x2c0))(pUVar17,&local_218);
        if (cVar13 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<FString>
                    ((UInterchangeBaseNode *)pUVar17,&local_100,&local_228,pFVar2 + 1);
          if (local_100.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_238.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        ((UInterchangeBaseNode *)pUVar17,&local_e8,&local_218,&local_238),
             local_e8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_e8.Key.Key.Data.AllocatorInstance.Data);
          }
        }
        if (local_218.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Key.Data.AllocatorInstance.Data);
        }
      }
      if (local_228.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Key.Data.AllocatorInstance.Data);
      }
      if ((local_238.Data.ArrayMax != -1) &&
         (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
    }
    local_118 = &local_240;
    local_120 = param_1;
    TSet<TTuple<FString,UInterchangeSkeletalAnimationTrackNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeSkeletalAnimationTrackNode_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,UInterchangeSkeletalAnimationTrackNode_*_const_&>_>
              ((TSet<TTuple<FString,UInterchangeSkeletalAnimationTrackNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeSkeletalAnimationTrackNode_*,0>,FDefaultSetAllocator>
                *)&this->RootJointIndexToTrackNodeMap,&local_1d0,(bool *)&local_120);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  else {
    ppUVar15 = TMapBase<FString,UInterchangeSkeletalAnimationTrackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UInterchangeSkeletalAnimationTrackNode_*,0>_>
               ::FindChecked((TMapBase<FString,UInterchangeSkeletalAnimationTrackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UInterchangeSkeletalAnimationTrackNode_*,0>_>
                              *)&this->RootJointIndexToTrackNodeMap,param_1);
    local_240 = *ppUVar15;
    bVar12 = UInterchangeSkeletalAnimationTrackNode::GetCustomAnimationSampleRate
                       (local_240,(double *)&local_1d0.Value);
    if (bVar12) {
      dVar9 = __real_3ff0000000000000 / (double)local_1d0.Value;
      param_2->FrameRate = (double)local_1d0.Value;
      param_2->SingleFrameDuration = dVar9;
    }
    bVar12 = UInterchangeSkeletalAnimationTrackNode::GetCustomAnimationStopTime
                       (local_240,&local_1c0);
    if (bVar12) {
      param_2->StopTime = local_1c0;
      local_1c0 = local_1c0 / param_2->SingleFrameDuration;
      param_2->FrameNumber = (int)ROUND(local_1c0 + local_1c0 + __real_3fe0000000000000) >> 1;
    }
  }
  return local_240;
}

// Process @ 14e6a4180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Interchange::Gltf::Private::AnimationHelpers::FAnimationHandler::Process
          (FAnimationHandler *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  TArray<GLTF::FSkinInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<GLTF::FNode,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar13;
  TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  uint *puVar14;
  ForElementType<FSetElementId> FVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  FAnimation *pFVar19;
  bool *pbVar20;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198 [2];
  uint *local_190;
  uint *local_188 [2];
  TSet<TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
  local_178;
  TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  local_128;
  TMapBase<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  local_d8;
  TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pFVar19 = this->GLTFAnimation;
  local_128.Elements._0_8_ = 0;
  local_128.Elements._8_8_ = 0;
  local_128.Elements._32_8_ = 0;
  local_128.Elements._40_4_ = 0;
  local_128.Elements._44_4_ = 0x80;
  local_128.Elements._48_4_ = 0xffffffff;
  local_128.Elements._52_4_ = 0;
  local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.HashSize = 0;
  local_d8.Pairs.Elements._0_8_ = 0;
  local_d8.Pairs.Elements._8_8_ = 0;
  local_d8.Pairs.Elements._32_8_ = 0;
  local_d8.Pairs.Elements._40_4_ = 0;
  local_d8.Pairs.Elements._44_4_ = 0x80;
  local_d8.Pairs.Elements._48_4_ = 0xffffffff;
  local_d8.Pairs.Elements._52_4_ = 0;
  local_d8.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.Pairs.HashSize = 0;
  local_178.Elements._0_8_ = 0;
  local_178.Elements._8_8_ = 0;
  local_178.Elements._32_8_ = 0;
  local_178.Elements._40_4_ = 0;
  local_178.Elements._44_4_ = 0x80;
  local_178.Elements._48_4_ = 0xffffffff;
  local_178.Elements._52_4_ = 0;
  local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_178.HashSize = 0;
  local_88.Pairs.Elements._0_8_ = 0;
  local_88.Pairs.Elements._8_8_ = 0;
  local_88.Pairs.Elements._32_8_ = 0;
  local_88.Pairs.Elements._40_4_ = 0;
  local_88.Pairs.Elements._44_4_ = 0x80;
  local_88.Pairs.Elements._48_4_ = 0xffffffff;
  local_88.Pairs.Elements._52_4_ = 0;
  local_88.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.Pairs.HashSize = 0;
  local_1b0 = 0;
  if (0 < (pFVar19->Channels).ArrayNum) {
    do {
      uVar2 = local_1b0;
      iVar1 = (pFVar19->Channels).ArrayNum;
      uVar12 = 0;
      if ((int)local_1b0 < iVar1) {
        uVar12 = ~local_1b0 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_1c8 = (longlong)(int)local_1b0;
        local_1c0 = (longlong)iVar1;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar4 = (pFVar19->Channels).AllocatorInstance.Data;
      lVar5 = *(longlong *)(pFVar4 + (longlong)(int)uVar2 * 0x18 + 8);
      local_1b8 = *(uint *)(lVar5 + 200);
      iVar1 = *(int *)(lVar5 + 0x80);
      if (((iVar1 == 2) && (-1 < *(int *)(lVar5 + 0xd8))) &&
         (*(int *)(lVar5 + 0xd8) < this->GLTFNodes->ArrayNum)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if (*(int *)(pFVar4 + (longlong)(int)uVar2 * 0x18 + 0x10) == 3) {
        local_1b4 = local_1b8;
        if (iVar1 == 4) {
          uVar2 = *(uint *)(lVar5 + 0x88);
          lVar17 = (longlong)(int)uVar2;
          pTVar6 = this->GLTFSkins;
          iVar1 = pTVar6->ArrayNum;
          uVar12 = 0;
          if ((int)uVar2 < iVar1) {
            uVar12 = ~uVar2 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (local_1c8 = lVar17, local_1c0 = (longlong)iVar1,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar1 = *(int *)(lVar5 + 0x88);
          pFVar4 = (pTVar6->AllocatorInstance).Data;
          if (-1 < iVar1) {
            pTVar6 = this->GLTFSkins;
            iVar3 = pTVar6->ArrayNum;
            if (iVar1 < iVar3) {
              if ((iVar1 < 0) &&
                 (local_1c8 = (longlong)iVar1, local_1c0 = (longlong)iVar3,
                 bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar11)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (*(int *)((pTVar6->AllocatorInstance).Data + (longlong)iVar1 * 0x98 + 0x20) != 0) {
                uVar2 = *(uint *)(lVar5 + 0x88);
                lVar18 = (longlong)(int)uVar2;
                pTVar6 = this->GLTFSkins;
                pTVar7 = this->GLTFNodes;
                iVar1 = pTVar6->ArrayNum;
                uVar12 = 0;
                if ((int)uVar2 < iVar1) {
                  uVar12 = ~uVar2 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (local_1c8 = lVar18, local_1c0 = (longlong)iVar1,
                   bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar8 = (pTVar6->AllocatorInstance).Data;
                iVar1 = *(int *)(pFVar8 + lVar18 * 0x98 + 0x20);
                if (iVar1 < 1) {
                  local_1c8 = 0;
                  local_1c0 = (longlong)iVar1;
                  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar11) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                iVar1 = **(int **)(pFVar8 + lVar18 * 0x98 + 0x18);
                if ((-1 < iVar1) && (iVar1 < pTVar7->ArrayNum)) {
                  iVar1 = *(int *)(pFVar4 + lVar17 * 0x98 + 0x20);
                  pTVar7 = this->GLTFNodes;
                  if (iVar1 < 1) {
                    local_1c8 = 0;
                    local_1c0 = (longlong)iVar1;
                    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar11) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                  }
                  iVar1 = pTVar7->ArrayNum;
                  uVar2 = **(uint **)(pFVar4 + lVar17 * 0x98 + 0x18);
                  uVar12 = 0;
                  if ((int)uVar2 < iVar1) {
                    uVar12 = ~uVar2 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (local_1c8 = (longlong)(int)uVar2, local_1c0 = (longlong)iVar1,
                     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  local_1b4 = *(uint *)((pTVar7->AllocatorInstance).Data +
                                       (longlong)(int)uVar2 * 0x260 + 0xd8);
                }
              }
            }
          }
        }
        else if (iVar1 == 2) {
          local_1b4 = *(uint *)(lVar5 + 0xd8);
        }
        if (local_178.Elements._8_4_ != local_178.Elements._52_4_) {
          FVar15 = (ForElementType<FSetElementId>)&local_178.Hash;
          if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_178.Hash.SecondaryData;
          }
          uVar2 = *(uint *)((longlong)FVar15 + (ulonglong)(local_178.HashSize - 1U & local_1b4) * 4)
          ;
          while (uVar2 != 0xffffffff) {
            puVar14 = (uint *)((longlong)(int)uVar2 * 0x60 + local_178.Elements._0_8_);
            if (*puVar14 == local_1b4) {
              if (puVar14 != (uint *)0x0) goto LAB_14e6a4602;
              break;
            }
            uVar2 = puVar14[0x16];
          }
        }
        local_190 = &local_1b4;
        local_1c8 = 0;
        TSet<TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                  (&local_178,(uint)&local_1ac,(TKeyInitializer<int_const_&> *)(ulonglong)local_1b4,
                   (bool *)&local_190);
        puVar14 = (uint *)((longlong)local_1ac * 0x60 + local_178.Elements._0_8_);
LAB_14e6a4602:
        pTVar13 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                              *)(puVar14 + 2),local_1b8,(int *)&local_1b8);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (pTVar13,&local_1a4,(bool *)&local_1b0);
        if (bVar10) {
LAB_14e6a4676:
          pTVar13 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                    ::FindOrAddImpl<int_const_&>
                              (&local_88,*(uint *)(lVar5 + 0xd8),(int *)(lVar5 + 0xd8));
          pbVar20 = (bool *)(lVar5 + 200);
          piVar16 = &local_19c;
          goto LAB_14e6a473b;
        }
      }
      else {
        if (bVar10) {
          this_00 = TMapBase<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
                    ::FindOrAddImpl<int_const_&>
                              (&local_d8,*(uint *)(lVar5 + 0xd8),(int *)(lVar5 + 0xd8));
          pTVar13 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                    ::FindOrAddImpl<int_const_&>
                              ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                                *)this_00,local_1b8,(int *)&local_1b8);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (pTVar13,&local_1a0,(bool *)&local_1b0);
          goto LAB_14e6a4676;
        }
        if (local_128.Elements._8_4_ != local_128.Elements._52_4_) {
          FVar15 = (ForElementType<FSetElementId>)&local_128.Hash;
          if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_128.Hash.SecondaryData;
          }
          uVar2 = *(uint *)((longlong)FVar15 + (ulonglong)(local_128.HashSize - 1U & local_1b8) * 4)
          ;
          while (uVar2 != 0xffffffff) {
            puVar14 = (uint *)((longlong)(int)uVar2 * 0x60 + local_128.Elements._0_8_);
            if (*puVar14 == local_1b8) {
              if (puVar14 != (uint *)0x0) goto LAB_14e6a472d;
              break;
            }
            uVar2 = puVar14[0x16];
          }
        }
        local_188[0] = &local_1b8;
        local_1c8 = 0;
        TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                  (&local_128,(uint)&local_1a8,(TKeyInitializer<int_const_&> *)(ulonglong)local_1b8,
                   (bool *)local_188);
        puVar14 = (uint *)((longlong)local_1a8 * 0x60 + local_128.Elements._0_8_);
LAB_14e6a472d:
        pTVar13 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar14 + 2);
        pbVar20 = (bool *)&local_1b0;
        piVar16 = local_198;
LAB_14e6a473b:
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (pTVar13,piVar16,pbVar20);
      }
      pFVar19 = this->GLTFAnimation;
      local_1b0 = local_1b0 + 1;
    } while ((int)local_1b0 < (pFVar19->Channels).ArrayNum);
  }
  ProcessRiggedAnimations
            (this,(TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
                   *)&local_d8);
  ProcessMorphTargetAnimations
            (this,(TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
                   *)&local_178);
  ProcessRigidAnimation
            (this,(TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                   *)&local_128);
  local_88.Pairs.HashSize = 0;
  if (local_88.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_88);
  local_178.HashSize = 0;
  if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_178.Elements);
  local_d8.Pairs.HashSize = 0;
  if (local_d8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_d8);
  local_128.HashSize = 0;
  if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Elements);
  return;
}

// ProcessMorphTargetAnimations @ 14e6a4850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Interchange::Gltf::Private::AnimationHelpers::FAnimationHandler::ProcessMorphTargetAnimations
          (FAnimationHandler *this,
          TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
          *param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  TArray<GLTF::FNode,TSizedDefaultAllocator<32>_> *pTVar4;
  TMap<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
  *this_00;
  code *pcVar5;
  TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  *pTVar6;
  double dVar7;
  undefined1 *puVar8;
  double dVar9;
  TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  *pTVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FString *pFVar15;
  UInterchangeSceneNode *this_01;
  UClass *pUVar16;
  UInterchangeMeshNode *this_02;
  UInterchangeBaseNode *pUVar17;
  longlong lVar18;
  byte bVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  longlong *plVar25;
  int iVar26;
  undefined1 *puVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  uint *puVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  EInterchangeAnimationPayLoadType local_2d8 [8];
  uint local_2d0;
  undefined4 uStack_2cc;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2c8;
  FAnimationTimes local_2b8;
  int iStack_290;
  undefined4 uStack_28c;
  FString local_288;
  longlong *local_278;
  int iStack_270;
  uint uStack_26c;
  TBitArray<FDefaultBitArrayAllocator> *local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  int local_258;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  longlong *local_230;
  UInterchangeSkeletalAnimationTrackNode *local_228;
  TBitArray<FDefaultBitArrayAllocator> *local_220;
  longlong *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  *local_1e8;
  undefined1 auStack_1e0 [20];
  int iStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  FString local_1b8;
  undefined1 local_1a8;
  undefined4 local_1a4;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  *local_140;
  double dStack_138;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  void *local_110 [3];
  char local_f8;
  void *local_f0 [3];
  char local_d8;
  undefined4 local_b4;
  undefined4 local_94;
  undefined4 local_74;
  
  ProcessRiggedAnimations(this,param_1);
  iVar22 = *(int *)&param_1->field_0x28;
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar26 = 0;
  local_2b8.FrameNumber = 0;
  uVar12 = 1;
  iVar13 = 0;
  if (iVar22 != 0) {
    puVar29 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar29 = (uint *)local_130;
    }
    uVar21 = *puVar29;
    while (uVar21 == 0) {
      iVar26 = iVar26 + 1;
      local_2b8.FrameNumber = local_2b8.FrameNumber + 0x20;
      iVar13 = iVar22;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_14e6a48ff;
      uVar21 = puVar29[iVar26];
    }
    uVar12 = ~(uVar21 - 1) & uVar21;
    uVar1 = (ulonglong)uVar12 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_248 = (int)lVar20;
    iVar13 = local_2b8.FrameNumber + -1 + local_248;
    if (iVar22 < iVar13) {
      iVar13 = iVar22;
    }
  }
LAB_14e6a48ff:
  uVar21 = *(uint *)&param_1->field_0x28;
  local_2b8._36_4_ = local_b4;
  bVar19 = (byte)uVar21 & 0x1f;
  iStack_290 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar24 = uVar21 & 0xffffffe0;
  local_2d0 = 1 << bVar19;
  uStack_2cc = 0;
  local_2b8.FrameRate = (double)CONCAT44(uVar12,iVar26);
  local_2b8.StopTime = (double)CONCAT44(iVar13,0xffffffff);
  auStack_1e0._0_8_ = local_2b8.FrameRate;
  iVar26 = (int)uVar21 >> 5;
  local_1c8._4_4_ = local_b4;
  local_1c8._0_4_ = local_2b8.FrameNumber;
  uStack_1c0 = CONCAT44(uStack_28c,iStack_290);
  uVar12 = -1 << bVar19;
  stack0xfffffffffffffe30 = local_2b8.StopTime;
  local_1e8 = param_1;
  auStack_1e0._8_8_ = local_130;
  if ((((int)uVar21 < 0) || (iVar22 < (int)uVar21)) &&
     (local_2b8.StartTime = (double)param_1, local_2b8.SingleFrameDuration = (double)local_130,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar9 = _UNK_152f26fe8;
  puVar8 = ___xmm_3fa11111111111113fa1111111111111;
  dVar7 = _UNK_151444f98;
  pTVar6 = ___xmm_403e0000000000000000000000000000;
  uVar3 = *(uint *)&param_1->field_0x28;
  uVar14 = local_2d0;
  if (uVar21 != uVar3) {
    puVar27 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar27 = (undefined1 *)local_130;
    }
    uVar21 = uVar12 & *(uint *)(puVar27 + (longlong)iVar26 * 4);
    while (uVar21 == 0) {
      iVar26 = iVar26 + 1;
      uVar24 = uVar24 + 0x20;
      uVar21 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar26) goto LAB_14e6a4a22;
      uVar12 = 0xffffffff;
      uVar21 = *(uint *)(puVar27 + (longlong)iVar26 * 4);
    }
    uVar14 = ~(uVar21 - 1) & uVar21;
    uVar1 = (ulonglong)uVar14 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_244 = (int)lVar20;
    uVar21 = (uVar24 - 1) + local_244;
    if ((int)uVar3 < (int)uVar21) {
      uVar21 = uVar3;
    }
  }
LAB_14e6a4a22:
  local_2b8._36_4_ = local_94;
  iStack_290 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  local_2b8.FrameRate = (double)CONCAT44(uVar14,iVar26);
  local_2b8.StopTime = (double)CONCAT44(uVar21,uVar12);
  dStack_138 = local_2b8.FrameRate;
  local_120 = CONCAT44(local_94,uVar24);
  uStack_118 = CONCAT44(uStack_28c,iStack_290);
  uStack_128 = local_2b8.StopTime;
  local_2b8.StartTime = (double)param_1;
  local_2b8.SingleFrameDuration = (double)local_130;
  local_2b8.FrameNumber = uVar24;
  local_140 = param_1;
  do {
    pTVar10 = local_1e8;
    if (*(int *)&local_1e8->field_0x8 - *(int *)&local_1e8->field_0x34 != (int)uStack_1c0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar20 = (longlong)iStack_1cc;
    if (((iStack_1cc == uStack_128._4_4_) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_1e0._8_8_ == local_130)) &&
       (pTVar10 == local_140)) {
      return;
    }
    lVar32 = *(longlong *)pTVar10;
    pTVar4 = this->GLTFNodes;
    uVar12 = *(uint *)(lVar20 * 0x60 + lVar32);
    uVar21 = 0;
    if ((int)uVar12 < pTVar4->ArrayNum) {
      uVar21 = ~uVar12 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar15 = TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
              ::Find((TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                      *)this->GLTFNodeToInterchangeUidMap,
                     (FNode *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x260));
    if (pFVar15 == (FString *)0x0) {
      bVar11 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7345644358319733888>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfAnimation.cpp"
                          ,0x380,"NodeUidPtr");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      local_2b8.FrameNumber = 0;
      local_2b8.StartTime = (double)pTVar6;
      local_2b8.FrameRate = dVar7;
      local_2b8.SingleFrameDuration = (double)puVar8;
      local_2b8.StopTime = dVar9;
      local_228 = AcquireTrackNode(this,pFVar15,&local_2b8);
      plVar25 = (longlong *)(lVar20 * 0x60 + 8 + lVar32);
      iStack_270 = 0;
      uVar12 = *(uint *)(plVar25 + 5);
      local_258 = 0;
      uStack_26c = 1;
      pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar25 + 2);
      uStack_25c = 0;
      if (uVar12 != 0) {
        pTVar28 = pTVar30;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar25[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)plVar25[4];
        }
        uVar21 = *(uint *)(pTVar28->AllocatorInstance).InlineData;
        while (uVar21 == 0) {
          iStack_270 = iStack_270 + 1;
          local_258 = local_258 + 0x20;
          uStack_25c = uVar12;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_270)
          goto LAB_14e6a4c3f;
          uVar21 = *(uint *)((pTVar28->AllocatorInstance).InlineData + (longlong)iStack_270 * 4);
        }
        uStack_26c = ~(uVar21 - 1) & uVar21;
        uVar1 = (ulonglong)uStack_26c * 2 + 1;
        lVar20 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_240 = (int)lVar20;
        uStack_25c = local_240 + -1 + local_258;
        if ((int)uVar12 < (int)uStack_25c) {
          uStack_25c = uVar12;
        }
      }
LAB_14e6a4c3f:
      uVar21 = *(uint *)(plVar25 + 5);
      uStack_254 = local_74;
      uVar24 = uVar21 & 0xffffffe0;
      iStack_250 = (int)plVar25[1] - *(int *)((longlong)plVar25 + 0x34);
      TStack_210._padding_ = CONCAT44(uStack_26c,iStack_270);
      uStack_260 = 0xffffffff;
      TStack_210.CurrentBitIndex = uStack_25c;
      TStack_210.UnvisitedBitMask = 0xffffffff;
      iVar22 = (int)uVar21 >> 5;
      TStack_210._28_4_ = local_74;
      TStack_210.BaseBitIndex = local_258;
      uStack_1f0 = CONCAT44(uStack_24c,iStack_250);
      local_278 = plVar25;
      local_268 = pTVar30;
      local_230 = plVar25;
      local_220 = pTVar30;
      local_218 = plVar25;
      TStack_210.Array = pTVar30;
      local_2d0 = uVar21;
      if ((((int)uVar21 < 0) || ((int)uVar12 < (int)uVar21)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = *(uint *)(plVar25 + 5);
      if (uVar21 != uVar12) {
        pTVar28 = pTVar30;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar25[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)plVar25[4];
        }
        uVar21 = -1 << ((byte)uVar21 & 0x1f) &
                 *(uint *)((pTVar28->AllocatorInstance).InlineData + (longlong)iVar22 * 4);
        while (uVar21 == 0) {
          iVar22 = iVar22 + 1;
          uVar24 = uVar24 + 0x20;
          uVar21 = uVar12;
          local_2d0 = uVar12;
          if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar22)
          goto LAB_14e6a4d50;
          uVar21 = *(uint *)((pTVar28->AllocatorInstance).InlineData + (longlong)iVar22 * 4);
        }
        uVar1 = (ulonglong)(~(uVar21 - 1) & uVar21) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_23c = (int)lVar20;
        uVar21 = local_23c + -1 + uVar24;
        local_2d0 = uVar21;
        if ((int)uVar12 < (int)uVar21) {
          uVar21 = uVar12;
          local_2d0 = uVar12;
        }
      }
LAB_14e6a4d50:
      while( true ) {
        plVar25 = local_218;
        if ((int)local_218[1] - *(int *)((longlong)local_218 + 0x34) != (int)uStack_1f0) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_210.CurrentBitIndex == uVar21) && (TStack_210.Array == pTVar30)) &&
           (plVar25 == local_230)) break;
        lVar20 = *plVar25;
        pTVar4 = this->GLTFNodes;
        this_00 = this->GLTFNodeToInterchangeUidMap;
        lVar32 = (longlong)TStack_210.CurrentBitIndex * 0x60;
        uVar12 = *(uint *)(lVar32 + lVar20);
        uVar21 = 0;
        if ((int)uVar12 < pTVar4->ArrayNum) {
          uVar21 = ~uVar12 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar15 = TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                  ::Find((TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                          *)this_00,
                         (FNode *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x260)
                        );
        if (pFVar15 == (FString *)0x0) {
          bVar11 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_7345644358319733873>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfAnimation.cpp"
                              ,0x38f,"AnimatedNodeUidPtr");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          if ((*(int *)(lVar32 + 0x10 + lVar20) - *(int *)(lVar32 + 0x3c + lVar20) != 1) &&
             (bVar11 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_7345644358319733867>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfAnimation.cpp"
                                  ,0x395,"Channels.Num() == 1"), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_01 = (UInterchangeSceneNode *)
                    UInterchangeBaseNodeContainer::GetNode(this->NodeContainer,pFVar15);
          if (this_01 != (UInterchangeSceneNode *)0x0) {
            pUVar16 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
            iVar22 = (int)pUVar16->_padding_;
            if ((iVar22 <= *(int *)(this_01->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
                &pUVar16->_padding_)) {
              local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_288.Data.ArrayNum = 0;
              local_288.Data.ArrayMax = 0;
              bVar11 = UInterchangeSceneNode::GetCustomAssetInstanceUid(this_01,&local_288);
              if ((bVar11) &&
                 (this_02 = (UInterchangeMeshNode *)
                            UInterchangeBaseNodeContainer::GetNode(this->NodeContainer,&local_288),
                 this_02 != (UInterchangeMeshNode *)0x0)) {
                pUVar16 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
                iVar22 = (int)pUVar16->_padding_;
                if ((iVar22 <= *(int *)(this_02->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
                    &pUVar16->_padding_)) {
                  local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_2c8.ArrayNum = 0;
                  local_2c8.ArrayMax = 0;
                  UInterchangeMeshNode::GetMorphTargetDependencies(this_02,&local_2c8);
                  iVar22 = local_2c8.ArrayNum;
                  pFVar31 = local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayNum * 0x10;
                  FVar23.Data = local_2c8.AllocatorInstance.Data;
                  while( true ) {
                    if (local_2c8.ArrayNum != iVar22) {
                      local_res20[0] = 0;
                      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(local_res20);
                    }
                    if (FVar23.Data == pFVar31) break;
                    pUVar17 = UInterchangeBaseNodeContainer::GetNode
                                        (this->NodeContainer,(FString *)FVar23.Data);
                    if (pUVar17 == (UInterchangeBaseNode *)0x0) {
LAB_14e6a4fa9:
                      pUVar17 = (UInterchangeBaseNode *)0x0;
                    }
                    else {
                      pUVar16 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
                      iVar26 = (int)pUVar16->_padding_;
                      if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar26) ||
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar26 * 8) !=
                          &pUVar16->_padding_)) goto LAB_14e6a4fa9;
                    }
                    if (pUVar17 == (UInterchangeBaseNode *)0x0) {
LAB_14e6a5226:
                      FVar23.Data = FVar23.Data + 0x10;
                    }
                    else {
                      lVar18 = (**(code **)(pUVar17->_padding_ + 0x2f8))(pUVar17,local_110);
                      cVar2 = *(char *)(lVar18 + 0x18);
                      if ((local_f8 != '\0') && (local_110[0] != (void *)0x0)) {
                        FMemory::Free(local_110[0]);
                      }
                      if (cVar2 == '\0') goto LAB_14e6a5226;
                      pFVar15 = (FString *)
                                (**(code **)(pUVar17->_padding_ + 0x2f8))(pUVar17,local_f0);
                      if (((char)pFVar15[1].Data.ArrayNum == '\0') &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsSet()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                              ,0x1bd,
                                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                             ), bVar11)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      ::FString::FString(&local_1b8,pFVar15);
                      local_1a8 = *(undefined1 *)&pFVar15[1].Data.AllocatorInstance.Data;
                      local_1a4 = *(undefined4 *)
                                   ((longlong)&pFVar15[1].Data.AllocatorInstance.Data + 4);
                      if ((local_d8 != '\0') && (local_f0[0] != (void *)0x0)) {
                        FMemory::Free(local_f0[0]);
                      }
                      iVar26 = 0;
                      puVar29 = (uint *)(lVar20 + 0x18 + lVar32);
                      iVar13 = 0;
                      uVar12 = puVar29[6];
                      uStack_25c = 0;
                      if (uVar12 != 0) {
                        if (*(uint **)(puVar29 + 4) != (uint *)0x0) {
                          puVar29 = *(uint **)(puVar29 + 4);
                        }
                        uVar21 = *puVar29;
                        while (uVar21 == 0) {
                          iVar26 = iVar26 + 1;
                          iVar13 = iVar13 + 0x20;
                          uStack_25c = uVar12;
                          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <
                              iVar26) goto LAB_14e6a50df;
                          uVar21 = puVar29[iVar26];
                        }
                        uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
                        lVar18 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                          }
                        }
                        local_238 = (int)lVar18;
                        uStack_25c = local_238 + -1 + iVar13;
                        if ((int)uVar12 < (int)uStack_25c) {
                          uStack_25c = uVar12;
                        }
                      }
LAB_14e6a50df:
                      uStack_260 = 0xffffffff;
                      ::FString::PrintfImpl(&local_160,L"%d");
                      ::FString::PrintfImpl(&local_170,L"%d");
                      ::FString::ConcatFC(&local_180,&local_170,L":");
                      ::FString::ConcatFF(&local_190,&local_180,&local_160);
                      ::FString::ConcatFC(&local_1a0,&local_190,L":");
                      ::FString::ConcatFF(&local_150,&local_1a0,&local_1b8);
                      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                      }
                      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_190.Data.AllocatorInstance.Data);
                      }
                      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_180.Data.AllocatorInstance.Data);
                      }
                      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_170.Data.AllocatorInstance.Data);
                      }
                      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_160.Data.AllocatorInstance.Data);
                      }
                      local_2d8[0] = MORPHTARGETCURVE;
                      UInterchangeSkeletalAnimationTrackNode::
                      SetAnimationPayloadKeyForMorphTargetNodeUid
                                (local_228,(FString *)FVar23.Data,&local_150,local_2d8);
                      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_150.Data.AllocatorInstance.Data);
                      }
                      if (local_1b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                      goto LAB_14e6a5226;
                      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                      FVar23.Data = FVar23.Data + 0x10;
                    }
                  }
                  DestructItems<FString,int>
                            ((FString *)local_2c8.AllocatorInstance.Data,local_2c8.ArrayNum);
                  if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2c8.AllocatorInstance.Data);
                  }
                }
              }
              if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_288.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
        pTVar30 = local_220;
        uVar21 = local_2d0;
      }
    }
    stack0xfffffffffffffe30 = (double)CONCAT44(iStack_1cc,auStack_1e0._16_4_ & ~auStack_1e0._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1e0);
  } while( true );
}

// ProcessRiggedAnimations @ 14e6a52d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Interchange::Gltf::Private::AnimationHelpers::FAnimationHandler::ProcessRiggedAnimations
          (FAnimationHandler *this,
          TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  TArray<GLTF::FNode,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
  *this_00;
  FAnimation *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  *pTVar8;
  double dVar9;
  undefined1 *puVar10;
  double dVar11;
  undefined8 uVar12;
  UInterchangeSkeletalAnimationTrackNode *this_01;
  TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  *pTVar13;
  longlong *plVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  FString *pFVar18;
  byte bVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  undefined1 *puVar27;
  ForElementType<unsigned_int> FVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  ForElementType<unsigned_int> FVar32;
  longlong lVar33;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  EInterchangeAnimationPayLoadType local_2f8 [8];
  FString local_2f0;
  undefined8 local_2e0;
  ForElementType<unsigned_int> FStack_2d8;
  undefined8 local_2d0;
  uint uStack_2c8;
  uint uStack_2c4;
  int local_2c0;
  undefined4 uStack_2bc;
  int iStack_2b8;
  undefined4 uStack_2b4;
  int local_2b0;
  int local_2a8;
  uint uStack_2a4;
  ForElementType<unsigned_int> FStack_2a0;
  uint local_298;
  uint uStack_294;
  uint uStack_290;
  undefined4 uStack_28c;
  FAnimationTimes local_288;
  int iStack_260;
  undefined4 uStack_25c;
  TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  *local_258;
  undefined8 uStack_250;
  ForElementType<unsigned_int> FStack_248;
  uint uStack_240;
  uint uStack_23c;
  uint uStack_238;
  undefined4 uStack_234;
  int local_230;
  undefined4 uStack_22c;
  TArray<float,TSizedDefaultAllocator<32>_> local_228;
  FString local_218;
  ForElementType<unsigned_int> local_208;
  UInterchangeSkeletalAnimationTrackNode *local_200;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  longlong *local_1e0;
  TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  *local_1d8;
  FString *local_1d0;
  FString local_1c8;
  TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  longlong *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  *local_158;
  undefined1 auStack_150 [20];
  int iStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  FString local_128;
  FString local_118;
  FString local_108;
  TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
  *local_f8;
  longlong lStack_f0;
  ForElementType<unsigned_int> local_e8;
  undefined8 uStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_ac;
  undefined4 local_8c;
  undefined4 local_6c;
  
  iVar31 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  uVar16 = 1;
  iVar25 = 0;
  local_288.FrameNumber = 0;
  iVar17 = 0;
  if (iVar31 != 0) {
    puVar29 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar29 = (uint *)puVar1;
    }
    uVar26 = *puVar29;
    local_288.FrameNumber = 0;
    while (uVar26 == 0) {
      lVar20 = (longlong)iVar25;
      local_288.FrameNumber = local_288.FrameNumber + 0x20;
      iVar25 = iVar25 + 1;
      iVar17 = iVar31;
      if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14e6a537d;
      uVar26 = (puVar29 + 1)[lVar20];
    }
    uVar16 = -uVar26 & uVar26;
    uVar2 = (ulonglong)uVar16 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_1f8 = (int)lVar20;
    iVar17 = local_1f8 + -1 + local_288.FrameNumber;
    if (iVar31 < iVar17) {
      iVar17 = iVar31;
    }
  }
LAB_14e6a537d:
  uVar26 = *(uint *)&param_1->field_0x28;
  bVar19 = (byte)uVar26 & 0x1f;
  iStack_260 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar24 = uVar26 & 0xffffffe0;
  iVar30 = (int)uVar26 >> 5;
  uStack_2a4 = 1 << bVar19;
  uVar22 = -1 << bVar19;
  local_288.FrameRate = (double)CONCAT44(uVar16,iVar25);
  local_288.StopTime = (double)CONCAT44(iVar17,0xffffffff);
  auStack_150._0_8_ = local_288.FrameRate;
  local_138._4_4_ = local_ac;
  local_138._0_4_ = local_288.FrameNumber;
  uStack_130 = CONCAT44(uStack_25c,iStack_260);
  stack0xfffffffffffffec0 = local_288.StopTime;
  local_2a8 = iVar30;
  FStack_2a0 = (ForElementType<unsigned_int>)puVar1;
  local_298 = uVar22;
  uStack_294 = uVar26;
  uStack_290 = uVar24;
  local_288.StartTime = (double)param_1;
  local_288.SingleFrameDuration = (double)puVar1;
  local_158 = param_1;
  auStack_150._8_8_ = puVar1;
  if ((((int)uVar26 < 0) || (iVar31 < (int)uVar26)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar11 = _UNK_152f26fe8;
  puVar10 = ___xmm_3fa11111111111113fa1111111111111;
  dVar9 = _UNK_151444f98;
  pTVar8 = ___xmm_403e0000000000000000000000000000;
  uVar16 = *(uint *)&param_1->field_0x28;
  if (uVar26 != uVar16) {
    puVar27 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar27 = puVar1;
    }
    uVar22 = uVar22 & *(uint *)(puVar27 + (longlong)iVar30 * 4);
    while (uVar22 == 0) {
      uStack_290 = uVar24 + 0x20;
      local_2a8 = iVar30 + 1;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2a8)
      goto LAB_14e6a54b8;
      uVar22 = *(uint *)(puVar27 + (longlong)iVar30 * 4 + 4);
      local_298 = 0xffffffff;
      uVar24 = uStack_290;
      iVar30 = local_2a8;
    }
    uStack_2a4 = -uVar22 & uVar22;
    uVar2 = (ulonglong)uStack_2a4 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_1f4 = (int)lVar20;
    uStack_294 = local_1f4 + -1 + uVar24;
    if ((int)uVar16 < (int)uStack_294) {
LAB_14e6a54b8:
      uStack_294 = uVar16;
    }
  }
  uStack_250 = CONCAT44(uStack_2a4,local_2a8);
  uStack_23c = uStack_294;
  uStack_240 = local_298;
  uStack_234 = uStack_28c;
  uStack_238 = uStack_290;
  local_230 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  FStack_248 = FStack_2a0;
  uStack_d0 = CONCAT44(uStack_22c,local_230);
  local_e8 = FStack_2a0;
  local_258 = param_1;
  local_f8 = param_1;
  lStack_f0 = uStack_250;
  uStack_e0 = _uStack_240;
  local_d8 = _uStack_238;
  do {
    pTVar13 = local_158;
    if (*(int *)&local_158->field_0x8 - *(int *)&local_158->field_0x34 != (int)uStack_130) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((iStack_13c == iStack_dc) && ((ForElementType<unsigned_int>)auStack_150._8_8_ == local_e8))
       && (pTVar13 == local_f8)) {
      return;
    }
    lVar20 = *(longlong *)pTVar13;
    pTVar3 = this->GLTFNodes;
    lVar33 = (longlong)iStack_13c * 0x60;
    uVar16 = *(uint *)(lVar33 + lVar20);
    uVar26 = 0;
    if ((int)uVar16 < pTVar3->ArrayNum) {
      uVar26 = ~uVar16 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar18 = TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
              ::Find((TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                      *)this->GLTFNodeToInterchangeUidMap,
                     (FNode *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x260));
    if (pFVar18 == (FString *)0x0) {
      bVar15 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7345644358319733956>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfAnimation.cpp"
                          ,0x33c,"NodeUidPtr");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      local_288.FrameNumber = 0;
      local_288.StartTime = (double)pTVar8;
      local_288.FrameRate = dVar9;
      local_288.SingleFrameDuration = (double)puVar10;
      local_288.StopTime = dVar11;
      local_200 = AcquireTrackNode(this,pFVar18,&local_288);
      FVar32 = (ForElementType<unsigned_int>)(lVar20 + 0x18 + lVar33);
      local_1e0 = (longlong *)(lVar20 + 8 + lVar33);
      FStack_2d8._0_4_ = 0;
      FStack_2d8._4_4_ = 1;
      local_2c0 = 0;
      uVar16 = *(uint *)((longlong)FVar32 + 0x18);
      uStack_2c4 = 0;
      if (uVar16 != 0) {
        FVar28 = FVar32;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar28 = *(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10);
        }
        uVar26 = *(uint *)FVar28;
        local_2c0 = 0;
        while (uVar26 == 0) {
          lVar21 = (longlong)(int)FStack_2d8._0_4_;
          local_2c0 = local_2c0 + 0x20;
          FStack_2d8._0_4_ = FStack_2d8._0_4_ + 1;
          uStack_2c4 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)FStack_2d8._0_4_
             ) goto LAB_14e6a56cd;
          uVar26 = ((uint *)((longlong)FVar28 + 4))[lVar21];
        }
        FStack_2d8._4_4_ = -uVar26 & uVar26;
        uVar2 = (ulonglong)(uint)FStack_2d8._4_4_ * 2 + 1;
        lVar21 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_1f0 = (int)lVar21;
        uStack_2c4 = local_2c0 + -1 + local_1f0;
        if ((int)uVar16 < (int)uStack_2c4) {
          uStack_2c4 = uVar16;
        }
      }
LAB_14e6a56cd:
      uStack_2bc = local_8c;
      iStack_2b8 = *(int *)(lVar33 + 0x10 + lVar20) - *(int *)(lVar33 + 0x3c + lVar20);
      uVar26 = *(uint *)(lVar33 + 0x30 + lVar20);
      bVar19 = (byte)uVar26 & 0x1f;
      uVar24 = uVar26 & 0xffffffe0;
      TStack_180.CurrentBitIndex = uStack_2c4;
      TStack_180.UnvisitedBitMask = 0xffffffff;
      iVar31 = (int)uVar26 >> 5;
      uVar22 = -1 << bVar19;
      local_2e0 = CONCAT44(1 << bVar19,iVar31);
      local_2d0._4_4_ = uVar26;
      local_2d0._0_4_ = uVar22;
      TStack_180._padding_ = (longlong)FStack_2d8;
      TStack_180._28_4_ = local_8c;
      TStack_180.BaseBitIndex = local_2c0;
      uStack_160 = CONCAT44(uStack_2b4,iStack_2b8);
      FStack_2d8 = FVar32;
      uStack_2c8 = uVar24;
      local_188 = local_1e0;
      TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar32;
      if ((((int)uVar26 < 0) || ((int)uVar16 < (int)uVar26)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar16 = *(uint *)((longlong)FVar32 + 0x18);
      if (uVar26 != uVar16) {
        if (*(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar32 = *(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10);
        }
        uVar22 = uVar22 & *(uint *)((longlong)FVar32 + (longlong)iVar31 * 4);
        while (uVar22 == 0) {
          uStack_2c8 = uVar24 + 0x20;
          lVar20 = (longlong)iVar31;
          iVar31 = iVar31 + 1;
          uVar2 = (ulonglong)local_2e0 >> 0x20;
          local_2e0 = CONCAT44((int)uVar2,iVar31);
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
          goto LAB_14e6a581f;
          uVar22 = ((uint *)((longlong)FVar32 + 4))[lVar20];
          local_2d0._0_4_ = 0xffffffff;
          local_2d0._4_4_ = 0;
          uVar24 = uStack_2c8;
        }
        local_2e0 = CONCAT44(-uVar22 & uVar22,(undefined4)local_2e0);
        uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_1ec = (int)lVar20;
        iVar31 = (uVar24 - 1) + local_1ec;
        local_2d0._4_4_ = iVar31;
        if ((int)uVar16 < iVar31) {
LAB_14e6a581f:
          local_2d0._4_4_ = uVar16;
        }
      }
      uStack_234 = uStack_2c4;
      uStack_238 = uStack_2c8;
      uStack_250 = local_2e0;
      FStack_248 = FStack_2d8;
      uStack_240 = (uint)local_2d0;
      uStack_23c = local_2d0._4_4_;
      uVar12 = _uStack_240;
      uStack_23c = SUB84(local_2d0,4);
      local_208 = FStack_2d8;
      local_2b0 = uStack_23c;
      _uStack_240 = uVar12;
LAB_14e6a5850:
      plVar14 = local_188;
      iVar31 = local_2b0;
      if ((int)local_188[1] - *(int *)((longlong)local_188 + 0x34) != (int)uStack_160) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      this_01 = local_200;
      if (((TStack_180.CurrentBitIndex != iVar31) ||
          ((ForElementType<unsigned_int>)TStack_180.Array != local_208)) || (plVar14 != local_1e0))
      {
        lVar20 = *plVar14;
        pTVar3 = this->GLTFNodes;
        this_00 = this->GLTFNodeToInterchangeUidMap;
        lVar33 = (longlong)TStack_180.CurrentBitIndex * 0x60;
        uVar16 = *(uint *)(lVar33 + lVar20);
        uVar26 = 0;
        uVar22 = uVar26;
        if ((int)uVar16 < pTVar3->ArrayNum) {
          uVar22 = ~uVar16 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_1d0 = TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                    ::Find((TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                            *)this_00,
                           (FNode *)((pTVar3->AllocatorInstance).Data +
                                    (longlong)(int)uVar16 * 0x260));
        if (local_1d0 != (FString *)0x0) {
          ::FString::FString(&local_2f0,L"");
          FVar32 = (ForElementType<unsigned_int>)(lVar20 + 0x18 + lVar33);
          local_258 = (TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
                       *)(lVar20 + 8 + lVar33);
          uVar22 = 1;
          uStack_238 = 0;
          uVar16 = *(int *)((longlong)FVar32 + 0x18);
          uStack_23c = uStack_238;
          if (uVar16 != 0) {
            FVar28 = FVar32;
            if (*(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10) !=
                (ForElementType<unsigned_int>)0x0) {
              FVar28 = *(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10);
            }
            uVar24 = *(uint *)FVar28;
            uStack_238 = 0;
            uVar26 = 0;
            while (uVar24 == 0) {
              lVar21 = (longlong)(int)uVar26;
              uStack_238 = uStack_238 + 0x20;
              uVar26 = uVar26 + 1;
              uStack_23c = uVar16;
              if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
              goto LAB_14e6a59ed;
              uVar24 = ((uint *)((longlong)FVar28 + 4))[lVar21];
            }
            uVar22 = -uVar24 & uVar24;
            uVar2 = (ulonglong)uVar22 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_1e8 = (int)lVar21;
            uStack_23c = (uStack_238 - 1) + local_1e8;
            if ((int)uVar16 < (int)uStack_23c) {
              uStack_23c = uVar16;
            }
          }
LAB_14e6a59ed:
          uVar24 = *(uint *)(lVar33 + 0x30 + lVar20);
          local_230 = *(int *)(lVar33 + 0x10 + lVar20) - *(int *)(lVar33 + 0x3c + lVar20);
          uVar23 = uVar24 & 0xffffffe0;
          uStack_250 = CONCAT44(uVar22,uVar26);
          uStack_240 = 0xffffffff;
          uStack_234 = local_6c;
          TStack_1b0._padding_ = uStack_250;
          iVar31 = (int)uVar24 >> 5;
          uStack_190 = CONCAT44(uStack_22c,local_230);
          TStack_1b0.UnvisitedBitMask = 0xffffffff;
          TStack_1b0.CurrentBitIndex = uStack_23c;
          TStack_1b0.BaseBitIndex = uStack_238;
          TStack_1b0._28_4_ = local_6c;
          FStack_248 = FVar32;
          local_1d8 = local_258;
          local_1b8 = local_258;
          TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar32;
          if ((((int)uVar24 < 0) || ((int)uVar16 < (int)uVar24)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar16 = *(uint *)((longlong)FVar32 + 0x18);
          if (uVar24 != uVar16) {
            FVar28 = FVar32;
            if (*(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10) !=
                (ForElementType<unsigned_int>)0x0) {
              FVar28 = *(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10);
            }
            uVar26 = -1 << ((byte)uVar24 & 0x1f) &
                     *(uint *)((longlong)FVar28 + (longlong)iVar31 * 4);
            while (uVar26 == 0) {
              lVar20 = (longlong)iVar31;
              uVar23 = uVar23 + 0x20;
              iVar31 = iVar31 + 1;
              uVar24 = uVar16;
              if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
              goto LAB_14e6a5b00;
              uVar26 = ((uint *)((longlong)FVar28 + 4))[lVar20];
            }
            uVar2 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
            lVar20 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_1e4 = (int)lVar20;
            uVar24 = (uVar23 - 1) + local_1e4;
            if ((int)uVar16 < (int)uVar24) {
              uVar24 = uVar16;
            }
          }
LAB_14e6a5b00:
          do {
            pTVar13 = local_1b8;
            if (*(int *)&local_1b8->field_0x8 - *(int *)&local_1b8->field_0x34 != (int)uStack_190) {
              local_res20[0] = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
            }
            if (((TStack_1b0.CurrentBitIndex == uVar24) &&
                ((ForElementType<unsigned_int>)TStack_1b0.Array == FVar32)) &&
               (pTVar13 == local_1d8)) goto LAB_14e6a5dcb;
            pFVar4 = this->GLTFAnimation;
            uVar16 = *(uint *)(*(longlong *)pTVar13 + (longlong)TStack_1b0.CurrentBitIndex * 0xc);
            lVar20 = (longlong)(int)uVar16;
            uVar26 = 0;
            if ((int)uVar16 < (pFVar4->Channels).ArrayNum) {
              uVar26 = ~uVar16 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar5 = (pFVar4->Channels).AllocatorInstance.Data;
            pFVar4 = this->GLTFAnimation;
            uVar16 = *(uint *)(pFVar5 + lVar20 * 0x18);
            lVar33 = (longlong)(int)uVar16;
            uVar26 = 0;
            if ((int)uVar16 < (pFVar4->Samplers).ArrayNum) {
              uVar26 = ~uVar16 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar6 = (pFVar4->Samplers).AllocatorInstance.Data;
            if (*(int *)(pFVar6 + lVar33 * 0x18) == 2) {
              bVar15 = *(int *)(*(longlong *)(pFVar6 + lVar33 * 0x18 + 8) + 4) ==
                       *(int *)(*(longlong *)(pFVar6 + lVar33 * 0x18 + 0x10) + 4) * 3;
LAB_14e6a5c34:
              if (!bVar15) goto LAB_14e6a5daf;
            }
            else if (*(int *)(pFVar5 + lVar20 * 0x18 + 0x10) != 3) {
              bVar15 = *(int *)(*(longlong *)(pFVar6 + lVar33 * 0x18 + 8) + 4) ==
                       *(int *)(*(longlong *)(pFVar6 + lVar33 * 0x18 + 0x10) + 4);
              goto LAB_14e6a5c34;
            }
            local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_228.ArrayNum = 0;
            local_228.ArrayMax = 0;
            GLTF::FAccessor::GetFloatArray(*(FAccessor **)(pFVar6 + lVar33 * 0x18 + 8),&local_228);
            uVar16 = 0;
            if (0 < local_228.ArrayNum) {
              uVar26 = local_228.ArrayNum - 1;
              if ((int)uVar26 < local_228.ArrayNum) {
                uVar16 = ~uVar26 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar16 = (uint)((double)*(float *)(local_228.AllocatorInstance.Data +
                                                (longlong)(int)uVar26 * 4) /
                             local_288.SingleFrameDuration);
              if ((float)(int)uVar16 <
                  (float)((double)*(float *)(local_228.AllocatorInstance.Data +
                                            (longlong)(int)uVar26 * 4) /
                         local_288.SingleFrameDuration)) {
                uVar16 = uVar16 + 1;
              }
            }
            if (local_288.FrameNumber < (int)uVar16) {
              local_288.StopTime = (double)(int)uVar16 * local_288.SingleFrameDuration;
              local_288.FrameNumber = uVar16;
            }
            if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.AllocatorInstance.Data);
            }
            if (*(int *)(pFVar5 + lVar20 * 0x18 + 0x10) != 3) {
              ::FString::PrintfImpl(&local_118,L"%d");
              ::FString::FString(&local_128,":");
              ::FString::ConcatFF(&local_1c8,&local_128,&local_118);
              iVar31 = local_1c8.Data.ArrayNum + -1;
              if (local_1c8.Data.ArrayNum == 0) {
                iVar31 = 0;
              }
              ::FString::AppendChars
                        (&local_2f0,(wchar_t *)local_1c8.Data.AllocatorInstance.Data,iVar31);
              if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
            }
            TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
          } while( true );
        }
        bVar15 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7345644358319733941>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfAnimation.cpp"
                            ,0x34b,"AnimatedNodeUidPtr");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        goto LAB_14e6a5e83;
      }
      UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationSampleRate
                (local_200,&local_288.FrameRate);
      UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStartTime
                (this_01,&local_288.StartTime);
      UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStopTime
                (this_01,&local_288.StopTime);
    }
    stack0xfffffffffffffec0 = (double)CONCAT44(iStack_13c,auStack_150._16_4_ & ~auStack_150._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
  } while( true );
LAB_14e6a5daf:
  if (2 < (byte)LogInterchangeImport._0_1_) {
    Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_UE::Interchange::Gltf::Private::AnimationHelpers::FAnimationHandler::ProcessRiggedAnimations(TMap<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>_const&___ptr64)___ptr64'
                ::__l24::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
  }
LAB_14e6a5dcb:
  iVar31 = local_2f0.Data.ArrayNum + -1;
  if (local_2f0.Data.ArrayNum == 0) {
    iVar31 = 0;
  }
  if (0 < iVar31) {
    ::FString::PrintfImpl(&local_108,L"%d");
    ::FString::ConcatFF(&local_218,&local_108,&local_2f0);
    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
    }
    local_2f0.Data.AllocatorInstance.Data = local_218.Data.AllocatorInstance.Data;
    local_2f0.Data.ArrayNum = local_218.Data.ArrayNum;
    local_2f0.Data.ArrayMax = local_218.Data.ArrayMax;
    local_218.Data.ArrayNum = 0;
    local_218.Data.ArrayMax = 0;
    local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    local_2f8[0] = BAKED;
    UInterchangeSkeletalAnimationTrackNode::SetAnimationPayloadKeyForSceneNodeUid
              (local_200,local_1d0,&local_2f0,local_2f8);
  }
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
LAB_14e6a5e83:
  TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  goto LAB_14e6a5850;
}

// ProcessRigidAnimation @ 14e6a5f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::Interchange::Gltf::Private::AnimationHelpers::FAnimationHandler::ProcessRigidAnimation
          (FAnimationHandler *this,
          TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
          *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  UInterchangeBaseNodeContainer *pUVar3;
  TArray<GLTF::FNode,TSizedDefaultAllocator<32>_> *pTVar4;
  FAnimation *pFVar5;
  code *pcVar6;
  TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *pTVar7;
  bool bVar8;
  UClass *pUVar9;
  UInterchangeAnimationTrackSetNode *pUVar10;
  FString *pFVar11;
  UInterchangeTransformAnimationTrackNode *this_00;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint *puVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8;
  undefined1 local_2d7;
  EInterchangeAnimationPayLoadType local_2d6 [2];
  uint local_2d4;
  uint local_2d0;
  FString local_2c8;
  TBitArray<FDefaultBitArrayAllocator> *local_2b8;
  TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *local_2b0;
  FString local_2a8;
  TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *local_298;
  int iStack_290;
  uint uStack_28c;
  undefined1 *local_288;
  undefined4 uStack_280;
  int iStack_27c;
  int local_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  UInterchangeTransformAnimationTrackNode *local_258;
  UInterchangeAnimationTrackSetNode *local_250;
  FString local_248;
  FString local_238;
  FString local_228;
  uint *local_218;
  uint uStack_210;
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  uint local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  uint *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  FString local_188;
  FString local_178;
  FString local_168 [2];
  undefined4 local_13c;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    pUVar3 = this->NodeContainer;
    local_2b0 = param_1;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UInterchangeAnimationTrackSetNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_138,pUVar9);
    local_138._8_8_ = pUVar3;
    pUVar10 = (UInterchangeAnimationTrackSetNode *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
    local_250 = pUVar10;
    if (local_138._64_8_ != 0) {
      plVar13 = (longlong *)(local_138 + 0x50);
      if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_138._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    ::FString::ConcatCF(local_168,L"\\Animation\\",&this->GLTFAnimation->UniqueId);
    pUVar3 = this->NodeContainer;
    ::FString::FString(&local_188,L"");
    UInterchangeBaseNodeContainer::SetupNode
              (pUVar3,(UInterchangeBaseNode *)pUVar10,local_168,&this->GLTFAnimation->Name,
               TranslatedAsset,&local_188);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    iVar15 = *(int *)&param_1->field_0x28;
    pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
    iStack_290 = 0;
    uStack_28c = 1;
    local_278 = 0;
    iStack_27c = 0;
    if (iVar15 != 0) {
      puVar21 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar21 = (uint *)pTVar22;
      }
      uVar18 = *puVar21;
      local_278 = 0;
      while (uVar18 == 0) {
        lVar12 = (longlong)iStack_290;
        local_278 = local_278 + 0x20;
        iStack_290 = iStack_290 + 1;
        iStack_27c = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_290)
        goto LAB_14e6a60dd;
        uVar18 = puVar21[lVar12 + 1];
      }
      uStack_28c = -uVar18 & uVar18;
      uVar2 = (ulonglong)uStack_28c * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_268 = (int)lVar12;
      iStack_27c = local_278 + -1 + local_268;
      if (iVar15 < iStack_27c) {
        iStack_27c = iVar15;
      }
    }
LAB_14e6a60dd:
    uVar18 = *(uint *)&param_1->field_0x28;
    uStack_274 = local_13c;
    uVar16 = uVar18 & 0xffffffe0;
    iStack_270 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
    TStack_1b0._padding_ = CONCAT44(uStack_28c,iStack_290);
    uStack_280 = 0xffffffff;
    TStack_1b0.CurrentBitIndex = iStack_27c;
    TStack_1b0.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar18 >> 5;
    TStack_1b0._28_4_ = local_13c;
    TStack_1b0.BaseBitIndex = local_278;
    uStack_190 = CONCAT44(uStack_26c,iStack_270);
    local_2d0 = uVar18;
    local_2b8 = pTVar22;
    local_298 = param_1;
    local_288 = (undefined1 *)pTVar22;
    local_1b8 = param_1;
    TStack_1b0.Array = pTVar22;
    if ((((int)uVar18 < 0) || (iVar15 < (int)uVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar17 = *(uint *)&param_1->field_0x28;
    if (uVar18 != uVar17) {
      puVar19 = *(undefined1 **)&param_1->field_0x20;
      if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
        puVar19 = (undefined1 *)pTVar22;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
      while (uVar18 == 0) {
        lVar12 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        uVar18 = uVar17;
        local_2d0 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14e6a61f1;
        uVar18 = *(uint *)(puVar19 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_264 = (int)lVar12;
      uVar18 = local_264 + -1 + uVar16;
      local_2d0 = uVar18;
      if ((int)uVar17 < (int)uVar18) {
        uVar18 = uVar17;
        local_2d0 = uVar17;
      }
    }
LAB_14e6a61f1:
    while( true ) {
      pTVar7 = local_1b8;
      if (*(int *)&local_1b8->field_0x8 - *(int *)&local_1b8->field_0x34 != (int)uStack_190) {
        local_2d8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
      }
      if (((TStack_1b0.CurrentBitIndex == uVar18) && (TStack_1b0.Array == pTVar22)) &&
         (pTVar7 == param_1)) break;
      puVar21 = (uint *)((longlong)TStack_1b0.CurrentBitIndex * 0x60 + *(longlong *)pTVar7);
      if (puVar21[4] != puVar21[0xf]) {
        uVar18 = *puVar21;
        pTVar4 = this->GLTFNodes;
        uVar16 = 0;
        if ((int)uVar18 < pTVar4->ArrayNum) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar11 = TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                  ::Find((TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                          *)this->GLTFNodeToInterchangeUidMap,
                         (FNode *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x260)
                        );
        if (pFVar11 == (FString *)0x0) {
          bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7345644358319733814>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfAnimation.cpp"
                             ,0x3ca,"NodeUid");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          pUVar3 = this->NodeContainer;
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)pUVar3,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar9 = Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_b8,pUVar9);
          local_b8._8_8_ = pUVar3;
          this_00 = (UInterchangeTransformAnimationTrackNode *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
          local_258 = this_00;
          if (local_b8._64_8_ != 0) {
            plVar13 = (longlong *)(local_b8 + 0x50);
            if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
              plVar13 = (longlong *)local_b8._104_8_;
            }
            (**(code **)(*plVar13 + 0x10))();
          }
          ::FString::PrintfImpl(&local_228,L"%s_%s");
          ::FString::ConcatCF(&local_238,L"\\AnimationTrack\\",&local_228);
          pUVar3 = this->NodeContainer;
          ::FString::FString(&local_178,L"");
          UInterchangeBaseNodeContainer::SetupNode
                    (pUVar3,(UInterchangeBaseNode *)this_00,&local_238,&local_228,TranslatedAsset,
                     &local_178);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          UInterchangeAnimationTrackNode::SetCustomActorDependencyUid
                    ((UInterchangeAnimationTrackNode *)this_00,pFVar11);
          local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c8.Data.ArrayNum = 0;
          local_2c8.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_2c8,this->AnimationIndex);
          pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar21 + 6);
          uStack_210 = 0;
          local_2d4 = 0;
          uVar18 = puVar21[0xc];
          puVar1 = puVar21 + 2;
          uStack_20c = 1;
          local_1f8 = 0;
          uStack_1fc = local_1f8;
          if (uVar18 != 0) {
            pTVar20 = pTVar22;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar21 + 10) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar21 + 10);
            }
            uVar16 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
            local_1f8 = 0;
            uStack_210 = 0;
            while (uVar16 == 0) {
              lVar12 = (longlong)(int)uStack_210;
              local_1f8 = local_1f8 + 0x20;
              uStack_210 = uStack_210 + 1;
              uStack_1fc = uVar18;
              if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_210)
              goto LAB_14e6a648d;
              uVar16 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar12 * 4 + 4);
            }
            uStack_20c = -uVar16 & uVar16;
            uVar2 = (ulonglong)uStack_20c * 2 + 1;
            lVar12 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_260 = (int)lVar12;
            uStack_1fc = (local_1f8 - 1) + local_260;
            if ((int)uVar18 < (int)uStack_1fc) {
              uStack_1fc = uVar18;
            }
          }
LAB_14e6a648d:
          iStack_1f4 = iStack_27c;
          iStack_1f0 = puVar21[4] - puVar21[0xf];
          uVar16 = puVar21[0xc];
          uVar17 = uVar16 & 0xffffffe0;
          TStack_1e0._padding_ = CONCAT44(uStack_20c,uStack_210);
          uStack_200 = 0xffffffff;
          TStack_1e0.CurrentBitIndex = uStack_1fc;
          TStack_1e0.UnvisitedBitMask = 0xffffffff;
          iVar15 = (int)uVar16 >> 5;
          TStack_1e0._28_4_ = iStack_27c;
          TStack_1e0.BaseBitIndex = local_1f8;
          uStack_1c0 = CONCAT44(uStack_1ec,iStack_1f0);
          local_218 = puVar1;
          local_208 = pTVar22;
          local_1e8 = puVar1;
          TStack_1e0.Array = pTVar22;
          if ((((int)uVar16 < 0) || ((int)uVar18 < (int)uVar16)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar18 = puVar21[0xc];
          if (uVar16 != uVar18) {
            pTVar20 = pTVar22;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar21 + 10) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar21 + 10);
            }
            uVar16 = -1 << ((byte)uVar16 & 0x1f) &
                     *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
            while (uVar16 == 0) {
              lVar12 = (longlong)iVar15;
              uVar17 = uVar17 + 0x20;
              iVar15 = iVar15 + 1;
              uVar16 = uVar18;
              if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
              goto LAB_14e6a658d;
              uVar16 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar12 * 4 + 4);
            }
            uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_25c = (int)lVar12;
            uVar16 = local_25c + -1 + uVar17;
            if ((int)uVar18 < (int)uVar16) {
              uVar16 = uVar18;
            }
          }
LAB_14e6a658d:
          while( true ) {
            puVar21 = local_1e8;
            if (local_1e8[2] - local_1e8[0xd] != (int)uStack_1c0) {
              local_2d7 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d7);
            }
            if (((TStack_1e0.CurrentBitIndex == uVar16) && (TStack_1e0.Array == pTVar22)) &&
               (puVar21 == puVar1)) break;
            local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2a8.Data.ArrayNum = 0;
            local_2a8.Data.ArrayMax = 0;
            uVar18 = *(uint *)(*(longlong *)puVar21 + (longlong)TStack_1e0.CurrentBitIndex * 0xc);
            ::FString::AppendInt(&local_2a8,uVar18);
            ::FString::ConcatCF(&local_248,L":",&local_2a8);
            iVar15 = local_248.Data.ArrayNum + -1;
            if (local_248.Data.ArrayNum == 0) {
              iVar15 = 0;
            }
            ::FString::AppendChars
                      (&local_2c8,(wchar_t *)local_248.Data.AllocatorInstance.Data,iVar15);
            if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.Data.AllocatorInstance.Data);
            }
            if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
            }
            pFVar5 = this->GLTFAnimation;
            uVar17 = 0;
            if ((int)uVar18 < (pFVar5->Channels).ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar15 = *(int *)((pFVar5->Channels).AllocatorInstance.Data +
                             (longlong)(int)uVar18 * 0x18 + 0x10);
            if (iVar15 == 0) {
              local_2d4 = local_2d4 | 7;
            }
            else if (iVar15 == 1) {
              local_2d4 = local_2d4 | 0x38;
            }
            else if (iVar15 == 2) {
              local_2d4 = local_2d4 | 0x1c0;
            }
            TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
          }
          local_2d6[0] = CURVE;
          UInterchangeAnimationTrackNode::SetCustomAnimationPayloadKey
                    ((UInterchangeAnimationTrackNode *)local_258,&local_2c8,local_2d6);
          UInterchangeTransformAnimationTrackNode::SetCustomUsedChannels
                    (local_258,(int *)&local_2d4);
          UInterchangeAnimationTrackSetNode::AddCustomAnimationTrackUid(local_250,&local_238);
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          }
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          param_1 = local_2b0;
          pTVar22 = local_2b8;
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
            param_1 = local_2b0;
            pTVar22 = local_2b8;
          }
        }
      }
      TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
      uVar18 = local_2d0;
    }
    if (local_168[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

