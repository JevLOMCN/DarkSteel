// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CopyLockedViews @ 147eb5c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FLockedViewState::CopyLockedViews(void)

{
  ulonglong uVar1;
  FLockedViewState *pFVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  FString local_a8;
  FString local_98;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  FString local_68;
  FString local_58;
  FLockedViewState *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  iVar7 = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)Get();
  iVar5 = *(int *)&(((FLockedViewState *)local_98.Data.AllocatorInstance.Data)->Viewpoints).
                   field_0x28;
  local_98.Data.ArrayNum = 0;
  local_88 = &(((FLockedViewState *)local_98.Data.AllocatorInstance.Data)->Viewpoints).field_0x10;
  local_98.Data.ArrayMax = 1;
  local_78 = local_98.Data.ArrayNum;
  iStack_7c = 0;
  if (iVar5 != 0) {
    puVar6 = *(uint **)&(((FLockedViewState *)local_98.Data.AllocatorInstance.Data)->Viewpoints).
                        field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)local_88;
    }
    local_98.Data.ArrayMax = *puVar6;
    local_78 = iVar7;
    local_98.Data.ArrayNum = iVar7;
    while (local_98.Data.ArrayMax == 0) {
      lVar3 = (longlong)local_98.Data.ArrayNum;
      local_78 = local_78 + 0x20;
      local_98.Data.ArrayNum = local_98.Data.ArrayNum + 1;
      local_98.Data.ArrayMax = 1;
      iStack_7c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98.Data.ArrayNum)
      goto LAB_147eb5d1a;
      local_98.Data.ArrayMax = puVar6[lVar3 + 1];
    }
    local_98.Data.ArrayMax = -local_98.Data.ArrayMax & local_98.Data.ArrayMax;
    uVar1 = (ulonglong)(uint)local_98.Data.ArrayMax * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar3;
    if (iVar5 < iStack_7c) {
      iStack_7c = iVar5;
    }
  }
