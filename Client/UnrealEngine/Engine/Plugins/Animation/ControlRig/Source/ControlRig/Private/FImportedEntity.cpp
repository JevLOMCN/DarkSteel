// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>_> @ 14a38a130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a38a29d) */
/* WARNING: Removing unreachable block (ram,0x00014a38a2a4) */
/* WARNING: Removing unreachable block (ram,0x00014a38a2aa) */
/* WARNING: Removing unreachable block (ram,0x00014a38a2c4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
          *param_1)

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> local_58;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58.bIsValid = false;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>_>
            (&local_58,param_1);
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar7 = FVar3;
  }
  if ((ulonglong)FVar7 <= &local_58) {
    lVar9 = (longlong)(this->Builders).ArrayMax;
    FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar7 = FVar3;
    }
    if (&local_58 <
        (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)((longlong)FVar7 + lVar9 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = &local_58;
      local_78 = lVar9;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (uchar *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar8 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  puVar2[0x40] = bVar8 | 2;
  if (local_58.bIsValid) {
    puVar2[0x40] = bVar8 | 3;
    puVar2[0x40] = puVar2[0x40] ^ (puVar2[0x40] ^ local_58._64_1_ & 0xfe) & 2;
    *(undefined8 *)puVar2 = local_58.Data.Pad._0_8_;
    *(undefined8 *)(puVar2 + 8) = local_58.Data.Pad._8_8_;
    *(undefined8 *)(puVar2 + 0x10) = local_58.Data.Pad._16_8_;
    *(undefined8 *)(puVar2 + 0x18) = local_58.Data.Pad._24_8_;
    *(undefined4 *)(puVar2 + 0x20) = local_58.Data.Pad._32_4_;
    *(undefined4 *)(puVar2 + 0x24) = local_58.Data.Pad._36_4_;
    *(undefined4 *)(puVar2 + 0x28) = local_58.Data.Pad._40_4_;
    *(undefined4 *)(puVar2 + 0x2c) = local_58.Data.Pad._44_4_;
    *(undefined4 *)(puVar2 + 0x30) = local_58.Data.Pad._48_4_;
    *(undefined4 *)(puVar2 + 0x34) = local_58.Data.Pad._52_4_;
    *(undefined4 *)(puVar2 + 0x38) = local_58.Data.Pad._56_4_;
    *(undefined4 *)(puVar2 + 0x3c) = local_58.Data.Pad._60_4_;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_> @ 14a38a2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a38a45d) */
/* WARNING: Removing unreachable block (ram,0x00014a38a464) */
/* WARNING: Removing unreachable block (ram,0x00014a38a46a) */
/* WARNING: Removing unreachable block (ram,0x00014a38a484) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
          *param_1)

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> local_58;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58.bIsValid = false;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
            (&local_58,param_1);
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar7 = FVar3;
  }
  if ((ulonglong)FVar7 <= &local_58) {
    lVar9 = (longlong)(this->Builders).ArrayMax;
    FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar7 = FVar3;
    }
    if (&local_58 <
        (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)((longlong)FVar7 + lVar9 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = &local_58;
      local_78 = lVar9;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (uchar *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar8 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  puVar2[0x40] = bVar8 | 2;
  if (local_58.bIsValid) {
    puVar2[0x40] = bVar8 | 3;
    puVar2[0x40] = puVar2[0x40] ^ (puVar2[0x40] ^ local_58._64_1_ & 0xfe) & 2;
    *(undefined8 *)puVar2 = local_58.Data.Pad._0_8_;
    *(undefined8 *)(puVar2 + 8) = local_58.Data.Pad._8_8_;
    *(undefined8 *)(puVar2 + 0x10) = local_58.Data.Pad._16_8_;
    *(undefined8 *)(puVar2 + 0x18) = local_58.Data.Pad._24_8_;
    *(undefined4 *)(puVar2 + 0x20) = local_58.Data.Pad._32_4_;
    *(undefined4 *)(puVar2 + 0x24) = local_58.Data.Pad._36_4_;
    *(undefined4 *)(puVar2 + 0x28) = local_58.Data.Pad._40_4_;
    *(undefined4 *)(puVar2 + 0x2c) = local_58.Data.Pad._44_4_;
    *(undefined4 *)(puVar2 + 0x30) = local_58.Data.Pad._48_4_;
    *(undefined4 *)(puVar2 + 0x34) = local_58.Data.Pad._52_4_;
    *(undefined4 *)(puVar2 + 0x38) = local_58.Data.Pad._56_4_;
    *(undefined4 *)(puVar2 + 0x3c) = local_58.Data.Pad._60_4_;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_> @ 14a38a4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a38a61d) */
