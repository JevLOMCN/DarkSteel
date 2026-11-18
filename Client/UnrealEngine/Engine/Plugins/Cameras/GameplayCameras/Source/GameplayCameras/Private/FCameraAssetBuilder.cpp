// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// FCameraAssetBuilder @ 14d542d10

FCameraAssetBuilder * __thiscall
UE::Cameras::FCameraAssetBuilder::FCameraAssetBuilder
          (FCameraAssetBuilder *this,FCameraBuildLog *param_1)

{
  this->BuildLog = param_1;
  this->CameraAsset = (UCameraAsset *)0x0;
  return this;
}

// BuildCamera @ 14d549a40

/* WARNING: Removing unreachable block (ram,0x00014d549b3e) */

void __thiscall
UE::Cameras::FCameraAssetBuilder::BuildCamera
          (FCameraAssetBuilder *this,UCameraAsset *param_1,bool param_2)

{
  FCameraBuildLog *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  FString *pFVar6;
  ECameraBuildStatus EVar7;
  uint uVar8;
  longlong lVar9;
  FString local_48;
  FString local_38;
  FDestructionSentinel local_28;
  
  if (param_1 == (UCameraAsset *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3978252469107949595>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraAssetBuilder.cpp"
                       ,0x1b,"InCameraAsset");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = this->BuildLog;
    this->CameraAsset = param_1;
    pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_38,(UObject *)0x0)
    ;
    ::FString::ConcatFC(&local_48,pFVar6,L": ");
    FCameraBuildLog::SetLoggingPrefix(this_00,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    BuildCameraImpl(this,param_2);
    ::FString::Empty(&this->BuildLog->LoggingPrefix);
    if (this->BuildLog->bHasErrors == false) {
      EVar7 = Clean;
      if (this->BuildLog->bHasWarnings != false) {
        EVar7 = CleanWithWarnings;
      }
    }
    else {
      EVar7 = WithErrors;
    }
    this->CameraAsset->BuildStatus = EVar7;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FGameplayCamerasDelegates::OnCameraAssetBuiltDelegate,(FWriteAccessScope *)&local_28
              );
    bVar2 = false;
    FGameplayCamerasDelegates::OnCameraAssetBuiltDelegate._28_4_ =
         FGameplayCamerasDelegates::OnCameraAssetBuiltDelegate._28_4_ + 1;
    uVar8 = FGameplayCamerasDelegates::OnCameraAssetBuiltDelegate._16_4_ - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      bVar2 = false;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (int)FGameplayCamerasDelegates::OnCameraAssetBuiltDelegate._16_4_) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar9 + 8 + FGameplayCamerasDelegates::OnCameraAssetBuiltDelegate._8_8_) == 0
             ) || (*(longlong **)
                    (lVar9 + FGameplayCamerasDelegates::OnCameraAssetBuiltDelegate._8_8_) ==
                   (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)
                                   (lVar9 + FGameplayCamerasDelegates::OnCameraAssetBuiltDelegate.
                                            _8_8_) + 0x68))(), cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    FGameplayCamerasDelegates::OnCameraAssetBuiltDelegate._28_4_ =
         FGameplayCamerasDelegates::OnCameraAssetBuiltDelegate._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FGameplayCamerasDelegates::OnCameraAssetBuiltDelegate,false);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// BuildCameraImpl @ 14d549d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraAssetBuilder::BuildCameraImpl(FCameraAssetBuilder *this,bool param_1)

