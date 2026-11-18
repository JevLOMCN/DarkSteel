// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// Add<FEulerTransformInterrogationData> @ 14a389510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a389750) */
/* WARNING: Removing unreachable block (ram,0x00014a389759) */

void __thiscall
FMovieSceneInterrogationData::Add<FEulerTransformInterrogationData>
          (FMovieSceneInterrogationData *this,FEulerTransformInterrogationData *param_1,
          FMovieSceneInterrogationKey param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 ******ppppppuVar6;
  ulong64 ******ppppppuVar7;
  longlong lVar8;
  undefined1 auStack_118 [32];
  ulong64 *****local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  ulong64 ****local_c8;
  FName FStack_c0;
  FMovieSceneAnimTypeID local_b8;
  ulong64 ****ppppuStack_b0;
  ulong64 ****ppppuStack_a8;
  ulong64 ****ppppuStack_a0;
  ulong64 ****ppppuStack_98;
  ulong64 ****local_90;
  ulong64 ****ppppuStack_88;
  ulong64 ****local_80;
  ulong64 ****ppppuStack_78;
  ulong64 ****local_70;
  FName FStack_68;
  ulong64 *****local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  byte local_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  ppppuStack_b0 = (ulong64 ****)(param_1->Val).Location.field0_0x0._s_0.X;
  ppppuStack_a8 = (ulong64 ****)(param_1->Val).Location.field0_0x0._s_0.Y;
  local_20 = local_20 & 0xfc;
  ppppuStack_a0 = (ulong64 ****)(param_1->Val).Location.field0_0x0._s_0.Z;
  ppppuStack_98 = (ulong64 ****)(param_1->Val).Rotation.Pitch;
  local_90 = (ulong64 ****)(param_1->Val).Rotation.Yaw;
  ppppuStack_88 = (ulong64 ****)(param_1->Val).Rotation.Roll;
  local_80 = (ulong64 ****)(param_1->Val).Scale.field0_0x0._s_0.X;
  ppppuStack_78 = (ulong64 ****)(param_1->Val).Scale.field0_0x0._s_0.Y;
  local_c8 = (ulong64 ****)(param_1->Val).Scale.field0_0x0._s_0.Z;
  FStack_c0 = param_1->ParameterName;
  local_b8 = param_2.AnimTypeID.ID;
  local_70 = local_c8;
  FStack_68 = FStack_c0;
  local_60 = FMemory::Malloc(0x58,8);
  ppppppuVar7 = &local_60;
  if ((local_20 & 2) == 0) {
    ppppppuVar7 = (ulong64 ******)local_60;
  }
  local_20 = local_20 | 1;
  *ppppppuVar7 = (ulong64 *****)local_b8.ID;
  ppppppuVar7[1] = (ulong64 *****)ppppuStack_b0;
  ppppppuVar7[2] = (ulong64 *****)ppppuStack_a8;
  ppppppuVar7[3] = (ulong64 *****)ppppuStack_a0;
  ppppppuVar7[4] = (ulong64 *****)ppppuStack_98;
  ppppppuVar7[5] = (ulong64 *****)local_90;
  ppppppuVar7[6] = (ulong64 *****)ppppuStack_88;
  ppppppuVar7[7] = (ulong64 *****)local_80;
  ppppppuVar7[8] = (ulong64 *****)ppppuStack_78;
  ppppppuVar7[9] = (ulong64 *****)local_70;
  *(FName *)(ppppppuVar7 + 10) = FStack_c0;
  if (((local_20 & 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppppppuVar7 = &local_60;
  if ((local_20 & 2) == 0) {
    ppppppuVar7 = (ulong64 ******)local_60;
  }
  if (((local_20 & 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppppppuVar6 = &local_60;
  if ((local_20 & 2) == 0) {
    ppppppuVar6 = (ulong64 ******)local_60;
  }
  if ((ppppppuVar7 != ppppppuVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->TokenData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_60) &&
     (lVar8 = (longlong)(this->TokenData).ArrayMax,
     (FScriptContainerElement *)&local_60 < pFVar2 + lVar8 * 0x48)) {
    local_e0 = (longlong)(this->TokenData).ArrayNum;
    local_d8 = 0x48;
    local_f8 = (ulong64 *****)&local_60;
    local_f0 = pFVar2;
    local_e8 = lVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->TokenData).ArrayNum;
  piVar1 = &(this->TokenData).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)this,piVar1);
  }
  lVar8 = (longlong)iVar5;
  (this->TokenData).ArrayNum = iVar5 + 1;
  pFVar2 = (this->TokenData).AllocatorInstance.Data;
  pFVar2[lVar8 * 0x48 + 0x40] = (FScriptContainerElement)((byte)pFVar2[lVar8 * 0x48 + 0x40] & 0xfe);
  pFVar2[lVar8 * 0x48 + 0x40] = (FScriptContainerElement)((byte)pFVar2[lVar8 * 0x48 + 0x40] | 2);
  pFVar2 = pFVar2 + lVar8 * 0x48;
  if ((local_20 & 1) != 0) {
    pFVar2[0x40] = (FScriptContainerElement)((byte)pFVar2[0x40] | 1);
    pFVar2[0x40] = (FScriptContainerElement)
                   ((byte)pFVar2[0x40] ^ (local_20 & 0xfe ^ (byte)pFVar2[0x40]) & 2);
    *(ulong64 ******)pFVar2 = local_60;
    *(undefined8 *)(pFVar2 + 8) = uStack_58;
    *(undefined8 *)(pFVar2 + 0x10) = local_50;
    *(undefined8 *)(pFVar2 + 0x18) = uStack_48;
    *(undefined8 *)(pFVar2 + 0x20) = local_40;
    *(undefined8 *)(pFVar2 + 0x28) = uStack_38;
    *(undefined8 *)(pFVar2 + 0x30) = local_30;
    *(undefined8 *)(pFVar2 + 0x38) = uStack_28;
  }
  return;
}

// Add<FFloatInterrogationData> @ 14a389790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a389975) */
/* WARNING: Removing unreachable block (ram,0x00014a38997e) */

void __thiscall
FMovieSceneInterrogationData::Add<FFloatInterrogationData>
          (FMovieSceneInterrogationData *this,FFloatInterrogationData *param_1,
          FMovieSceneInterrogationKey param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMovieSceneAnimTypeID *pFVar8;
  FMovieSceneAnimTypeID FVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  FMovieSceneAnimTypeID *local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  FMovieSceneAnimTypeID local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  FMovieSceneAnimTypeID local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong lStack_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_68 = (param_1->ParameterName).Number;
  uVar2 = param_1->Val;
  uVar3 = (param_1->ParameterName).ComparisonIndex;
  local_20 = local_20 | 3;
  local_50 = CONCAT44(uStack_64,local_68);
  local_78 = param_2.AnimTypeID.ID;
  uStack_70 = uVar2;
  uStack_6c = uVar3;
  uStack_58 = uVar2;
  uStack_54 = uVar3;
  if ((local_20 & 1) == 0) {
    local_60 = param_2.AnimTypeID.ID;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    param_2.AnimTypeID.ID = (FMovieSceneAnimTypeID)(FMovieSceneAnimTypeID)local_60.ID;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar9.ID = (ulong64)&local_60;
  if ((local_20 & 2) == 0) {
    FVar9 = param_2.AnimTypeID.ID;
  }
  if ((local_20 & 1) == 0) {
    local_60 = param_2.AnimTypeID.ID;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    param_2.AnimTypeID.ID = (FMovieSceneAnimTypeID)(FMovieSceneAnimTypeID)local_60.ID;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar8 = &local_60;
  if ((local_20 & 2) == 0) {
    pFVar8 = (FMovieSceneAnimTypeID *)param_2.AnimTypeID.ID;
  }
  if ((FMovieSceneAnimTypeID *)FVar9.ID != pFVar8) {
    local_60 = param_2.AnimTypeID.ID;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    param_2.AnimTypeID.ID = (FMovieSceneAnimTypeID)(FMovieSceneAnimTypeID)local_60.ID;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this->TokenData).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_60) &&
     (lVar10 = (longlong)(this->TokenData).ArrayMax,
     (FScriptContainerElement *)&local_60 < pFVar4 + lVar10 * 0x48)) {
    local_90 = (longlong)(this->TokenData).ArrayNum;
    local_88 = 0x48;
    local_a8 = &local_60;
    local_a0 = pFVar4;
    local_98 = lVar10;
    local_60 = param_2.AnimTypeID.ID;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    param_2.AnimTypeID.ID = (FMovieSceneAnimTypeID)(FMovieSceneAnimTypeID)local_60.ID;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->TokenData).ArrayNum;
  piVar1 = &(this->TokenData).ArrayMax;
  if (iVar7 == *piVar1) {
    local_60 = param_2.AnimTypeID.ID;
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)this,piVar1);
    param_2.AnimTypeID.ID = (FMovieSceneAnimTypeID)(FMovieSceneAnimTypeID)local_60.ID;
  }
  lVar10 = (longlong)iVar7;
  (this->TokenData).ArrayNum = iVar7 + 1;
  pFVar4 = (this->TokenData).AllocatorInstance.Data;
  pFVar4[lVar10 * 0x48 + 0x40] =
       (FScriptContainerElement)((byte)pFVar4[lVar10 * 0x48 + 0x40] & 0xfe);
  pFVar4[lVar10 * 0x48 + 0x40] = (FScriptContainerElement)((byte)pFVar4[lVar10 * 0x48 + 0x40] | 2);
  pFVar4 = pFVar4 + lVar10 * 0x48;
  if ((local_20 & 1) != 0) {
    pFVar4[0x40] = (FScriptContainerElement)((byte)pFVar4[0x40] | 1);
    pFVar4[0x40] = (FScriptContainerElement)
                   ((byte)pFVar4[0x40] ^ ((byte)pFVar4[0x40] ^ local_20 & 0xfe) & 2);
    *(FMovieSceneAnimTypeID *)pFVar4 = param_2.AnimTypeID.ID;
    *(longlong *)(pFVar4 + 8) = CONCAT44(uStack_54,uStack_58);
    *(longlong *)(pFVar4 + 0x10) = local_50;
    *(longlong *)(pFVar4 + 0x18) = lStack_48;
    *(longlong *)(pFVar4 + 0x20) = local_40;
    *(longlong *)(pFVar4 + 0x28) = lStack_38;
    *(longlong *)(pFVar4 + 0x30) = local_30;
    *(longlong *)(pFVar4 + 0x38) = lStack_28;
  }
  return;
}

// Add<FVector2DInterrogationData> @ 14a389c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a389de5) */
/* WARNING: Removing unreachable block (ram,0x00014a389dee) */

void __thiscall
FMovieSceneInterrogationData::Add<FVector2DInterrogationData>
          (FMovieSceneInterrogationData *this,FVector2DInterrogationData *param_1,
          FMovieSceneInterrogationKey param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneAnimTypeID FVar7;
  FMovieSceneAnimTypeID FVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  FMovieSceneAnimTypeID *local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  FMovieSceneAnimTypeID local_78;
  double dStack_70;
  undefined8 uStack_68;
  uint uStack_60;
  uint uStack_5c;
  FMovieSceneAnimTypeID local_58;
  double dStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_c8;
  dStack_70 = (param_1->Val).field0_0x0._s_0.X;
  uVar4 = *(undefined8 *)((longlong)&(param_1->Val).field0_0x0 + 8);
  local_18 = local_18 | 3;
  uStack_68._0_4_ = (undefined4)uVar4;
  uStack_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_60 = (uint)(param_1->ParameterName).ComparisonIndex;
  uStack_5c = (param_1->ParameterName).Number;
  local_48 = (undefined4)uStack_68;
  uStack_44 = uStack_68._4_4_;
  local_78 = param_2.AnimTypeID.ID;
  uStack_68 = uVar4;
  local_58 = param_2.AnimTypeID.ID;
  dStack_50 = dStack_70;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar8.ID = (ulong64)&local_58;
  if ((local_18 & 2) == 0) {
    FVar8.ID = local_58.ID;
  }
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar7.ID = (ulong64)&local_58;
  if ((local_18 & 2) == 0) {
    FVar7.ID = local_58.ID;
  }
  if ((FVar8.ID != FVar7.ID) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->TokenData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_58) &&
     (lVar9 = (longlong)(this->TokenData).ArrayMax,
     (FScriptContainerElement *)&local_58 < pFVar2 + lVar9 * 0x48)) {
    local_90 = (longlong)(this->TokenData).ArrayNum;
    local_88 = 0x48;
    local_a8 = &local_58;
    local_a0 = pFVar2;
    local_98 = lVar9;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->TokenData).ArrayNum;
  piVar1 = &(this->TokenData).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)this,piVar1);
  }
  lVar9 = (longlong)iVar6;
  (this->TokenData).ArrayNum = iVar6 + 1;
  pFVar2 = (this->TokenData).AllocatorInstance.Data;
  pFVar2[lVar9 * 0x48 + 0x40] = (FScriptContainerElement)((byte)pFVar2[lVar9 * 0x48 + 0x40] & 0xfe);
  pFVar2[lVar9 * 0x48 + 0x40] = (FScriptContainerElement)((byte)pFVar2[lVar9 * 0x48 + 0x40] | 2);
  pFVar2 = pFVar2 + lVar9 * 0x48;
  if ((local_18 & 1) != 0) {
    pFVar2[0x40] = (FScriptContainerElement)((byte)pFVar2[0x40] | 1);
    pFVar2[0x40] = (FScriptContainerElement)
                   ((byte)pFVar2[0x40] ^ ((byte)pFVar2[0x40] ^ local_18 & 0xfe) & 2);
    *(ulong64 *)pFVar2 = local_58.ID;
    *(double *)(pFVar2 + 8) = dStack_50;
    *(longlong *)(pFVar2 + 0x10) = CONCAT44(uStack_44,local_48);
    *(longlong *)(pFVar2 + 0x18) = CONCAT44(uStack_3c,uStack_40);
    *(longlong *)(pFVar2 + 0x20) = local_38;
    *(longlong *)(pFVar2 + 0x28) = lStack_30;
    *(longlong *)(pFVar2 + 0x30) = local_28;
    *(longlong *)(pFVar2 + 0x38) = lStack_20;
  }
  return;
}

