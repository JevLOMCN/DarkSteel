// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 13

// FromValue<unsigned_char_&> @ 1465d0e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<unsigned_char_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIntermediatePropertyValue *pFVar3;
  undefined ****ppppuVar4;
  byte bVar5;
  undefined ****ppppuVar6;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uchar local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_18 = local_18 | 3;
  uStack_50 = 1;
  local_58 = (undefined ***)&___7__TTypeErasedPropertyValueImpl_E_Private_MovieScene_UE__6B_;
  local_48 = *param_1;
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar6 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar6 = (undefined ****)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar4 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar4 = (undefined ****)local_58;
  }
  if ((ppppuVar6 != ppppuVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 | 2;
  bVar5 = local_18;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfe;
    bVar5 = __return_storage_ptr__->field_0x40 | 1;
    *(undefined ****)__return_storage_ptr__ = local_58;
    *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uStack_4c,uStack_50);
    *(ulonglong *)&__return_storage_ptr__->field_0x10 = CONCAT71(uStack_47,local_48);
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_40;
    __return_storage_ptr__->field_0x40 = (bVar5 ^ local_18) & 2 ^ bVar5;
    bVar5 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = local_38;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = uStack_30;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_28;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_20;
  }
  if ((bVar5 & 1) != 0) {
    ppppuVar6 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar6 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar6)(ppppuVar6,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58);
    }
  }
  return __return_storage_ptr__;
}

