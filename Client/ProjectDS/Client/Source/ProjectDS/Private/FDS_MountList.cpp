// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_MountList @ 14bbea910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDS_MountList * __thiscall
FDS_MountList::FDS_MountList(FDS_MountList *this,SqlMountListTable *param_1)

{
  FString *this_00;
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  FDS_MountList *pFVar11;
  undefined1 *puVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uchar *_Str;
  uint uVar16;
  undefined1 auStackY_1b8 [32];
  FString local_188;
  FString local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this->PlayerUID = (param_1->_impl_).player_uid_;
  this->MountUID = (param_1->_impl_).mount_uid_;
  this->MountTID = (param_1->_impl_).mount_id_;
  _Str = (uchar *)((ulonglong)(param_1->_impl_).mount_nickname_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(_Str + 0x18)) {
    _Str = *(uchar **)_Str;
  }
  uVar14 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  if (_Str == (uchar *)0x0) {
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
    goto LAB_14bbeaa33;
  }
  sVar9 = strlen((char *)_Str);
  local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar9);
  uVar7 = local_58 + 1;
  uVar16 = uVar7;
  if (uVar7 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar16 = 0;
      goto LAB_14bbea9b8;
    }
  }
  else {
LAB_14bbea9b8:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar16,2);
  }
  local_60 = local_168;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  pwVar10 = UE::Core::Private::Convert((wchar_t *)local_60,uVar7,_Str,(int)sVar9 + 1);
  if ((pwVar10 == (wchar_t *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FDS_MountList *)(*pcVar5)();
    return pFVar11;
  }
LAB_14bbeaa33:
  this_00 = &this->MountNickname;
  ::FString::FString(this_00,(wchar_t *)local_60);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  piVar1 = &(this->EquipItemIDList).ArrayMax;
  this->Hunger = (param_1->_impl_).hunger_;
  this->Fatigue = (param_1->_impl_).fatigue_;
  (this->EquipItemIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EquipItemIDList).ArrayNum = 0;
  *piVar1 = 0;
  pcVar13 = (char *)((ulonglong)
                     ds_game::_SqlMountListTable_default_instance_._instance._impl_.mount_nickname_.
                     tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
    pcVar13 = *(char **)pcVar13;
  }
  ::FString::FString(&local_188,pcVar13);
  iVar8 = (this->MountNickname).Data.ArrayNum;
  if (iVar8 == local_188.Data.ArrayNum) {
    if (iVar8 < 2) {
      bVar6 = true;
    }
    else {
      iVar8 = wcscmp((wchar_t *)(this_00->Data).AllocatorInstance.Data,
                     (wchar_t *)local_188.Data.AllocatorInstance.Data);
      bVar6 = iVar8 == 0;
    }
  }
  else {
    bVar6 = iVar8 + local_188.Data.ArrayNum == 1;
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (this_00 != &local_178)) {
    pFVar3 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MountNickname).Data.ArrayNum = 0;
    (this->MountNickname).Data.ArrayMax = 0;
  }
  (this->EquipItemIDList).ArrayNum = 0;
  uVar15 = uVar14;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->EquipItemIDList).AllocatorInstance,0,piVar1);
  }
  while( true ) {
    uVar4 = (param_1->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
    if ((uVar4 & 4) == 0) {
      uVar7 = (uint)uVar4 & 3;
    }
    else {
      uVar7 = (param_1->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.size;
    }
    if ((int)uVar7 <= (int)uVar14) break;
    puVar12 = (undefined1 *)((longlong)&(param_1->_impl_).equip_item_ids_.soo_rep_.field0_0x0 + 8);
    if ((uVar4 & 4) != 0) {
      puVar12 = (undefined1 *)(uVar4 & 0xfffffffffffffff8);
    }
    iVar8 = (this->EquipItemIDList).ArrayNum;
    uVar2 = *(undefined4 *)(puVar12 + uVar15);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->EquipItemIDList).AllocatorInstance,piVar1);
    }
    uVar14 = (ulonglong)((int)uVar14 + 1);
    (this->EquipItemIDList).ArrayNum = iVar8 + 1;
    *(undefined4 *)((this->EquipItemIDList).AllocatorInstance.Data + (longlong)iVar8 * 4) = uVar2;
    uVar15 = uVar15 + 4;
  }
  return this;
}

