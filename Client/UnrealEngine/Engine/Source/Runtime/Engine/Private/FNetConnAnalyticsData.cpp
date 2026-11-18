// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator() @ 1473ddb30

int * __thiscall
`FNetConnAnalyticsData::SendAnalytics'::__l5::<lambda_1>::operator()
          (void *this,
          TArray<_public:_virtual_void___cdecl_FNetConnAnalyticsData::SendAnalytics(void)_::_5_::FReasonCounter,TSizedDefaultAllocator<32>_>
          *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *this_00;
  bool bVar5;
  undefined1 local_res10 [8];
  
  iVar4 = param_1->ArrayNum;
  this_00 = (param_1->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)iVar4 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == pFVar2) break;
    iVar3 = *(int *)(this_00 + 8);
    iVar1 = (param_2->Data).ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) goto LAB_1473ddbf9;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)this_00,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar3 + iVar1 == 1;
    }
    if (bVar5) goto LAB_1473ddbf9;
    this_00 = this_00 + 0x18;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  this_00 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x18;
  DefaultConstructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int>(this_00,1)
  ;
  iVar3 = (param_2->Data).ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange((FString *)this_00,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar4)
  ;
LAB_1473ddbf9:
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (int *)(this_00 + 0x10);
}

// SendAnalytics @ 147410b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001474117cf) */
/* WARNING: Removing unreachable block (ram,0x00014741158f) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FNetConnAnalyticsData::SendAnalytics(FNetConnAnalyticsData *this)

{
  undefined1 *puVar1;
  FReasonCounter *pFVar2;
  FFailedPingCounter *pFVar3;
  void *_Dst;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  wchar_t *pwVar15;
  FString *pFVar16;
  int *piVar17;
  int *piVar18;
  size_t sVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  ForAnyElementType FVar24;
  wchar_t *pwVar25;
  code *pcVar26;
  TPimplPtr<UE::Net::FNetResult,1> TVar27;
  undefined8 *puVar28;
  TPimplPtr<UE::Net::FNetResult,1> *pTVar29;
  FNetConnAnalyticsData *pFVar30;
  TPimplPtr<UE::Net::FNetResult,1> TVar31;
  undefined8 *puVar32;
  undefined1 auStackY_cb8 [32];
  FIdentityFunctor local_c68;
  undefined1 local_c67 [7];
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_c60;
  undefined1 local_c50;
  undefined1 local_c4f;
  undefined1 local_c4e;
  undefined1 local_c4d;
  undefined1 local_c4c;
  undefined1 local_c4b;
  undefined1 local_c4a;
  undefined1 local_c49;
  undefined1 local_c48;
  undefined1 local_c47;
  undefined1 local_c46;
  undefined1 local_c45;
  undefined1 local_c44;
  undefined1 local_c43;
  undefined1 local_c42;
  undefined1 local_c41;
  undefined1 local_c40;
  undefined1 local_c3f;
  undefined1 local_c3e;
  undefined1 local_c3d [5];
  ForAnyElementType local_c38;
  undefined8 local_c30;
  ForAnyElementType local_c28;
  undefined8 local_c20;
  TArray<_public:_virtual_void___cdecl_FNetConnAnalyticsData::SendAnalytics(void)_::_5_::FReasonCounter,TSizedDefaultAllocator<32>_>
  local_c18;
  ForAnyElementType local_c08;
  undefined8 local_c00;
  ForAnyElementType local_bf8;
  undefined8 local_bf0;
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> local_be8;
  undefined4 local_ba8 [2];
  FNetConnAnalyticsData *local_ba0;
  TArray<_public:_virtual_void___cdecl_FNetConnAnalyticsData::SendAnalytics(void)_::_5_::FReasonCounter,TSizedDefaultAllocator<32>_>
  local_b98;
  uint local_b88 [2];
  undefined2 local_b80 [4];
  undefined2 local_b78 [4];
  undefined2 local_b70 [4];
  undefined2 local_b68 [4];
  undefined2 local_b60 [4];
  undefined2 local_b58 [4];
  undefined2 local_b50 [4];
  undefined2 local_b48 [4];
  undefined2 local_b40 [4];
  undefined2 local_b38 [8];
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> local_b28;
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FFailedPingCounter local_a78;
  FFailedPingCounter local_a60;
  FString local_a48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_a38;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_a28;
  FString local_a18;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_a08;
  FJsonFragment local_9f8;
  FJsonFragment local_9e8;
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> local_9d8;
  FJsonFragment local_998;
  FJsonFragment local_988;
  FJsonFragment local_978;
  FJsonFragment local_968;
  FJsonFragment local_958;
  longlong *local_948;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_940;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_920;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_900;
  undefined1 *local_8e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8d8;
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> local_8b8;
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> local_878;
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> local_838;
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> local_7f8;
  FString local_7b8;
  longlong *local_7a8;
  undefined1 *local_7a0;
  longlong lStack_798;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_790;
  uint uStack_788;
  int iStack_784;
  int iStack_780;
  undefined4 uStack_77c;
  TStringView<wchar_t> local_768;
  undefined8 local_758;
  uint uStack_750;
  undefined4 uStack_74c;
  TStringView<wchar_t> local_748;
  TStringView<wchar_t> local_738;
  undefined8 local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined8 local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined8 local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined8 local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined8 local_6e8;
  uint uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 local_6d8;
  uint uStack_6d0;
  undefined4 uStack_6cc;
  TStringView<wchar_t> local_6c8;
  undefined8 local_6b8;
  uint uStack_6b0;
  undefined4 uStack_6ac;
  TStringView<wchar_t> local_6a8;
  undefined8 local_698;
  uint uStack_690;
  undefined4 uStack_68c;
  undefined8 local_688;
  uint uStack_680;
  undefined4 uStack_67c;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 local_648;
  undefined4 uStack_644;
  uint uStack_640;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  FString local_628;
  FString local_618;
  FString local_608;
  undefined1 local_5f8 [64];
  undefined1 local_5b8 [64];
  void *local_578;
  undefined4 local_570;
  ForAnyElementType local_568;
  undefined8 local_560;
  ForAnyElementType local_558;
  undefined8 local_550;
  ForAnyElementType local_548;
  undefined8 local_540;
  TStringBuilderBase<wchar_t> local_538;
  wchar_t local_518 [32];
  TStringBuilderBase<wchar_t> local_4d8;
  wchar_t local_4b8 [32];
  TStringBuilderBase<wchar_t> local_478;
  wchar_t local_458;
  wchar_t local_456 [255];
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238;
  wchar_t local_236 [255];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_cb8;
  plVar4 = *(longlong **)&this->field_0x18;
  local_5f8._0_8_ = 0;
  local_5f8._8_8_ = 0;
  local_5f8._16_8_ = 0;
  local_5f8._24_8_ = 0;
  local_5f8._32_8_ = 0;
  local_5f8._40_8_ = (FNetResult *)0x0;
  local_5f8._48_8_ = (FScriptContainerElement *)0x0;
  local_5f8._56_4_ = 0;
  local_5f8._60_4_ = 0;
  local_5b8._0_8_ = 0;
  local_5b8._8_8_ = 0;
  local_5b8._32_8_ = 0;
  local_5b8._40_4_ = 0;
  local_5b8._52_4_ = 0;
  local_578 = (void *)0x0;
  local_570 = 0;
  local_568.Data = (FScriptContainerElement *)0x0;
  local_560._0_4_ = 0;
  local_560._4_4_ = 0;
  local_558.Data = (FScriptContainerElement *)0x0;
  local_550._0_4_ = 0;
  local_550._4_4_ = 0;
  local_548.Data = (FScriptContainerElement *)0x0;
  local_540._0_4_ = 0;
  local_540._4_4_ = 0;
  local_5b8._44_4_ = 0x80;
  local_5b8._48_4_ = 0xffffffff;
  local_ba0 = this;
  local_7a8 = plVar4;
  bVar7 = FNetConnAnalyticsVars::operator==
                    ((FNetConnAnalyticsVars *)&this->field_0x20,(FNetConnAnalyticsVars *)local_5f8);
  if ((!bVar7) && (*plVar4 != 0)) {
    local_b88[0] = *(uint *)&this->field_0xd8;
    uVar21 = (ulonglong)(int)local_b88[0];
    pTVar29 = *(TPimplPtr<UE::Net::FNetResult,1> **)&this->field_0xd0;
    local_b98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9e8.FragmentString.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)(pTVar29 + uVar21 * 3);
    local_b98.ArrayNum = 0;
    local_b98.ArrayMax = 0;
    local_c18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c18.ArrayNum = 0;
    local_c18.ArrayMax = 0;
    local_bf8.Data = (FScriptContainerElement *)0x0;
    local_bf0 = 0;
    local_c08.Data = (FScriptContainerElement *)0x0;
    local_c00 = 0;
    while( true ) {
      FVar24.Data = local_9e8.FragmentString.Data.AllocatorInstance.Data;
      if (*(int *)&this->field_0xd8 != (int)uVar21) {
        local_c4f = 0;
        `TCheckedPointerIterator<FNetConnAnalyticsVars::FPerNetConnData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_c4f);
      }
      if (pTVar29 == (TPimplPtr<UE::Net::FNetResult,1> *)FVar24.Data) break;
      if (*pTVar29 == (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        pwVar15 = ::LexToString(Unknown);
        pFVar16 = ::FString::FString(&local_608,pwVar15);
        piVar17 = `FNetConnAnalyticsData::SendAnalytics'::__l5::<lambda_1>::operator()
                            (&local_c50,&local_b98,pFVar16);
        pwVar15 = ::LexToString(Unknown);
        pFVar16 = ::FString::FString(&local_628,pwVar15);
        piVar18 = `FNetConnAnalyticsData::SendAnalytics'::__l5::<lambda_1>::operator()
                            (&local_c50,&local_c18,pFVar16);
        *piVar17 = *piVar17 + 1;
        *piVar18 = *piVar18 + 1;
      }
      else {
        pFVar16 = UE::Net::FNetResult::DynamicToString
                            ((FNetResult *)*pTVar29,&local_618,ResultEnumOnly);
        piVar17 = `FNetConnAnalyticsData::SendAnalytics'::__l5::<lambda_1>::operator()
                            (&local_c50,&local_b98,pFVar16);
        *piVar17 = *piVar17 + 1;
        TVar27 = *pTVar29;
        local_a48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a48.Data.ArrayNum = 0;
        local_a48.Data.ArrayMax = 0;
        iVar11 = 0;
        if (TVar27 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
          do {
            UE::Net::FNetResult::DynamicToString((FNetResult *)TVar27,&local_7b8,ResultEnumOnly);
            local_478.Base = &local_458;
            local_478.CurPos = &local_458;
            local_478.End = (wchar_t *)&local_258;
            local_478.bIsDynamic = false;
            local_478.bIsExternal = false;
            if (1 < local_a48.Data.ArrayNum) {
              local_478.CurPos = local_456;
              local_458 = L',';
            }
            if (local_7b8.Data.ArrayNum == 0) {
              FVar24.Data = (FScriptContainerElement *)L"";
LAB_147410e14:
              sVar19 = wcslen((wchar_t *)FVar24.Data);
              iVar11 = (int)sVar19;
            }
            else {
              FVar24.Data = local_7b8.Data.AllocatorInstance.Data;
              iVar11 = 0;
              if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_147410e14;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_478,(wchar_t *)FVar24.Data,iVar11)
            ;
            if (local_478.End < (TStringBuilderBase<wchar_t> *)(local_478.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_478,1);
            }
            *local_478.CurPos = L'\0';
            sVar19 = wcslen(local_478.Base);
            ::FString::AppendChars(&local_a48,local_478.Base,(int)sVar19);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
            if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
            }
          } while ((TVar27 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) &&
                  (TVar27 = *(TPimplPtr<UE::Net::FNetResult,1> *)((longlong)TVar27 + 0x28),
                  TVar27 != (TPimplPtr<UE::Net::FNetResult,1>)0x0));
          this = local_ba0;
          iVar11 = local_a48.Data.ArrayNum;
        }
        local_a08.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                  (&local_a08,(wchar_t *)local_a48.Data.AllocatorInstance.Data,iVar11,0);
        iVar11 = local_c18.ArrayNum;
        uVar21 = (ulonglong)local_c18.ArrayNum;
        pFVar2 = (FReasonCounter *)(local_c18.AllocatorInstance.Data + uVar21 * 0x18);
        FVar24.Data = local_c18.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar21 != iVar11) {
            local_c4e = 0;
            `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_c4e);
            uVar21 = local_c18._8_8_ & 0xffffffff;
          }
          iVar10 = (int)uVar21;
          if ((FReasonCounter *)FVar24.Data == pFVar2) break;
          iVar10 = (((FReasonCounter *)FVar24.Data)->ReasonStr).Data.ArrayNum;
          if (iVar10 == local_a08.ArrayNum) {
            if (iVar10 < 2) goto LAB_147410fad;
            iVar10 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)
                                (((FReasonCounter *)FVar24.Data)->ReasonStr).Data.AllocatorInstance.
                                Data,(wchar_t *)local_a08.AllocatorInstance.Data);
            uVar21 = local_c18._8_8_ & 0xffffffff;
            bVar7 = iVar10 == 0;
          }
          else {
            bVar7 = iVar10 + local_a08.ArrayNum == 1;
          }
          if (bVar7) goto LAB_147410fad;
          FVar24.Data = FVar24.Data + 0x18;
        }
        if (iVar10 == local_c18.ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_c18.AllocatorInstance,&local_c18.ArrayMax);
        }
        local_c18.ArrayNum = iVar10 + 1;
        FVar24.Data = local_c18.AllocatorInstance.Data + (longlong)iVar10 * 0x18;
        DefaultConstructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int>
                  (FVar24.Data,1);
        iVar11 = local_a08.ArrayNum + -1;
        if (local_a08.ArrayNum == 0) {
          iVar11 = 0;
        }
        ::FString::AssignRange
                  ((FString *)FVar24.Data,(wchar_t *)local_a08.AllocatorInstance.Data,iVar11);