// FromValue<double_&> @ 1465d0fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<double_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,double *param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  byte bVar16;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar17;
  undefined1 auStack_98 [32];
  TTypeErasedPropertyValueImpl<double> local_78;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *local_60 [8];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Value = *param_1;
  local_78._padding_ = (longlong)&___7__TTypeErasedPropertyValueImpl_N_Private_MovieScene_UE__6B_;
  local_78._padding_._0_4_ = 8;
  pTVar17 = TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>::
            TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8><UE::MovieScene::Private::TTypeErasedPropertyValueImpl<double>,void>
                      ((TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
                       local_60,&local_78);
  bVar16 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = bVar16 | 2;
  if (pTVar17->bIsValid) {
    __return_storage_ptr__->field_0x40 = bVar16 | 3;
    pTVar17->bIsValid = false;
    __return_storage_ptr__->field_0x40 =
         __return_storage_ptr__->field_0x40 ^
         (pTVar17->field_0x40 ^ __return_storage_ptr__->field_0x40) & 2;
    uVar1 = (pTVar17->Data).Pad[1];
    uVar2 = (pTVar17->Data).Pad[2];
    uVar3 = (pTVar17->Data).Pad[3];
    uVar4 = (pTVar17->Data).Pad[4];
    uVar5 = (pTVar17->Data).Pad[5];
    uVar6 = (pTVar17->Data).Pad[6];
    uVar7 = (pTVar17->Data).Pad[7];
    uVar8 = (pTVar17->Data).Pad[8];
    uVar9 = (pTVar17->Data).Pad[9];
    uVar10 = (pTVar17->Data).Pad[10];
    uVar11 = (pTVar17->Data).Pad[0xb];
    uVar12 = (pTVar17->Data).Pad[0xc];
    uVar13 = (pTVar17->Data).Pad[0xd];
    uVar14 = (pTVar17->Data).Pad[0xe];
    uVar15 = (pTVar17->Data).Pad[0xf];
    __return_storage_ptr__->field_0x0 = (pTVar17->Data).Pad[0];
    __return_storage_ptr__->field_0x1 = uVar1;
    __return_storage_ptr__->field_0x2 = uVar2;
    __return_storage_ptr__->field_0x3 = uVar3;
    __return_storage_ptr__->field_0x4 = uVar4;
    __return_storage_ptr__->field_0x5 = uVar5;
    __return_storage_ptr__->field_0x6 = uVar6;
    __return_storage_ptr__->field_0x7 = uVar7;
    __return_storage_ptr__->field_0x8 = uVar8;
    __return_storage_ptr__->field_0x9 = uVar9;
    __return_storage_ptr__->field_0xa = uVar10;
    __return_storage_ptr__->field_0xb = uVar11;
    __return_storage_ptr__->field_0xc = uVar12;
    __return_storage_ptr__->field_0xd = uVar13;
    __return_storage_ptr__->field_0xe = uVar14;
    __return_storage_ptr__->field_0xf = uVar15;
    uVar1 = (pTVar17->Data).Pad[0x11];
    uVar2 = (pTVar17->Data).Pad[0x12];
    uVar3 = (pTVar17->Data).Pad[0x13];
    uVar4 = (pTVar17->Data).Pad[0x14];
    uVar5 = (pTVar17->Data).Pad[0x15];
    uVar6 = (pTVar17->Data).Pad[0x16];
    uVar7 = (pTVar17->Data).Pad[0x17];
    uVar8 = (pTVar17->Data).Pad[0x18];
    uVar9 = (pTVar17->Data).Pad[0x19];
    uVar10 = (pTVar17->Data).Pad[0x1a];
    uVar11 = (pTVar17->Data).Pad[0x1b];
    uVar12 = (pTVar17->Data).Pad[0x1c];
    uVar13 = (pTVar17->Data).Pad[0x1d];
    uVar14 = (pTVar17->Data).Pad[0x1e];
    uVar15 = (pTVar17->Data).Pad[0x1f];
    __return_storage_ptr__->field_0x10 = (pTVar17->Data).Pad[0x10];
    __return_storage_ptr__->field_0x11 = uVar1;
    __return_storage_ptr__->field_0x12 = uVar2;
    __return_storage_ptr__->field_0x13 = uVar3;
    __return_storage_ptr__->field_0x14 = uVar4;
    __return_storage_ptr__->field_0x15 = uVar5;
    __return_storage_ptr__->field_0x16 = uVar6;
    __return_storage_ptr__->field_0x17 = uVar7;
    __return_storage_ptr__->field_0x18 = uVar8;
    __return_storage_ptr__->field_0x19 = uVar9;
    __return_storage_ptr__->field_0x1a = uVar10;
    __return_storage_ptr__->field_0x1b = uVar11;
    __return_storage_ptr__->field_0x1c = uVar12;
    __return_storage_ptr__->field_0x1d = uVar13;
    __return_storage_ptr__->field_0x1e = uVar14;
    __return_storage_ptr__->field_0x1f = uVar15;
    uVar1 = (pTVar17->Data).Pad[0x21];
    uVar2 = (pTVar17->Data).Pad[0x22];
    uVar3 = (pTVar17->Data).Pad[0x23];
    uVar4 = (pTVar17->Data).Pad[0x24];
    uVar5 = (pTVar17->Data).Pad[0x25];
    uVar6 = (pTVar17->Data).Pad[0x26];
    uVar7 = (pTVar17->Data).Pad[0x27];
    uVar8 = (pTVar17->Data).Pad[0x28];
    uVar9 = (pTVar17->Data).Pad[0x29];
    uVar10 = (pTVar17->Data).Pad[0x2a];
    uVar11 = (pTVar17->Data).Pad[0x2b];
    uVar12 = (pTVar17->Data).Pad[0x2c];
    uVar13 = (pTVar17->Data).Pad[0x2d];
    uVar14 = (pTVar17->Data).Pad[0x2e];
    uVar15 = (pTVar17->Data).Pad[0x2f];
    __return_storage_ptr__->field_0x20 = (pTVar17->Data).Pad[0x20];
    __return_storage_ptr__->field_0x21 = uVar1;
    __return_storage_ptr__->field_0x22 = uVar2;
    __return_storage_ptr__->field_0x23 = uVar3;
    __return_storage_ptr__->field_0x24 = uVar4;
    __return_storage_ptr__->field_0x25 = uVar5;
    __return_storage_ptr__->field_0x26 = uVar6;
    __return_storage_ptr__->field_0x27 = uVar7;
    __return_storage_ptr__->field_0x28 = uVar8;
    __return_storage_ptr__->field_0x29 = uVar9;
    __return_storage_ptr__->field_0x2a = uVar10;
    __return_storage_ptr__->field_0x2b = uVar11;
    __return_storage_ptr__->field_0x2c = uVar12;
    __return_storage_ptr__->field_0x2d = uVar13;
    __return_storage_ptr__->field_0x2e = uVar14;
    __return_storage_ptr__->field_0x2f = uVar15;
    uVar1 = (pTVar17->Data).Pad[0x31];
    uVar2 = (pTVar17->Data).Pad[0x32];
    uVar3 = (pTVar17->Data).Pad[0x33];
    uVar4 = (pTVar17->Data).Pad[0x34];
    uVar5 = (pTVar17->Data).Pad[0x35];
    uVar6 = (pTVar17->Data).Pad[0x36];
    uVar7 = (pTVar17->Data).Pad[0x37];
    uVar8 = (pTVar17->Data).Pad[0x38];
    uVar9 = (pTVar17->Data).Pad[0x39];
    uVar10 = (pTVar17->Data).Pad[0x3a];
    uVar11 = (pTVar17->Data).Pad[0x3b];
    uVar12 = (pTVar17->Data).Pad[0x3c];
    uVar13 = (pTVar17->Data).Pad[0x3d];
    uVar14 = (pTVar17->Data).Pad[0x3e];
    uVar15 = (pTVar17->Data).Pad[0x3f];
    __return_storage_ptr__->field_0x30 = (pTVar17->Data).Pad[0x30];
    __return_storage_ptr__->field_0x31 = uVar1;
    __return_storage_ptr__->field_0x32 = uVar2;
    __return_storage_ptr__->field_0x33 = uVar3;
    __return_storage_ptr__->field_0x34 = uVar4;
    __return_storage_ptr__->field_0x35 = uVar5;
    __return_storage_ptr__->field_0x36 = uVar6;
    __return_storage_ptr__->field_0x37 = uVar7;
    __return_storage_ptr__->field_0x38 = uVar8;
    __return_storage_ptr__->field_0x39 = uVar9;
    __return_storage_ptr__->field_0x3a = uVar10;
    __return_storage_ptr__->field_0x3b = uVar11;
    __return_storage_ptr__->field_0x3c = uVar12;
    __return_storage_ptr__->field_0x3d = uVar13;
    __return_storage_ptr__->field_0x3e = uVar14;
    __return_storage_ptr__->field_0x3f = uVar15;
  }
  if ((local_20 & 1) != 0) {
    pTVar17 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)local_60;
    if ((local_20 & 2) == 0) {
      pTVar17 = local_60[0];
    }
    local_20 = local_20 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
                   (pTVar17->Data).Pad)->Data).Pad)(pTVar17,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return __return_storage_ptr__;
}

