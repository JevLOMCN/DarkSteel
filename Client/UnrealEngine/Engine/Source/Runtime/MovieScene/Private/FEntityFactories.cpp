// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 35

// ConditionallyDuplicateChildComponent<FGuid> @ 14606f570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::ConditionallyDuplicateChildComponent<FGuid>
          (FEntityFactories *this,TComponentTypeID<FGuid> param_1,FComponentMask *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  undefined1 auStack_118 [32];
  TBitArray<TFixedAllocator<12>_> local_f8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_c0 [8];
  byte local_80;
  undefined **local_78;
  TComponentTypeID<FGuid> local_70;
  TComponentTypeID<FGuid> local_6e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_68;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTStack_60;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTStack_50;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_48;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8.NumBits = 0;
  local_f8.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_f8,&param_2->Bits);
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_78 = &___7__TConditionalDuplicateChildEntityInitializer_UFGuid___MovieScene_UE__6B_;
  local_70 = param_1;
  local_6e = param_1;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)&local_68,&local_f8);
  local_80 = local_80 & 0xfc;
  local_c0[0] = FMemory::Malloc(0x48,8);
  pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_c0;
  if ((local_80 & 2) == 0) {
    pTVar5 = local_c0[0];
  }
  local_80 = local_80 | 1;
  *(TComponentTypeID<FGuid> *)((pTVar5->Data).Pad + 8) = local_70;
  *(TComponentTypeID<FGuid> *)((pTVar5->Data).Pad + 10) = local_6e;
  iVar2 = (int)local_38;
  *(undefined ***)(pTVar5->Data).Pad =
       &___7__TConditionalDuplicateChildEntityInitializer_UFGuid___MovieScene_UE__6B_;
  *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)((pTVar5->Data).Pad + 0x10) =
       local_68;
  *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)((pTVar5->Data).Pad + 0x18) =
       pTStack_60;
  *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)((pTVar5->Data).Pad + 0x20) =
       local_58;
  *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)((pTVar5->Data).Pad + 0x28) =
       pTStack_50;
  *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)((pTVar5->Data).Pad + 0x30) =
       local_48;
  *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)((pTVar5->Data).Pad + 0x38) =
       pTStack_40;
  *(int *)&pTVar5->field_0x40 = iVar2;
  *(int *)&pTVar5->field_0x44 = local_38._4_4_;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  if ((local_80 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_c0;
  if ((local_80 & 2) == 0) {
    pTVar5 = local_c0[0];
  }
  if ((local_80 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar4 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_c0;
  if ((local_80 & 2) == 0) {
    pTVar4 = local_c0[0];
  }
  if (pTVar5 != pTVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_c0);
  if ((local_80 & 1) != 0) {
    pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_c0;
    if ((local_80 & 2) == 0) {
      pTVar5 = local_c0[0];
    }
    local_80 = local_80 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar5->Data).Pad
                 )->Data).Pad)(pTVar5,0);
    if ((local_80 & 2) == 0) {
      FMemory::Free(local_c0[0]);
    }
  }
  return;
}