LAB_147410fad:
        if (local_a08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a08.AllocatorInstance.Data);
        }
        ((FReasonCounter *)FVar24.Data)->Counter = ((FReasonCounter *)FVar24.Data)->Counter + 1;
        if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a48.Data.AllocatorInstance.Data);
        }
      }
      iVar11 = *(int *)(pTVar29 + 2);
      if (0 < iVar11) {
        TVar27 = pTVar29[1];
        local_a18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        bVar7 = true;
        TVar31 = (TPimplPtr<UE::Net::FNetResult,1>)((longlong)iVar11 * 0x10 + (longlong)TVar27);
        local_a18.Data.ArrayNum = 0;
        local_a18.Data.ArrayMax = 0;
LAB_147411001:
        if (*(int *)(pTVar29 + 2) != iVar11) {
          local_c4d = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_c4d);
        }
        if (TVar27 != TVar31) {
          if (bVar7) {
            local_a38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                      (&local_a38,*(wchar_t **)TVar27,*(int *)((longlong)TVar27 + 8),0);
            iVar10 = (int)local_bf0;
            uVar21 = (ulonglong)(int)local_bf0;
            pFVar2 = (FReasonCounter *)(local_bf8.Data + uVar21 * 0x18);
            FVar24.Data = local_bf8.Data;
            do {
              if ((int)uVar21 != iVar10) {
                local_c4c = 0;
                `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(&local_c4c);
                uVar21 = local_bf0 & 0xffffffff;
              }
              iVar9 = (int)uVar21;
              if ((FReasonCounter *)FVar24.Data == pFVar2) {
                if (iVar9 == local_bf0._4_4_) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x818,&local_bf8,(int *)((longlong)&local_bf0 + 4));
                }
                local_bf0 = CONCAT44(local_bf0._4_4_,iVar9 + 1);
                FVar24.Data = local_bf8.Data + (longlong)iVar9 * 0x18;
                DefaultConstructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int>
                          (FVar24.Data,1);
                iVar10 = local_a38.ArrayNum + -1;
                if (local_a38.ArrayNum == 0) {
                  iVar10 = 0;
                }
                ::FString::AssignRange
                          ((FString *)FVar24.Data,(wchar_t *)local_a38.AllocatorInstance.Data,iVar10
                          );
                if (local_a38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a38.AllocatorInstance.Data);
                }
                goto LAB_14741113a;
              }
              iVar9 = (((FReasonCounter *)FVar24.Data)->ReasonStr).Data.ArrayNum;
              if (iVar9 == local_a38.ArrayNum) {
                if (iVar9 < 2) goto LAB_1474110ae;
                iVar9 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)
                                   (((FReasonCounter *)FVar24.Data)->ReasonStr).Data.
                                   AllocatorInstance.Data,
                                   (wchar_t *)local_a38.AllocatorInstance.Data);
                uVar21 = local_bf0 & 0xffffffff;
                bVar7 = iVar9 == 0;
              }
              else {
                bVar7 = iVar9 + local_a38.ArrayNum == 1;
              }
              if (bVar7) goto LAB_1474110ae;
              FVar24.Data = FVar24.Data + 0x18;
            } while( true );
          }
          goto LAB_14741113d;
        }
        local_a28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                  (&local_a28,(wchar_t *)local_a18.Data.AllocatorInstance.Data,
                   local_a18.Data.ArrayNum,0);
        iVar11 = (int)local_c00;
        uVar21 = (ulonglong)(int)local_c00;
        pFVar2 = (FReasonCounter *)(local_c08.Data + uVar21 * 0x18);
        FVar24.Data = local_c08.Data;
        while( true ) {
          if ((int)uVar21 != iVar11) {
            local_c4b = 0;
            `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_c4b);
            uVar21 = local_c00 & 0xffffffff;
          }
          iVar10 = (int)uVar21;
          if ((FReasonCounter *)FVar24.Data == pFVar2) break;
          iVar10 = (((FReasonCounter *)FVar24.Data)->ReasonStr).Data.ArrayNum;
          if (iVar10 == local_a28.ArrayNum) {
            if (iVar10 < 2) goto LAB_147411321;
            iVar10 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)
                                (((FReasonCounter *)FVar24.Data)->ReasonStr).Data.AllocatorInstance.
                                Data,(wchar_t *)local_a28.AllocatorInstance.Data);
            uVar21 = local_c00 & 0xffffffff;
            bVar7 = iVar10 == 0;
          }
          else {
            bVar7 = iVar10 + local_a28.ArrayNum == 1;
          }
          if (bVar7) goto LAB_147411321;
          FVar24.Data = FVar24.Data + 0x18;
        }
        if (iVar10 == local_c00._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_c08,(int *)((longlong)&local_c00 + 4));
        }
        local_c00 = CONCAT44(local_c00._4_4_,iVar10 + 1);
        FVar24.Data = local_c08.Data + (longlong)iVar10 * 0x18;
        DefaultConstructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int>
                  (FVar24.Data,1);
        iVar11 = local_a28.ArrayNum + -1;
        if (local_a28.ArrayNum == 0) {
          iVar11 = 0;
        }
        ::FString::AssignRange
                  ((FString *)FVar24.Data,(wchar_t *)local_a28.AllocatorInstance.Data,iVar11);
LAB_147411321:
        if (local_a28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a28.AllocatorInstance.Data);
        }
        ((FReasonCounter *)FVar24.Data)->Counter = ((FReasonCounter *)FVar24.Data)->Counter + 1;
        this = local_ba0;
        if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a18.Data.AllocatorInstance.Data);
          this = local_ba0;
        }
      }
      uVar21 = (ulonglong)local_b88[0];
      pTVar29 = pTVar29 + 3;
    }
    AlgoImpl::
    IntroSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,_FNetConnAnalyticsData::SendAnalytics_::__l33::<lambda_2>_>_>
              ((FReasonCounter *)local_b98.AllocatorInstance.Data,local_b98.ArrayNum,local_c68,
               (<lambda_2> *)local_c67);
    AlgoImpl::
    IntroSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,_FNetConnAnalyticsData::SendAnalytics_::__l33::<lambda_2>_>_>
              ((FReasonCounter *)local_c18.AllocatorInstance.Data,local_c18.ArrayNum,local_c68,
               (<lambda_2> *)local_c67);
    AlgoImpl::
    IntroSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,_FNetConnAnalyticsData::SendAnalytics_::__l33::<lambda_2>_>_>
              ((FReasonCounter *)local_bf8.Data,(int)local_bf0,local_c68,(<lambda_2> *)local_c67);
    AlgoImpl::
    IntroSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,_FNetConnAnalyticsData::SendAnalytics_::__l33::<lambda_2>_>_>
              ((FReasonCounter *)local_c08.Data,(int)local_c00,local_c68,(<lambda_2> *)local_c67);
    iVar11 = *(int *)&this->field_0xb8;
    puVar28 = *(undefined8 **)&this->field_0xb0;
    puVar32 = puVar28 + (longlong)iVar11 * 2;
    local_c28.Data = (FScriptContainerElement *)0x0;
    local_c20 = 0;
    local_c38.Data = (FScriptContainerElement *)0x0;
    local_c30 = 0;
    while( true ) {
      if (*(int *)&this->field_0xb8 != iVar11) {
        local_c4a = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_c4a);
      }
      FVar24.Data = local_c28.Data;
      if (puVar28 == puVar32) break;
      pFVar3 = (FFailedPingCounter *)(local_c28.Data + (longlong)(int)(uint)local_c20 * 0x18);
      for (FVar23.Data = local_c28.Data; (FFailedPingCounter *)FVar23.Data != pFVar3;
          FVar23.Data = FVar23.Data + 0x18) {
        iVar10 = (((FFailedPingCounter *)FVar23.Data)->PingAddress).Data.ArrayNum;
        if (iVar10 == *(int *)(puVar28 + 1)) {
          if (1 < iVar10) {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)
                                (((FFailedPingCounter *)FVar23.Data)->PingAddress).Data.
                                AllocatorInstance.Data,(wchar_t *)*puVar28);
            bVar7 = iVar10 == 0;
            goto LAB_147411457;
          }