// FromValue<UE::Math::TRotator<double>_&> @ 1465d10a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<UE::Math::TRotator<double>_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,TRotator<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIntermediatePropertyValue *pFVar3;
  undefined ****ppppuVar4;
  byte bVar5;
  undefined ****ppppuVar6;
  undefined1 auStack_a8 [48];
  double local_78;
  double dStack_70;
  double local_68;
  undefined ***local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  double local_50;
  double dStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = param_1->Pitch;
  dStack_70 = param_1->Yaw;
  local_20 = local_20 | 3;
  local_68 = param_1->Roll;
  local_50 = local_78;
  dStack_48 = dStack_70;
  uStack_58 = 0x18;
  local_40 = local_68;
  local_60 = (undefined ***)
             &___7__TTypeErasedPropertyValueImpl_U__TRotator_N_Math_UE___Private_MovieScene_UE__6B_;
  if (((local_20 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar6 = &local_60;
  if ((local_20 & 2) == 0) {
    ppppuVar6 = (undefined ****)local_60;
  }
  if (((local_20 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar4 = &local_60;
  if ((local_20 & 2) == 0) {
    ppppuVar4 = (undefined ****)local_60;
  }
  if ((ppppuVar6 != ppppuVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 | 2;
  bVar5 = local_20;
  if ((local_20 & 1) != 0) {
    local_20 = local_20 & 0xfe;
    bVar5 = __return_storage_ptr__->field_0x40 | 1;
    *(undefined ****)__return_storage_ptr__ = local_60;
    *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uStack_54,uStack_58);
    *(double *)&__return_storage_ptr__->field_0x10 = local_50;
    *(double *)&__return_storage_ptr__->field_0x18 = dStack_48;
    __return_storage_ptr__->field_0x40 = (bVar5 ^ local_20) & 2 ^ bVar5;
    bVar5 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x20 = (undefined4)local_40;
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = local_40._4_4_;
    *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_38;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_34;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_30;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_28;
  }
  if ((bVar5 & 1) != 0) {
    ppppuVar6 = &local_60;
    if ((local_20 & 2) == 0) {
      ppppuVar6 = (undefined ****)local_60;
    }
    local_20 = local_20 & 0xfe;
    (*(code *)**ppppuVar6)(ppppuVar6,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_60);
    }
  }
  return __return_storage_ptr__;
}

// FromValue<UE::MovieScene::FDoubleIntermediateVector_&> @ 1465d1250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<UE::MovieScene::FDoubleIntermediateVector_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,FDoubleIntermediateVector *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIntermediatePropertyValue *pFVar3;
  undefined ****ppppuVar4;
  byte bVar5;
  undefined ****ppppuVar6;
  undefined1 auStack_a8 [48];
  double local_78;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined ***local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = param_1->X;
  dStack_70 = param_1->Y;
  local_18 = local_18 | 3;
  local_68 = *(undefined4 *)&param_1->Z;
  uStack_64 = *(undefined4 *)((longlong)&param_1->Z + 4);
  uStack_60 = *(undefined4 *)&param_1->W;
  uStack_5c = *(undefined4 *)((longlong)&param_1->W + 4);
  local_48 = local_78;
  dStack_40 = dStack_70;
  uStack_50 = 0x20;
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  local_58 = (undefined ***)
             &
             ___7__TTypeErasedPropertyValueImpl_UFDoubleIntermediateVector_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar6 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar6 = (undefined ****)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar4 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar4 = (undefined ****)local_58;
  }
  if ((ppppuVar6 != ppppuVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 | 2;
  bVar5 = local_18;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfe;
    bVar5 = __return_storage_ptr__->field_0x40 | 1;
    *(undefined ****)__return_storage_ptr__ = local_58;
    *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uStack_4c,uStack_50);
    *(double *)&__return_storage_ptr__->field_0x10 = local_48;
    *(double *)&__return_storage_ptr__->field_0x18 = dStack_40;
    __return_storage_ptr__->field_0x40 = (bVar5 ^ local_18) & 2 ^ bVar5;
    bVar5 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_38;
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_34;
    *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_30;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_2c;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_28;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_20;
  }
  if ((bVar5 & 1) != 0) {
    ppppuVar6 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar6 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar6)(ppppuVar6,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58);
    }
  }
  return __return_storage_ptr__;
}

// FromValue<UE::MovieScene::FFloatIntermediateVector_&> @ 1465d1400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<UE::MovieScene::FFloatIntermediateVector_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,FFloatIntermediateVector *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIntermediatePropertyValue *pFVar3;
  undefined ****ppppuVar4;
  byte bVar5;
  undefined ****ppppuVar6;
  undefined1 auStack_a8 [48];
  double local_78;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined ***local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = param_1->X;
  dStack_70 = param_1->Y;
  local_18 = local_18 | 3;
  local_68 = *(undefined4 *)&param_1->Z;
  uStack_64 = *(undefined4 *)((longlong)&param_1->Z + 4);
  uStack_60 = *(undefined4 *)&param_1->W;
  uStack_5c = *(undefined4 *)((longlong)&param_1->W + 4);
  local_48 = local_78;
  dStack_40 = dStack_70;
  uStack_50 = 0x20;
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  local_58 = (undefined ***)
             &
             ___7__TTypeErasedPropertyValueImpl_UFFloatIntermediateVector_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar6 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar6 = (undefined ****)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar4 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar4 = (undefined ****)local_58;
  }
  if ((ppppuVar6 != ppppuVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 | 2;
  bVar5 = local_18;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfe;
    bVar5 = __return_storage_ptr__->field_0x40 | 1;
    *(undefined ****)__return_storage_ptr__ = local_58;
    *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uStack_4c,uStack_50);
    *(double *)&__return_storage_ptr__->field_0x10 = local_48;
    *(double *)&__return_storage_ptr__->field_0x18 = dStack_40;
    __return_storage_ptr__->field_0x40 = (bVar5 ^ local_18) & 2 ^ bVar5;
    bVar5 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_38;
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_34;
    *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_30;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_2c;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_28;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_20;
  }
  if ((bVar5 & 1) != 0) {
    ppppuVar6 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar6 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar6)(ppppuVar6,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58);
    }
  }
  return __return_storage_ptr__;
}

