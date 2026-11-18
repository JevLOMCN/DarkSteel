// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator()<PCGSplineIntersection::IntersectionPoint,PCGSplineIntersection::IntersectionPoint> @ 149c3c300

bool __thiscall
`FPCGSplineIntersectionElement::ExecuteInternal'::__l75::<lambda_3>::
operator()<PCGSplineIntersection::IntersectionPoint,PCGSplineIntersection::IntersectionPoint>
          (void *this,IntersectionPoint *param_1,IntersectionPoint *param_2)

{
  float fVar1;
  UPCGSplineData *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  pUVar2 = *(UPCGSplineData **)this;
  if ((pUVar2 != param_1->A) && (pUVar2 != param_1->B)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("In == A || In == B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineIntersection.cpp"
                       ,0x5a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar7 = 0x68;
  lVar6 = 0x68;
  if (pUVar2 != param_1->A) {
    lVar6 = 0x6c;
  }
  fVar1 = *(float *)((longlong)&param_1->A + lVar6);
  pUVar2 = *(UPCGSplineData **)this;
  bVar4 = pUVar2 == param_2->A;
  if (!bVar4) {
    if (pUVar2 != param_2->B) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("In == A || In == B",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineIntersection.cpp"
                         ,0x5a,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    bVar4 = pUVar2 == param_2->A;
  }
  if (!bVar4) {
    lVar7 = 0x6c;
  }
  return fVar1 < *(float *)((longlong)&param_2->A + lVar7);
}

// operator() @ 149c50920

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FPCGSplineIntersectionElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,FName param_1)

{
  FPCGContext *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FName local_res10 [3];
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar1 = *(FPCGContext **)this;
  local_res10[0] = param_1;
  pFVar2 = FText::FromName(&local_28,local_res10);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGSplineIntersectionElement",L"FailedCreateIndexAttribute",
                      L"Failed to create the index attribute \'{0}\'.");
  pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
  pFVar2 = FText::Format<FText>(&local_48,pFVar4,pFVar2);
  PCGLog::LogErrorOnGraph(pFVar2,pFVar1);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 149c59310

FPCGMetadataAttribute<int> * __thiscall
`FPCGSplineIntersectionElement::ExecuteInternal'::__l56::<lambda_2>::operator()
          (void *this,FName param_1)

{
  UPCGMetadata *this_00;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<int> *pFVar1;
  int local_res8 [2];
  FPCGMetadataDomainID local_20;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)this + 0x328))();
  local_20.Flag = PCGMetadataDomainID::Default.Flag;
  local_20._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_20.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res8[0] = -1;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_20);
  if ((this_01 != (FPCGMetadataDomain *)0x0) &&
     (pFVar1 = FPCGMetadataDomain::FindOrCreateAttribute<int>
                         (this_01,param_1,local_res8,false,true,true),
     pFVar1 != (FPCGMetadataAttribute<int> *)0x0)) {
    return pFVar1;
  }
  ExecuteInternal'::__l2::<lambda_1>::operator()(*(void **)((longlong)this + 8),param_1);
  return (FPCGMetadataAttribute<int> *)0x0;
}

// ExecuteInternal @ 149c689a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGSplineIntersectionElement::ExecuteInternal
          (FPCGSplineIntersectionElement *this,FPCGContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  int iVar5;
  UPCGNode *this_00;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  UPCGSplineData *pUVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uVar15;
  FPCGMetadataDomainID FVar16;
  FPCGContext *pFVar17;
  __m128d _Var18;
  bool bVar19;
  undefined1 uVar20;
  bool bVar21;
  int iVar22;
  UClass *pUVar23;
  UPCGSettings *pUVar24;
  UPCGSplineIntersectionSettings *pUVar25;
  InputData *this_01;
  FPCGTaggedData *pFVar26;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_02;
  TVector<double> *pTVar27;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_03;
  UPCGSplineData *pUVar28;
  UObject *pUVar29;
  UPCGMetadata *pUVar30;
  FPCGMetadataDomain *this_04;
  TQuat<double> *this_05;
  TRotator<double> *pTVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  FObjectPtr_u_0 FVar35;
  TTransform<double> *pTVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  FObjectPtr_u_0 FVar40;
  ForAnyElementType FVar41;
  FObjectPtr_u_0 FVar42;
  FObjectPtr_u_0 FVar43;
  FPCGDataPtrWrapper *this_06;
  FPCGTaggedData *pFVar44;
  ForAnyElementType FVar45;
  FObjectPtr_u_0 FVar46;
  FScriptContainerElement *pFVar47;
  FObjectPtr_u_0 FVar48;
  undefined8 uVar49;
  FObjectPtr_u_0 FVar50;
  FObjectPtr_u_0 FVar51;
  FObjectPtr_u_0 *pFVar52;
  long64 *plVar53;
  FObjectPtr_u_0 FVar54;
  FScriptContainerElement *pFVar55;
  FScriptContainerElement *pFVar56;
  undefined4 *puVar57;
  uint uVar58;
  FObjectPtr_u_0 FVar59;
  bool bVar60;
  float fVar61;
  float fVar62;
  double dVar63;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined4 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined4 uVar85;
  double dVar86;
  double dVar90;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  double dVar98;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar99;
  float fVar100;
  undefined1 auStackY_8c8 [32];
  <lambda_1> local_877;
  uint local_874;
  FPCGMetadataAttribute<int> *local_870;
  undefined1 local_868 [8];
  ulonglong local_860;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_858;
  ForAnyElementType local_848;
  undefined8 local_840;
  undefined1 local_838;
  undefined1 local_837;
  FGCScopeGuard local_836;
  undefined1 local_835;
  undefined1 local_834 [4];
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_830;
  undefined1 local_820 [8];
  ForAnyElementType local_818;
  int local_810;
  int iStack_80c;
  UPCGSplineIntersectionSettings *local_808;
  longlong local_800;
  uint local_7f8 [2];
  uint local_7f0 [2];
  UPCGSplineData *local_7e8;
  uint local_7e0;
  long64 local_7d8;
  FObjectPtr_u_0 local_7d0;
  longlong local_7c8;
  TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_> local_7c0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_7b0;
  FObjectPtr_u_0 local_7a8;
  UPCGSplineData *local_7a0;
  FPCGTaggedData *local_798;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_790;
  FScriptContainerElement *local_780;
  int local_778 [2];
  TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_> local_770;
  FObjectPtr_u_0 local_760;
  FObjectPtr_u_0 local_758;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_750;
  FPCGContext *local_740;
  FPCGContext *local_738;
  double local_730;
  TArray<PCGSplineIntersection::IntersectionPoint,TSizedDefaultAllocator<32>_> local_728;
  __m128d local_718;
  double local_708;
  TVector<double>_u_0 local_6f8;
  double dStack_6e0;
  TVector<double>_u_0 local_6d8;
  undefined1 auStack_6c0 [32];
  undefined1 auStack_6a0 [24];
  undefined1 local_688 [40];
  UPCGSplineData *local_660;
  TVector<double>_u_0 local_658;
  TVector<double>_u_0 local_640;
  UPCGSplineData *local_628;
  FPCGContext **local_620;
  TVector<double>_u_0 local_618;
  TVector<double>_u_0 local_600;
  TObjectPtr<UObject> local_5e8;
  undefined1 local_5e0 [24];
  TVector<double>_u_0 local_5c8;
  TVector<double>_u_0 local_5b0;
  FName local_598;
  TVector<double>_u_0 local_590;
  undefined1 local_578 [32];
  TVector<double>_u_0 local_558;
  undefined1 local_538 [32];
  TVector<double>_u_0 local_518;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined1 local_4a8 [16];
  double local_488;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  TVector<double> local_418;
  TVector<double> local_400;
  TRotator<double> local_3e8;
  TVector<double> local_3d0;
  TVector<double> local_3b8;
  TQuat<double> local_398;
  FObjectPtr_u_0 local_378;
  uint local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338;
  undefined4 local_337;
  undefined2 local_333;
  undefined1 local_331;
  void *local_330;
  undefined8 local_328;
  undefined1 local_320 [24];
  undefined8 uStack_308;
  void *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  void *local_2e0;
  ulonglong uStack_2d8;
  undefined4 local_2d0;
  TTransform<double> local_2c8;
  FPCGPointValueRanges local_268;
  ulonglong local_d8;
  undefined8 extraout_XMM0_Qb_00;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  bVar60 = -1 < CpuChannel->Enabled;
  local_740 = param_1;
  if (bVar60) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId200,"FPCGSplineIntersectionElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineIntersection.cpp"
               ,200);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId200);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar24 = UPCGNode::GetSettings(this_00), pUVar24 == (UPCGSettings *)0x0)) {
      pFVar26 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineIntersectionSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_877);
      if (pFVar26 != (FPCGTaggedData *)0x0) {
        local_808 = Cast<UPCGSplineIntersectionSettings_const_>(&pFVar26->Data);
        goto LAB_149c68ade;
      }
    }
    else {
      pUVar24 = UPCGNode::GetSettings(this_00);
      pUVar25 = (UPCGSplineIntersectionSettings *)
                FPCGDataCollection::GetSettings(&param_1->InputData,pUVar24);
      if (pUVar25 != (UPCGSplineIntersectionSettings *)0x0) {
        local_808 = pUVar25;
        pUVar23 = UPCGSplineIntersectionSettings::StaticClass();
        iVar22 = (int)pUVar23->_padding_;
        if ((iVar22 <= *(int *)(pUVar25->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
            &pUVar23->_padding_)) goto LAB_149c68ade;
      }
    }
    local_808 = (UPCGSplineIntersectionSettings *)0x0;
  }
  else {
    pUVar23 = UPCGSplineIntersectionSettings::StaticClass();
    bVar19 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar23);
    if (bVar19) {
      local_808 = (UPCGSplineIntersectionSettings *)
                  (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      local_808 = (UPCGSplineIntersectionSettings *)0x0;
    }
  }