// Add<FVectorInterrogationData> @ 14a389e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a38a009) */
/* WARNING: Removing unreachable block (ram,0x00014a38a012) */

void __thiscall
FMovieSceneInterrogationData::Add<FVectorInterrogationData>
          (FMovieSceneInterrogationData *this,FVectorInterrogationData *param_1,
          FMovieSceneInterrogationKey param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMovieSceneAnimTypeID FVar6;
  FMovieSceneAnimTypeID FVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  FMovieSceneAnimTypeID *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FMovieSceneAnimTypeID local_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  FName FStack_68;
  FMovieSceneAnimTypeID local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  FName local_40;
  longlong lStack_38;
  longlong local_30;
  longlong lStack_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  dStack_80 = (param_1->Val).field0_0x0._s_0.X;
  dStack_78 = (param_1->Val).field0_0x0._s_0.Y;
  local_20 = local_20 | 3;
  dStack_70 = (param_1->Val).field0_0x0._s_0.Z;
  FStack_68 = param_1->ParameterName;
  local_88 = param_2.AnimTypeID.ID;
  local_60 = param_2.AnimTypeID.ID;
  dStack_58 = dStack_80;
  local_50 = dStack_78;
  dStack_48 = dStack_70;
  local_40 = FStack_68;
  if (((local_20 & 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar7.ID = (ulong64)&local_60;
  if ((local_20 & 2) == 0) {
    FVar7.ID = local_60.ID;
  }
  if (((local_20 & 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar6.ID = (ulong64)&local_60;
  if ((local_20 & 2) == 0) {
    FVar6.ID = local_60.ID;
  }
  if ((FVar7.ID != FVar6.ID) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->TokenData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_60) &&
     (lVar8 = (longlong)(this->TokenData).ArrayMax,
     (FScriptContainerElement *)&local_60 < pFVar2 + lVar8 * 0x48)) {
    local_a0 = (longlong)(this->TokenData).ArrayNum;
    local_98 = 0x48;
    local_b8 = &local_60;
    local_b0 = pFVar2;
    local_a8 = lVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->TokenData).ArrayNum;
  piVar1 = &(this->TokenData).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)this,piVar1);
  }
  lVar8 = (longlong)iVar5;
  (this->TokenData).ArrayNum = iVar5 + 1;
  pFVar2 = (this->TokenData).AllocatorInstance.Data;
  pFVar2[lVar8 * 0x48 + 0x40] = (FScriptContainerElement)((byte)pFVar2[lVar8 * 0x48 + 0x40] & 0xfe);
  pFVar2[lVar8 * 0x48 + 0x40] = (FScriptContainerElement)((byte)pFVar2[lVar8 * 0x48 + 0x40] | 2);
  pFVar2 = pFVar2 + lVar8 * 0x48;
  if ((local_20 & 1) != 0) {
    pFVar2[0x40] = (FScriptContainerElement)((byte)pFVar2[0x40] | 1);
    pFVar2[0x40] = (FScriptContainerElement)
                   ((byte)pFVar2[0x40] ^ ((byte)pFVar2[0x40] ^ local_20 & 0xfe) & 2);
    *(ulong64 *)pFVar2 = local_60.ID;
    *(double *)(pFVar2 + 8) = dStack_58;
    *(double *)(pFVar2 + 0x10) = local_50;
    *(double *)(pFVar2 + 0x18) = dStack_48;
    *(FName *)(pFVar2 + 0x20) = local_40;
    *(longlong *)(pFVar2 + 0x28) = lStack_38;
    *(longlong *)(pFVar2 + 0x30) = local_30;
    *(longlong *)(pFVar2 + 0x38) = lStack_28;
  }
  return;
}