// FromValue<UE::MovieScene::FIntermediate3DTransform_&> @ 1465d15b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<UE::MovieScene::FIntermediate3DTransform_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,FIntermediate3DTransform *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  FIntermediatePropertyValue *pFVar4;
  undefined8 ***pppuVar5;
  byte bVar6;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *puStack_e8;
  undefined8 *local_e0;
  undefined8 *puStack_d8;
  undefined8 *local_d0;
  undefined8 *puStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  undefined8 **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  byte local_18;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f0 = (undefined8 *)param_1->T_X;
  puStack_e8 = (undefined8 *)param_1->T_Y;
  local_18 = local_18 & 0xfc;
  local_e0 = (undefined8 *)param_1->T_Z;
  puStack_d8 = (undefined8 *)param_1->R_X;
  local_d0 = (undefined8 *)param_1->R_Y;
  puStack_c8 = (undefined8 *)param_1->R_Z;
  local_c0 = (undefined8 *)param_1->S_X;
  puStack_b8 = (undefined8 *)param_1->S_Y;
  local_f8 = (undefined8 *)param_1->S_Z;
  local_a0 = local_f0;
  puStack_98 = puStack_e8;
  local_90 = local_e0;
  puStack_88 = puStack_d8;
  local_80 = local_d0;
  puStack_78 = puStack_c8;
  local_70 = local_c0;
  puStack_68 = puStack_b8;
  local_60 = local_f8;
  local_58 = FMemory::Malloc(0x58,8);
  pppuVar3 = &local_58;
  if ((local_18 & 2) == 0) {
    pppuVar3 = (undefined8 ***)local_58;
  }
  local_18 = local_18 | 1;
  pppuVar3[2] = (undefined8 **)local_f0;
  pppuVar3[3] = (undefined8 **)puStack_e8;
  *(undefined4 *)(pppuVar3 + 1) = 0x48;
  *pppuVar3 = (undefined8 **)
              &
              ___7__TTypeErasedPropertyValueImpl_UFIntermediate3DTransform_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
  pppuVar3[4] = (undefined8 **)local_e0;
  pppuVar3[5] = (undefined8 **)puStack_d8;
  pppuVar3[6] = (undefined8 **)local_d0;
  pppuVar3[7] = (undefined8 **)puStack_c8;
  pppuVar3[8] = (undefined8 **)local_c0;
  pppuVar3[9] = (undefined8 **)puStack_b8;
  pppuVar3[10] = (undefined8 **)local_f8;
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar4;
  }
  pppuVar3 = &local_58;
  if ((local_18 & 2) == 0) {
    pppuVar3 = (undefined8 ***)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar4;
  }
  pppuVar5 = &local_58;
  if ((local_18 & 2) == 0) {
    pppuVar5 = (undefined8 ***)local_58;
  }
  if ((pppuVar3 != pppuVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar4;
  }
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 | 2;
  bVar6 = local_18;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfe;
    bVar6 = __return_storage_ptr__->field_0x40 | 1;
    *(undefined8 ***)__return_storage_ptr__ = local_58;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uStack_50;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_48;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_40;
    __return_storage_ptr__->field_0x40 = (bVar6 ^ local_18) & 2 ^ bVar6;
    bVar6 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_38;
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_34;
    *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_30;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_2c;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_28;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_20;
  }
  if ((bVar6 & 1) != 0) {
    pppuVar3 = &local_58;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58);
    }
  }
  return __return_storage_ptr__;
}