/* WARNING: Removing unreachable block (ram,0x00014a38a624) */
/* WARNING: Removing unreachable block (ram,0x00014a38a62a) */
/* WARNING: Removing unreachable block (ram,0x00014a38a644) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
          *param_1)

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> local_58;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58.bIsValid = false;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
            (&local_58,param_1);
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar7 = FVar3;
  }
  if ((ulonglong)FVar7 <= &local_58) {
    lVar9 = (longlong)(this->Builders).ArrayMax;
    FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar7 = FVar3;
    }
    if (&local_58 <
        (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)((longlong)FVar7 + lVar9 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = &local_58;
      local_78 = lVar9;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (uchar *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar8 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  puVar2[0x40] = bVar8 | 2;
  if (local_58.bIsValid) {
    puVar2[0x40] = bVar8 | 3;
    puVar2[0x40] = puVar2[0x40] ^ (puVar2[0x40] ^ local_58._64_1_ & 0xfe) & 2;
    *(undefined8 *)puVar2 = local_58.Data.Pad._0_8_;
    *(undefined8 *)(puVar2 + 8) = local_58.Data.Pad._8_8_;
    *(undefined8 *)(puVar2 + 0x10) = local_58.Data.Pad._16_8_;
    *(undefined8 *)(puVar2 + 0x18) = local_58.Data.Pad._24_8_;
    *(undefined4 *)(puVar2 + 0x20) = local_58.Data.Pad._32_4_;
    *(undefined4 *)(puVar2 + 0x24) = local_58.Data.Pad._36_4_;
    *(undefined4 *)(puVar2 + 0x28) = local_58.Data.Pad._40_4_;
    *(undefined4 *)(puVar2 + 0x2c) = local_58.Data.Pad._44_4_;
    *(undefined4 *)(puVar2 + 0x30) = local_58.Data.Pad._48_4_;
    *(undefined4 *)(puVar2 + 0x34) = local_58.Data.Pad._52_4_;
    *(undefined4 *)(puVar2 + 0x38) = local_58.Data.Pad._56_4_;
    *(undefined4 *)(puVar2 + 0x3c) = local_58.Data.Pad._60_4_;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14a38a670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a38a7dd) */
/* WARNING: Removing unreachable block (ram,0x00014a38a7e4) */
/* WARNING: Removing unreachable block (ram,0x00014a38a7ea) */
/* WARNING: Removing unreachable block (ram,0x00014a38a804) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
          *param_1)

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> local_58;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58.bIsValid = false;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
            (&local_58,param_1);
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar7 = FVar3;
  }
  if ((ulonglong)FVar7 <= &local_58) {
    lVar9 = (longlong)(this->Builders).ArrayMax;
    FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar7 = FVar3;
    }
    if (&local_58 <
        (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)((longlong)FVar7 + lVar9 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = &local_58;
      local_78 = lVar9;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (uchar *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar8 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  puVar2[0x40] = bVar8 | 2;
  if (local_58.bIsValid) {
    puVar2[0x40] = bVar8 | 3;
    puVar2[0x40] = puVar2[0x40] ^ (puVar2[0x40] ^ local_58._64_1_ & 0xfe) & 2;
    *(undefined8 *)puVar2 = local_58.Data.Pad._0_8_;
    *(undefined8 *)(puVar2 + 8) = local_58.Data.Pad._8_8_;
    *(undefined8 *)(puVar2 + 0x10) = local_58.Data.Pad._16_8_;
    *(undefined8 *)(puVar2 + 0x18) = local_58.Data.Pad._24_8_;
    *(undefined4 *)(puVar2 + 0x20) = local_58.Data.Pad._32_4_;
    *(undefined4 *)(puVar2 + 0x24) = local_58.Data.Pad._36_4_;
    *(undefined4 *)(puVar2 + 0x28) = local_58.Data.Pad._40_4_;
    *(undefined4 *)(puVar2 + 0x2c) = local_58.Data.Pad._44_4_;
    *(undefined4 *)(puVar2 + 0x30) = local_58.Data.Pad._48_4_;
    *(undefined4 *)(puVar2 + 0x34) = local_58.Data.Pad._52_4_;
    *(undefined4 *)(puVar2 + 0x38) = local_58.Data.Pad._56_4_;
    *(undefined4 *)(puVar2 + 0x3c) = local_58.Data.Pad._60_4_;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>_> @ 14a38a830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a38a99d) */
