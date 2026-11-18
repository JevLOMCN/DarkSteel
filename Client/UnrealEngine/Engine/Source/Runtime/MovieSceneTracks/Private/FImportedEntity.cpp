// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 62

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>_> @ 1465991f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014659935d) */
/* WARNING: Removing unreachable block (ram,0x000146599364) */
/* WARNING: Removing unreachable block (ram,0x00014659936a) */
/* WARNING: Removing unreachable block (ram,0x000146599384) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>_> @ 1465993b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014659951d) */
/* WARNING: Removing unreachable block (ram,0x000146599524) */
/* WARNING: Removing unreachable block (ram,0x00014659952a) */
/* WARNING: Removing unreachable block (ram,0x000146599544) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_> @ 146599570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001465997a4) */
/* WARNING: Removing unreachable block (ram,0x0001465997aa) */
/* WARNING: Removing unreachable block (ram,0x0001465997af) */
/* WARNING: Removing unreachable block (ram,0x0001465997c1) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
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
  local_68 = FMemory::Malloc(0x158,8);
  pppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_68;
  }
  local_28 = local_28 | 1;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L__0M__0N___U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734_U734_U734_U734_U734_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_UFAdd_34__MovieScene_UE__6B_
  ;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
              *)(pppppuVar10 + 1),
             (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
              *)&param_1->field_0x8);
  *(undefined1 *)(pppppuVar10 + 0x2a) = param_1->field_0x150;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623_U623_U623_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAdd_23__MovieScene_UE__6B_
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_> @ 1465997f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014659995d) */
/* WARNING: Removing unreachable block (ram,0x000146599964) */
/* WARNING: Removing unreachable block (ram,0x00014659996a) */
/* WARNING: Removing unreachable block (ram,0x000146599984) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FPerlinNoiseParams>,UE::MovieScene::TAdd<double>_>_> @ 1465999b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146599c20) */
/* WARNING: Removing unreachable block (ram,0x000146599c26) */
/* WARNING: Removing unreachable block (ram,0x000146599c2b) */
/* WARNING: Removing unreachable block (ram,0x000146599c3d) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FPerlinNoiseParams>,UE::MovieScene::TAdd<double>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FPerlinNoiseParams>,UE::MovieScene::TAdd<double>_>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  char cVar4;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  bool bVar8;
  int iVar9;
  undefined8 *****pppppuVar10;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar11;
  byte bVar12;
  undefined8 *****pppppuVar13;
  longlong lVar14;
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 & 0xfc;
  local_58 = FMemory::Malloc(0x50,8);
  pppppuVar13 = &local_58;
  if ((local_18 & 2) == 0) {
    pppppuVar13 = (undefined8 *****)local_58;
  }
  local_18 = local_18 | 1;
  *pppppuVar13 = (undefined8 ****)
                 &
                 ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFPerlinNoiseParams___MovieScene_UE__U__TAdd_N_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)(pppppuVar13 + 1) = *(undefined2 *)&param_1->field_0x8;
  *(undefined1 *)(pppppuVar13 + 5) = 0;
  cVar4 = param_1->field_0x28;
  *(char *)(pppppuVar13 + 5) = cVar4;
  if (cVar4 != '\0') {
    ppppuVar7 = *(undefined8 *****)&param_1->field_0x18;
    pppppuVar13[2] = *(undefined8 *****)&param_1->field_0x10;
    pppppuVar13[3] = ppppuVar7;
    pppppuVar13[4] = *(undefined8 *****)&param_1->field_0x20;
  }
  *(undefined2 *)(pppppuVar13 + 6) = *(undefined2 *)&param_1->field_0x30;
  *(undefined1 *)(pppppuVar13 + 8) = 0;
  cVar4 = param_1->field_0x40;
  *(char *)(pppppuVar13 + 8) = cVar4;
  if (cVar4 != '\0') {
    pppppuVar13[7] = *(undefined8 *****)&param_1->field_0x38;
  }
  *(undefined1 *)(pppppuVar13 + 9) = param_1->field_0x48;
  *pppppuVar13 = (undefined8 ****)
                 &
                 ___7__TEntityBuilder_U__TAdd_UFPerlinNoiseParams___MovieScene_UE__U__TAdd_N_23__MovieScene_UE__6B_
  ;
  if (((local_18 & 1) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pppppuVar13 = &local_58;
  if ((local_18 & 2) == 0) {
    pppppuVar13 = (undefined8 *****)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pppppuVar10 = &local_58;
  if ((local_18 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_58;
  }
  if ((pppppuVar13 != pppppuVar10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar5 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar5 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar11 = FVar5;
  }
  if ((ulonglong)FVar11 <= &local_58) {
    lVar14 = (longlong)(this->Builders).ArrayMax;
    FVar11 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar5 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar11 = FVar5;
    }
    if (&local_58 < (undefined8 *****)((longlong)FVar11 + lVar14 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar5 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar5;
      }
      local_88 = &local_58;
      local_78 = lVar14;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  iVar9 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  lVar14 = (longlong)iVar9;
  (this->Builders).ArrayNum = iVar9 + 1;
  FVar5 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar5;
  }
  bVar12 = ((uchar *)((longlong)this + 0x40))[lVar14 * 0x48] & 0xfe;
  ((uchar *)((longlong)this + 0x40))[lVar14 * 0x48] = bVar12 | 2;
  if ((local_18 & 1) != 0) {
    ((uchar *)((longlong)this + 0x40))[lVar14 * 0x48] = bVar12 | 3;
    ((uchar *)((longlong)this + 0x40))[lVar14 * 0x48] =
         ((uchar *)((longlong)this + 0x40))[lVar14 * 0x48] ^
         (local_18 & 0xfe ^ ((uchar *)((longlong)this + 0x40))[lVar14 * 0x48]) & 2;
    puVar2 = (undefined8 *)((longlong)this + lVar14 * 0x48);
    *puVar2 = local_58;
    puVar2[1] = uStack_50;
    *(undefined8 *)((uchar *)((longlong)this + 0x10) + lVar14 * 0x48) = local_48;
    *(undefined8 *)((uchar *)((longlong)this + 0x10) + lVar14 * 0x48 + 8) = uStack_40;
    puVar3 = (uchar *)((longlong)this + 0x20) + lVar14 * 0x48;
    *(undefined4 *)puVar3 = local_38;
    *(undefined4 *)(puVar3 + 4) = uStack_34;
    *(undefined4 *)(puVar3 + 8) = uStack_30;
    *(undefined4 *)(puVar3 + 0xc) = uStack_2c;
    puVar3 = (uchar *)((longlong)this + 0x30) + lVar14 * 0x48;
    *(undefined4 *)puVar3 = local_28;
    *(undefined4 *)(puVar3 + 4) = uStack_24;
    *(undefined4 *)(puVar3 + 8) = uStack_20;
    *(undefined4 *)(puVar3 + 0xc) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>_> @ 146599c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146599e96) */
