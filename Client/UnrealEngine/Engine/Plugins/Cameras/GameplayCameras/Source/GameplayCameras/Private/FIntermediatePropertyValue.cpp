// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// FromValue<FCameraFramingZone_&> @ 14d5f0c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntermediatePropertyValue * __cdecl
UE::MovieScene::FIntermediatePropertyValue::FromValue<FCameraFramingZone_&>
          (FIntermediatePropertyValue *__return_storage_ptr__,FCameraFramingZone *param_1)

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
  local_78 = param_1->Left;
  dStack_70 = param_1->Top;
  local_18 = local_18 | 3;
  local_68 = *(undefined4 *)&param_1->Right;
  uStack_64 = *(undefined4 *)((longlong)&param_1->Right + 4);
  uStack_60 = *(undefined4 *)&param_1->Bottom;
  uStack_5c = *(undefined4 *)((longlong)&param_1->Bottom + 4);
  local_48 = local_78;
  dStack_40 = dStack_70;
  uStack_50 = 0x20;
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  local_58 = (undefined ***)
             &___7__TTypeErasedPropertyValueImpl_UFCameraFramingZone___Private_MovieScene_UE__6B_;
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