LAB_149c68ade:
  pUVar25 = local_808;
  FVar59.Handle = (UObject *)0x0;
  if ((local_808 == (UPCGSplineIntersectionSettings *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineIntersection.cpp"
                          ,0xcb,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    uVar20 = (*pcVar10)();
    return (bool)uVar20;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_790,&PCGPinConstants::DefaultInputLabel);
  uVar15 = _UNK_150631d98;
  uVar49 = ___xmm_00000000ffffffff0000008000000000;
  dVar73 = __real_3fe0000000000000;
  uVar58 = 0;
  local_818.Data = (FScriptContainerElement *)0x0;
  local_810 = 0;
  iStack_80c = 0;
  dVar86 = pUVar25->DistanceThreshold;
  dVar90 = dVar86 * dVar86;
  local_5b0._0_8_ = dVar86 * __real_3fe0000000000000;
  local_5b0._8_8_ = local_5b0._0_8_;
  FVar51.Handle = FVar59.Handle;
  FVar35.Handle = FVar59.Handle;
  local_730 = dVar90;
  local_5b0._s_0.Z = local_5b0._0_8_;
  if (0 < local_790.ArrayNum) {
    do {
      uVar37 = FVar51._0_4_;
      uVar32 = uVar58;
      if ((int)uVar37 < local_790.ArrayNum) {
        uVar32 = ~uVar37 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        uVar20 = (*pcVar10)();
        return (bool)uVar20;
      }
      local_760 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(local_790.AllocatorInstance.Data + (longlong)FVar35.Handle))->
                  Handle;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c68c50:
        if ((FObjectPtr_u_0 *)local_760.Handle == (FObjectPtr_u_0 *)0x0) goto LAB_149c68c6e;
        pUVar23 = Z_Construct_UClass_UPCGSplineData_NoRegister();
        bVar19 = FObjectPtr::IsA((FObjectPtr *)&local_760,pUVar23);
        FVar51 = local_760;
        if (!bVar19) goto LAB_149c68c6e;
      }
      else {
        if ((FObjectPtr_u_0 *)local_760.Handle != (FObjectPtr_u_0 *)0x0) {
          UE::GC::MarkAsReachable(local_760.Handle);
          goto LAB_149c68c50;
        }
LAB_149c68c6e:
        FVar51.Handle = FVar59.Handle;
      }
      if ((FObjectPtr_u_0 *)FVar51.Handle != (FObjectPtr_u_0 *)0x0) {
        local_337 = 0;
        local_333 = 0;
        local_331 = 0;
        local_328 = 0;
        local_320._8_8_ = 0;
        local_368 = 0;
        uStack_360 = 0;
        local_358 = 0;
        uStack_350 = 0;
        local_348 = 0;
        uStack_340 = 0;
        local_338 = 0;
        local_330 = (void *)0x0;
        local_320._0_8_ = (FScriptContainerElement *)0x0;
        local_300 = (void *)0x0;
        local_2e0 = (void *)0x0;
        uStack_2d8 = 0;
        local_2d0 = 0;
        uStack_2e8 = 0;
        uStack_2f8 = uVar49;
        local_2f0 = uVar15;
        local_320._16_8_ = 0;
        uStack_308 = 0;
        local_378 = FVar51;
        local_370 = uVar37;
        if (((local_818.Data <= &local_378) &&
            (&local_378 < (FObjectPtr_u_0 *)(local_818.Data + (longlong)iStack_80c * 0xb0))) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar10 = (code *)swi(3);
          uVar20 = (*pcVar10)();
          return (bool)uVar20;
        }
        if (local_810 == iStack_80c) {
          local_810 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8b0,&local_818,&iStack_80c);
        }
        lVar33 = (longlong)local_810;
        local_810 = local_810 + 1;
        this_01 = PCGSplineIntersection::InputData::InputData
                            ((InputData *)(local_818.Data + lVar33 * 0xb0),(InputData *)&local_378);
        uStack_2d8 = uStack_2d8 & 0xffffffff00000000;
        if (local_2e0 != (void *)0x0) {
          FMemory::Free(local_2e0);
        }
        TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_320,0,local_320._8_4_);
        bVar19 = local_320._12_4_ != 0;
        local_320._8_8_ = (ulonglong)(uint)local_320._12_4_ << 0x20;
        if (bVar19) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)local_320,0,(int *)(local_320 + 0xc));
        }
        uVar32 = uStack_2f8._4_4_;
        local_2f0 = 0xffffffff;
        uStack_2f8 = (ulonglong)uStack_2f8._4_4_ << 0x20;
        if (0x80 < uVar32) {
          uStack_2f8 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_320 + 0x10),0);
        }
        if (local_300 != (void *)0x0) {
          FMemory::Free(local_300);
        }
        if ((FScriptContainerElement *)local_320._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_320._0_8_);
        }
        if (local_330 != (void *)0x0) {
          FMemory::Free(local_330);
        }
        PCGSplineIntersection::InputData::InitializeBounds
                  (this_01,(TVector<double> *)&local_5b0._s_0);
      }
      dVar86 = __real_3f847ae147ae147b;
      FVar51._0_4_ = uVar37 + 1;
      FVar51._4_4_ = 0;
      FVar35.Handle = FVar35.Handle + 3;
    } while ((int)FVar51._0_4_ < local_790.ArrayNum);
    if ((local_810 != 0) && (0.0 < local_808->DistanceThreshold)) {
      uVar80 = SUB84(__real_3ff0000000000000,0);
      uVar85 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_7c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7c0.ArrayNum = 0;
      local_7c0.ArrayMax = 0;
      local_848.Data = (FScriptContainerElement *)0x0;
      local_840 = 0;
      local_868._0_4_ = 0;
      pUVar25 = local_808;
      if (0 < local_810) {
        do {
          bVar19 = (longlong)local_840 < 0;
          local_840 = local_840 & 0xffffffff00000000;
          if (bVar19) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_848,0,(int *)((longlong)&local_840 + 4));
          }
          if (pUVar25->Type == Self) {
            if (((local_848.Data <= (UPCGSplineData *)local_868) &&
                ((FScriptContainerElement *)local_868 <
                 local_848.Data + (longlong)local_840._4_4_ * 4)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar10 = (code *)swi(3);
              uVar20 = (*pcVar10)();
              return (bool)uVar20;
            }
            if ((uint)local_840 == local_840._4_4_) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_848,(int *)((longlong)&local_840 + 4));
              local_840 = CONCAT44(local_840._4_4_,iVar22);
            }
            lVar33 = (longlong)(int)(uint)local_840;
            local_840 = CONCAT44(local_840._4_4_,(uint)local_840 + 1);
            *(undefined4 *)(local_848.Data + lVar33 * 4) = local_868._0_4_;
          }
          else {
            local_820._0_4_ = local_868._0_4_ + 1;
            if ((int)local_820._0_4_ < local_810) {
              do {
                if (((local_848.Data <= (UPCGSplineData *)local_820) &&
                    ((FScriptContainerElement *)local_820 <
                     local_848.Data + (longlong)local_840._4_4_ * 4)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar10 = (code *)swi(3);
                  uVar20 = (*pcVar10)();
                  return (bool)uVar20;
                }
                if ((uint)local_840 == local_840._4_4_) {
                  iVar22 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_848,(int *)((longlong)&local_840 + 4));
                  local_840 = CONCAT44(local_840._4_4_,iVar22);
                }
                lVar33 = (longlong)(int)(uint)local_840;
                local_840 = CONCAT44(local_840._4_4_,(uint)local_840 + 1);
                *(undefined4 *)(local_848.Data + lVar33 * 4) = local_820._0_4_;
                local_820._0_4_ = local_820._0_4_ + 1;
              } while ((int)local_820._0_4_ < local_810);
            }
          }
          lVar33 = (longlong)(int)local_868._0_4_;
          uVar32 = uVar58;
          if ((int)local_868._0_4_ < local_810) {
            uVar32 = (uint)~local_868._0_4_ >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            uVar20 = (*pcVar10)();
            return (bool)uVar20;
          }
          uVar34 = (ulonglong)(int)(uint)local_840;
          uVar49 = local_818.Data + lVar33 * 0xb0;
          local_7e0 = (uint)local_840;
          pUVar28 = (UPCGSplineData *)(local_848.Data + uVar34 * 4);
          FVar41.Data = local_848.Data;
          local_7a0 = pUVar28;
          local_640._16_8_ = uVar49;
          while( true ) {
            local_7e8 = (UPCGSplineData *)FVar41.Data;
            if ((uint)local_840 != (int)uVar34) {
              local_838 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_838);
            }
            if ((UPCGSplineData *)FVar41.Data == pUVar28) break;
            uVar32 = *(uint *)FVar41.Data;
            uVar37 = uVar58;
            if ((int)uVar32 < local_810) {
              uVar37 = ~uVar32 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              uVar20 = (*pcVar10)();
              return (bool)uVar20;
            }
            pFVar56 = local_818.Data + (longlong)(int)uVar32 * 0xb0;
            local_640._s_0.X =
                 (double)(((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)&pFVar56->field_0x0
                          )->AllocatorInstance).Data;
            local_640._s_0.Y =
                 (double)*(undefined8 *)&((FScriptContainerElement *)uVar49)->field_0x0;
            local_780 = pFVar56;
            if ((((((*(double *)(uVar49 + 0x10) <= *(double *)(pFVar56 + 0x28)) &&
                   (*(double *)(pFVar56 + 0x10) <= *(double *)(uVar49 + 0x28))) &&
                  (*(double *)(uVar49 + 0x18) <= *(double *)(pFVar56 + 0x30))) &&
                 ((*(double *)(pFVar56 + 0x18) <= *(double *)(uVar49 + 0x30) &&
                  (*(double *)(uVar49 + 0x20) <=
                   (double)*(IPCGGraphExecutionSource **)(pFVar56 + 0x38))))) &&
                (*(double *)(pFVar56 + 0x20) <= *(double *)(uVar49 + 0x38))) &&
               (local_874 = 0, 0 < *(int *)(uVar49 + 0x50))) {
              local_870 = (FPCGMetadataAttribute<int> *)0x0;
              FVar35.Handle = FVar59.Handle;
              do {
                uVar37 = FVar35._0_4_;
                uVar32 = uVar58;
                if ((int)uVar37 < *(int *)(uVar49 + 0x50)) {
                  uVar32 = ~uVar37 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), uVar37 = local_874, bVar19)) {
                  pcVar10 = (code *)swi(3);
                  uVar20 = (*pcVar10)();
                  return (bool)uVar20;
                }
                local_688._32_8_ = *(undefined8 *)(uVar49 + 0x48);
                if ((((*(double *)((longlong)local_870 + local_688._32_8_) <=
                       *(double *)(pFVar56 + 0x28)) &&
                     (*(double *)(pFVar56 + 0x10) <=
                      *(double *)((longlong)local_870 + 0x18 + local_688._32_8_))) &&
                    (*(double *)((longlong)local_870 + 8 + local_688._32_8_) <=
                     *(double *)(pFVar56 + 0x30))) &&
                   (((*(double *)(pFVar56 + 0x18) <=
                      *(double *)((longlong)local_870 + 0x20 + local_688._32_8_) &&
                     (*(double *)((longlong)local_870 + 0x10 + local_688._32_8_) <=
                      (double)*(IPCGGraphExecutionSource **)(pFVar56 + 0x38))) &&
                    (*(double *)(pFVar56 + 0x20) <=
                     *(double *)((longlong)local_870 + 0x28 + local_688._32_8_))))) {
                  dVar63 = pUVar25->DistanceThreshold;
                  local_7f8[0] = uVar37;
                  if ((((*(longlong *)&((FScriptContainerElement *)uVar49)->field_0x0 == 0) ||
                       ((int)uVar37 < 0)) || (*(int *)(uVar49 + 0xa8) <= (int)uVar37)) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Spline && SegmentIndex >= 0 && SegmentIndex < SegmentsNum"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineIntersection.cpp"
                                          ,0x2b,L""), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    uVar20 = (*pcVar10)();
                    return (bool)uVar20;
                  }
                  this_02 = TMapBase<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,0>_>
                            ::FindOrAddImpl<int_const_&>
                                      ((TMapBase<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,0>_>
                                        *)(uVar49 + 0x58),local_7f8[0],(int *)local_7f8);
                  local_7b0 = this_02;
                  auVar66._0_8_ =
                       (double)(**(code **)(**(longlong **)
                                              &((FScriptContainerElement *)uVar49)->field_0x0 +
                                           0x4b0))(*(longlong **)
                                                    &((FScriptContainerElement *)uVar49)->field_0x0,
                                                   local_7f8[0]);
                  auVar66._8_8_ = extraout_XMM0_Qb;
                  if (this_02->ArrayNum == 0) {
                    dVar72 = auVar66._0_8_ * dVar86;
                    if (dVar72 <= dVar63) {
                      dVar72 = dVar63;
                    }
                    auVar64._8_8_ = 0;
                    auVar64._0_8_ = auVar66._0_8_ / dVar72;
                    auVar64 = roundpd(auVar66,auVar64,1);
                    iVar22 = (int)(auVar64._0_8_ + (double)CONCAT44(uVar85,uVar80));
                    local_860 = CONCAT44(local_860._4_4_,iVar22);
                    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
                    SetNumUninitialized(this_02,iVar22 + 1,Default);
                    dVar63 = FPCGSplineStruct::GetDistanceAlongSplineAtSplinePoint
                                       ((FPCGSplineStruct *)
                                        (*(longlong *)
                                          &((FScriptContainerElement *)uVar49)->field_0x0 + 0x110),
                                        local_7f8[0]);
                    if (-1 < iVar22) {
                      FVar50.Handle = FVar59.Handle;
                      FVar51.Handle = FVar59.Handle;
                      do {
                        uVar37 = FVar50._0_4_;
                        pTVar27 = FPCGSplineStruct::GetLocationAtDistanceAlongSpline
                                            ((FPCGSplineStruct *)
                                             (*(longlong *)
                                               &((FScriptContainerElement *)uVar49)->field_0x0 +
                                             0x110),&local_418,
                                             (double)(int)uVar37 *
                                             ((double)CONCAT44(uVar85,uVar80) / (double)iVar22) *
                                             auVar66._0_8_ + dVar63,World);
                        dVar92 = (pTVar27->field0_0x0)._s_0.X;
                        dVar93 = (pTVar27->field0_0x0)._s_0.Y;
                        dVar72 = (pTVar27->field0_0x0)._s_0.Z;
                        uVar32 = uVar58;
                        if ((int)uVar37 < this_02->ArrayNum) {
                          uVar32 = ~uVar37 >> 0x1f;
                        }
                        if ((uVar32 == 0) &&
                           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar19)) {
                          pcVar10 = (code *)swi(3);
                          uVar20 = (*pcVar10)();
                          return (bool)uVar20;
                        }
                        pFVar47 = (this_02->AllocatorInstance).Data;
                        FVar50._0_4_ = uVar37 + 1;
                        FVar50._4_4_ = 0;
                        pFVar56 = (FScriptContainerElement *)
                                  ((longlong)&(FVar51.Handle)->field_0x0 + (longlong)pFVar47);
                        *(double *)pFVar56 = dVar92;
                        *(double *)(pFVar56 + 8) = dVar93;
                        *(double *)(pFVar47 + (longlong)&(FVar51.Handle)->field_0x10) = dVar72;
                        FVar51.Handle = (UObject *)&(FVar51.Handle)->field_0x18;
                      } while ((int)FVar50._0_4_ <= (int)(uint)local_860);
                      uVar80 = SUB84(__real_3ff0000000000000,0);
                      uVar85 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                      pFVar56 = local_780;
                    }
                  }
                  if ((this_02->ArrayNum < 2) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    uVar20 = (*pcVar10)();
                    return (bool)uVar20;
                  }
                  if ((this_02->ArrayNum < 1) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    uVar20 = (*pcVar10)();
                    return (bool)uVar20;
                  }
                  local_860 = local_860 & 0xffffffff00000000;
                  uVar37 = local_874;
                  if (0 < *(int *)(pFVar56 + 0x50)) {
                    local_800 = 0;
                    FVar40.Handle = FVar59.Handle;
                    do {
                      lVar33 = local_800;
                      uVar37 = FVar40._0_4_;
                      uVar32 = uVar58;
                      if ((int)uVar37 < *(int *)(pFVar56 + 0x50)) {
                        uVar32 = ~uVar37 >> 0x1f;
                      }
                      if (uVar32 == 0) {
                        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar19) {
                          pcVar10 = (code *)swi(3);
                          uVar20 = (*pcVar10)();
                          return (bool)uVar20;
                        }
                        uVar37 = (uint)local_860;
                      }
                      lVar39 = *(longlong *)(pFVar56 + 0x48);
                      if ((((*(double *)((longlong)local_870 + local_688._32_8_) <=
                             *(double *)(lVar39 + lVar33 + 0x18)) &&
                           (*(double *)(lVar39 + lVar33) <=
                            *(double *)((longlong)local_870 + 0x18 + local_688._32_8_))) &&
                          (*(double *)((longlong)local_870 + 8 + local_688._32_8_) <=
                           *(double *)(lVar39 + lVar33 + 0x20))) &&
                         (((*(double *)(lVar39 + lVar33 + 8) <=
                            *(double *)((longlong)local_870 + 0x20 + local_688._32_8_) &&
                           (*(double *)((longlong)local_870 + 0x10 + local_688._32_8_) <=
                            *(double *)(lVar39 + lVar33 + 0x28))) &&
                          (*(double *)(lVar39 + lVar33 + 0x10) <=
                           *(double *)((longlong)local_870 + 0x28 + local_688._32_8_))))) {
                        dVar63 = local_808->DistanceThreshold;
                        local_7f0[0] = uVar37;
                        if (((((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                &pFVar56->field_0x0)->AllocatorInstance).Data ==
                               (FScriptContainerElement *)0x0) || ((int)uVar37 < 0)) ||
                            (*(int *)(pFVar56 + 0xa8) <= (int)uVar37)) &&
                           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Spline && SegmentIndex >= 0 && SegmentIndex < SegmentsNum"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineIntersection.cpp"
                                                ,0x2b,L""), bVar19)) {
                          pcVar10 = (code *)swi(3);
                          uVar20 = (*pcVar10)();
                          return (bool)uVar20;
                        }
                        this_03 = TMapBase<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,0>_>
                                  ::FindOrAddImpl<int_const_&>
                                            ((TMapBase<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,0>_>
                                              *)(pFVar56 + 0x58),local_7f0[0],(int *)local_7f0);
                        pFVar47 = (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                   &pFVar56->field_0x0)->AllocatorInstance).Data;
                        auVar65._0_8_ =
                             (double)(**(code **)(*(longlong *)pFVar47 + 0x4b0))
                                               (pFVar47,local_7f0[0]);
                        auVar65._8_8_ = extraout_XMM0_Qb_00;
                        if (this_03->ArrayNum == 0) {
                          dVar72 = auVar65._0_8_ * dVar86;
                          if (dVar72 <= dVar63) {
                            dVar72 = dVar63;
                          }
                          auVar74._8_8_ = 0;
                          auVar74._0_8_ = auVar65._0_8_ / dVar72;
                          auVar66 = roundpd(auVar65,auVar74,1);
                          iVar22 = (int)(auVar66._0_8_ + (double)CONCAT44(uVar85,uVar80));
                          local_7c8 = CONCAT44(local_7c8._4_4_,iVar22);
                          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
                          SetNumUninitialized(this_03,iVar22 + 1,Default);
                          dVar63 = FPCGSplineStruct::GetDistanceAlongSplineAtSplinePoint
                                             ((FPCGSplineStruct *)
                                              ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>
                                                  *)&pFVar56->field_0x0)->AllocatorInstance).Data +
                                              0x110),local_7f0[0]);
                          this_02 = local_7b0;
                          if (-1 < iVar22) {
                            iVar5 = (int)local_7c8;
                            FVar42.Handle = FVar59.Handle;
                            FVar51.Handle = FVar59.Handle;
                            do {
                              uVar37 = FVar42._0_4_;
                              pTVar27 = FPCGSplineStruct::GetLocationAtDistanceAlongSpline
                                                  ((FPCGSplineStruct *)
                                                   ((((
                                                  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>
                                                  *)&pFVar56->field_0x0)->AllocatorInstance).Data +
                                                  0x110),&local_3b8,
                                                  (double)(int)uVar37 *
                                                  ((double)CONCAT44(uVar85,uVar80) / (double)iVar22)
                                                  * auVar65._0_8_ + dVar63,World);
                              dVar92 = (pTVar27->field0_0x0)._s_0.X;
                              dVar93 = (pTVar27->field0_0x0)._s_0.Y;
                              dVar72 = (pTVar27->field0_0x0)._s_0.Z;
                              uVar32 = uVar58;
                              if ((int)uVar37 < this_03->ArrayNum) {
                                uVar32 = ~uVar37 >> 0x1f;
                              }
                              if ((uVar32 == 0) &&
                                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar19)) {
                                pcVar10 = (code *)swi(3);
                                uVar20 = (*pcVar10)();
                                return (bool)uVar20;
                              }
                              pFVar55 = (this_03->AllocatorInstance).Data;
                              FVar42._0_4_ = uVar37 + 1;
                              FVar42._4_4_ = 0;
                              pFVar47 = (FScriptContainerElement *)
                                        ((longlong)&(FVar51.Handle)->field_0x0 + (longlong)pFVar55);
                              *(double *)pFVar47 = dVar92;
                              *(double *)(pFVar47 + 8) = dVar93;
                              *(double *)(&(FVar51.Handle)->field_0x10 + (longlong)pFVar55) = dVar72
                              ;
                              FVar51.Handle = (UObject *)&(FVar51.Handle)->field_0x18;
                              this_02 = local_7b0;
                              uVar49 = local_640._s_0.Z;
                            } while ((int)FVar42._0_4_ <= iVar5);
                          }
                        }
                        if ((this_03->ArrayNum < 2) &&
                           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar19)) {
                          pcVar10 = (code *)swi(3);
                          uVar20 = (*pcVar10)();
                          return (bool)uVar20;
                        }
                        if ((this_03->ArrayNum < 1) &&
                           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar19)) {
                          pcVar10 = (code *)swi(3);
                          uVar20 = (*pcVar10)();
                          return (bool)uVar20;
                        }
                        iVar22 = this_02->ArrayNum;
                        if (0 < iVar22 + -1) {
                          local_7a8 = (FObjectPtr_u_0)0x1;
                          FVar51.Handle = FVar59.Handle;
                          FVar35.Handle = FVar59.Handle;
                          do {
                            uVar37 = FVar51._0_4_;
                            uVar32 = uVar58;
                            if ((int)uVar37 < iVar22) {
                              uVar32 = ~uVar37 >> 0x1f;
                            }
                            local_758 = FVar35;
                            if ((uVar32 == 0) &&
                               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar19)) {
                              pcVar10 = (code *)swi(3);
                              uVar20 = (*pcVar10)();
                              return (bool)uVar20;
                            }
                            uVar37 = uVar37 + 1;
                            local_798 = (FPCGTaggedData *)
                                        ((longlong)&(FVar35.Handle)->field_0x0 +
                                        (longlong)(this_02->AllocatorInstance).Data);
                            FVar51 = (FObjectPtr_u_0)(longlong)(int)uVar37;
                            uVar32 = uVar58;
                            if ((int)uVar37 < this_02->ArrayNum) {
                              uVar32 = ~uVar37 >> 0x1f;
                            }
                            if ((uVar32 == 0) &&
                               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar19)) {
                              pcVar10 = (code *)swi(3);
                              uVar20 = (*pcVar10)();
                              return (bool)uVar20;
                            }
                            local_658._s_0.Y = (double)(this_02->AllocatorInstance).Data;
                            local_7d0.Handle = (UObject *)&(FVar35.Handle)->field_0x18;
                            FVar35.Handle = FVar59.Handle;
                            FVar43.Handle = FVar59.Handle;
                            if (local_640._s_0.X == local_640._s_0.Y) {
                              FVar43._4_4_ = 0;
                              FVar43._0_4_ = uVar37;
                              FVar35 = local_7a8;
                            }
                            iVar22 = this_03->ArrayNum;
                            if (FVar43._0_4_ < iVar22 + -1) {
                              lVar33 = (longlong)FVar35.Handle * 0x18;
                              do {
                                uVar38 = FVar43._0_4_;
                                uVar32 = uVar58;
                                if ((int)uVar38 < iVar22) {
                                  uVar32 = ~uVar38 >> 0x1f;
                                }
                                local_7c8 = lVar33;
                                if ((uVar32 == 0) &&
                                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar19)) {
                                  pcVar10 = (code *)swi(3);
                                  uVar20 = (*pcVar10)();
                                  return (bool)uVar20;
                                }
                                uVar38 = uVar38 + 1;
                                local_658._s_0.Z =
                                     (double)((this_03->AllocatorInstance).Data + lVar33);
                                FVar43 = (FObjectPtr_u_0)(longlong)(int)uVar38;
                                uVar32 = uVar58;
                                if ((int)uVar38 < this_03->ArrayNum) {
                                  uVar32 = ~uVar38 >> 0x1f;
                                }
                                if ((uVar32 == 0) &&
                                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar19)) {
                                  pcVar10 = (code *)swi(3);
                                  uVar20 = (*pcVar10)();
                                  return (bool)uVar20;
                                }
                                pFVar55 = (this_03->AllocatorInstance).Data;
                                lVar33 = lVar33 + 0x18;
                                pFVar47 = pFVar55 + local_7c8 + 0x18;
                                local_578._0_8_ = *(undefined8 *)pFVar47;
                                local_578._8_8_ = *(undefined8 *)(pFVar47 + 8);
                                local_578._16_8_ = *(undefined8 *)(pFVar55 + local_7c8 + 0x28);
                                local_558._s_0.X = (double)*(undefined8 *)local_658._s_0.Z;
                                local_558._s_0.Y =
                                     (double)*(undefined8 *)((longlong)local_658._s_0.Z + 8);
                                local_558._s_0.Z =
                                     (double)*(undefined8 *)((longlong)local_658._s_0.Z + 0x10);
                                local_538._0_8_ =
                                     *(undefined8 *)
                                      ((FScriptContainerElement *)
                                       ((longlong)local_658._s_0.Y + 0x18) +
                                      (longlong)(&(local_758.Handle)->field_0x18 + -0x18));
                                local_538._8_8_ =
                                     *(undefined8 *)
                                      ((FScriptContainerElement *)
                                       ((longlong)local_658._s_0.Y + 0x18) +
                                       (longlong)(&(local_758.Handle)->field_0x18 + -0x18) + 8);
                                local_538._16_8_ =
                                     *(undefined8 *)
                                      ((longlong)(local_758.Handle + 1) + (longlong)local_658._s_0.Y
                                      );
                                local_518._s_0.X = (double)(local_798->Data).Data.field0_0x0;
                                local_518._s_0.Y = (double)(local_798->Data).WeakData.WeakPtr;
                                local_518._s_0.Z =
                                     (double)*(undefined8 *)&(local_798->Tags).Elements;
                                FMath::SegmentDistToSegment
                                          ((TVector<double> *)&local_518._s_0,
                                           (TVector<double> *)local_538,
                                           (TVector<double> *)&local_558._s_0,
                                           (TVector<double> *)local_578,
                                           (TVector<double> *)&local_5c8._s_0,
                                           (TVector<double> *)local_5e0);
                                if ((local_5c8._s_0.Y - (double)local_5e0._8_8_) *
                                    (local_5c8._s_0.Y - (double)local_5e0._8_8_) +
                                    (local_5c8._s_0.X - (double)local_5e0._0_8_) *
                                    (local_5c8._s_0.X - (double)local_5e0._0_8_) +
                                    (local_5c8._s_0.Z - (double)local_5e0._16_8_) *
                                    (local_5c8._s_0.Z - (double)local_5e0._16_8_) <= dVar90) {
                                  fVar61 = FPCGSplineStruct::
                                           FindInputKeyOnSegmentClosestToWorldLocation
                                                     ((FPCGSplineStruct *)
                                                      (*(longlong *)
                                                        &((FScriptContainerElement *)uVar49)->
                                                         field_0x0 + 0x110),
                                                      (TVector<double> *)&local_5c8._s_0,local_874);
                                  FPCGSplineStruct::GetLocationAtSplineInputKey
                                            ((FPCGSplineStruct *)
                                             (*(longlong *)
                                               &((FScriptContainerElement *)uVar49)->field_0x0 +
                                             0x110),(TVector<double> *)&local_618._s_0,fVar61,World)
                                  ;
                                  fVar62 = FPCGSplineStruct::
                                           FindInputKeyOnSegmentClosestToWorldLocation
                                                     ((FPCGSplineStruct *)
                                                      ((((
                                                  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>
                                                  *)&pFVar56->field_0x0)->AllocatorInstance).Data +
                                                  0x110),(TVector<double> *)local_5e0,
                                                  (uint)local_860);
                                  FPCGSplineStruct::GetLocationAtSplineInputKey
                                            ((FPCGSplineStruct *)
                                             ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>
                                                 *)&pFVar56->field_0x0)->AllocatorInstance).Data +
                                             0x110),(TVector<double> *)&local_600._s_0,fVar62,World)
                                  ;
                                  dVar72 = local_618._s_0.X + local_600._s_0.X;
                                  dVar63 = local_618._s_0.Y + local_600._s_0.Y;
                                  local_488 = (local_618._s_0.Z + local_600._s_0.Z) * dVar73;
                                  iVar22 = local_7c0.ArrayNum;
                                  if (local_7c0.ArrayNum == local_7c0.ArrayMax) {
                                    iVar22 = UE::Core::Private::
                                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                       (0x870,&local_7c0.AllocatorInstance,
                                                        &local_7c0.ArrayMax);
                                  }
                                  local_7c0.ArrayNum = iVar22 + 1;
                                  lVar39 = (longlong)iVar22 * 0x70;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x20)
                                       = 0;
                                  *(undefined8 *)
                                   (local_7c0.AllocatorInstance.Data + lVar39 + 0x20 + 8) = 0;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x30)
                                       = 0;
                                  *(undefined8 *)
                                   (local_7c0.AllocatorInstance.Data + lVar39 + 0x30 + 8) = 0;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x40)
                                       = 0;
                                  *(undefined8 *)
                                   (local_7c0.AllocatorInstance.Data + lVar39 + 0x40 + 8) = 0;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x50)
                                       = 0;
                                  *(undefined8 *)
                                   (local_7c0.AllocatorInstance.Data + lVar39 + 0x50 + 8) = 0;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x60)
                                       = 0;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39) = 0;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39 + 8) = 0
                                  ;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x10)
                                       = 0;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x18)
                                       = 0;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x68)
                                       = 0;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39) =
                                       *(undefined8 *)
                                        &((FScriptContainerElement *)uVar49)->field_0x0;
                                  *(undefined8 *)(local_7c0.AllocatorInstance.Data + lVar39 + 8) =
                                       uVar49;
                                  *(FScriptContainerElement **)
                                   (local_7c0.AllocatorInstance.Data + lVar39 + 0x10) =
                                       (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                        &pFVar56->field_0x0)->AllocatorInstance).Data;
                                  *(FScriptContainerElement **)
                                   (local_7c0.AllocatorInstance.Data + lVar39 + 0x18) = pFVar56;
                                  *(double *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x38) =
                                       local_618._s_0.X;
                                  *(double *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x38 + 8)
                                       = local_618._s_0.Y;
                                  *(double *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x48) =
                                       local_618._s_0.Z;
                                  *(double *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x50) =
                                       local_600._s_0.X;
                                  *(double *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x50 + 8)
                                       = local_600._s_0.Y;
                                  *(double *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x20) =
                                       dVar72 * dVar73;
                                  *(double *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x20 + 8)
                                       = dVar63 * dVar73;
                                  *(double *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x30) =
                                       local_488;
                                  *(float *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x68) =
                                       fVar61;
                                  *(float *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x6c) =
                                       fVar62;
                                  *(double *)(local_7c0.AllocatorInstance.Data + lVar39 + 0x60) =
                                       local_600._s_0.Z;
                                }
                                iVar22 = this_03->ArrayNum;
                              } while ((int)uVar38 < iVar22 + -1);
                            }
                            local_7a8.Handle = (UObject *)&(local_7a8.Handle)->field_0x1;
                            iVar22 = local_7b0->ArrayNum;
                            this_02 = local_7b0;
                            FVar35 = local_7d0;
                          } while ((int)uVar37 < iVar22 + -1);
                        }
                        lVar33 = local_800;
                        uVar37 = (uint)local_860;
                      }
                      uVar80 = SUB84(__real_3ff0000000000000,0);
                      uVar85 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                      FVar40._0_4_ = uVar37 + 1;
                      FVar40._4_4_ = 0;
                      local_800 = lVar33 + 0x38;
                      local_860 = CONCAT44(local_860._4_4_,FVar40._0_4_);
                      uVar37 = local_874;
                    } while ((int)FVar40._0_4_ < *(int *)(pFVar56 + 0x50));
                  }
                }
                uVar80 = SUB84(__real_3ff0000000000000,0);
                uVar85 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                FVar35._0_4_ = uVar37 + 1;
                FVar35._4_4_ = 0;
                local_870 = (FPCGMetadataAttribute<int> *)((longlong)local_870 + 0x38);
                pUVar25 = local_808;
                pUVar28 = local_7a0;
                local_874 = FVar35._0_4_;
              } while ((int)FVar35._0_4_ < *(int *)(uVar49 + 0x50));
            }
            uVar34 = (ulonglong)local_7e0;
            FVar41.Data = (FScriptContainerElement *)&local_7e8->field_0x4;
          }
          local_868._0_4_ = local_868._0_4_ + 1;
          param_1 = local_740;
        } while ((int)local_868._0_4_ < local_810);
      }
      pFVar56 = (FScriptContainerElement *)&param_1->OutputData;
      local_780 = pFVar56;
      local_738 = param_1;
      if (pUVar25->Output == IntersectionPointsOnly) {
        PCGSplineIntersection::CollapseColocatedIntersections
                  (&local_728,&local_7c0,dVar90,(UPCGSplineData *)0x0);
        iVar22 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)pFVar56,piVar1);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar22 + 1;
        this_06 = (FPCGDataPtrWrapper *)
                  ((((FPCGDataCollection *)pFVar56)->TaggedData).AllocatorInstance.Data +
                  (longlong)iVar22 * 0x78);
        this_06[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_06[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_06[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_06[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_06[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (this_06->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_06->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        this_06[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_06[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_06[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_06[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_06[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_06[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_06[4].Data.field0_0x0 + 4) = 0;
        this_06[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_06[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&this_06[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_06[7].Data.field0_0x0 + 4) = 0xffffffff;
        pUVar28 = (UPCGSplineData *)FPCGContext::NewPointData_AnyThread(param_1);
        local_7a0 = pUVar28;
        FPCGDataPtrWrapper::operator=(this_06,(UPCGData *)pUVar28);
        (**(code **)(*(longlong *)pUVar28 + 0x490))(pUVar28,local_728.ArrayNum);
        pUVar25 = local_808;
        uVar80 = 1;
        if (local_808->bOutputSplineIndices != false) {
          uVar80 = 0x81;
        }
        (**(code **)(*(longlong *)pUVar28 + 0x498))(pUVar28,uVar80);
        local_7e8 = (UPCGSplineData *)0x0;
        local_870 = (FPCGMetadataAttribute<int> *)0x0;
        if (pUVar25->bOutputSplineIndices != false) {
          FVar6.ComparisonIndex.Value =
               *(uint *)&(pUVar25->OriginatingSplineIndexAttribute).field_0x14;
          FVar6.Number = *(uint *)&(pUVar25->OriginatingSplineIndexAttribute).field_0x18;
          local_620 = &local_738;
          local_628 = pUVar28;
          local_7e8 = (UPCGSplineData *)
                      `FPCGSplineIntersectionElement::ExecuteInternal'::__l56::<lambda_2>::
                      operator()(&local_628,FVar6);
          FVar7.ComparisonIndex.Value =
               *(uint *)&(pUVar25->IntersectingSplineIndexAttribute).field_0x14;
          FVar7.Number = *(uint *)&(pUVar25->IntersectingSplineIndexAttribute).field_0x18;
          local_870 = `FPCGSplineIntersectionElement::ExecuteInternal'::__l56::<lambda_2>::
                      operator()(&local_628,FVar7);
        }
        FPCGPointValueRanges::FPCGPointValueRanges(&local_268,(UPCGBasePointData *)pUVar28,false);
        pUVar28 = local_7e8;
        if (0 < local_728.ArrayNum) {
          local_800 = 0;
          do {
            lVar33 = local_800;
            uVar38 = FVar59._0_4_;
            uVar37 = ~uVar38 >> 0x1f;
            uVar32 = uVar58;
            if ((int)uVar38 < local_728.ArrayNum) {
              uVar32 = uVar37;
            }
            if ((uVar32 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              uVar20 = (*pcVar10)();
              return (bool)uVar20;
            }
            FVar41.Data = local_728.AllocatorInstance.Data;
            dVar86 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
            dVar90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_798 = (FPCGTaggedData *)local_728.AllocatorInstance.Data;
            uVar32 = uVar58;
            if ((int)uVar38 < local_268.TransformRange.NumElements) {
              uVar32 = uVar37;
            }
            dVar73 = *(double *)(local_728.AllocatorInstance.Data + lVar33 + 0x20);
            dVar63 = *(double *)(local_728.AllocatorInstance.Data + lVar33 + 0x30);
            dVar92 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
            dVar93 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
            dVar72 = *(double *)(local_728.AllocatorInstance.Data + lVar33 + 0x28);
            uStack_4c0 = 0;
            dVar94 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
            dVar98 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
            fVar61 = GlobalVectorConstants::Float1110.m128_f32[2];
            uVar80 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            uVar85 = (undefined4)
                     ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            local_4a8._8_4_ = uVar80;
            local_4a8._0_8_ = (double)fVar61;
            local_4a8._12_4_ = uVar85;
            local_4f8 = dVar86;
            dStack_4f0 = dVar90;
            local_4e8 = dVar92;
            dStack_4e0 = dVar93;
            local_4d8 = dVar73;
            dStack_4d0 = dVar72;
            local_4c8 = dVar63;
            local_4b8 = dVar94;
            dStack_4b0 = dVar98;
            if ((uVar32 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              uVar20 = (*pcVar10)();
              return (bool)uVar20;
            }
            if (uVar38 == (int)uVar38 % local_268.TransformRange.ElementView.NumElements) {
              pTVar36 = (TTransform<double> *)
                        ((longlong)
                         ((local_268.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                         m128d_f64 +
                        (longlong)((int)uVar38 % local_268.TransformRange.ElementView.NumElements) *
                        (longlong)local_268.TransformRange.ElementView.BytesBetweenElements);
            }
            else {
              pTVar36 = &local_268.TransformRange.StubValue;
            }
            (pTVar36->Rotation).XY.m128d_f64[0] = dVar86;
            (pTVar36->Rotation).XY.m128d_f64[1] = dVar90;
            (pTVar36->Rotation).ZW.m128d_f64[0] = dVar92;
            (pTVar36->Rotation).ZW.m128d_f64[1] = dVar93;
            (pTVar36->Translation).XY.m128d_f64[0] = dVar73;
            (pTVar36->Translation).XY.m128d_f64[1] = dVar72;
            (pTVar36->Translation).ZW.m128d_f64[0] = dVar63;
            (pTVar36->Translation).ZW.m128d_f64[1] = 0.0;
            (pTVar36->Scale3D).XY.m128d_f64[0] = dVar94;
            (pTVar36->Scale3D).XY.m128d_f64[1] = dVar98;
            auVar12._8_4_ = uVar80;
            auVar12._0_8_ = (double)fVar61;
            auVar12._12_4_ = uVar85;
            *(undefined1 (*) [16])(pTVar36->Scale3D).ZW.m128d_f64 = auVar12;
            if ((pUVar28 != (UPCGSplineData *)0x0) ||
               (local_870 != (FPCGMetadataAttribute<int> *)0x0)) {
              uVar32 = uVar58;
              if ((int)uVar38 < local_268.MetadataEntryRange.NumElements) {
                uVar32 = uVar37;
              }
              if ((uVar32 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar19)) {
                pcVar10 = (code *)swi(3);
                uVar20 = (*pcVar10)();
                return (bool)uVar20;
              }
              if (uVar38 == (int)uVar38 % local_268.MetadataEntryRange.ElementView.NumElements) {
                plVar53 = (long64 *)
                          ((longlong)
                           ((int)uVar38 % local_268.MetadataEntryRange.ElementView.NumElements) *
                           (longlong)local_268.MetadataEntryRange.ElementView.BytesBetweenElements +
                          (longlong)local_268.MetadataEntryRange.ElementView.FirstElementPtr);
              }
              else {
                plVar53 = &local_268.MetadataEntryRange.StubValue;
              }
              UPCGMetadata::InitializeOnSet
                        (*(UPCGMetadata **)&local_7a0->field_0x38,plVar53,-1,(UPCGMetadata *)0x0,-1,
                         (UPCGMetadata *)0x0);
              if (pUVar28 != (UPCGSplineData *)0x0) {
                local_7d0.Handle = (UObject *)*plVar53;
                puVar57 = (undefined4 *)(*(longlong *)(FVar41.Data + lVar33 + 8) + 8);
                if (((FObjectPtr_u_0 *)local_7d0.Handle == (FObjectPtr_u_0 *)0xffffffffffffffff) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ItemKey != PCGInvalidEntryKey",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                        ,0x24b,L""), bVar19)) {
                  pcVar10 = (code *)swi(3);
                  uVar20 = (*pcVar10)();
                  return (bool)uVar20;
                }
                AcquireSRWLockExclusive((PSRWLOCK)&pUVar28->field_0x80);
                puVar2 = &pUVar28->field_0x88;
                if (((*(undefined4 **)puVar2 <= puVar57) &&
                    (puVar57 < *(undefined4 **)puVar2 + *(int *)&pUVar28->field_0x94)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar10 = (code *)swi(3);
                  uVar20 = (*pcVar10)();
                  return (bool)uVar20;
                }
                iVar22 = *(int *)&pUVar28->field_0x90;
                if (iVar22 == *(int *)&pUVar28->field_0x94) {
                  iVar22 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)puVar2,(int *)&pUVar28->field_0x94)
                  ;
                }
                *(int *)&pUVar28->field_0x90 = iVar22 + 1;
                *(undefined4 *)(*(longlong *)puVar2 + (longlong)iVar22 * 4) = *puVar57;
                iVar5 = *(int *)&pUVar28->field_0x9c;
                ReleaseSRWLockExclusive((PSRWLOCK)&pUVar28->field_0x80);
                FPCGMetadataAttributeBase::SetValueFromValueKey
                          ((FPCGMetadataAttributeBase *)pUVar28,(long64)local_7d0,iVar5 + iVar22,
                           false);
                lVar33 = local_800;
                FVar41.Data = (FScriptContainerElement *)local_798;
              }
              if (local_870 != (FPCGMetadataAttribute<int> *)0x0) {
                local_7d0.Handle = (UObject *)*plVar53;
                pFVar56 = (FScriptContainerElement *)
                          (*(longlong *)
                            ((longlong)(&(((FPCGTaggedData *)FVar41.Data)->Tags).Hash + -3) + lVar33
                            ) + 8);
                if (((FObjectPtr_u_0 *)local_7d0.Handle == (FObjectPtr_u_0 *)0xffffffffffffffff) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ItemKey != PCGInvalidEntryKey",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                        ,0x24b,L""), bVar19)) {
                  pcVar10 = (code *)swi(3);
                  uVar20 = (*pcVar10)();
                  return (bool)uVar20;
                }
                AcquireSRWLockExclusive((PSRWLOCK)&local_870->ValueLock);
                pTVar3 = &local_870->Values;
                pFVar47 = (pTVar3->AllocatorInstance).Data;
                if (((pFVar47 <= pFVar56) &&
                    (pFVar56 < pFVar47 + (longlong)(local_870->Values).ArrayMax * 4)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar10 = (code *)swi(3);
                  uVar20 = (*pcVar10)();
                  return (bool)uVar20;
                }
                iVar22 = (local_870->Values).ArrayNum;
                piVar1 = &(local_870->Values).ArrayMax;
                if (iVar22 == *piVar1) {
                  iVar22 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar3->AllocatorInstance,piVar1);
                }
                pFVar47 = (pTVar3->AllocatorInstance).Data;
                (local_870->Values).ArrayNum = iVar22 + 1;
                *(undefined4 *)(pFVar47 + (longlong)iVar22 * 4) = *(undefined4 *)pFVar56;
                iVar5 = local_870->ValueKeyOffset;
                ReleaseSRWLockExclusive((PSRWLOCK)&local_870->ValueLock);
                FPCGMetadataAttributeBase::SetValueFromValueKey
                          ((FPCGMetadataAttributeBase *)local_870,(long64)local_7d0,iVar5 + iVar22,
                           false);
                lVar33 = local_800;
              }
            }
            local_800 = lVar33 + 0x70;
            FVar59._0_4_ = uVar38 + 1;
            FVar59._4_4_ = 0;
          } while ((int)FVar59._0_4_ < local_728.ArrayNum);
        }
        if ((FPCGTaggedData *)local_728.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_728.AllocatorInstance.Data);
        }
      }
      else if (pUVar25->Output == OriginalSplinesWithIntersections) {
        uVar34 = (ulonglong)local_810;
        local_7a8._0_4_ = local_810;
        local_758.Handle = (UObject *)(local_818.Data + uVar34 * 0xb0);
        FVar41.Data = local_818.Data;
        while( true ) {
          FVar51 = local_758;
          if (local_810 != (int)uVar34) {
            local_837 = 0;
            `TCheckedPointerIterator<PCGSplineIntersection::InputData,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_837);
          }
          if ((UObject *)FVar41.Data == FVar51.Handle) break;
          pUVar28 = *(UPCGSplineData **)FVar41.Data;
          local_7a0 = pUVar28;
          PCGSplineIntersection::CollapseColocatedIntersections
                    (&local_770,&local_7c0,dVar90,pUVar28);
          local_660 = pUVar28;
          AlgoImpl::
          IntroSortInternal<PCGSplineIntersection::IntersectionPoint,int,FIdentityFunctor,TDereferenceWrapper<PCGSplineIntersection::IntersectionPoint,_FPCGSplineIntersectionElement::ExecuteInternal_::__l75::<lambda_3>_>_>
                    ((IntersectionPoint *)local_770.AllocatorInstance.Data,local_770.ArrayNum,
                     (FIdentityFunctor)local_877,(<lambda_3> *)&local_660);
          uVar32 = *(uint *)((longlong)FVar41.Data + 8);
          uVar37 = uVar58;
          if ((int)uVar32 < local_790.ArrayNum) {
            uVar37 = ~uVar32 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            uVar20 = (*pcVar10)();
            return (bool)uVar20;
          }
          pFVar26 = (FPCGTaggedData *)
                    (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)&pFVar56->field_0x0)->
                    AllocatorInstance).Data;
          pFVar44 = (FPCGTaggedData *)
                    (local_790.AllocatorInstance.Data + (longlong)(int)uVar32 * 0x78);
          if (((pFVar26 <= pFVar44) && (pFVar44 < pFVar26 + *(int *)(pFVar56 + 0xc))) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar10 = (code *)swi(3);
            uVar20 = (*pcVar10)();
            return (bool)uVar20;
          }
          iVar22 = *(int *)(pFVar56 + 8);
          if (iVar22 == *(int *)(pFVar56 + 0xc)) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)pFVar56,(int *)(pFVar56 + 0xc));
          }
          *(int *)(pFVar56 + 8) = iVar22 + 1;
          local_798 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                   &pFVar56->field_0x0)->AllocatorInstance).Data +
                                 (longlong)iVar22 * 0x78),pFVar44);
          if (local_770.ArrayNum != 0) {
            bVar19 = IsInGameThread();
            pFVar17 = local_740;
            if (bVar19) {
              pUVar29 = GetTransientPackageAsObject();
              pUVar28 = NewObject<UPCGSplineData>(pUVar29);
              local_7e8 = pUVar28;
            }
            else {
              if (((local_740->AsyncState).bIsRunningOnMainThread != false) &&
                 (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<4331830188552749348>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                      ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar19)) {
                pcVar10 = (code *)swi(3);
                uVar20 = (*pcVar10)();
                return (bool)uVar20;
              }
              FGCScopeGuard::FGCScopeGuard(&local_836);
              pUVar29 = GetTransientPackageAsObject();
              pUVar28 = NewObject<UPCGSplineData>(pUVar29);
              local_7e8 = pUVar28;
              FGCScopeGuard::~FGCScopeGuard(&local_836);
              if ((pUVar28 == (UPCGSplineData *)0x0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                      ,0x12a,L""), bVar19)) {
                pcVar10 = (code *)swi(3);
                uVar20 = (*pcVar10)();
                return (bool)uVar20;
              }
              local_658._0_8_ = pUVar28;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar28 != (UPCGSplineData *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar28);
              }
              TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              ::Emplace<TObjectPtr<UObject>_>(&pFVar17->AsyncObjects,&local_5e8,(bool *)&local_658);
            }
            UPCGSpatialData::InitializeFromData
                      ((UPCGSpatialData *)pUVar28,*(UPCGSpatialData **)FVar41.Data,
                       (UPCGMetadata *)0x0,true,true);
            local_870 = (FPCGMetadataAttribute<int> *)0x0;
            if (local_808->bOutputSplineIndices != false) {
              FVar8.ComparisonIndex.Value =
                   *(uint *)&(local_808->IntersectingSplineIndexAttribute).field_0x14;
              FVar8.Number = *(uint *)&(local_808->IntersectingSplineIndexAttribute).field_0x18;
              pUVar30 = (UPCGMetadata *)(**(code **)(*(longlong *)pUVar28 + 0x328))(pUVar28);
              FVar16 = PCGMetadataDomainID::Default;
              local_778[0] = -1;
              local_590._0_1_ = PCGMetadataDomainID::Default.Flag;
              local_590._1_3_ = PCGMetadataDomainID::Default._1_3_;
              local_590._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
              local_590._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
              local_590._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
              PCGMetadataDomainID::Default = FVar16;
              local_598 = FVar8;
              this_04 = UPCGMetadata::FindOrCreateMetadataDomain
                                  (pUVar30,(FPCGMetadataDomainID *)&local_590._s_0);
              if (this_04 == (FPCGMetadataDomain *)0x0) {
                local_870 = (FPCGMetadataAttribute<int> *)0x0;
              }
              else {
                local_870 = FPCGMetadataDomain::FindOrCreateAttribute<int>
                                      (this_04,local_598,local_778,false,true,true);
                if (local_870 != (FPCGMetadataAttribute<int> *)0x0) goto LAB_149c6a7a0;
              }
              `FPCGSplineIntersectionElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                        (&local_738,FVar8);
            }
LAB_149c6a7a0:
            UPCGSplineData::GetSplinePoints(*(UPCGSplineData **)FVar41.Data,&local_830);
            UPCGSplineData::GetMetadataEntryKeysForSplinePoints
                      (*(UPCGSplineData **)FVar41.Data,&local_858);
            if (((local_830.ArrayNum != local_858.ArrayNum) && (local_858.ArrayNum != 0)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SplinePoints.Num() == SplinePointsEntryKeys.Num() || SplinePointsEntryKeys.IsEmpty()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineIntersection.cpp"
                                    ,0x1c6,L""), bVar19)) {
              pcVar10 = (code *)swi(3);
              uVar20 = (*pcVar10)();
              return (bool)uVar20;
            }
            iVar22 = local_830.ArrayNum;
            local_877 = (<lambda_1>)(local_858.ArrayNum != 0);
            if ((local_870 != (FPCGMetadataAttribute<int> *)0x0) && (!(bool)local_877)) {
              if (local_830.ArrayNum < 1) {
                if (local_830.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_830.ArrayNum);
                }
                if (local_830.ArrayNum < 0) {
                  iVar5 = -local_830.ArrayNum;
                  if ((iVar5 < 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    uVar20 = (*pcVar10)();
                    return (bool)uVar20;
                  }
                  if (iVar5 != 0) {
                    if (local_858.ArrayNum != 0) {
                      memmove(local_858.AllocatorInstance.Data + (longlong)iVar22 * 8,
                              local_858.AllocatorInstance.Data + (longlong)iVar22 * 8 +
                              (longlong)iVar5 * 8,(longlong)local_858.ArrayNum << 3);
                    }
                    local_858.ArrayNum = local_858.ArrayNum + iVar22;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,&local_858.AllocatorInstance,local_858.ArrayNum,
                               &local_858.ArrayMax);
                  }
                }
              }
              else {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,local_830.ArrayNum,&local_858.AllocatorInstance,&local_858.ArrayNum,
                           &local_858.ArrayMax);
              }
              iVar22 = local_858.ArrayNum;
              pFVar56 = local_858.AllocatorInstance.Data + (longlong)local_858.ArrayNum * 8;
              FVar45.Data = local_858.AllocatorInstance.Data;
              while( true ) {
                if (local_858.ArrayNum != iVar22) {
                  local_835 = 0;
                  `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (&local_835);
                }
                if (FVar45.Data == pFVar56) break;
                *(long64 *)FVar45.Data = -1;
                FVar45.Data = FVar45.Data + 8;
              }
            }
            pUVar28 = local_7e8;
            uVar34 = (ulonglong)local_770.ArrayNum;
            fVar61 = GlobalVectorConstants::SmallNumber.m128_f32[0];
            fVar62 = GlobalVectorConstants::SmallNumber.m128_f32[1];
            fVar99 = GlobalVectorConstants::SmallNumber.m128_f32[2];
            fVar100 = GlobalVectorConstants::SmallNumber.m128_f32[3];
            local_7b0 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                        CONCAT44(local_7b0._4_4_,local_770.ArrayNum);
            pFVar56 = local_770.AllocatorInstance.Data + 0x18;
            local_7d0.Handle = (UObject *)(local_770.AllocatorInstance.Data + uVar34 * 0x70);
            while( true ) {
              FVar51 = local_7d0;
              if (local_770.ArrayNum != (int)uVar34) {
                local_834[0] = 0;
                `TCheckedPointerIterator<PCGSplineIntersection::IntersectionPoint,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_834);
                fVar61 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                fVar62 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                fVar99 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                fVar100 = GlobalVectorConstants::SmallNumber.m128_f32[3];
              }
              pUVar9 = local_7a0;
              pFVar52 = (FObjectPtr_u_0 *)(pFVar56 + -0x18);
              if (pFVar52 == (FObjectPtr_u_0 *)FVar51.Handle) break;
              if (local_7a0 == (UPCGSplineData *)pFVar52->Handle) {
LAB_149c6a9db:
                pFVar47 = pFVar56 + 0x50;
              }
              else {
                if (local_7a0 != *(UPCGSplineData **)(pFVar56 + -8)) {
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("In == A || In == B",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineIntersection.cpp"
                                      ,0x5a,L"");
                  if (bVar19) {
                    pcVar10 = (code *)swi(3);
                    uVar20 = (*pcVar10)();
                    return (bool)uVar20;
                  }
                  fVar61 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                  fVar62 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                  fVar99 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                  fVar100 = GlobalVectorConstants::SmallNumber.m128_f32[3];
                }
                if (pUVar9 == (UPCGSplineData *)pFVar52->Handle) goto LAB_149c6a9db;
                pFVar47 = pFVar56 + 0x54;
              }
              fVar4 = *(float *)pFVar47;
              pUVar29 = *(UObject **)FVar41.Data;
              local_860 = CONCAT44(local_860._4_4_,fVar4);
              local_458 = *(double *)&pUVar29[7].field_0x18;
              dStack_450 = *(double *)&pUVar29[7].field_0x20;
              local_448 = *(double *)(pUVar29 + 8);
              uStack_440 = *(undefined8 *)&pUVar29[8].field_0x8;
              local_478 = *(double *)&pUVar29[6].field_0x20;
              dStack_470 = *(double *)(pUVar29 + 7);
              local_468 = *(double *)&pUVar29[7].field_0x8;
              dStack_460 = *(double *)&pUVar29[7].field_0x10;
              local_438 = *(undefined1 (*) [16])&pUVar29[8].field_0x10;
              local_428 = *(undefined1 (*) [16])&pUVar29[8].field_0x20;
              dVar72 = *(double *)(pFVar56 + 8) - local_458;
              dVar92 = *(double *)(pFVar56 + 0x10) - dStack_450;
              uVar80 = (undefined4)((ulonglong)dVar92 >> 0x20);
              auVar95._8_4_ = SUB84(dVar92,0);
              auVar95._0_8_ = dVar72;
              auVar95._12_4_ = uVar80;
              dVar93 = *(double *)(pFVar56 + 0x18) - local_448;
              auVar69._8_4_ = SUB84(dVar92,0);
              auVar69._0_8_ = dVar72;
              auVar69._12_4_ = uVar80;
              auVar87._0_8_ =
                   local_468 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              auVar87._8_8_ =
                   dStack_460 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              auVar13._8_8_ = 0;
              auVar13._0_8_ = dVar93;
              auVar66 = blendpd(auVar69,auVar13,2);
              dVar86 = local_478 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar90 = dStack_470 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              uVar80 = (undefined4)((ulonglong)dVar90 >> 0x20);
              auVar75._8_4_ = SUB84(dVar90,0);
              auVar75._0_8_ = dVar86;
              auVar75._12_4_ = uVar80;
              dVar94 = auVar75._8_8_;
              auVar76._8_4_ = SUB84(dVar90,0);
              auVar76._0_8_ = dVar86;
              auVar76._12_4_ = uVar80;
              auVar64 = blendpd(auVar76,auVar87,2);
              auVar67._8_4_ = SUB84(auVar87._0_8_,0);
              auVar67._0_8_ = dVar94;
              auVar67._12_4_ = (int)((ulonglong)auVar87._0_8_ >> 0x20);
              auVar96._0_8_ = auVar95._8_8_ * dVar86 - dVar94 * dVar72;
              auVar96._8_8_ = dVar93 * dVar90 - auVar67._8_8_ * dVar92;
              auVar70._0_8_ = auVar66._0_8_ * auVar87._0_8_ - auVar64._0_8_ * dVar93;
              auVar70._8_8_ = auVar66._8_8_ * auVar87._8_8_ - auVar64._8_8_ * 0.0;
              auVar66 = blendpd(auVar96,auVar70,2);
              dVar73 = auVar96._8_8_ + auVar96._8_8_;
              dVar63 = auVar70._0_8_ + auVar70._0_8_;
              uVar80 = (undefined4)((ulonglong)dVar63 >> 0x20);
              auVar97._0_8_ = auVar66._0_8_ + auVar66._0_8_;
              auVar97._8_8_ = auVar66._8_8_ + auVar66._8_8_;
              auVar81._8_4_ = SUB84(dVar63,0);
              auVar81._0_8_ = dVar73;
              auVar81._12_4_ = uVar80;
              auVar83._8_4_ = SUB84(dVar63,0);
              auVar83._0_8_ = dVar73;
              auVar83._12_4_ = uVar80;
              auVar66 = blendpd(auVar81,auVar97,2);
              auVar82._0_8_ = auVar66._0_8_ * auVar87._0_8_ - auVar64._0_8_ * auVar97._0_8_;
              auVar82._8_8_ = auVar66._8_8_ * auVar87._8_8_ - auVar64._8_8_ * auVar97._8_8_;
              auVar77._0_8_ =
                   (double)CONCAT44(local_428._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    local_428._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
              auVar77._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_ & _UNK_15061cc88
              ;
              auVar77._12_4_ =
                   GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
              auVar88._0_8_ =
                   (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_438._4_4_,
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_438._0_4_);
              auVar88._8_4_ = _UNK_15061cc88 & local_438._8_4_;
              auVar88._12_4_ = _UNK_15061cc8c & local_438._12_4_;
              lVar33 = -(ulonglong)(auVar88._8_8_ <= (double)fVar62);
              auVar66 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              local_438);
              lVar39 = -(ulonglong)(auVar77._8_8_ <= (double)fVar100);
              auVar89._0_8_ =
                   (double)CONCAT44(~(uint)(-(ulonglong)(auVar88._0_8_ <= (double)fVar61) >> 0x20) &
                                    auVar66._4_4_,
                                    ~(uint)-(ulonglong)(auVar88._0_8_ <= (double)fVar61) &
                                    auVar66._0_4_);
              auVar89._8_4_ = ~(uint)lVar33 & auVar66._8_4_;
              auVar89._12_4_ = ~(uint)((ulonglong)lVar33 >> 0x20) & auVar66._12_4_;
              auVar71._8_4_ = SUB84(auVar87._8_8_,0);
              auVar71._0_8_ = auVar87._8_8_;
              auVar71._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
              auVar84._0_8_ = auVar83._8_8_ * dVar86 - dVar94 * dVar73;
              auVar84._8_8_ = auVar97._0_8_ * dVar90 - auVar87._0_8_ * dVar63;
              auVar68._8_4_ = SUB84(auVar84._8_8_,0);
              auVar68._0_8_ = auVar84._0_8_;
              auVar68._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
              local_718.m128d_f64[0] =
                   auVar89._0_8_ * (auVar87._8_8_ * dVar73 + dVar72 + auVar68._8_8_);
              local_718.m128d_f64[1] =
                   auVar89._8_8_ * (auVar71._8_8_ * dVar63 + dVar92 + auVar82._0_8_);
              local_874 = local_830.ArrayNum;
              auVar11._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
              auVar11._0_8_ = local_428._0_8_;
              auVar11._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
              auVar66 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar11);
              auVar64 = blendpd(auVar84,auVar82,2);
              auVar78._0_8_ =
                   (double)CONCAT44(~(uint)(-(ulonglong)(auVar77._0_8_ <= (double)fVar99) >> 0x20) &
                                    auVar66._4_4_,
                                    ~(uint)-(ulonglong)(auVar77._0_8_ <= (double)fVar99) &
                                    auVar66._0_4_);
              auVar78._8_4_ = ~(uint)lVar39 & auVar66._8_4_;
              auVar78._12_4_ = ~(uint)((ulonglong)lVar39 >> 0x20) & auVar66._12_4_;
              local_708 = auVar78._0_8_ * (auVar87._8_8_ * auVar97._0_8_ + dVar93 + auVar64._0_8_);
              FVar46.Handle = FVar59.Handle;
              FVar51.Handle = FVar59.Handle;
              if (0 < local_830.ArrayNum) {
                do {
                  uVar37 = FVar46._0_4_;
                  uVar32 = uVar58;
                  if ((int)uVar37 < local_830.ArrayNum) {
                    uVar32 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar32 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    uVar20 = (*pcVar10)();
                    return (bool)uVar20;
                  }
                  if (fVar4 < *(float *)(local_830.AllocatorInstance.Data + (longlong)FVar51.Handle)
                     ) break;
                  FVar46._0_4_ = uVar37 + 1;
                  FVar46._4_4_ = 0;
                  FVar51 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(FVar51.Handle + 3) + 2);
                  uVar37 = local_874;
                } while ((int)FVar46._0_4_ < local_830.ArrayNum);
                local_874 = uVar37;
                fVar61 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                fVar62 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                fVar99 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                fVar100 = GlobalVectorConstants::SmallNumber.m128_f32[3];
              }
              _Var18.m128d_f64 = local_718.m128d_f64;
              uVar32 = local_874 - 1;
              bVar19 = local_874 == local_830.ArrayNum;
              local_7e0 = ~uVar32 >> 0x1f;
              uVar37 = uVar58;
              if ((int)uVar32 < local_830.ArrayNum) {
                uVar37 = local_7e0;
              }
              if (uVar37 == 0) {
                bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar21) {
                  pcVar10 = (code *)swi(3);
                  uVar20 = (*pcVar10)();
                  return (bool)uVar20;
                }
                fVar61 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                fVar62 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                fVar99 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                fVar100 = GlobalVectorConstants::SmallNumber.m128_f32[3];
              }
              uVar49 = auVar78._8_8_;
              local_800 = (longlong)(int)uVar32;
              pFVar47 = local_830.AllocatorInstance.Data + local_800 * 0x88;
              FVar54._4_4_ = 0;
              FVar54._0_4_ = local_874;
              if (bVar19) {
                FVar54.Handle = FVar59.Handle;
              }
              uVar38 = FVar54._0_4_;
              local_7c8 = CONCAT44(local_7c8._4_4_,uVar38);
              uVar32 = ~uVar38 >> 0x1f;
              local_860 = CONCAT44(local_860._4_4_,uVar32);
              uVar37 = uVar58;
              if ((int)uVar38 < local_830.ArrayNum) {
                uVar37 = uVar32;
              }
              if (uVar37 == 0) {
                bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar49 = auVar78._8_8_;
                if (bVar21) {
                  pcVar10 = (code *)swi(3);
                  uVar20 = (*pcVar10)();
                  return (bool)uVar20;
                }
                fVar61 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                fVar62 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                fVar99 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                fVar100 = GlobalVectorConstants::SmallNumber.m128_f32[3];
                uVar32 = (uint)local_860;
              }
              dVar90 = local_730;
              uVar34 = (ulonglong)(int)uVar38;
              pFVar55 = local_830.AllocatorInstance.Data + uVar34 * 0x88;
              if (bVar19) {
                fVar91 = (float)-((int)ROUND(__real_bf000d1b -
                                             (*(float *)pFVar47 + *(float *)pFVar47)) >> 1);
              }
              else {
                fVar91 = *(float *)pFVar55;
              }
              auVar14._4_8_ = uVar49;
              auVar14._0_4_ = _Var18.m128d_f64[0]._4_4_;
              auVar79._0_8_ = auVar14._0_8_ << 0x20;
              auVar79._8_4_ = _Var18.m128d_f64[1]._0_4_;
              auVar79._12_4_ = _Var18.m128d_f64[1]._4_4_;
              local_860 = uVar34;
              if ((__real_38d1b717 <
                   (float)((uint)(*(float *)pFVar47 - fVar4) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                 (dVar86 = *(double *)(pFVar47 + 8) - _Var18.m128d_f64[0],
                 dVar73 = *(double *)(pFVar47 + 0x10) - auVar79._8_8_,
                 local_730 <
                 dVar73 * dVar73 + dVar86 * dVar86 +
                 (*(double *)(pFVar47 + 0x18) - local_708) *
                 (*(double *)(pFVar47 + 0x18) - local_708))) {
                if (((float)((uint)(fVar91 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                     __real_38d1b717) &&
                   (dVar86 = *(double *)(pFVar55 + 8) - _Var18.m128d_f64[0],
                   dVar73 = *(double *)(pFVar55 + 0x10) - auVar79._8_8_,
                   dVar73 * dVar73 + dVar86 * dVar86 +
                   (*(double *)(pFVar55 + 0x18) - local_708) *
                   (*(double *)(pFVar55 + 0x18) - local_708) <= local_730)) {
                  uVar37 = uVar58;
                  if ((int)local_7c8 < local_858.ArrayNum) {
                    uVar37 = uVar32;
                  }
                  if (uVar37 == 0) {
                    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar19) {
                      pcVar10 = (code *)swi(3);
                      uVar20 = (*pcVar10)();
                      return (bool)uVar20;
                    }
                    fVar61 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                    fVar62 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                    fVar99 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                    fVar100 = GlobalVectorConstants::SmallNumber.m128_f32[3];
                  }
                  pFVar47 = local_858.AllocatorInstance.Data + uVar34 * 8;
                  goto LAB_149c6ae84;
                }
                local_6d8._s_0.X = 0.0;
                local_6d8._s_0.Y = 0.0;
                auStack_6c0._8_8_ = 0.0;
                auStack_6c0._16_8_ = 0.0;
                auStack_6a0._8_8_ = ___xmm_3ff00000000000000000000000000000;
                auStack_6a0._16_8_ = _UNK_15061cbc8;
                local_688._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
                local_688._8_8_ = _UNK_150689688;
                dStack_6e0 = local_708;
                local_6d8._s_0.Z = 0.0;
                auStack_6c0._0_8_ = 0.0;
                auStack_6c0._24_8_ = 0.0;
                auStack_6a0._0_8_ = 0.0;
                local_688[0x10] = 1;
                local_6f8._0_4_ = fVar4;
                local_6f8._8_16_ = (undefined1  [16])_Var18.m128d_f64;
                pTVar27 = FPCGSplineStruct::GetTangentAtSplineInputKey
                                    ((FPCGSplineStruct *)&(*(UObject **)FVar41.Data)[6].field_0x20,
                                     &local_400,fVar4,Local);
                local_6d8._s_0.X = (pTVar27->field0_0x0)._s_0.X;
                local_6d8._s_0.Y = (pTVar27->field0_0x0)._s_0.Y;
                local_6d8._s_0.Z = (pTVar27->field0_0x0)._s_0.Z;
                auStack_6c0._0_8_ = local_6d8._s_0.X;
                auStack_6c0._8_8_ = local_6d8._s_0.Y;
                auStack_6c0._16_8_ = local_6d8._s_0.Z;
                this_05 = FPCGSplineStruct::GetQuaternionAtSplineInputKey
                                    ((FPCGSplineStruct *)&(*(UObject **)FVar41.Data)[6].field_0x20,
                                     &local_398,fVar4,Local);
                pTVar31 = UE::Math::TQuat<double>::Rotator(this_05,&local_3e8);
                auStack_6c0._24_8_ = pTVar31->Pitch;
                auStack_6a0._0_8_ = pTVar31->Yaw;
                auStack_6a0._8_8_ = pTVar31->Roll;
                pTVar27 = FPCGSplineStruct::GetScaleAtSplineInputKey
                                    ((FPCGSplineStruct *)&(*(UObject **)FVar41.Data)[6].field_0x20,
                                     &local_3d0,fVar4);
                dVar73 = (double)(fVar91 - fVar4);
                auStack_6a0._16_8_ = (pTVar27->field0_0x0)._s_0.X;
                local_688._0_8_ = (pTVar27->field0_0x0)._s_0.Y;
                local_688._8_8_ = (pTVar27->field0_0x0)._s_0.Z;
                local_688[0x10] = 4;
                dVar86 = (double)(fVar91 - *(float *)pFVar47);
                if ((double)(fVar91 - *(float *)pFVar47) <= __real_3f1a36e2eb1c432d) {
                  dVar86 = __real_3f1a36e2eb1c432d;
                }
                dVar63 = (double)(fVar4 - *(float *)pFVar47) * (__real_3ff0000000000000 / dVar86);
                dVar86 = (__real_3ff0000000000000 / dVar86) * dVar73;
                *(double *)(pFVar47 + 0x38) = *(double *)(pFVar47 + 0x38) * dVar63;
                *(double *)(pFVar47 + 0x40) = *(double *)(pFVar47 + 0x40) * dVar63;
                *(double *)(pFVar47 + 0x48) = dVar63 * *(double *)(pFVar47 + 0x48);
                *(double *)(pFVar55 + 0x20) = *(double *)(pFVar55 + 0x20) * dVar86;
                *(double *)(pFVar55 + 0x28) = *(double *)(pFVar55 + 0x28) * dVar86;
                *(double *)(pFVar55 + 0x30) = dVar86 * *(double *)(pFVar55 + 0x30);
                dVar86 = (double)(fVar4 - *(float *)pFVar47);
                local_6d8._s_0.X = local_6d8._s_0.X * dVar86;
                local_6d8._s_0.Y = local_6d8._s_0.Y * dVar86;
                auStack_6c0._0_8_ = (double)auStack_6c0._0_8_ * dVar73;
                auStack_6c0._8_8_ = (double)auStack_6c0._8_8_ * dVar73;
                local_6d8._s_0.Z = local_6d8._s_0.Z * dVar86;
                auStack_6c0._16_8_ = (double)auStack_6c0._16_8_ * dVar73;
                if (((local_830.AllocatorInstance.Data <= &local_6f8) &&
                    (&local_6f8 <
                     (TVector<double>_u_0 *)
                     (local_830.AllocatorInstance.Data + (longlong)local_830.ArrayMax * 0x88))) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar10 = (code *)swi(3);
                  uVar20 = (*pcVar10)();
                  return (bool)uVar20;
                }
                if (local_830.ArrayNum == local_830.ArrayMax) {
                  local_830.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x888,&local_830.AllocatorInstance,&local_830.ArrayMax);
                }
                lVar39 = (longlong)(int)local_874;
                iVar22 = local_830.ArrayNum - local_874;
                lVar33 = lVar39 * 0x88;
                local_830.ArrayNum = local_830.ArrayNum + 1;
                memmove(local_830.AllocatorInstance.Data + lVar33 + 0x88,
                        local_830.AllocatorInstance.Data + lVar33,(longlong)iVar22 * 0x88);
                *(ulonglong *)(local_830.AllocatorInstance.Data + lVar33) =
                     CONCAT44(local_6f8._4_4_,local_6f8._0_4_);
                *(double *)(local_830.AllocatorInstance.Data + lVar33 + 8) = local_6f8._s_0.Y;
                *(double *)(local_830.AllocatorInstance.Data + lVar33 + 0x10) = local_6f8._s_0.Z;
                *(double *)(local_830.AllocatorInstance.Data + lVar33 + 0x10 + 8) = dStack_6e0;
                *(double *)(local_830.AllocatorInstance.Data + lVar33 + 0x20) = local_6d8._s_0.X;
                *(double *)(local_830.AllocatorInstance.Data + lVar33 + 0x20 + 8) = local_6d8._s_0.Y
                ;
                *(double *)(local_830.AllocatorInstance.Data + lVar33 + 0x30) = local_6d8._s_0.Z;
                *(undefined8 *)(local_830.AllocatorInstance.Data + lVar33 + 0x30 + 8) =
                     auStack_6c0._0_8_;
                *(undefined8 *)(local_830.AllocatorInstance.Data + lVar33 + 0x40) =
                     auStack_6c0._8_8_;
                *(undefined8 *)(local_830.AllocatorInstance.Data + lVar33 + 0x40 + 8) =
                     auStack_6c0._16_8_;
                *(undefined8 *)(local_830.AllocatorInstance.Data + lVar33 + 0x50) =
                     auStack_6c0._24_8_;
                *(undefined8 *)(local_830.AllocatorInstance.Data + lVar33 + 0x50 + 8) =
                     auStack_6a0._0_8_;
                *(undefined8 *)(local_830.AllocatorInstance.Data + lVar33 + 0x60) =
                     auStack_6a0._8_8_;
                *(undefined8 *)(local_830.AllocatorInstance.Data + lVar33 + 0x60 + 8) =
                     auStack_6a0._16_8_;
                *(undefined8 *)(local_830.AllocatorInstance.Data + lVar33 + 0x70) = local_688._0_8_;
                *(undefined8 *)(local_830.AllocatorInstance.Data + lVar33 + 0x70 + 8) =
                     local_688._8_8_;
                *(ulonglong *)(local_830.AllocatorInstance.Data + lVar33 + 0x80) =
                     CONCAT71(local_688._17_7_,local_688[0x10]);
                if (((bool)local_877) || (local_870 != (FPCGMetadataAttribute<int> *)0x0)) {
                  local_7d8 = -1;
                  if ((bool)local_877) {
                    pUVar9 = *(UPCGSplineData **)FVar41.Data;
                    pUVar30 = (UPCGMetadata *)(**(code **)(*(longlong *)pUVar28 + 0x328))(pUVar28);
                    UPCGSplineData::WriteMetadataToEntry(pUVar9,fVar4,&local_7d8,pUVar30);
                  }
                  if (local_870 != (FPCGMetadataAttribute<int> *)0x0) {
                    UPCGMetadata::InitializeOnSet
                              (*(UPCGMetadata **)&pUVar28->field_0x38,&local_7d8,-1,
                               (UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
                    if ((((FObjectPtr_u_0 *)FVar41.Data != *(FObjectPtr_u_0 **)(pFVar56 + -0x10)) &&
                        ((FObjectPtr_u_0 *)FVar41.Data != *(FObjectPtr_u_0 **)pFVar56)) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("In == InputA || In == InputB",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineIntersection.cpp"
                                            ,0x5c,L""), bVar19)) {
                      pcVar10 = (code *)swi(3);
                      uVar20 = (*pcVar10)();
                      return (bool)uVar20;
                    }
                    pFVar52 = *(FObjectPtr_u_0 **)(pFVar56 + -0x10);
                    if ((FObjectPtr_u_0 *)FVar41.Data == pFVar52) {
                      pFVar52 = *(FObjectPtr_u_0 **)pFVar56;
                    }
                    FPCGMetadataAttribute<int>::SetValue(local_870,local_7d8,(int *)(pFVar52 + 1));
                  }
                  if (((local_858.AllocatorInstance.Data <= (FScriptContainerElement *)&local_7d8)
                      && ((FScriptContainerElement *)&local_7d8 <
                          local_858.AllocatorInstance.Data + (longlong)local_858.ArrayMax * 8)) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    uVar20 = (*pcVar10)();
                    return (bool)uVar20;
                  }
                  if (local_858.ArrayNum == local_858.ArrayMax) {
                    local_858.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_858.AllocatorInstance,&local_858.ArrayMax);
                  }
                  iVar22 = local_858.ArrayNum - local_874;
                  local_858.ArrayNum = local_858.ArrayNum + 1;
                  memmove(local_858.AllocatorInstance.Data + lVar39 * 8 + 8,
                          local_858.AllocatorInstance.Data + lVar39 * 8,(longlong)iVar22 << 3);
                  pFVar56 = pFVar56 + 0x70;
                  *(long64 *)(local_858.AllocatorInstance.Data + lVar39 * 8) = local_7d8;
                  fVar61 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                  fVar62 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                  fVar99 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                  fVar100 = GlobalVectorConstants::SmallNumber.m128_f32[3];
                  uVar34 = (ulonglong)local_7b0 & 0xffffffff;
                }
                else {
                  fVar61 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                  fVar62 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                  fVar99 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                  fVar100 = GlobalVectorConstants::SmallNumber.m128_f32[3];
                  pFVar56 = pFVar56 + 0x70;
                  uVar34 = (ulonglong)local_7b0 & 0xffffffff;
                }
              }
              else {
                uVar32 = uVar58;
                if ((int)(local_874 - 1) < local_858.ArrayNum) {
                  uVar32 = local_7e0;
                }
                if (uVar32 == 0) {
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar19) {
                    pcVar10 = (code *)swi(3);
                    uVar20 = (*pcVar10)();
                    return (bool)uVar20;
                  }
                  fVar61 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                  fVar62 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                  fVar99 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                  fVar100 = GlobalVectorConstants::SmallNumber.m128_f32[3];
                }
                pFVar47 = local_858.AllocatorInstance.Data + local_800 * 8;
LAB_149c6ae84:
                if (local_870 != (FPCGMetadataAttribute<int> *)0x0) {
                  UPCGMetadata::InitializeOnSet
                            (*(UPCGMetadata **)&pUVar28->field_0x38,(long64 *)pFVar47,-1,
                             (UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
                  if ((((FObjectPtr_u_0 *)FVar41.Data != *(FObjectPtr_u_0 **)(pFVar56 + -0x10)) &&
                      ((FObjectPtr_u_0 *)FVar41.Data != *(FObjectPtr_u_0 **)pFVar56)) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("In == InputA || In == InputB",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineIntersection.cpp"
                                          ,0x5c,L""), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    uVar20 = (*pcVar10)();
                    return (bool)uVar20;
                  }
                  pFVar52 = *(FObjectPtr_u_0 **)(pFVar56 + -0x10);
                  if ((FObjectPtr_u_0 *)FVar41.Data == pFVar52) {
                    pFVar52 = *(FObjectPtr_u_0 **)pFVar56;
                  }
                  FPCGMetadataAttribute<int>::SetValue
                            (local_870,*(long64 *)pFVar47,(int *)(pFVar52 + 1));
                  fVar61 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                  fVar62 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                  fVar99 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                  fVar100 = GlobalVectorConstants::SmallNumber.m128_f32[3];
                }
                uVar34 = (ulonglong)local_7b0 & 0xffffffff;
                pFVar56 = pFVar56 + 0x70;
              }
            }
            FVar48.Handle = FVar59.Handle;
            FVar51.Handle = FVar59.Handle;
            if (0 < local_830.ArrayNum) {
              do {
                uVar37 = FVar48._0_4_;
                uVar32 = uVar58;
                if ((int)uVar37 < local_830.ArrayNum) {
                  uVar32 = ~uVar37 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar10 = (code *)swi(3);
                  uVar20 = (*pcVar10)();
                  return (bool)uVar20;
                }
                *(float *)(local_830.AllocatorInstance.Data + (longlong)FVar51.Handle) =
                     (float)(int)uVar37;
                if (((local_830.AllocatorInstance.Data + 0x80)[(longlong)FVar51.Handle] ==
                     (FScriptContainerElement)0x1) ||
                   ((local_830.AllocatorInstance.Data + 0x80)[(longlong)FVar51.Handle] ==
                    (FScriptContainerElement)0x3)) {
                  uVar32 = uVar58;
                  if ((int)uVar37 < local_830.ArrayNum) {
                    uVar32 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar32 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    uVar20 = (*pcVar10)();
                    return (bool)uVar20;
                  }
                  (local_830.AllocatorInstance.Data + 0x80)[(longlong)FVar51.Handle] =
                       (FScriptContainerElement)0x4;
                }
                FVar48._0_4_ = uVar37 + 1;
                FVar48._4_4_ = 0;
                FVar51 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(FVar51.Handle + 3) + 2);
              } while ((int)FVar48._0_4_ < local_830.ArrayNum);
            }
            FVar45.Data = local_858.AllocatorInstance.Data;
            lVar33 = (longlong)local_858.ArrayNum;
            local_750.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_750.ArrayNum = local_858.ArrayNum;
            if (local_858.ArrayNum == 0) {
              local_750.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_858.ArrayNum,0,&local_750.AllocatorInstance,local_858.ArrayNum,
                         &local_750.ArrayMax);
              memcpy(local_750.AllocatorInstance.Data,FVar45.Data,lVar33 << 3);
            }
            pUVar29 = *(UObject **)FVar41.Data;
            local_2c8.Rotation.XY.m128d_f64[0] = *(double *)&pUVar29[6].field_0x20;
            local_2c8.Rotation.XY.m128d_f64[1] = *(double *)(pUVar29 + 7);
            local_2c8.Rotation.ZW.m128d_f64[0] = *(double *)&pUVar29[7].field_0x8;
            local_2c8.Rotation.ZW.m128d_f64[1] = *(double *)&pUVar29[7].field_0x10;
            local_2c8.Translation.XY.m128d_f64[0] = *(double *)&pUVar29[7].field_0x18;
            local_2c8.Translation.XY.m128d_f64[1] = *(double *)&pUVar29[7].field_0x20;
            local_2c8.Translation.ZW.m128d_f64[0] = *(double *)(pUVar29 + 8);
            local_2c8.Translation.ZW.m128d_f64[1] = *(double *)&pUVar29[8].field_0x8;
            local_2c8.Scale3D.XY.m128d_f64[0] = *(double *)&pUVar29[8].field_0x10;
            local_2c8.Scale3D.XY.m128d_f64[1] = *(double *)&pUVar29[8].field_0x18;
            local_2c8.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar29[8].field_0x20;
            local_2c8.Scale3D.ZW.m128d_f64[1] = *(double *)(pUVar29 + 9);
            UPCGSplineData::Initialize
                      (local_7e8,&local_830,(bool)pUVar29[9].field_0x24,&local_2c8,&local_750);
            FPCGDataPtrWrapper::operator=(&local_798->Data,(UPCGData *)local_7e8);
            if (local_858.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_858.AllocatorInstance.Data);
            }
            pFVar56 = local_780;
            if ((TVector<double>_u_0 *)local_830.AllocatorInstance.Data !=
                (TVector<double>_u_0 *)0x0) {
              FMemory::Free(local_830.AllocatorInstance.Data);
              pFVar56 = local_780;
            }
          }
          if ((IntersectionPoint *)local_770.AllocatorInstance.Data != (IntersectionPoint *)0x0) {
            FMemory::Free(local_770.AllocatorInstance.Data);
          }
          FVar41.Data = FVar41.Data + 0xb0;
          uVar34 = (ulonglong)local_7a8.Handle & 0xffffffff;
        }
      }
      if ((UPCGSplineData *)local_848.Data != (UPCGSplineData *)0x0) {
        FMemory::Free(local_848.Data);
      }
      if (local_7c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c0.AllocatorInstance.Data);
      }
    }
  }
  DestructItems<PCGSplineIntersection::InputData,int>((InputData *)local_818.Data,local_810);
  if ((FObjectPtr_u_0 *)local_818.Data != (FObjectPtr_u_0 *)0x0) {
    FMemory::Free(local_818.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_790.AllocatorInstance.Data,local_790.ArrayNum);
  if ((FPCGTaggedData *)local_790.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_790.AllocatorInstance.Data);
  }
  if (bVar60) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