/* WARNING: Removing unreachable block (ram,0x00014a38a9a4) */
/* WARNING: Removing unreachable block (ram,0x00014a38a9aa) */
/* WARNING: Removing unreachable block (ram,0x00014a38a9c4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
          *param_1)

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> local_58;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58.bIsValid = false;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>_>
            (&local_58,param_1);
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar7 = FVar3;
  }
  if ((ulonglong)FVar7 <= &local_58) {
    lVar9 = (longlong)(this->Builders).ArrayMax;
    FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar7 = FVar3;
    }
    if (&local_58 <
        (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)((longlong)FVar7 + lVar9 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = &local_58;
      local_78 = lVar9;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (uchar *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar8 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  puVar2[0x40] = bVar8 | 2;
  if (local_58.bIsValid) {
    puVar2[0x40] = bVar8 | 3;
    puVar2[0x40] = puVar2[0x40] ^ (puVar2[0x40] ^ local_58._64_1_ & 0xfe) & 2;
    *(undefined8 *)puVar2 = local_58.Data.Pad._0_8_;
    *(undefined8 *)(puVar2 + 8) = local_58.Data.Pad._8_8_;
    *(undefined8 *)(puVar2 + 0x10) = local_58.Data.Pad._16_8_;
    *(undefined8 *)(puVar2 + 0x18) = local_58.Data.Pad._24_8_;
    *(undefined4 *)(puVar2 + 0x20) = local_58.Data.Pad._32_4_;
    *(undefined4 *)(puVar2 + 0x24) = local_58.Data.Pad._36_4_;
    *(undefined4 *)(puVar2 + 0x28) = local_58.Data.Pad._40_4_;
    *(undefined4 *)(puVar2 + 0x2c) = local_58.Data.Pad._44_4_;
    *(undefined4 *)(puVar2 + 0x30) = local_58.Data.Pad._48_4_;
    *(undefined4 *)(puVar2 + 0x34) = local_58.Data.Pad._52_4_;
    *(undefined4 *)(puVar2 + 0x38) = local_58.Data.Pad._56_4_;
    *(undefined4 *)(puVar2 + 0x3c) = local_58.Data.Pad._60_4_;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_> @ 14a38a9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a38ac24) */