// DuplicateChildComponent<unsigned_char> @ 146071e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<unsigned_char>
          (FEntityFactories *this,TComponentTypeID<unsigned_char> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<unsigned_char> local_60;
  TComponentTypeID<unsigned_char> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_E_MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_char>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<unsigned_char> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<short> @ 146071ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<short>
          (FEntityFactories *this,TComponentTypeID<short> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<short> local_60;
  TComponentTypeID<short> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_F_MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<short>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<short> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<unsigned_short> @ 146071f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<unsigned_short>
          (FEntityFactories *this,TComponentTypeID<unsigned_short> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<unsigned_short> local_60;
  TComponentTypeID<unsigned_short> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_G_MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_short>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<unsigned_short> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<int> @ 146071fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<int>
          (FEntityFactories *this,TComponentTypeID<int> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<int> local_60;
  TComponentTypeID<int> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_H_MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<int>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<int> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<double> @ 146072080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<double>
          (FEntityFactories *this,TComponentTypeID<double> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<double> local_60;
  TComponentTypeID<double> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_N_MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<double>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<double> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<FEasingComponentData> @ 146072120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<FEasingComponentData>
          (FEntityFactories *this,TComponentTypeID<FEasingComponentData> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<FEasingComponentData> local_60;
  TComponentTypeID<FEasingComponentData> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_UFEasingComponentData___MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FEasingComponentData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<FEasingComponentData> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<FFrameTime> @ 1460721c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<FFrameTime>
          (FEntityFactories *this,TComponentTypeID<FFrameTime> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<FFrameTime> local_60;
  TComponentTypeID<FFrameTime> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_UFFrameTime___MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FFrameTime>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<FFrameTime> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FInstanceHandle> @ 146072260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FInstanceHandle>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FInstanceHandle> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_60;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFInstanceHandle_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> @ 146072300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::
DuplicateChildComponent<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
          (FEntityFactories *this,
          TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> local_60;
  TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
              *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<FMovieScenePropertyBinding> @ 1460723a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<FMovieScenePropertyBinding>
          (FEntityFactories *this,TComponentTypeID<FMovieScenePropertyBinding> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<FMovieScenePropertyBinding> local_60;
  TComponentTypeID<FMovieScenePropertyBinding> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFMovieScenePropertyBinding___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieScenePropertyBinding>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<FMovieScenePropertyBinding> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<FMovieSceneSequenceID> @ 146072440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<FMovieSceneSequenceID>
          (FEntityFactories *this,TComponentTypeID<FMovieSceneSequenceID> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<FMovieSceneSequenceID> local_60;
  TComponentTypeID<FMovieSceneSequenceID> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_UFMovieSceneSequenceID___MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSequenceID>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<FMovieSceneSequenceID> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FObjectComponent> @ 1460724e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FObjectComponent>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FObjectComponent> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FObjectComponent> local_60;
  TComponentTypeID<UE::MovieScene::FObjectComponent> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFObjectComponent_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FRootInstanceHandle> @ 146072580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FRootInstanceHandle>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FRootInstanceHandle> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_60;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FSourceBoolChannel> @ 146072620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceBoolChannel>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FSourceBoolChannel> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FSourceBoolChannel> local_60;
  TComponentTypeID<UE::MovieScene::FSourceBoolChannel> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFSourceBoolChannel_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FSourceByteChannel> @ 1460726c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceByteChannel>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FSourceByteChannel> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FSourceByteChannel> local_60;
  TComponentTypeID<UE::MovieScene::FSourceByteChannel> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFSourceByteChannel_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FSourceDoubleChannel> @ 146072760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceDoubleChannel>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_60;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFSourceDoubleChannel_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FSourceFloatChannel> @ 146072800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceFloatChannel>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_60;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FSourceIntegerChannel> @ 1460728a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceIntegerChannel>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> local_60;
  TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFSourceIntegerChannel_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FSourceObjectPathChannel> @ 146072940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceObjectPathChannel>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FSourceObjectPathChannel> param_1
          )

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FSourceObjectPathChannel> local_60;
  TComponentTypeID<UE::MovieScene::FSourceObjectPathChannel> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFSourceObjectPathChannel_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel> *)&local_68
            );
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FSourceStringChannel> @ 1460729e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceStringChannel>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FSourceStringChannel> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FSourceStringChannel> local_60;
  TComponentTypeID<UE::MovieScene::FSourceStringChannel> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFSourceStringChannel_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<UE::MovieScene::FSourceTextChannel> @ 146072a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceTextChannel>
          (FEntityFactories *this,TComponentTypeID<UE::MovieScene::FSourceTextChannel> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<UE::MovieScene::FSourceTextChannel> local_60;
  TComponentTypeID<UE::MovieScene::FSourceTextChannel> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &
             ___7__TDuplicateChildEntityInitializer_UFSourceTextChannel_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<FString> @ 146072b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<FString>
          (FEntityFactories *this,TComponentTypeID<FString> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<FString> local_60;
  TComponentTypeID<FString> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_VFString___MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FString>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<FString> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<FText> @ 146072bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<FText>
          (FEntityFactories *this,TComponentTypeID<FText> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<FText> local_60;
  TComponentTypeID<FText> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer_VFText___MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FText>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<FText> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<__int64> @ 146072c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<__int64>
          (FEntityFactories *this,TComponentTypeID<__int64> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<__int64> local_60;
  TComponentTypeID<__int64> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer__J_MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<__int64>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<__int64> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// DuplicateChildComponent<bool> @ 146072d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FEntityFactories::DuplicateChildComponent<bool>
          (FEntityFactories *this,TComponentTypeID<bool> param_1)

{
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  TComponentTypeID<bool> local_60;
  TComponentTypeID<bool> local_5e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = &___7__TDuplicateChildEntityInitializer__N_MovieScene_UE__6B_;
  local_60 = param_1;
  local_5e = param_1;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<bool>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58,
             (TDuplicateChildEntityInitializer<bool> *)&local_68);
  DefineChildComponent(this,(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58);
  if ((local_18 & 1) != 0) {
    pTVar1 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_58;
    if ((local_18 & 2) == 0) {
      pTVar1 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(pTVar1->Data).Pad
                 )->Data).Pad)(pTVar1,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  return;
}

// ComputeChildComponents @ 1460b55d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __thiscall
UE::MovieScene::FEntityFactories::ComputeChildComponents
          (FEntityFactories *this,FComponentMask *param_1,FComponentMask *param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
  *pTVar18;
  uint local_c8;
  int local_c4;
  int local_a0;
  int iStack_9c;
  int local_88;
  int iStack_84;
  int iStack_6c;
  
  pTVar18 = &this->ParentToChildComponentTypes;
  iVar17 = 0;
  local_c4 = 0;
  iVar15 = *(int *)&(this->ParentToChildComponentTypes).field_0x48;
  local_a0 = -1;
  iVar14 = 0;
  if (iVar15 == 0) {
    iStack_9c = -1;
  }
  else {
    puVar10 = *(undefined1 **)&(this->ParentToChildComponentTypes).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ParentToChildComponentTypes).field_0x38;
    }
    iStack_9c = *(int *)(puVar10 + (ulonglong)(iVar15 - 1U & 0xffff) * 4);
    local_a0 = iStack_9c;
    if (iStack_9c != -1) {
      do {
        iStack_9c = *(int *)(*(longlong *)pTVar18 + 4 + (longlong)local_a0 * 0xc);
        if (*(short *)(*(longlong *)pTVar18 + (longlong)local_a0 * 0xc) == -1) break;
        local_a0 = iStack_9c;
      } while (iStack_9c != -1);
    }
  }
joined_r0x0001460b569a:
  if (local_a0 != -1) {
    uVar2 = *(ushort *)((longlong)local_a0 * 0xc + 2 + *(longlong *)pTVar18);
    if (((uVar2 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar2)) ||
       ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) == 0)) {
      uVar2 = *(ushort *)((longlong)local_a0 * 0xc + 2 + *(longlong *)pTVar18);
      iVar15 = ((uint)uVar2 - (param_2->Bits).NumBits) + 1;
      if (0 < iVar15) {
        TBitArray<TFixedAllocator<12>_>::Add(&param_2->Bits,false,iVar15);
      }
      if (((param_2->Bits).NumBits <= (int)(uint)uVar2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar15 = (*pcVar4)();
        return iVar15;
      }
      pTVar1 = (param_2->Bits).AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      iVar14 = local_c4 + 1;
      local_c4 = iVar14;
    }
    if (iStack_9c == -1) goto LAB_1460b57ad;
    iStack_6c = iStack_9c;
    do {
      iStack_9c = *(int *)(*(longlong *)pTVar18 + 4 + (longlong)iStack_6c * 0xc);
      local_a0 = iStack_6c;
      if (*(short *)(*(longlong *)pTVar18 + (longlong)iStack_6c * 0xc) == -1) break;
      iStack_6c = iStack_9c;
      local_a0 = iStack_9c;
    } while (iStack_9c != -1);
    goto joined_r0x0001460b569a;
  }
LAB_1460b57ad:
  uVar7 = (param_1->Bits).NumBits;
  uVar6 = 1;
  uVar13 = 0;
  iVar15 = 0;
  if (uVar7 != 0) {
    uVar12 = *(uint *)(param_1->Bits).AllocatorInstance.InlineData[0].Pad;
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar17;
      iVar15 = iVar15 + 0x20;
      iVar17 = iVar17 + 1;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1460b583d;
      uVar12 = *(uint *)(param_1->Bits).AllocatorInstance.InlineData[lVar8 + 1].Pad;
    }
    uVar6 = -uVar12 & uVar12;
    uVar13 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = iVar15 + -1 + (int)lVar8;
    uVar13 = (ulonglong)uVar12;
    if ((int)uVar7 < (int)uVar12) {
LAB_1460b583d:
      uVar13 = (ulonglong)uVar7;
    }
  }
  local_c8 = 0xffffffff;
  if ((int)uVar13 < (param_1->Bits).NumBits) {
    pTVar18 = &this->ParentToChildComponentTypes;
    uVar7 = uVar6;
    do {
      if (((uVar13 & 0xffff0000) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(BitIndex & 0xFFFF0000) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                             ,0xba,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar15 = (*pcVar4)();
        return iVar15;
      }
      iVar3 = *(int *)&(this->ParentToChildComponentTypes).field_0x48;
      local_88 = -1;
      if (iVar3 == 0) {
        iStack_84 = -1;
      }
      else {
        puVar10 = *(undefined1 **)&(this->ParentToChildComponentTypes).field_0x40;
        puVar11 = &(this->ParentToChildComponentTypes).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar11 = puVar10;
        }
        iStack_84 = *(int *)(puVar11 + ((longlong)iVar3 - 1U & uVar13 & 0xffff) * 4);
        local_88 = iStack_84;
        if (iStack_84 != -1) {
          do {
            iStack_84 = *(int *)(*(longlong *)pTVar18 + 4 + (longlong)local_88 * 0xc);
            if (*(short *)(*(longlong *)pTVar18 + (longlong)local_88 * 0xc) == (short)uVar13) break;
            local_88 = iStack_84;
          } while (iStack_84 != -1);
        }
      }
joined_r0x0001460b5927:
      if (local_88 != -1) {
        uVar2 = *(ushort *)((longlong)local_88 * 0xc + 2 + *(longlong *)pTVar18);
        if (((uVar2 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar2)) ||
           ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f)
            & 1) == 0)) {
          uVar2 = *(ushort *)((longlong)local_88 * 0xc + 2 + *(longlong *)pTVar18);
          iVar14 = ((uint)uVar2 - (param_2->Bits).NumBits) + 1;
          if (0 < iVar14) {
            TBitArray<TFixedAllocator<12>_>::Add(&param_2->Bits,false,iVar14);
          }
          if (((param_2->Bits).NumBits <= (int)(uint)uVar2) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            iVar15 = (*pcVar4)();
            return iVar15;
          }
          pTVar1 = (param_2->Bits).AllocatorInstance.InlineData + (uVar2 >> 5);
          *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
          iVar14 = local_c4 + 1;
          local_c4 = iVar14;
        }
        uVar7 = uVar6;
        if (iStack_84 == -1) goto LAB_1460b5a4d;
        local_88 = iStack_84;
        do {
          iStack_84 = *(int *)(*(longlong *)pTVar18 + 4 + (longlong)local_88 * 0xc);
          if (*(short *)(*(longlong *)pTVar18 + (longlong)local_88 * 0xc) == (short)uVar13) break;
          local_88 = iStack_84;
        } while (iStack_84 != -1);
        goto joined_r0x0001460b5927;
      }
LAB_1460b5a4d:
      piVar16 = &(param_1->Bits).NumBits;
      uVar12 = *piVar16;
      local_c8 = local_c8 & ~uVar7;
      uVar9 = local_c8 & *(uint *)(param_1->Bits).AllocatorInstance.InlineData[iVar17].Pad;
      while (uVar9 == 0) {
        lVar8 = (longlong)iVar17;
        iVar15 = iVar15 + 0x20;
        iVar17 = iVar17 + 1;
        uVar9 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_1460b5aca;
        uVar9 = *(uint *)(param_1->Bits).AllocatorInstance.InlineData[lVar8 + 1].Pad;
        local_c8 = 0xffffffff;
      }
      uVar7 = -uVar9 & uVar9;
      uVar13 = (ulonglong)uVar7 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar9 = (int)lVar8 + -1 + iVar15;
      uVar6 = uVar7;
      if ((int)uVar12 < (int)uVar9) {
        uVar9 = uVar12;
      }
LAB_1460b5aca:
      uVar13 = (ulonglong)uVar9;
    } while ((int)uVar9 < *piVar16);
  }
  return iVar14;
}

// ComputeMutuallyInclusiveComponents @ 1460b6f00

int __thiscall
UE::MovieScene::FEntityFactories::ComputeMutuallyInclusiveComponents
          (FEntityFactories *this,EMutuallyInclusiveComponentType param_1,FComponentMask *param_2,
          FMutualComponentInitializers *param_3)

{
  int iVar1;
  
  iVar1 = FMutualInclusivityGraph::ComputeMutuallyInclusiveComponents
                    (&this->MutualInclusivityGraph,param_1,param_2,param_2,param_3);
  return iVar1;
}

// DefineChildComponent @ 1460b9cd0

void __thiscall
UE::MovieScene::FEntityFactories::DefineChildComponent
          (FEntityFactories *this,
          TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  FComponentTypeID *pFVar11;
  FComponentTypeID local_res8 [4];
  FComponentTypeID local_res10 [4];
  
  if (!param_1->bIsValid) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InInitializer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityFactory.cpp"
                       ,0x126,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (!param_1->bIsValid) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar10 = param_1;
  if (!param_1->bInline) {
    pTVar10 = *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(param_1->Data).Pad;
  }
  uVar3 = *(ushort *)((pTVar10->Data).Pad + 10);
  if (!param_1->bIsValid) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar10 = param_1;
  if (!param_1->bInline) {
    pTVar10 = *(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)(param_1->Data).Pad;
  }
  local_res10[0].Value = *(ushort *)((pTVar10->Data).Pad + 8);
  local_res8[0].Value = uVar3;
  pFVar11 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&this->ParentToChildComponentTypes,local_res10,local_res8);
  if (pFVar11 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&this->ParentToChildComponentTypes,local_res10,local_res8);
  }
  pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
            (this->ChildInitializers).AllocatorInstance.Data;
  if ((pTVar10 <= param_1) && (param_1 < pTVar10 + (this->ChildInitializers).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->ChildInitializers).ArrayNum;
  piVar1 = &(this->ChildInitializers).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)this,piVar1);
  }
  (this->ChildInitializers).ArrayNum = iVar9 + 1;
  pFVar4 = (this->ChildInitializers).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)iVar9 * 0x48;
  bVar8 = (byte)pFVar4[(longlong)iVar9 * 0x48 + 0x40] & 0xfe;
  pFVar2[0x40] = (FScriptContainerElement)(bVar8 | 2);
  if (param_1->bIsValid) {
    pFVar2[0x40] = (FScriptContainerElement)(bVar8 | 3);
    param_1->bIsValid = false;
    pFVar2[0x40] = (FScriptContainerElement)
                   ((byte)pFVar2[0x40] ^ (param_1->field_0x40 ^ (byte)pFVar2[0x40]) & 2);
    uVar6 = *(undefined8 *)((param_1->Data).Pad + 8);
    *(undefined8 *)pFVar2 = *(undefined8 *)(param_1->Data).Pad;
    *(undefined8 *)(pFVar2 + 8) = uVar6;
    uVar6 = *(undefined8 *)((param_1->Data).Pad + 0x18);
    *(undefined8 *)(pFVar2 + 0x10) = *(undefined8 *)((param_1->Data).Pad + 0x10);
    *(undefined8 *)(pFVar2 + 0x18) = uVar6;
    uVar6 = *(undefined8 *)((param_1->Data).Pad + 0x28);
    *(undefined8 *)(pFVar2 + 0x20) = *(undefined8 *)((param_1->Data).Pad + 0x20);
    *(undefined8 *)(pFVar2 + 0x28) = uVar6;
    uVar6 = *(undefined8 *)((param_1->Data).Pad + 0x38);
    *(undefined8 *)(pFVar2 + 0x30) = *(undefined8 *)((param_1->Data).Pad + 0x30);
    *(undefined8 *)(pFVar2 + 0x38) = uVar6;
  }
  return;
}

