// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FCbObjectView @ 1419cd160

FCbObjectView * __thiscall FCbObjectView::FCbObjectView(FCbObjectView *this)

{
  FCbFieldView::FCbFieldView((FCbFieldView *)this,"\x02",HasFieldType);
  return this;
}

// operator_bool @ 1419d5ad0

bool __thiscall FCbObjectView::operator_bool(FCbObjectView *this)

{
  ulong64 uVar1;
  
  uVar1 = FCbFieldView::GetValueSize((FCbFieldView *)this);
  return 2 < uVar1 + 1;
}

// AppendHash @ 1419e1430

void __thiscall FCbObjectView::AppendHash(FCbObjectView *this,FIoHashBuilder *param_1)

{
  byte local_res8 [8];
  TMemoryView<void_const_> local_18;
  
  local_res8[0] = *(byte *)this & 0x1f;
  FBlake3::Update((FBlake3 *)param_1,local_res8,1);
  local_18.Size = FCbFieldView::GetValueSize((FCbFieldView *)this);
  local_18.Data = *(void **)&this->field_0x8;
  FBlake3::Update((FBlake3 *)param_1,&local_18);
  return;
}

// CopyTo @ 1419e73b0

void __thiscall FCbObjectView::CopyTo(FCbObjectView *this,FArchive *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  byte local_res8 [8];
  
  if ((param_1->field_0x28 & 4) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                       ,0x30b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = FCbFieldView::GetValueSize((FCbFieldView *)this);
  uVar1 = *(undefined8 *)&this->field_0x8;
  local_res8[0] = *(byte *)this & 0x1f;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,uVar1,uVar4);
  return;
}

// CopyTo @ 1419e7460

void __thiscall FCbObjectView::CopyTo(FCbObjectView *this,TMemoryView<void> *param_1)