/* WARNING: Removing unreachable block (ram,0x000146599e9c) */
/* WARNING: Removing unreachable block (ram,0x000146599ea1) */
/* WARNING: Removing unreachable block (ram,0x000146599eb3) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_> *param_1)

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
  undefined2 uStack_50;
  undefined6 uStack_4e;
  longlong local_48;
  char cStack_40;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  cStack_40 = param_1->field_0x18;
  if (param_1->field_0x18 != '\0') {
    local_48 = *(longlong *)&param_1->field_0x10;
  }
  local_38 = CONCAT31(local_38._1_3_,param_1->field_0x20);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAdd_UFSourceBoolChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
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
    plVar2[1] = CONCAT62(uStack_4e,uStack_50);
    plVar2[2] = local_48;
    plVar2[3] = CONCAT71(uStack_3f,cStack_40);
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_> @ 146599ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014659a116) */
/* WARNING: Removing unreachable block (ram,0x00014659a11c) */
/* WARNING: Removing unreachable block (ram,0x00014659a121) */
/* WARNING: Removing unreachable block (ram,0x00014659a133) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_> *param_1)

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
  undefined2 uStack_50;
  undefined6 uStack_4e;
  longlong local_48;
  char cStack_40;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  cStack_40 = param_1->field_0x18;
  if (param_1->field_0x18 != '\0') {
    local_48 = *(longlong *)&param_1->field_0x10;
  }
  local_38 = CONCAT31(local_38._1_3_,param_1->field_0x20);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAdd_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
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
    plVar2[1] = CONCAT62(uStack_4e,uStack_50);
    plVar2[2] = local_48;
    plVar2[3] = CONCAT71(uStack_3f,cStack_40);
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>_> @ 14659a170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014659a396) */
/* WARNING: Removing unreachable block (ram,0x00014659a39c) */
/* WARNING: Removing unreachable block (ram,0x00014659a3a1) */
/* WARNING: Removing unreachable block (ram,0x00014659a3b3) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_> *param_1)

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
  undefined2 uStack_50;
  undefined6 uStack_4e;
  longlong local_48;
  char cStack_40;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  cStack_40 = param_1->field_0x18;
  if (param_1->field_0x18 != '\0') {
    local_48 = *(longlong *)&param_1->field_0x10;
  }
  local_38 = CONCAT31(local_38._1_3_,param_1->field_0x20);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAdd_UFSourceIntegerChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
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
    plVar2[1] = CONCAT62(uStack_4e,uStack_50);
    plVar2[2] = local_48;
    plVar2[3] = CONCAT71(uStack_3f,cStack_40);
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>_>_> @ 14659a3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014659a616) */
/* WARNING: Removing unreachable block (ram,0x00014659a61c) */
/* WARNING: Removing unreachable block (ram,0x00014659a621) */
/* WARNING: Removing unreachable block (ram,0x00014659a633) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>_> *param_1)

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
  undefined2 uStack_50;
  undefined6 uStack_4e;
  longlong local_48;
  char cStack_40;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  cStack_40 = param_1->field_0x18;
  if (param_1->field_0x18 != '\0') {
    local_48 = *(longlong *)&param_1->field_0x10;
  }
  local_38 = CONCAT31(local_38._1_3_,param_1->field_0x20);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAdd_UFSourceStringChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
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
    plVar2[1] = CONCAT62(uStack_4e,uStack_50);
    plVar2[2] = local_48;
    plVar2[3] = CONCAT71(uStack_3f,cStack_40);
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>_> @ 14659a670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014659a7dd) */
/* WARNING: Removing unreachable block (ram,0x00014659a7e4) */
/* WARNING: Removing unreachable block (ram,0x00014659a7ea) */
/* WARNING: Removing unreachable block (ram,0x00014659a804) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_> @ 14659a830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014659a99d) */
/* WARNING: Removing unreachable block (ram,0x00014659a9a4) */
/* WARNING: Removing unreachable block (ram,0x00014659a9aa) */
/* WARNING: Removing unreachable block (ram,0x00014659a9c4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>_> @ 14659a9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014659ab5d) */
/* WARNING: Removing unreachable block (ram,0x00014659ab64) */
/* WARNING: Removing unreachable block (ram,0x00014659ab6a) */
/* WARNING: Removing unreachable block (ram,0x00014659ab84) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd>_> @ 14659abb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014659adbd) */
/* WARNING: Removing unreachable block (ram,0x00014659adc3) */
/* WARNING: Removing unreachable block (ram,0x00014659adc8) */
/* WARNING: Removing unreachable block (ram,0x00014659adda) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
          (FImportedEntity *this,TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd> *param_1)

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
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined4 *)&param_1->field_0x8;
  uStack_4c = CONCAT31(uStack_4c._1_3_,param_1->field_0xc);
  local_58 = (undefined *****)&___7__TEntityBuilder_UFAdd_MovieScene_UE__U123__MovieScene_UE__6B_;
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
    plVar2[2] = local_48;
    plVar2[3] = lStack_40;
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_> @ 14659ae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014659b044) */
/* WARNING: Removing unreachable block (ram,0x00014659b04a) */
/* WARNING: Removing unreachable block (ram,0x00014659b04f) */
/* WARNING: Removing unreachable block (ram,0x00014659b061) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
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
  local_68 = FMemory::Malloc(0x110,8);
  pppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_68;
  }
  local_28 = local_28 | 1;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L___UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U534_U534_U534_U534_U534_U534_U534_U534_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U234__MovieScene_UE__6B_
  ;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
              *)(pppppuVar10 + 1),
             (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
              *)&param_1->field_0x8);
  *(undefined1 *)(pppppuVar10 + 0x21) = param_1->field_0x108;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423_U423_U423_U423_U423_U423_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U123__MovieScene_UE__6B_
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_&> @ 14672ddc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672df1b) */
/* WARNING: Removing unreachable block (ram,0x00014672df22) */
/* WARNING: Removing unreachable block (ram,0x00014672df28) */
/* WARNING: Removing unreachable block (ram,0x00014672df42) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_&>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
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
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8><UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_&,void>
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
    puVar2[0x40] = puVar2[0x40] ^ (local_58._64_1_ & 0xfe ^ puVar2[0x40]) & 2;
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FLevelVisibilityComponentData>_>_> @ 14672df70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672e1b1) */
/* WARNING: Removing unreachable block (ram,0x00014672e1b7) */
/* WARNING: Removing unreachable block (ram,0x00014672e1bc) */
/* WARNING: Removing unreachable block (ram,0x00014672e1ce) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FLevelVisibilityComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FLevelVisibilityComponentData>_> *param_1)

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
  undefined2 uStack_50;
  undefined6 uStack_4e;
  UObject *local_48;
  char cStack_40;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A___U__TAdd_UFLevelVisibilityComponentData___MovieScene_UE___MovieScene_UE__6B_
  ;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  cStack_40 = param_1->field_0x18;
  if (param_1->field_0x18 != '\0') {
    local_48 = *(UObject **)&param_1->field_0x10;
    if ((GC::GIsIncrementalReachabilityPending) && (local_48 != (UObject *)0x0)) {
      GC::MarkAsReachable(local_48);
    }
  }
  local_38 = CONCAT31(local_38._1_3_,param_1->field_0x20);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAdd_UFLevelVisibilityComponentData___MovieScene_UE___MovieScene_UE__6B_
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
    plVar2[1] = CONCAT62(uStack_4e,uStack_50);
    plVar2[2] = (longlong)local_48;
    plVar2[3] = CONCAT71(uStack_3f,cStack_40);
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneDataLayerComponentData>_>_> @ 14672e210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672e451) */
/* WARNING: Removing unreachable block (ram,0x00014672e457) */
/* WARNING: Removing unreachable block (ram,0x00014672e45c) */
/* WARNING: Removing unreachable block (ram,0x00014672e46e) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneDataLayerComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneDataLayerComponentData>_> *param_1)

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
  undefined2 uStack_50;
  undefined6 uStack_4e;
  UObject *local_48;
  char cStack_40;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A___U__TAdd_UFMovieSceneDataLayerComponentData___MovieScene_UE___MovieScene_UE__6B_
  ;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  cStack_40 = param_1->field_0x18;
  if (param_1->field_0x18 != '\0') {
    local_48 = *(UObject **)&param_1->field_0x10;
    if ((GC::GIsIncrementalReachabilityPending) && (local_48 != (UObject *)0x0)) {
      GC::MarkAsReachable(local_48);
    }
  }
  local_38 = CONCAT31(local_38._1_3_,param_1->field_0x20);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAdd_UFMovieSceneDataLayerComponentData___MovieScene_UE___MovieScene_UE__6B_
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
    plVar2[1] = CONCAT62(uStack_4e,uStack_50);
    plVar2[2] = (longlong)local_48;
    plVar2[3] = CONCAT71(uStack_3f,cStack_40);
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_> @ 14672e4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672e61d) */
/* WARNING: Removing unreachable block (ram,0x00014672e624) */
/* WARNING: Removing unreachable block (ram,0x00014672e62a) */
/* WARNING: Removing unreachable block (ram,0x00014672e644) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAddConditional>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_> @ 14672e670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672e7dd) */
/* WARNING: Removing unreachable block (ram,0x00014672e7e4) */
/* WARNING: Removing unreachable block (ram,0x00014672e7ea) */
/* WARNING: Removing unreachable block (ram,0x00014672e804) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_> @ 14672e830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672ea4b) */
/* WARNING: Removing unreachable block (ram,0x00014672ea51) */
/* WARNING: Removing unreachable block (ram,0x00014672ea56) */
/* WARNING: Removing unreachable block (ram,0x00014672ea68) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
  *pTVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
  *pTVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
  *local_68;
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
  local_68 = FMemory::Malloc(0xc0,8);
  pTVar10 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
             *)&stack0xffffffffffffff98;
  if ((local_28 & 2) == 0) {
    pTVar10 = local_68;
  }
  local_28 = local_28 | 1;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
            (pTVar10,(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
                      *)param_1);
  pTVar10->_padding_ =
       (longlong)
       &
       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFMaterialParameterInfo___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U__TAdd_UFComponentMaterialInfo___23_UFAddConditional_23__MovieScene_UE__6B_
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
  pTVar10 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
             *)&stack0xffffffffffffff98;
  if ((local_28 & 2) == 0) {
    pTVar10 = local_68;
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
  pTVar7 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMaterialParameterInfo>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
            *)&stack0xffffffffffffff98;
  if ((local_28 & 2) == 0) {
    pTVar7 = local_68;
  }
  if ((pTVar10 != pTVar7) &&
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
  if ((ulonglong)FVar8 <= &stack0xffffffffffffff98) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&stack0xffffffffffffff98 < (undefined1 *)((longlong)FVar8 + lVar11 * 0x48)) {
      local_80 = (longlong)(this->Builders).ArrayNum;
      local_78 = 0x48;
      local_90 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_90 = FVar3;
      }
      local_98 = (undefined1 *)&stack0xffffffffffffff98;
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMovieSceneCameraShakeComponentData>_>_> @ 14672eaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672eceb) */
/* WARNING: Removing unreachable block (ram,0x00014672ecf1) */
/* WARNING: Removing unreachable block (ram,0x00014672ecf6) */
/* WARNING: Removing unreachable block (ram,0x00014672ed08) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMovieSceneCameraShakeComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMovieSceneCameraShakeComponentData>_>
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
  local_68 = FMemory::Malloc(0x78,8);
  pppppuVar12 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar12 = (undefined8 *****)local_68;
  }
  local_28 = local_28 | 1;
  *pppppuVar12 = (undefined8 ****)
                 &
                 ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFMovieSceneCameraShakeComponentData___34__MovieScene_UE__6B_
  ;
  *(undefined4 *)(pppppuVar12 + 1) = *(undefined4 *)&param_1->field_0x8;
  *(undefined1 *)((longlong)pppppuVar12 + 0x1c) = 0;
  cVar3 = param_1->field_0x1c;
  *(char *)((longlong)pppppuVar12 + 0x1c) = cVar3;
  if (cVar3 != '\0') {
    uVar6 = *(undefined8 *)&param_1->field_0x14;
    *(undefined8 *)((longlong)pppppuVar12 + 0xc) = *(undefined8 *)&param_1->field_0xc;
    *(undefined8 *)((longlong)pppppuVar12 + 0x14) = uVar6;
  }
  TAdd<FMovieSceneCameraShakeComponentData>::TAdd<FMovieSceneCameraShakeComponentData>
            ((TAdd<FMovieSceneCameraShakeComponentData> *)(pppppuVar12 + 4),
             (TAdd<FMovieSceneCameraShakeComponentData> *)&param_1->field_0x20);
  *(undefined1 *)(pppppuVar12 + 0xe) = param_1->field_0x70;
  *pppppuVar12 = (undefined8 ****)
                 &
                 ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFMovieSceneCameraShakeComponentData___23__MovieScene_UE__6B_
  ;
  if (((local_28 & 1) == 0) &&
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
  pppppuVar12 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar12 = (undefined8 *****)local_68;
  }
  if (((local_28 & 1) == 0) &&
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
  pppppuVar9 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar9 = (undefined8 *****)local_68;
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
  if ((ulonglong)FVar10 <= &local_68) {
    lVar13 = (longlong)(this->Builders).ArrayMax;
    FVar10 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar4 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar10 = FVar4;
    }
    if (&local_68 < (undefined8 *****)((longlong)FVar10 + lVar13 * 0x48)) {
      local_80 = (longlong)(this->Builders).ArrayNum;
      local_78 = 0x48;
      local_90 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar4 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_90 = FVar4;
      }
      local_98 = &local_68;
      local_88 = lVar13;
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
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar2 + 8) = bVar11 | 3;
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>_> @ 14672ed40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672eead) */
/* WARNING: Removing unreachable block (ram,0x00014672eeb4) */
/* WARNING: Removing unreachable block (ram,0x00014672eeba) */
/* WARNING: Removing unreachable block (ram,0x00014672eed4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>_> @ 14672ef00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672f06d) */
/* WARNING: Removing unreachable block (ram,0x00014672f074) */
/* WARNING: Removing unreachable block (ram,0x00014672f07a) */
/* WARNING: Removing unreachable block (ram,0x00014672f094) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_> @ 14672f0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672f22d) */
/* WARNING: Removing unreachable block (ram,0x00014672f234) */
/* WARNING: Removing unreachable block (ram,0x00014672f23a) */
/* WARNING: Removing unreachable block (ram,0x00014672f254) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14672f280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672f3ed) */
/* WARNING: Removing unreachable block (ram,0x00014672f3f4) */
/* WARNING: Removing unreachable block (ram,0x00014672f3fa) */
/* WARNING: Removing unreachable block (ram,0x00014672f414) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14672f440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672f5ad) */
/* WARNING: Removing unreachable block (ram,0x00014672f5b4) */
/* WARNING: Removing unreachable block (ram,0x00014672f5ba) */
/* WARNING: Removing unreachable block (ram,0x00014672f5d4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14672f600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672f76d) */
/* WARNING: Removing unreachable block (ram,0x00014672f774) */
/* WARNING: Removing unreachable block (ram,0x00014672f77a) */
/* WARNING: Removing unreachable block (ram,0x00014672f794) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14672f7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672f92d) */
/* WARNING: Removing unreachable block (ram,0x00014672f934) */
/* WARNING: Removing unreachable block (ram,0x00014672f93a) */
/* WARNING: Removing unreachable block (ram,0x00014672f954) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14672f980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672fbb4) */
/* WARNING: Removing unreachable block (ram,0x00014672fbba) */
/* WARNING: Removing unreachable block (ram,0x00014672fbbf) */
/* WARNING: Removing unreachable block (ram,0x00014672fbd1) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
  local_68 = FMemory::Malloc(0x110,8);
  pppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_68;
  }
  local_28 = local_28 | 1;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634_U634_U634_U634__MovieScene_UE__6B_
  ;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)(pppppuVar10 + 1),
             (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)&param_1->field_0x8);
  *(undefined1 *)(pppppuVar10 + 0x21) = param_1->field_0x108;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523_U523_U523_U523__MovieScene_UE__6B_
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_> @ 14672fc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672fd6d) */
/* WARNING: Removing unreachable block (ram,0x00014672fd74) */
/* WARNING: Removing unreachable block (ram,0x00014672fd7a) */
/* WARNING: Removing unreachable block (ram,0x00014672fd94) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>_> @ 14672fdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014672ff2d) */
/* WARNING: Removing unreachable block (ram,0x00014672ff34) */
/* WARNING: Removing unreachable block (ram,0x00014672ff3a) */
/* WARNING: Removing unreachable block (ram,0x00014672ff54) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_> @ 14672ff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001467301b6) */
/* WARNING: Removing unreachable block (ram,0x0001467301bc) */
/* WARNING: Removing unreachable block (ram,0x0001467301c1) */
/* WARNING: Removing unreachable block (ram,0x0001467301d3) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
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
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined6 uStack_46;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  uStack_4e = *(undefined2 *)&param_1->field_0xa;
  local_48 = *(undefined2 *)&param_1->field_0x10;
  local_38 = CONCAT31((int3)((uint)local_38 >> 8),param_1->field_0x20);
  if (param_1->field_0x20 != '\0') {
    lStack_40 = *(longlong *)&param_1->field_0x18;
  }
  uStack_30 = CONCAT31(uStack_30._1_3_,param_1->field_0x28);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_UFAdd_MovieScene_UE__U123_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
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
    plVar2[1] = CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
    plVar2[2] = CONCAT62(uStack_46,local_48);
    plVar2[3] = lStack_40;
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<FMovieSceneTrackInstanceComponent>_>_> @ 146730210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014673042c) */
/* WARNING: Removing unreachable block (ram,0x000146730432) */
/* WARNING: Removing unreachable block (ram,0x000146730437) */
/* WARNING: Removing unreachable block (ram,0x000146730449) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<FMovieSceneTrackInstanceComponent>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<FMovieSceneTrackInstanceComponent>_>
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
  undefined1 auStack_b8 [32];
  undefined *****local_98;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined *****local_68;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  TAdd<FMovieSceneTrackInstanceComponent> local_58;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_28 = local_28 | 3;
  local_68 = (undefined *****)
             &
             ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__UFAdd_MovieScene_UE__U__TAdd_UFMovieSceneTrackInstanceComponent___34__MovieScene_UE__6B_
  ;
  uStack_60 = *(undefined2 *)&param_1->field_0x8;
  TAdd<FMovieSceneTrackInstanceComponent>::TAdd<FMovieSceneTrackInstanceComponent>
            (&local_58,(TAdd<FMovieSceneTrackInstanceComponent> *)&param_1->field_0x10);
  local_38 = CONCAT31(local_38._1_3_,param_1->field_0x30);
  local_68 = (undefined *****)
             &
             ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFMovieSceneTrackInstanceComponent___23__MovieScene_UE__6B_
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
  ppppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    ppppppuVar10 = (undefined ******)local_68;
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
  ppppppuVar7 = &local_68;
  if ((local_28 & 2) == 0) {
    ppppppuVar7 = (undefined ******)local_68;
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
  if ((ulonglong)FVar8 <= &local_68) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_68 < (undefined ******)((longlong)FVar8 + lVar11 * 0x48)) {
      local_80 = (longlong)(this->Builders).ArrayNum;
      local_78 = 0x48;
      local_90 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_90 = FVar3;
      }
      local_98 = (undefined *****)&local_68;
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
  plVar2 = (longlong *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar9 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  *(byte *)(plVar2 + 8) = bVar9 | 2;
  if ((local_28 & 1) != 0) {
    *(byte *)(plVar2 + 8) = bVar9 | 3;
    *(byte *)(plVar2 + 8) = *(byte *)(plVar2 + 8) ^ (*(byte *)(plVar2 + 8) ^ local_28 & 0xfe) & 2;
    *plVar2 = (longlong)local_68;
    plVar2[1] = CONCAT62(uStack_5e,uStack_60);
    plVar2[2] = local_58._padding_;
    *(TObjectPtr<UMovieSceneSection>_u_0 *)(plVar2 + 3) =
         local_58.Payload.TypedValue.Owner.field0_0x0;
    *(undefined4 *)(plVar2 + 4) =
         local_58.Payload.TypedValue.TrackInstanceClass.Class.field0_0x0._0_4_;
    *(undefined4 *)((longlong)plVar2 + 0x24) =
         local_58.Payload.TypedValue.TrackInstanceClass.Class.field0_0x0._4_4_;
    *(undefined4 *)(plVar2 + 5) = local_58.Payload._16_4_;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = local_58.Payload._20_4_;
    *(undefined4 *)(plVar2 + 6) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_34;
    *(undefined4 *)(plVar2 + 7) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_2c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 146730480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001467305ed) */