/* WARNING: Removing unreachable block (ram,0x00014a38ac2a) */
/* WARNING: Removing unreachable block (ram,0x00014a38ac2f) */
/* WARNING: Removing unreachable block (ram,0x00014a38ac41) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *****pppppuVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  undefined8 *****pppppuVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined8 ****local_98;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 ****local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_28 = local_28 & 0xfc;
  local_68 = FMemory::Malloc(0x130,8);
  pppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_68;
  }
  local_28 = local_28 | 1;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L__0M__0N__0O___U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___34_UFAdd_34_U634_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U734_U734_U734_U734_U734_U734_U734_U734_U734_UFAddConditional_34__MovieScene_UE__6B_
  ;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
              *)(pppppuVar10 + 1),
             (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
              *)&param_1->field_0x8);
  *(undefined1 *)(pppppuVar10 + 0x25) = param_1->field_0x128;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilder_U__TAdd_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U523_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623_U623_U623_U623_UFAddConditional_23__MovieScene_UE__6B_
  ;
  if (((local_28 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_68;
  }
  if (((local_28 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pppppuVar7 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar7 = (undefined8 *****)local_68;
  }
  if ((pppppuVar10 != pppppuVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar8 = FVar3;
  }
  if ((ulonglong)FVar8 <= &local_68) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_68 < (undefined8 *****)((longlong)FVar8 + lVar11 * 0x48)) {
      local_80 = (longlong)(this->Builders).ArrayNum;
      local_78 = 0x48;
      local_90 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_90 = FVar3;
      }
      local_98 = &local_68;
      local_88 = lVar11;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (undefined8 *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar9 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  *(byte *)(puVar2 + 8) = bVar9 | 2;
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar2 + 8) = bVar9 | 3;
    *(byte *)(puVar2 + 8) = *(byte *)(puVar2 + 8) ^ (local_28 & 0xfe ^ *(byte *)(puVar2 + 8)) & 2;
    *puVar2 = local_68;
    puVar2[1] = uStack_60;
    puVar2[2] = local_58;
    puVar2[3] = uStack_50;
    *(undefined4 *)(puVar2 + 4) = local_48;
    *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_44;
    *(undefined4 *)(puVar2 + 5) = uStack_40;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_3c;
    *(undefined4 *)(puVar2 + 6) = local_38;
    *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_34;
    *(undefined4 *)(puVar2 + 7) = uStack_30;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_2c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_> @ 14a38ac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a38addd) */
/* WARNING: Removing unreachable block (ram,0x00014a38ade4) */
/* WARNING: Removing unreachable block (ram,0x00014a38adea) */
/* WARNING: Removing unreachable block (ram,0x00014a38ae04) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
          *param_1)

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> local_58;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58.bIsValid = false;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
            (&local_58,param_1);
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar7 = FVar3;
  }
  if ((ulonglong)FVar7 <= &local_58) {
    lVar9 = (longlong)(this->Builders).ArrayMax;
    FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar7 = FVar3;
    }
    if (&local_58 <
        (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)((longlong)FVar7 + lVar9 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = &local_58;
      local_78 = lVar9;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (uchar *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar8 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  puVar2[0x40] = bVar8 | 2;
  if (local_58.bIsValid) {
    puVar2[0x40] = bVar8 | 3;
    puVar2[0x40] = puVar2[0x40] ^ (puVar2[0x40] ^ local_58._64_1_ & 0xfe) & 2;
    *(undefined8 *)puVar2 = local_58.Data.Pad._0_8_;
    *(undefined8 *)(puVar2 + 8) = local_58.Data.Pad._8_8_;
    *(undefined8 *)(puVar2 + 0x10) = local_58.Data.Pad._16_8_;
    *(undefined8 *)(puVar2 + 0x18) = local_58.Data.Pad._24_8_;
    *(undefined4 *)(puVar2 + 0x20) = local_58.Data.Pad._32_4_;
    *(undefined4 *)(puVar2 + 0x24) = local_58.Data.Pad._36_4_;
    *(undefined4 *)(puVar2 + 0x28) = local_58.Data.Pad._40_4_;
    *(undefined4 *)(puVar2 + 0x2c) = local_58.Data.Pad._44_4_;
    *(undefined4 *)(puVar2 + 0x30) = local_58.Data.Pad._48_4_;
    *(undefined4 *)(puVar2 + 0x34) = local_58.Data.Pad._52_4_;
    *(undefined4 *)(puVar2 + 0x38) = local_58.Data.Pad._56_4_;
    *(undefined4 *)(puVar2 + 0x3c) = local_58.Data.Pad._60_4_;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_> @ 14a38ae30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a38af9d) */