// FromValue<UE::MovieScene::FIntermediateColor_&> @ 1465d17e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<UE::MovieScene::FIntermediateColor_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,FIntermediateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIntermediatePropertyValue *pFVar3;
  undefined ****ppppuVar4;
  byte bVar5;
  undefined ****ppppuVar6;
  undefined1 auStack_a8 [48];
  double local_78;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined ***local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = param_1->R;
  dStack_70 = param_1->G;
  local_18 = local_18 | 3;
  local_68 = *(undefined4 *)&param_1->B;
  uStack_64 = *(undefined4 *)((longlong)&param_1->B + 4);
  uStack_60 = *(undefined4 *)&param_1->A;
  uStack_5c = *(undefined4 *)((longlong)&param_1->A + 4);
  local_48 = local_78;
  dStack_40 = dStack_70;
  uStack_50 = 0x20;
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  local_58 = (undefined ***)
             &
             ___7__TTypeErasedPropertyValueImpl_UFIntermediateColor_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar6 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar6 = (undefined ****)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar4 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar4 = (undefined ****)local_58;
  }
  if ((ppppuVar6 != ppppuVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 | 2;
  bVar5 = local_18;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfe;
    bVar5 = __return_storage_ptr__->field_0x40 | 1;
    *(undefined ****)__return_storage_ptr__ = local_58;
    *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uStack_4c,uStack_50);
    *(double *)&__return_storage_ptr__->field_0x10 = local_48;
    *(double *)&__return_storage_ptr__->field_0x18 = dStack_40;
    __return_storage_ptr__->field_0x40 = (bVar5 ^ local_18) & 2 ^ bVar5;
    bVar5 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_38;
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_34;
    *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_30;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_2c;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_28;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_20;
  }
  if ((bVar5 & 1) != 0) {
    ppppuVar6 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar6 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar6)(ppppuVar6,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58);
    }
  }
  return __return_storage_ptr__;
}

