// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 175

// Call @ 14f0ca200

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),void,FSubmixEffectMultibandCompressor_&>
::Call(void *param_1,FSubmixEffectMultibandCompressor *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0ca206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14f0ca210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>,void,FSubmixEffectDelay_&>
::Call(void *param_1,FSubmixEffectDelay *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *apcStack_88 [5];
  undefined8 *puStack_60;
  FSubmixEffectDelay *pFStack_58;
  longlong lStack_48;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lStack_48 = *(longlong *)param_1;
  plStack_20 = (longlong *)0x0;
  pFStack_58 = param_2;
  if (lStack_48 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    if (*(undefined8 **)((longlong)param_1 + 0x28) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x28);
    }
    (**(code **)*puVar1)(puVar1,&lStack_38);
  }
  apcStack_88[0] = (code *)0x0;
  puStack_60 = FMemory::Malloc(0x50,0x10);
  *puStack_60 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDelay___Z___Z_QEBA_AEAVFSubmixEffectDelay___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puStack_60[2] = pFStack_58;
  puStack_60[4] = lStack_48;
  puStack_60[9] = plStack_20;
  plStack_20 = (longlong *)0x0;
  puStack_60[6] = lStack_38;
  puStack_60[7] = uStack_30;
  puStack_60[8] = uStack_28;
  if (puStack_60[4] != 0) {
    lStack_48 = 0;
  }
  if (puStack_60 + 2 != (undefined8 *)0x0) {
    apcStack_88[0] =
         TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
         ::Call;
  }
  FSoundEffectBase::EffectCommand
            ((FSoundEffectBase *)param_2,(TUniqueFunction<void___cdecl(void)> *)apcStack_88);
  if (lStack_48 != 0) {
    plVar2 = &lStack_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar2 = plStack_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// Call @ 14f0ca220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
::Call(void *param_1,FSubmixEffectFilter *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *apcStack_88 [5];
  undefined8 *puStack_60;
  FSubmixEffectFilter *pFStack_58;
  longlong lStack_48;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lStack_48 = *(longlong *)param_1;
  plStack_20 = (longlong *)0x0;
  pFStack_58 = param_2;
  if (lStack_48 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    if (*(undefined8 **)((longlong)param_1 + 0x28) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x28);
    }
    (**(code **)*puVar1)(puVar1,&lStack_38);
  }
  apcStack_88[0] = (code *)0x0;
  puStack_60 = FMemory::Malloc(0x50,0x10);
  *puStack_60 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectFilter___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectFilter___Z___Z_QEBA_AEAVFSubmixEffectFilter___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puStack_60[2] = pFStack_58;
  puStack_60[4] = lStack_48;
  puStack_60[9] = plStack_20;
  plStack_20 = (longlong *)0x0;
  puStack_60[6] = lStack_38;
  puStack_60[7] = uStack_30;
  puStack_60[8] = uStack_28;
  if (puStack_60[4] != 0) {
    lStack_48 = 0;
  }
  if (puStack_60 + 2 != (undefined8 *)0x0) {
    apcStack_88[0] =
         TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
         ::Call;
  }
  FSoundEffectBase::EffectCommand
            ((FSoundEffectBase *)param_2,(TUniqueFunction<void___cdecl(void)> *)apcStack_88);
  if (lStack_48 != 0) {
    plVar2 = &lStack_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar2 = plStack_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// Call @ 14f0ca230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>,void,FSubmixEffectMultibandCompressor_&>
::Call(void *param_1,FSubmixEffectMultibandCompressor *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *apcStack_88 [5];
  undefined8 *puStack_60;
  FSubmixEffectMultibandCompressor *pFStack_58;
  longlong lStack_48;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lStack_48 = *(longlong *)param_1;
  plStack_20 = (longlong *)0x0;
  pFStack_58 = param_2;
  if (lStack_48 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    if (*(undefined8 **)((longlong)param_1 + 0x28) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x28);
    }
    (**(code **)*puVar1)(puVar1,&lStack_38);
  }
  apcStack_88[0] = (code *)0x0;
  puStack_60 = FMemory::Malloc(0x50,0x10);
  *puStack_60 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectMultibandCompressor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectMultibandCompressor___Z___Z_QEBA_AEAVFSubmixEffectMultibandCompressor___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puStack_60[2] = pFStack_58;
  puStack_60[4] = lStack_48;
  puStack_60[9] = plStack_20;
  plStack_20 = (longlong *)0x0;
  puStack_60[6] = lStack_38;
  puStack_60[7] = uStack_30;
  puStack_60[8] = uStack_28;
  if (puStack_60[4] != 0) {
    lStack_48 = 0;
  }
  if (puStack_60 + 2 != (undefined8 *)0x0) {
    apcStack_88[0] =
         TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
         ::Call;
  }
  FSoundEffectBase::EffectCommand
            ((FSoundEffectBase *)param_2,(TUniqueFunction<void___cdecl(void)> *)apcStack_88);
  if (lStack_48 != 0) {
    plVar2 = &lStack_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar2 = plStack_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// Call @ 14f0ca240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>,void,FSubmixEffectTapDelay_&>
::Call(void *param_1,FSubmixEffectTapDelay *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *apcStack_88 [5];
  undefined8 *puStack_60;
  FSubmixEffectTapDelay *pFStack_58;
  longlong lStack_48;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lStack_48 = *(longlong *)param_1;
  plStack_20 = (longlong *)0x0;
  pFStack_58 = param_2;
  if (lStack_48 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    if (*(undefined8 **)((longlong)param_1 + 0x28) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x28);
    }
    (**(code **)*puVar1)(puVar1,&lStack_38);
  }
  apcStack_88[0] = (code *)0x0;
  puStack_60 = FMemory::Malloc(0x50,0x10);
  *puStack_60 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectTapDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectTapDelay___Z___Z_QEBA_AEAVFSubmixEffectTapDelay___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puStack_60[2] = pFStack_58;
  puStack_60[4] = lStack_48;
  puStack_60[9] = plStack_20;
  plStack_20 = (longlong *)0x0;
  puStack_60[6] = lStack_38;
  puStack_60[7] = uStack_30;
  puStack_60[8] = uStack_28;
  if (puStack_60[4] != 0) {
    lStack_48 = 0;
  }
  if (puStack_60 + 2 != (undefined8 *)0x0) {
    apcStack_88[0] =
         TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
         ::Call;
  }
  FSoundEffectBase::EffectCommand
            ((FSoundEffectBase *)param_2,(TUniqueFunction<void___cdecl(void)> *)apcStack_88);
  if (lStack_48 != 0) {
    plVar2 = &lStack_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar2 = plStack_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// Call @ 14f0ca250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined8 *)param_1;
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)param_1 + 0x10);
  plVar3 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014f0ca29f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,uVar1);
  return;
}

// Call @ 14f0ca2b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined8 *)param_1;
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)param_1 + 0x10);
  plVar3 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014f0ca2ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,uVar1);
  return;
}

// Call @ 14f0ca310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined8 *)param_1;
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)param_1 + 0x10);
  plVar3 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014f0ca35f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,uVar1);
  return;
}

// Call @ 14f0ca370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined8 *)param_1;
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)param_1 + 0x10);
  plVar3 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014f0ca3bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,uVar1);
  return;
}

// Call @ 14f0ca3d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSourceEffectEnvFollowerNotifier::AddEnvFollowerInstance'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  TPairInitializer<unsigned_int_const_&,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData_const_&>
  TStackX_8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint *puStack_40;
  void **ppvStack_38;
  void *pvStack_30;
  undefined8 uStack_28;
  ForAnyElementType FStack_20;
  undefined8 uStack_18;
  
  *(int *)(*(longlong *)param_1 + 0x14) = *(int *)(*(longlong *)param_1 + 0x14) + 1;
  lVar1 = *(longlong *)param_1;
  uVar6 = *(uint *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
    lVar8 = *(longlong *)(lVar1 + 0x70);
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      lVar8 = lVar1 + 0x68;
    }
    uVar4 = *(uint *)(lVar8 + (ulonglong)(*(int *)(lVar1 + 0x78) - 1U & uVar6) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar4 * 0x30 + *(longlong *)(lVar1 + 0x30));
        if (*puVar7 == uVar6) {
          TStackX_8.Value._0_4_ = *(undefined4 *)((longlong)param_1 + 0xc);
          puVar9 = puVar7 + 2;
          if (puVar7 == (uint *)0x0) {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            uStack_48 = TStackX_8.Value._0_4_;
            if (((*(undefined4 **)(puVar9 + 4) <= &uStack_48) &&
                (&uStack_48 < *(undefined4 **)(puVar9 + 4) + (longlong)(int)puVar9[7] * 2)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar6 = puVar9[6];
            if (uVar6 == puVar9[7]) {
              uVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,(ForAnyElementType *)(puVar9 + 4),(int *)(puVar9 + 7));
            }
            puVar9[6] = uVar6 + 1;
            *(ulonglong *)(*(longlong *)(puVar9 + 4) + (longlong)(int)uVar6 * 8) =
                 CONCAT44(uStack_44,uStack_48);
            return;
          }
          goto LAB_14f0c1c21;
        }
        uVar4 = puVar7[10];
      } while (uVar4 != 0xffffffff);
    }
  }
  TStackX_8.Value._0_4_ = *(undefined4 *)((longlong)param_1 + 0xc);