/* WARNING: Removing unreachable block (ram,0x00014a38afa4) */
/* WARNING: Removing unreachable block (ram,0x00014a38afaa) */
/* WARNING: Removing unreachable block (ram,0x00014a38afc4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
          *param_1)

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> local_58;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58.bIsValid = false;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
            (&local_58,param_1);
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar7 = FVar3;
  }
  if ((ulonglong)FVar7 <= &local_58) {
    lVar9 = (longlong)(this->Builders).ArrayMax;
    FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar7 = FVar3;
    }
    if (&local_58 <
        (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)((longlong)FVar7 + lVar9 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = &local_58;
      local_78 = lVar9;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (uchar *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar8 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  puVar2[0x40] = bVar8 | 2;
  if (local_58.bIsValid) {
    puVar2[0x40] = bVar8 | 3;
    puVar2[0x40] = puVar2[0x40] ^ (puVar2[0x40] ^ local_58._64_1_ & 0xfe) & 2;
    *(undefined8 *)puVar2 = local_58.Data.Pad._0_8_;
    *(undefined8 *)(puVar2 + 8) = local_58.Data.Pad._8_8_;
    *(undefined8 *)(puVar2 + 0x10) = local_58.Data.Pad._16_8_;
    *(undefined8 *)(puVar2 + 0x18) = local_58.Data.Pad._24_8_;
    *(undefined4 *)(puVar2 + 0x20) = local_58.Data.Pad._32_4_;
    *(undefined4 *)(puVar2 + 0x24) = local_58.Data.Pad._36_4_;
    *(undefined4 *)(puVar2 + 0x28) = local_58.Data.Pad._40_4_;
    *(undefined4 *)(puVar2 + 0x2c) = local_58.Data.Pad._44_4_;
    *(undefined4 *)(puVar2 + 0x30) = local_58.Data.Pad._48_4_;
    *(undefined4 *)(puVar2 + 0x34) = local_58.Data.Pad._52_4_;
    *(undefined4 *)(puVar2 + 0x38) = local_58.Data.Pad._56_4_;
    *(undefined4 *)(puVar2 + 0x3c) = local_58.Data.Pad._60_4_;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_> @ 14a38aff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a38b15d) */
/* WARNING: Removing unreachable block (ram,0x00014a38b164) */
/* WARNING: Removing unreachable block (ram,0x00014a38b16a) */
/* WARNING: Removing unreachable block (ram,0x00014a38b184) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
          *param_1)

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> local_58;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58.bIsValid = false;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TAdd<UE::MovieScene::FBaseControlRigEvalData>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
            (&local_58,param_1);
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar7 = FVar3;
  }
  if ((ulonglong)FVar7 <= &local_58) {
    lVar9 = (longlong)(this->Builders).ArrayMax;
    FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar7 = FVar3;
    }
    if (&local_58 <
        (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)((longlong)FVar7 + lVar9 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = &local_58;
      local_78 = lVar9;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (uchar *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar8 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  puVar2[0x40] = bVar8 | 2;
  if (local_58.bIsValid) {
    puVar2[0x40] = bVar8 | 3;
    puVar2[0x40] = puVar2[0x40] ^ (puVar2[0x40] ^ local_58._64_1_ & 0xfe) & 2;
    *(undefined8 *)puVar2 = local_58.Data.Pad._0_8_;
    *(undefined8 *)(puVar2 + 8) = local_58.Data.Pad._8_8_;
    *(undefined8 *)(puVar2 + 0x10) = local_58.Data.Pad._16_8_;
    *(undefined8 *)(puVar2 + 0x18) = local_58.Data.Pad._24_8_;
    *(undefined4 *)(puVar2 + 0x20) = local_58.Data.Pad._32_4_;
    *(undefined4 *)(puVar2 + 0x24) = local_58.Data.Pad._36_4_;
    *(undefined4 *)(puVar2 + 0x28) = local_58.Data.Pad._40_4_;
    *(undefined4 *)(puVar2 + 0x2c) = local_58.Data.Pad._44_4_;
    *(undefined4 *)(puVar2 + 0x30) = local_58.Data.Pad._48_4_;
    *(undefined4 *)(puVar2 + 0x34) = local_58.Data.Pad._52_4_;
    *(undefined4 *)(puVar2 + 0x38) = local_58.Data.Pad._56_4_;
    *(undefined4 *)(puVar2 + 0x3c) = local_58.Data.Pad._60_4_;
  }
  return;
}