// DefineChildComponent @ 1460b9eb0

void __thiscall
UE::MovieScene::FEntityFactories::DefineChildComponent
          (FEntityFactories *this,FComponentTypeID param_1,FComponentTypeID param_2)

{
  FComponentTypeID *pFVar1;
  FComponentTypeID local_res10 [4];
  FComponentTypeID local_res18 [8];
  
  local_res10[0].Value = param_1.Value;
  local_res18[0].Value = param_2.Value;
  pFVar1 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
           ::FindPair(&this->ParentToChildComponentTypes,local_res10,local_res18);
  if (pFVar1 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&this->ParentToChildComponentTypes,local_res10,local_res18);
  }
  return;
}

// DefineComplexInclusiveComponents @ 1460b9f00

void __thiscall
UE::MovieScene::FEntityFactories::DefineComplexInclusiveComponents
          (FEntityFactories *this,FComplexInclusivityFilter *param_1,FComponentTypeID param_2)

{
  FComponentTypeID local_res18;
  FComponentTypeID local_res1a [7];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_18._First = &local_res18;
  local_18._Last = local_res1a;
  local_res18.Value = param_2.Value;
  FMutualInclusivityGraph::DefineComplexInclusionRule
            (&this->MutualInclusivityGraph,param_1,&local_18);
  return;
}