LAB_1474115f9:
          lVar20 = ((longlong)FVar23.Data - (longlong)FVar24.Data) / 6 +
                   ((longlong)FVar23.Data - (longlong)FVar24.Data >> 0x3f);
          uVar12 = (int)(lVar20 >> 2) - (int)(lVar20 >> 0x3f);
          goto LAB_147411470;
        }
        bVar7 = iVar10 + *(int *)(puVar28 + 1) == 1;
LAB_147411457:
        if (bVar7) goto LAB_1474115f9;
      }
      uVar12 = 0xffffffff;
LAB_147411470:
      if (uVar12 == 0xffffffff) {
        local_a78.PingAddress.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                  ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_a78,(wchar_t *)*puVar28,
                   *(int *)(puVar28 + 1),0);
        local_a78.Counter = 0;
        if (((local_c28.Data <= &local_a78) &&
            (&local_a78 <
             (FFailedPingCounter *)(local_c28.Data + (longlong)(int)local_c20._4_4_ * 0x18))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        uVar12 = (uint)local_c20;
        if ((uint)local_c20 == local_c20._4_4_) {
          uVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_c28,(int *)((longlong)&local_c20 + 4));
        }
        local_c20 = CONCAT44(local_c20._4_4_,uVar12 + 1);
        lVar20 = (longlong)(int)uVar12;
        *(undefined8 *)&local_c28.Data[lVar20 * 0x18].field_0x0 = 0;
        *(FScriptContainerElement **)&local_c28.Data[lVar20 * 0x18].field_0x0 =
             local_a78.PingAddress.Data.AllocatorInstance.Data;
        local_a78.PingAddress.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_c28.Data + lVar20 * 0x18 + 8) = local_a78.PingAddress.Data.ArrayNum;
        *(int *)(local_c28.Data + lVar20 * 0x18 + 0xc) = local_a78.PingAddress.Data.ArrayMax;
        local_a78.PingAddress.Data.ArrayNum = 0;
        local_a78.PingAddress.Data.ArrayMax = 0;
        *(int *)(local_c28.Data + lVar20 * 0x18 + 0x10) = local_a78.Counter;
      }
      uVar13 = 0;
      if ((int)uVar12 < (int)(uint)local_c20) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar26 = (code *)swi(3);
        (*pcVar26)();
        return;
      }
      *(int *)(local_c28.Data + (longlong)(int)uVar12 * 0x18 + 0x10) =
           *(int *)(local_c28.Data + (longlong)(int)uVar12 * 0x18 + 0x10) + 1;
      puVar28 = puVar28 + 2;
      this = local_ba0;
    }
    iVar11 = *(int *)&this->field_0xc8;
    puVar28 = *(undefined8 **)&this->field_0xc0;
    puVar32 = puVar28 + (longlong)iVar11 * 2;
    while( true ) {
      if (*(int *)&this->field_0xc8 != iVar11) {
        local_c49 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_c49);
      }
      FVar24.Data = local_c38.Data;
      if (puVar28 == puVar32) break;
      pFVar3 = (FFailedPingCounter *)(local_c38.Data + (longlong)(int)(uint)local_c30 * 0x18);
      for (FVar23.Data = local_c38.Data; (FFailedPingCounter *)FVar23.Data != pFVar3;
          FVar23.Data = FVar23.Data + 0x18) {
        iVar10 = (((FFailedPingCounter *)FVar23.Data)->PingAddress).Data.ArrayNum;
        if (iVar10 == *(int *)(puVar28 + 1)) {
          if (1 < iVar10) {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)
                                (((FFailedPingCounter *)FVar23.Data)->PingAddress).Data.
                                AllocatorInstance.Data,(wchar_t *)*puVar28);
            bVar7 = iVar10 == 0;
            goto LAB_147411697;
          }
LAB_147411839:
          lVar20 = ((longlong)FVar23.Data - (longlong)FVar24.Data) / 6 +
                   ((longlong)FVar23.Data - (longlong)FVar24.Data >> 0x3f);
          uVar12 = (int)(lVar20 >> 2) - (int)(lVar20 >> 0x3f);
          goto LAB_1474116b0;
        }
        bVar7 = iVar10 + *(int *)(puVar28 + 1) == 1;
LAB_147411697:
        if (bVar7) goto LAB_147411839;
      }
      uVar12 = 0xffffffff;