{
  byte bVar1;
  void *_Src;
  ulong64 uVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  ulong64 _Size;
  ulonglong uVar6;
  
  _Size = FCbFieldView::GetValueSize((FCbFieldView *)this);
  _Src = *(void **)&this->field_0x8;
  if ((param_1->Size != _Size + 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.GetSize() == sizeof(ECbFieldType) + Source.GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                         ,0x304,L"Buffer is %llu bytes but %llu is required."), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar1 = *(byte *)this;
  if ((param_1->Size == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = param_1->Size;
  pvVar4 = param_1->Data;
  uVar6 = (ulonglong)(uVar2 != 0);
  *(byte *)param_1->Data = bVar1 & 0x1f;
  if ((uVar2 - uVar6 < _Size) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (_Size != 0) {
    memcpy((void *)((longlong)pvVar4 + uVar6),_Src,_Size);
  }
  return;
}

// Equals @ 1419f6920

bool __thiscall FCbObjectView::Equals(FCbObjectView *this,FCbObjectView *param_1)

{
  void *_Buf1;
  int iVar1;
  ulong64 _Size;
  ulong64 uVar2;
  
  if (((*(byte *)param_1 ^ *(byte *)this) & 0x1f) == 0) {
    _Size = FCbFieldView::GetValueSize((FCbFieldView *)this);
    _Buf1 = *(void **)&this->field_0x8;
    uVar2 = FCbFieldView::GetValueSize((FCbFieldView *)param_1);
    if (_Size == uVar2) {
      if ((_Buf1 != *(void **)&param_1->field_0x8) &&
         (iVar1 = memcmp(_Buf1,*(void **)&param_1->field_0x8,_Size), iVar1 != 0)) {
        return false;
      }
      return true;
    }
  }
  return false;
}

// FindView @ 1419f9eb0

FCbFieldView * __thiscall
FCbObjectView::FindView
          (FCbObjectView *this,FCbFieldView *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  ECbFieldType EVar10;
  FCbFieldViewIterator local_38;
  
  FCbFieldView::CreateViewIterator((FCbFieldView *)this,&local_38);
  if ((local_38._0_4_ & 0x1f) != 0) {
    uVar2 = param_1->Size;
    EVar10 = local_38._0_1_;
    do {
      uVar6 = local_38._16_8_;
      uVar5 = local_38._4_4_;
      lVar4 = CONCAT44(local_38._12_4_,local_38._8_4_);
      if (uVar2 == local_38._4_4_) {
        if ((uVar2 != 0) && (local_38._4_4_ != 0)) {
          uVar7 = local_38._4_4_;
          if ((int)uVar2 < (int)local_38._4_4_) {
            uVar7 = uVar2;
          }
          iVar8 = strncmp((char *)param_1->DataPtr,(char *)(lVar4 - (ulonglong)(uint)local_38._4_4_)
                          ,(longlong)(int)uVar7);
          if (iVar8 != 0) goto LAB_1419f9f3d;
        }
        if (uVar2 == uVar5) {
          __return_storage_ptr__->TypeWithFlags = local_38._0_1_;
          __return_storage_ptr__->Error = local_38._1_1_;
          *(short *)&__return_storage_ptr__->field_0x2 = local_38._2_2_;
          __return_storage_ptr__->NameLen = local_38._4_4_;
          __return_storage_ptr__->Value = (void *)CONCAT44(local_38._12_4_,local_38._8_4_);
          return __return_storage_ptr__;
        }
      }
LAB_1419f9f3d:
      uVar9 = FCbFieldView::GetValueSize((FCbFieldView *)&local_38);
      uVar1 = uVar9 + lVar4;
      uVar3 = -(ulonglong)(uVar1 != uVar6);
      FCbFieldView::FCbFieldView
                ((FCbFieldView *)&local_38,(void *)(uVar3 & uVar1),(ECbFieldType)uVar3 & EVar10);
      EVar10 = local_38._0_1_;
      local_38._16_8_ = uVar6 & uVar3;
    } while ((local_38._0_4_ & 0x1f) != 0);
  }
  __return_storage_ptr__->TypeWithFlags = None;
  __return_storage_ptr__->Error = None;
  *(undefined2 *)&__return_storage_ptr__->field_0x2 = 0;
  __return_storage_ptr__->NameLen = 0;
  __return_storage_ptr__->Value = (void *)0x0;
  return __return_storage_ptr__;
}

// FindViewIgnoreCase @ 1419f9fc0

FCbFieldView * __thiscall
FCbObjectView::FindViewIgnoreCase
          (FCbObjectView *this,FCbFieldView *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  ECbFieldType EVar10;
  FCbFieldViewIterator local_38;
  
  FCbFieldView::CreateViewIterator((FCbFieldView *)this,&local_38);
  if ((local_38._0_4_ & 0x1f) != 0) {
    uVar2 = param_1->Size;
    EVar10 = local_38._0_1_;
    do {
      uVar6 = local_38._16_8_;
      uVar5 = local_38._4_4_;
      lVar4 = CONCAT44(local_38._12_4_,local_38._8_4_);
      if (uVar2 == local_38._4_4_) {
        if ((uVar2 != 0) && (local_38._4_4_ != 0)) {
          uVar7 = local_38._4_4_;
          if ((int)uVar2 < (int)local_38._4_4_) {
            uVar7 = uVar2;
          }
          iVar8 = FGenericPlatformStricmp::Strnicmp
                            (param_1->DataPtr,(uchar *)(lVar4 - (ulonglong)(uint)local_38._4_4_),
                             (longlong)(int)uVar7);
          if (iVar8 != 0) goto LAB_1419fa04c;
        }
        if (uVar2 == uVar5) {
          __return_storage_ptr__->TypeWithFlags = local_38._0_1_;
          __return_storage_ptr__->Error = local_38._1_1_;
          *(short *)&__return_storage_ptr__->field_0x2 = local_38._2_2_;
          __return_storage_ptr__->NameLen = local_38._4_4_;
          __return_storage_ptr__->Value = (void *)CONCAT44(local_38._12_4_,local_38._8_4_);
          return __return_storage_ptr__;
        }
      }
LAB_1419fa04c:
      uVar9 = FCbFieldView::GetValueSize((FCbFieldView *)&local_38);
      uVar1 = uVar9 + lVar4;
      uVar3 = -(ulonglong)(uVar1 != uVar6);
      FCbFieldView::FCbFieldView
                ((FCbFieldView *)&local_38,(void *)(uVar3 & uVar1),(ECbFieldType)uVar3 & EVar10);
      EVar10 = local_38._0_1_;
      local_38._16_8_ = uVar6 & uVar3;
    } while ((local_38._0_4_ & 0x1f) != 0);
  }
  __return_storage_ptr__->TypeWithFlags = None;
  __return_storage_ptr__->Error = None;
  *(undefined2 *)&__return_storage_ptr__->field_0x2 = 0;
  __return_storage_ptr__->NameLen = 0;
  __return_storage_ptr__->Value = (void *)0x0;
  return __return_storage_ptr__;
}

// GetHash @ 1419feec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoHash * __thiscall FCbObjectView::GetHash(FCbObjectView *this,FIoHash *__return_storage_ptr__)

{
  undefined8 uVar1;
  FBlake3Hash *pFVar2;
  undefined1 auStack_7d8 [32];
  byte local_7b8 [16];
  FBlake3Hash local_7a8;
  FBlake3 local_788;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_7d8;
  FBlake3::Reset(&local_788);
  local_7b8[0] = *(byte *)this & 0x1f;
  FBlake3::Update(&local_788,local_7b8,1);
  local_7a8.Hash._8_8_ = FCbFieldView::GetValueSize((FCbFieldView *)this);
  local_7a8.Hash._0_8_ = *(undefined8 *)&this->field_0x8;
  FBlake3::Update(&local_788,(TMemoryView<void_const_> *)&local_7a8);
  pFVar2 = FBlake3::Finalize(&local_788,&local_7a8);
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  uVar1 = *(undefined8 *)(pFVar2->Hash + 8);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)pFVar2->Hash;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar1;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(pFVar2->Hash + 0x10);
  return __return_storage_ptr__;
}

// GetSize @ 141a03990

ulong64 __thiscall FCbObjectView::GetSize(FCbObjectView *this)

{
  ulong64 uVar1;
  
  uVar1 = FCbFieldView::GetValueSize((FCbFieldView *)this);
  return uVar1 + 1;
}

