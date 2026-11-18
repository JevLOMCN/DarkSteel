// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_> @ 14ac657c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ac65a3a) */
/* WARNING: Removing unreachable block (ram,0x00014ac65a40) */
/* WARNING: Removing unreachable block (ram,0x00014ac65a45) */
/* WARNING: Removing unreachable block (ram,0x00014ac65a57) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *****pppppuVar9;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar10;
  byte bVar11;
  undefined8 *****pppppuVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  undefined8 ****local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 ****local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 & 0xfc;
  local_58 = FMemory::Malloc(0x60,8);
  pppppuVar12 = &local_58;
  if ((local_18 & 2) == 0) {
    pppppuVar12 = (undefined8 *****)local_58;
  }
  local_18 = local_18 | 1;
  *pppppuVar12 = (undefined8 ****)
                 &
                 ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__U__TAdd_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  *(undefined2 *)(pppppuVar12 + 1) = *(undefined2 *)&param_1->field_0x8;
  *(undefined1 *)(pppppuVar12 + 7) = 0;
  cVar3 = param_1->field_0x38;
  *(char *)(pppppuVar12 + 7) = cVar3;
  if (cVar3 != '\0') {
    uVar6 = *(undefined8 *)&param_1->field_0x14;
    *(undefined8 *)((longlong)pppppuVar12 + 0xc) = *(undefined8 *)&param_1->field_0xc;
    *(undefined8 *)((longlong)pppppuVar12 + 0x14) = uVar6;
    uVar6 = *(undefined8 *)&param_1->field_0x24;
    *(undefined8 *)((longlong)pppppuVar12 + 0x1c) = *(undefined8 *)&param_1->field_0x1c;
    *(undefined8 *)((longlong)pppppuVar12 + 0x24) = uVar6;
    *(undefined8 *)((longlong)pppppuVar12 + 0x2c) = *(undefined8 *)&param_1->field_0x2c;
    *(undefined4 *)((longlong)pppppuVar12 + 0x34) = *(undefined4 *)&param_1->field_0x34;
  }
  *(undefined2 *)(pppppuVar12 + 8) = *(undefined2 *)&param_1->field_0x40;
  *(undefined1 *)(pppppuVar12 + 10) = 0;
  cVar3 = param_1->field_0x50;
  *(char *)(pppppuVar12 + 10) = cVar3;
  if (cVar3 != '\0') {
    pppppuVar12[9] = *(undefined8 *****)&param_1->field_0x48;
  }
  *(undefined1 *)(pppppuVar12 + 0xb) = param_1->field_0x58;
  *pppppuVar12 = (undefined8 ****)
                 &
                 ___7__TEntityBuilder_U__TAdd_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__U__TAdd_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (((local_18 & 1) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pppppuVar12 = &local_58;
  if ((local_18 & 2) == 0) {
    pppppuVar12 = (undefined8 *****)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pppppuVar9 = &local_58;
  if ((local_18 & 2) == 0) {
    pppppuVar9 = (undefined8 *****)local_58;
  }
  if ((pppppuVar12 != pppppuVar9) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar4 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar4 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar10 = FVar4;
  }
  if ((ulonglong)FVar10 <= &local_58) {
    lVar13 = (longlong)(this->Builders).ArrayMax;
    FVar10 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar4 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar10 = FVar4;
    }
    if (&local_58 < (undefined8 *****)((longlong)FVar10 + lVar13 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar4 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar4;
      }
      local_88 = &local_58;
      local_78 = lVar13;
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
  }
  iVar8 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar8 + 1;
  FVar4 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar4;
  }
  puVar2 = (undefined8 *)((longlong)this + (longlong)iVar8 * 0x48);
  bVar11 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar8 * 0x48] & 0xfe;
  *(byte *)(puVar2 + 8) = bVar11 | 2;
  if ((local_18 & 1) != 0) {
    *(byte *)(puVar2 + 8) = bVar11 | 3;
    *(byte *)(puVar2 + 8) = *(byte *)(puVar2 + 8) ^ (local_18 & 0xfe ^ *(byte *)(puVar2 + 8)) & 2;
    *puVar2 = local_58;
    puVar2[1] = uStack_50;
    puVar2[2] = local_48;
    puVar2[3] = uStack_40;
    *(undefined4 *)(puVar2 + 4) = local_38;
    *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_34;
    *(undefined4 *)(puVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(puVar2 + 6) = uStack_28;
    *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_24;
    *(undefined4 *)(puVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>_> @ 14ac65a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ac65cd9) */
/* WARNING: Removing unreachable block (ram,0x00014ac65cdf) */
/* WARNING: Removing unreachable block (ram,0x00014ac65ce4) */
/* WARNING: Removing unreachable block (ram,0x00014ac65cf6) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
          *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined ******ppppppuVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  undefined ******ppppppuVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined *****local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined *****local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined4 *)&param_1->field_0x8;
  uStack_3c = CONCAT31((int3)((uint)uStack_3c >> 8),param_1->field_0x1c);
  if (param_1->field_0x1c != '\0') {
    uStack_4c = (undefined4)*(undefined8 *)&param_1->field_0xc;
    uStack_48 = (undefined4)((ulonglong)*(undefined8 *)&param_1->field_0xc >> 0x20);
    uStack_44 = (undefined4)*(undefined8 *)&param_1->field_0x14;
    uStack_40 = (undefined4)((ulonglong)*(undefined8 *)&param_1->field_0x14 >> 0x20);
  }
  local_38 = CONCAT22(local_38._2_2_,*(undefined2 *)&param_1->field_0x20);
  uStack_20 = CONCAT31((int3)((uint)uStack_20 >> 8),param_1->field_0x38);
  if (param_1->field_0x38 != '\0') {
    uStack_34 = *(undefined8 *)&param_1->field_0x24;
    uStack_2c = *(undefined8 *)&param_1->field_0x2c;
    uStack_24 = *(undefined4 *)&param_1->field_0x34;
  }
  uStack_1c = CONCAT31(uStack_1c._1_3_,param_1->field_0x3c);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFTemplateSequenceComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (((local_18 & 1) == 0) &&
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
  ppppppuVar10 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar10 = (undefined ******)local_58;
  }
  if (((local_18 & 1) == 0) &&
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
  ppppppuVar7 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar7 = (undefined ******)local_58;
  }
  if ((ppppppuVar10 != ppppppuVar7) &&
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
  if ((ulonglong)FVar8 <= &local_58) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_58 < (undefined ******)((longlong)FVar8 + lVar11 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = (undefined *****)&local_58;
      local_78 = lVar11;
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
  plVar2 = (longlong *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar9 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  *(byte *)(plVar2 + 8) = bVar9 | 2;
  if ((local_18 & 1) != 0) {
    *(byte *)(plVar2 + 8) = bVar9 | 3;
    *(byte *)(plVar2 + 8) = *(byte *)(plVar2 + 8) ^ (*(byte *)(plVar2 + 8) ^ local_18 & 0xfe) & 2;
    *plVar2 = (longlong)local_58;
    plVar2[1] = CONCAT44(uStack_4c,uStack_50);
    plVar2[2] = CONCAT44(uStack_44,uStack_48);
    plVar2[3] = CONCAT44(uStack_3c,uStack_40);
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = (undefined4)uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_34._4_4_;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = (undefined4)uStack_2c;
    *(undefined4 *)(plVar2 + 6) = uStack_2c._4_4_;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