// DefineComplexInclusiveComponents @ 1460b9f40

void __thiscall
UE::MovieScene::FEntityFactories::DefineComplexInclusiveComponents
          (FEntityFactories *this,FComplexInclusivityFilter *param_1,
          initializer_list<UE::MovieScene::FComponentTypeID> *param_2,
          FMutuallyInclusiveComponentParams *param_3)

{
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_18._First = param_2->_First;
  local_18._Last = param_2->_Last;
  FMutualInclusivityGraph::DefineComplexInclusionRule
            (&this->MutualInclusivityGraph,param_1,&local_18,param_3);
  return;
}

// DefineMutuallyInclusiveComponents @ 1460b9f70

void __thiscall
UE::MovieScene::FEntityFactories::DefineMutuallyInclusiveComponents
          (FEntityFactories *this,FComponentTypeID param_1,
          initializer_list<UE::MovieScene::FComponentTypeID> *param_2,
          FMutuallyInclusiveComponentParams *param_3)

{
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_18._First = param_2->_First;
  local_18._Last = param_2->_Last;
  FMutualInclusivityGraph::DefineMutualInclusionRule
            (&this->MutualInclusivityGraph,param_1,&local_18,param_3);
  return;
}

// DefineMutuallyInclusiveComponents @ 1460b9fa0