LAB_14f0c1c21:
  pvStack_30 = (void *)0x0;
  uStack_28 = 0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&FStack_20,(int *)((longlong)&uStack_18 + 4));
  uStack_18 = CONCAT44(uStack_18._4_4_,iVar5 + 1);
  *(ulonglong *)(FStack_20.Data + (longlong)iVar5 * 8) =
       CONCAT44(TStackX_8.Value._4_4_,TStackX_8.Value._0_4_);
  ppvStack_38 = &pvStack_30;
  puStack_40 = (uint *)((longlong)param_1 + 8);
  TSet<TTuple<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData>,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData_const_&>_>
            ((TSet<TTuple<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData>,TDefaultMapHashableKeyFuncs<unsigned_int,FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData,0>,FDefaultSetAllocator>
              *)(*(longlong *)param_1 + 0x30),&TStackX_8,(bool *)&puStack_40);
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  if (pvStack_30 != (void *)0x0) {
    FMemory::Free(pvStack_30);
  }
  return;
}

// Call @ 14f0ca3e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectTapDelayPreset::AddTap'::__l2::<lambda_1>,void,FSubmixEffectTapDelay_&>
::Call(void *param_1,FSubmixEffectTapDelay *param_2)

{
  FSubmixEffectTapDelay::AddTap(param_2,*(int *)param_1);
  return;
}

// Call @ 14f0ca400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::Init'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)param_1;
  lVar2 = *(longlong *)(lVar1 + 0x8f8);
  if (lVar2 == 0) {
    iVar3 = 0x100;
    iVar4 = 0;
  }
  else {
    iVar3 = *(int *)(lVar2 + 0x40);
    iVar4 = *(int *)(lVar2 + 0x50);
  }
  ::Audio::FMonoWaveTable::Init
            ((FMonoWaveTable *)(lVar1 + 0x900),(int *)(lVar1 + 0x1010),iVar4,(float)iVar3);
  return;
}

// Call @ 14f0ca440

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::InitSynth'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  ::Audio::FMonoWaveTable::Init
            ((FMonoWaveTable *)(lVar1 + 0x900),(int *)(lVar1 + 0x1010),
             *(int *)((longlong)param_1 + 8),(float)*(int *)(*(longlong *)(lVar1 + 0x8f8) + 0x40));
  return;
}

// Call @ 14f0ca470

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`UGranularSynth::NoteOff'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  ::Audio::FGranularSynth::NoteOff
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),
             (uint)(longlong)*(float *)((longlong)param_1 + 8),*(bool *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0ca490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::NoteOff'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::NoteOff
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),(int)*(float *)((longlong)param_1 + 8),
             *(bool *)((longlong)param_1 + 0xc),*(bool *)((longlong)param_1 + 0xd));
  return;
}

// Call @ 14f0ca4c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::NoteOff'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FMonoWaveTable::NoteOff
            ((FMonoWaveTable *)(*(longlong *)param_1 + 0x900),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca4e0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`UGranularSynth::NoteOn'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  ::Audio::FGranularSynth::NoteOn
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),
             (uint)(longlong)*(float *)((longlong)param_1 + 8),
             (float)*(int *)((longlong)param_1 + 0xc),*(float *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 14f0ca510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::NoteOn'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::NoteOn
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),
             (uint)(longlong)*(float *)((longlong)param_1 + 8),
             (float)*(int *)((longlong)param_1 + 0xc),*(float *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 14f0ca540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::NoteOn'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ForAnyElementType *pFVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float afStack_28 [8];
  
  lVar3 = *(longlong *)param_1;
  afStack_28[0] = *(float *)((longlong)param_1 + 8);
  fVar2 = *(float *)((longlong)param_1 + 0xc);
  if (fVar2 < __real_322bcc77) {
    ::Audio::FMonoWaveTable::NoteOff((FMonoWaveTable *)(lVar3 + 0x900),afStack_28[0]);
    return;
  }
  pFVar1 = (ForAnyElementType *)(lVar3 + 0xff8);
  *(float *)(lVar3 + 0x908) = afStack_28[0];
  if (((pFVar1->Data <= (FScriptContainerElement *)afStack_28) &&
      ((FScriptContainerElement *)afStack_28 < pFVar1->Data + (longlong)*(int *)(lVar3 + 0x1004) * 4
      )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(lVar3 + 0x1000);
  if (iVar6 == *(int *)(lVar3 + 0x1004)) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)(lVar3 + 0x1004));
  }
  *(int *)(lVar3 + 0x1000) = iVar6 + 1;
  *(float *)(pFVar1->Data + (longlong)iVar6 * 4) = afStack_28[0];
  (**(code **)(*(longlong *)(lVar3 + 0xac8) + 0x18))((longlong *)(lVar3 + 0xac8),fVar2);
  (**(code **)(*(longlong *)(lVar3 + 0xb78) + 0x10))();
  *(byte *)(lVar3 + 0x1008) = *(byte *)(lVar3 + 0x1008) | 2;
  return;
}

// Call @ 14f0ca550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::RefreshWaveTable'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  TArray<float,TSizedDefaultAllocator<32>_> TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 0x18);
  lVar2 = (longlong)TStack_18.ArrayNum;
  lVar1 = *(longlong *)param_1;
  _Src = *(void **)((longlong)param_1 + 0x10);
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar2 << 2);
  }
  ::Audio::FMonoWaveTable::UpdateWaveTable
            ((FMonoWaveTable *)(lVar1 + 0x900),*(int *)((longlong)param_1 + 8),&TStack_18);
  if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_18.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14f0ca560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSourceEffectEnvFollowerNotifier::RemoveEnvFollowerInstance'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  ForAnyElementType *pFVar12;
  uint uVar13;
  
  if ((*(int *)(*(longlong *)param_1 + 0x14) < 1) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1130621927031832456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectEnvelopeFollower.cpp"
                         ,0x78,"NumInstances > 0"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(int *)(*(longlong *)param_1 + 0x14) = *(int *)(*(longlong *)param_1 + 0x14) + -1;
  lVar1 = *(longlong *)param_1;
  if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
    lVar6 = *(longlong *)(lVar1 + 0x70);
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      lVar6 = lVar1 + 0x68;
    }
    uVar4 = *(uint *)(lVar6 + (ulonglong)
                              (*(int *)(lVar1 + 0x78) - 1U & *(uint *)((longlong)param_1 + 8)) * 4);
    if (uVar4 != 0xffffffff) {
      while (puVar7 = (uint *)((longlong)(int)uVar4 * 0x30 + *(longlong *)(lVar1 + 0x30)),
            *puVar7 != *(uint *)((longlong)param_1 + 8)) {
        uVar4 = puVar7[10];
        if (uVar4 == 0xffffffff) {
          return;
        }
      }
      puVar9 = (uint *)0x0;
      puVar10 = puVar7 + 2;
      if (puVar7 == (uint *)0x0) {
        puVar10 = puVar9;
      }
      if (puVar10 != (uint *)0x0) {
        puVar10 = puVar7 + 8;
        if (puVar7 == (uint *)0x0) {
          puVar10 = (uint *)&DAT_00000018;
        }
        if (0 < (int)*puVar10) {
          pFVar12 = (ForAnyElementType *)(puVar7 + 6);
          puVar11 = puVar9;
          if (puVar7 == (uint *)0x0) {
            pFVar12 = (ForAnyElementType *)&DAT_00000010;
          }
          do {
            uVar8 = (uint)puVar9;
            uVar13 = ~uVar8 >> 0x1f;
            uVar4 = 0;
            if ((int)uVar8 < *(int *)&pFVar12[1].Data) {
              uVar4 = uVar13;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(int *)((longlong)puVar11 + (longlong)pFVar12->Data) ==
                *(int *)((longlong)param_1 + 0xc)) {
              uVar4 = 0;
              if ((int)uVar8 < *(int *)&pFVar12[1].Data) {
                uVar4 = uVar13;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar5 = *(int *)&pFVar12[1].Data + ~uVar8;
              if (1 < iVar5) {
                iVar5 = 1;
              }
              if (iVar5 != 0) {
                memmove(pFVar12->Data + (longlong)(int)uVar8 * 8,
                        pFVar12->Data + (longlong)(*(int *)&pFVar12[1].Data - iVar5) * 8,
                        (longlong)iVar5 << 3);
              }
              *(int *)&pFVar12[1].Data = *(int *)&pFVar12[1].Data + -1;
              ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,pFVar12,*(int *)&pFVar12[1].Data,
                         (int *)((longlong)&pFVar12[1].Data + 4));
              return;
            }
            puVar9 = (uint *)(ulonglong)(uVar8 + 1);
            puVar11 = puVar11 + 2;
          } while ((int)(uVar8 + 1) < (int)*puVar10);
        }
      }
    }
  }
  return;
}