LAB_1474116b0:
      if (uVar12 == 0xffffffff) {
        local_a60.PingAddress.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                  ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_a60,(wchar_t *)*puVar28,
                   *(int *)(puVar28 + 1),0);
        local_a60.Counter = 0;
        if (((local_c38.Data <= &local_a60) &&
            (&local_a60 <
             (FFailedPingCounter *)(local_c38.Data + (longlong)(int)local_c30._4_4_ * 0x18))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        uVar12 = (uint)local_c30;
        if ((uint)local_c30 == local_c30._4_4_) {
          uVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_c38,(int *)((longlong)&local_c30 + 4));
        }
        local_c30 = CONCAT44(local_c30._4_4_,uVar12 + 1);
        lVar20 = (longlong)(int)uVar12;
        *(undefined8 *)&local_c38.Data[lVar20 * 0x18].field_0x0 = 0;
        *(FScriptContainerElement **)&local_c38.Data[lVar20 * 0x18].field_0x0 =
             local_a60.PingAddress.Data.AllocatorInstance.Data;
        local_a60.PingAddress.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_c38.Data + lVar20 * 0x18 + 8) = local_a60.PingAddress.Data.ArrayNum;
        *(int *)(local_c38.Data + lVar20 * 0x18 + 0xc) = local_a60.PingAddress.Data.ArrayMax;
        local_a60.PingAddress.Data.ArrayNum = 0;
        local_a60.PingAddress.Data.ArrayMax = 0;
        *(int *)(local_c38.Data + lVar20 * 0x18 + 0x10) = local_a60.Counter;
      }
      uVar13 = 0;
      if ((int)uVar12 < (int)(uint)local_c30) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar26 = (code *)swi(3);
        (*pcVar26)();
        return;
      }
      *(int *)(local_c38.Data + (longlong)(int)uVar12 * 0x18 + 0x10) =
           *(int *)(local_c38.Data + (longlong)(int)uVar12 * 0x18 + 0x10) + 1;
      puVar28 = puVar28 + 2;
      this = local_ba0;
    }
    AlgoImpl::
    IntroSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,_FNetConnAnalyticsData::SendAnalytics_::__l48::<lambda_3>_>_>
              ((FFailedPingCounter *)local_c28.Data,(uint)local_c20,local_c68,
               (<lambda_3> *)&local_c48);
    AlgoImpl::
    IntroSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,_FNetConnAnalyticsData::SendAnalytics_::__l48::<lambda_3>_>_>
              ((FFailedPingCounter *)local_c38.Data,(uint)local_c30,local_c68,
               (<lambda_3> *)&local_c48);
    if (((((4 < (byte)LogNet._0_1_) &&
          (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
          4 < (byte)LogNet._0_1_)) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
         4 < (byte)LogNet._0_1_)) &&
        ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
         4 < (byte)LogNet._0_1_ &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
         4 < (byte)LogNet._0_1_)))) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
       4 < (byte)LogNet._0_1_)) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u____OutOfOrderPa_1516acf58,
                 (FLogCategoryBase *)&LogNet);
    }
    if (0 < local_b98.ArrayNum) {
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      iVar11 = local_b98.ArrayNum;
      pFVar2 = (FReasonCounter *)
               (local_b98.AllocatorInstance.Data + (longlong)local_b98.ArrayNum * 0x18);
      FVar24.Data = local_b98.AllocatorInstance.Data;
      while( true ) {
        if (local_b98.ArrayNum != iVar11) {
          local_c47 = 0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_c47);
        }
        if ((FReasonCounter *)FVar24.Data == pFVar2) break;
        if (4 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        FVar24.Data = FVar24.Data + 0x18;
      }
    }
    if (0 < local_c18.ArrayNum) {
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      iVar11 = local_c18.ArrayNum;
      pFVar2 = (FReasonCounter *)
               (local_c18.AllocatorInstance.Data + (longlong)local_c18.ArrayNum * 0x18);
      FVar24.Data = local_c18.AllocatorInstance.Data;
      while( true ) {
        if (local_c18.ArrayNum != iVar11) {
          local_c46 = 0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_c46);
        }
        if ((FReasonCounter *)FVar24.Data == pFVar2) break;
        if (4 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        FVar24.Data = FVar24.Data + 0x18;
      }
    }
    if (0 < (int)local_bf0) {
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      iVar11 = (int)local_bf0;
      pFVar2 = (FReasonCounter *)(local_bf8.Data + (longlong)(int)local_bf0 * 0x18);
      FVar24.Data = local_bf8.Data;
      while( true ) {
        if ((int)local_bf0 != iVar11) {
          local_c45 = 0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_c45);
        }
        if ((FReasonCounter *)FVar24.Data == pFVar2) break;
        if (4 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        FVar24.Data = FVar24.Data + 0x18;
      }
    }
    if (0 < (int)local_c00) {
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      iVar11 = (int)local_c00;
      pFVar2 = (FReasonCounter *)(local_c08.Data + (longlong)(int)local_c00 * 0x18);
      FVar24.Data = local_c08.Data;
      while( true ) {
        if ((int)local_c00 != iVar11) {
          local_c44 = 0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_c44);
        }
        if ((FReasonCounter *)FVar24.Data == pFVar2) break;
        if (4 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        FVar24.Data = FVar24.Data + 0x18;
      }
    }
    if (0 < *(int *)&this->field_0x68 - *(int *)&this->field_0x94) {
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      local_920._padding_._4_4_ = 1;
      local_920.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x70;
      local_920._padding_._0_4_ = 0;
      puVar1 = &this->field_0x60;
      local_920.UnvisitedBitMask = 0xffffffff;
      local_920.CurrentBitIndex = 0;
      local_920.BaseBitIndex = 0;
      if (*(int *)&this->field_0x88 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_920);
      }
      TStack_8d8._padding_ = CONCAT44(local_920._padding_._4_4_,(undefined4)local_920._padding_);
      uStack_788 = local_920.UnvisitedBitMask;
      iStack_784 = local_920.CurrentBitIndex;
      iStack_780 = local_920.BaseBitIndex;
      uStack_77c = local_920._28_4_;
      pTStack_790 = local_920.Array;
      TStack_8d8.CurrentBitIndex = local_920.CurrentBitIndex;
      TStack_8d8.UnvisitedBitMask = local_920.UnvisitedBitMask;
      TStack_8d8.Array = local_920.Array;
      TStack_8d8.BaseBitIndex = local_920.BaseBitIndex;
      TStack_8d8._28_4_ = local_920._28_4_;
      local_8e0 = puVar1;
      local_7a0 = puVar1;
      lStack_798 = TStack_8d8._padding_;
      if (local_920.CurrentBitIndex < (local_920.Array)->NumBits) {
        do {
          if (4 < (byte)LogNet._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
          TStack_8d8.UnvisitedBitMask = TStack_8d8.UnvisitedBitMask & ~TStack_8d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8d8);
        } while (TStack_8d8.CurrentBitIndex < (TStack_8d8.Array)->NumBits);
      }
    }
    if (0 < (int)(uint)local_c20) {
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      iVar11 = (uint)local_c20;
      pFVar3 = (FFailedPingCounter *)(local_c28.Data + (longlong)(int)(uint)local_c20 * 0x18);
      FVar24.Data = local_c28.Data;
      while( true ) {
        if ((uint)local_c20 != iVar11) {
          local_c43 = 0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FFailedPingCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_c43);
        }
        if ((FFailedPingCounter *)FVar24.Data == pFVar3) break;
        if (4 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        FVar24.Data = FVar24.Data + 0x18;
      }
    }
    if (0 < (int)(uint)local_c30) {
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      iVar11 = (uint)local_c30;
      pFVar3 = (FFailedPingCounter *)(local_c38.Data + (longlong)(int)(uint)local_c30 * 0x18);
      FVar24.Data = local_c38.Data;
      while( true ) {
        if ((uint)local_c30 != iVar11) {
          local_c42 = 0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FFailedPingCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_c42);
        }
        if ((FFailedPingCounter *)FVar24.Data == pFVar3) break;
        if (4 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        FVar24.Data = FVar24.Data + 0x18;
      }
    }
    lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar20 + 0x9d4c) < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1))
    {
      ::FString::FString(&EZEventName,L"Core.ServerNetConn");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZEventName__);
      _Init_thread_footer(&::_TSS10);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1))
    {
      ::FString::FString(&EZAttrib_OutAckOnlyCount,L"OutAckOnlyCount");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutAckOnlyCount__);
      _Init_thread_footer(&::_TSS11);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1))
    {
      ::FString::FString(&EZAttrib_OutKeepAliveCount,L"OutKeepAliveCount");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutKeepAliveCount__);
      _Init_thread_footer(&::_TSS12);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1))
    {
      ::FString::FString(&EZAttrib_OutOfOrderPacketsLostCount,L"OutOfOrderPacketsLostCount");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutOfOrderPacketsLostCount__);
      _Init_thread_footer(&::_TSS13);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1))
    {
      ::FString::FString(&EZAttrib_OutOfOrderPacketsRecoveredCount,
                         L"OutOfOrderPacketsRecoveredCount");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutOfOrderPacketsRecoveredCount__);
      _Init_thread_footer(&::_TSS14);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1))
    {
      ::FString::FString(&EZAttrib_OutOfOrderPacketsDuplicateCount,
                         L"OutOfOrderPacketsDuplicateCount");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutOfOrderPacketsDuplicateCount__);
      _Init_thread_footer(&::_TSS15);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
      ::FString::FString(&EZAttrib_CloseReasons,L"CloseReasons");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_CloseReasons__);
      _Init_thread_footer(&_TSS16);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < _TSS17) && (_Init_thread_header(&_TSS17), _TSS17 == -1)) {
      ::FString::FString(&EZAttrib_FullCloseReasons,L"FullCloseReasons");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_FullCloseReasons__);
      _Init_thread_footer(&_TSS17);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < _TSS18) && (_Init_thread_header(&_TSS18), _TSS18 == -1)) {
      ::FString::FString(&EZAttrib_ClientCloseReasons,L"ClientCloseReasons");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_ClientCloseReasons__);
      _Init_thread_footer(&_TSS18);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < _TSS19) && (_Init_thread_header(&_TSS19), _TSS19 == -1)) {
      ::FString::FString(&EZAttrib_FullClientCloseReasons,L"FullClientCloseReasons");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_FullClientCloseReasons__);
      _Init_thread_footer(&_TSS19);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < _TSS20) && (_Init_thread_header(&_TSS20), _TSS20 == -1)) {
      ::FString::FString(&EZAttrib_RecoveredFaults,L"RecoveredFaults");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_RecoveredFaults__);
      _Init_thread_footer(&_TSS20);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < _TSS21) && (_Init_thread_header(&_TSS21), _TSS21 == -1)) {
      ::FString::FString(&EZAttrib_FailedPingICMP,L"FailedPingICMP");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_FailedPingICMP__);
      _Init_thread_footer(&_TSS21);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < _TSS22) && (_Init_thread_header(&_TSS22), _TSS22 == -1)) {
      ::FString::FString(&EZAttrib_FailedPingUDP,L"FailedPingUDP");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_FailedPingUDP__);
      _Init_thread_footer(&_TSS22);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < _TSS23) && (_Init_thread_header(&_TSS23), _TSS23 == -1)) {
      ::FString::FString(&EZAttrib_Reason,L"Reason");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_Reason__);
      _Init_thread_footer(&_TSS23);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < _TSS24) && (_Init_thread_header(&_TSS24), _TSS24 == -1)) {
      ::FString::FString(&EZAttrib_Count,L"Count");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_Count__);
      _Init_thread_footer(&_TSS24);
    }
    if ((*(int *)(lVar20 + 0x9d4c) < _TSS25) && (_Init_thread_header(&_TSS25), _TSS25 == -1)) {
      ::FString::FString(&EZAttrib_IP,L"IP");
      atexit(`FNetConnAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_IP__);
      _Init_thread_footer(&_TSS25);
    }
    local_a98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a98.Data.ArrayNum = 0;
    local_a98.Data.ArrayMax = 0;
    if (0 < local_b98.ArrayNum) {
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_878,&local_a98,0);
      local_878._padding_ =
           (longlong)&`FNetConnAnalyticsData::SendAnalytics'::`5'::FAnalyticsJsonWriter::_vftable_;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_878);
      iVar11 = local_b98.ArrayNum;
      uVar21 = (ulonglong)local_b98.ArrayNum;
      pFVar2 = (FReasonCounter *)(local_b98.AllocatorInstance.Data + uVar21 * 0x18);
      FVar24.Data = local_b98.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar21 != iVar11) {
          local_c41 = 0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_c41);
        }
        if ((FReasonCounter *)FVar24.Data == pFVar2) break;
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_878);
        if ((((FReasonCounter *)FVar24.Data)->ReasonStr).Data.ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)
                    (((FReasonCounter *)FVar24.Data)->ReasonStr).Data.AllocatorInstance.Data;
        }
        uVar12 = 0;
        if ((int)((int)local_878._padding_ - 1U) < (int)local_878._padding_) {
          uVar12 = ~((int)local_878._padding_ - 1U) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((*(int *)(local_878._padding_ + (longlong)((int)local_878._padding_ + -1) * 4) != 6) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_878,
                   &EZAttrib_Reason);
        pcVar26 = *(code **)(local_878._padding_ + 0x28);
        uVar14 = 0;
        local_728 = (FScriptContainerElement *)pwVar15;
        if ((FScriptContainerElement *)pwVar15 != (FScriptContainerElement *)0x0) {
          sVar19 = wcslen(pwVar15);
          uVar14 = (undefined4)sVar19;
        }
        local_638 = (undefined4)local_728;
        uStack_634 = local_728._4_4_;
        uStack_62c = uStack_71c;
        uStack_720 = uVar14;
        uStack_630 = uVar14;
        (*pcVar26)(&local_878,&local_638);
        local_878._padding_._0_4_ = 7;
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
        WriteValue<int_const_&,FString_const_&>
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_878,
                   &EZAttrib_Count,&((FReasonCounter *)FVar24.Data)->Counter);
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_878);
        uVar21 = local_b98._8_8_ & 0xffffffff;
        FVar24.Data = FVar24.Data + 0x18;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_878);
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::Close(&local_878);
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      ~TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_878);
    }
    local_aa8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_aa8.Data.ArrayNum = 0;
    local_aa8.Data.ArrayMax = 0;
    if (0 < local_c18.ArrayNum) {
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_838,&local_aa8,0);
      local_838._padding_ =
           (longlong)&`FNetConnAnalyticsData::SendAnalytics'::`5'::FAnalyticsJsonWriter::_vftable_;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_838);
      iVar11 = local_c18.ArrayNum;
      uVar21 = (ulonglong)local_c18.ArrayNum;
      pFVar2 = (FReasonCounter *)(local_c18.AllocatorInstance.Data + uVar21 * 0x18);
      FVar24.Data = local_c18.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar21 != iVar11) {
          local_c40 = 0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_c40);
        }
        if ((FReasonCounter *)FVar24.Data == pFVar2) break;
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_838);
        if ((((FReasonCounter *)FVar24.Data)->ReasonStr).Data.ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)
                    (((FReasonCounter *)FVar24.Data)->ReasonStr).Data.AllocatorInstance.Data;
        }
        uVar12 = 0;
        if ((int)((int)local_838._padding_ - 1U) < (int)local_838._padding_) {
          uVar12 = ~((int)local_838._padding_ - 1U) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((*(int *)(local_838._padding_ + (longlong)((int)local_838._padding_ + -1) * 4) != 6) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_838,
                   &EZAttrib_Reason);
        pcVar26 = *(code **)(local_838._padding_ + 0x28);
        uVar14 = 0;
        local_718 = (FScriptContainerElement *)pwVar15;
        if ((FScriptContainerElement *)pwVar15 != (FScriptContainerElement *)0x0) {
          sVar19 = wcslen(pwVar15);
          uVar14 = (undefined4)sVar19;
        }
        local_658 = (undefined4)local_718;
        uStack_654 = local_718._4_4_;
        uStack_64c = uStack_70c;
        uStack_710 = uVar14;
        uStack_650 = uVar14;
        (*pcVar26)(&local_838,&local_658);
        local_838._padding_._0_4_ = 7;
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
        WriteValue<int_const_&,FString_const_&>
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_838,
                   &EZAttrib_Count,&((FReasonCounter *)FVar24.Data)->Counter);
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_838);
        uVar21 = local_c18._8_8_ & 0xffffffff;
        FVar24.Data = FVar24.Data + 0x18;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_838);
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::Close(&local_838);
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      ~TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_838);
    }
    local_ab8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ab8.Data.ArrayNum = 0;
    local_ab8.Data.ArrayMax = 0;
    if (0 < (int)local_bf0) {
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_7f8,&local_ab8,0);
      local_7f8._padding_ =
           (longlong)&`FNetConnAnalyticsData::SendAnalytics'::`5'::FAnalyticsJsonWriter::_vftable_;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_7f8);
      iVar11 = (int)local_bf0;
      uVar21 = (ulonglong)(int)local_bf0;
      pFVar2 = (FReasonCounter *)(local_bf8.Data + uVar21 * 0x18);
      FVar24.Data = local_bf8.Data;
      while( true ) {
        if ((int)uVar21 != iVar11) {
          local_c3f = 0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_c3f);
        }
        if ((FReasonCounter *)FVar24.Data == pFVar2) break;
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_7f8);
        if ((((FReasonCounter *)FVar24.Data)->ReasonStr).Data.ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)
                    (((FReasonCounter *)FVar24.Data)->ReasonStr).Data.AllocatorInstance.Data;
        }
        uVar12 = 0;
        if ((int)((int)local_7f8._padding_ - 1U) < (int)local_7f8._padding_) {
          uVar12 = ~((int)local_7f8._padding_ - 1U) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((*(int *)(local_7f8._padding_ + (longlong)((int)local_7f8._padding_ + -1) * 4) != 6) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_7f8,
                   &EZAttrib_Reason);
        pcVar26 = *(code **)(local_7f8._padding_ + 0x28);
        uVar14 = 0;
        local_708 = (FScriptContainerElement *)pwVar15;
        if ((FScriptContainerElement *)pwVar15 != (FScriptContainerElement *)0x0) {
          sVar19 = wcslen(pwVar15);
          uVar14 = (undefined4)sVar19;
        }
        local_668 = (undefined4)local_708;
        uStack_664 = local_708._4_4_;
        uStack_65c = uStack_6fc;
        uStack_700 = uVar14;
        uStack_660 = uVar14;
        (*pcVar26)(&local_7f8,&local_668);
        local_7f8._padding_._0_4_ = 7;
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
        WriteValue<int_const_&,FString_const_&>
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_7f8,
                   &EZAttrib_Count,&((FReasonCounter *)FVar24.Data)->Counter);
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_7f8);
        uVar21 = local_bf0 & 0xffffffff;
        FVar24.Data = FVar24.Data + 0x18;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_7f8);
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::Close(&local_7f8);
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      ~TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_7f8);
    }
    local_ac8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ac8.Data.ArrayNum = 0;
    local_ac8.Data.ArrayMax = 0;
    if (0 < (int)local_c00) {
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_8b8,&local_ac8,0);
      local_8b8._padding_ =
           (longlong)&`FNetConnAnalyticsData::SendAnalytics'::`5'::FAnalyticsJsonWriter::_vftable_;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_8b8);
      iVar11 = (int)local_c00;
      uVar21 = (ulonglong)(int)local_c00;
      pFVar2 = (FReasonCounter *)(local_c08.Data + uVar21 * 0x18);
      FVar24.Data = local_c08.Data;
      while( true ) {
        if ((int)uVar21 != iVar11) {
          local_c3e = 0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_c3e);
        }
        if ((FReasonCounter *)FVar24.Data == pFVar2) break;
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_8b8);
        if ((((FReasonCounter *)FVar24.Data)->ReasonStr).Data.ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)
                    (((FReasonCounter *)FVar24.Data)->ReasonStr).Data.AllocatorInstance.Data;
        }
        uVar12 = 0;
        if ((int)((int)local_8b8._padding_ - 1U) < (int)local_8b8._padding_) {
          uVar12 = ~((int)local_8b8._padding_ - 1U) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((*(int *)(local_8b8._padding_ + (longlong)((int)local_8b8._padding_ + -1) * 4) != 6) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_8b8,
                   &EZAttrib_Reason);
        pcVar26 = *(code **)(local_8b8._padding_ + 0x28);
        uVar14 = 0;
        local_6f8 = (FScriptContainerElement *)pwVar15;
        if ((FScriptContainerElement *)pwVar15 != (FScriptContainerElement *)0x0) {
          sVar19 = wcslen(pwVar15);
          uVar14 = (undefined4)sVar19;
        }
        local_678 = (undefined4)local_6f8;
        uStack_674 = local_6f8._4_4_;
        uStack_66c = uStack_6ec;
        uStack_6f0 = uVar14;
        uStack_670 = uVar14;
        (*pcVar26)(&local_8b8,&local_678);
        local_8b8._padding_._0_4_ = 7;
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
        WriteValue<int_const_&,FString_const_&>
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_8b8,
                   &EZAttrib_Count,&((FReasonCounter *)FVar24.Data)->Counter);
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_8b8);
        uVar21 = local_c00 & 0xffffffff;
        FVar24.Data = FVar24.Data + 0x18;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_8b8);
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::Close(&local_8b8);
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      ~TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_8b8);
    }
    pFVar30 = local_ba0;
    local_ad8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ad8.Data.ArrayNum = 0;
    local_ad8.Data.ArrayMax = 0;
    if (0 < *(int *)&local_ba0->field_0x68 - *(int *)&local_ba0->field_0x94) {
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_9d8,&local_ad8,0);
      local_9d8._padding_ =
           (longlong)&`FNetConnAnalyticsData::SendAnalytics'::`5'::FAnalyticsJsonWriter::_vftable_;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_9d8);
      local_900.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pFVar30->field_0x70;
      local_948 = (longlong *)&pFVar30->field_0x60;
      local_900._padding_._0_4_ = 0;
      local_900._padding_._4_4_ = 1;
      local_900.UnvisitedBitMask = 0xffffffff;
      local_900.CurrentBitIndex = 0;
      local_900.BaseBitIndex = 0;
      if (*(int *)&pFVar30->field_0x88 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_900);
      }
      TStack_940._padding_ = CONCAT44(local_900._padding_._4_4_,(undefined4)local_900._padding_);
      uStack_788 = local_900.UnvisitedBitMask;
      iStack_784 = local_900.CurrentBitIndex;
      iStack_780 = local_900.BaseBitIndex;
      uStack_77c = local_900._28_4_;
      pTStack_790 = local_900.Array;
      TStack_940.CurrentBitIndex = local_900.CurrentBitIndex;
      TStack_940.UnvisitedBitMask = local_900.UnvisitedBitMask;
      TStack_940.Array = local_900.Array;
      TStack_940.BaseBitIndex = local_900.BaseBitIndex;
      TStack_940._28_4_ = local_900._28_4_;
      iVar11 = local_900.CurrentBitIndex;
      local_7a0 = (undefined1 *)local_948;
      lStack_798 = TStack_940._padding_;
      if (local_900.CurrentBitIndex < (local_900.Array)->NumBits) {
        do {
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                    ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_9d8);
          if (*(int *)((longlong)iVar11 * 0x20 + 8 + *local_948) == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = *(wchar_t **)((longlong)iVar11 * 0x20 + *local_948);
          }
          uVar12 = 0;
          if ((int)((int)local_9d8._padding_ - 1U) < (int)local_9d8._padding_) {
            uVar12 = ~((int)local_9d8._padding_ - 1U) >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar26 = (code *)swi(3);
            (*pcVar26)();
            return;
          }
          if ((*(int *)(local_9d8._padding_ + (longlong)((int)local_9d8._padding_ + -1) * 4) != 6)
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Stack.Top() == EJson::Object",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                    ,0x110,L""), bVar7)) {
            pcVar26 = (code *)swi(3);
            (*pcVar26)();
            return;
          }
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                    ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_9d8,
                     &EZAttrib_Reason);
          pcVar26 = *(code **)(local_9d8._padding_ + 0x28);
          uVar12 = 0;
          local_6e8 = pwVar15;
          if (pwVar15 != (wchar_t *)0x0) {
            sVar19 = wcslen(pwVar15);
            uVar12 = (uint)sVar19;
          }
          local_648 = (undefined4)local_6e8;
          uStack_644 = local_6e8._4_4_;
          uStack_63c = uStack_6dc;
          uStack_6e0 = uVar12;
          uStack_640 = uVar12;
          (*pcVar26)(&local_9d8,&local_648);
          local_9d8._padding_._0_4_ = 7;
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
          WriteValue<int_const_&,FString_const_&>
                    ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_9d8,
                     &EZAttrib_Count,
                     (int *)(*local_948 + (longlong)TStack_940.CurrentBitIndex * 0x20 + 0x10));
          uVar12 = 0;
          if ((int)((int)local_9d8._padding_ - 1U) < (int)local_9d8._padding_) {
            uVar12 = ~((int)local_9d8._padding_ - 1U) >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar26 = (code *)swi(3);
            (*pcVar26)();
            return;
          }
          if ((*(int *)(local_9d8._padding_ + (longlong)((int)local_9d8._padding_ + -1) * 4) != 6)
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Stack.Top() == EJson::Object",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                    ,0x8e,L""), bVar7)) {
            pcVar26 = (code *)swi(3);
            (*pcVar26)();
            return;
          }
          local_9d8._padding_._4_4_ = local_9d8._padding_._4_4_ + -1;
          local_b80[0] = 0x7d;
          (**(code **)(*(longlong *)local_9d8._padding_ + 0x188))(local_9d8._padding_,local_b80);
          TArray<enum_EJson,TSizedDefaultAllocator<32>_>::Pop(&local_9d8._padding_,Default);
          local_9d8._padding_._0_4_ = 3;
          TStack_940.UnvisitedBitMask = TStack_940.UnvisitedBitMask & ~TStack_940._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_940);
          iVar11 = TStack_940.CurrentBitIndex;
        } while (TStack_940.CurrentBitIndex < (TStack_940.Array)->NumBits);
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_9d8);
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::Close(&local_9d8);
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      ~TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_9d8);
    }
    local_a88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a88.Data.ArrayNum = 0;
    local_a88.Data.ArrayMax = 0;
    if (0 < (int)(uint)local_c20) {
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_b28,&local_a88,0);
      local_b28._padding_ =
           (longlong)&`FNetConnAnalyticsData::SendAnalytics'::`5'::FAnalyticsJsonWriter::_vftable_;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b28);
      iVar11 = (uint)local_c20;
      uVar21 = (ulonglong)(int)(uint)local_c20;
      pFVar3 = (FFailedPingCounter *)(local_c28.Data + uVar21 * 0x18);
      FVar24.Data = local_c28.Data;
      while( true ) {
        pwVar15 = (wchar_t *)0x0;
        if ((int)uVar21 != iVar11) {
          local_c3d[0] = 0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FFailedPingCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_c3d);
        }
        uVar12 = 0;
        if ((FFailedPingCounter *)FVar24.Data == pFVar3) break;
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b28);
        if ((((FFailedPingCounter *)FVar24.Data)->PingAddress).Data.ArrayNum == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = (wchar_t *)
                    (((FFailedPingCounter *)FVar24.Data)->PingAddress).Data.AllocatorInstance.Data;
        }
        uVar13 = uVar12;
        if ((int)((int)local_b28._padding_ - 1U) < (int)local_b28._padding_) {
          uVar13 = ~((int)local_b28._padding_ - 1U) >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((*(int *)(local_b28._padding_ + (longlong)((int)local_b28._padding_ + -1) * 4) != 6) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b28,
                   &EZAttrib_IP);
        pcVar26 = *(code **)(local_b28._padding_ + 0x28);
        uVar13 = uVar12;
        local_6d8 = (FScriptContainerElement *)pwVar25;
        if ((FScriptContainerElement *)pwVar25 != (FScriptContainerElement *)0x0) {
          sVar19 = wcslen(pwVar25);
          uVar13 = (uint)sVar19;
        }
        local_6c8.DataPtr._0_4_ = (undefined4)local_6d8;
        local_6c8.DataPtr._4_4_ = local_6d8._4_4_;
        local_6c8._12_4_ = uStack_6cc;
        uStack_6d0 = uVar13;
        local_6c8.Size = uVar13;
        if (pcVar26 == TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                    ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b28,
                     &local_6c8);
        }
        else {
          (*pcVar26)();
        }
        local_b28._padding_._0_4_ = 7;
        uVar13 = uVar12;
        if ((int)((int)local_b28._padding_ - 1U) < (int)local_b28._padding_) {
          uVar13 = ~((int)local_b28._padding_ - 1U) >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((*(int *)(local_b28._padding_ + (longlong)((int)local_b28._padding_ + -1) * 4) != 6) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((0xc < (uint)local_b28._padding_) ||
           ((0x1017U >> ((uint)local_b28._padding_ & 0x1f) & 1) == 0)) {
          local_b78[0] = 0x2c;
          (**(code **)(*(longlong *)local_b28._padding_ + 0x188))(local_b28._padding_,local_b78,2);
          local_b28._padding_._0_4_ = 1;
        }
        local_6b8 = EZAttrib_Count.Data.AllocatorInstance.Data;
        pFVar5 = local_6b8;
        uStack_6b0 = EZAttrib_Count.Data.ArrayNum - 1;
        if (EZAttrib_Count.Data.ArrayNum == 0) {
          uStack_6b0 = uVar12;
        }
        local_6b8._0_4_ = SUB84(EZAttrib_Count.Data.AllocatorInstance.Data,0);
        local_6b8._4_4_ =
             (undefined4)((ulonglong)EZAttrib_Count.Data.AllocatorInstance.Data >> 0x20);
        local_6a8.DataPtr._0_4_ = (undefined4)local_6b8;
        local_6a8.DataPtr._4_4_ = local_6b8._4_4_;
        local_6a8._12_4_ = uStack_6ac;
        local_6b8 = pFVar5;
        local_6a8.Size = uStack_6b0;
        if (*(code **)(local_b28._padding_ + 0x28) ==
            TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                    ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b28,
                     &local_6a8);
        }
        else {
          (**(code **)(local_b28._padding_ + 0x28))();
        }
        local_b70[0] = 0x3a;
        (**(code **)(*(longlong *)local_b28._padding_ + 0x188))(local_b28._padding_,local_b70,2);
        local_538.Base = local_518;
        local_b28._padding_._0_4_ = 0xc;
        local_538.CurPos = local_518;
        local_538.bIsDynamic = false;
        local_538.bIsExternal = false;
        local_538.End = (wchar_t *)&local_4d8;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_538,L"%lld");
        lVar20 = local_b28._padding_;
        uVar13 = (uint)((longlong)local_538.CurPos - (longlong)local_538.Base >> 1);
        if (local_538.Base == (wchar_t *)0x0) {
          pcVar26 = *(code **)(*(longlong *)local_b28._padding_ + 0x188);
        }
        else {
          uVar12 = uVar13;
          if ((0 < (int)uVar13) && (local_538.Base[(longlong)(int)uVar13 + -1] == L'\0')) {
            uVar12 = uVar13 - 1;
          }
          pcVar26 = *(code **)(*(longlong *)local_b28._padding_ + 0x188);
          pwVar15 = local_538.Base;
          if (uVar12 == 0xffffffff) {
            sVar19 = wcslen(local_538.Base);
            uVar12 = (uint)sVar19;
          }
        }
        (*pcVar26)(lVar20,pwVar15,(longlong)(int)uVar12 * 2);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_538);
        local_b28._padding_._0_4_ = 8;
        uVar12 = 0;
        if ((int)((int)local_b28._padding_ - 1U) < (int)local_b28._padding_) {
          uVar12 = ~((int)local_b28._padding_ - 1U) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((*(int *)(local_b28._padding_ + (longlong)((int)local_b28._padding_ + -1) * 4) != 6) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x8e,L""), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        local_b28._padding_._4_4_ = local_b28._padding_._4_4_ + -1;
        local_b68[0] = 0x7d;
        (**(code **)(*(longlong *)local_b28._padding_ + 0x188))(local_b28._padding_,local_b68,2);
        if (((int)local_b28._padding_ < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        _Dst = (void *)(local_b28._padding_ + (longlong)(int)((int)local_b28._padding_ - 1U) * 4);
        iVar10 = ~((int)local_b28._padding_ - 1U) + (int)local_b28._padding_;
        if (iVar10 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar10 << 2);
        }
        local_b28._padding_._0_4_ = (int)local_b28._padding_ + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)&local_b28._padding_,(int)local_b28._padding_,
                   (int *)((longlong)&local_b28._padding_ + 4));
        uVar21 = local_c20 & 0xffffffff;
        FVar24.Data = FVar24.Data + 0x18;
        local_b28._padding_._0_4_ = 3;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b28);
      ::FString::Reset(local_b28.OutString,(int)((ulonglong)(longlong)local_b28.Bytes.ArrayNum >> 1)
                      );
      pFVar30 = local_ba0;
      pwVar25 = pwVar15;
      if (0 < local_b28.Bytes.ArrayNum) {
        do {
          uVar22 = (uint)pwVar15;
          uVar13 = uVar12;
          if ((int)uVar22 < local_b28.Bytes.ArrayNum) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar26 = (code *)swi(3);
            (*pcVar26)();
            return;
          }
          ::FString::AppendChar
                    (local_b28.OutString,
                     *(wchar_t *)((longlong)pwVar25 + local_b28.Bytes.AllocatorInstance.Data));
          pwVar15 = (wchar_t *)(ulonglong)(uVar22 + 2);
          pwVar25 = pwVar25 + 1;
        } while ((int)(uVar22 + 2) < local_b28.Bytes.ArrayNum);
      }
      local_b28._padding_ =
           (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
      cVar8 = (**(code **)(*(longlong *)local_b28._padding_ + 0x210))();
      if ((cVar8 == '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("this->Stream->Close()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x2ef,L""), bVar7)) {
        pcVar26 = (code *)swi(3);
        (*pcVar26)();
        return;
      }
      if ((longlong *)local_b28._padding_ != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_b28._padding_)(local_b28._padding_,1);
      }
      if (local_b28.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b28.Bytes.AllocatorInstance.Data);
      }
      local_b28._padding_ = (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
      if ((void *)local_b28._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_b28._padding_);
      }
    }
    local_ae8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ae8.Data.ArrayNum = 0;
    local_ae8.Data.ArrayMax = 0;
    if (0 < (int)(uint)local_c30) {
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
      TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_be8,&local_ae8,0);
      local_be8._padding_ =
           (longlong)&`FNetConnAnalyticsData::SendAnalytics'::`5'::FAnalyticsJsonWriter::_vftable_;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_be8);
      iVar11 = (uint)local_c30;
      uVar21 = (ulonglong)(int)(uint)local_c30;
      pFVar3 = (FFailedPingCounter *)(local_c38.Data + uVar21 * 0x18);
      FVar24.Data = local_c38.Data;
      while( true ) {
        pwVar15 = (wchar_t *)0x0;
        if ((int)uVar21 != iVar11) {
          local_c68 = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<`FNetConnAnalyticsData::SendAnalytics'::__l5::FFailedPingCounter,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_c68);
        }
        uVar12 = 0;
        if ((FFailedPingCounter *)FVar24.Data == pFVar3) break;
        if (0 < (int)(uint)local_be8._padding_) {
          uVar13 = uVar12;
          if ((int)((uint)local_be8._padding_ - 1) < (int)(uint)local_be8._padding_) {
            uVar13 = ~((uint)local_be8._padding_ - 1) >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar26 = (code *)swi(3);
            (*pcVar26)();
            return;
          }
          if ((((*(int *)(local_be8._padding_ + (longlong)(int)((uint)local_be8._padding_ - 1) * 4)
                 != 5) && ((uint)local_be8._padding_ != 0xc)) && ((uint)local_be8._padding_ != 6))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CanWriteObjectWithoutIdentifier()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                    ,0x6f,L""), bVar7)) {
            pcVar26 = (code *)swi(3);
            (*pcVar26)();
            return;
          }
        }
        if ((0xc < (uint)local_be8._padding_) ||
           ((0x1017U >> ((uint)local_be8._padding_ & 0x1f) & 1) == 0)) {
          local_b60[0] = 0x2c;
          (**(code **)(*(longlong *)local_be8._padding_ + 0x188))(local_be8._padding_,local_b60,2);
          local_be8._padding_._0_4_ = 1;
        }
        local_b58[0] = 0x7b;
        (**(code **)(*(longlong *)local_be8._padding_ + 0x188))(local_be8._padding_,local_b58,2);
        local_be8._padding_._4_4_ = local_be8._padding_._4_4_ + 1;
        local_ba8[0] = 6;
        if ((((ulonglong)local_be8._padding_ <= local_ba8) &&
            (local_ba8 <
             (undefined4 *)(local_be8._padding_ + (longlong)(int)local_be8._padding_._4_4_ * 4))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((uint)local_be8._padding_ == local_be8._padding_._4_4_) {
          local_be8._padding_._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)&local_be8._padding_,
                          (int *)((longlong)&local_be8._padding_ + 4));
        }
        iVar10 = (uint)local_be8._padding_ + 1;
        *(undefined4 *)(local_be8._padding_ + (longlong)(int)(uint)local_be8._padding_ * 4) =
             local_ba8[0];
        local_be8._padding_._0_4_ = 2;
        if ((((FFailedPingCounter *)FVar24.Data)->PingAddress).Data.ArrayNum == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = (wchar_t *)
                    (((FFailedPingCounter *)FVar24.Data)->PingAddress).Data.AllocatorInstance.Data;
        }
        uVar13 = uVar12;
        if ((int)(uint)local_be8._padding_ < iVar10) {
          uVar13 = ~(uint)local_be8._padding_ >> 0x1f;
        }
        local_be8._padding_._0_4_ = iVar10;
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((*(int *)(local_be8._padding_ + (longlong)(int)((uint)local_be8._padding_ + -1) * 4) !=
             6) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Stack.Top() == EJson::Object",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                       ,0x110,L""), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((0xc < (uint)local_be8._padding_) ||
           ((0x1017U >> ((uint)local_be8._padding_ & 0x1f) & 1) == 0)) {
          local_b50[0] = 0x2c;
          (**(code **)(*(longlong *)local_be8._padding_ + 0x188))(local_be8._padding_,local_b50,2);
          local_be8._padding_._0_4_ = 1;
        }
        local_698 = EZAttrib_IP.Data.AllocatorInstance.Data;
        pFVar5 = local_698;
        local_768.Size = EZAttrib_IP.Data.ArrayNum - 1;
        if (EZAttrib_IP.Data.ArrayNum == 0) {
          local_768.Size = uVar12;
        }
        local_698._0_4_ = SUB84(EZAttrib_IP.Data.AllocatorInstance.Data,0);
        local_698._4_4_ = (undefined4)((ulonglong)EZAttrib_IP.Data.AllocatorInstance.Data >> 0x20);
        local_768.DataPtr._0_4_ = (undefined4)local_698;
        local_768.DataPtr._4_4_ = local_698._4_4_;
        local_768._12_4_ = uStack_68c;
        local_698 = pFVar5;
        uStack_690 = local_768.Size;
        if (*(code **)(local_be8._padding_ + 0x28) ==
            TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                    ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_be8,
                     &local_768);
        }
        else {
          (**(code **)(local_be8._padding_ + 0x28))();
        }
        local_b48[0] = 0x3a;
        (**(code **)(*(longlong *)local_be8._padding_ + 0x188))(local_be8._padding_,local_b48,2);
        local_be8._padding_._0_4_ = 0xc;
        pcVar26 = *(code **)(local_be8._padding_ + 0x28);
        uVar13 = uVar12;
        local_758 = (FScriptContainerElement *)pwVar25;
        if ((FScriptContainerElement *)pwVar25 != (FScriptContainerElement *)0x0) {
          sVar19 = wcslen(pwVar25);
          uVar13 = (uint)sVar19;
        }
        local_748.DataPtr._0_4_ = (undefined4)local_758;
        local_748.DataPtr._4_4_ = local_758._4_4_;
        local_748._12_4_ = uStack_74c;
        uStack_750 = uVar13;
        local_748.Size = uVar13;
        if (pcVar26 == TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                    ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_be8,
                     &local_748);
        }
        else {
          (*pcVar26)();
        }
        local_be8._padding_._0_4_ = 7;
        uVar13 = uVar12;
        if ((int)((uint)local_be8._padding_ - 1) < (int)(uint)local_be8._padding_) {
          uVar13 = ~((uint)local_be8._padding_ - 1) >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((*(int *)(local_be8._padding_ + (longlong)(int)((uint)local_be8._padding_ + -1) * 4) !=
             6) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Stack.Top() == EJson::Object",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                       ,0x110,L""), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((0xc < (uint)local_be8._padding_) ||
           ((0x1017U >> ((uint)local_be8._padding_ & 0x1f) & 1) == 0)) {
          local_b40[0] = 0x2c;
          (**(code **)(*(longlong *)local_be8._padding_ + 0x188))(local_be8._padding_,local_b40,2);
          local_be8._padding_._0_4_ = 1;
        }
        local_688 = EZAttrib_Count.Data.AllocatorInstance.Data;
        pFVar5 = local_688;
        local_738.Size = EZAttrib_Count.Data.ArrayNum - 1;
        if (EZAttrib_Count.Data.ArrayNum == 0) {
          local_738.Size = uVar12;
        }
        local_688._0_4_ = SUB84(EZAttrib_Count.Data.AllocatorInstance.Data,0);
        local_688._4_4_ =
             (undefined4)((ulonglong)EZAttrib_Count.Data.AllocatorInstance.Data >> 0x20);
        local_738.DataPtr._0_4_ = (undefined4)local_688;
        local_738.DataPtr._4_4_ = local_688._4_4_;
        local_738._12_4_ = uStack_67c;
        local_688 = pFVar5;
        uStack_680 = local_738.Size;
        if (*(code **)(local_be8._padding_ + 0x28) ==
            TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                    ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_be8,
                     &local_738);
        }
        else {
          (**(code **)(local_be8._padding_ + 0x28))();
        }
        local_b38[0] = 0x3a;
        (**(code **)(*(longlong *)local_be8._padding_ + 0x188))(local_be8._padding_,local_b38,2);
        local_4d8.Base = local_4b8;
        local_be8._padding_._0_4_ = 0xc;
        local_4d8.CurPos = local_4b8;
        local_4d8.bIsDynamic = false;
        local_4d8.bIsExternal = false;
        local_4d8.End = (wchar_t *)&local_478;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_4d8,L"%lld");
        lVar20 = local_be8._padding_;
        uVar13 = (uint)((longlong)local_4d8.CurPos - (longlong)local_4d8.Base >> 1);
        if (local_4d8.Base == (wchar_t *)0x0) {
          pcVar26 = *(code **)(*(longlong *)local_be8._padding_ + 0x188);
        }
        else {
          uVar12 = uVar13;
          if ((0 < (int)uVar13) && (local_4d8.Base[(longlong)(int)uVar13 + -1] == L'\0')) {
            uVar12 = uVar13 - 1;
          }
          pcVar26 = *(code **)(*(longlong *)local_be8._padding_ + 0x188);
          pwVar15 = local_4d8.Base;
          if (uVar12 == 0xffffffff) {
            sVar19 = wcslen(local_4d8.Base);
            uVar12 = (uint)sVar19;
          }
        }
        (*pcVar26)(lVar20,pwVar15,(longlong)(int)uVar12 * 2);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4d8);
        local_be8._padding_._0_4_ = 8;
        uVar12 = 0;
        if ((int)((uint)local_be8._padding_ - 1) < (int)(uint)local_be8._padding_) {
          uVar12 = ~((uint)local_be8._padding_ - 1) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        if ((*(int *)(local_be8._padding_ + (longlong)(int)((uint)local_be8._padding_ + -1) * 4) !=
             6) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Stack.Top() == EJson::Object",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                       ,0x8e,L""), bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        local_be8._padding_._4_4_ = local_be8._padding_._4_4_ + -1;
        local_b88[0] = CONCAT22(local_b88[0]._2_2_,0x7d);
        (**(code **)(*(longlong *)local_be8._padding_ + 0x188))(local_be8._padding_,local_b88,2);
        if (((int)(uint)local_be8._padding_ < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        iVar10 = ~((uint)local_be8._padding_ - 1) + (uint)local_be8._padding_;
        if (iVar10 != 0) {
          memmove((undefined4 *)
                  (local_be8._padding_ + (longlong)(int)((uint)local_be8._padding_ - 1) * 4),
                  (undefined4 *)
                  (local_be8._padding_ + (longlong)(int)((uint)local_be8._padding_ - 1) * 4) + 1,
                  (longlong)iVar10 << 2);
        }
        local_be8._padding_._0_4_ = (uint)local_be8._padding_ - 1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)&local_be8._padding_,(uint)local_be8._padding_,
                   (int *)((longlong)&local_be8._padding_ + 4));
        uVar21 = local_c30 & 0xffffffff;
        FVar24.Data = FVar24.Data + 0x18;
        local_be8._padding_._0_4_ = 3;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_be8);
      ::FString::Reset(local_be8.OutString,(int)((ulonglong)(longlong)local_be8.Bytes.ArrayNum >> 1)
                      );
      pFVar30 = local_ba0;
      pwVar25 = pwVar15;
      if (0 < local_be8.Bytes.ArrayNum) {
        do {
          uVar22 = (uint)pwVar15;
          uVar13 = uVar12;
          if ((int)uVar22 < local_be8.Bytes.ArrayNum) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar26 = (code *)swi(3);
            (*pcVar26)();
            return;
          }
          ::FString::AppendChar
                    (local_be8.OutString,
                     *(wchar_t *)((longlong)pwVar25 + local_be8.Bytes.AllocatorInstance.Data));
          pwVar15 = (wchar_t *)(ulonglong)(uVar22 + 2);
          pwVar25 = pwVar25 + 1;
        } while ((int)(uVar22 + 2) < local_be8.Bytes.ArrayNum);
      }
      local_be8._padding_ =
           (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
      cVar8 = (**(code **)(*(longlong *)local_be8._padding_ + 0x210))();
      if ((cVar8 == '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("this->Stream->Close()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x2ef,L""), bVar7)) {
        pcVar26 = (code *)swi(3);
        (*pcVar26)();
        return;
      }
      if ((longlong *)local_be8._padding_ != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_be8._padding_)(local_be8._padding_,1);
      }
      if (local_be8.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_be8.Bytes.AllocatorInstance.Data);
      }
      local_be8._padding_ = (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
      if ((undefined4 *)local_be8._padding_ != (undefined4 *)0x0) {
        FMemory::Free((void *)local_be8._padding_);
      }
    }
    local_c60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c60.ArrayNum = 0;
    local_c60.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0xc,&local_c60.AllocatorInstance,0,&local_c60.ArrayMax);
    uVar12 = local_c60.ArrayNum + 5;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if (local_c60.ArrayMax < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar12,&local_c60.AllocatorInstance,local_c60.ArrayNum,&local_c60.ArrayMax);
    }
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_c60,&EZAttrib_OutAckOnlyCount,(ulong64 *)&pFVar30->field_0x20);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_c60,&EZAttrib_OutKeepAliveCount,(ulong64 *)&pFVar30->field_0x28);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_c60,&EZAttrib_OutOfOrderPacketsLostCount,(ulong64 *)&pFVar30->field_0x30);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_c60,&EZAttrib_OutOfOrderPacketsRecoveredCount,(ulong64 *)&pFVar30->field_0x38)
    ;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_c60,&EZAttrib_OutOfOrderPacketsDuplicateCount,(ulong64 *)&pFVar30->field_0x40)
    ;
    iVar11 = local_a98.Data.ArrayNum + -1;
    if (local_a98.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    if (0 < iVar11) {
      local_9f8.FragmentString.Data.AllocatorInstance.Data = local_a98.Data.AllocatorInstance.Data;
      local_9f8.FragmentString.Data.ArrayMax = local_a98.Data.ArrayMax;
      local_a98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9f8.FragmentString.Data.ArrayNum = local_a98.Data.ArrayNum;
      local_a98.Data.ArrayNum = 0;
      local_a98.Data.ArrayMax = 0;
      uVar12 = local_c60.ArrayNum + 1;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (local_c60.ArrayMax < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar12,&local_c60.AllocatorInstance,local_c60.ArrayNum,&local_c60.ArrayMax
                  );
      }
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment>
                (&local_c60,&EZAttrib_CloseReasons,&local_9f8);
      if (local_9f8.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9f8.FragmentString.Data.AllocatorInstance.Data);
      }
    }
    iVar10 = 0;
    iVar11 = local_aa8.Data.ArrayNum + -1;
    if (local_aa8.Data.ArrayNum == 0) {
      iVar11 = iVar10;
    }
    if (0 < iVar11) {
      local_9e8.FragmentString.Data.AllocatorInstance.Data = local_aa8.Data.AllocatorInstance.Data;
      local_9e8.FragmentString.Data.ArrayMax = local_aa8.Data.ArrayMax;
      local_aa8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9e8.FragmentString.Data.ArrayNum = local_aa8.Data.ArrayNum;
      local_aa8.Data.ArrayNum = 0;
      local_aa8.Data.ArrayMax = 0;
      uVar12 = local_c60.ArrayNum + 1;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (local_c60.ArrayMax < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar12,&local_c60.AllocatorInstance,local_c60.ArrayNum,&local_c60.ArrayMax
                  );
      }
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment>
                (&local_c60,&EZAttrib_FullCloseReasons,&local_9e8);
      if ((TPimplPtr<UE::Net::FNetResult,1> *)local_9e8.FragmentString.Data.AllocatorInstance.Data
          != (TPimplPtr<UE::Net::FNetResult,1> *)0x0) {
        FMemory::Free(local_9e8.FragmentString.Data.AllocatorInstance.Data);
      }
    }
    iVar11 = local_ab8.Data.ArrayNum + -1;
    if (local_ab8.Data.ArrayNum == 0) {
      iVar11 = iVar10;
    }
    if (0 < iVar11) {
      local_958.FragmentString.Data.AllocatorInstance.Data = local_ab8.Data.AllocatorInstance.Data;
      local_958.FragmentString.Data.ArrayMax = local_ab8.Data.ArrayMax;
      local_ab8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_958.FragmentString.Data.ArrayNum = local_ab8.Data.ArrayNum;
      local_ab8.Data.ArrayNum = 0;
      local_ab8.Data.ArrayMax = 0;
      uVar12 = local_c60.ArrayNum + 1;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (local_c60.ArrayMax < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar12,&local_c60.AllocatorInstance,local_c60.ArrayNum,&local_c60.ArrayMax
                  );
      }
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment>
                (&local_c60,&EZAttrib_ClientCloseReasons,&local_958);
      if (local_958.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_958.FragmentString.Data.AllocatorInstance.Data);
      }
    }
    iVar11 = local_ac8.Data.ArrayNum + -1;
    if (local_ac8.Data.ArrayNum == 0) {
      iVar11 = iVar10;
    }
    if (0 < iVar11) {
      local_998.FragmentString.Data.AllocatorInstance.Data = local_ac8.Data.AllocatorInstance.Data;
      local_998.FragmentString.Data.ArrayMax = local_ac8.Data.ArrayMax;
      local_ac8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_998.FragmentString.Data.ArrayNum = local_ac8.Data.ArrayNum;
      local_ac8.Data.ArrayNum = 0;
      local_ac8.Data.ArrayMax = 0;
      uVar12 = local_c60.ArrayNum + 1;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (local_c60.ArrayMax < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar12,&local_c60.AllocatorInstance,local_c60.ArrayNum,&local_c60.ArrayMax
                  );
      }
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment>
                (&local_c60,&EZAttrib_FullClientCloseReasons,&local_998);
      if (local_998.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_998.FragmentString.Data.AllocatorInstance.Data);
      }
    }
    iVar11 = local_ad8.Data.ArrayNum + -1;
    if (local_ad8.Data.ArrayNum == 0) {
      iVar11 = iVar10;
    }
    if (0 < iVar11) {
      local_988.FragmentString.Data.AllocatorInstance.Data = local_ad8.Data.AllocatorInstance.Data;
      local_988.FragmentString.Data.ArrayMax = local_ad8.Data.ArrayMax;
      local_ad8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_988.FragmentString.Data.ArrayNum = local_ad8.Data.ArrayNum;
      local_ad8.Data.ArrayNum = 0;
      local_ad8.Data.ArrayMax = 0;
      uVar12 = local_c60.ArrayNum + 1;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (local_c60.ArrayMax < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar12,&local_c60.AllocatorInstance,local_c60.ArrayNum,&local_c60.ArrayMax
                  );
      }
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment>
                (&local_c60,&EZAttrib_RecoveredFaults,&local_988);
      if (local_988.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_988.FragmentString.Data.AllocatorInstance.Data);
      }
    }
    iVar11 = local_a88.Data.ArrayNum + -1;
    if (local_a88.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    if (0 < iVar11) {
      local_978.FragmentString.Data.AllocatorInstance.Data = local_a88.Data.AllocatorInstance.Data;
      local_978.FragmentString.Data.ArrayMax = local_a88.Data.ArrayMax;
      local_a88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_978.FragmentString.Data.ArrayNum = local_a88.Data.ArrayNum;
      local_a88.Data.ArrayNum = 0;
      local_a88.Data.ArrayMax = 0;
      uVar12 = local_c60.ArrayNum + 1;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (local_c60.ArrayMax < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar12,&local_c60.AllocatorInstance,local_c60.ArrayNum,&local_c60.ArrayMax
                  );
      }
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment>
                (&local_c60,&EZAttrib_FailedPingICMP,&local_978);
      if (local_978.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_978.FragmentString.Data.AllocatorInstance.Data);
      }
    }
    iVar11 = local_ae8.Data.ArrayNum + -1;
    if (local_ae8.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    if (0 < iVar11) {
      local_968.FragmentString.Data.AllocatorInstance.Data = local_ae8.Data.AllocatorInstance.Data;
      local_968.FragmentString.Data.ArrayMax = local_ae8.Data.ArrayMax;
      local_ae8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_968.FragmentString.Data.ArrayNum = local_ae8.Data.ArrayNum;
      local_ae8.Data.ArrayNum = 0;
      local_ae8.Data.ArrayMax = 0;
      uVar12 = local_c60.ArrayNum + 1;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (local_c60.ArrayMax < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar12,&local_c60.AllocatorInstance,local_c60.ArrayNum,&local_c60.ArrayMax
                  );
      }
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment>
                (&local_c60,&EZAttrib_FailedPingUDP,&local_968);
      if (local_968.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.FragmentString.Data.AllocatorInstance.Data);
      }
    }
    FNetAnalyticsAggregator::AppendGameInstanceAttributes
              (*(FNetAnalyticsAggregator **)&pFVar30->field_0x18,&local_c60);
    plVar4 = local_7a8;
    if ((*local_7a8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar26 = (code *)swi(3);
      (*pcVar26)();
      return;
    }
    (**(code **)(*(longlong *)*plVar4 + 0x80))((longlong *)*plVar4,&EZEventName,&local_c60);
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_c60.AllocatorInstance.Data,local_c60.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_c60.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_c60.AllocatorInstance.Data);
    }
    if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
    }
    if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a88.Data.AllocatorInstance.Data);
    }
    if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
    }
    if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
    }
    if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
    }
    if ((TPimplPtr<UE::Net::FNetResult,1> *)local_aa8.Data.AllocatorInstance.Data !=
        (TPimplPtr<UE::Net::FNetResult,1> *)0x0) {
      FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
    }
    if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a98.Data.AllocatorInstance.Data);
    }
    DestructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,int>
              ((FFailedPingCounter *)local_c38.Data,(uint)local_c30);
    if ((FFailedPingCounter *)local_c38.Data != (FFailedPingCounter *)0x0) {
      FMemory::Free(local_c38.Data);
    }
    DestructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,int>
              ((FFailedPingCounter *)local_c28.Data,(uint)local_c20);
    if ((FFailedPingCounter *)local_c28.Data != (FFailedPingCounter *)0x0) {
      FMemory::Free(local_c28.Data);
    }
    DestructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int>
              ((FReasonCounter *)local_c08.Data,(int)local_c00);
    if ((FReasonCounter *)local_c08.Data != (FReasonCounter *)0x0) {
      FMemory::Free(local_c08.Data);
    }
    DestructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int>
              ((FReasonCounter *)local_bf8.Data,(int)local_bf0);
    if ((FReasonCounter *)local_bf8.Data != (FReasonCounter *)0x0) {
      FMemory::Free(local_bf8.Data);
    }
    DestructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int>
              ((FReasonCounter *)local_c18.AllocatorInstance.Data,local_c18.ArrayNum);
    if ((FReasonCounter *)local_c18.AllocatorInstance.Data != (FReasonCounter *)0x0) {
      FMemory::Free(local_c18.AllocatorInstance.Data);
    }
    DestructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int>
              ((FReasonCounter *)local_b98.AllocatorInstance.Data,local_b98.ArrayNum);
    if ((FReasonCounter *)local_b98.AllocatorInstance.Data != (FReasonCounter *)0x0) {
      FMemory::Free(local_b98.AllocatorInstance.Data);
    }
  }
  DestructItems<FNetConnAnalyticsVars::FPerNetConnData,int>
            ((FPerNetConnData *)local_548.Data,(int)local_540);
  if ((FPerNetConnData *)local_548.Data != (FPerNetConnData *)0x0) {
    FMemory::Free(local_548.Data);
  }
  DestructItems<FString,int>((FString *)local_558.Data,(int)local_550);
  if (local_558.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data);
  }
  DestructItems<FString,int>((FString *)local_568.Data,(int)local_560);
  if (local_568.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data);
  }
  local_570 = 0;
  if (local_578 != (void *)0x0) {
    FMemory::Free(local_578);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_5b8);
  DestructItems<FString,int>((FString *)local_5f8._48_8_,local_5f8._56_4_);
  if ((FScriptContainerElement *)local_5f8._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_5f8._48_8_);
  }
  uVar6 = local_5f8._40_8_;
  if ((FNetResult *)local_5f8._40_8_ != (FNetResult *)0x0) {
    TVar27 = *(TPimplPtr<UE::Net::FNetResult,1> *)(local_5f8._40_8_ + 0x28);
    if (TVar27 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)TVar27 + -0x10))((longlong)TVar27 + -0x10);
    }
    pFVar5 = (((FString *)(uVar6 + 0x18))->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete((void *)uVar6,0x30);
  }
  return;
LAB_1474110ae:
  if (local_a38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.AllocatorInstance.Data);
  }
LAB_14741113a:
  ((FReasonCounter *)FVar24.Data)->Counter = ((FReasonCounter *)FVar24.Data)->Counter + 1;
LAB_14741113d:
  local_258.Base = &local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  bVar7 = false;
  local_258.CurPos = &local_238;
  local_258.End = (wchar_t *)local_38;
  if (1 < local_a18.Data.ArrayNum) {
    local_238 = L',';
    local_258.CurPos = local_236;
  }
  if (*(int *)((longlong)TVar27 + 8) == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = *(wchar_t **)TVar27;
    iVar10 = 0;
    if (pwVar15 == (wchar_t *)0x0) goto LAB_1474111b8;
  }
  sVar19 = wcslen(pwVar15);
  iVar10 = (int)sVar19;
LAB_1474111b8:
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_258,pwVar15,iVar10);
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  sVar19 = wcslen(local_258.Base);
  ::FString::AppendChars(&local_a18,local_258.Base,(int)sVar19);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  TVar27 = (TPimplPtr<UE::Net::FNetResult,1>)((longlong)TVar27 + 0x10);
  goto LAB_147411001;
}