void __thiscall
UE::MovieScene::FEntityFactories::DefineMutuallyInclusiveComponents
          (FEntityFactories *this,FComponentTypeID param_1,
          initializer_list<UE::MovieScene::FComponentTypeID> *param_2)

{
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_18._First = param_2->_First;
  local_18._Last = param_2->_Last;
  FMutualInclusivityGraph::DefineMutualInclusionRule
            (&this->MutualInclusivityGraph,param_1,&local_18);
  return;
}

// RunInitializers @ 1460f2c80

void __thiscall
UE::MovieScene::FEntityFactories::RunInitializers
          (FEntityFactories *this,FComponentMask *param_1,FComponentMask *param_2,
          FEntityAllocation *param_3,TArrayView<int_const_,int> *param_4,FEntityRange *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  iVar2 = (this->ChildInitializers).ArrayNum;
  pFVar7 = (this->ChildInitializers).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->ChildInitializers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    if (((byte)pFVar7[0x40] & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar6 = pFVar7;
    if (((byte)pFVar7[0x40] & 2) == 0) {
      pFVar6 = *(FScriptContainerElement **)pFVar7;
    }
    cVar5 = (**(code **)(*(longlong *)pFVar6 + 8))(pFVar6,param_1,param_2);
    if (cVar5 != '\0') {
      if (((byte)pFVar7[0x40] & 1) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar6 = pFVar7;
      if (((byte)pFVar7[0x40] & 2) == 0) {
        pFVar6 = *(FScriptContainerElement **)pFVar7;
      }
      local_38 = *(undefined4 *)&param_4->DataPtr;
      uStack_34 = *(undefined4 *)((longlong)&param_4->DataPtr + 4);
      iStack_30 = param_4->ArrayNum;
      uStack_2c = *(undefined4 *)&param_4->field_0xc;
      (**(code **)(*(longlong *)pFVar6 + 0x10))(local_38,param_5,param_3,&local_38);
    }
    pFVar7 = pFVar7 + 0x48;
  }
  return;
}

