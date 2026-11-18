// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 23

// FPackageTrailerBuilder @ 14212bad0

FPackageTrailerBuilder * __thiscall
UE::FPackageTrailerBuilder::FPackageTrailerBuilder(FPackageTrailerBuilder *this,FString *param_1)

{
  (this->DebugContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugContext).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugContext).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->DebugContext).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  *(undefined8 *)&this->LocalEntries = 0;
  *(undefined8 *)&(this->LocalEntries).field_0x8 = 0;
  *(undefined8 *)&(this->LocalEntries).field_0x20 = 0;
  *(undefined4 *)&(this->LocalEntries).field_0x28 = 0;
  *(undefined4 *)&(this->LocalEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalEntries).field_0x34 = 0;
  *(undefined8 *)&(this->LocalEntries).field_0x40 = 0;
  *(undefined4 *)&(this->LocalEntries).field_0x48 = 0;
  *(undefined8 *)&this->ReferencedEntries = 0;
  *(undefined8 *)&(this->ReferencedEntries).field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedEntries).field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedEntries).field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedEntries).field_0x34 = 0;
  *(undefined8 *)&(this->ReferencedEntries).field_0x40 = 0;
  *(undefined4 *)&(this->ReferencedEntries).field_0x48 = 0;
  *(undefined8 *)&this->VirtualizedEntries = 0;
  *(undefined8 *)&(this->VirtualizedEntries).field_0x8 = 0;
  *(undefined8 *)&(this->VirtualizedEntries).field_0x20 = 0;
  *(undefined4 *)&(this->VirtualizedEntries).field_0x28 = 0;
  *(undefined4 *)&(this->VirtualizedEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->VirtualizedEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VirtualizedEntries).field_0x34 = 0;
  *(undefined8 *)&(this->VirtualizedEntries).field_0x40 = 0;
  *(undefined4 *)&(this->VirtualizedEntries).field_0x48 = 0;
  (this->Callbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Callbacks).ArrayNum = 0;
  (this->Callbacks).ArrayMax = 0;
  return this;
}

// FPackageTrailerBuilder @ 14212bbc0

FPackageTrailerBuilder * __thiscall
UE::FPackageTrailerBuilder::FPackageTrailerBuilder(FPackageTrailerBuilder *this,FName *param_1)

{
  ::FName::ToString(param_1,&this->DebugContext);
  *(undefined8 *)&this->LocalEntries = 0;
  *(undefined8 *)&(this->LocalEntries).field_0x8 = 0;
  *(undefined8 *)&(this->LocalEntries).field_0x20 = 0;
  *(undefined4 *)&(this->LocalEntries).field_0x28 = 0;
  *(undefined4 *)&(this->LocalEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalEntries).field_0x34 = 0;
  *(undefined4 *)&(this->LocalEntries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LocalEntries).field_0x40 = 0;
  *(undefined4 *)&(this->LocalEntries).field_0x48 = 0;
  *(undefined8 *)&this->ReferencedEntries = 0;
  *(undefined8 *)&(this->ReferencedEntries).field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedEntries).field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedEntries).field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedEntries).field_0x34 = 0;
  *(undefined4 *)&(this->ReferencedEntries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ReferencedEntries).field_0x40 = 0;
  *(undefined4 *)&(this->ReferencedEntries).field_0x48 = 0;
  *(undefined8 *)&this->VirtualizedEntries = 0;
  *(undefined8 *)&(this->VirtualizedEntries).field_0x8 = 0;
  *(undefined8 *)&(this->VirtualizedEntries).field_0x20 = 0;
  *(undefined4 *)&(this->VirtualizedEntries).field_0x28 = 0;
  *(undefined4 *)&(this->VirtualizedEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->VirtualizedEntries).field_0x34 = 0;
  *(undefined4 *)&(this->VirtualizedEntries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VirtualizedEntries).field_0x40 = 0;
  *(undefined4 *)&(this->VirtualizedEntries).field_0x48 = 0;
  (this->Callbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Callbacks).ArrayNum = 0;
  (this->Callbacks).ArrayMax = 0;
  return this;
}

// AddPayload @ 142130ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FPackageTrailerBuilder::AddPayload
          (FPackageTrailerBuilder *this,FIoHash *param_1,FCompressedBuffer *param_2,
          EPayloadFilterReason param_3,
          TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)> *param_4)

{
  int *piVar1;
  uchar *puVar2;
  int iVar3;
  FCompressedBuffer *this_00;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStack_b8 [32];
  TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::LocalEntry_&&> local_98;
  FCompressedBuffer *local_88;
  FCompressedBuffer local_80;
  FCompressedBuffer local_68;
  EPayloadFilterReason local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar3 = (this->Callbacks).ArrayNum;
  piVar1 = &(this->Callbacks).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->Callbacks).AllocatorInstance,piVar1);
  }
  (this->Callbacks).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Callbacks).AllocatorInstance.Data + (longlong)iVar3 * 0x30;
  *(longlong *)pFVar6 = *(longlong *)param_4;
  *(longlong *)(pFVar6 + 0x28) = *(longlong *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  lVar5 = *(longlong *)&param_4->field_0x18;
  *(longlong *)(pFVar6 + 0x10) = *(longlong *)&param_4->field_0x10;
  *(longlong *)(pFVar6 + 0x18) = lVar5;
  *(longlong *)(pFVar6 + 0x20) = *(longlong *)&param_4->field_0x20;
  if (*(longlong *)pFVar6 != 0) {
    *(undefined8 *)param_4 = 0;
  }
  this_00 = FCompressedBuffer::FCompressedBuffer(&local_80,param_2);
  puVar2 = param_1->Hash;
  do {
    if ((FIoHash *)puVar2 == param_1 + 1) {
LAB_142130ce7:
      FCompositeBuffer::~FCompositeBuffer(&this_00->CompressedData);
      FCompositeBuffer::~FCompositeBuffer(&param_2->CompressedData);
      return;
    }
    if (*(int *)puVar2 != 0) {
      iVar3 = TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FIoHash>
                        ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
                          *)&this->LocalEntries,*(uint *)param_1->Hash,param_1);
      if (iVar3 != -1) {
        lVar4 = (longlong)iVar3 * 0x40 + *(longlong *)&this->LocalEntries;
        lVar5 = lVar4 + 0x18;
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        if (lVar5 != 0) {
          *(EPayloadFilterReason *)(lVar5 + 0x18) =
               *(EPayloadFilterReason *)(lVar5 + 0x18) | param_3;
          goto LAB_142130ce7;
        }
      }
      FCompressedBuffer::FCompressedBuffer(&local_68,this_00);
      local_88 = &local_68;
      local_98.Value = (LocalEntry *)param_1;
      local_50 = param_3;
      TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::LocalEntry_&&>_>
                ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
                  *)&this->LocalEntries,&local_98,(bool *)&local_98.Value);
      FCompositeBuffer::~FCompositeBuffer(&local_68.CompressedData);
      goto LAB_142130ce7;
    }
    puVar2 = puVar2 + 4;
  } while( true );
}

// AddPayload @ 142130d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FPackageTrailerBuilder::AddPayload
          (FPackageTrailerBuilder *this,FIoHash *param_1,FCompressedBuffer *param_2,
          EPayloadFilterReason param_3)

{
  TMap<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>_>
  *this_00;
  uchar *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::LocalEntry_&&> local_58;
  FCompressedBuffer *local_48;
  FCompressedBuffer local_40;
  EPayloadFilterReason local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  puVar1 = param_1->Hash;
  do {
    if ((FIoHash *)puVar1 == param_1 + 1) {
LAB_142130de9:
      FCompositeBuffer::~FCompositeBuffer(&param_2->CompressedData);
      return;
    }
    if (*(int *)puVar1 != 0) {
      this_00 = &this->LocalEntries;
      iVar2 = TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FIoHash>
                        ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
                          *)this_00,*(uint *)param_1->Hash,param_1);
      if (iVar2 != -1) {
        lVar3 = (longlong)iVar2 * 0x40 + *(longlong *)&this_00->field_0x0;
        lVar4 = lVar3 + 0x18;
        if (lVar3 == 0) {
          lVar4 = 0;
        }
        if (lVar4 != 0) {
          *(EPayloadFilterReason *)(lVar4 + 0x18) =
               *(EPayloadFilterReason *)(lVar4 + 0x18) | param_3;
          goto LAB_142130de9;
        }
      }
      FCompressedBuffer::FCompressedBuffer(&local_40,param_2);
      local_48 = &local_40;
      local_58.Value = (LocalEntry *)param_1;
      local_28 = param_3;
      TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::LocalEntry_&&>_>
                ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
                  *)this_00,&local_58,(bool *)&local_58.Value);
      FCompositeBuffer::~FCompositeBuffer(&local_40.CompressedData);
      goto LAB_142130de9;
    }
    puVar1 = puVar1 + 4;
  } while( true );
}