/* WARNING: Removing unreachable block (ram,0x0001467305f4) */
/* WARNING: Removing unreachable block (ram,0x0001467305fa) */
/* WARNING: Removing unreachable block (ram,0x000146730614) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 146730640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001467307ad) */
/* WARNING: Removing unreachable block (ram,0x0001467307b4) */
/* WARNING: Removing unreachable block (ram,0x0001467307ba) */
/* WARNING: Removing unreachable block (ram,0x0001467307d4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 146730800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014673096d) */
/* WARNING: Removing unreachable block (ram,0x000146730974) */
/* WARNING: Removing unreachable block (ram,0x00014673097a) */
/* WARNING: Removing unreachable block (ram,0x000146730994) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 1467309c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146730b2d) */
/* WARNING: Removing unreachable block (ram,0x000146730b34) */
/* WARNING: Removing unreachable block (ram,0x000146730b3a) */
/* WARNING: Removing unreachable block (ram,0x000146730b54) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 146730b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146730ced) */
/* WARNING: Removing unreachable block (ram,0x000146730cf4) */
/* WARNING: Removing unreachable block (ram,0x000146730cfa) */
/* WARNING: Removing unreachable block (ram,0x000146730d14) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 146730d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146730ead) */
/* WARNING: Removing unreachable block (ram,0x000146730eb4) */
/* WARNING: Removing unreachable block (ram,0x000146730eba) */
/* WARNING: Removing unreachable block (ram,0x000146730ed4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>_> @ 146730f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014673106d) */
/* WARNING: Removing unreachable block (ram,0x000146731074) */
/* WARNING: Removing unreachable block (ram,0x00014673107a) */
/* WARNING: Removing unreachable block (ram,0x000146731094) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FFadeComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 1467310c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014673122d) */
/* WARNING: Removing unreachable block (ram,0x000146731234) */
/* WARNING: Removing unreachable block (ram,0x00014673123a) */
/* WARNING: Removing unreachable block (ram,0x000146731254) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 146731280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001467313ed) */
/* WARNING: Removing unreachable block (ram,0x0001467313f4) */
/* WARNING: Removing unreachable block (ram,0x0001467313fa) */
/* WARNING: Removing unreachable block (ram,0x000146731414) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 146731440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001467315ad) */
/* WARNING: Removing unreachable block (ram,0x0001467315b4) */
/* WARNING: Removing unreachable block (ram,0x0001467315ba) */
/* WARNING: Removing unreachable block (ram,0x0001467315d4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 146731600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014673176d) */
/* WARNING: Removing unreachable block (ram,0x000146731774) */
/* WARNING: Removing unreachable block (ram,0x00014673177a) */
/* WARNING: Removing unreachable block (ram,0x000146731794) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 1467317c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014673192d) */
/* WARNING: Removing unreachable block (ram,0x000146731934) */
/* WARNING: Removing unreachable block (ram,0x00014673193a) */
/* WARNING: Removing unreachable block (ram,0x000146731954) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 146731980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146731aed) */
/* WARNING: Removing unreachable block (ram,0x000146731af4) */
/* WARNING: Removing unreachable block (ram,0x000146731afa) */
/* WARNING: Removing unreachable block (ram,0x000146731b14) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 146731b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146731cad) */
/* WARNING: Removing unreachable block (ram,0x000146731cb4) */
/* WARNING: Removing unreachable block (ram,0x000146731cba) */
/* WARNING: Removing unreachable block (ram,0x000146731cd4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 146731d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146731e6d) */
/* WARNING: Removing unreachable block (ram,0x000146731e74) */
/* WARNING: Removing unreachable block (ram,0x000146731e7a) */
/* WARNING: Removing unreachable block (ram,0x000146731e94) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 146731ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001467320db) */
/* WARNING: Removing unreachable block (ram,0x0001467320e1) */
/* WARNING: Removing unreachable block (ram,0x0001467320e6) */
/* WARNING: Removing unreachable block (ram,0x0001467320f8) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  *pTVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  *pTVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  *local_68;
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
  local_68 = FMemory::Malloc(200,8);
  pTVar10 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
             *)&stack0xffffffffffffff98;
  if ((local_28 & 2) == 0) {
    pTVar10 = local_68;
  }
  local_28 = local_28 | 1;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
            (pTVar10,(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                      *)param_1);
  pTVar10->_padding_ =
       (longlong)
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
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
  pTVar10 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
             *)&stack0xffffffffffffff98;
  if ((local_28 & 2) == 0) {
    pTVar10 = local_68;
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
  pTVar7 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
            *)&stack0xffffffffffffff98;
  if ((local_28 & 2) == 0) {
    pTVar7 = local_68;
  }
  if ((pTVar10 != pTVar7) &&
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
  if ((ulonglong)FVar8 <= &stack0xffffffffffffff98) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&stack0xffffffffffffff98 < (undefined1 *)((longlong)FVar8 + lVar11 * 0x48)) {
      local_80 = (longlong)(this->Builders).ArrayNum;
      local_78 = 0x48;
      local_90 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_90 = FVar3;
      }
      local_98 = (undefined1 *)&stack0xffffffffffffff98;
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 146732130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014673229d) */
/* WARNING: Removing unreachable block (ram,0x0001467322a4) */
/* WARNING: Removing unreachable block (ram,0x0001467322aa) */
/* WARNING: Removing unreachable block (ram,0x0001467322c4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 1467322f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014673245d) */
/* WARNING: Removing unreachable block (ram,0x000146732464) */
/* WARNING: Removing unreachable block (ram,0x00014673246a) */
/* WARNING: Removing unreachable block (ram,0x000146732484) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 1467324b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014673261d) */
/* WARNING: Removing unreachable block (ram,0x000146732624) */
/* WARNING: Removing unreachable block (ram,0x00014673262a) */
/* WARNING: Removing unreachable block (ram,0x000146732644) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 146732670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014673288b) */
/* WARNING: Removing unreachable block (ram,0x000146732891) */
/* WARNING: Removing unreachable block (ram,0x000146732896) */
/* WARNING: Removing unreachable block (ram,0x0001467328a8) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  *pTVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  *pTVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  *local_68;
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
  local_68 = FMemory::Malloc(200,8);
  pTVar10 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
             *)&stack0xffffffffffffff98;
  if ((local_28 & 2) == 0) {
    pTVar10 = local_68;
  }
  local_28 = local_28 | 1;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
            (pTVar10,(TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                      *)param_1);
  pTVar10->_padding_ =
       (longlong)
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U423_U423_U423_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
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
  pTVar10 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
             *)&stack0xffffffffffffff98;
  if ((local_28 & 2) == 0) {
    pTVar10 = local_68;
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
  pTVar7 = (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
            *)&stack0xffffffffffffff98;
  if ((local_28 & 2) == 0) {
    pTVar7 = local_68;
  }
  if ((pTVar10 != pTVar7) &&
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
  if ((ulonglong)FVar8 <= &stack0xffffffffffffff98) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&stack0xffffffffffffff98 < (undefined1 *)((longlong)FVar8 + lVar11 * 0x48)) {
      local_80 = (longlong)(this->Builders).ArrayNum;
      local_78 = 0x48;
      local_90 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_90 = FVar3;
      }
      local_98 = (undefined1 *)&stack0xffffffffffffff98;
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 1467328e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146732a4d) */
/* WARNING: Removing unreachable block (ram,0x000146732a54) */
/* WARNING: Removing unreachable block (ram,0x000146732a5a) */
/* WARNING: Removing unreachable block (ram,0x000146732a74) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 146732aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146732c0d) */
/* WARNING: Removing unreachable block (ram,0x000146732c14) */
/* WARNING: Removing unreachable block (ram,0x000146732c1a) */
/* WARNING: Removing unreachable block (ram,0x000146732c34) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 146732c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146732dcd) */
/* WARNING: Removing unreachable block (ram,0x000146732dd4) */
/* WARNING: Removing unreachable block (ram,0x000146732dda) */
/* WARNING: Removing unreachable block (ram,0x000146732df4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>_> @ 1468840b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001468842e4) */
/* WARNING: Removing unreachable block (ram,0x0001468842ea) */
/* WARNING: Removing unreachable block (ram,0x0001468842ef) */
/* WARNING: Removing unreachable block (ram,0x000146884301) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
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
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined4 uStack_3e;
  undefined2 uStack_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  uStack_44 = CONCAT31((int3)((uint)uStack_44 >> 8),param_1->field_0x14);
  if (param_1->field_0x14 != '\0') {
    uStack_4c = (undefined4)*(undefined8 *)&param_1->field_0xc;
    uStack_48 = (undefined4)((ulonglong)*(undefined8 *)&param_1->field_0xc >> 0x20);
  }
  uStack_40 = *(undefined2 *)&param_1->field_0x18;
  uStack_3e = *(undefined4 *)&param_1->field_0x1a;
  local_38 = CONCAT31(local_38._1_3_,param_1->field_0x20);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAdd_U__TWeakObjectPtr_VUMaterialParameterCollection__UFWeakObjectPtr_____MovieScene_UE__UFAdd_23_UFAddConditional_23__MovieScene_UE__6B_
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
    plVar2[1] = CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
    plVar2[2] = CONCAT44(uStack_44,uStack_48);
    plVar2[3] = CONCAT26(uStack_3a,CONCAT42(uStack_3e,uStack_40));
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_> @ 146884340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014688456c) */
/* WARNING: Removing unreachable block (ram,0x000146884572) */
/* WARNING: Removing unreachable block (ram,0x000146884577) */
/* WARNING: Removing unreachable block (ram,0x000146884589) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
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
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  uStack_3c = CONCAT31((int3)((uint)uStack_3c >> 8),param_1->field_0x1c);
  if (param_1->field_0x1c != '\0') {
    uStack_4c = (undefined4)*(undefined8 *)&param_1->field_0xc;
    uStack_48 = (undefined4)((ulonglong)*(undefined8 *)&param_1->field_0xc >> 0x20);
    uStack_44 = (undefined4)*(undefined8 *)&param_1->field_0x14;
    uStack_40 = (undefined4)((ulonglong)*(undefined8 *)&param_1->field_0x14 >> 0x20);
  }
  local_38 = *(undefined4 *)&param_1->field_0x20;
  uStack_34 = CONCAT31(uStack_34._1_3_,param_1->field_0x24);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAdd_UFComponentMaterialInfo___MovieScene_UE__UFAddConditional_23__MovieScene_UE__6B_
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
    plVar2[1] = CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
    plVar2[2] = CONCAT44(uStack_44,uStack_48);
    plVar2[3] = CONCAT44(uStack_3c,uStack_40);
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_> @ 1468845c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014688472d) */
/* WARNING: Removing unreachable block (ram,0x000146884734) */
/* WARNING: Removing unreachable block (ram,0x00014688473a) */
/* WARNING: Removing unreachable block (ram,0x000146884754) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 146884780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001468848ed) */
/* WARNING: Removing unreachable block (ram,0x0001468848f4) */
/* WARNING: Removing unreachable block (ram,0x0001468848fa) */
/* WARNING: Removing unreachable block (ram,0x000146884914) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 146884940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146884aad) */
/* WARNING: Removing unreachable block (ram,0x000146884ab4) */
/* WARNING: Removing unreachable block (ram,0x000146884aba) */
/* WARNING: Removing unreachable block (ram,0x000146884ad4) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
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
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
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

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>_> @ 146884b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146884d15) */
/* WARNING: Removing unreachable block (ram,0x000146884d1b) */
/* WARNING: Removing unreachable block (ram,0x000146884d20) */
/* WARNING: Removing unreachable block (ram,0x000146884d32) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAddConditional> *param_1)

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
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined4 *)&param_1->field_0x8;
  uStack_4c = *(undefined2 *)&param_1->field_0xc;
  uStack_4a = param_1->field_0xe;
  local_58 = (undefined *****)
             &___7__TEntityBuilder_UFAdd_MovieScene_UE__UFAddConditional_23__MovieScene_UE__6B_;
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
    plVar2[1] = CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT24(uStack_4c,uStack_50)));
    plVar2[2] = local_48;
    plVar2[3] = lStack_40;
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