// Call @ 14f0ca570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthSamplePlayer::SeekToTime'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FSampleBufferReader::SeekTime
            ((FSampleBufferReader *)(*(longlong *)param_1 + 0x8f8),*(float *)((longlong)param_1 + 8)
             ,*(Type *)((longlong)param_1 + 0xc),*(bool *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 14f0ca5a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)param_1 + 8);
  if (*(float *)((longlong)param_1 + 8) <= __real_40800000) {
    fVar1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0ca5be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xac8) + 0x60))
            (*(longlong *)param_1 + 0xac8,fVar1);
  return;
}

// Call @ 14f0ca5d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0ca5e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xac8) + 0x98))
            ((longlong *)(*(longlong *)param_1 + 0xac8),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0ca611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xac8) + 0x88))
            ((longlong *)(*(longlong *)param_1 + 0xac8),*(undefined1 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)param_1 + 8);
  if (*(float *)((longlong)param_1 + 8) <= __real_40800000) {
    fVar1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0ca63e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xac8) + 0x68))
            (*(longlong *)param_1 + 0xac8,fVar1);
  return;
}

// Call @ 14f0ca650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0ca665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xac8) + 0x90))
            ((longlong *)(*(longlong *)param_1 + 0xac8),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0ca69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xac8) + 0x78))(*(longlong *)param_1 + 0xac8);
  return;
}

// Call @ 14f0ca6b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)param_1 + 8);
  if (*(float *)((longlong)param_1 + 8) <= __real_40800000) {
    fVar1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0ca6ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xac8) + 0x78))
            (*(longlong *)param_1 + 0xac8,fVar1);
  return;
}

// Call @ 14f0ca6e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x928) = *(undefined4 *)((longlong)param_1 + 8);
  return;
}

// Call @ 14f0ca700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetAttackTime'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FGranularSynth::SetAttackTime
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetAttackTime'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetEnvAttackTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetBitModulator'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
::Call(void *param_1,FSourceEffectBitCrusher *param_2)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *pUStack_88;
  USoundModulatorBase *pUStack_80;
  initializer_list<USoundModulatorBase_const_*> iStack_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  TStack_68;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUStack_88 = *(USoundModulatorBase **)param_1;
  iStack_78._First = &pUStack_88;
  iStack_78._Last = &pUStack_80;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&TStack_68,&iStack_78);
  ::Audio::FModulationDestination::UpdateModulators(&param_2->BitMod,&TStack_68);
  TStack_68.HashSize = 0;
  if (TStack_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_68.Elements);
  return;
}

// Call @ 14f0ca750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetBitModulators'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
::Call(void *param_1,FSourceEffectBitCrusher *param_2)

{
  ::Audio::FModulationDestination::UpdateModulators
            (&param_2->BitMod,
             *(TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
               **)param_1);
  return;
}

// Call @ 14f0ca770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetBits'::__l2::<lambda_1>,void,FSourceEffectBitCrusherSettings_&>
::Call(void *param_1,FSourceEffectBitCrusherSettings *param_2)

{
  (param_2->BitModulation).Value = *(float *)param_1;
  return;
}

// Call @ 14f0ca780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetChorusDepth'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FChorus::SetDepth
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Left,*(float *)((longlong)param_1 + 8));
  ::Audio::FChorus::SetDepth
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Center,*(float *)((longlong)param_1 + 8));
  ::Audio::FChorus::SetDepth
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Right,*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca7e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetChorusEnabled'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(longlong *)param_1 + 0xfb8);
  *(byte *)(*(longlong *)param_1 + 0xfb8) =
       (*(char *)((longlong)param_1 + 8) << 2 ^ bVar1) & 4 ^ bVar1;
  return;
}

// Call @ 14f0ca810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetChorusFeedback'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FChorus::SetFeedback
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Left,*(float *)((longlong)param_1 + 8));
  ::Audio::FChorus::SetFeedback
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Center,*(float *)((longlong)param_1 + 8));
  ::Audio::FChorus::SetFeedback
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Right,*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetChorusFrequency'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FChorus::SetFrequency
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Left,*(float *)((longlong)param_1 + 8));
  ::Audio::FChorus::SetFrequency
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Center,*(float *)((longlong)param_1 + 8));
  ::Audio::FChorus::SetFrequency
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Right,*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca8d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetDecayTime'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FGranularSynth::SetAttackTime
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca8f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetDecayTime'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetEnvDecayTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectDelayPreset::SetDelay'::__l2::<lambda_1>,void,FSubmixEffectDelay_&>
::Call(void *param_1,FSubmixEffectDelay *param_2)

{
  FSubmixEffectDelay::SetDelayLineLength(param_2,*(float *)param_1);
  return;
}

// Call @ 14f0ca930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetDepth'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
::Call(void *param_1,FSourceEffectChorusSettings *param_2)

{
  (param_2->DepthModulation).Value = *(float *)param_1;
  return;
}

// Call @ 14f0ca940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetDepthModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *pUStack_88;
  USoundModulatorBase *pUStack_80;
  initializer_list<USoundModulatorBase_const_*> iStack_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  TStack_68;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUStack_88 = *(USoundModulatorBase **)param_1;
  iStack_78._First = &pUStack_88;
  iStack_78._Last = &pUStack_80;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&TStack_68,&iStack_78);
  ::Audio::FModulationDestination::UpdateModulators(&param_2->DepthMod,&TStack_68);
  TStack_68.HashSize = 0;
  if (TStack_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_68.Elements);
  return;
}

// Call @ 14f0ca950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetDepthModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  ::Audio::FModulationDestination::UpdateModulators
            (&param_2->DepthMod,
             *(TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
               **)param_1);
  return;
}

// Call @ 14f0ca970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FToneGenerator::SetDistance'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x58) = *(undefined4 *)((longlong)param_1 + 8);
  return;
}

// Call @ 14f0ca980

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetDry'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
::Call(void *param_1,FSourceEffectChorusSettings *param_2)

{
  (param_2->DryModulation).Value = *(float *)param_1;
  return;
}

// Call @ 14f0ca990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetDryModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *pUStack_88;
  USoundModulatorBase *pUStack_80;
  initializer_list<USoundModulatorBase_const_*> iStack_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  TStack_68;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUStack_88 = *(USoundModulatorBase **)param_1;
  iStack_78._First = &pUStack_88;
  iStack_78._Last = &pUStack_80;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&TStack_68,&iStack_78);
  ::Audio::FModulationDestination::UpdateModulators(&param_2->DryMod,&TStack_68);
  TStack_68.HashSize = 0;
  if (TStack_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_68.Elements);
  return;
}

// Call @ 14f0ca9a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetDryModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  ::Audio::FModulationDestination::UpdateModulators
            (&param_2->DryMod,
             *(TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
               **)param_1);
  return;
}

// Call @ 14f0ca9c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetEnableLegato'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetEnvLegatoEnabled
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(bool *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0ca9e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetEnablePolyphony'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  if (*(char *)((longlong)param_1 + 8) == '\0') {
    *(undefined4 *)(lVar1 + 0x8d4) = 1;
    ::Audio::FEpicSynth1::StopAllVoicesExceptNewest((FEpicSynth1 *)(lVar1 + 0x8c8));
    return;
  }
  *(undefined4 *)(lVar1 + 0x8d4) = *(undefined4 *)(lVar1 + 0x8d0);
  return;
}

// Call @ 14f0caa20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetEnableRetrigger'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetEnvRetriggerMode
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(bool *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0caa40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetEnableUnison'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(longlong *)param_1 + 0xfb8);
  *(byte *)(*(longlong *)param_1 + 0xfb8) = (bVar1 ^ *(byte *)((longlong)param_1 + 8)) & 1 ^ bVar1;
  return;
}

// Call @ 14f0caa70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetFeedback'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
::Call(void *param_1,FSourceEffectChorusSettings *param_2)

{
  (param_2->FeedbackModulation).Value = *(float *)param_1;
  return;
}

// Call @ 14f0caa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetFeedbackModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *pUStack_88;
  USoundModulatorBase *pUStack_80;
  initializer_list<USoundModulatorBase_const_*> iStack_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  TStack_68;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUStack_88 = *(USoundModulatorBase **)param_1;
  iStack_78._First = &pUStack_88;
  iStack_78._Last = &pUStack_80;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&TStack_68,&iStack_78);
  ::Audio::FModulationDestination::UpdateModulators(&param_2->FeedbackMod,&TStack_68);
  TStack_68.HashSize = 0;
  if (TStack_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_68.Elements);
  return;
}