// AddVirtualizedPayload @ 1421310e0

void __thiscall
UE::FPackageTrailerBuilder::AddVirtualizedPayload
          (FPackageTrailerBuilder *this,FIoHash *param_1,long64 param_2)

{
  TMap<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>_>
  *this_00;
  int iVar1;
  uchar *puVar2;
  VirtualizedEntry local_res10 [3];
  
  puVar2 = param_1->Hash;
  if (param_1 != param_1 + 1) {
    while (*(int *)((FIoHash *)puVar2)->Hash == 0) {
      puVar2 = ((FIoHash *)puVar2)->Hash + 4;
      if ((FIoHash *)puVar2 == param_1 + 1) {
        return;
      }
    }
    this_00 = &this->VirtualizedEntries;
    local_res10[0].RawSize = param_2;
    iVar1 = TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FIoHash>
                      ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
                        *)this_00,*(uint *)param_1->Hash,param_1);
    if ((iVar1 == -1) || (*(longlong *)&this_00->field_0x0 + (longlong)iVar1 * 0x28 == 0)) {
      TMapBase<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>_>
      ::EmplaceByHash<FIoHash_const_&,UE::FPackageTrailerBuilder::VirtualizedEntry>
                ((TMapBase<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>_>
                  *)this_00,*(uint *)param_1->Hash,param_1,local_res10);
    }
  }
  return;
}

// BuildAndAppendTrailer @ 142131d70

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall
UE::FPackageTrailerBuilder::BuildAndAppendTrailer
          (FPackageTrailerBuilder *this,FLinkerSave *param_1,FArchive *param_2)

{
  bool bVar1;
  long64 local_res18 [2];
  
  local_res18[0] = (**(code **)(*(longlong *)param_2 + 0x28))(param_2);
  bVar1 = BuildAndAppendTrailer(this,param_1,param_2,local_res18);
  return bVar1;
}

// BuildAndAppendTrailer @ 142131dc0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall
UE::FPackageTrailerBuilder::BuildAndAppendTrailer
          (FPackageTrailerBuilder *this,FLinkerSave *param_1,FArchive *param_2,long64 *param_3)

{
  TMap<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>_>
  *pTVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  code *pcVar9;
  FLinkerSave *pFVar10;
  FArchive *this_00;
  TMap<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>_>
  *pTVar11;
  TMap<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>_>
  *pTVar12;
  bool bVar13;
  undefined1 uVar14;
  int *piVar15;
  ulong64 uVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  int *piVar27;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  int iVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  uint *puVar34;
  undefined1 local_res8 [8];
  FLinkerSave *local_res10;
  FArchive *local_res18;
  longlong *local_res20;
  undefined1 local_248;
  undefined1 local_247;
  undefined1 local_246;
  undefined1 local_245 [5];
  ulonglong local_240;
  longlong local_238;
  FHeader local_230;
  TMap<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>_>
  *local_208;
  int iStack_200;
  uint uStack_1fc;
  undefined1 *local_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  ulong64 local_1d8;
  ulong64 local_1d0;
  uint local_1c8 [2];
  longlong local_1c0;
  TMap<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>_>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  longlong local_148;
  TMap<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TMap<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TMap<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined4 local_74;
  undefined4 local_54;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  RemoveDuplicateEntries(this);
  uVar30 = (((*(int *)&(this->LocalEntries).field_0x8 -
             *(int *)&(this->ReferencedEntries).field_0x34) -
            *(int *)&(this->VirtualizedEntries).field_0x34) -
           *(int *)&(this->LocalEntries).field_0x34) + *(int *)&(this->ReferencedEntries).field_0x8
           + *(int *)&(this->VirtualizedEntries).field_0x8;
  local_230.Tag = 0xd1c43b2e80a5f697;
  local_238 = -1;
  local_230.PayloadLookupTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.PayloadLookupTable.ArrayNum = 0;
  local_230.PayloadLookupTable.ArrayMax = 0;
  local_230.Version = 2;
  local_230.HeaderLength = uVar30 * 0x31 + 0x1c;
  local_230.PayloadsDataLength = 0;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
  }
  iVar31 = 0;
  if (0 < (int)uVar30) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar30,&local_230.PayloadLookupTable.AllocatorInstance,0,
               &local_230.PayloadLookupTable.ArrayMax);
  }
  pTVar1 = &this->LocalEntries;
  local_240 = 1;
  local_188._padding_._4_4_ = 1;
  local_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->LocalEntries).field_0x10;
  local_188._padding_._0_4_ = 0;
  local_188.UnvisitedBitMask = 0xffffffff;
  local_188.CurrentBitIndex = 0;
  local_188.BaseBitIndex = 0;
  if (*(int *)&(this->LocalEntries).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_188);
  }
  uVar30 = *(uint *)&(this->LocalEntries).field_0x28;
  TStack_1b0._padding_ = CONCAT44(local_188._padding_._4_4_,(undefined4)local_188._padding_);
  TStack_1b0.CurrentBitIndex = local_188.CurrentBitIndex;
  TStack_1b0.UnvisitedBitMask = local_188.UnvisitedBitMask;
  TStack_1b0._28_4_ = local_188._28_4_;
  TStack_1b0.BaseBitIndex = local_188.BaseBitIndex;
  uVar25 = uVar30 & 0xffffffe0;
  TStack_1b0.Array = local_188.Array;
  local_190 = CONCAT44(local_190._4_4_,
                       *(int *)&(this->LocalEntries).field_0x8 -
                       *(int *)&(this->LocalEntries).field_0x34);
  iVar21 = (int)uVar30 >> 5;
  TStack_138.Array = local_188.Array;
  uStack_118 = local_190;
  local_1b8 = pTVar1;
  local_140 = pTVar1;
  TStack_138._padding_ = TStack_1b0._padding_;
  TStack_138._16_8_ = TStack_1b0._16_8_;
  TStack_138._24_8_ = TStack_1b0._24_8_;
  if (((int)uVar30 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  uVar26 = *(uint *)&(this->LocalEntries).field_0x28;
  if (uVar30 != uVar26) {
    puVar33 = *(undefined1 **)&(this->LocalEntries).field_0x20;
    if (puVar33 == (undefined1 *)0x0) {
      puVar33 = &(this->LocalEntries).field_0x10;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar33 + (longlong)iVar21 * 4);
    while (uVar30 == 0) {
      lVar19 = (longlong)iVar21;
      uVar25 = uVar25 + 0x20;
      iVar21 = iVar21 + 1;
      uVar30 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_142131fbd;
      uVar30 = *(uint *)(puVar33 + lVar19 * 4 + 4);
    }
    uVar23 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_168 = (int)lVar19;
    uVar30 = local_168 + -1 + uVar25;
    if ((int)uVar26 < (int)uVar30) {
      uVar30 = uVar26;
    }
  }
LAB_142131fbd:
  while( true ) {
    pTVar1 = local_140;
    if (*(int *)&local_140->field_0x8 - *(int *)&local_140->field_0x34 != (int)uStack_118) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_138.CurrentBitIndex == uVar30) &&
        (TStack_138.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->LocalEntries).field_0x10)) &&
       (pTVar1 == &this->LocalEntries)) break;
    piVar27 = (int *)((longlong)TStack_138.CurrentBitIndex * 0x40 + *(longlong *)pTVar1);
    for (piVar15 = piVar27; piVar15 != piVar27 + 5; piVar15 = piVar15 + 1) {
      if (*piVar15 != 0) goto LAB_142132060;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!It.Key.IsZero()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                        ,0x143,
                        L"PackageTrailer should not contain invalid FIoHash values. Package \'%s\'")
    ;
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
LAB_142132060:
    if (local_230.PayloadLookupTable.ArrayNum == local_230.PayloadLookupTable.ArrayMax) {
      local_230.PayloadLookupTable.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x838,&local_230.PayloadLookupTable.AllocatorInstance,
                      &local_230.PayloadLookupTable.ArrayMax);
    }
    lVar19 = (longlong)local_230.PayloadLookupTable.ArrayNum;
    local_230.PayloadLookupTable.ArrayNum = local_230.PayloadLookupTable.ArrayNum + 1;
    pFVar29 = local_230.PayloadLookupTable.AllocatorInstance.Data + lVar19 * 0x38;
    DefaultConstructItems<UE::Private::FLookupTableEntry,int>(pFVar29,(uint)local_240);
    uVar18 = *(undefined8 *)(piVar27 + 2);
    *(undefined8 *)pFVar29 = *(undefined8 *)piVar27;
    *(undefined8 *)(pFVar29 + 8) = uVar18;
    *(int *)(pFVar29 + 0x10) = piVar27[4];
    *(ulong64 *)(pFVar29 + 0x18) = local_230.PayloadsDataLength;
    uVar16 = FCompressedBuffer::GetCompressedSize((FCompressedBuffer *)(piVar27 + 6));
    *(ulong64 *)(pFVar29 + 0x20) = uVar16;
    uVar16 = FCompressedBuffer::GetRawSize((FCompressedBuffer *)(piVar27 + 6));
    *(ulong64 *)(pFVar29 + 0x28) = uVar16;
    pFVar29[0x34] = (FScriptContainerElement)0x0;
    *(undefined2 *)(pFVar29 + 0x30) = 0;
    *(short *)(pFVar29 + 0x32) = (short)piVar27[0xc];
    uVar16 = FCompressedBuffer::GetCompressedSize((FCompressedBuffer *)(piVar27 + 6));
    local_230.PayloadsDataLength = local_230.PayloadsDataLength + uVar16;
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  local_208 = &this->ReferencedEntries;
  local_1e8 = 0;
  puVar33 = &(this->ReferencedEntries).field_0x10;
  iVar21 = *(int *)&(this->ReferencedEntries).field_0x28;
  uStack_1fc = (uint)local_240;
  iStack_1ec = 0;
  if (iVar21 != 0) {
    puVar34 = *(uint **)&(this->ReferencedEntries).field_0x20;
    if (puVar34 == (uint *)0x0) {
      puVar34 = (uint *)puVar33;
    }
    uVar30 = *puVar34;
    iVar31 = 0;
    while (uVar30 == 0) {
      lVar19 = (longlong)iVar31;
      local_1e8 = local_1e8 + 0x20;
      iVar31 = iVar31 + 1;
      iStack_1ec = iVar21;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar31) goto LAB_14213218d;
      uVar30 = puVar34[lVar19 + 1];
    }
    uStack_1fc = -uVar30 & uVar30;
    uVar23 = (ulonglong)uStack_1fc * 2 + 1;
    lVar19 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_164 = (int)lVar19;
    iStack_1ec = local_164 + -1 + local_1e8;
    if (iVar21 < iStack_1ec) {
      iStack_1ec = iVar21;
    }
  }