LAB_147eb5d1a:
  uStack_80 = 0xffffffff;
  TStack_40._padding_ = CONCAT44(local_98.Data.ArrayMax,local_98.Data.ArrayNum);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = iStack_7c;
  TStack_40.BaseBitIndex = local_78;
  iStack_74 = iStack_7c;
  local_48 = (FLockedViewState *)local_98.Data.AllocatorInstance.Data;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_40.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar5) {
    do {
      pFVar2 = local_48;
      lVar3 = (longlong)TStack_40.CurrentBitIndex;
      ::FString::PrintfImpl(&local_58,L"%f %f %f %f %f %f");
      ::FName::ToString((FName *)(*(longlong *)&pFVar2->Viewpoints + lVar3 * 0x48),&local_98);
      ::FString::PrintfImpl(&local_68,L"%s%s %s");
      iVar5 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar5 = iVar7;
      }
      ::FString::AppendChars(&local_a8,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar5);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((FLockedViewState *)local_98.Data.AllocatorInstance.Data != (FLockedViewState *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar4.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformApplicationMisc::ClipboardCopy((wchar_t *)FVar4.Data);
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`private:_static_void___cdecl_FLockedViewState::CopyLockedViews(void)'::__l5::
                LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// Get @ 147ebe0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLockedViewState * __cdecl FLockedViewState::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates._padding_ =
           (longlong)&___7__FUObjectAnnotationSparse_UFPlayerState_FLockedViewState___00__6B_;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationMap._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationMap._48_8_ = _UNK_150631d98;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.Viewpoints._0_8_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.Viewpoints._8_8_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationCacheValue.ViewPoint.Location.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationCacheValue.ViewPoint.Location.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationCacheValue.ViewPoint.Location.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.Viewpoints._32_8_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.Viewpoints._40_4_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.Viewpoints._52_4_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.Viewpoints._64_8_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.Viewpoints._72_4_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationMap._0_8_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationMap._8_8_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationMap._32_8_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationMap._64_8_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationMap._72_4_ = 0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationCacheKey = (UObjectBase *)0x0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationCacheValue.ViewPoint.Rotation.Roll =
           UE::Math::TRotator<double>::ZeroRotator.Roll;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.Viewpoints._44_4_ = 0x80;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.Viewpoints._48_4_ = 0xffffffff;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationMapCritical.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationCacheCritical.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0
      ;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationCacheValue.ViewPoint.FOV = 90.0;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationCacheValue.ViewPoint.Rotation.Pitch =
           UE::Math::TRotator<double>::ZeroRotator.Pitch;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationCacheValue.ViewPoint.Rotation.Yaw =
           UE::Math::TRotator<double>::ZeroRotator.Yaw;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.AnnotationCacheValue.bLocked = false;
      `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.PlayerStates.bRegistered = false;
      atexit(`FLockedViewState::Get'::__l2::_dynamic_atexit_destructor_for__State__);
      _Init_thread_footer(&`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::
              __l2::State;
    }
  }
  return &`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2
          ::State;
}

// GetViewPointFromStrings @ 147ec8800

FViewPoint * __cdecl
FLockedViewState::GetViewPointFromStrings
          (FViewPoint *__return_storage_ptr__,FString *param_1,int param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *_Str;
  double dVar3;
  
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&__return_storage_ptr__->FOV = 0;
  (__return_storage_ptr__->Rotation).Pitch = 0.0;
  (__return_storage_ptr__->Rotation).Yaw = 0.0;
  (__return_storage_ptr__->Rotation).Roll = 0.0;
  if (param_2 == 6) {
    _Str = L"";
    if ((param_1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    dVar3 = _wtof(pwVar2);
    iVar1 = param_1[1].Data.ArrayNum;
    (__return_storage_ptr__->Location).field0_0x0._s_0.X = (double)(float)dVar3;
    if (iVar1 == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)param_1[1].Data.AllocatorInstance.Data;
    }
    dVar3 = _wtof(pwVar2);
    iVar1 = param_1[2].Data.ArrayNum;
    (__return_storage_ptr__->Location).field0_0x0._s_0.Y = (double)(float)dVar3;
    if (iVar1 == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)param_1[2].Data.AllocatorInstance.Data;
    }
    dVar3 = _wtof(pwVar2);
    iVar1 = param_1[3].Data.ArrayNum;
    (__return_storage_ptr__->Location).field0_0x0._s_0.Z = (double)(float)dVar3;
    if (iVar1 == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)param_1[3].Data.AllocatorInstance.Data;
    }
    dVar3 = _wtof(pwVar2);
    iVar1 = param_1[4].Data.ArrayNum;
    (__return_storage_ptr__->Rotation).Pitch = (double)(float)dVar3;
    if (iVar1 == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)param_1[4].Data.AllocatorInstance.Data;
    }
    dVar3 = _wtof(pwVar2);
    iVar1 = param_1[5].Data.ArrayNum;
    (__return_storage_ptr__->Rotation).Yaw = (double)(float)dVar3;
    if (iVar1 != 0) {
      _Str = (wchar_t *)param_1[5].Data.AllocatorInstance.Data;
    }
    dVar3 = _wtof(_Str);
    __return_storage_ptr__->FOV = 90.0;
    (__return_storage_ptr__->Rotation).Roll = (double)(float)dVar3;
  }
  return __return_storage_ptr__;
}

// LockView @ 147ece8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FLockedViewState::LockView
          (FLockedViewState *this,ULocalPlayer *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FPlatformRWLock *SRWLock;
  FPlatformRWLock *SRWLock_00;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  ULocalPlayer *pUVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TTuple<FName,FLockedViewState::FViewPoint> *pTVar11;
  FViewPoint *pFVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  undefined1 *puVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_13c8 [32];
  double local_13a8;
  double local_13a0;
  double local_1398;
  double dStack_1390;
  TVector<double>_u_0 local_1388;
  undefined8 uStack_1370;
  double local_1368;
  undefined8 uStack_1360;
  double local_1358;
  char cStack_1350;
  undefined7 uStack_134f;
  FName local_1348;
  ULocalPlayer *local_1340;
  ULocalPlayer *local_1338;
  undefined1 local_1330 [8];
  TPairInitializer<UObjectBase_const_*_const_&,FLockedViewState::FPlayerState_const_&> local_1328;
  FString local_1318;
  FName *local_1308;
  TVector<double>_u_0 *local_1300;
  FPlayerState **local_12f8;
  TVector<double>_u_0 *local_12f0;
  ULocalPlayer **local_12e8;
  double *local_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  double local_1298;
  double dStack_1290;
  double local_1288;
  undefined8 uStack_1280;
  double local_1278;
  double dStack_1270;
  undefined8 local_1268;
  undefined8 uStack_1260;
  FViewPoint local_1258;
  FViewPoint local_1220;
  TVector<double>_u_0 local_11e8;
  double local_11d0;
  double dStack_11c8;
  double local_11c0;
  undefined4 local_11b8;
  void *local_a10;
  TVector<double>_u_0 local_918;
  double local_900;
  double dStack_8f8;
  double local_8f0;
  undefined4 local_8e8;
  void *local_140;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x147ece8d2;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_13c8;
  local_1338 = param_1;
  FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::GetAnnotation
            (&this->PlayerStates,(FPlayerState *)&local_1388._s_0,(UObjectBase *)param_1);
  if (param_2->ArrayNum == 1) {
    pFVar3 = (param_2->AllocatorInstance).Data;
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = *(wchar_t **)pFVar3;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar14,L"?");
    if (iVar9 == 0) goto LAB_147ecf059;
  }
  iVar9 = param_2->ArrayNum;
  if (iVar9 == 0) {
    if (cStack_1350 != '\0') {
      FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::RemoveAnnotation
                (&this->PlayerStates,(UObjectBase *)param_1);
      return;
    }
    FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_11e8._s_0);
    (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_11e8);
    local_1388._s_0.X = local_11e8._s_0.X;
    local_1388._s_0.Y = local_11e8._s_0.Y;
    local_1388._s_0.Z = local_11e8._s_0.Z;
    uStack_1370 = CONCAT44(uStack_1370._4_4_,local_11b8);
    local_1368 = local_11d0;
    uStack_1360 = dStack_11c8;
    local_1358 = local_11c0;
    if (local_a10 != (void *)0x0) {
      FMemory::Free(local_a10);
    }
  }
  else {
    if (iVar9 != 1) {
      if (iVar9 == 6) {
        bVar8 = false;
        uVar18 = 0;
        lVar16 = 6;
        uVar19 = uVar18;
        do {
          uVar17 = (uint)uVar18;
          uVar10 = 0;
          if ((int)uVar17 < (int)lVar16) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_13a0 = (double)(longlong)(int)lVar16;
            local_13a8 = (double)(longlong)(int)uVar17;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar9 = param_2->ArrayNum;
          lVar16 = (longlong)iVar9;
          iVar2 = *(int *)((param_2->AllocatorInstance).Data + uVar19 + 8);
          uVar10 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar10 = 0;
          }
          uVar18 = (ulonglong)(uVar17 + 1);
          bVar8 = (bool)(bVar8 | uVar10 == 0);
          uVar19 = uVar19 + 0x10;
        } while ((int)(uVar17 + 1) < iVar9);
        if (!bVar8) {
          if (iVar9 < 1) {
            local_13a8 = 0.0;
            local_13a0 = (double)lVar16;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar12 = GetViewPointFromStrings
                              (&local_1258,(FString *)(param_2->AllocatorInstance).Data,iVar9);
          local_1388._s_0.X = (pFVar12->Location).field0_0x0._s_0.X;
          local_1388._s_0.Y = (pFVar12->Location).field0_0x0._s_0.Y;
          local_1388._s_0.Z = (pFVar12->Location).field0_0x0._s_0.Z;
          uStack_1370 = *(undefined8 *)&pFVar12->FOV;
          local_1368 = (pFVar12->Rotation).Pitch;
          uStack_1360 = (pFVar12->Rotation).Yaw;
          local_1358 = (pFVar12->Rotation).Roll;
          param_1 = local_1338;
          goto LAB_147ecee29;
        }
      }
      else if (iVar9 == 7) {
        bVar8 = false;
        uVar18 = 0;
        lVar16 = 7;
        uVar19 = uVar18;
        do {
          uVar17 = (uint)uVar18;
          uVar10 = 0;
          if ((int)uVar17 < (int)lVar16) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_13a0 = (double)(longlong)(int)lVar16;
            local_13a8 = (double)(longlong)(int)uVar17;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar2 = param_2->ArrayNum;
          lVar16 = (longlong)iVar2;
          iVar1 = *(int *)((param_2->AllocatorInstance).Data + uVar19 + 8);
          iVar9 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar9 = 0;
          }
          uVar18 = (ulonglong)(uVar17 + 1);
          bVar8 = (bool)(bVar8 | iVar9 == 0);
          uVar19 = uVar19 + 0x10;
        } while ((int)(uVar17 + 1) < iVar2);
        if (!bVar8) {
          if (iVar2 < 1) {
            local_13a8 = 0.0;
            local_13a0 = (double)lVar16;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          if (*(int *)(pFVar3 + 8) == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = *(wchar_t **)pFVar3;
          }
          ::FName::FName((FName *)&local_1328.Value,pwVar14);
          iVar9 = param_2->ArrayNum;
          if (iVar9 < 2) {
            local_13a8 = 4.94065645841247e-324;
            local_13a0 = (double)(longlong)iVar9;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar12 = GetViewPointFromStrings
                              (&local_1220,(FString *)((param_2->AllocatorInstance).Data + 0x10),
                               iVar9 + -1);
          local_1388._s_0.X = (pFVar12->Location).field0_0x0._s_0.X;
          local_1388._s_0.Y = (pFVar12->Location).field0_0x0._s_0.Y;
          local_1388._s_0.Z = (pFVar12->Location).field0_0x0._s_0.Z;
          uStack_1370 = *(undefined8 *)&pFVar12->FOV;
          local_1368 = (pFVar12->Rotation).Pitch;
          uStack_1360 = (pFVar12->Rotation).Yaw;
          local_1358 = (pFVar12->Rotation).Roll;
          local_12f8 = &local_1328.Value;
          local_12f0 = &local_1388;
          TSet<TTuple<FName,FLockedViewState::FViewPoint>,TDefaultMapHashableKeyFuncs<FName,FLockedViewState::FViewPoint,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FLockedViewState::FViewPoint_const_&>_>
                    ((TSet<TTuple<FName,FLockedViewState::FViewPoint>,TDefaultMapHashableKeyFuncs<FName,FLockedViewState::FViewPoint,0>,FDefaultSetAllocator>
                      *)this,(TPairInitializer<FName_const_&,FLockedViewState::FViewPoint_const_&> *
                             )(local_1330 + 4),(bool *)&local_12f8);
          param_1 = local_1338;
          goto LAB_147ecee29;
        }
      }
LAB_147ecf059:
      if ((byte)LogConsoleResponse._0_1_ < 4) {
        return;
      }
      UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_FLockedViewState::LockView(ULocalPlayer*___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l54::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = *(wchar_t **)pFVar3;
    }
    ::FName::FName(&local_1348,pwVar14);
    FVar5 = local_1348;
    uVar10 = ::GetTypeHash(local_1348.ComparisonIndex.Value);
    if (*(int *)&(this->Viewpoints).field_0x8 != *(int *)&(this->Viewpoints).field_0x34) {
      puVar15 = *(undefined1 **)&(this->Viewpoints).field_0x40;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = &(this->Viewpoints).field_0x38;
      }
      iVar9 = *(int *)(puVar15 +
                      (ulonglong)
                      (*(int *)&(this->Viewpoints).field_0x48 - 1U & FVar5.Number + uVar10) * 4);
      if (iVar9 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this->Viewpoints + (longlong)iVar9 * 0x48) == FVar5) {
            if (iVar9 != -1) {
              pTVar11 = TSet<TTuple<FName,FLockedViewState::FViewPoint>,TDefaultMapHashableKeyFuncs<FName,FLockedViewState::FViewPoint,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<FName,FLockedViewState::FViewPoint>,TDefaultMapHashableKeyFuncs<FName,FLockedViewState::FViewPoint,0>,FDefaultSetAllocator>
                                *)this,local_1348);
              if (pTVar11 == (TTuple<FName,FLockedViewState::FViewPoint> *)0x0) {
                local_1388._s_0.X = 0.0;
                local_1388._8_4_ = 0;
                local_1388._12_4_ = 0;
                local_1388._16_4_ = 0;
                local_1388._20_4_ = 0;
                uVar24 = 0;
                uVar25 = 0;
                local_12a8 = 0;
                uVar26 = 0;
                uVar27 = 0;
                uVar20 = 0;
                uVar21 = 0;
                uVar22 = 0;
                uVar23 = 0;
                local_12d8 = 0;
                uStack_12d0 = 0;
                local_12c8 = 0;
                uStack_12c0 = 0;
                local_12b8 = 0;
                uStack_12b0 = 0;
              }
              else {
                local_12d8 = *(undefined8 *)&pTVar11->field_0x8;
                uStack_12d0 = *(undefined8 *)&pTVar11->field_0x10;
                local_12c8 = *(undefined8 *)&pTVar11->field_0x18;
                uStack_12c0 = *(undefined8 *)&pTVar11->field_0x20;
                local_1388._16_4_ = *(undefined4 *)&pTVar11->field_0x18;
                local_1388._20_4_ = *(undefined4 *)&pTVar11->field_0x1c;
                uVar24 = *(undefined4 *)&pTVar11->field_0x20;
                uVar25 = *(undefined4 *)&pTVar11->field_0x24;
                uVar26 = (undefined4)*(undefined8 *)&pTVar11->field_0x38;
                uVar27 = (undefined4)((ulonglong)*(undefined8 *)&pTVar11->field_0x38 >> 0x20);
                local_12b8 = *(undefined8 *)&pTVar11->field_0x28;
                uStack_12b0 = *(undefined8 *)&pTVar11->field_0x30;
                local_12a8 = *(undefined8 *)&pTVar11->field_0x38;
                local_1388._s_0.X = (double)*(undefined8 *)&pTVar11->field_0x8;
                local_1388._8_4_ = *(undefined4 *)&pTVar11->field_0x10;
                local_1388._12_4_ = *(undefined4 *)&pTVar11->field_0x14;
                uVar20 = *(undefined4 *)&pTVar11->field_0x28;
                uVar21 = *(undefined4 *)&pTVar11->field_0x2c;
                uVar22 = *(undefined4 *)&pTVar11->field_0x30;
                uVar23 = *(undefined4 *)&pTVar11->field_0x34;
              }
              uStack_1360 = (double)CONCAT44(uVar23,uVar22);
              local_1368 = (double)CONCAT44(uVar21,uVar20);
              uStack_1370 = CONCAT44(uVar25,uVar24);
              local_1358 = (double)CONCAT44(uVar27,uVar26);
              goto LAB_147ecee29;
            }
            break;
          }
          iVar9 = *(int *)(*(longlong *)&this->Viewpoints + 0x40 + (longlong)iVar9 * 0x48);
        } while (iVar9 != -1);
      }
    }
    FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_918._s_0);
    (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_918);
    local_1308 = &local_1348;
    local_1388._s_0.X = local_918._s_0.X;
    local_1388._s_0.Y = local_918._s_0.Y;
    local_1388._s_0.Z = local_918._s_0.Z;
    local_1300 = &local_1388;
    local_1368 = local_900;
    uStack_1360 = dStack_8f8;
    local_1358 = local_8f0;
    uStack_1370 = CONCAT44(uStack_1370._4_4_,local_8e8);
    TSet<TTuple<FName,FLockedViewState::FViewPoint>,TDefaultMapHashableKeyFuncs<FName,FLockedViewState::FViewPoint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FLockedViewState::FViewPoint_const_&>_>
              ((TSet<TTuple<FName,FLockedViewState::FViewPoint>,TDefaultMapHashableKeyFuncs<FName,FLockedViewState::FViewPoint,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,FLockedViewState::FViewPoint_const_&> *)
                       local_1330,(bool *)&local_1308);
    if (local_140 != (void *)0x0) {
      FMemory::Free(local_140);
    }
  }
LAB_147ecee29:
  cStack_1350 = '\x01';
  local_1398 = uStack_1360;
  dStack_1390 = local_1358;
  local_13a0 = local_1368;
  local_13a8 = local_1388._s_0.Z;
  ::FString::PrintfImpl(&local_1318,L"%f %f %f %f %f %f");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_1318.Data.ArrayNum != 0) {
    FVar13.Data = local_1318.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformApplicationMisc::ClipboardCopy((wchar_t *)FVar13.Data);
  local_1340 = param_1;
  if ((param_1 == (ULocalPlayer *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x5f,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_1260 = CONCAT71(uStack_134f,cStack_1350);
  local_1298 = local_1388._s_0.X;
  dStack_1290 = local_1388._s_0.Y;
  local_1288 = local_1388._s_0.Z;
  uStack_1280 = uStack_1370;
  local_1278 = local_1368;
  dStack_1270 = uStack_1360;
  local_1268 = local_1358;
  if (((((cStack_1350 == '\0') &&
        (local_1388._s_0.X == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X)) &&
       (local_1388._s_0.Y == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) &&
      ((local_1388._s_0.Z == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z &&
       ((float)uStack_1370 == __real_42b40000)))) &&
     ((local_1368 == UE::Math::TRotator<double>::ZeroRotator.Pitch &&
      ((uStack_1360 == UE::Math::TRotator<double>::ZeroRotator.Yaw &&
       (local_1358 == UE::Math::TRotator<double>::ZeroRotator.Roll)))))) {
    FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::RemoveAnnotation
              (&this->PlayerStates,(UObjectBase *)local_1340);
  }
  else {
    SRWLock = &(this->PlayerStates).AnnotationMapCritical;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    iVar9 = *(int *)&(this->PlayerStates).AnnotationMap.field_0x8;
    iVar2 = *(int *)&(this->PlayerStates).AnnotationMap.field_0x34;
    local_12e8 = &local_1340;
    local_12e0 = &local_1298;
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FLockedViewState::FPlayerState_const_&>_>
              ((TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
                *)&(this->PlayerStates).AnnotationMap,&local_1328,(bool *)&local_12e8);
    pUVar6 = local_1340;
    SRWLock_00 = &(this->PlayerStates).AnnotationCacheCritical;
    if ((SRWLock_00 == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
    (this->PlayerStates).AnnotationCacheValue.ViewPoint.Location.field0_0x0._s_0.X = local_1298;
    (this->PlayerStates).AnnotationCacheValue.ViewPoint.Location.field0_0x0._s_0.Y = dStack_1290;
    (this->PlayerStates).AnnotationCacheKey = (UObjectBase *)pUVar6;
    (this->PlayerStates).AnnotationCacheValue.ViewPoint.Location.field0_0x0._s_0.Z = local_1288;
    *(undefined8 *)&(this->PlayerStates).AnnotationCacheValue.ViewPoint.FOV = uStack_1280;
    (this->PlayerStates).AnnotationCacheValue.ViewPoint.Rotation.Pitch = local_1278;
    (this->PlayerStates).AnnotationCacheValue.ViewPoint.Rotation.Yaw = dStack_1270;
    *(undefined4 *)&(this->PlayerStates).AnnotationCacheValue.ViewPoint.Rotation.Roll =
         (undefined4)local_1268;
    *(undefined4 *)
     ((longlong)&(this->PlayerStates).AnnotationCacheValue.ViewPoint.Rotation.Roll + 4) =
         local_1268._4_4_;
    *(undefined4 *)&(this->PlayerStates).AnnotationCacheValue.bLocked = (undefined4)uStack_1260;
    *(undefined4 *)&(this->PlayerStates).AnnotationCacheValue.field_0x3c = uStack_1260._4_4_;
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (iVar9 == iVar2) {
      FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::ProcessRegistration
                (&this->PlayerStates);
    }
  }
  if (local_1318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1318.Data.AllocatorInstance.Data);
  }
  return;
}