// FromValue<FString_&> @ 1465d1990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<FString_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIntermediatePropertyValue *pFVar3;
  undefined ****ppppuVar4;
  byte bVar5;
  undefined ****ppppuVar6;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  undefined4 local_80;
  FString local_78;
  undefined ***local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FScriptContainerElement *local_58;
  int iStack_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = &___7__TTypeErasedPropertyValueImpl_VFString___Private_MovieScene_UE__6B_;
  local_80 = 0;
  ::FString::FString(&local_78,param_1);
  local_28 = local_28 | 3;
  local_80 = 0x10;
  uStack_60 = 0x10;
  local_68 = (undefined ***)
             &___7__TTypeErasedPropertyValueImpl_VFString___Private_MovieScene_UE__6B_;
  local_58 = local_78.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iStack_50 = local_78.Data.ArrayNum;
  iStack_4c = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if (((local_28 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar6 = &local_68;
  if ((local_28 & 2) == 0) {
    ppppuVar6 = (undefined ****)local_68;
  }
  if (((local_28 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar4 = &local_68;
  if ((local_28 & 2) == 0) {
    ppppuVar4 = (undefined ****)local_68;
  }
  if ((ppppuVar6 != ppppuVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 | 2;
  if ((local_28 & 1) != 0) {
    local_28 = local_28 & 0xfe;
    bVar5 = __return_storage_ptr__->field_0x40 | 1;
    *(undefined ****)__return_storage_ptr__ = local_68;
    *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uStack_5c,uStack_60);
    *(FScriptContainerElement **)&__return_storage_ptr__->field_0x10 = local_58;
    *(ulonglong *)&__return_storage_ptr__->field_0x18 = CONCAT44(iStack_4c,iStack_50);
    __return_storage_ptr__->field_0x40 = (bVar5 ^ local_28) & 2 ^ bVar5;
    *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_48;
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_44;
    *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_40;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_3c;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_38;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_30;
  }
  if ((local_28 & 1) != 0) {
    ppppuVar6 = &local_68;
    if ((local_28 & 2) == 0) {
      ppppuVar6 = (undefined ****)local_68;
    }
    local_28 = local_28 & 0xfe;
    (*(code *)**ppppuVar6)(ppppuVar6,0);
    if ((local_28 & 2) == 0) {
      FMemory::Free(local_68);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromValue<FText_&> @ 1465d1b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<FText_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIntermediatePropertyValue *pFVar3;
  undefined *****pppppuVar4;
  byte bVar5;
  undefined *****pppppuVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined **local_80;
  undefined4 local_78;
  FText local_70;
  undefined ****local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  FText local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_70.TextData.Reference = (param_1->TextData).Reference;
  local_80 = &___7__TTypeErasedPropertyValueImpl_VFText___Private_MovieScene_UE__6B_;
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 8))(local_70.TextData.Reference,local_88);
  }
  local_70.Flags = param_1->Flags;
  local_20 = local_20 | 3;
  local_78 = 0x10;
  uStack_58 = 0x10;
  local_60 = (undefined ****)&___7__TTypeErasedPropertyValueImpl_VFText___Private_MovieScene_UE__6B_
  ;
  FText::FText(&local_50,&local_70);
  if (((local_20 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  pppppuVar6 = &local_60;
  if ((local_20 & 2) == 0) {
    pppppuVar6 = (undefined *****)local_60;
  }
  if (((local_20 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  pppppuVar4 = &local_60;
  if ((local_20 & 2) == 0) {
    pppppuVar4 = (undefined *****)local_60;
  }
  if ((pppppuVar6 != pppppuVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 | 2;
  if ((local_20 & 1) != 0) {
    local_20 = local_20 & 0xfe;
    bVar5 = __return_storage_ptr__->field_0x40 | 1;
    *(undefined *****)__return_storage_ptr__ = local_60;
    *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uStack_54,uStack_58);
    *(ITextData **)&__return_storage_ptr__->field_0x10 = local_50.TextData.Reference;
    *(uint *)&__return_storage_ptr__->field_0x18 = local_50.Flags;
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = local_50._12_4_;
    __return_storage_ptr__->field_0x40 = (bVar5 ^ local_20) & 2 ^ bVar5;
    *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_40;
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_3c;
    *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_38;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_34;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_30;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_28;
  }
  if ((local_20 & 1) != 0) {
    pppppuVar6 = &local_60;
    if ((local_20 & 2) == 0) {
      pppppuVar6 = (undefined *****)local_60;
    }
    local_20 = local_20 & 0xfe;
    (*(code *)**pppppuVar6)(pppppuVar6,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_60);
    }
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// FromValue<__int64_&> @ 1465d1d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<__int64_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,long64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIntermediatePropertyValue *pFVar3;
  undefined ****ppppuVar4;
  byte bVar5;
  undefined ****ppppuVar6;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long64 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_18 = local_18 | 3;
  uStack_50 = 8;
  local_58 = (undefined ***)&___7__TTypeErasedPropertyValueImpl__J_Private_MovieScene_UE__6B_;
  local_48 = *param_1;
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar6 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar6 = (undefined ****)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar4 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar4 = (undefined ****)local_58;
  }
  if ((ppppuVar6 != ppppuVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 | 2;
  bVar5 = local_18;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfe;
    bVar5 = __return_storage_ptr__->field_0x40 | 1;
    *(undefined ****)__return_storage_ptr__ = local_58;
    *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uStack_4c,uStack_50);
    *(long64 *)&__return_storage_ptr__->field_0x10 = local_48;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_40;
    __return_storage_ptr__->field_0x40 = (bVar5 ^ local_18) & 2 ^ bVar5;
    bVar5 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = local_38;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = uStack_30;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_28;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_20;
  }
  if ((bVar5 & 1) != 0) {
    ppppuVar6 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar6 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar6)(ppppuVar6,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58);
    }
  }
  return __return_storage_ptr__;
}

// FromValue<bool_const_&> @ 1465d1f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<bool_const_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIntermediatePropertyValue *pFVar3;
  undefined ****ppppuVar4;
  byte bVar5;
  undefined ****ppppuVar6;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_18 = local_18 | 3;
  uStack_50 = 1;
  local_58 = (undefined ***)&___7__TTypeErasedPropertyValueImpl__N_Private_MovieScene_UE__6B_;
  local_48 = *param_1;
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar6 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar6 = (undefined ****)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  ppppuVar4 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppuVar4 = (undefined ****)local_58;
  }
  if ((ppppuVar6 != ppppuVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediatePropertyValue *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 | 2;
  bVar5 = local_18;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfe;
    bVar5 = __return_storage_ptr__->field_0x40 | 1;
    *(undefined ****)__return_storage_ptr__ = local_58;
    *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uStack_4c,uStack_50);
    *(ulonglong *)&__return_storage_ptr__->field_0x10 = CONCAT71(uStack_47,local_48);
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_40;
    __return_storage_ptr__->field_0x40 = (bVar5 ^ local_18) & 2 ^ bVar5;
    bVar5 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = local_38;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = uStack_30;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_28;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_20;
  }
  if ((bVar5 & 1) != 0) {
    ppppuVar6 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar6 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar6)(ppppuVar6,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58);
    }
  }
  return __return_storage_ptr__;
}

// FromValue<double> @ 1465d20a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<double>
          (FIntermediatePropertyValue *__return_storage_ptr__,double *param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  byte bVar16;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar17;
  undefined1 auStack_98 [32];
  TTypeErasedPropertyValueImpl<double> local_78;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *local_60 [8];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Value = *param_1;
  local_78._padding_ = (longlong)&___7__TTypeErasedPropertyValueImpl_N_Private_MovieScene_UE__6B_;
  local_78._padding_._0_4_ = 8;
  pTVar17 = TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>::
            TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8><UE::MovieScene::Private::TTypeErasedPropertyValueImpl<double>,void>
                      ((TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
                       local_60,&local_78);
  bVar16 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = bVar16 | 2;
  if (pTVar17->bIsValid) {
    __return_storage_ptr__->field_0x40 = bVar16 | 3;
    pTVar17->bIsValid = false;
    __return_storage_ptr__->field_0x40 =
         __return_storage_ptr__->field_0x40 ^
         (pTVar17->field_0x40 ^ __return_storage_ptr__->field_0x40) & 2;
    uVar1 = (pTVar17->Data).Pad[1];
    uVar2 = (pTVar17->Data).Pad[2];
    uVar3 = (pTVar17->Data).Pad[3];
    uVar4 = (pTVar17->Data).Pad[4];
    uVar5 = (pTVar17->Data).Pad[5];
    uVar6 = (pTVar17->Data).Pad[6];
    uVar7 = (pTVar17->Data).Pad[7];
    uVar8 = (pTVar17->Data).Pad[8];
    uVar9 = (pTVar17->Data).Pad[9];
    uVar10 = (pTVar17->Data).Pad[10];
    uVar11 = (pTVar17->Data).Pad[0xb];
    uVar12 = (pTVar17->Data).Pad[0xc];
    uVar13 = (pTVar17->Data).Pad[0xd];
    uVar14 = (pTVar17->Data).Pad[0xe];
    uVar15 = (pTVar17->Data).Pad[0xf];
    __return_storage_ptr__->field_0x0 = (pTVar17->Data).Pad[0];
    __return_storage_ptr__->field_0x1 = uVar1;
    __return_storage_ptr__->field_0x2 = uVar2;
    __return_storage_ptr__->field_0x3 = uVar3;
    __return_storage_ptr__->field_0x4 = uVar4;
    __return_storage_ptr__->field_0x5 = uVar5;
    __return_storage_ptr__->field_0x6 = uVar6;
    __return_storage_ptr__->field_0x7 = uVar7;
    __return_storage_ptr__->field_0x8 = uVar8;
    __return_storage_ptr__->field_0x9 = uVar9;
    __return_storage_ptr__->field_0xa = uVar10;
    __return_storage_ptr__->field_0xb = uVar11;
    __return_storage_ptr__->field_0xc = uVar12;
    __return_storage_ptr__->field_0xd = uVar13;
    __return_storage_ptr__->field_0xe = uVar14;
    __return_storage_ptr__->field_0xf = uVar15;
    uVar1 = (pTVar17->Data).Pad[0x11];
    uVar2 = (pTVar17->Data).Pad[0x12];
    uVar3 = (pTVar17->Data).Pad[0x13];
    uVar4 = (pTVar17->Data).Pad[0x14];
    uVar5 = (pTVar17->Data).Pad[0x15];
    uVar6 = (pTVar17->Data).Pad[0x16];
    uVar7 = (pTVar17->Data).Pad[0x17];
    uVar8 = (pTVar17->Data).Pad[0x18];
    uVar9 = (pTVar17->Data).Pad[0x19];
    uVar10 = (pTVar17->Data).Pad[0x1a];
    uVar11 = (pTVar17->Data).Pad[0x1b];
    uVar12 = (pTVar17->Data).Pad[0x1c];
    uVar13 = (pTVar17->Data).Pad[0x1d];
    uVar14 = (pTVar17->Data).Pad[0x1e];
    uVar15 = (pTVar17->Data).Pad[0x1f];
    __return_storage_ptr__->field_0x10 = (pTVar17->Data).Pad[0x10];
    __return_storage_ptr__->field_0x11 = uVar1;
    __return_storage_ptr__->field_0x12 = uVar2;
    __return_storage_ptr__->field_0x13 = uVar3;
    __return_storage_ptr__->field_0x14 = uVar4;
    __return_storage_ptr__->field_0x15 = uVar5;
    __return_storage_ptr__->field_0x16 = uVar6;
    __return_storage_ptr__->field_0x17 = uVar7;
    __return_storage_ptr__->field_0x18 = uVar8;
    __return_storage_ptr__->field_0x19 = uVar9;
    __return_storage_ptr__->field_0x1a = uVar10;
    __return_storage_ptr__->field_0x1b = uVar11;
    __return_storage_ptr__->field_0x1c = uVar12;
    __return_storage_ptr__->field_0x1d = uVar13;
    __return_storage_ptr__->field_0x1e = uVar14;
    __return_storage_ptr__->field_0x1f = uVar15;
    uVar1 = (pTVar17->Data).Pad[0x21];
    uVar2 = (pTVar17->Data).Pad[0x22];
    uVar3 = (pTVar17->Data).Pad[0x23];
    uVar4 = (pTVar17->Data).Pad[0x24];
    uVar5 = (pTVar17->Data).Pad[0x25];
    uVar6 = (pTVar17->Data).Pad[0x26];
    uVar7 = (pTVar17->Data).Pad[0x27];
    uVar8 = (pTVar17->Data).Pad[0x28];
    uVar9 = (pTVar17->Data).Pad[0x29];
    uVar10 = (pTVar17->Data).Pad[0x2a];
    uVar11 = (pTVar17->Data).Pad[0x2b];
    uVar12 = (pTVar17->Data).Pad[0x2c];
    uVar13 = (pTVar17->Data).Pad[0x2d];
    uVar14 = (pTVar17->Data).Pad[0x2e];
    uVar15 = (pTVar17->Data).Pad[0x2f];
    __return_storage_ptr__->field_0x20 = (pTVar17->Data).Pad[0x20];
    __return_storage_ptr__->field_0x21 = uVar1;
    __return_storage_ptr__->field_0x22 = uVar2;
    __return_storage_ptr__->field_0x23 = uVar3;
    __return_storage_ptr__->field_0x24 = uVar4;
    __return_storage_ptr__->field_0x25 = uVar5;
    __return_storage_ptr__->field_0x26 = uVar6;
    __return_storage_ptr__->field_0x27 = uVar7;
    __return_storage_ptr__->field_0x28 = uVar8;
    __return_storage_ptr__->field_0x29 = uVar9;
    __return_storage_ptr__->field_0x2a = uVar10;
    __return_storage_ptr__->field_0x2b = uVar11;
    __return_storage_ptr__->field_0x2c = uVar12;
    __return_storage_ptr__->field_0x2d = uVar13;
    __return_storage_ptr__->field_0x2e = uVar14;
    __return_storage_ptr__->field_0x2f = uVar15;
    uVar1 = (pTVar17->Data).Pad[0x31];
    uVar2 = (pTVar17->Data).Pad[0x32];
    uVar3 = (pTVar17->Data).Pad[0x33];
    uVar4 = (pTVar17->Data).Pad[0x34];
    uVar5 = (pTVar17->Data).Pad[0x35];
    uVar6 = (pTVar17->Data).Pad[0x36];
    uVar7 = (pTVar17->Data).Pad[0x37];
    uVar8 = (pTVar17->Data).Pad[0x38];
    uVar9 = (pTVar17->Data).Pad[0x39];
    uVar10 = (pTVar17->Data).Pad[0x3a];
    uVar11 = (pTVar17->Data).Pad[0x3b];
    uVar12 = (pTVar17->Data).Pad[0x3c];
    uVar13 = (pTVar17->Data).Pad[0x3d];
    uVar14 = (pTVar17->Data).Pad[0x3e];
    uVar15 = (pTVar17->Data).Pad[0x3f];
    __return_storage_ptr__->field_0x30 = (pTVar17->Data).Pad[0x30];
    __return_storage_ptr__->field_0x31 = uVar1;
    __return_storage_ptr__->field_0x32 = uVar2;
    __return_storage_ptr__->field_0x33 = uVar3;
    __return_storage_ptr__->field_0x34 = uVar4;
    __return_storage_ptr__->field_0x35 = uVar5;
    __return_storage_ptr__->field_0x36 = uVar6;
    __return_storage_ptr__->field_0x37 = uVar7;
    __return_storage_ptr__->field_0x38 = uVar8;
    __return_storage_ptr__->field_0x39 = uVar9;
    __return_storage_ptr__->field_0x3a = uVar10;
    __return_storage_ptr__->field_0x3b = uVar11;
    __return_storage_ptr__->field_0x3c = uVar12;
    __return_storage_ptr__->field_0x3d = uVar13;
    __return_storage_ptr__->field_0x3e = uVar14;
    __return_storage_ptr__->field_0x3f = uVar15;
  }
  if ((local_20 & 1) != 0) {
    pTVar17 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)local_60;
    if ((local_20 & 2) == 0) {
      pTVar17 = local_60[0];
    }
    local_20 = local_20 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
                   (pTVar17->Data).Pad)->Data).Pad)(pTVar17,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return __return_storage_ptr__;
}

// FromValue<UE::MovieScene::FObjectComponent> @ 1465d2190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<UE::MovieScene::FObjectComponent>
          (FIntermediatePropertyValue *__return_storage_ptr__,FObjectComponent *param_1)

{
  UObject *pUVar1;
  FObjectKey FVar2;
  code *pcVar3;
  bool bVar4;
  FIntermediatePropertyValue *pFVar5;
  undefined *****pppppuVar6;
  byte bVar7;
  undefined *****pppppuVar8;
  undefined1 auStack_78 [32];
  undefined ****local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  UObject *local_48;
  FObjectKey FStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  pUVar1 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  local_18 = local_18 | 3;
  FVar2 = param_1->ObjectKey;
  uStack_50 = 0x10;
  local_58 = (undefined ****)
             &
             ___7__TTypeErasedPropertyValueImpl_UFObjectComponent_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
  local_48 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  FStack_40 = FVar2;
  if (((local_18 & 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FIntermediatePropertyValue *)(*pcVar3)();
    return pFVar5;
  }
  pppppuVar8 = &local_58;
  if ((local_18 & 2) == 0) {
    pppppuVar8 = (undefined *****)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FIntermediatePropertyValue *)(*pcVar3)();
    return pFVar5;
  }
  pppppuVar6 = &local_58;
  if ((local_18 & 2) == 0) {
    pppppuVar6 = (undefined *****)local_58;
  }
  if ((pppppuVar8 != pppppuVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FIntermediatePropertyValue *)(*pcVar3)();
    return pFVar5;
  }
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 | 2;
  bVar7 = local_18;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfe;
    bVar7 = __return_storage_ptr__->field_0x40 | 1;
    *(undefined *****)__return_storage_ptr__ = local_58;
    *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uStack_4c,uStack_50);
    *(UObject **)&__return_storage_ptr__->field_0x10 = local_48;
    *(int *)&__return_storage_ptr__->field_0x18 = FStack_40.ObjectIndex;
    *(int *)&__return_storage_ptr__->field_0x1c = FStack_40.ObjectSerialNumber;
    __return_storage_ptr__->field_0x40 = (bVar7 ^ local_18) & 2 ^ bVar7;
    bVar7 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = local_38;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = uStack_30;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_28;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_20;
  }
  if ((bVar7 & 1) != 0) {
    pppppuVar8 = &local_58;
    if ((local_18 & 2) == 0) {
      pppppuVar8 = (undefined *****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppppuVar8)(pppppuVar8,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58);
    }
  }
  return __return_storage_ptr__;
}