LAB_14213218d:
  uVar30 = *(uint *)&(this->ReferencedEntries).field_0x28;
  uStack_1e4 = local_94;
  iStack_1e0 = *(int *)&(this->ReferencedEntries).field_0x8 -
               *(int *)&(this->ReferencedEntries).field_0x34;
  uVar25 = uVar30 & 0xffffffe0;
  TStack_108._padding_ = CONCAT44(uStack_1fc,iVar31);
  uStack_1f0 = 0xffffffff;
  TStack_108.CurrentBitIndex = iStack_1ec;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar30 >> 5;
  TStack_108._28_4_ = local_94;
  TStack_108.BaseBitIndex = local_1e8;
  uStack_e8 = CONCAT44(uStack_1dc,iStack_1e0);
  iStack_200 = iVar31;
  local_1f8 = puVar33;
  local_110 = local_208;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar33;
  if ((((int)uVar30 < 0) || (iVar21 < (int)uVar30)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  uVar23 = local_240;
  uVar26 = *(uint *)&(this->ReferencedEntries).field_0x28;
  if (uVar30 != uVar26) {
    puVar32 = *(undefined1 **)&(this->ReferencedEntries).field_0x20;
    if (puVar32 == (undefined1 *)0x0) {
      puVar32 = puVar33;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar22 * 4);
    while (uVar30 == 0) {
      lVar19 = (longlong)iVar22;
      uVar25 = uVar25 + 0x20;
      iVar22 = iVar22 + 1;
      uVar30 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_14213229d;
      uVar30 = *(uint *)(puVar32 + lVar19 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_160 = (int)lVar19;
    uVar30 = local_160 + -1 + uVar25;
    if ((int)uVar26 < (int)uVar30) {
      uVar30 = uVar26;
    }
  }
LAB_14213229d:
  while( true ) {
    pTVar11 = local_110;
    if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
      local_248 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_248);
    }
    uVar25 = (uint)uVar23;
    if (((TStack_108.CurrentBitIndex == uVar30) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar33)) &&
       (pTVar11 == &this->ReferencedEntries)) break;
    piVar27 = (int *)((longlong)TStack_108.CurrentBitIndex * 0x38 + *(longlong *)pTVar11);
    for (piVar15 = piVar27; piVar15 != piVar27 + 5; piVar15 = piVar15 + 1) {
      if (*piVar15 != 0) goto LAB_14213234c;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!It.Key.IsZero()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                        ,0x153,
                        L"PackageTrailer should not contain invalid FIoHash values. Package \'%s\'")
    ;
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
LAB_14213234c:
    if (local_230.PayloadLookupTable.ArrayNum == local_230.PayloadLookupTable.ArrayMax) {
      local_230.PayloadLookupTable.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x838,&local_230.PayloadLookupTable.AllocatorInstance,
                      &local_230.PayloadLookupTable.ArrayMax);
    }
    lVar19 = (longlong)local_230.PayloadLookupTable.ArrayNum;
    local_230.PayloadLookupTable.ArrayNum = local_230.PayloadLookupTable.ArrayNum + 1;
    pFVar29 = local_230.PayloadLookupTable.AllocatorInstance.Data + lVar19 * 0x38;
    DefaultConstructItems<UE::Private::FLookupTableEntry,int>(pFVar29,uVar25);
    uVar18 = *(undefined8 *)(piVar27 + 2);
    *(undefined8 *)pFVar29 = *(undefined8 *)piVar27;
    *(undefined8 *)(pFVar29 + 8) = uVar18;
    *(int *)(pFVar29 + 0x10) = piVar27[4];
    *(undefined8 *)(pFVar29 + 0x18) = *(undefined8 *)(piVar27 + 6);
    *(undefined8 *)(pFVar29 + 0x20) = *(undefined8 *)(piVar27 + 8);
    *(undefined8 *)(pFVar29 + 0x28) = *(undefined8 *)(piVar27 + 10);
    pFVar29[0x34] = (FScriptContainerElement)0x1;
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  iStack_200 = 0;
  puVar33 = &(this->VirtualizedEntries).field_0x10;
  iVar31 = *(int *)&(this->VirtualizedEntries).field_0x28;
  local_208 = (TMap<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>_>
               *)&this->VirtualizedEntries;
  iStack_1ec = iStack_200;
  local_1e8 = iStack_200;
  if (iVar31 != 0) {
    puVar34 = *(uint **)&(this->VirtualizedEntries).field_0x20;
    if (puVar34 == (uint *)0x0) {
      puVar34 = (uint *)puVar33;
    }
    uVar30 = *puVar34;
    while (uVar30 == 0) {
      lVar19 = (longlong)iStack_200;
      local_1e8 = local_1e8 + 0x20;
      iStack_200 = iStack_200 + 1;
      iStack_1ec = iVar31;
      if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_200) goto LAB_14213245d;
      uVar30 = puVar34[lVar19 + 1];
    }
    uVar25 = -uVar30 & uVar30;
    uVar23 = (ulonglong)uVar25 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_15c = (int)lVar19;
    iStack_1ec = local_1e8 + -1 + local_15c;
    if (iVar31 < iStack_1ec) {
      iStack_1ec = iVar31;
    }
  }
