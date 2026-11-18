// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FContextEntry @ 1426fafa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FContextEntry * __thiscall FInputBindingManager::FContextEntry::FContextEntry(FContextEntry *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  FContextEntry *pFVar7;
  TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar8;
  undefined8 *puVar9;
  TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar10;
  longlong lVar11;
  undefined1 auStackY_d8 [32];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  piVar1 = &(this->ChordToCommandInfoMaps).ArrayMax;
  *(undefined8 *)&this->CommandInfoMap = 0;
  *(undefined8 *)&(this->CommandInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->CommandInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->CommandInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->CommandInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CommandInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CommandInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->CommandInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->CommandInfoMap).field_0x48 = 0;
  (this->ChordToCommandInfoMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChordToCommandInfoMaps).ArrayNum = 0;
  (this->BindingContext).Object = (FBindingContext *)0x0;
  (this->BindingContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *piVar1 = 0;
  local_88._16_8_ = 0;
  uStack_70 = 0;
  local_50 = 0;
  local_40 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (undefined8 *)0x0;
  DestructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int>
            ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
              *)0x0,0);
  iVar6 = *piVar1;
  (this->ChordToCommandInfoMaps).ArrayNum = 0;
  if (iVar6 != 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,2,&(this->ChordToCommandInfoMaps).AllocatorInstance,0,piVar1);
    iVar6 = *piVar1;
  }
  pFVar2 = (this->ChordToCommandInfoMaps).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_88) &&
     ((FScriptContainerElement *)local_88 < pFVar2 + (longlong)iVar6 * 0x50)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FContextEntry *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (this->ChordToCommandInfoMaps).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->ChordToCommandInfoMaps).AllocatorInstance,piVar1);
  }
  (this->ChordToCommandInfoMaps).ArrayNum = iVar6 + 1;
  pTVar10 = (TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)((this->ChordToCommandInfoMaps).AllocatorInstance.Data + (longlong)iVar6 * 0x50);
  *(undefined8 *)pTVar10 = 0;
  *(undefined8 *)&pTVar10->field_0x8 = 0;
  *(undefined8 *)&pTVar10->field_0x20 = 0;
  *(undefined4 *)&pTVar10->field_0x28 = 0;
  *(undefined4 *)&pTVar10->field_0x2c = 0x80;
  *(undefined4 *)&pTVar10->field_0x30 = 0xffffffff;
  *(undefined4 *)&pTVar10->field_0x34 = 0;
  *(undefined8 *)&pTVar10[1].field_0x8 = 0;
  *(undefined4 *)&pTVar10[1].field_0x10 = 0;
  if (pTVar10 !=
      (TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)local_88) {
    uVar4 = (uint)local_40;
    lVar11 = (longlong)(int)(uint)local_40;
    if (1 < (uint)local_40) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&pTVar10[1].field_0x8,0,(uint)local_40,4);
    }
    puVar9 = &local_50;
    if (local_48 != (undefined8 *)0x0) {
      puVar9 = local_48;
    }
    if (uVar4 != 0) {
      pTVar8 = *(TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 **)&pTVar10[1].field_0x8;
      if (*(TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            **)&pTVar10[1].field_0x8 ==
          (TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)0x0) {
        pTVar8 = pTVar10 + 1;
      }
      memcpy(pTVar8,puVar9,lVar11 << 2);
    }
    *(uint *)&pTVar10[1].field_0x10 = uVar4;
    TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(pTVar10,(TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88);
  }
  pFVar2 = (this->ChordToCommandInfoMaps).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_88) &&
     ((FScriptContainerElement *)local_88 < pFVar2 + (longlong)*piVar1 * 0x50)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FContextEntry *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (this->ChordToCommandInfoMaps).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->ChordToCommandInfoMaps).AllocatorInstance,piVar1);
  }
  (this->ChordToCommandInfoMaps).ArrayNum = iVar6 + 1;
  pTVar10 = (TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)((this->ChordToCommandInfoMaps).AllocatorInstance.Data + (longlong)iVar6 * 0x50);
  *(undefined8 *)pTVar10 = 0;
  *(undefined8 *)&pTVar10->field_0x8 = 0;
  *(undefined8 *)&pTVar10->field_0x20 = 0;
  *(undefined4 *)&pTVar10->field_0x28 = 0;
  *(undefined4 *)&pTVar10->field_0x2c = 0x80;
  *(undefined4 *)&pTVar10->field_0x30 = 0xffffffff;
  *(undefined4 *)&pTVar10->field_0x34 = 0;
  *(undefined8 *)&pTVar10[1].field_0x8 = 0;
  *(undefined4 *)&pTVar10[1].field_0x10 = 0;
  if (pTVar10 !=
      (TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)local_88) {
    uVar4 = (uint)local_40;
    lVar11 = (longlong)(int)(uint)local_40;
    if (1 < (uint)local_40) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&pTVar10[1].field_0x8,0,(uint)local_40,4);
    }
    puVar9 = &local_50;
    if (local_48 != (undefined8 *)0x0) {
      puVar9 = local_48;
    }
    if (uVar4 != 0) {
      pTVar8 = *(TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 **)&pTVar10[1].field_0x8;
      if (*(TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            **)&pTVar10[1].field_0x8 ==
          (TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)0x0) {
        pTVar8 = pTVar10 + 1;
      }
      memcpy(pTVar8,puVar9,lVar11 << 2);
    }
    *(uint *)&pTVar10[1].field_0x10 = uVar4;
    TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(pTVar10,(TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88);
  }
  local_40 = local_40 & 0xffffffff00000000;
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  bVar5 = local_88._12_4_ != 0;
  local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
  if (bVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return this;
}