{
  int *piVar1;
  bool *pbVar2;
  FName FVar3;
  ulonglong uVar4;
  UCameraDirector *pUVar5;
  FCameraBuildLog *pFVar6;
  UCameraRigAsset *pUVar7;
  FCameraObjectInterfaceParameterDefinition *pFVar8;
  UCameraAsset *pUVar9;
  code *pcVar10;
  FCameraAssetBuilder *pFVar11;
  longlong *plVar12;
  bool bVar13;
  int iVar14;
  FText *pFVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar16;
  TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_> *pTVar17;
  FString *pFVar18;
  FName *pFVar19;
  byte bVar20;
  longlong lVar21;
  FInstancedPropertyBag *this_00;
  ForElementType<FSetElementId> FVar22;
  ForAnyElementType FVar23;
  wchar_t *pwVar24;
  bool *pbVar25;
  bool *pbVar26;
  FScriptContainerElement *pFVar27;
  FName *pFVar28;
  FCameraObjectInterfaceParameterDefinition *pFVar29;
  TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_> *pTVar30;
  uint uVar31;
  ForAnyElementType FVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  ulonglong *puVar35;
  uint uVar36;
  int iVar37;
  uint *puVar38;
  ForElementType<unsigned_int> FVar39;
  longlong lVar40;
  FName FVar41;
  uint uVar42;
  FName *pFVar43;
  undefined1 auStackY_6a8 [32];
  undefined1 local_658;
  undefined1 local_657;
  undefined1 local_656;
  undefined1 local_655;
  undefined1 local_654;
  undefined1 local_653;
  undefined1 local_652 [2];
  longlong *local_650;
  undefined8 uStack_648;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  int local_628;
  undefined4 uStack_624;
  ForAnyElementType local_620;
  int local_618;
  int iStack_614;
  undefined1 local_610 [8];
  UCameraRigAsset *local_608;
  FCameraAssetBuilder *local_600;
  undefined8 local_5f8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_5f0;
  FCameraVariableTableAllocationInfo local_5e0;
  FCameraContextDataTableAllocationInfo local_5d0;
  undefined1 local_5c0 [12];
  uint uStack_5b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5b0;
  undefined8 uStack_5a8;
  longlong lStack_5a0;
  int local_598;
  undefined4 uStack_594;
  TKeyInitializer<UCameraRigAsset_const_*_const_&> local_590;
  TObjectPtr<UScriptStruct_const_>_u_0 local_588;
  uchar *local_580;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_578;
  bool *local_568;
  undefined8 local_560;
  bool *local_558;
  undefined8 local_550;
  FName local_548;
  TBitArray<FDefaultBitArrayAllocator> *local_540;
  FString local_538;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_528;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_508;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4c8;
  int local_4a8;
  int local_4a4;
  int local_4a0;
  longlong local_498;
  UCameraRigAsset **local_490;
  FName local_488;
  UCameraRigAsset *local_480;
  FString local_478;
  undefined4 local_468;
  undefined8 local_464;
  undefined1 local_45c [8];
  int local_454;
  int local_450;
  longlong *local_448;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_440;
  undefined8 uStack_420;
  undefined1 local_418 [12];
  uint uStack_40c;
  TBitArray<FDefaultBitArrayAllocator> *local_408;
  undefined8 uStack_400;
  longlong local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  longlong *local_3e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3e0;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b0;
  undefined8 uStack_390;
  longlong *local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_380;
  undefined8 uStack_360;
  FCameraObjectInterfaceParameterDefinition *local_358;
  int iStack_350;
  undefined4 uStack_34c;
  FPropertyBagPropertyDesc *local_348;
  int iStack_340;
  undefined4 uStack_33c;
  FCameraRigAssetBuilder local_338;
  FName local_318;
  FText local_310;
  FText local_300;
  FString local_2f0;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_2d8;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_2c8;
  TRangedForIterator local_2b8;
  TRangedForIterator local_288;
  FStringFormatArg local_258;
  FStringFormatArg local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  undefined4 local_1bc;
  undefined4 local_19c;
  undefined4 local_17c;
  undefined1 local_178 [32];
  ForElementType<unsigned_int> local_158;
  uint local_150;
  int local_14c;
  int local_148;
  int local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined1 local_f0 [8];
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  local_178._0_8_ = (FScriptContainerElement *)0x0;
  local_178._8_8_ = 0;
  local_158 = (ForElementType<unsigned_int>)0x0;
  local_150 = 0;
  local_14c = 0x80;
  local_148 = -1;
  local_144 = 0;
  local_138 = (ForElementType<FSetElementId>)0x0;
  local_130 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  pUVar5 = (this->CameraAsset->CameraDirector).field0_0x0.DebugPtr;
  local_600 = this;
  if (pUVar5 == (UCameraDirector *)0x0) {
    pFVar6 = this->BuildLog;
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_310,L"CameraAssetBuilder",L"MissingDirector",
                         L"Camera has no director set.");
    local_5f8 = 1;
    FCameraBuildLog::AddMessage(pFVar6,Error,(UObject *)0x0,pFVar15);
    if (local_310.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_310.TextData.Reference + 0x10))();
    }
  }
  else {
    (**(code **)(pUVar5->_padding_ + 0x2b8))(pUVar5,this->BuildLog);
    local_568 = (bool *)0x0;
    local_560 = 0;
    local_558 = (bool *)0x0;
    local_550 = 0;
    (**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5,&local_568);
    pbVar25 = local_568;
    iVar14 = (int)local_560;
    lVar40 = (longlong)(int)local_560;
    if (((int)local_560 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_5f8 = 1;
    uVar33 = iVar14 + (local_178._8_4_ - local_144);
    iVar14 = 1;
    if ((uint)(local_178._8_4_ - local_144) < uVar33) {
      if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidSetNum((longlong)(int)uVar33);
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_178,uVar33);
      iVar37 = iVar14;
      if (3 < uVar33) {
        uVar4 = (ulonglong)((uVar33 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_468 = (undefined4)lVar21;
        iVar37 = 1 << ((byte)lVar21 & 0x1f);
      }
      if ((local_130 == 0) || (local_130 < iVar37)) {
        local_130 = iVar37;
        TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator>::Rehash
                  ((TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator>
                    *)local_178);
      }
    }
    pbVar2 = pbVar25 + lVar40 * 8;
    pbVar26 = local_558;
    for (; local_558 = pbVar26, pbVar25 != pbVar2; pbVar25 = pbVar25 + 8) {
      TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator>::
      Emplace<UCameraRigAsset_*_const_&>
                ((TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator>
                  *)local_178,(UCameraRigAsset **)&local_464,pbVar25);
      pbVar26 = local_558;
    }
    iVar37 = (int)local_550;
    lVar40 = (longlong)(int)local_550;
    if (((int)local_550 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar33 = iVar37 + (local_88._8_4_ - local_54);
    if ((uint)(local_88._8_4_ - local_54) < uVar33) {
      if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidSetNum((longlong)(int)uVar33);
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_88,uVar33);
      if (3 < uVar33) {
        uVar4 = (ulonglong)((uVar33 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_464._4_4_ = (undefined4)lVar21;
        iVar14 = 1 << ((byte)lVar21 & 0x1f);
      }
      if ((local_40 == 0) || (local_40 < iVar14)) {
        local_40 = iVar14;
        TSet<UCameraRigProxyAsset_*,DefaultKeyFuncs<UCameraRigProxyAsset_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<UCameraRigProxyAsset_*,DefaultKeyFuncs<UCameraRigProxyAsset_*,0>,FDefaultSetAllocator>
                  *)local_88);
      }
    }
    pbVar25 = pbVar26 + lVar40 * 8;
    for (; pbVar26 != pbVar25; pbVar26 = pbVar26 + 8) {
      TSet<UCameraRigProxyAsset_*,DefaultKeyFuncs<UCameraRigProxyAsset_*,0>,FDefaultSetAllocator>::
      Emplace<UCameraRigProxyAsset_*_const_&>
                ((TSet<UCameraRigProxyAsset_*,DefaultKeyFuncs<UCameraRigProxyAsset_*,0>,FDefaultSetAllocator>
                  *)local_88,(UCameraRigProxyAsset **)local_45c,pbVar26);
    }
    if (local_558 != (bool *)0x0) {
      FMemory::Free(local_558);
    }
    this = local_600;
    if (local_568 != (bool *)0x0) {
      FMemory::Free(local_568);
      this = local_600;
    }
  }
  if ((local_178._8_4_ == local_144) && (local_88._8_4_ == local_54)) {
    pFVar6 = this->BuildLog;
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_300,L"CameraAssetBuilder",L"MissingRigs",
                         L"Camera director isn\'t using any camera rigs or proxies.");
    FCameraBuildLog::AddMessage(pFVar6,Warning,(UObject *)0x0,pFVar15);
    if (local_300.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
    }
  }
  if (pUVar5 != (UCameraDirector *)0x0) {
    iVar14 = (pUVar5->CameraRigProxyRedirectTable).Entries.ArrayNum;
    pFVar27 = (pUVar5->CameraRigProxyRedirectTable).Entries.AllocatorInstance.Data;
    pFVar34 = pFVar27 + (longlong)iVar14 * 0x10;
    while( true ) {
      if ((pUVar5->CameraRigProxyRedirectTable).Entries.ArrayNum != iVar14) {
        local_658 = 0;
        `TCheckedPointerIterator<FCameraRigProxyRedirectTableEntry,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_658);
      }
      if (pFVar27 == pFVar34) break;
      if (*(longlong *)(pFVar27 + 8) != 0) {
        local_498 = *(longlong *)(pFVar27 + 8);
        TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator>::
        Emplace<UCameraRigAsset_*>
                  ((TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator>
                    *)local_178,(UCameraRigAsset **)(local_45c + 4),(bool *)&local_498);
      }
      pFVar27 = pFVar27 + 0x10;
    }
  }
  if (param_1) {
    local_508.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
    local_508._padding_._0_4_ = 0;
    local_508._padding_._4_4_ = 1;
    local_508.UnvisitedBitMask = 0xffffffff;
    local_508.CurrentBitIndex = 0;
    local_508.BaseBitIndex = 0;
    if (local_150 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_508);
    }
    unique0x10001696 = CONCAT44(local_508._padding_._4_4_,(undefined4)local_508._padding_);
    local_5c0._0_8_ = local_178;
    uStack_5a8 = CONCAT44(local_508.CurrentBitIndex,local_508.UnvisitedBitMask);
    lStack_5a0 = CONCAT44(local_508._28_4_,local_508.BaseBitIndex);
    pTStack_5b0 = local_508.Array;
    local_598 = local_178._8_4_ - local_144;
    local_408 = local_508.Array;
    iStack_3f0 = local_178._8_4_ - local_144;
    uStack_3ec = uStack_594;
    local_418._0_8_ = local_5c0._0_8_;
    unique0x10002aab = unique0x10001696;
    uStack_400 = uStack_5a8;
    local_3f8 = lStack_5a0;
    pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_218,(TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),
                         local_150);
    local_5c0._0_8_ = local_178;
    unique0x1000122e = pTVar16->_padding_;
    pTStack_5b0 = pTVar16->Array;
    uStack_5a8._0_4_ = pTVar16->UnvisitedBitMask;
    uStack_5a8._4_4_ = pTVar16->CurrentBitIndex;
    lStack_5a0 = *(longlong *)&pTVar16->BaseBitIndex;
    local_598 = local_178._8_4_ - local_144;
    local_2b8.InitialNum = local_178._8_4_ - local_144;
    local_2b8._44_4_ = uStack_594;
    local_2b8._padding_ = local_5c0._0_8_;
    local_2b8._padding_ = unique0x1000122e;
    local_2b8._padding_ = (longlong)pTStack_5b0;
    local_2b8._padding_ = uStack_5a8;
    local_2b8._padding_ = lStack_5a0;
    bVar13 = TSparseArray<TSparseSetElement<UCameraRigAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_418,&local_2b8);
    pFVar11 = local_600;
    if (bVar13) {
      do {
        local_338.CameraRig = (UCameraRigAsset *)0x0;
        local_338.BuildLog = pFVar11->BuildLog;
        pUVar7 = *(UCameraRigAsset **)
                  (*(longlong *)local_418._0_8_ + (longlong)uStack_400._4_4_ * 0x10);
        FCameraNodeHierarchy::FCameraNodeHierarchy(&local_338.CameraNodeHierarchy);
        FCameraRigAssetBuilder::BuildCameraRig(&local_338,pUVar7);
        if (local_338.CameraNodeHierarchy.FlattenedHierarchy.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.CameraNodeHierarchy.FlattenedHierarchy.AllocatorInstance.Data);
        }
        uStack_400 = CONCAT44(uStack_400._4_4_,(uint)uStack_400 & ~uStack_40c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_418 + 8));
        bVar13 = TSparseArray<TSparseSetElement<UCameraRigAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_418,&local_2b8);
      } while (bVar13);
    }
  }
  local_4e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  local_108 = (uint *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  local_4e8._padding_._0_4_ = 0;
  local_4e8._padding_._4_4_ = 1;
  local_4e8.UnvisitedBitMask = 0xffffffff;
  local_4e8.CurrentBitIndex = 0;
  local_4e8.BaseBitIndex = 0;
  if (local_150 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4e8);
  }
  uStack_648 = CONCAT44(local_4e8._padding_._4_4_,(undefined4)local_4e8._padding_);
  local_650 = (longlong *)local_178;
  uStack_638 = CONCAT44(local_4e8.CurrentBitIndex,local_4e8.UnvisitedBitMask);
  uStack_630 = CONCAT44(local_4e8._28_4_,local_4e8.BaseBitIndex);
  local_628 = local_178._8_4_ - local_144;
  pTStack_640 = local_4e8.Array;
  uStack_594 = uStack_624;
  local_598 = local_628;
  pTStack_5b0 = local_4e8.Array;
  local_5c0._0_8_ = local_650;
  unique0x10002a43 = uStack_648;
  uStack_5a8 = uStack_638;
  lStack_5a0 = uStack_630;
  pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_1f8,(TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),
                       local_150);
  local_650 = (longlong *)local_178;
  uStack_648 = pTVar16->_padding_;
  pTStack_640 = pTVar16->Array;
  uStack_638._0_4_ = pTVar16->UnvisitedBitMask;
  uStack_638._4_4_ = pTVar16->CurrentBitIndex;
  uStack_630 = *(longlong *)&pTVar16->BaseBitIndex;
  local_628 = local_178._8_4_ - local_144;
  local_288._44_4_ = uStack_624;
  local_288.InitialNum = local_628;
  local_288._padding_ = (longlong)local_650;
  local_288._padding_ = uStack_648;
  local_288._padding_ = (longlong)pTStack_640;
  local_288._padding_ = uStack_638;
  local_288._padding_ = uStack_630;
  bVar13 = TSparseArray<TSparseSetElement<UCameraRigAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_5c0,&local_288);
  if (bVar13) {
    do {
      local_608 = *(UCameraRigAsset **)
                   (*(longlong *)local_5c0._0_8_ + (longlong)uStack_5a8._4_4_ * 0x10);
      uVar33 = ((uint)((ulonglong)local_608 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_608 >> 4)) *
               -0x7a143595;
      uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
      local_480 = local_608;
      iVar14 = TSet<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<UCameraRigAsset_const_*>
                         ((TSet<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                           *)local_128,uVar33 >> 0x10 ^ uVar33,&local_480);
      if (iVar14 == -1) {
        local_490 = &local_608;
        TSet<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<UCameraRigAsset_const_*_const_&>_>
                  ((TSet<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_128,&local_590,(bool *)&local_490);
        lVar40 = (longlong)(int)local_590.Key * 0x20 + local_128._0_8_;
        iVar14 = (int)local_608->_padding_;
        pFVar8 = (FCameraObjectInterfaceParameterDefinition *)local_608->_padding_;
        if (iVar14 < 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x9a9,L"Invalid range size: %lld");
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
LAB_14d54a5fa:
          iVar37 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x48,8,iVar14,(ForAnyElementType *)(lVar40 + 8),(int *)(lVar40 + 0x10)
                              ,(int *)(lVar40 + 0x14));
          ConstructItems<FCameraObjectInterfaceParameterDefinition,FCameraObjectInterfaceParameterDefinition,int>
                    ((void *)(*(longlong *)(lVar40 + 8) + (longlong)iVar37 * 0x48),pFVar8,iVar14);
        }
        else if (iVar14 != 0) goto LAB_14d54a5fa;
        iVar14 = *(int *)(lVar40 + 0x10);
        pFVar19 = *(FName **)(lVar40 + 8);
        pFVar43 = pFVar19 + (longlong)iVar14 * 9;
        while( true ) {
          if (*(int *)(lVar40 + 0x10) != iVar14) {
            local_657 = 0;
            `TCheckedPointerIterator<FCameraObjectInterfaceParameterDefinition,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_657);
          }
          if (pFVar19 == pFVar43) break;
          FVar3 = *pFVar19;
          uVar33 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
          pTVar17 = TMapBase<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>,0>_>
                                *)local_d8,FVar3.Number + uVar33,pFVar19);
          pFVar27 = (pTVar17->AllocatorInstance).Data;
          if (((pFVar27 <= (FScriptContainerElement *)&local_608) &&
              ((FScriptContainerElement *)&local_608 < pFVar27 + (longlong)pTVar17->ArrayMax * 8))
             && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar37 = pTVar17->ArrayNum;
          if (iVar37 == pTVar17->ArrayMax) {
            iVar37 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
          }
          pTVar17->ArrayNum = iVar37 + 1;
          pFVar19 = pFVar19 + 9;
          *(UCameraRigAsset **)((pTVar17->AllocatorInstance).Data + (longlong)iVar37 * 8) =
               local_608;
        }
      }
      else {
        bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3978252469107949665>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraAssetBuilder.cpp"
                            ,0x61,"!DefinitionsByCameraRig.Contains(CameraRig)");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uStack_5a8 = CONCAT44(uStack_5a8._4_4_,(uint)uStack_5a8 & ~uStack_5b4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5c0 + 8));
      bVar13 = TSparseArray<TSparseSetElement<UCameraRigAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_5c0,&local_288);
    } while (bVar13);
  }
  local_4c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  local_4c8._padding_._0_4_ = 0;
  local_4c8._padding_._4_4_ = 1;
  local_4c8.UnvisitedBitMask = 0xffffffff;
  local_4c8.CurrentBitIndex = 0;
  local_4c8.BaseBitIndex = 0;
  if (local_b0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4c8);
  }
  uVar33 = local_b0;
  uStack_648 = CONCAT44(local_4c8._padding_._4_4_,(undefined4)local_4c8._padding_);
  local_650 = (longlong *)local_d8;
  uStack_638._4_4_ = local_4c8.CurrentBitIndex;
  uStack_638._0_4_ = local_4c8.UnvisitedBitMask;
  uStack_630._4_4_ = local_4c8._28_4_;
  uStack_630._0_4_ = local_4c8.BaseBitIndex;
  local_528.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  bVar20 = (byte)local_b0 & 0x1f;
  local_628 = local_d8._8_4_ - local_a4;
  local_528._padding_._0_4_ = (int)local_b0 >> 5;
  local_528._padding_._4_4_ = 1 << bVar20;
  local_528.UnvisitedBitMask = -1 << bVar20;
  pTStack_640 = local_4c8.Array;
  local_528.BaseBitIndex = local_b0 & 0xffffffe0;
  local_528.CurrentBitIndex = local_b0;
  uStack_3c0 = CONCAT44(uStack_624,local_628);
  TStack_3e0.Array = local_4c8.Array;
  local_3e8 = local_650;
  TStack_3e0._padding_ = uStack_648;
  TStack_3e0._16_8_ = uStack_638;
  TStack_3e0._24_8_ = uStack_630;
  if (((int)local_b0 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (uVar33 != local_b0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_528);
  }
  uStack_648 = CONCAT44(local_528._padding_._4_4_,(int)local_528._padding_);
  uStack_638 = CONCAT44(local_528.CurrentBitIndex,local_528.UnvisitedBitMask);
  uStack_630 = CONCAT44(local_528._28_4_,local_528.BaseBitIndex);
  pTStack_640 = local_528.Array;
  local_540 = local_528.Array;
  local_590.Key._4_4_ = local_528.CurrentBitIndex;
  uVar33 = local_528.CurrentBitIndex;
  while( true ) {
    plVar12 = local_3e8;
    if ((int)local_3e8[1] - *(int *)((longlong)local_3e8 + 0x34) != (int)uStack_3c0) {
      local_656 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_656);
    }
    uVar42 = local_100;
    if (((TStack_3e0.CurrentBitIndex == uVar33) && (TStack_3e0.Array == local_540)) &&
       (plVar12 == (longlong *)local_d8)) break;
    pFVar43 = (FName *)((longlong)TStack_3e0.CurrentBitIndex * 0x20 + *plVar12);
    uVar42 = pFVar43[2].ComparisonIndex.Value;
    if (1 < (int)uVar42) {
      FVar41 = pFVar43[1];
      local_548 = *pFVar43;
      FVar3 = (FName)((longlong)FVar41 + (longlong)(int)uVar42 * 8);
LAB_14d54a923:
      if (pFVar43[2].ComparisonIndex.Value != uVar42) {
        local_655 = 0;
        `TCheckedPointerIterator<UCameraRigAsset_const_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_655);
      }
      uVar33 = local_590.Key._4_4_;
      if (FVar41 != FVar3) {
        uVar4 = *(ulonglong *)FVar41;
        uVar33 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
        if (local_128._8_4_ != local_f4) {
          FVar22 = (ForElementType<FSetElementId>)local_f0;
          if (local_e8 != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_e8;
          }
          iVar14 = *(int *)((longlong)FVar22 +
                           (ulonglong)(local_e0 - 1U & (uVar33 >> 0x10 ^ uVar33)) * 4);
          while (iVar14 != -1) {
            puVar35 = (ulonglong *)((longlong)iVar14 * 0x20 + local_128._0_8_);
            if (*puVar35 == uVar4) {
              if (puVar35 != (ulonglong *)0x0) goto LAB_14d54a9f3;
              goto LAB_14d54a9cd;
            }
            iVar14 = (int)puVar35[3];
          }
        }
        puVar35 = (ulonglong *)0x0;
LAB_14d54a9cd:
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
LAB_14d54a9f3:
        pFVar28 = (FName *)puVar35[1];
        pFVar19 = pFVar28 + (longlong)(int)puVar35[2] * 9;
        for (; pFVar28 != pFVar19; pFVar28 = pFVar28 + 9) {
          if (*pFVar28 == local_548) {
            if (pFVar28 != (FName *)0x0) {
              if (uVar4 == 0) {
                ::FString::FString(&local_538,L"None");
              }
              else {
                local_488 = *(FName *)(uVar4 + 0x18);
                ::FName::ToString(&local_488,&local_538);
              }
              FVar23.Data = (FScriptContainerElement *)L"";
              if (local_538.Data.ArrayNum != 0) {
                FVar23.Data = local_538.Data.AllocatorInstance.Data;
              }
              FStringFormatArg::FStringFormatArg(&local_258,(wchar_t *)FVar23.Data);
              pFVar18 = ::FName::ToString(&local_548,&local_2f0);
              if ((pFVar18->Data).ArrayNum == 0) {
                pwVar24 = L"";
              }
              else {
                pwVar24 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
              }
              FStringFormatArg::FStringFormatArg(&local_238,pwVar24);
              local_5f0.ArrayNum = 2;
              local_5f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,2,0,&local_5f0.AllocatorInstance,2,&local_5f0.ArrayMax);
              ConstructItems<FStringFormatArg,FStringFormatArg,int>
                        (local_5f0.AllocatorInstance.Data,&local_258,2);
              ::FString::FormatImpl(&local_478,L"{0}_{1}",&local_5f0);
              DestructItems<FStringFormatArg,int>
                        ((FStringFormatArg *)local_5f0.AllocatorInstance.Data,local_5f0.ArrayNum);
              if ((FStringFormatArg *)local_5f0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
                FMemory::Free(local_5f0.AllocatorInstance.Data);
              }
              if (local_238.StringValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_238.StringValue.Data.AllocatorInstance.Data);
              }
              if (local_258.StringValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_258.StringValue.Data.AllocatorInstance.Data);
              }
              if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
              }
              if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_538.Data.AllocatorInstance.Data);
              }
              iVar14 = local_478.Data.ArrayNum + -1;
              if (local_478.Data.ArrayNum == 0) {
                iVar14 = 0;
              }
              pFVar19 = ::FName::FName(&local_318,iVar14,
                                       (wchar_t *)local_478.Data.AllocatorInstance.Data,
                                       (EFindName)local_5f8);
              *pFVar28 = *pFVar19;
              if (local_478.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
              goto LAB_14d54aa51;
              FMemory::Free(local_478.Data.AllocatorInstance.Data);
              FVar41 = (FName)((longlong)FVar41 + 8);
              goto LAB_14d54a923;
            }
            break;
          }
        }
        bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3978252469107949693>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraAssetBuilder.cpp"
                            ,0x7d,"ConflictDefinition");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
LAB_14d54aa51:
        FVar41 = (FName)((longlong)FVar41 + 8);
        goto LAB_14d54a923;
      }
    }
    TStack_3e0.UnvisitedBitMask = TStack_3e0.UnvisitedBitMask & ~TStack_3e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3e0);
  }
  uVar36 = 0;
  uVar33 = (uint)local_5f8;
  local_620.Data = (FScriptContainerElement *)0x0;
  local_618 = 0;
  iStack_614 = 0;
  uStack_638._4_4_ = uVar36;
  uStack_630._0_4_ = uVar36;
  if (local_100 != 0) {
    puVar38 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar38 = local_108;
    }
    uVar31 = *puVar38;
    uStack_630._0_4_ = 0;
    uVar36 = 0;
    while (uVar31 == 0) {
      lVar40 = (longlong)(int)uVar36;
      uStack_630._0_4_ = (uint)uStack_630 + 0x20;
      uVar36 = uVar36 + 1;
      uStack_638._4_4_ = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar36)
      goto LAB_14d54acb3;
      uVar31 = puVar38[lVar40 + 1];
    }
    uVar33 = -uVar31 & uVar31;
    uVar4 = (ulonglong)uVar33 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    local_454 = (int)lVar40;
    uStack_638._4_4_ = local_454 + -1 + (uint)uStack_630;
    if ((int)local_100 < (int)uStack_638._4_4_) {
      uStack_638._4_4_ = local_100;
    }
  }
LAB_14d54acb3:
  local_650 = (longlong *)local_128;
  pTStack_640 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
  local_628 = local_128._8_4_ - local_f4;
  uVar31 = local_100 & 0xffffffe0;
  uStack_648 = CONCAT44(uVar33,uVar36);
  uStack_638._0_4_ = 0xffffffff;
  uStack_630._4_4_ = local_17c;
  TStack_3b0._padding_ = uStack_648;
  iVar14 = (int)local_100 >> 5;
  uStack_390 = CONCAT44(uStack_624,local_628);
  bVar20 = (byte)local_100;
  TStack_3b0.UnvisitedBitMask = 0xffffffff;
  TStack_3b0.CurrentBitIndex = uStack_638._4_4_;
  TStack_3b0.BaseBitIndex = (uint)uStack_630;
  TStack_3b0._28_4_ = local_17c;
  local_3b8 = local_650;
  TStack_3b0.Array = pTStack_640;
  if (((int)local_100 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (uVar42 != local_100) {
    puVar38 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar38 = local_108;
    }
    uVar33 = -1 << (bVar20 & 0x1f) & puVar38[iVar14];
    while (uVar33 == 0) {
      lVar40 = (longlong)iVar14;
      uVar31 = uVar31 + 0x20;
      iVar14 = iVar14 + 1;
      uVar42 = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14d54ade3;
      uVar33 = puVar38[lVar40 + 1];
    }
    uVar4 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar40 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    local_450 = (int)lVar40;
    uVar42 = (uVar31 - 1) + local_450;
    if ((int)local_100 < (int)uVar42) {
      uVar42 = local_100;
    }
  }
LAB_14d54ade3:
  while( true ) {
    plVar12 = local_3b8;
    if ((int)local_3b8[1] - *(int *)((longlong)local_3b8 + 0x34) != (int)uStack_390) {
      local_654 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_654);
    }
    pFVar11 = local_600;
    iVar14 = local_618;
    if (((TStack_3b0.CurrentBitIndex == uVar42) &&
        (TStack_3b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
       (plVar12 == (longlong *)local_128)) break;
    lVar40 = (longlong)TStack_3b0.CurrentBitIndex * 0x20 + *plVar12;
    iVar14 = *(int *)(lVar40 + 0x10);
    pFVar29 = *(FCameraObjectInterfaceParameterDefinition **)(lVar40 + 8);
    pFVar8 = pFVar29 + iVar14;
    while( true ) {
      if (*(int *)(lVar40 + 0x10) != iVar14) {
        local_653 = 0;
        `TCheckedPointerIterator<FCameraObjectInterfaceParameterDefinition_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_653);
      }
      if (pFVar29 == pFVar8) break;
      if (((local_620.Data <= pFVar29) &&
          (pFVar29 < (FCameraObjectInterfaceParameterDefinition *)
                     (local_620.Data + (longlong)iStack_614 * 0x48))) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_618 == iStack_614) {
        local_618 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x848,&local_620,&iStack_614);
      }
      lVar21 = (longlong)local_618;
      local_618 = local_618 + 1;
      FCameraObjectInterfaceParameterDefinition::FCameraObjectInterfaceParameterDefinition
                ((FCameraObjectInterfaceParameterDefinition *)(local_620.Data + lVar21 * 0x48),
                 pFVar29);
      pFVar29 = pFVar29 + 1;
    }
    TStack_3b0.UnvisitedBitMask = TStack_3b0.UnvisitedBitMask & ~TStack_3b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b0);
  }
  uVar33 = (uint)local_5f8;
  pUVar9 = local_600->CameraAsset;
  pTVar30 = &pUVar9->ParameterDefinitions;
  if (((local_618 != (pUVar9->ParameterDefinitions).ArrayNum) ||
      (bVar13 = CompareItems<FCameraObjectInterfaceParameterDefinition,int>
                          ((FCameraObjectInterfaceParameterDefinition *)local_620.Data,
                           (FCameraObjectInterfaceParameterDefinition *)
                           (pTVar30->AllocatorInstance).Data,local_618), !bVar13)) &&
     (FVar23.Data = local_620.Data,
     pTVar30 !=
     (TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_> *)&local_620)) {
    piVar1 = &(pUVar9->ParameterDefinitions).ArrayMax;
    (pUVar9->ParameterDefinitions).ArrayNum = local_618;
    if ((iVar14 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar14,*piVar1,&pTVar30->AllocatorInstance,iVar14,piVar1);
      ConstructItems<FCameraObjectInterfaceParameterDefinition,FCameraObjectInterfaceParameterDefinition,int>
                ((pTVar30->AllocatorInstance).Data,
                 (FCameraObjectInterfaceParameterDefinition *)FVar23.Data,iVar14);
    }
  }
  iVar37 = 0;
  local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_578.ArrayNum = 0;
  local_578.ArrayMax = 0;
  local_358 = (FCameraObjectInterfaceParameterDefinition *)
              (pFVar11->CameraAsset->ParameterDefinitions).AllocatorInstance.Data;
  iVar14 = (pFVar11->CameraAsset->ParameterDefinitions).ArrayNum;
  if ((iVar14 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_2d8._12_4_ = uStack_34c;
  local_2d8.ArrayNum = iVar14;
  local_2d8.DataPtr = local_358;
  iStack_350 = iVar14;
  FCameraObjectInterfaceParameterBuilder::AppendDefaultParameterProperties(&local_2d8,&local_578);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_588.ObjectPtr);
  iStack_340 = local_578.ArrayNum;
  local_348 = (FPropertyBagPropertyDesc *)local_578.AllocatorInstance.Data;
  if ((local_578.ArrayNum < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_2c8._12_4_ = uStack_33c;
  local_2c8.ArrayNum = iStack_340;
  local_2c8.DataPtr = local_348;
  FInstancedPropertyBag::AddProperties
            ((FInstancedPropertyBag *)&local_588.ObjectPtr,&local_2c8,true);
  uVar42 = local_150;
  uStack_630._0_4_ = 0;
  uStack_638._4_4_ = (uint)uStack_630;
  uVar36 = uVar33;
  if (local_150 != 0) {
    FVar39 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
    if (local_158 != (ForElementType<unsigned_int>)0x0) {
      FVar39 = local_158;
    }
    uVar31 = *(uint *)FVar39;
    uStack_630._0_4_ = 0;
    while (uVar31 == 0) {
      lVar40 = (longlong)iVar37;
      uStack_630._0_4_ = (uint)uStack_630 + 0x20;
      iVar37 = iVar37 + 1;
      uStack_638._4_4_ = local_150;
      if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar37)
      goto LAB_14d54b133;
      uVar31 = ((uint *)((longlong)FVar39 + 4))[lVar40];
    }
    uVar36 = -uVar31 & uVar31;
    uVar4 = (ulonglong)uVar36 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    local_4a8 = (int)lVar40;
    uStack_638._4_4_ = ((uint)uStack_630 - 1) + local_4a8;
    if ((int)local_150 < (int)uStack_638._4_4_) {
      uStack_638._4_4_ = local_150;
    }
  }
LAB_14d54b133:
  local_650 = (longlong *)local_178;
  pTStack_640 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
  uVar31 = local_150 & 0xffffffe0;
  local_628 = local_178._8_4_ - local_144;
  uStack_648 = CONCAT44(uVar36,iVar37);
  uStack_638._0_4_ = 0xffffffff;
  uStack_630._4_4_ = local_1bc;
  TStack_440._padding_ = uStack_648;
  iVar14 = (int)local_150 >> 5;
  uStack_420 = CONCAT44(uStack_624,local_628);
  bVar20 = (byte)local_150;
  TStack_440.UnvisitedBitMask = 0xffffffff;
  TStack_440.CurrentBitIndex = uStack_638._4_4_;
  TStack_440.BaseBitIndex = (uint)uStack_630;
  TStack_440._28_4_ = local_1bc;
  local_448 = local_650;
  TStack_440.Array = pTStack_640;
  if (((int)local_150 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (uVar42 != local_150) {
    FVar39 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
    if (local_158 != (ForElementType<unsigned_int>)0x0) {
      FVar39 = local_158;
    }
    uVar42 = -1 << (bVar20 & 0x1f) & *(uint *)((longlong)FVar39 + (longlong)iVar14 * 4);
    while (uVar42 == 0) {
      lVar40 = (longlong)iVar14;
      uVar31 = uVar31 + 0x20;
      iVar14 = iVar14 + 1;
      uVar42 = local_150;
      if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14d54b263;
      uVar42 = ((uint *)((longlong)FVar39 + 4))[lVar40];
    }
    uVar4 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
    lVar40 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    local_4a4 = (int)lVar40;
    uVar42 = (uVar31 - 1) + local_4a4;
    if ((int)local_150 < (int)uVar42) {
      uVar42 = local_150;
    }
  }
LAB_14d54b263:
  while( true ) {
    plVar12 = local_448;
    if ((int)local_448[1] - *(int *)((longlong)local_448 + 0x34) != (int)uStack_420) {
      local_652[0] = 0;
      `TSparseArray<TSparseSetElement<UCameraRigAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_652);
    }
    pFVar11 = local_600;
    if (((TStack_440.CurrentBitIndex == uVar42) &&
        (TStack_440.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
       (plVar12 == (longlong *)local_178)) break;
    FCameraObjectInterfaceParameterBuilder::SetDefaultParameterValues
              (*(UBaseCameraObject **)(*plVar12 + (longlong)TStack_440.CurrentBitIndex * 0x10),
               (FInstancedPropertyBag *)&local_588.ObjectPtr);
    TStack_440.UnvisitedBitMask = TStack_440.UnvisitedBitMask & ~TStack_440._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_440);
  }
  bVar13 = FInstancedPropertyBag::Identical
                     ((FInstancedPropertyBag *)&local_588.ObjectPtr,
                      &local_600->CameraAsset->DefaultParameters,0);
  if ((!bVar13) &&
     (this_00 = &pFVar11->CameraAsset->DefaultParameters,
     (TObjectPtr<UScriptStruct_const_>_u_0 *)this_00 != &local_588)) {
    FInstancedStruct::InitializeAs(&this_00->Value,local_588.DebugPtr,local_580);
  }
  uVar36 = local_150;
  uVar42 = 0;
  local_5e0.VariableDefinitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e0.VariableDefinitions.ArrayNum = 0;
  local_5e0.VariableDefinitions.ArrayMax = 0;
  uStack_630._0_4_ = 0;
  local_5d0.DataDefinitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d0.DataDefinitions.ArrayNum = 0;
  local_5d0.DataDefinitions.ArrayMax = 0;
  uStack_638._4_4_ = uVar42;
  if (local_150 != 0) {
    FVar39 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
    if (local_158 != (ForElementType<unsigned_int>)0x0) {
      FVar39 = local_158;
    }
    uVar31 = *(uint *)FVar39;
    uStack_630._0_4_ = 0;
    uVar42 = 0;
    while (uVar31 == 0) {
      lVar40 = (longlong)(int)uVar42;
      uStack_630._0_4_ = (uint)uStack_630 + 0x20;
      uVar42 = uVar42 + 1;
      uStack_638._4_4_ = local_150;
      if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar42)
      goto LAB_14d54b3c4;
      uVar31 = ((uint *)((longlong)FVar39 + 4))[lVar40];
    }
    uVar33 = -uVar31 & uVar31;
    uVar4 = (ulonglong)uVar33 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    local_4a0 = (int)lVar40;
    uStack_638._4_4_ = local_4a0 + -1 + (uint)uStack_630;
    if ((int)local_150 < (int)uStack_638._4_4_) {
      uStack_638._4_4_ = local_150;
    }
  }
LAB_14d54b3c4:
  local_650 = (longlong *)local_178;
  pTStack_640 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
  uVar31 = local_150 & 0xffffffe0;
  local_628 = local_178._8_4_ - local_144;
  uStack_638._0_4_ = 0xffffffff;
  uStack_648 = CONCAT44(uVar33,uVar42);
  uStack_630._4_4_ = local_19c;
  TStack_380._padding_ = uStack_648;
  iVar14 = (int)local_150 >> 5;
  uStack_360 = CONCAT44(uStack_624,local_628);
  bVar20 = (byte)local_150;
  TStack_380.UnvisitedBitMask = 0xffffffff;
  TStack_380.CurrentBitIndex = uStack_638._4_4_;
  TStack_380.BaseBitIndex = (uint)uStack_630;
  TStack_380._28_4_ = local_19c;
  local_388 = local_650;
  TStack_380.Array = pTStack_640;
  if (((int)local_150 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (uVar36 != local_150) {
    FVar39 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
    if (local_158 != (ForElementType<unsigned_int>)0x0) {
      FVar39 = local_158;
    }
    uVar33 = -1 << (bVar20 & 0x1f) & *(uint *)((longlong)FVar39 + (longlong)iVar14 * 4);
    while (uVar33 == 0) {
      lVar40 = (longlong)iVar14;
      uVar31 = uVar31 + 0x20;
      iVar14 = iVar14 + 1;
      uVar36 = local_150;
      if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14d54b500;
      uVar33 = ((uint *)((longlong)FVar39 + 4))[lVar40];
    }
    uVar4 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar40 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    uVar36 = (uVar31 - 1) + (int)lVar40;
    if ((int)local_150 < (int)uVar36) {
      uVar36 = local_150;
    }
  }
LAB_14d54b500:
  while( true ) {
    plVar12 = local_388;
    if ((int)local_388[1] - *(int *)((longlong)local_388 + 0x34) != (int)uStack_360) {
      `TSparseArray<TSparseSetElement<UCameraRigAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_610);
    }
    FVar23.Data = local_5e0.VariableDefinitions.AllocatorInstance.Data;
    if (((TStack_380.CurrentBitIndex == uVar36) &&
        (TStack_380.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
       (plVar12 == (longlong *)local_178)) break;
    lVar40 = *(longlong *)(*plVar12 + (longlong)TStack_380.CurrentBitIndex * 0x10);
    FCameraVariableTableAllocationInfo::Combine
              (&local_5e0,(FCameraVariableTableAllocationInfo *)(lVar40 + 0x68));
    FCameraContextDataTableAllocationInfo::Combine
              (&local_5d0,(FCameraContextDataTableAllocationInfo *)(lVar40 + 0x78));
    TStack_380.UnvisitedBitMask = TStack_380.UnvisitedBitMask & ~TStack_380._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_380);
  }
  pUVar9 = pFVar11->CameraAsset;
  if (((local_5e0.VariableDefinitions.ArrayNum !=
        (pUVar9->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum) ||
      (bVar13 = CompareItems<FCameraVariableDefinition,int>
                          ((FCameraVariableDefinition *)
                           local_5e0.VariableDefinitions.AllocatorInstance.Data,
                           (FCameraVariableDefinition *)
                           (pUVar9->AllocationInfo).VariableTableInfo.VariableDefinitions.
                           AllocatorInstance.Data,local_5e0.VariableDefinitions.ArrayNum),
      FVar32.Data = local_5d0.DataDefinitions.AllocatorInstance.Data, !bVar13)) ||
     ((local_5d0.DataDefinitions.ArrayNum !=
       (pUVar9->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayNum ||
      (bVar13 = CompareItems<FCameraContextDataDefinition,int>
                          ((FCameraContextDataDefinition *)
                           local_5d0.DataDefinitions.AllocatorInstance.Data,
                           (FCameraContextDataDefinition *)
                           (pUVar9->AllocationInfo).ContextDataTableInfo.DataDefinitions.
                           AllocatorInstance.Data,local_5d0.DataDefinitions.ArrayNum), !bVar13)))) {
    FCameraVariableTableAllocationInfo::operator=
              (&(pUVar9->AllocationInfo).VariableTableInfo,&local_5e0);
    FCameraContextDataTableAllocationInfo::operator=
              (&(pUVar9->AllocationInfo).ContextDataTableInfo,&local_5d0);
    FVar23.Data = local_5e0.VariableDefinitions.AllocatorInstance.Data;
    FVar32.Data = local_5d0.DataDefinitions.AllocatorInstance.Data;
  }
  if ((FCameraContextDataDefinition *)FVar32.Data != (FCameraContextDataDefinition *)0x0) {
    FMemory::Free(FVar32.Data);
    FVar23.Data = local_5e0.VariableDefinitions.AllocatorInstance.Data;
  }
  if ((FCameraVariableDefinition *)FVar23.Data != (FCameraVariableDefinition *)0x0) {
    FMemory::Free(FVar23.Data);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_588.ObjectPtr);
  if (local_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.AllocatorInstance.Data);
  }
  if ((FCameraObjectInterfaceParameterDefinition *)local_620.Data !=
      (FCameraObjectInterfaceParameterDefinition *)0x0) {
    FMemory::Free(local_620.Data);
  }
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  TSparseArray<TSparseSetElement<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<UCameraRigProxyAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UCameraRigProxyAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UCameraRigProxyAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  local_130 = 0;
  if (local_138 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138);
  }
  TSparseArray<TSparseSetElement<UCameraRigAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UCameraRigAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UCameraRigAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_178);
  return;
}

// UpdateBuildStatus @ 14d56a2e0

void __thiscall UE::Cameras::FCameraAssetBuilder::UpdateBuildStatus(FCameraAssetBuilder *this)

{
  if (this->BuildLog->bHasErrors != false) {
    this->CameraAsset->BuildStatus = WithErrors;
    return;
  }
  this->CameraAsset->BuildStatus = this->BuildLog->bHasWarnings != false;
  return;
}