LAB_14213245d:
  uVar30 = *(uint *)&(this->VirtualizedEntries).field_0x28;
  uStack_1e4 = local_74;
  iStack_1e0 = *(int *)&(this->VirtualizedEntries).field_0x8 -
               *(int *)&(this->VirtualizedEntries).field_0x34;
  uVar26 = uVar30 & 0xffffffe0;
  TStack_d8._padding_ = CONCAT44(uVar25,iStack_200);
  uStack_1f0 = 0xffffffff;
  TStack_d8.CurrentBitIndex = iStack_1ec;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar30 >> 5;
  TStack_d8._28_4_ = local_74;
  TStack_d8.BaseBitIndex = local_1e8;
  uStack_b8 = CONCAT44(uStack_1dc,iStack_1e0);
  uStack_1fc = uVar25;
  local_1f8 = puVar33;
  local_e0 = (TMap<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>_>
              *)local_208;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar33;
  if ((((int)uVar30 < 0) || (iVar31 < (int)uVar30)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  uVar23 = local_240;
  uVar25 = *(uint *)&(this->VirtualizedEntries).field_0x28;
  if (uVar30 != uVar25) {
    puVar32 = *(undefined1 **)&(this->VirtualizedEntries).field_0x20;
    if (puVar32 == (undefined1 *)0x0) {
      puVar32 = puVar33;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar21 * 4);
    while (uVar30 == 0) {
      lVar19 = (longlong)iVar21;
      uVar26 = uVar26 + 0x20;
      iVar21 = iVar21 + 1;
      uVar30 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_142132570;
      uVar30 = *(uint *)(puVar32 + lVar19 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_158 = (int)lVar19;
    uVar30 = local_158 + -1 + uVar26;
    if ((int)uVar25 < (int)uVar30) {
      uVar30 = uVar25;
    }
  }
LAB_142132570:
  while( true ) {
    pTVar12 = local_e0;
    if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
      local_247 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_247);
    }
    this_00 = local_res18;
    if (((TStack_d8.CurrentBitIndex == uVar30) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar33)) &&
       (pTVar12 == &this->VirtualizedEntries)) break;
    piVar15 = (int *)(*(longlong *)pTVar12 + (longlong)TStack_d8.CurrentBitIndex * 0x28);
    for (piVar27 = piVar15; piVar27 != piVar15 + 5; piVar27 = piVar27 + 1) {
      if (*piVar27 != 0) goto LAB_14213262c;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!It.Key.IsZero()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                        ,0x15f,
                        L"PackageTrailer should not contain invalid FIoHash values. Package \'%s\'")
    ;
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
LAB_14213262c:
    if (local_230.PayloadLookupTable.ArrayNum == local_230.PayloadLookupTable.ArrayMax) {
      local_230.PayloadLookupTable.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x838,&local_230.PayloadLookupTable.AllocatorInstance,
                      &local_230.PayloadLookupTable.ArrayMax);
    }
    lVar19 = (longlong)local_230.PayloadLookupTable.ArrayNum;
    local_230.PayloadLookupTable.ArrayNum = local_230.PayloadLookupTable.ArrayNum + 1;
    pFVar29 = local_230.PayloadLookupTable.AllocatorInstance.Data + lVar19 * 0x38;
    DefaultConstructItems<UE::Private::FLookupTableEntry,int>(pFVar29,(int)uVar23);
    uVar18 = *(undefined8 *)(piVar15 + 2);
    *(undefined8 *)pFVar29 = *(undefined8 *)piVar15;
    *(undefined8 *)(pFVar29 + 8) = uVar18;
    *(int *)(pFVar29 + 0x10) = piVar15[4];
    *(undefined8 *)(pFVar29 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(pFVar29 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(pFVar29 + 0x28) = *(undefined8 *)(piVar15 + 6);
    pFVar29[0x34] = (FScriptContainerElement)0x2;
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  local_238 = *local_res20;
  lVar19 = (**(code **)(*(longlong *)local_res18 + 0x28))(local_res18);
  local_1c0 = lVar19;
  UE::operator<<(this_00,&local_230);
  uVar23 = (ulonglong)local_230.HeaderLength;
  lVar17 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
  if (uVar23 + lVar19 != lVar17) {
    (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(TrailerPositionInDataArchive + Trailer.Header.HeaderLength) == DataArchive.Tell()"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                        ,0x173,L"Header length was calculated as %d bytes but we wrote %lld bytes!")
    ;
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
  }
  local_148 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
  iVar31 = *(int *)&(this->LocalEntries).field_0x28;
  local_1f8 = &(this->LocalEntries).field_0x10;
  iStack_200 = 0;
  local_1e8 = 0;
  iStack_1ec = 0;
  if (iVar31 != 0) {
    puVar34 = *(uint **)&(this->LocalEntries).field_0x20;
    if (puVar34 == (uint *)0x0) {
      puVar34 = (uint *)local_1f8;
    }
    uVar30 = *puVar34;
    while (uVar30 == 0) {
      lVar19 = (longlong)iStack_200;
      local_1e8 = local_1e8 + 0x20;
      iStack_200 = iStack_200 + 1;
      iStack_1ec = iVar31;
      if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_200) goto LAB_1421327d0;
      uVar30 = puVar34[lVar19 + 1];
    }
    local_240 = (ulonglong)(-uVar30 & uVar30);
    uVar23 = local_240 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_154 = (int)lVar19;
    iStack_1ec = local_1e8 + -1 + local_154;
    if (iVar31 < iStack_1ec) {
      iStack_1ec = iVar31;
    }
  }
LAB_1421327d0:
  uVar30 = *(uint *)&(this->LocalEntries).field_0x28;
  local_208 = (TMap<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>_>
               *)&this->LocalEntries;
  uStack_1fc = (uint)local_240;
  uStack_1e4 = local_54;
  iStack_1e0 = *(int *)&(this->LocalEntries).field_0x8 - *(int *)&(this->LocalEntries).field_0x34;
  TStack_1b0._padding_ = CONCAT44(uStack_1fc,iStack_200);
  uVar26 = uVar30 & 0xffffffe0;
  uVar25 = -1 << ((byte)uVar30 & 0x1f);
  uStack_1f0 = 0xffffffff;
  TStack_1b0.CurrentBitIndex = iStack_1ec;
  TStack_1b0.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar30 >> 5;
  local_240 = CONCAT44(local_240._4_4_,uVar25);
  TStack_1b0._28_4_ = local_54;
  TStack_1b0.BaseBitIndex = local_1e8;
  local_190 = CONCAT44(uStack_1dc,iStack_1e0);
  local_1b8 = (TMap<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>_>
               *)local_208;
  TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1f8;
  if (((int)uVar30 < 0) || (iVar31 < (int)uVar30)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    uVar25 = (uint)local_240;
  }
  uVar4 = *(uint *)&(this->LocalEntries).field_0x28;
  if (uVar30 != uVar4) {
    puVar33 = *(undefined1 **)&(this->LocalEntries).field_0x20;
    if (puVar33 == (undefined1 *)0x0) {
      puVar33 = &(this->LocalEntries).field_0x10;
    }
    uVar25 = uVar25 & *(uint *)(puVar33 + (longlong)iVar21 * 4);
    while (uVar25 == 0) {
      lVar19 = (longlong)iVar21;
      uVar26 = uVar26 + 0x20;
      iVar21 = iVar21 + 1;
      uVar30 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_1421328ef;
      uVar25 = *(uint *)(puVar33 + lVar19 * 4 + 4);
    }
    uVar23 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_150 = (int)lVar19;
    uVar30 = (uVar26 - 1) + local_150;
    if ((int)uVar4 < (int)uVar30) {
      uVar30 = uVar4;
    }
  }
LAB_1421328ef:
  while( true ) {
    pTVar1 = local_1b8;
    if (*(int *)&local_1b8->field_0x8 - *(int *)&local_1b8->field_0x34 != (int)local_190) {
      local_246 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_246);
    }
    if (((TStack_1b0.CurrentBitIndex == uVar30) &&
        (TStack_1b0.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->LocalEntries).field_0x10)) &&
       (pTVar1 == &this->LocalEntries)) break;
    ::operator<<(this_00,(FCompressedBuffer *)
                         (*(longlong *)pTVar1 + 0x18 + (longlong)TStack_1b0.CurrentBitIndex * 0x40))
    ;
    TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
  }
  lVar24 = local_230.PayloadsDataLength + local_148;
  lVar17 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
  lVar19 = local_1c0;
  if (lVar24 != lVar17) {
    (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(PayloadPosInDataArchive + Trailer.Header.PayloadsDataLength) == DataArchive.Tell()"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                        ,0x17f,
                        L"Total payload length was calculated as %lld bytes but we wrote %lld bytes!"
                       );
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
  }
  local_1d8 = 0x29bfca045138de76;
  local_1c8[0] = 0x9e2a83c1;
  local_1d0 = (ulonglong)local_230.HeaderLength + local_230.PayloadsDataLength + 0x14;
  plVar8 = *(longlong **)&this_00->field_0x8;
  if ((ulong64 *)plVar8[1] < (ulong64 *)*plVar8 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_1d8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,&local_1d8);
    }
  }
  else {
    local_1d8 = *(ulong64 *)*plVar8;
    *plVar8 = *plVar8 + 8;
  }
  plVar8 = *(longlong **)&this_00->field_0x8;
  if ((ulong64 *)plVar8[1] < (ulong64 *)*plVar8 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_1d0,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,&local_1d0);
    }
  }
  else {
    local_1d0 = *(ulong64 *)*plVar8;
    *plVar8 = *plVar8 + 8;
  }
  plVar8 = *(longlong **)&this_00->field_0x8;
  if ((uint *)plVar8[1] < (uint *)*plVar8 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_1c8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_1c8);
    }
  }
  else {
    local_1c8[0] = *(uint *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  lVar24 = local_1d0 + lVar19;
  lVar17 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
  if (lVar24 != lVar17) {
    (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(TrailerPositionInDataArchive + Footer.TrailerLength) == DataArchive.Tell()"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                        ,0x187,
                        L"Trailer length was calculated as %lld bytes but we wrote %lld bytes!");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
  }
  pFVar10 = local_res10;
  if (local_res10 != (FLinkerSave *)0x0) {
    iVar31 = (this->Callbacks).ArrayNum;
    pFVar29 = (this->Callbacks).AllocatorInstance.Data;
    pFVar28 = pFVar29 + (longlong)iVar31 * 0x30;
    while( true ) {
      if ((this->Callbacks).ArrayNum != iVar31) {
        local_245[0] = 0;
        `TCheckedPointerIterator<TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_245);
      }
      lVar19 = local_1c0;
      if (pFVar29 == pFVar28) break;
      Core::Private::Function::CheckCallable(*(void **)pFVar29);
      pcVar9 = *(code **)pFVar29;
      pFVar20 = pFVar29 + 0x10;
      if (*(FScriptContainerElement **)(pFVar29 + 0x28) != (FScriptContainerElement *)0x0) {
        pFVar20 = *(FScriptContainerElement **)(pFVar29 + 0x28);
      }
      uVar18 = (**(code **)(*(longlong *)pFVar20 + 8))();
      (*pcVar9)(uVar18,pFVar10,&local_238);
      pFVar29 = pFVar29 + 0x30;
    }
  }
  RemoveDuplicateEntries(this);
  iVar31 = *(int *)&(this->LocalEntries).field_0x8;
  iVar21 = *(int *)&(this->ReferencedEntries).field_0x34;
  iVar22 = *(int *)&(this->VirtualizedEntries).field_0x34;
  iVar5 = *(int *)&(this->LocalEntries).field_0x34;
  iVar6 = *(int *)&(this->ReferencedEntries).field_0x8;
  iVar7 = *(int *)&(this->VirtualizedEntries).field_0x8;
  uVar16 = CalculatePotentialPayloadSize(this);
  lVar17 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
  if ((((ulonglong)(((((iVar31 - iVar21) - iVar22) - iVar5) + iVar6 + iVar7) * 0x31 + 0x1c) +
        uVar16 + 0x14 != lVar17 - lVar19) && ((this_00->field_0x29 & 2) == 0)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("CalculateTrailerLength() == (DataArchive.Tell() - TrailerPositionInDataArchive) || DataArchive.IsError()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                          ,0x194,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  lVar17 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
  *local_res20 = *local_res20 + (lVar17 - lVar19);
  bVar3 = this_00->field_0x29;
  if (local_230.PayloadLookupTable.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.PayloadLookupTable.AllocatorInstance.Data);
  }
  return (bool)(~(bVar3 >> 1) & 1);
}

// CalculatePotentialHeaderSize @ 142132d60

uint __thiscall
UE::FPackageTrailerBuilder::CalculatePotentialHeaderSize(FPackageTrailerBuilder *this)

{
  return ((((*(int *)&(this->VirtualizedEntries).field_0x8 -
            *(int *)&(this->VirtualizedEntries).field_0x34) -
           *(int *)&(this->ReferencedEntries).field_0x34) - *(int *)&(this->LocalEntries).field_0x34
          ) + *(int *)&(this->ReferencedEntries).field_0x8 + *(int *)&(this->LocalEntries).field_0x8
         ) * 0x31 + 0x1c;
}

// CalculatePotentialPayloadSize @ 142132d90

ulong64 __thiscall
UE::FPackageTrailerBuilder::CalculatePotentialPayloadSize(FPackageTrailerBuilder *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong64 uVar9;
  longlong lVar10;
  ulong64 uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ulong64 uVar16;
  
  uVar3 = *(uint *)&(this->LocalEntries).field_0x28;
  puVar1 = &(this->LocalEntries).field_0x10;
  uVar9 = 0;
  uVar14 = 0;
  uVar6 = 1;
  uVar15 = 0;
  uVar7 = uVar14;
  if (uVar3 != 0) {
    puVar17 = *(uint **)&(this->LocalEntries).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar7 = *puVar17;
    uVar11 = uVar9;
    uVar16 = uVar9;
    uVar15 = 0;
    uVar14 = 0;
    while (uVar7 == 0) {
      iVar13 = (int)uVar11;
      uVar15 = (int)uVar16 + 0x20;
      uVar16 = (ulong64)uVar15;
      uVar14 = iVar13 + 1;
      uVar11 = (ulong64)uVar14;
      uVar7 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < (int)uVar14)
      goto LAB_142132e2d;
      uVar7 = puVar17[(longlong)iVar13 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    uVar7 = local_res10 + -1 + uVar15;
    if ((int)uVar3 < (int)uVar7) {
      uVar7 = uVar3;
    }
  }
LAB_142132e2d:
  uVar8 = *(uint *)&(this->LocalEntries).field_0x28;
  uVar18 = uVar8 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,uVar14);
  TStack_60.CurrentBitIndex = uVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar8 >> 5;
  TStack_60._28_4_ = uVar7;
  TStack_60.BaseBitIndex = uVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->LocalEntries).field_0x8 -
                       *(int *)&(this->LocalEntries).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar8 < 0) || ((int)uVar3 < (int)uVar8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  uVar3 = *(uint *)&(this->LocalEntries).field_0x28;
  if (uVar8 != uVar3) {
    puVar12 = *(undefined1 **)&(this->LocalEntries).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar8 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar13) goto LAB_142132f30;
      uVar15 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar8 = (int)lVar10 + -1 + uVar18;
    if ((int)uVar3 < (int)uVar8) {
      uVar8 = uVar3;
    }
  }
LAB_142132f30:
  while( true ) {
    if (*(int *)&(this->LocalEntries).field_0x8 - *(int *)&(this->LocalEntries).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar11 = FCompressedBuffer::GetCompressedSize
                       ((FCompressedBuffer *)
                        ((longlong)TStack_60.CurrentBitIndex * 0x40 +
                        *(longlong *)&this->LocalEntries + 0x18));
    uVar9 = uVar9 + uVar11;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar9;
}

// CalculateTrailerLength @ 142132fb0

ulong64 __thiscall UE::FPackageTrailerBuilder::CalculateTrailerLength(FPackageTrailerBuilder *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  
  RemoveDuplicateEntries(this);
  iVar1 = *(int *)&(this->VirtualizedEntries).field_0x8;
  iVar2 = *(int *)&(this->VirtualizedEntries).field_0x34;
  iVar3 = *(int *)&(this->ReferencedEntries).field_0x34;
  iVar4 = *(int *)&(this->LocalEntries).field_0x34;
  iVar5 = *(int *)&(this->ReferencedEntries).field_0x8;
  iVar6 = *(int *)&(this->LocalEntries).field_0x8;
  uVar7 = CalculatePotentialPayloadSize(this);
  return uVar7 + 0x14 +
         (ulonglong)(((((iVar1 - iVar2) - iVar3) - iVar4) + iVar5 + iVar6) * 0x31 + 0x1c);
}

// CreateFromTrailer @ 1421375a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPackageTrailerBuilder * __cdecl
UE::FPackageTrailerBuilder::CreateFromTrailer
          (FPackageTrailerBuilder *__return_storage_ptr__,FPackageTrailer *param_1,FArchive *param_2
          ,FString *param_3)

{
  FScriptContainerElement FVar1;
  undefined2 uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  FPackageTrailerBuilder *pFVar6;
  ulonglong uVar7;
  ForElementType<FSharedBuffer> FVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<FSharedBuffer> FVar13;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [4];
  uint local_124;
  undefined1 local_120 [8];
  TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::LocalEntry_&&> local_118;
  FScriptContainerElement *local_108;
  FArchive *local_100;
  FString *local_f8;
  FScriptContainerElement *local_f0;
  LocalEntry **local_e8;
  FScriptContainerElement *local_e0;
  undefined8 *local_d8;
  FScriptContainerElement *local_d0;
  FCompositeBuffer *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  FCompositeBuffer local_a8;
  FCompositeBuffer local_90;
  undefined2 local_78;
  FCompressedBuffer local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_100 = param_2;
  local_f8 = param_3;
  FPackageTrailerBuilder(__return_storage_ptr__,param_3);
  local_124 = (param_1->Header).PayloadLookupTable.ArrayNum;
  uVar7 = (ulonglong)(int)local_124;
  pFVar10 = (param_1->Header).PayloadLookupTable.AllocatorInstance.Data;
  pFVar11 = pFVar10 + 0x14;
  pFVar12 = pFVar10 + uVar7 * 0x38;
  local_108 = pFVar12;
LAB_142137601:
  do {
    if ((param_1->Header).PayloadLookupTable.ArrayNum != (int)uVar7) {
      local_128[0] = 0;
      `TCheckedPointerIterator<UE::Private::FLookupTableEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_128);
    }
    pFVar9 = pFVar10;
    if (pFVar10 == pFVar12) {
      pFVar11 = (local_f8->Data).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      return __return_storage_ptr__;
    }
    for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 4) {
      if (*(int *)pFVar9 != 0) goto LAB_142137675;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Entry.Identifier.IsZero()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                       ,0xa0,
                       L"PackageTrailer for package should not contain invalid FIoHash entry. Package \'%s\'"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPackageTrailerBuilder *)(*pcVar3)();
      return pFVar6;
    }
LAB_142137675:
    FVar1 = pFVar11[0x20];
    if (FVar1 != (FScriptContainerElement)0x0) {
      if (FVar1 == (FScriptContainerElement)0x1) {
        local_c0 = *(undefined8 *)(pFVar11 + 4);
        local_b8 = *(undefined8 *)(pFVar11 + 0xc);
        local_b0 = *(undefined8 *)(pFVar11 + 0x14);
        local_d8 = &local_c0;
        local_e0 = pFVar10;
        TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::ReferencedEntry_&&>_>
                  ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
                    *)&__return_storage_ptr__->ReferencedEntries,
                   (TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::ReferencedEntry_&&>
                    *)(local_120 + 4),(bool *)&local_e0);
        uVar7 = (ulonglong)local_124;
        pFVar10 = pFVar10 + 0x38;
        pFVar11 = pFVar11 + 0x38;
      }
      else {
        if (FVar1 != (FScriptContainerElement)0x2) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                             ,0xb9,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FPackageTrailerBuilder *)(*pcVar3)();
            return pFVar6;
          }
          goto LAB_1421378bf;
        }
        local_118.Value = *(LocalEntry **)(pFVar11 + 0x14);
        local_e8 = &local_118.Value;
        local_f0 = pFVar10;
        TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::VirtualizedEntry_&&>_>
                  ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
                    *)&__return_storage_ptr__->VirtualizedEntries,
                   (TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::VirtualizedEntry_&&>
                    *)local_120,(bool *)&local_f0);
        uVar7 = (ulonglong)local_124;
        pFVar10 = pFVar10 + 0x38;
        pFVar11 = pFVar11 + 0x38;
      }
      goto LAB_142137601;
    }
    pFVar12 = (param_1->Header).PayloadLookupTable.AllocatorInstance.Data;
    pFVar9 = pFVar12 + (longlong)(param_1->Header).PayloadLookupTable.ArrayNum * 0x38;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 0x38) {
      if (((*(longlong *)pFVar12 == *(longlong *)pFVar10) &&
          (*(longlong *)(pFVar12 + 8) == *(longlong *)(pFVar10 + 8))) &&
         (*(int *)(pFVar12 + 0x10) == *(int *)(pFVar10 + 0x10))) {
        if ((pFVar12 != (FScriptContainerElement *)0x0) &&
           (pFVar12[0x34] == (FScriptContainerElement)0x0)) {
          (**(code **)(*(longlong *)param_2 + 0x1b8))
                    (param_2,(ulonglong)(param_1->Header).HeaderLength +
                             *(longlong *)(pFVar12 + 0x18) + param_1->TrailerPositionInFile);
          local_70.CompressedData.Segments.AllocatorInstance.SecondaryData =
               (ForElementType<FSharedBuffer>)0x0;
          local_70.CompressedData.Segments.ArrayNum = 0;
          local_70.CompressedData.Segments.ArrayMax = 1;
          ::operator<<(param_2,&local_70);
          FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>(&local_a8,&local_70.CompressedData)
          ;
          FCompositeBuffer::~FCompositeBuffer(&local_70.CompressedData);
          goto LAB_1421377ac;
        }
        break;
      }
    }
    local_a8.Segments.AllocatorInstance.InlineData[0] = '\0';
    local_a8.Segments.AllocatorInstance.InlineData[1] = '\0';
    local_a8.Segments.AllocatorInstance.InlineData[2] = '\0';
    local_a8.Segments.AllocatorInstance.InlineData[3] = '\0';
    local_a8.Segments.AllocatorInstance.InlineData[4] = '\0';
    local_a8.Segments.AllocatorInstance.InlineData[5] = '\0';
    local_a8.Segments.AllocatorInstance.InlineData[6] = '\0';
    local_a8.Segments.AllocatorInstance.InlineData[7] = '\0';
    local_a8.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
    local_a8.Segments.ArrayNum = 0;
    local_a8.Segments.ArrayMax = 1;
