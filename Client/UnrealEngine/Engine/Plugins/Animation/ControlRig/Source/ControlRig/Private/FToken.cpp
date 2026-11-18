// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// ~FToken @ 14a3bce80

void __thiscall
`FControlRigParameterPreAnimatedTokenProducer::CacheExistingState'::__l2::FToken::~FToken
          (void *this)

{
  if (*(void **)((longlong)this + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x80));
  }
  if (*(void **)((longlong)this + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x70));
  }
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
  }
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  *(undefined ***)this = &___7IMovieScenePreAnimatedToken__6B_;
  return;
}

// RestoreState @ 14a452aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FControlRigParameterPreAnimatedTokenProducer::CacheExistingState'::__l2::FToken::RestoreState
          (void *this,UObject *param_1,FRestoreStateParams *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  char cVar3;
  EEulerRotationOrder EVar4;
  int iVar5;
  URigHierarchy *this_00;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  Type TVar17;
  UClass *pUVar18;
  FRigElementKey *pFVar19;
  longlong lVar20;
  longlong lVar21;
  TQuat<double> *pTVar22;
  USkeletalMeshComponent *this_01;
  undefined1 *puVar23;
  ulonglong uVar24;
  LPCRITICAL_SECTION lpCriticalSection;
  TReferenceControllerBase<1> *pTVar25;
  undefined8 *puVar26;
  longlong lVar27;
  double *pdVar28;
  float *pfVar29;
  double *pdVar30;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_8b8;
  undefined1 local_8b7;
  undefined1 local_8b6;
  undefined1 local_8b5;
  undefined1 local_8b4 [4];
  FRigElementKey local_8b0;
  double *local_8a0;
  longlong local_898;
  float local_890;
  float fStack_88c;
  float fStack_888;
  float fStack_884;
  float local_880;
  float fStack_87c;
  float fStack_878;
  undefined4 uStack_874;
  float local_870;
  float fStack_86c;
  float fStack_868;
  undefined4 uStack_864;
  undefined1 local_860 [4];
  undefined4 local_85c;
  undefined8 local_858;
  undefined4 local_850;
  undefined1 local_84c;
  undefined1 local_848 [4];
  undefined4 local_844;
  undefined8 local_840;
  undefined4 local_838;
  undefined1 local_834;
  undefined1 local_830 [4];
  undefined4 local_82c;
  undefined8 local_828;
  undefined4 local_820;
  undefined1 local_81c;
  undefined1 local_818 [4];
  undefined4 local_814;
  undefined8 local_810;
  undefined4 local_808;
  undefined1 local_804;
  undefined1 local_800 [4];
  undefined4 local_7fc;
  undefined8 local_7f8;
  undefined4 local_7f0;
  undefined1 local_7ec;
  undefined1 local_7e8 [4];
  undefined4 local_7e4;
  undefined8 local_7e0;
  undefined4 local_7d8;
  undefined1 local_7d4;
  undefined1 local_7d0 [4];
  undefined4 local_7cc;
  undefined8 local_7c8;
  undefined4 local_7c0;
  undefined1 local_7bc;
  undefined1 local_7b8 [4];
  undefined4 local_7b4;
  undefined8 local_7b0;
  undefined4 local_7a8;
  undefined1 local_7a4;
  LPCRITICAL_SECTION local_7a0;
  FRigElementKey local_798;
  float local_788;
  float fStack_784;
  float fStack_780;
  float fStack_77c;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  TRotator<double> local_760;
  TVector<double>_u_0 local_748;
  TRotator<double> local_730;
  TVector<double>_u_0 local_718;
  TRotator<double> local_700;
  TVector<double>_u_0 local_6e8;
  TRotator<double> local_6d0;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float local_6a8;
  float fStack_6a4;
  ulonglong uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined4 local_638;
  float local_634;
  float fStack_630;
  undefined8 uStack_62c;
  undefined8 local_624;
  undefined8 uStack_61c;
  undefined8 local_614;
  undefined8 uStack_60c;
  undefined8 local_604;
  undefined8 uStack_5fc;
  undefined8 local_5f4;
  undefined8 uStack_5ec;
  undefined8 local_5e4;
  undefined8 uStack_5dc;
  undefined8 local_5d4;
  undefined8 uStack_5cc;
  undefined8 local_5c4;
  undefined8 uStack_5bc;
  undefined4 local_5b4;
  float local_5b0;
  float fStack_5ac;
  ulonglong uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined4 local_530;
  float local_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float local_51c;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float local_50c;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined1 local_4ac;
  undefined2 local_4ab;
  undefined1 local_4a9;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  undefined4 uStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  undefined4 uStack_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  ulonglong local_424 [16];
  undefined4 local_3a4;
  ulonglong local_3a0 [16];
  undefined4 local_320;
  ulonglong local_31c [16];
  undefined4 local_29c;
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
  double dStack_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined1 local_250 [16];
  double local_240;
  undefined1 local_238 [16];
  double local_228;
  undefined1 local_220 [16];
  double local_210;
  FRigElementKey local_208;
  FRigElementKey local_1fc;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined1 local_198 [16];
  double local_188;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  TRotator<double> local_158;
  TRotator<double> local_140;
  TRotator<double> local_128;
  TRotator<double> local_110;
  TQuat<double> local_f8;
  TQuat<double> local_d8 [5];
  
  if (param_1 == (UObject *)0x0) {
    return;
  }
  pUVar18 = Z_Construct_UClass_UControlRig_NoRegister();
  iVar5 = (int)pUVar18->_padding_;
  if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar5) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar18->_padding_) {
    return;
  }
  pTVar25 = *(TReferenceControllerBase<1> **)&param_1[0x17].field_0x10;
  lVar21 = *(longlong *)&param_1[0x17].field_0x8;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  if (lVar21 == 0) {
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&param_1[0xe].field_0x10;
  local_7a0 = lpCriticalSection;
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  this_00 = *(URigHierarchy **)&param_1[0x14].field_0x18;
  if (this_00 != (URigHierarchy *)0x0) {
    iVar5 = *(int *)((longlong)this + 0x18);
    puVar26 = *(undefined8 **)((longlong)this + 0x10);
    puVar1 = puVar26 + (longlong)iVar5 * 3;
    local_8b0.Name.ComparisonIndex.Value = 0;
    local_8b0.Name.Number = 0;
    local_8b0.Type = Control;
    while( true ) {
      if (*(int *)((longlong)this + 0x18) != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FControlSpaceAndValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar26 == puVar1) break;
      local_8b0.Name.ComparisonIndex.Value = (uint)*puVar26;
      local_8b0.Name.Number = (uint)((ulonglong)*puVar26 >> 0x20);
      cVar3 = *(char *)(puVar26 + 1);
      if (cVar3 == '\0') {
        local_798.Name.ComparisonIndex.Value = local_8b0.Name.ComparisonIndex.Value;
        local_798.Type = local_8b0.Type;
        local_798._1_3_ = local_8b0._1_3_;
        local_798.Name.Number = local_8b0.Name.Number;
        pFVar19 = URigHierarchy::GetDefaultParent(this_00,&local_208,&local_798);
LAB_14a452c64:
        UControlRig::SwitchToParent((UControlRig *)param_1,&local_8b0,pFVar19,false,true);
      }
      else {
        if (cVar3 == '\x01') {
          pFVar19 = URigHierarchy::GetWorldSpaceReferenceKey(&local_1fc);
          goto LAB_14a452c64;
        }
        if (cVar3 == '\x02') {
          pFVar19 = (FRigElementKey *)((longlong)puVar26 + 0xc);
          goto LAB_14a452c64;
        }
      }
      puVar26 = puVar26 + 3;
    }
    iVar5 = *(int *)((longlong)this + 0x28);
    lVar27 = *(longlong *)((longlong)this + 0x20);
    lVar21 = lVar27 + (longlong)iVar5 * 0xc;
    while( true ) {
      if (*(int *)((longlong)this + 0x28) != iVar5) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TNameAndValue<float>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (lVar27 == lVar21) break;
      lVar20 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1,lVar27);
      if (lVar20 != 0) {
        local_3a0[1] = 0;
        local_850 = 0;
        local_84c = 0;
        local_3a0[2] = 0;
        local_3a0[3] = 0;
        local_3a0[4] = 0;
        local_3a0[5] = 0;
        local_3a0[6] = 0;
        local_3a0[7] = 0;
        local_860[0] = 2;
        local_3a0[8] = 0;
        local_3a0[9] = 0;
        local_85c = 0x1ff;
        local_3a0[10] = 0;
        local_3a0[0xb] = 0;
        local_858 = 0x7f7fffff;
        local_3a0[0xc] = 0;
        local_3a0[0xd] = 0;
        local_320 = 1;
        local_3a0[0xe] = 0;
        local_3a0[0xf] = 0;
        local_3a0[0] = (ulonglong)*(uint *)(lVar27 + 8);
        (**(code **)(*(longlong *)param_1 + 0x3f0))(param_1,lVar27,local_3a0,1,local_860,0,0,0);
      }
      lVar27 = lVar27 + 0xc;
    }
    iVar5 = *(int *)((longlong)this + 0x38);
    lVar27 = *(longlong *)((longlong)this + 0x30);
    lVar21 = lVar27 + (longlong)iVar5 * 0xc;
    while( true ) {
      if (*(int *)((longlong)this + 0x38) != iVar5) {
        local_8b8 = 0;
        `TCheckedPointerIterator<TNameAndValue<bool>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_8b8);
      }
      if (lVar27 == lVar21) break;
      lVar20 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1,lVar27);
      if (lVar20 != 0) {
        local_838 = 0;
        local_834 = 0;
        local_31c[1] = 0;
        local_31c[0] = (ulonglong)*(byte *)(lVar27 + 8);
        local_848[0] = 2;
        local_844 = 0x1ff;
        local_840 = 0x7f7fffff;
        local_31c[2] = 0;
        local_31c[3] = 0;
        local_29c = 1;
        local_31c[4] = 0;
        local_31c[5] = 0;
        local_31c[6] = 0;
        local_31c[7] = 0;
        local_31c[8] = 0;
        local_31c[9] = 0;
        local_31c[10] = 0;
        local_31c[0xb] = 0;
        local_31c[0xc] = 0;
        local_31c[0xd] = 0;
        local_31c[0xe] = 0;
        local_31c[0xf] = 0;
        (**(code **)(*(longlong *)param_1 + 0x3f0))(param_1,lVar27,local_31c,1,local_848,0,0,0);
      }
      lVar27 = lVar27 + 0xc;
    }
    iVar5 = *(int *)((longlong)this + 0x48);
    lVar27 = *(longlong *)((longlong)this + 0x40);
    lVar21 = lVar27 + (longlong)iVar5 * 0xc;
    while( true ) {
      if (*(int *)((longlong)this + 0x48) != iVar5) {
        local_8b7 = 0;
        `TCheckedPointerIterator<TNameAndValue<int>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_8b7);
      }
      if (lVar27 == lVar21) break;
      lVar20 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1,lVar27);
      if (lVar20 != 0) {
        local_820 = 0;
        local_81c = 0;
        local_424[1] = 0;
        local_424[0] = (ulonglong)*(uint *)(lVar27 + 8);
        local_830[0] = 2;
        local_82c = 0x1ff;
        local_828 = 0x7f7fffff;
        local_424[2] = 0;
        local_424[3] = 0;
        local_3a4 = 1;
        local_424[4] = 0;
        local_424[5] = 0;
        local_424[6] = 0;
        local_424[7] = 0;
        local_424[8] = 0;
        local_424[9] = 0;
        local_424[10] = 0;
        local_424[0xb] = 0;
        local_424[0xc] = 0;
        local_424[0xd] = 0;
        local_424[0xe] = 0;
        local_424[0xf] = 0;
        (**(code **)(*(longlong *)param_1 + 0x3f0))(param_1,lVar27,local_424,1,local_830,0,0,0);
      }
      lVar27 = lVar27 + 0xc;
    }
    local_898 = 2;
    do {
      iVar5 = *(int *)((longlong)this + 0x68);
      lVar27 = *(longlong *)((longlong)this + 0x60);
      lVar21 = lVar27 + (longlong)iVar5 * 0x18;
      while( true ) {
        if (*(int *)((longlong)this + 0x68) != iVar5) {
          local_8b6 = 0;
          `TCheckedPointerIterator<TNameAndValue<UE::Math::TVector2<double>_>,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_8b6);
        }
        if (lVar27 == lVar21) break;
        lVar20 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1,lVar27);
        if (lVar20 != 0) {
          local_624 = 0;
          uStack_61c = 0;
          local_614 = 0;
          uStack_60c = 0;
          local_808 = 0;
          local_604 = 0;
          uStack_5fc = 0;
          local_804 = 0;
          local_5f4 = 0;
          uStack_5ec = 0;
          uStack_62c = 0;
          local_5e4 = 0;
          uStack_5dc = 0;
          local_5d4 = 0;
          uStack_5cc = 0;
          local_5c4 = 0;
          uStack_5bc = 0;
          local_818[0] = 2;
          local_814 = 0x1ff;
          local_810 = 0x7f7fffff;
          local_5b4 = 1;
          _local_634 = CONCAT44((float)*(double *)(lVar27 + 0x10),(float)*(double *)(lVar27 + 8));
          (**(code **)(*(longlong *)param_1 + 0x3f0))(param_1,lVar27,&local_634,1,local_818,0,0,0);
        }
        lVar27 = lVar27 + 0x18;
      }
      iVar5 = *(int *)((longlong)this + 0x58);
      pdVar28 = (double *)((longlong)iVar5 * 0x20 + *(longlong *)((longlong)this + 0x50));
      pdVar30 = (double *)(*(longlong *)((longlong)this + 0x50) + 0x18);
      local_8a0 = pdVar28;
      while( true ) {
        if (*(int *)((longlong)this + 0x58) != iVar5) {
          local_8b5 = 0;
          `TCheckedPointerIterator<TNameAndValue<UE::Math::TVector<double>_>,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_8b5);
        }
        if (pdVar30 + -3 == pdVar28) break;
        lVar21 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1);
        if (lVar21 != 0) {
          if (*(char *)(lVar21 + 0x231) == '\x06') {
            if ((this_00->bUsePreferredEulerAngles == false) || (*(char *)(lVar21 + 0x3e1) == '\0'))
            {
              local_760.Pitch = pdVar30[-1];
              local_760.Yaw = *pdVar30;
              local_760.Roll = pdVar30[-2];
              FRigPreferredEulerAngles::SetRotator
                        ((FRigPreferredEulerAngles *)(lVar21 + 0x450),&local_158,&local_760,false,
                         false);
            }
            else {
              EVar4 = *(EEulerRotationOrder *)(lVar21 + 0x3e0);
              FRigPreferredEulerAngles::SetRotationOrder
                        ((FRigPreferredEulerAngles *)(lVar21 + 0x450),EVar4);
              FRigPreferredEulerAngles::SetAngles
                        ((FRigPreferredEulerAngles *)(lVar21 + 0x450),
                         (TVector<double> *)(pdVar30 + -2),false,EVar4,false);
              pdVar28 = local_8a0;
            }
          }
          local_5a0 = 0;
          uStack_598 = 0;
          local_590 = 0;
          uStack_588 = 0;
          local_7f0 = 0;
          local_580 = 0;
          uStack_578 = 0;
          local_7ec = 0;
          local_570 = 0;
          uStack_568 = 0;
          local_560 = 0;
          uStack_558 = 0;
          local_550 = 0;
          uStack_548 = 0;
          local_800[0] = 2;
          local_540 = 0;
          uStack_538 = 0;
          local_7fc = 0x1ff;
          local_7f8 = 0x7f7fffff;
          local_530 = 1;
          _local_5b0 = CONCAT44((float)pdVar30[-1],(float)pdVar30[-2]);
          uStack_5a8 = (ulonglong)(uint)(float)*pdVar30;
          (**(code **)(*(longlong *)param_1 + 0x3f0))
                    (param_1,pdVar30 + -3,&local_5b0,1,local_800,0,0,0);
        }
        pdVar30 = pdVar30 + 4;
      }
      uVar24 = (ulonglong)*(int *)((longlong)this + 0x78);
      lVar21 = *(longlong *)((longlong)this + 0x70);
      local_8a0 = (double *)CONCAT44(local_8a0._4_4_,*(int *)((longlong)this + 0x78));
      lVar27 = uVar24 * 0x50;
      pdVar30 = (double *)(lVar21 + 0x48);
      while( true ) {
        if (*(int *)((longlong)this + 0x78) != (int)uVar24) {
          local_8b4[0] = 0;
          `TCheckedPointerIterator<TNameAndValue<FEulerTransform>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_8b4);
        }
        if (pdVar30 + -9 == (double *)(lVar27 + lVar21)) break;
        lVar20 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1);
        if (lVar20 != 0) {
          cVar3 = *(char *)(lVar20 + 0x231);
          if (cVar3 == '\a') {
            local_6e8._s_0.X = pdVar30[-3];
            local_6e8._s_0.Y = pdVar30[-5];
            local_6e8._s_0.Z = pdVar30[-4];
            if ((this_00->bUsePreferredEulerAngles == false) || (*(char *)(lVar20 + 0x3e1) == '\0'))
            {
              local_6d0.Pitch = local_6e8._s_0.Y;
              local_6d0.Yaw = local_6e8._s_0.Z;
              local_6d0.Roll = local_6e8._s_0.X;
              FRigPreferredEulerAngles::SetRotator
                        ((FRigPreferredEulerAngles *)(lVar20 + 0x450),&local_110,&local_6d0,false,
                         false);
            }
            else {
              EVar4 = *(EEulerRotationOrder *)(lVar20 + 0x3e0);
              FRigPreferredEulerAngles::SetRotationOrder
                        ((FRigPreferredEulerAngles *)(lVar20 + 0x450),EVar4);
              FRigPreferredEulerAngles::SetAngles
                        ((FRigPreferredEulerAngles *)(lVar20 + 0x450),
                         (TVector<double> *)&local_6e8._s_0,false,EVar4,false);
            }
            local_7b8[0] = 2;
            local_7a8 = 0;
            local_7a4 = 0;
            local_7b4 = 0x1ff;
            local_7b0 = 0x7f7fffff;
            pTVar22 = UE::Math::TRotator<double>::Quaternion
                                ((TRotator<double> *)(pdVar30 + -5),local_d8);
            local_298 = pdVar30[-8];
            dStack_290 = pdVar30[-7];
            local_250 = *(undefined1 (*) [16])(pdVar30 + -2);
            local_288 = pdVar30[-6];
            local_240 = *pdVar30;
            local_890 = (float)pTVar22->X;
            local_428 = 1;
            fStack_87c = (float)dStack_290;
            fStack_88c = (float)pTVar22->Y;
            fStack_878 = (float)local_288;
            local_880 = (float)local_298;
            fStack_888 = (float)pTVar22->Z;
            fStack_86c = (float)local_250._8_8_;
            local_478 = 0;
            uStack_470 = 0;
            local_468 = 0;
            uStack_460 = 0;
            local_458 = 0;
            uStack_450 = 0;
            local_448 = 0;
            uStack_440 = 0;
            local_438 = 0;
            uStack_430 = 0;
            fStack_884 = (float)pTVar22->W;
            uStack_874 = 0;
            uStack_48c = 0;
            local_870 = (float)local_250._0_8_;
            fStack_868 = (float)local_240;
            puVar23 = local_7b8;
            pfVar29 = &local_4a8;
            uStack_864 = 0;
            uStack_47c = 0;
            local_4a8 = local_890;
            fStack_4a4 = fStack_88c;
            fStack_4a0 = fStack_888;
            fStack_49c = fStack_884;
            local_498 = local_880;
            fStack_494 = fStack_87c;
            fStack_490 = fStack_878;
            local_488 = local_870;
            fStack_484 = fStack_86c;
            fStack_480 = fStack_868;
            local_280 = local_298;
            dStack_278 = dStack_290;
            local_270 = local_288;
            local_268 = local_298;
            dStack_260 = dStack_290;
            local_258 = local_288;
            local_238 = local_250;
            local_228 = local_240;
            local_220 = local_250;
            local_210 = local_240;
          }
          else if (cVar3 == '\b') {
            pTVar22 = UE::Math::TRotator<double>::Quaternion
                                ((TRotator<double> *)(pdVar30 + -5),&local_f8);
            local_188 = pdVar30[-6];
            local_198 = *(undefined1 (*) [16])(pdVar30 + -8);
            dVar8 = local_198._0_8_;
            dVar9 = local_198._8_8_;
            dVar10 = pTVar22->X;
            dVar11 = pTVar22->Y;
            auVar2._0_8_ = pTVar22->Z;
            auVar2._8_8_ = pTVar22->W;
            local_718._s_0.X = pdVar30[-3];
            local_718._s_0.Z = pdVar30[-4];
            local_718._s_0.Y = pdVar30[-5];
            local_178 = dVar10;
            dStack_170 = dVar11;
            local_168 = auVar2;
            if ((this_00->bUsePreferredEulerAngles == false) || (*(char *)(lVar20 + 0x3e1) == '\0'))
            {
              local_700.Pitch = local_718._s_0.Y;
              local_700.Yaw = local_718._s_0.Z;
              local_700.Roll = local_718._s_0.X;
              FRigPreferredEulerAngles::SetRotator
                        ((FRigPreferredEulerAngles *)(lVar20 + 0x450),&local_128,&local_700,false,
                         false);
            }
            else {
              EVar4 = *(EEulerRotationOrder *)(lVar20 + 0x3e0);
              FRigPreferredEulerAngles::SetRotationOrder
                        ((FRigPreferredEulerAngles *)(lVar20 + 0x450),EVar4);
              FRigPreferredEulerAngles::SetAngles
                        ((FRigPreferredEulerAngles *)(lVar20 + 0x450),
                         (TVector<double> *)&local_718._s_0,false,EVar4,false);
            }
            puVar23 = local_7d0;
            local_7d0[0] = 2;
            local_7cc = 0x1ff;
            pfVar29 = &local_6b8;
            local_7c8 = 0x7f7fffff;
            local_7c0 = 0;
            local_7bc = 0;
            local_638 = 1;
            _local_6b8 = CONCAT44((float)dVar11,(float)dVar10);
            _fStack_6b0 = CONCAT44((float)(double)auVar2._8_8_,(float)(double)auVar2._0_8_);
            _local_6a8 = CONCAT44((float)dVar9,(float)dVar8);
            uStack_6a0 = (ulonglong)(uint)(float)local_188;
            local_698 = 0;
            uStack_690 = 0;
            local_688 = 0;
            uStack_680 = 0;
            local_678 = 0;
            uStack_670 = 0;
            local_668 = 0;
            uStack_660 = 0;
            local_658 = 0;
            uStack_650 = 0;
            local_648 = 0;
            uStack_640 = 0;
          }
          else {
            if (cVar3 != '\t') goto LAB_14a453989;
            local_1a8 = *pdVar30;
            dVar8 = pdVar30[-8];
            dVar9 = pdVar30[-7];
            dVar10 = pdVar30[-6];
            dVar11 = pdVar30[-5];
            dVar12 = pdVar30[-4];
            dVar13 = pdVar30[-3];
            dVar14 = pdVar30[-2];
            dVar15 = pdVar30[-1];
            local_748._s_0.X = pdVar30[-3];
            local_748._s_0.Z = pdVar30[-4];
            local_748._s_0.Y = pdVar30[-5];
            local_1e8 = dVar8;
            dStack_1e0 = dVar9;
            local_1d8 = dVar10;
            dStack_1d0 = dVar11;
            local_1c8 = dVar12;
            dStack_1c0 = dVar13;
            local_1b8 = dVar14;
            dStack_1b0 = dVar15;
            if ((this_00->bUsePreferredEulerAngles == false) || (*(char *)(lVar20 + 0x3e1) == '\0'))
            {
              local_730.Pitch = local_748._s_0.Y;
              local_730.Yaw = local_748._s_0.Z;
              local_730.Roll = local_748._s_0.X;
              FRigPreferredEulerAngles::SetRotator
                        ((FRigPreferredEulerAngles *)(lVar20 + 0x450),&local_140,&local_730,false,
                         false);
            }
            else {
              EVar4 = *(EEulerRotationOrder *)(lVar20 + 0x3e0);
              FRigPreferredEulerAngles::SetRotationOrder
                        ((FRigPreferredEulerAngles *)(lVar20 + 0x450),EVar4);
              FRigPreferredEulerAngles::SetAngles
                        ((FRigPreferredEulerAngles *)(lVar20 + 0x450),
                         (TVector<double> *)&local_748._s_0,false,EVar4,false);
            }
            local_7e8[0] = 2;
            local_7e4 = 0x1ff;
            local_7e0 = 0x7f7fffff;
            fStack_77c = (float)dVar8;
            puVar23 = local_7e8;
            local_7d8 = 0;
            pfVar29 = &local_52c;
            local_7d4 = 0;
            local_4b8 = 0;
            local_4b0 = 0;
            local_778 = (float)dVar9;
            local_4ab = 0;
            local_4a9 = 0;
            local_4ac = 1;
            local_788 = (float)dVar11;
            fStack_784 = (float)dVar12;
            fStack_780 = (float)dVar13;
            fStack_770 = (float)dVar14;
            local_768 = (float)local_1a8;
            fStack_774 = (float)dVar10;
            fStack_76c = (float)dVar15;
            local_508 = 0;
            uStack_500 = 0;
            local_4f8 = 0;
            uStack_4f0 = 0;
            local_4e8 = 0;
            uStack_4e0 = 0;
            local_4d8 = 0;
            uStack_4d0 = 0;
            local_4c8 = 0;
            uStack_4c0 = 0;
            local_52c = local_788;
            fStack_528 = fStack_784;
            fStack_524 = fStack_780;
            fStack_520 = fStack_77c;
            local_51c = local_778;
            fStack_518 = fStack_774;
            fStack_514 = fStack_770;
            fStack_510 = fStack_76c;
            local_50c = local_768;
          }
          (**(code **)(*(longlong *)param_1 + 0x3f0))(param_1,pdVar30 + -9,pfVar29,1,puVar23,0,0,0);
        }