// Call @ 14f0caa90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetFeedbackModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  ::Audio::FModulationDestination::UpdateModulators
            (&param_2->FeedbackMod,
             *(TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
               **)param_1);
  return;
}

// Call @ 14f0caab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetFilterAlgorithm'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  *(undefined1 *)(lVar1 + 0x978) = *(undefined1 *)((longlong)param_1 + 8);
  ::Audio::FEpicSynth1::SwitchFilter((FEpicSynth1 *)(lVar1 + 0x8c8));
  return;
}

// Call @ 14f0caad0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterAlgorithm'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
::Call(void *param_1,FSubmixEffectFilter *param_2)

{
  FSubmixEffectFilter::SetFilterAlgorithm(param_2,*(ESubmixFilterAlgorithm *)param_1);
  return;
}

// Call @ 14f0caaf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
::Call(void *param_1,FSubmixEffectFilter *param_2)

{
  float fVar1;
  
  fVar1 = param_2->SampleRate * ___real_3efd70a4;
  if (*(float *)param_1 <= fVar1) {
    fVar1 = *(float *)param_1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar1 - param_2->FilterFrequency) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    param_2->FilterFrequency = fVar1;
                    /* WARNING: Could not recover jumptable at 0x00014f0cab38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->CurrentFilter->_padding_ + 0x10))();
    return;
  }
  return;
}

// Call @ 14f0cab50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
::Call(void *param_1,FSubmixEffectFilter *param_2)

{
  if (__real_322bcc77 <
      (float)((uint)(*(float *)param_1 - param_2->FilterFrequencyMod) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    param_2->FilterFrequencyMod = *(float *)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014f0cab81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->CurrentFilter->_padding_ + 0x18))();
    return;
  }
  return;
}

// Call @ 14f0cab90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)param_1 + 8);
  if (*(float *)((longlong)param_1 + 8) <= __real_40800000) {
    fVar1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0cabae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xb78) + 0x60))
            (*(longlong *)param_1 + 0xb78,fVar1);
  return;
}

// Call @ 14f0cabc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cabd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xb78) + 0x98))
            ((longlong *)(*(longlong *)param_1 + 0xb78),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cabf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cac01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xb78) + 0x88))
            ((longlong *)(*(longlong *)param_1 + 0xb78),*(undefined1 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cac10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cac25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xb78) + 0x90))
            ((longlong *)(*(longlong *)param_1 + 0xb78),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cac40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cac51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xb78) + 0x80))
            ((longlong *)(*(longlong *)param_1 + 0xb78),*(undefined1 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cac60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)param_1 + 8);
  if (*(float *)((longlong)param_1 + 8) <= __real_40800000) {
    fVar1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0cac7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xb78) + 0x78))
            (*(longlong *)param_1 + 0xb78,fVar1);
  return;
}

// Call @ 14f0cac90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0caca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xb78) + 0x70))
            ((longlong *)(*(longlong *)param_1 + 0xb78),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cacb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)param_1 + 8);
  if (*(float *)((longlong)param_1 + 8) <= __real_40800000) {
    fVar1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0cacce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xb78) + 0x68))
            (*(longlong *)param_1 + 0xb78,fVar1);
  return;
}

// Call @ 14f0cace0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetFilterFrequency'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetFilterFrequency
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cad00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetFilterFrequencyMod'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar2 = *(longlong *)param_1;
  uVar7 = 0;
  uVar1 = *(undefined4 *)((longlong)param_1 + 8);
  *(undefined4 *)(lVar2 + 0x968) = uVar1;
  if (0 < *(int *)(lVar2 + 0x948)) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(lVar2 + 0x948)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x940) + lVar8) + 0x908);
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar1);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < *(int *)(lVar2 + 0x948));
  }
  return;
}

// Call @ 14f0cad10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetFilterQ'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::SetFilterQ
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cad30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterQ'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
::Call(void *param_1,FSubmixEffectFilter *param_2)

{
  if (__real_322bcc77 <
      (float)((uint)(*(float *)param_1 - param_2->FilterQ) & __xmm_7fffffff7fffffff7fffffff7fffffff)
     ) {
    param_2->FilterQ = *(float *)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014f0cad61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->CurrentFilter->_padding_ + 0x20))();
    return;
  }
  return;
}

// Call @ 14f0cad70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetFilterQMod'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar2 = *(longlong *)param_1;
  uVar7 = 0;
  uVar1 = *(undefined4 *)((longlong)param_1 + 8);
  *(undefined4 *)(lVar2 + 0x970) = uVar1;
  if (0 < *(int *)(lVar2 + 0x948)) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(lVar2 + 0x948)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x940) + lVar8) + 0x908);
      (**(code **)(*plVar3 + 0x20))(plVar3,uVar1);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < *(int *)(lVar2 + 0x948));
  }
  return;
}

// Call @ 14f0cad80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterQMod'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
::Call(void *param_1,FSubmixEffectFilter *param_2)

{
  if (__real_322bcc77 <
      (float)((uint)(*(float *)param_1 - param_2->FilterQMod) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    param_2->FilterQMod = *(float *)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014f0cadb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->CurrentFilter->_padding_ + 0x28))();
    return;
  }
  return;
}

// Call @ 14f0cadc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetFilterType'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetFilterType
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),(uint)*(byte *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cade0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterType'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
::Call(void *param_1,FSubmixEffectFilter *param_2)

{
  ESubmixFilterType EVar1;
  
  EVar1 = *(ESubmixFilterType *)param_1;
  if (param_2->FilterType != EVar1) {
    param_2->FilterType = EVar1;
                    /* WARNING: Could not recover jumptable at 0x00014f0cadfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->CurrentFilter->_padding_ + 0x48))(param_2->CurrentFilter,EVar1);
    return;
  }
  return;
}

// Call @ 14f0cae10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FToneGenerator::SetFrequency'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FSineOsc::SetFrequency
            ((FSineOsc *)(*(longlong *)param_1 + 0x20),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cae30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetFrequency'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
::Call(void *param_1,FSourceEffectChorusSettings *param_2)

{
  (param_2->FrequencyModulation).Value = *(float *)param_1;
  return;
}

// Call @ 14f0cae40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFrequency'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x908) = *(undefined4 *)((longlong)param_1 + 8);
  return;
}

// Call @ 14f0cae60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetFrequencyModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *pUStack_88;
  USoundModulatorBase *pUStack_80;
  initializer_list<USoundModulatorBase_const_*> iStack_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  TStack_68;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUStack_88 = *(USoundModulatorBase **)param_1;
  iStack_78._First = &pUStack_88;
  iStack_78._Last = &pUStack_80;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&TStack_68,&iStack_78);
  ::Audio::FModulationDestination::UpdateModulators(&param_2->FrequencyMod,&TStack_68);
  TStack_68.HashSize = 0;
  if (TStack_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_68.Elements);
  return;
}

// Call @ 14f0cae70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetFrequencyModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  ::Audio::FModulationDestination::UpdateModulators
            (&param_2->FrequencyMod,
             *(TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
               **)param_1);
  return;
}

// Call @ 14f0cae90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x930) = *(undefined4 *)((longlong)param_1 + 8);
  return;
}

// Call @ 14f0caeb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetGainDb'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::SetGainDb
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0caed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetGrainDuration'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = *(double *)((longlong)param_1 + 0x10);
  local_18._s_0.Y = *(double *)((longlong)param_1 + 0x18);
  ::Audio::FGranularSynth::SetGrainDuration
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8),
             (TVector2<double> *)&local_18._s_0);
  return;
}

// Call @ 14f0caf10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetGrainEnvelopeType'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FGranularSynth::SetGrainEnvelopeType
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),(uint)*(byte *)((longlong)param_1 + 8)
            );
  return;
}

// Call @ 14f0caf30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetGrainPan'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = *(double *)((longlong)param_1 + 0x10);
  local_18._s_0.Y = *(double *)((longlong)param_1 + 0x18);
  ::Audio::FGranularSynth::SetGrainPan
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8),
             (TVector2<double> *)&local_18._s_0);
  return;
}

// Call @ 14f0caf70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetGrainPitch'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = *(double *)((longlong)param_1 + 0x10);
  local_18._s_0.Y = *(double *)((longlong)param_1 + 0x18);
  ::Audio::FGranularSynth::SetGrainPitch
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8),
             (TVector2<double> *)&local_18._s_0);
  return;
}

// Call @ 14f0cafb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetGrainProbability'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FGranularSynth::SetGrainProbability
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cafd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetGrainVolume'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = *(double *)((longlong)param_1 + 0x10);
  local_18._s_0.Y = *(double *)((longlong)param_1 + 0x18);
  ::Audio::FGranularSynth::SetGrainVolume
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8),
             (TVector2<double> *)&local_18._s_0);
  return;
}

// Call @ 14f0cb010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetGrainsPerSecond'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FGranularSynth::SetGrainsPerSecond
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,void,FSubmixEffectDelay_&>
::Call(void *param_1,FSubmixEffectDelay *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *(float *)param_1 * __real_3a83126f;
  fVar2 = param_2->TargetDelayLineLength;
  param_2->InterpolationTime = fVar4;
  if ((param_2->InterpolationInfo).bIsInit != false) {
    (param_2->InterpolationInfo).bIsInit = false;
    (param_2->InterpolationInfo).DurationTicks = 0;
    (param_2->InterpolationInfo).CurrentTick = 0;
    (param_2->InterpolationInfo).CurrentValue = fVar2;
    return;
  }
  iVar3 = (int)(fVar4 * (param_2->InterpolationInfo).SampleRate);
  (param_2->InterpolationInfo).DurationTicks = iVar3;
  (param_2->InterpolationInfo).CurrentTick = 0;
  pfVar1 = &(param_2->InterpolationInfo).CurrentValue;
  if (iVar3 == 0) {
    *pfVar1 = fVar2;
    return;
  }
  fVar4 = *pfVar1;
  (param_2->InterpolationInfo).StartValue = fVar4;
  (param_2->InterpolationInfo).DeltaValue = fVar2 - fVar4;
  return;
}

// Call @ 14f0cb040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectTapDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,void,FSubmixEffectTapDelay_&>
::Call(void *param_1,FSubmixEffectTapDelay *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)param_1 * __real_3a83126f;
  param_2->bSettingsModified = true;
  param_2->InterpolationTime = fVar1;
  return;
}

// Call @ 14f0cb070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetLFOFrequency'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetLFOFrequency
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(int *)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetLFOFrequencyMod'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar2 = *(int *)((longlong)param_1 + 8);
  lVar3 = *(longlong *)param_1;
  fVar1 = *(float *)((longlong)param_1 + 0xc);
  if ((iVar2 < 2) && (uVar7 = 0, 0 < *(int *)(lVar3 + 0x948))) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(lVar3 + 0x948)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::Audio::IOscBase::SetFrequencyMod
                ((IOscBase *)
                 (*(longlong *)(lVar8 + *(longlong *)(lVar3 + 0x940)) + 0xa70 +
                 (longlong)iVar2 * 0x170),fVar1);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < *(int *)(lVar3 + 0x948));
  }
  return;
}

// Call @ 14f0cb0a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetLFOGain'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::SetLFOGain
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(int *)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb0c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetLFOGainMod'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  
  iVar2 = *(int *)((longlong)param_1 + 8);
  lVar3 = *(longlong *)param_1;
  if ((iVar2 < 2) && (uVar7 = 0, 0 < *(int *)(lVar3 + 0x948))) {
    fVar9 = *(float *)((longlong)param_1 + 0xc);
    if (__real_3f800000 <= *(float *)((longlong)param_1 + 0xc)) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(lVar3 + 0x948)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = uVar7 + 1;
      plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x940) + lVar8);
      lVar8 = lVar8 + 8;
      *(float *)(*plVar1 + 0xab0 + (longlong)iVar2 * 0x170) = fVar9;
    } while ((int)uVar7 < *(int *)(lVar3 + 0x948));
  }
  return;
}

// Call @ 14f0cb0d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetLFOMode'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::SetLFOMode
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(int *)((longlong)param_1 + 8),
             (uint)*(byte *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb0f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetLFOPatch'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetLFOPatch
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(int *)((longlong)param_1 + 8),
             *(ESynthLFOPatchType *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetLFOType'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::SetLFOType
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(int *)((longlong)param_1 + 8),
             (uint)*(byte *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x918) = *(undefined4 *)((longlong)param_1 + 8);
  return;
}

// Call @ 14f0cb150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cb165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xcd8) + 0x20))
            ((longlong *)(*(longlong *)param_1 + 0xcd8),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb170

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetModEnvAttackTime'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetModEnvAttackTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetModEnvBiasInvert'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetModEnvBiasInvert
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(bool *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb1b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetModEnvBiasPatch'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetModEnvBiasPatch
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),
             *(ESynthModEnvBiasPatch *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb1d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetModEnvDecayTime'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetModEnvDecayTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb1f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetModEnvDepth'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetModEnvDepth
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetModEnvInvert'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetModEnvInvert
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(bool *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetModEnvPatch'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetModEnvPatch
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),
             *(ESynthModEnvPatch *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetModEnvReleaseTime'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetModEnvReleaseTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetModEnvSustainGain'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetModEnvSustainGain
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb290

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetOscCents'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetOscCents
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(int *)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb2b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetOscFrequencyMod'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar2 = *(int *)((longlong)param_1 + 8);
  lVar3 = *(longlong *)param_1;
  fVar1 = *(float *)((longlong)param_1 + 0xc);
  if ((iVar2 < 2) && (uVar7 = 0, 0 < *(int *)(lVar3 + 0x948))) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(lVar3 + 0x948)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::Audio::IOscBase::SetDetune
                ((IOscBase *)
                 (*(longlong *)(lVar8 + *(longlong *)(lVar3 + 0x940)) + (longlong)iVar2 * 0x140),
                 fVar1);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < *(int *)(lVar3 + 0x948));
  }
  return;
}

// Call @ 14f0cb2c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetOscGain'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::SetOscGain
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(int *)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb2e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetOscGainMod'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar3 = *(int *)((longlong)param_1 + 8);
  lVar4 = *(longlong *)param_1;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  if ((iVar3 < 2) && (uVar8 = 0, 0 < *(int *)(lVar4 + 0x948))) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar4 + 0x948)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = uVar8 + 1;
      plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x940) + lVar9);
      lVar9 = lVar9 + 8;
      *(undefined4 *)(*plVar1 + 0x40 + (longlong)iVar3 * 0x140) = uVar2;
    } while ((int)uVar8 < *(int *)(lVar4 + 0x948));
  }
  return;
}

// Call @ 14f0cb2f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetOscOctave'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetOscOctave
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(int *)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetOscPulsewidth'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetOscPulseWidth
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(int *)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb330

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetOscSemitones'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetOscSemitones
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(int *)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb350

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetOscSync'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::SetOscSync
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(bool *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetOscType'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::SetOscType
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(int *)((longlong)param_1 + 8),
             (uint)*(byte *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetPan'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::SetPan
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb3b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthSamplePlayer::SetPitch'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FSampleBufferReader::SetPitch
            ((FSampleBufferReader *)(*(longlong *)param_1 + 0x8f8),*(float *)((longlong)param_1 + 8)
             ,*(float *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14f0cb3e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetPitchBend'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetOscPitchBend
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,*(float *)((longlong)param_1 + 8));
  ::Audio::FEpicSynth1::SetOscPitchBend
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetPlaybackSpeed'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FGranularSynth::SetPlaybackSpeed
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb450

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetPlayheadTime'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FGranularSynth::SeekTime
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0xc),(uint)*(byte *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 14f0cb480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetPortamento'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)param_1 + 8);
  if (__real_3f800000 <= *(float *)((longlong)param_1 + 8)) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(*(longlong *)param_1 + 0x938) = fVar1;
  return;
}

// Call @ 14f0cb4b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPosLfoDepth'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x998) = *(undefined4 *)((longlong)param_1 + 8);
  return;
}

// Call @ 14f0cb4d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::IOscBase::SetFrequency
            ((IOscBase *)(*(longlong *)param_1 + 0x958),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb4f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPosLfoType'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FLFO::SetType
            ((FLFO *)(*(longlong *)param_1 + 0x958),(uint)*(byte *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cb525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xc28) + 0x60))
            ((longlong *)(*(longlong *)param_1 + 0xc28),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb530

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cb545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xc28) + 0x98))
            ((longlong *)(*(longlong *)param_1 + 0xc28),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cb571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xc28) + 0x88))
            ((longlong *)(*(longlong *)param_1 + 0xc28),*(undefined1 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cb595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xc28) + 0x68))
            ((longlong *)(*(longlong *)param_1 + 0xc28),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb5a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cb5b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xc28) + 0x90))
            ((longlong *)(*(longlong *)param_1 + 0xc28),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb5d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cb5e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xc28) + 0x80))
            ((longlong *)(*(longlong *)param_1 + 0xc28),*(undefined1 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb5f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cb605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xc28) + 0x78))
            ((longlong *)(*(longlong *)param_1 + 0xc28),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0cb625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xc28) + 0x70))
            ((longlong *)(*(longlong *)param_1 + 0xc28),*(undefined4 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetReleaseTime'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetEnvReleaseTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetReleaseTimeMsec'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FGranularSynth::SetReleaseTime
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSampleRate'::__l2::<lambda_1>,void,FSourceEffectBitCrusherSettings_&>
::Call(void *param_1,FSourceEffectBitCrusherSettings *param_2)

{
  (param_2->SampleRateModulation).Value = *(float *)param_1;
  return;
}

// Call @ 14f0cb680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
::Call(void *param_1,FSourceEffectBitCrusher *param_2)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *pUStack_88;
  USoundModulatorBase *pUStack_80;
  initializer_list<USoundModulatorBase_const_*> iStack_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  TStack_68;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUStack_88 = *(USoundModulatorBase **)param_1;
  iStack_78._First = &pUStack_88;
  iStack_78._Last = &pUStack_80;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&TStack_68,&iStack_78);
  ::Audio::FModulationDestination::UpdateModulators(&param_2->SampleRateMod,&TStack_68);
  TStack_68.HashSize = 0;
  if (TStack_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_68.Elements);
  return;
}

// Call @ 14f0cb690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
::Call(void *param_1,FSourceEffectBitCrusher *param_2)

{
  ::Audio::FModulationDestination::UpdateModulators
            (&param_2->SampleRateMod,
             *(TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
               **)param_1);
  return;
}

// Call @ 14f0cb6b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetScrubMode'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FGranularSynth::SetScrubMode
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(bool *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb6d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthSamplePlayer::SetScrubMode'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FSampleBufferReader::SetScrubMode
            ((FSampleBufferReader *)(*(longlong *)param_1 + 0x8f8),*(bool *)((longlong)param_1 + 8))
  ;
  return;
}

// Call @ 14f0cb6f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthSamplePlayer::SetScrubTimeWidth'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FSampleBufferReader::SetScrubTimeWidth
            ((FSampleBufferReader *)(*(longlong *)param_1 + 0x8f8),*(float *)((longlong)param_1 + 8)
            );
  return;
}

// Call @ 14f0cb710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSettings'::__l2::<lambda_1>,void,FSourceEffectBitCrusherSettings_&>
::Call(void *param_1,FSourceEffectBitCrusherSettings *param_2)

{
  (param_2->BitModulation).Value = *(float *)((longlong)param_1 + 4);
  (param_2->SampleRateModulation).Value = *(float *)param_1;
  return;
}

// Call @ 14f0cb730

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetSettings'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
::Call(void *param_1,FSourceEffectChorusSettings *param_2)

{
  (param_2->DepthModulation).Value = *(float *)param_1;
  (param_2->FrequencyModulation).Value = *(float *)((longlong)param_1 + 4);
  (param_2->FeedbackModulation).Value = *(float *)((longlong)param_1 + 8);
  (param_2->WetModulation).Value = *(float *)((longlong)param_1 + 0xc);
  (param_2->DryModulation).Value = *(float *)((longlong)param_1 + 0x10);
  (param_2->SpreadModulation).Value = *(float *)((longlong)param_1 + 0x14);
  return;
}

// Call @ 14f0cb770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectMultibandCompressorPreset::SetSettings'::__l2::<lambda_1>,void,FSubmixEffectMultibandCompressor_&>
::Call(void *param_1,FSubmixEffectMultibandCompressor *param_2)

{
  ESubmixEffectDynamicsKeySource EVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(longlong *)param_1;
  iVar4 = 0;
  uVar3 = 0xffffffff;
  EVar1 = *(ESubmixEffectDynamicsKeySource *)(lVar2 + 0xb);
  if (EVar1 == AudioBus) {
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar5 = 0;
    if (lVar2 == 0) goto LAB_14f0cb7b0;
    iVar4 = *(byte *)(lVar2 + 0x30) + 1;
  }
  else {
    iVar5 = iVar4;
    if ((EVar1 != Submix) || (lVar2 = *(longlong *)(lVar2 + 0x18), iVar5 = 0, lVar2 == 0))
    goto LAB_14f0cb7b0;
  }
  uVar3 = *(uint *)(lVar2 + 0xc);
  iVar5 = iVar4;
LAB_14f0cb7b0:
  FKeySource::Update(&param_2->KeySource,EVar1,uVar3,iVar5);
  return;
}

// Call @ 14f0cb7d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetSpread'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FEpicSynth1::SetOscSpread
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb7f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetSpread'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
::Call(void *param_1,FSourceEffectChorusSettings *param_2)

{
  (param_2->SpreadModulation).Value = *(float *)param_1;
  return;
}

// Call @ 14f0cb800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetSpreadModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *pUStack_88;
  USoundModulatorBase *pUStack_80;
  initializer_list<USoundModulatorBase_const_*> iStack_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  TStack_68;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUStack_88 = *(USoundModulatorBase **)param_1;
  iStack_78._First = &pUStack_88;
  iStack_78._Last = &pUStack_80;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&TStack_68,&iStack_78);
  ::Audio::FModulationDestination::UpdateModulators(&param_2->SpreadMod,&TStack_68);
  TStack_68.HashSize = 0;
  if (TStack_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_68.Elements);
  return;
}

// Call @ 14f0cb810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetSpreadModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  ::Audio::FModulationDestination::UpdateModulators
            (&param_2->SpreadMod,
             *(TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
               **)param_1);
  return;
}

// Call @ 14f0cb830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayFeedback'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FDelayStereo::SetFeedback
            ((FDelayStereo *)(*(longlong *)param_1 + 0x980),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayIsEnabled'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(longlong *)param_1 + 0xfb8);
  *(byte *)(*(longlong *)param_1 + 0xfb8) =
       (*(char *)((longlong)param_1 + 8) * '\x02' ^ bVar1) & 2 ^ bVar1;
  return;
}

// Call @ 14f0cb880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayMode'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FDelayStereo::SetMode
            ((FDelayStereo *)(*(longlong *)param_1 + 0x980),(uint)*(byte *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb8a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayRatio'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FDelayStereo::SetDelayRatio
            ((FDelayStereo *)(*(longlong *)param_1 + 0x980),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb8c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayTime'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FDelayStereo::SetDelayTimeMsec
            ((FDelayStereo *)(*(longlong *)param_1 + 0x980),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb8e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayWetlevel'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FDelayStereo::SetWetLevel
            ((FDelayStereo *)(*(longlong *)param_1 + 0x980),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetSustainGain'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FGranularSynth::SetSustainGain
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetSustainGain'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FEpicSynth1::SetEnvSustainGain
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetSustainPedalState'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  if ((cVar1 == '\0') && (*(int *)(lVar2 + 0x1000) == 0)) {
    (**(code **)(*(longlong *)(lVar2 + 0xac8) + 0x20))();
    (**(code **)(*(longlong *)(lVar2 + 0xb78) + 0x20))();
  }
  *(byte *)(lVar2 + 0x1008) =
       (cVar1 << 2 ^ *(byte *)(lVar2 + 0x1008)) & 4 ^ *(byte *)(lVar2 + 0x1008);
  return;
}

// Call @ 14f0cb9a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModularSynthComponent::SetSynthPreset'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  
  lVar4 = *(longlong *)param_1;
  if ((*(byte *)((longlong)param_1 + 0x10) & 1) == 0) {
    *(undefined4 *)(lVar4 + 0x8d4) = 1;
    ::Audio::FEpicSynth1::StopAllVoicesExceptNewest((FEpicSynth1 *)(lVar4 + 0x8c8));
  }
  else {
    *(undefined4 *)(lVar4 + 0x8d4) = *(undefined4 *)(lVar4 + 0x8d0);
  }
  ::Audio::FEpicSynth1::SetOscType
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,
             (uint)*(byte *)((longlong)param_1 + 0x14));
  ::Audio::FEpicSynth1::SetOscGain
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,*(float *)((longlong)param_1 + 0x18));
  ::Audio::FEpicSynth1::SetOscOctave
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,*(float *)((longlong)param_1 + 0x1c));
  ::Audio::FEpicSynth1::SetOscSemitones
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,*(float *)((longlong)param_1 + 0x20));
  ::Audio::FEpicSynth1::SetOscCents
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,*(float *)((longlong)param_1 + 0x24));
  ::Audio::FEpicSynth1::SetOscPulseWidth
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,*(float *)((longlong)param_1 + 0x28));
  ::Audio::FEpicSynth1::SetOscType
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,
             (uint)*(byte *)((longlong)param_1 + 0x2c));
  ::Audio::FEpicSynth1::SetOscGain
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,*(float *)((longlong)param_1 + 0x30));
  ::Audio::FEpicSynth1::SetOscOctave
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,*(float *)((longlong)param_1 + 0x34));
  ::Audio::FEpicSynth1::SetOscSemitones
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,*(float *)((longlong)param_1 + 0x38));
  ::Audio::FEpicSynth1::SetOscCents
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,*(float *)((longlong)param_1 + 0x3c));
  ::Audio::FEpicSynth1::SetOscPulseWidth
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,*(float *)((longlong)param_1 + 0x40));
  fVar11 = *(float *)((longlong)param_1 + 0x44);
  if (__real_3f800000 <= *(float *)((longlong)param_1 + 0x44)) {
    fVar11 = __real_3f800000;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  *(float *)(*(longlong *)param_1 + 0x938) = fVar11;
  bVar2 = *(byte *)(*(longlong *)param_1 + 0xfb8);
  *(byte *)(*(longlong *)param_1 + 0xfb8) =
       (bVar2 ^ *(byte *)((longlong)param_1 + 0x48)) & 1 ^ bVar2;
  ::Audio::FEpicSynth1::SetOscSync
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),
             (bool)((byte)(*(uint *)((longlong)param_1 + 0x48) >> 1) & 1));
  ::Audio::FEpicSynth1::SetOscSpread
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x4c));
  ::Audio::FEpicSynth1::SetPan
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x50));
  ::Audio::FEpicSynth1::SetLFOFrequency
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,*(float *)((longlong)param_1 + 0x54));
  ::Audio::FEpicSynth1::SetLFOGain
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,*(float *)((longlong)param_1 + 0x58));
  ::Audio::FEpicSynth1::SetLFOType
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,
             (uint)*(byte *)((longlong)param_1 + 0x5c));
  ::Audio::FEpicSynth1::SetLFOMode
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,
             (uint)*(byte *)((longlong)param_1 + 0x5d));
  ::Audio::FEpicSynth1::SetLFOPatch
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),0,
             *(ESynthLFOPatchType *)((longlong)param_1 + 0x5e));
  ::Audio::FEpicSynth1::SetLFOFrequency
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,*(float *)((longlong)param_1 + 0x60));
  ::Audio::FEpicSynth1::SetLFOGain
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,*(float *)((longlong)param_1 + 100));
  ::Audio::FEpicSynth1::SetLFOType
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,
             (uint)*(byte *)((longlong)param_1 + 0x68));
  ::Audio::FEpicSynth1::SetLFOMode
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,
             (uint)*(byte *)((longlong)param_1 + 0x69));
  ::Audio::FEpicSynth1::SetLFOPatch
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),1,
             *(ESynthLFOPatchType *)((longlong)param_1 + 0x6a));
  ::Audio::FEpicSynth1::SetGainDb
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x6c));
  ::Audio::FEpicSynth1::SetEnvAttackTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x70));
  ::Audio::FEpicSynth1::SetEnvDecayTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x74));
  ::Audio::FEpicSynth1::SetEnvSustainGain
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x78));
  ::Audio::FEpicSynth1::SetEnvReleaseTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x7c));
  ::Audio::FEpicSynth1::SetModEnvPatch
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),
             *(ESynthModEnvPatch *)((longlong)param_1 + 0x80));
  ::Audio::FEpicSynth1::SetModEnvBiasPatch
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),
             *(ESynthModEnvBiasPatch *)((longlong)param_1 + 0x81));
  ::Audio::FEpicSynth1::SetModEnvInvert
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),
             (bool)(*(byte *)((longlong)param_1 + 0x84) & 1));
  ::Audio::FEpicSynth1::SetModEnvBiasInvert
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),
             (bool)((byte)(*(uint *)((longlong)param_1 + 0x84) >> 1) & 1));
  ::Audio::FEpicSynth1::SetModEnvDepth
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x88));
  ::Audio::FEpicSynth1::SetModEnvAttackTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x8c));
  ::Audio::FEpicSynth1::SetModEnvDecayTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x90));
  ::Audio::FEpicSynth1::SetModEnvSustainGain
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x94));
  ::Audio::FEpicSynth1::SetModEnvReleaseTime
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0x98));
  ::Audio::FEpicSynth1::SetEnvLegatoEnabled
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),
             (bool)(*(byte *)((longlong)param_1 + 0x9c) & 1));
  ::Audio::FEpicSynth1::SetEnvRetriggerMode
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),
             (bool)((byte)(*(uint *)((longlong)param_1 + 0x9c) >> 1) & 1));
  ::Audio::FEpicSynth1::SetFilterFrequency
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0xa0));
  ::Audio::FEpicSynth1::SetFilterQ
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),*(float *)((longlong)param_1 + 0xa4));
  ::Audio::FEpicSynth1::SetFilterType
            ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),(uint)*(byte *)((longlong)param_1 + 0xa8)
            );
  lVar4 = *(longlong *)param_1;
  *(undefined1 *)(lVar4 + 0x978) = *(undefined1 *)((longlong)param_1 + 0xa9);
  ::Audio::FEpicSynth1::SwitchFilter((FEpicSynth1 *)(lVar4 + 0x8c8));
  bVar2 = *(byte *)(*(longlong *)param_1 + 0xfb8);
  *(byte *)(*(longlong *)param_1 + 0xfb8) =
       (*(char *)((longlong)param_1 + 0xac) * '\x02' ^ bVar2) & 2 ^ bVar2;
  ::Audio::FDelayStereo::SetMode
            ((FDelayStereo *)(*(longlong *)param_1 + 0x980),
             (uint)*(byte *)((longlong)param_1 + 0xb0));
  ::Audio::FDelayStereo::SetDelayTimeMsec
            ((FDelayStereo *)(*(longlong *)param_1 + 0x980),*(float *)((longlong)param_1 + 0xb4));
  ::Audio::FDelayStereo::SetFeedback
            ((FDelayStereo *)(*(longlong *)param_1 + 0x980),*(float *)((longlong)param_1 + 0xb8));
  ::Audio::FDelayStereo::SetWetLevel
            ((FDelayStereo *)(*(longlong *)param_1 + 0x980),*(float *)((longlong)param_1 + 0xbc));
  ::Audio::FDelayStereo::SetDelayRatio
            ((FDelayStereo *)(*(longlong *)param_1 + 0x980),*(float *)((longlong)param_1 + 0xc0));
  bVar2 = *(byte *)(*(longlong *)param_1 + 0xfb8);
  *(byte *)(*(longlong *)param_1 + 0xfb8) =
       (*(char *)((longlong)param_1 + 0xc4) << 2 ^ bVar2) & 4 ^ bVar2;
  ::Audio::FChorus::SetDepth
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Left,*(float *)((longlong)param_1 + 200));
  ::Audio::FChorus::SetDepth
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Center,*(float *)((longlong)param_1 + 200));
  ::Audio::FChorus::SetDepth
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Right,*(float *)((longlong)param_1 + 200));
  ::Audio::FChorus::SetFeedback
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Left,*(float *)((longlong)param_1 + 0xcc));
  ::Audio::FChorus::SetFeedback
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Center,*(float *)((longlong)param_1 + 0xcc));
  ::Audio::FChorus::SetFeedback
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Right,*(float *)((longlong)param_1 + 0xcc));
  ::Audio::FChorus::SetFrequency
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Left,*(float *)((longlong)param_1 + 0xd0));
  ::Audio::FChorus::SetFrequency
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Center,*(float *)((longlong)param_1 + 0xd0));
  ::Audio::FChorus::SetFrequency
            ((FChorus *)(*(longlong *)param_1 + 0x9d0),Right,*(float *)((longlong)param_1 + 0xd0));
  lVar4 = *(longlong *)param_1;
  ::Audio::FModulationMatrix::ResetPatchSourceState((FModulationMatrix *)(lVar4 + 0x8f8));
  uVar8 = 0;
  if (0 < *(int *)(lVar4 + 0x948)) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar4 + 0x948)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::Audio::FEpicSynth1Voice::Reset
                (*(FEpicSynth1Voice **)(lVar10 + *(longlong *)(lVar4 + 0x940)));
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar4 + 0x948)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::Audio::FEpicSynth1Voice::ClearPatches
                (*(FEpicSynth1Voice **)(lVar10 + *(longlong *)(lVar4 + 0x940)));
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < *(int *)(lVar4 + 0x948));
  }
  iVar3 = *(int *)((longlong)param_1 + 0xe0);
  pbVar9 = *(byte **)((longlong)param_1 + 0xd8);
  pbVar1 = pbVar9 + (longlong)iVar3 * 0x18;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0xe0) != iVar3) {
      `TCheckedPointerIterator<FEpicSynth1Patch_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (pbVar9 == pbVar1) break;
    if (0 < *(int *)(pbVar9 + 0x10)) {
      ::Audio::FEpicSynth1::CreatePatch
                ((FEpicSynth1 *)(*(longlong *)param_1 + 0x8c8),(ESynth1PatchSource)auStackX_10,
                 (TArray<FSynth1PatchCable,TSizedDefaultAllocator<32>_> *)(ulonglong)*pbVar9,
                 (bool)((char)pbVar9 + '\b'));
    }
    pbVar9 = pbVar9 + 0x18;
  }
  return;
}

// Call @ 14f0cb9b0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FToneGenerator::SetVolume'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ::Audio::FSineOsc::SetScale
            ((FSineOsc *)(*(longlong *)param_1 + 0x20),*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cb9d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetWaveTablePosition'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)param_1 + 8);
  if (__real_3f800000 <= *(float *)((longlong)param_1 + 8)) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(*(longlong *)param_1 + 0x910) = fVar1;
  return;
}

// Call @ 14f0cba00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetWet'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
::Call(void *param_1,FSourceEffectChorusSettings *param_2)

{
  (param_2->WetModulation).Value = *(float *)param_1;
  return;
}

// Call @ 14f0cba10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetWetModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *pUStack_88;
  USoundModulatorBase *pUStack_80;
  initializer_list<USoundModulatorBase_const_*> iStack_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  TStack_68;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUStack_88 = *(USoundModulatorBase **)param_1;
  iStack_78._First = &pUStack_88;
  iStack_78._Last = &pUStack_80;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&TStack_68,&iStack_78);
  ::Audio::FModulationDestination::UpdateModulators(&param_2->WetMod,&TStack_68);
  TStack_68.HashSize = 0;
  if (TStack_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_68.Elements);
  return;
}

// Call @ 14f0cba20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceEffectChorusPreset::SetWetModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
::Call(void *param_1,FSourceEffectChorus *param_2)

{
  ::Audio::FModulationDestination::UpdateModulators
            (&param_2->WetMod,
             *(TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
               **)param_1);
  return;
}

// Call @ 14f0cba40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSourceEffectEnvFollowerNotifier::UpdateEnvFollowerInstance'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  
  lVar2 = *(longlong *)param_1;
  if ((0 < *(int *)(lVar2 + 0x10)) && (*(int *)(lVar2 + 0x38) != *(int *)(lVar2 + 100))) {
    lVar6 = *(longlong *)(lVar2 + 0x70);
    if (*(longlong *)(lVar2 + 0x70) == 0) {
      lVar6 = lVar2 + 0x68;
    }
    uVar5 = *(uint *)(lVar6 + (ulonglong)
                              (*(int *)(lVar2 + 0x78) - 1U & *(uint *)((longlong)param_1 + 8)) * 4);
    if (uVar5 != 0xffffffff) {
      while (puVar7 = (uint *)((longlong)(int)uVar5 * 0x30 + *(longlong *)(lVar2 + 0x30)),
            *puVar7 != *(uint *)((longlong)param_1 + 8)) {
        uVar5 = puVar7[10];
        if (uVar5 == 0xffffffff) {
          return;
        }
      }
      puVar9 = (uint *)0x0;
      puVar12 = puVar7 + 2;
      if (puVar7 == (uint *)0x0) {
        puVar12 = puVar9;
      }
      if (puVar12 != (uint *)0x0) {
        puVar12 = puVar7 + 8;
        if (puVar7 == (uint *)0x0) {
          puVar12 = (uint *)&DAT_00000018;
        }
        if (0 < (int)*puVar12) {
          puVar11 = puVar7 + 6;
          puVar10 = puVar9;
          if (puVar7 == (uint *)0x0) {
            puVar11 = (uint *)&DAT_00000010;
            puVar9 = (uint *)0x0;
            puVar10 = (uint *)0x0;
          }
          do {
            uVar8 = (uint)puVar9;
            uVar5 = 0;
            if ((int)uVar8 < (int)puVar11[2]) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(int *)((longlong)puVar10 + *(longlong *)puVar11) ==
                *(int *)((longlong)param_1 + 0xc)) {
              uVar1 = *(undefined4 *)((longlong)param_1 + 0x10);
              uVar5 = 0;
              if ((int)uVar8 < (int)puVar11[2]) {
                uVar5 = ~uVar8 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(undefined4 *)(*(longlong *)puVar11 + 4 + (longlong)(int)uVar8 * 8) = uVar1;
              return;
            }
            puVar9 = (uint *)(ulonglong)(uVar8 + 1);
            puVar10 = puVar10 + 2;
          } while ((int)(uVar8 + 1) < (int)*puVar12);
        }
      }
    }
  }
  return;
}

// Call @ 14f0cba50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  
  lVar2 = *(longlong *)param_1;
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  pFVar3 = (ForAnyElementType *)(lVar2 + 0x998);
  *(uint *)(lVar2 + 0x9a8) = uVar1;
  *(undefined4 *)(lVar2 + 0x9ac) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(lVar2 + 0x9b0) = *(undefined4 *)((longlong)param_1 + 0x20);
  *(undefined4 *)(lVar2 + 0x9b4) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined4 *)(lVar2 + 0x9b8) = *(undefined4 *)((longlong)param_1 + 0x28);
  if (-1 < (int)uVar1) {
    *(int *)(lVar2 + 0x9a0) = 0;
    if (*(int *)(lVar2 + 0x9a4) < (int)uVar1) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,pFVar3,0,(int *)(lVar2 + 0x9a4));
    }
    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,*(int *)(lVar2 + 0x9a8),pFVar3,(int *)(lVar2 + 0x9a0),(int *)(lVar2 + 0x9a4));
    memcpy(pFVar3->Data,*(void **)((longlong)param_1 + 8),(longlong)*(int *)(lVar2 + 0x9a8) * 2);
    ::Audio::FSampleBufferReader::ClearBuffer((FSampleBufferReader *)(*(longlong *)param_1 + 0x8f8))
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// Call @ 14f0cba60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UGranularSynth::SetSoundWave'::__l8::<lambda_1>::operator()'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  ::Audio::FGranularSynth::LoadSampleBuffer
            ((FGranularSynth *)(*(longlong *)param_1 + 0x8c8),
             (TSampleBuffer<short> *)((longlong)param_1 + 8));
  return;
}

// Call @ 14f0cba80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>,void,USoundWave_const_*,Audio::TSampleBuffer<short>_const_&>
::Call(void *param_1,USoundWave **param_2,TSampleBuffer<short> *param_3)

{
  `USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14f0cba90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectMultibandCompressor_&>
::Call(void *param_1,FSubmixEffectMultibandCompressor *param_2)

{
  FKeySource::Update(&param_2->KeySource,
                     *(ESubmixEffectDynamicsKeySource *)((longlong)param_1 + 0xc),
                     *(uint *)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 14f0cbac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectTapDelayPreset::RemoveTap'::__l7::<lambda_1>,void,FSubmixEffectTapDelay_&>
::Call(void *param_1,FSubmixEffectTapDelay *param_2)

{
  FSubmixEffectTapDelay::RemoveTap(param_2,*(int *)param_1);
  return;
}

// Call @ 14f0cbae0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGranularSynth::SetSoundWave'::__l8::<lambda_1>,void,USoundWave_const_*,Audio::TSampleBuffer<short>_const_&>
::Call(void *param_1,USoundWave **param_2,TSampleBuffer<short> *param_3)

{
  `UGranularSynth::SetSoundWave'::__l8::<lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14f0cbaf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectTapDelayPreset::SetTap'::__l9::<lambda_1>,void,FSubmixEffectTapDelay_&>
::Call(void *param_1,FSubmixEffectTapDelay *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  undefined1 auStackX_8 [8];
  
  iVar2 = (param_2->TargetTaps).ArrayNum;
  pFVar4 = (param_2->TargetTaps).AllocatorInstance.Data;
  iVar3 = *(int *)param_1;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((param_2->TargetTaps).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTapDelayInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(int *)(pFVar4 + 0x14) == iVar3) {
      *pFVar4 = *(FScriptContainerElement *)((longlong)param_1 + 4);
      fVar5 = param_2->MaxDelayLineLength;
      if (*(float *)((longlong)param_1 + 8) <= param_2->MaxDelayLineLength) {
        fVar5 = *(float *)((longlong)param_1 + 8);
      }
      if (fVar5 <= __real_3dcccccd) {
        fVar5 = __real_3dcccccd;
      }
      *(float *)(pFVar4 + 4) = fVar5;
      fVar5 = __real_41200000;
      *(undefined4 *)(pFVar4 + 0x10) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined4 *)(pFVar4 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x10);
      fVar5 = powf(fVar5,*(float *)((longlong)param_1 + 0xc) * __real_3d4ccccd);
      *(float *)(pFVar4 + 8) = fVar5;
      param_2->bSettingsModified = true;
      return;
    }
    pFVar4 = pFVar4 + 0x18;
  }
  return;
}

// Call @ 14f0cbb00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USynthComponentMonoWaveTable::SetSynthPreset'::__l11::<lambda_1>,void,AssetChangeInfo_const_&>
::Call(void *param_1,AssetChangeInfo *param_2)

{
  USynthComponentMonoWaveTable *this;
  code *pcVar1;
  bool bVar2;
  int aiStackX_8 [2];
  
  this = *(USynthComponentMonoWaveTable **)param_1;
  if (this->CachedPreset == (UMonoWaveTableSynthPreset *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedPreset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SynthComponentMonoWaveTable.cpp"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->bNeedsFullRebuild != 0) {
    USynthComponentMonoWaveTable::InitSynth(this);
    return;
  }
  aiStackX_8[0] = param_2->CurveThatWasAltered;
  if (aiStackX_8[0] != -1) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTableAltered,
               aiStackX_8);
    USynthComponentMonoWaveTable::RefreshWaveTable(this,param_2->CurveThatWasAltered);
  }
  return;
}