LAB_1421377ac:
    iVar4 = local_a8.Segments.ArrayNum;
    uVar2 = *(undefined2 *)(pFVar11 + 0x1e);
    local_90.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
    FVar13 = (ForElementType<FSharedBuffer>)&local_a8;
    if (local_a8.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
      FVar13 = local_a8.Segments.AllocatorInstance.SecondaryData;
    }
    local_90.Segments.ArrayNum = local_a8.Segments.ArrayNum;
    if (local_a8.Segments.ArrayNum == 0) {
      local_90.Segments.ArrayMax = 1;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                (8,8,local_a8.Segments.ArrayNum,0,(ForElementType<FSharedBuffer> *)&local_90,
                 local_a8.Segments.ArrayNum,&local_90.Segments.ArrayMax);
      FVar8 = (ForElementType<FSharedBuffer>)&local_90;
      if (local_90.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
        FVar8 = local_90.Segments.AllocatorInstance.SecondaryData;
      }
      ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar8,(FSharedBuffer *)FVar13,iVar4);
    }
    local_c8 = &local_90;
    local_d0 = pFVar10;
    local_78 = uVar2;
    TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::LocalEntry_&&>_>
              ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
                *)&__return_storage_ptr__->LocalEntries,&local_118,(bool *)&local_d0);
    FCompositeBuffer::~FCompositeBuffer(&local_90);
    FCompositeBuffer::~FCompositeBuffer(&local_a8);
    pFVar12 = local_108;
    param_2 = local_100;