LAB_14a453989:
        uVar24 = (ulonglong)local_8a0 & 0xffffffff;
        pdVar30 = pdVar30 + 10;
      }
      local_898 = local_898 + -1;
    } while (local_898 != 0);
    local_898 = 0;
    lpCriticalSection = local_7a0;
  }
  (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  FControlRigBindingHelper::UnBindFromSequencerInstance((UControlRig *)param_1);
  pTVar25 = *(TReferenceControllerBase<1> **)&param_1[0x17].field_0x10;
  plVar6 = *(longlong **)&param_1[0x17].field_0x8;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((plVar6 == (longlong *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_01 = (USkeletalMeshComponent *)(**(code **)(*plVar6 + 0x28))(plVar6);
  if (this_01 == (USkeletalMeshComponent *)0x0) {
LAB_14a453b43:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  }
  else {
    pUVar18 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar5 = (int)pUVar18->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar18->_padding_)) goto LAB_14a453b43;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
    if ((this_01->_padding_ & 1) != 0) {
      USkeletalMeshComponent::SetUpdateAnimationInEditor(this_01,true);
      USkeletalMeshComponent::SetUpdateClothInEditor(this_01,true);
      if (this_01->bPostEvaluatingAnimation == '\0') {
        USkeletalMeshComponent::TickAnimation(this_01,0.0,false);
        (**(code **)(this_01->_padding_ + 0xb88))(this_01);
        USkinnedMeshComponent::RefreshFollowerComponents((USkinnedMeshComponent *)this_01);
        USceneComponent::UpdateComponentToWorld((USceneComponent *)this_01,None,None);
        (**(code **)(this_01->_padding_ + 0xbc8))(this_01);
        UActorComponent::MarkRenderTransformDirty((UActorComponent *)this_01);
        UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this_01);
      }
      FSkeletalMeshRestoreState::RestoreState((FSkeletalMeshRestoreState *)((longlong)this + 0x80));
      TVar17 = USkeletalMeshComponent::GetAnimationMode(this_01);
      if (TVar17 != *(Type *)((longlong)this + 0x90)) {
        USkeletalMeshComponent::SetAnimationMode(this_01,*(Type *)((longlong)this + 0x90),true);
      }
    }
  }
  pTVar25 = *(TReferenceControllerBase<1> **)&param_1[0x17].field_0x10;
  plVar6 = *(longlong **)&param_1[0x17].field_0x8;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((plVar6 == (longlong *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar21 = (**(code **)(*plVar6 + 0x28))(plVar6);
  if (lVar21 != 0) {
    pUVar18 = Z_Construct_UClass_UControlRigComponent_NoRegister();
    iVar5 = (int)pUVar18->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)(lVar21 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) + (longlong)iVar5 * 8)
        == &pUVar18->_padding_)) goto LAB_14a453c25;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  pTVar25 = *(TReferenceControllerBase<1> **)&param_1[0x17].field_0x10;
  plVar6 = *(longlong **)&param_1[0x17].field_0x8;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((plVar6 == (longlong *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (**(code **)(*plVar6 + 8))(plVar6);
LAB_14a453c25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  return;
}

// RestoreState @ 14a453c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigSkeletalMeshComponentBindingTokenProducer::CacheExistingState'::__l2::FToken::
RestoreState(void *this,UObject *param_1,FRestoreStateParams *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UAnimInstance *this_00;
  UControlRig *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       (this_00 = USkeletalMeshComponent::GetAnimInstance((USkeletalMeshComponent *)param_1),
       this_00 != (UAnimInstance *)0x0)) {
      pUVar2 = UControlRigLayerInstance::StaticClass();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        UControlRigLayerInstance::RemoveControlRigTrack
                  ((UControlRigLayerInstance *)this_00,*(int *)((longlong)this + 0xc));
        pUVar3 = UControlRigLayerInstance::GetFirstAvailableControlRig
                           ((UControlRigLayerInstance *)this_00);
        if (pUVar3 == (UControlRig *)0x0) {
          FAnimCustomInstanceHelper::UnbindFromSkeletalMeshComponent<UControlRigLayerInstance>
                    ((USkeletalMeshComponent *)param_1);
        }
      }
    }
  }
  return;
}