LAB_1421378bf:
    uVar7 = (ulonglong)local_124;
    pFVar10 = pFVar10 + 0x38;
    pFVar11 = pFVar11 + 0x38;
  } while( true );
}

// CreateReferenceToTrailer @ 142137940

TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_> __cdecl
UE::FPackageTrailerBuilder::CreateReferenceToTrailer(FPackageTrailer *param_1,FString *param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FPackageTrailerBuilder *this;
  FPackageTrailerBuilder *pFVar6;
  TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_> TVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FString *in_R8;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::VirtualizedEntry_&&> local_res10;
  undefined8 local_88;
  FScriptContainerElement *local_80;
  undefined8 *local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement **local_68;
  FScriptContainerElement *local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_res10.Value = (VirtualizedEntry *)in_R8;
  this = ::operator_new(0x110);
  pFVar6 = (FPackageTrailerBuilder *)0x0;
  if (this != (FPackageTrailerBuilder *)0x0) {
    pFVar6 = FPackageTrailerBuilder(this,in_R8);
  }
  param_1->TrailerPositionInFile = (long64)pFVar6;
  pFVar10 = param_2[2].Data.AllocatorInstance.Data;
  iVar2 = param_2[2].Data.ArrayNum;
  pFVar9 = pFVar10 + 0x14;
  pFVar12 = pFVar10 + (longlong)iVar2 * 0x38;
LAB_1421379b0:
  if (param_2[2].Data.ArrayNum != iVar2) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<UE::Private::FLookupTableEntry_const_,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_res8);
  }
  pFVar11 = pFVar10;
  if (pFVar10 == pFVar12) {
    pFVar9 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(local_res10.Value)->RawSize)->
             AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    return (TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_>)
           (FPackageTrailerBuilder *)param_1;
  }
  for (; pFVar11 != pFVar9; pFVar11 = pFVar11 + 4) {
    if (*(int *)pFVar11 != 0) goto LAB_142137a2e;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Entry.Identifier.IsZero()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                     ,199,
                     L"PackageTrailer for package should not contain invalid FIoHash entry. Package \'%s\'"
                    );
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    TVar7.Ptr = (FPackageTrailerBuilder *)(*pcVar4)();
    return (TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_>)
           TVar7.Ptr;
  }
LAB_142137a2e:
  FVar1 = pFVar9[0x20];
  pFVar11 = pFVar10;
  if (FVar1 == (FScriptContainerElement)0x0) {
    for (; pFVar11 != pFVar9; pFVar11 = pFVar11 + 4) {
      if (*(int *)pFVar11 != 0) {
        pFVar11 = param_2[2].Data.AllocatorInstance.Data;
        pFVar8 = pFVar11 + (longlong)param_2[2].Data.ArrayNum * 0x38;
        goto joined_r0x000142137b5c;
      }
    }
    goto LAB_142137b2e;
  }
  if (FVar1 != (FScriptContainerElement)0x1) {
    if (FVar1 != (FScriptContainerElement)0x2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                         ,0xe2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7.Ptr = (FPackageTrailerBuilder *)(*pcVar4)();
        return (TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_>)
               TVar7.Ptr;
      }
      goto LAB_142137cde;
    }
    local_88 = *(undefined8 *)(pFVar9 + 0x14);
    local_78 = &local_88;
    local_80 = pFVar10;
    TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::VirtualizedEntry_&&>_>
              ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
                *)(param_1->TrailerPositionInFile + 0xb0),&local_res10,(bool *)&local_80);
    pFVar10 = pFVar10 + 0x38;
    pFVar9 = pFVar9 + 0x38;
    goto LAB_1421379b0;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                     ,0xd6,
                     L"Attempting to create a reference to a trailer that already contains reference payload entries. Package \'%s\'"
                    );
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    TVar7.Ptr = (FPackageTrailerBuilder *)(*pcVar4)();
    return (TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_>)
           TVar7.Ptr;
  }
  goto LAB_142137cde;
joined_r0x000142137b5c:
  if (pFVar11 == pFVar8) goto LAB_142137b83;
  if (((*(longlong *)pFVar11 == *(longlong *)pFVar10) &&
      (*(longlong *)(pFVar11 + 8) == *(longlong *)(pFVar10 + 8))) &&
     (*(int *)(pFVar11 + 0x10) == *(int *)(pFVar10 + 0x10))) goto LAB_142137b85;
  pFVar11 = pFVar11 + 0x38;
  goto joined_r0x000142137b5c;
LAB_142137b83:
  pFVar11 = (FScriptContainerElement *)0x0;
LAB_142137b85:
  if (((param_2->Data).AllocatorInstance.Data == (FScriptContainerElement *)0xffffffffffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TrailerPositionInFile != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                         ,0x2ed,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    TVar7.Ptr = (FPackageTrailerBuilder *)(*pcVar4)();
    return (TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_>)
           TVar7.Ptr;
  }
  lVar3._0_4_ = param_2[1].Data.ArrayNum;
  lVar3._4_4_ = param_2[1].Data.ArrayMax;
  if ((lVar3 == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header.PayloadsDataLength != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                         ,0x2ee,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    TVar7.Ptr = (FPackageTrailerBuilder *)(*pcVar4)();
    return (TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_>)
           TVar7.Ptr;
  }
  if ((pFVar11 == (FScriptContainerElement *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                         ,0x2ef,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    TVar7.Ptr = (FPackageTrailerBuilder *)(*pcVar4)();
    return (TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_>)
           TVar7.Ptr;
  }
  FVar1 = pFVar11[0x34];
  if (FVar1 == (FScriptContainerElement)0x0) {
    pFVar11 = (param_2->Data).AllocatorInstance.Data +
              (ulonglong)*(uint *)((longlong)&param_2[1].Data.AllocatorInstance.Data + 4) +
              *(longlong *)(pFVar11 + 0x18);
LAB_142137c5f:
    if (pFVar11 == (FScriptContainerElement *)0xffffffffffffffff) goto LAB_142137b35;
  }
  else {
    if (FVar1 == (FScriptContainerElement)0x1) {
      pFVar11 = *(FScriptContainerElement **)(pFVar11 + 0x18);
      goto LAB_142137c5f;
    }
    if ((FVar1 != (FScriptContainerElement)0x2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                           ,0x2fd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar7.Ptr = (FPackageTrailerBuilder *)(*pcVar4)();
      return (TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_>)
             TVar7.Ptr;
    }
LAB_142137b2e:
    pFVar11 = (FScriptContainerElement *)0xffffffffffffffff;
LAB_142137b35:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AbsoluteOffset != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                       ,0xce,
                       L"PackageTrailer for package should not contain invalid payload offsets. Package \'%s\'"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      TVar7.Ptr = (FPackageTrailerBuilder *)(*pcVar4)();
      return (TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_>)
             TVar7.Ptr;
    }
  }
  local_58 = *(undefined8 *)(pFVar9 + 0xc);
  local_50 = *(undefined8 *)(pFVar9 + 0x14);
  local_68 = &local_60;
  local_70 = pFVar10;
  local_60 = pFVar11;
  TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::ReferencedEntry_&&>_>
            ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
              *)(param_1->TrailerPositionInFile + 0x60),
             (TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::ReferencedEntry_&&> *)
             &stack0x00000020,(bool *)&local_70);
LAB_142137cde:
  pFVar10 = pFVar10 + 0x38;
  pFVar9 = pFVar9 + 0x38;
  goto LAB_1421379b0;
}

// GetNumLocalPayloads @ 14213db70

int __thiscall UE::FPackageTrailerBuilder::GetNumLocalPayloads(FPackageTrailerBuilder *this)

{
  return *(int *)&(this->LocalEntries).field_0x8 - *(int *)&(this->LocalEntries).field_0x34;
}

// GetNumPayloads @ 14213dda0

int __thiscall UE::FPackageTrailerBuilder::GetNumPayloads(FPackageTrailerBuilder *this)

{
  return (((*(int *)&(this->VirtualizedEntries).field_0x8 -
           *(int *)&(this->VirtualizedEntries).field_0x34) -
          *(int *)&(this->ReferencedEntries).field_0x34) - *(int *)&(this->LocalEntries).field_0x34)
         + *(int *)&(this->ReferencedEntries).field_0x8 + *(int *)&(this->LocalEntries).field_0x8;
}

// GetNumReferencedPayloads @ 14213ddd0

int __thiscall UE::FPackageTrailerBuilder::GetNumReferencedPayloads(FPackageTrailerBuilder *this)

{
  return *(int *)&(this->ReferencedEntries).field_0x8 -
         *(int *)&(this->ReferencedEntries).field_0x34;
}

// GetNumVirtualizedPayloads @ 14213dde0

int __thiscall UE::FPackageTrailerBuilder::GetNumVirtualizedPayloads(FPackageTrailerBuilder *this)

{
  return *(int *)&(this->VirtualizedEntries).field_0x8 -
         *(int *)&(this->VirtualizedEntries).field_0x34;
}

// IsEmpty @ 142143290

bool __thiscall UE::FPackageTrailerBuilder::IsEmpty(FPackageTrailerBuilder *this)

{
  if (((*(int *)&(this->LocalEntries).field_0x8 == *(int *)&(this->LocalEntries).field_0x34) &&
      (*(int *)&(this->ReferencedEntries).field_0x8 == *(int *)&(this->ReferencedEntries).field_0x34
      )) && (*(int *)&(this->VirtualizedEntries).field_0x8 ==
             *(int *)&(this->VirtualizedEntries).field_0x34)) {
    return true;
  }
  return false;
}

// IsLocalPayloadEntry @ 142143490

bool __thiscall
UE::FPackageTrailerBuilder::IsLocalPayloadEntry(FPackageTrailerBuilder *this,FIoHash *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FIoHash>
                    ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
                      *)&this->LocalEntries,*(uint *)param_1->Hash,param_1);
  lVar3 = 0;
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x40 + *(longlong *)&(this->LocalEntries).field_0x0;
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2 != 0;
}

// IsReferencedPayloadEntry @ 142143640

bool __thiscall
UE::FPackageTrailerBuilder::IsReferencedPayloadEntry(FPackageTrailerBuilder *this,FIoHash *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FIoHash>
                    ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
                      *)&this->ReferencedEntries,*(uint *)param_1->Hash,param_1);
  lVar3 = 0;
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->ReferencedEntries).field_0x0;
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2 != 0;
}

// IsVirtualizedPayloadEntry @ 142143b60

bool __thiscall
UE::FPackageTrailerBuilder::IsVirtualizedPayloadEntry(FPackageTrailerBuilder *this,FIoHash *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FIoHash>
                    ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
                      *)&this->VirtualizedEntries,*(uint *)param_1->Hash,param_1);
  lVar3 = 0;
  if (iVar1 != -1) {
    lVar3 = *(longlong *)&(this->VirtualizedEntries).field_0x0 + (longlong)iVar1 * 0x28;
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2 != 0;
}

// RemoveDuplicateEntries @ 14214a660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::FPackageTrailerBuilder::RemoveDuplicateEntries(FPackageTrailerBuilder *this)

{
  TMap<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>_>
  *pTVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  FIoHash *pFVar6;
  int iVar7;
  FString local_98;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  pTVar1 = &this->LocalEntries;
  TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
              *)pTVar1);
  iVar7 = 1;
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar4 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      pFVar6 = (FIoHash *)((longlong)(int)uVar4 * 0x40 + *local_58);
      iVar3 = TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FIoHash>
                        ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
                          *)&this->VirtualizedEntries,*(uint *)pFVar6->Hash,pFVar6);
      if (iVar3 != -1) {
        if (5 < (byte)LogSerialization._0_1_) {
          ::LexToString(&local_98,pFVar6);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_30,(int)uVar4);
        local_20 = '\x01';
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar4 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar5 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_28->HashSize < iVar3)) || (iVar3 < local_28->HashSize)) {
        local_28->HashSize = iVar3;
        TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
              *)&this->ReferencedEntries);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar4 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
              *)&this->ReferencedEntries;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      pFVar6 = (FIoHash *)((longlong)(int)uVar4 * 0x38 + *local_58);
      iVar3 = TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FIoHash>
                        ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
                          *)&this->VirtualizedEntries,*(uint *)pFVar6->Hash,pFVar6);
      if (iVar3 != -1) {
        if (5 < (byte)LogSerialization._0_1_) {
          ::LexToString(&local_98,pFVar6);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
                         *)pTStack_30,(int)uVar4);
        local_20 = '\x01';
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar4 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar5 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&local_28->Elements)->field_0x8 -
              *(int *)&((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&local_28->Elements)->field_0x34;
      if (3 < uVar5) {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_28->HashSize < iVar7)) || (iVar7 < local_28->HashSize)) {
        local_28->HashSize = iVar7;
        TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry,0>,FDefaultSetAllocator>
                  *)local_28);
      }
    }
  }
  return;
}

// UpdatePayloadAsLocal @ 142154560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::FPackageTrailerBuilder::UpdatePayloadAsLocal
          (FPackageTrailerBuilder *this,FIoHash *param_1,FCompressedBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uchar *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::LocalEntry_&&> local_58;
  FCompressedBuffer *local_48;
  FCompressedBuffer local_40;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((*(int *)&(this->ReferencedEntries).field_0x8 != *(int *)&(this->ReferencedEntries).field_0x34
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReferencedEntries.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                               ,0x11b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  puVar5 = param_1->Hash;
  do {
    if ((FIoHash *)puVar5 == param_1 + 1) {
LAB_1421545ce:
      FCompositeBuffer::~FCompositeBuffer(&param_2->CompressedData);
      return false;
    }
    if (*(int *)puVar5 != 0) {
      if ((*(int *)&(this->VirtualizedEntries).field_0x8 !=
           *(int *)&(this->VirtualizedEntries).field_0x34) &&
         (iVar4 = TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
                  ::RemoveImpl<FIoHash>
                            ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry,0>,FDefaultSetAllocator>
                              *)&this->VirtualizedEntries,*(uint *)param_1->Hash,param_1), 0 < iVar4
         )) {
        iVar4 = TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FIoHash>
                          ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
                            *)&this->LocalEntries,*(uint *)param_1->Hash,param_1);
        if (iVar4 != -1) {
          lVar6 = (longlong)iVar4 * 0x40 + *(longlong *)&this->LocalEntries;
          lVar7 = lVar6 + 0x18;
          if (lVar6 == 0) {
            lVar7 = 0;
          }
          if ((lVar7 != 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("LocalEntries.Find(Identifier) == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageTrailer.cpp"
                                 ,0x11f,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        FCompressedBuffer::FCompressedBuffer(&local_40,param_2);
        local_48 = &local_40;
        local_28 = 0;
        local_58.Value = (LocalEntry *)param_1;
        TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FIoHash_const_&,UE::FPackageTrailerBuilder::LocalEntry_&&>_>
                  ((TSet<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>,FDefaultSetAllocator>
                    *)&this->LocalEntries,&local_58,(bool *)&local_58.Value);
        FCompositeBuffer::~FCompositeBuffer(&local_40.CompressedData);
        FCompositeBuffer::~FCompositeBuffer(&param_2->CompressedData);
        return true;
      }
      goto LAB_1421545ce;
    }
    puVar5 = puVar5 + 4;
  } while( true );
}

// ~FPackageTrailerBuilder @ 142201080

void __thiscall UE::FPackageTrailerBuilder::~FPackageTrailerBuilder(FPackageTrailerBuilder *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)>,int>
            ((TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)> *)
             (this->Callbacks).AllocatorInstance.Data,(this->Callbacks).ArrayNum);
  pFVar1 = (this->Callbacks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->VirtualizedEntries).field_0x48 = 0;
  pvVar2 = *(void **)&(this->VirtualizedEntries).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VirtualizedEntries);
  *(undefined4 *)&(this->ReferencedEntries).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ReferencedEntries).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReferencedEntries);
  *(undefined4 *)&(this->LocalEntries).field_0x48 = 0;
  pvVar2 = *(void **)&(this->LocalEntries).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocalEntries);
  pFVar1 = (this->DebugContext).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

