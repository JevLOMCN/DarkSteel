// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 53

// FCbFieldView @ 1419ccf70

FCbFieldView * __thiscall
FCbFieldView::FCbFieldView(FCbFieldView *this,void *param_1,ECbFieldType param_2)

{
  ECbFieldType EVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar6;
  
  uVar6 = 0;
  this->TypeWithFlags = None;
  this->Error = None;
  uVar9 = 0;
  this->NameLen = 0;
  this->Value = (void *)0x0;
  if ((param_2 & HasFieldType) != None) {
    EVar1 = *(ECbFieldType *)param_1;
    param_1 = (void *)((longlong)param_1 + 1);
    param_2 = EVar1 | HasFieldType;
  }
  uVar7 = uVar6;
  if ((char)param_2 < '\0') {
    pbVar8 = (byte *)((longlong)param_1 + 1);
    uVar6 = (ulonglong)(byte)~*(byte *)param_1 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar5 = -(int)lVar3 + 9;
    uVar6 = (ulonglong)uVar5;
    uVar7 = (ulonglong)(0xff >> ((byte)uVar5 & 0x1f) & 0xff) & (ulonglong)*(byte *)param_1;
    switch(-(int)lVar3) {
    case 0:
      uVar7 = (ulonglong)*pbVar8;
      pbVar8 = (byte *)((longlong)param_1 + 2);
    case -1:
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar2;
    case -2:
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar2;
    case -3:
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar2;
    case -4:
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar2;
    case -5:
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar2;
    case -6:
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar2;
    case -7:
      uVar7 = uVar7 << 8 | (ulonglong)*pbVar8;
    }
  }
  this->TypeWithFlags = param_2;
  uVar4 = 0xffffffff;
  if (uVar7 < 0xffffffff) {
    uVar4 = uVar7;
  }
  if (uVar4 != 0) {
    uVar9 = (uint)uVar4;
  }
  this->NameLen = uVar9;
  this->Value = (byte *)((longlong)param_1 + uVar6 + uVar7);
  return this;
}

// operator[] @ 1419d5960

FCbFieldView * __thiscall
FCbFieldView::operator[]
          (FCbFieldView *this,FCbFieldView *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uchar *_Str1;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  ECbFieldType EVar9;
  uint uVar10;
  ulonglong uVar11;
  FCbFieldView local_48;
  FCbFieldViewIterator local_38;
  
  EVar9 = this->TypeWithFlags & CustomByName;
  if ((EVar9 != Object) && (EVar9 != UniformObject)) {
    __return_storage_ptr__->TypeWithFlags = None;
    __return_storage_ptr__->Error = None;
    *(undefined2 *)&__return_storage_ptr__->field_0x2 = 0;
    __return_storage_ptr__->NameLen = 0;
    __return_storage_ptr__->Value = (void *)0x0;
    return __return_storage_ptr__;
  }
  local_48.TypeWithFlags = this->TypeWithFlags;
  local_48.Error = this->Error;
  local_48._2_2_ = *(undefined2 *)&this->field_0x2;
  local_48.NameLen = this->NameLen;
  local_48.Value = this->Value;
  _Str1 = param_1->DataPtr;
  uVar3 = *(undefined8 *)&param_1->Size;
  CreateViewIterator(&local_48,&local_38);
  EVar9 = local_38._0_1_;
  uVar5 = local_38._4_4_;
  uVar11 = local_38._16_8_;
  do {
    if ((local_38._0_4_ & 0x1f) == 0) {
      __return_storage_ptr__->TypeWithFlags = None;
      __return_storage_ptr__->Error = None;
      *(undefined2 *)&__return_storage_ptr__->field_0x2 = 0;
      __return_storage_ptr__->NameLen = 0;
      __return_storage_ptr__->Value = (void *)0x0;
      return __return_storage_ptr__;
    }
    lVar4 = CONCAT44(local_38._12_4_,local_38._8_4_);
    uVar10 = (uint)uVar3;
    local_38._4_4_ = uVar5;
    local_38._16_8_ = uVar11;
    if (uVar10 == uVar5) {
      if ((uVar10 != 0) && (uVar5 != 0)) {
        uVar6 = uVar5;
        if ((int)uVar10 < (int)uVar5) {
          uVar6 = uVar10;
        }
        iVar7 = strncmp((char *)_Str1,(char *)(lVar4 - (ulonglong)uVar5),(longlong)(int)uVar6);
        if (iVar7 != 0) goto LAB_1419d5a3d;
      }
      if (uVar10 == uVar5) {
        __return_storage_ptr__->TypeWithFlags = local_38._0_1_;
        __return_storage_ptr__->Error = local_38._1_1_;
        *(short *)&__return_storage_ptr__->field_0x2 = local_38._2_2_;
        __return_storage_ptr__->NameLen = local_38._4_4_;
        __return_storage_ptr__->Value = (void *)CONCAT44(local_38._12_4_,local_38._8_4_);
        return __return_storage_ptr__;
      }
    }
LAB_1419d5a3d:
    uVar8 = GetValueSize((FCbFieldView *)&local_38);
    uVar1 = uVar8 + lVar4;
    uVar2 = -(ulonglong)(uVar1 != uVar11);
    uVar11 = uVar11 & uVar2;
    FCbFieldView((FCbFieldView *)&local_38,(void *)(uVar2 & uVar1),(ECbFieldType)uVar2 & EVar9);
    EVar9 = local_38._0_1_;
    uVar5 = local_38._4_4_;
  } while( true );
}

// AppendHash @ 1419e1380

void __thiscall FCbFieldView::AppendHash(FCbFieldView *this,FIoHashBuilder *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ECbFieldType local_res8 [8];
  TMemoryView<void_const_> local_18;
  
  local_res8[0] = this->TypeWithFlags & (HasFieldName|CustomByName);
  FBlake3::Update((FBlake3 *)param_1,local_res8,1);
  if ((this->TypeWithFlags & HasFieldName) == None) {
    uVar3 = 0;
  }
  else {
    uVar3 = this->NameLen;
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    iVar2 = 0;
    if (uVar3 != 0) {
      iVar2 = iVar1;
    }
    uVar3 = uVar3 + 1 + iVar2 / 7;
  }
  local_18.Size = GetValueSize(this);
  local_18.Data = (void *)((longlong)this->Value - (ulonglong)uVar3);
  local_18.Size = local_18.Size + uVar3;
  FBlake3::Update((FBlake3 *)param_1,&local_18);
  return;
}

// AsArrayView @ 1419e1d00

FCbArrayView * __thiscall
FCbFieldView::AsArrayView(FCbFieldView *this,FCbArrayView *__return_storage_ptr__)

{
  void *pvVar1;
  ECbFieldError EVar2;
  undefined2 uVar3;
  uint uVar4;
  
  if ((this->TypeWithFlags & CustomById) == Array) {
    this->Error = None;
    EVar2 = this->Error;
    uVar3 = *(undefined2 *)&this->field_0x2;
    uVar4 = this->NameLen;
    pvVar1 = this->Value;
    __return_storage_ptr__->field_0x0 = this->TypeWithFlags;
    __return_storage_ptr__->field_0x1 = EVar2;
    *(undefined2 *)&__return_storage_ptr__->field_0x2 = uVar3;
    *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
    *(void **)&__return_storage_ptr__->field_0x8 = pvVar1;
    return __return_storage_ptr__;
  }
  this->Error = TypeError;
  FCbFieldView((FCbFieldView *)__return_storage_ptr__,"\x04\x01",HasFieldType);
  return __return_storage_ptr__;
}

// AsAttachment @ 1419e1d50

FIoHash * __thiscall
FCbFieldView::AsAttachment(FCbFieldView *this,FIoHash *__return_storage_ptr__,FIoHash *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = this->Value;
  if ((this->TypeWithFlags & CustomById) == ObjectAttachment) {
    this->Error = None;
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
    uVar2 = puVar1[1];
    *(undefined8 *)__return_storage_ptr__->Hash = *puVar1;
    *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar2;
    *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(puVar1 + 2);
    return __return_storage_ptr__;
  }
  this->Error = TypeError;
  uVar2 = *(undefined8 *)(param_1->Hash + 8);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)param_1->Hash;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar2;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(param_1->Hash + 0x10);
  return __return_storage_ptr__;
}

// AsBinaryAttachment @ 1419e1da0

FIoHash * __thiscall
FCbFieldView::AsBinaryAttachment
          (FCbFieldView *this,FIoHash *__return_storage_ptr__,FIoHash *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = this->Value;
  if ((this->TypeWithFlags & CustomByName) == BinaryAttachment) {
    this->Error = None;
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
    uVar2 = puVar1[1];
    *(undefined8 *)__return_storage_ptr__->Hash = *puVar1;
    *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar2;
    *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(puVar1 + 2);
    return __return_storage_ptr__;
  }
  this->Error = TypeError;
  uVar2 = *(undefined8 *)(param_1->Hash + 8);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)param_1->Hash;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar2;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(param_1->Hash + 0x10);
  return __return_storage_ptr__;
}

// AsBinaryView @ 1419e1df0

TMemoryView<void_const_> * __thiscall
FCbFieldView::AsBinaryView
          (FCbFieldView *this,TMemoryView<void_const_> *__return_storage_ptr__,
          TMemoryView<void_const_> *param_1)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  void *pvVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  
  pbVar2 = this->Value;
  if ((this->TypeWithFlags & CustomByName) != Binary) {
    pvVar4 = param_1->Data;
    uVar5 = param_1->Size;
    this->Error = TypeError;
    __return_storage_ptr__->Data = pvVar4;
    __return_storage_ptr__->Size = uVar5;
    return __return_storage_ptr__;
  }
  this->Error = None;
  pbVar8 = pbVar2 + 1;
  uVar6 = (ulonglong)(byte)~*pbVar2 * 2 + 1;
  lVar3 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar7 = -(int)lVar3 + 9;
  uVar6 = (ulonglong)(0xff >> ((byte)uVar7 & 0x1f) & 0xff) & (ulonglong)*pbVar2;
  switch(-(int)lVar3) {
  case 0:
    uVar6 = (ulonglong)*pbVar8;
    pbVar8 = pbVar2 + 2;
  case -1:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar6 = uVar6 << 8 | (ulonglong)bVar1;
  case -2:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar6 = uVar6 << 8 | (ulonglong)bVar1;
  case -3:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar6 = uVar6 << 8 | (ulonglong)bVar1;
  case -4:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar6 = uVar6 << 8 | (ulonglong)bVar1;
  case -5:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar6 = uVar6 << 8 | (ulonglong)bVar1;
  case -6:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar6 = uVar6 << 8 | (ulonglong)bVar1;
  case -7:
    uVar6 = uVar6 << 8 | (ulonglong)*pbVar8;
  default:
    __return_storage_ptr__->Data = pbVar2 + uVar7;
    __return_storage_ptr__->Size = uVar6;
    return __return_storage_ptr__;
  }
}

// AsBool @ 1419e1f30

bool __thiscall FCbFieldView::AsBool(FCbFieldView *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = (this->TypeWithFlags & CustomById) == BoolFalse;
  bVar1 = !bVar2;
  this->Error = bVar1;
  return (bool)(bVar2 & this->TypeWithFlags | (bVar1 && param_1));
}

// AsCustom @ 1419e1f60

TMemoryView<void_const_> * __thiscall
FCbFieldView::AsCustom
          (FCbFieldView *this,TMemoryView<void_const_> *__return_storage_ptr__,
          TStringView<char8_t> *param_1,TMemoryView<void_const_> *param_2)

{
  int iVar1;
  int iVar2;
  FCbCustomByName local_58;
  FCbCustomByName local_38;
  
  local_38.Name.DataPtr = param_1->DataPtr;
  local_38.Name.Size = param_1->Size;
  local_38.Name._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_38.Data.Data = param_2->Data;
  local_38.Data.Size = param_2->Size;
  AsCustomByName(this,&local_58,&local_38);
  iVar2 = (int)*(undefined8 *)&param_1->Size;
  if (local_58.Name.Size == iVar2) {
    if ((local_58.Name.Size != 0) && (iVar2 != 0)) {
      iVar1 = iVar2;
      if (local_58.Name.Size < iVar2) {
        iVar1 = local_58.Name.Size;
      }
      iVar1 = strncmp((char *)local_58.Name.DataPtr,(char *)param_1->DataPtr,(longlong)iVar1);
      if (iVar1 != 0) goto LAB_1419e1fe5;
    }
    if (local_58.Name.Size == iVar2) goto LAB_1419e1fee;
  }
LAB_1419e1fe5:
  local_58.Data.Data._0_4_ = *(undefined4 *)&param_2->Data;
  local_58.Data.Data._4_4_ = *(undefined4 *)((longlong)&param_2->Data + 4);
  local_58.Data.Size._0_4_ = (undefined4)param_2->Size;
  local_58.Data.Size._4_4_ = *(undefined4 *)((longlong)&param_2->Size + 4);
  this->Error = RangeError;
LAB_1419e1fee:
  *(undefined4 *)&__return_storage_ptr__->Data = local_58.Data.Data._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Data + 4) = local_58.Data.Data._4_4_;
  *(undefined4 *)&__return_storage_ptr__->Size = (undefined4)local_58.Data.Size;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Size + 4) = local_58.Data.Size._4_4_;
  return __return_storage_ptr__;
}

// AsCustom @ 1419e2020

TMemoryView<void_const_> * __thiscall
FCbFieldView::AsCustom
          (FCbFieldView *this,TMemoryView<void_const_> *__return_storage_ptr__,ulong64 param_1,
          TMemoryView<void_const_> *param_2)

{
  FCbCustomById local_48;
  FCbCustomById local_28;
  
  local_48.Data.Data = param_2->Data;
  local_48.Data.Size = param_2->Size;
  local_48.Id = param_1;
  AsCustomById(this,&local_28,&local_48);
  if (local_28.Id != param_1) {
    local_28.Data.Data._0_4_ = *(undefined4 *)&param_2->Data;
    local_28.Data.Data._4_4_ = *(undefined4 *)((longlong)&param_2->Data + 4);
    local_28.Data.Size._0_4_ = (undefined4)param_2->Size;
    local_28.Data.Size._4_4_ = *(undefined4 *)((longlong)&param_2->Size + 4);
    this->Error = RangeError;
  }
  *(undefined4 *)&__return_storage_ptr__->Data = local_28.Data.Data._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Data + 4) = local_28.Data.Data._4_4_;
  *(undefined4 *)&__return_storage_ptr__->Size = (undefined4)local_28.Data.Size;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Size + 4) = local_28.Data.Size._4_4_;
  return __return_storage_ptr__;
}

// AsCustomById @ 1419e20b0

FCbCustomById * __thiscall
FCbFieldView::AsCustomById
          (FCbFieldView *this,FCbCustomById *__return_storage_ptr__,FCbCustomById *param_1)

{
  ulong64 uVar1;
  byte bVar2;
  longlong lVar3;
  ulong64 uVar4;
  void *pvVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  pbVar7 = this->Value;
  if ((this->TypeWithFlags & CustomByName) != CustomById) {
    uVar4 = param_1->Id;
    pvVar5 = (param_1->Data).Data;
    this->Error = TypeError;
    uVar1 = (param_1->Data).Size;
    __return_storage_ptr__->Id = uVar4;
    (__return_storage_ptr__->Data).Data = pvVar5;
    (__return_storage_ptr__->Data).Size = uVar1;
    return __return_storage_ptr__;
  }
  this->Error = None;
  pbVar6 = pbVar7 + 1;
  uVar9 = (ulonglong)(byte)~*pbVar7 * 2 + 1;
  lVar3 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar10 = -(int)lVar3 + 9;
  uVar9 = (ulonglong)(0xff >> ((byte)uVar10 & 0x1f) & 0xff) & (ulonglong)*pbVar7;
  switch(-(int)lVar3) {
  case 0:
    uVar9 = (ulonglong)*pbVar6;
    pbVar6 = pbVar7 + 2;
  case -1:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar9 = uVar9 << 8 | (ulonglong)bVar2;
  case -2:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar9 = uVar9 << 8 | (ulonglong)bVar2;
  case -3:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar9 = uVar9 << 8 | (ulonglong)bVar2;
  case -4:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar9 = uVar9 << 8 | (ulonglong)bVar2;
  case -5:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar9 = uVar9 << 8 | (ulonglong)bVar2;
  case -6:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar9 = uVar9 << 8 | (ulonglong)bVar2;
  case -7:
    uVar9 = uVar9 << 8 | (ulonglong)*pbVar6;
  default:
    pbVar7 = pbVar7 + uVar10;
    __return_storage_ptr__->Id = 0;
    (__return_storage_ptr__->Data).Data = (void *)0x0;
    (__return_storage_ptr__->Data).Size = 0;
    pbVar6 = pbVar7 + 1;
    uVar8 = (ulonglong)(byte)~*pbVar7 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
  }
  uVar10 = -(int)lVar3 + 9;
  uVar8 = (ulonglong)(0xff >> ((byte)uVar10 & 0x1f) & 0xff) & (ulonglong)*pbVar7;
  switch(-(int)lVar3) {
  case 0:
    uVar8 = (ulonglong)*pbVar6;
    pbVar6 = pbVar7 + 2;
  case -1:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -2:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -3:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -4:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -5:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -6:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -7:
    uVar8 = uVar8 << 8 | (ulonglong)*pbVar6;
  default:
    __return_storage_ptr__->Id = uVar8;
    (__return_storage_ptr__->Data).Data = pbVar7 + uVar10;
    (__return_storage_ptr__->Data).Size = uVar9 - uVar10;
    return __return_storage_ptr__;
  }
}

// AsCustomByName @ 1419e22e0

FCbCustomByName * __thiscall
FCbFieldView::AsCustomByName
          (FCbFieldView *this,FCbCustomByName *__return_storage_ptr__,FCbCustomByName *param_1)

{
  byte bVar1;
  longlong lVar2;
  uchar *puVar3;
  void *pvVar4;
  ulong64 uVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 uStack_c;
  
  pbVar9 = this->Value;
  if ((this->TypeWithFlags & CustomByName) != CustomByName) {
    puVar3 = (param_1->Name).DataPtr;
    iVar6 = (param_1->Name).Size;
    uVar7 = *(undefined4 *)&(param_1->Name).field_0xc;
    this->Error = TypeError;
    pvVar4 = (param_1->Data).Data;
    uVar5 = (param_1->Data).Size;
    (__return_storage_ptr__->Name).DataPtr = puVar3;
    (__return_storage_ptr__->Name).Size = iVar6;
    *(undefined4 *)&(__return_storage_ptr__->Name).field_0xc = uVar7;
    (__return_storage_ptr__->Data).Data = pvVar4;
    (__return_storage_ptr__->Data).Size = uVar5;
    return __return_storage_ptr__;
  }
  this->Error = None;
  pbVar8 = pbVar9 + 1;
  uVar11 = (ulonglong)(byte)~*pbVar9 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar12 = -(int)lVar2 + 9;
  uVar11 = (ulonglong)(0xff >> ((byte)uVar12 & 0x1f) & 0xff) & (ulonglong)*pbVar9;
  switch(-(int)lVar2) {
  case 0:
    uVar11 = (ulonglong)*pbVar8;
    pbVar8 = pbVar9 + 2;
  case -1:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar11 = uVar11 << 8 | (ulonglong)bVar1;
  case -2:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar11 = uVar11 << 8 | (ulonglong)bVar1;
  case -3:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar11 = uVar11 << 8 | (ulonglong)bVar1;
  case -4:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar11 = uVar11 << 8 | (ulonglong)bVar1;
  case -5:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar11 = uVar11 << 8 | (ulonglong)bVar1;
  case -6:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar11 = uVar11 << 8 | (ulonglong)bVar1;
  case -7:
    uVar11 = uVar11 << 8 | (ulonglong)*pbVar8;
  default:
    pbVar9 = pbVar9 + uVar12;
    pbVar8 = pbVar9 + 1;
    uVar10 = (ulonglong)(byte)~*pbVar9 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
  }
  uVar12 = -(int)lVar2 + 9;
  uVar10 = (ulonglong)(0xff >> ((byte)uVar12 & 0x1f) & 0xff) & (ulonglong)*pbVar9;
  switch(-(int)lVar2) {
  case 0:
    uVar10 = (ulonglong)*pbVar8;
    pbVar8 = pbVar9 + 2;
  case -1:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)bVar1;
  case -2:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)bVar1;
  case -3:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)bVar1;
  case -4:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)bVar1;
  case -5:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)bVar1;
  case -6:
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)bVar1;
  case -7:
    uVar10 = uVar10 << 8 | (ulonglong)*pbVar8;
  default:
    (__return_storage_ptr__->Name).DataPtr = pbVar9 + uVar12;
    *(ulonglong *)&(__return_storage_ptr__->Name).Size = CONCAT44(uStack_c,(int)uVar10);
    (__return_storage_ptr__->Data).Data = pbVar9 + uVar12 + uVar10;
    (__return_storage_ptr__->Data).Size = (uVar11 - uVar12) - uVar10;
    return __return_storage_ptr__;
  }
}

// AsDateTime @ 1419e2520

FDateTime __thiscall FCbFieldView::AsDateTime(FCbFieldView *this,FDateTime param_1)

{
  ulonglong uVar1;
  undefined8 in_R8;
  
  if ((this->TypeWithFlags & CustomByName) == DateTime) {
    this->Error = None;
    uVar1 = *(ulonglong *)this->Value;
    *(ulonglong *)param_1.Ticks =
         uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
         (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
         (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    return (FDateTime)param_1.Ticks;
  }
  this->Error = TypeError;
  *(undefined8 *)param_1.Ticks = in_R8;
  return (FDateTime)param_1.Ticks;
}

// AsDateTime @ 1419e2550

FDateTime __thiscall FCbFieldView::AsDateTime(FCbFieldView *this)

{
  ulonglong uVar1;
  ulonglong *in_RDX;
  
  if ((this->TypeWithFlags & CustomByName) == DateTime) {
    this->Error = None;
    uVar1 = *(ulonglong *)this->Value;
    *in_RDX = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
              | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18
              | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    return (FDateTime)(long64)in_RDX;
  }
  this->Error = TypeError;
  *in_RDX = 0;
  return (FDateTime)(long64)in_RDX;
}

// AsDateTimeTicks @ 1419e2590

long64 __thiscall FCbFieldView::AsDateTimeTicks(FCbFieldView *this,long64 param_1)

{
  ulonglong uVar1;
  
  if ((this->TypeWithFlags & CustomByName) == DateTime) {
    this->Error = None;
    uVar1 = *(ulonglong *)this->Value;
    return uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
           (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
           (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  }
  this->Error = TypeError;
  return param_1;
}

// AsDouble @ 1419e25c0

double __thiscall FCbFieldView::AsDouble(FCbFieldView *this,double param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ECbFieldType EVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  
  puVar3 = this->Value;
  EVar5 = this->TypeWithFlags & CustomByName;
  if ((EVar5 == IntegerPositive) || (EVar5 == IntegerNegative)) {
    uVar7 = (ulonglong)(byte)~(byte)*puVar3 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    pbVar8 = (byte *)((longlong)puVar3 + 1);
    uVar7 = (ulonglong)(0xff >> ((char)-(int)lVar4 + 9U & 0x1f) & 0xff) & (ulonglong)(byte)*puVar3;
    switch(-(int)lVar4) {
    case 0:
      uVar7 = (ulonglong)*pbVar8;
      pbVar8 = (byte *)((longlong)puVar3 + 2);
    case -1:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -7:
      uVar7 = uVar7 << 8 | (ulonglong)*pbVar8;
    default:
      uVar7 = uVar7 + (EVar5 & 1);
      this->Error = -((uVar7 & 0xffe0000000000000) != 0) & RangeError;
      if ((uVar7 & 0xffe0000000000000) == 0) {
        uVar6 = -uVar7;
        if ((ulonglong)(EVar5 & 1) == 0) {
          uVar6 = uVar7;
        }
        param_1 = (double)(longlong)uVar6;
      }
      return param_1;
    }
  }
  if (EVar5 == Float32) {
    this->Error = None;
    uVar2 = (uint)*puVar3;
    return (double)(float)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18);
  }
  if (EVar5 == Float64) {
    this->Error = None;
    uVar7 = *puVar3;
    return (double)(uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                    (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                    (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                    (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38);
  }
  this->Error = TypeError;
  return param_1;
}

// AsFloat @ 1419e2760

float __thiscall FCbFieldView::AsFloat(FCbFieldView *this,float param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  ECbFieldType EVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  
  puVar3 = this->Value;
  EVar5 = this->TypeWithFlags & CustomByName;
  if ((EVar5 == IntegerPositive) || (EVar5 == IntegerNegative)) {
    uVar7 = (ulonglong)(byte)~(byte)*puVar3 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    pbVar8 = (byte *)((longlong)puVar3 + 1);
    uVar7 = (ulonglong)(0xff >> ((char)-(int)lVar4 + 9U & 0x1f) & 0xff) & (ulonglong)(byte)*puVar3;
    switch(-(int)lVar4) {
    case 0:
      uVar7 = (ulonglong)*pbVar8;
      pbVar8 = (byte *)((longlong)puVar3 + 2);
    case -1:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 << 8 | (ulonglong)bVar1;
    case -7:
      uVar7 = uVar7 << 8 | (ulonglong)*pbVar8;
    default:
      uVar7 = uVar7 + (EVar5 & 1);
      this->Error = -((uVar7 & 0xffffffffff000000) != 0) & RangeError;
      if ((uVar7 & 0xffffffffff000000) == 0) {
        uVar6 = -uVar7;
        if ((ulonglong)(EVar5 & 1) == 0) {
          uVar6 = uVar7;
        }
        param_1 = (float)(longlong)uVar6;
      }
      return param_1;
    }
  }
  if (EVar5 == Float32) {
    this->Error = None;
    uVar2 = *puVar3;
    return (float)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  }
  if (EVar5 == Float64) {
    this->Error = RangeError;
    return param_1;
  }
  this->Error = TypeError;
  return param_1;
}

// AsHash @ 1419e28e0

FIoHash * __thiscall
FCbFieldView::AsHash(FCbFieldView *this,FIoHash *__return_storage_ptr__,FIoHash *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = this->Value;
  if (((this->TypeWithFlags & CustomByName) != Hash) &&
     ((this->TypeWithFlags & CustomById) != ObjectAttachment)) {
    this->Error = TypeError;
    uVar2 = *(undefined8 *)(param_1->Hash + 8);
    *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)param_1->Hash;
    *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar2;
    *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(param_1->Hash + 0x10);
    return __return_storage_ptr__;
  }
  this->Error = None;
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
  uVar2 = puVar1[1];
  *(undefined8 *)__return_storage_ptr__->Hash = *puVar1;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar2;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(puVar1 + 2);
  return __return_storage_ptr__;
}

// AsInteger @ 1419e2930

ulong64 __thiscall
FCbFieldView::AsInteger(FCbFieldView *this,ulong64 param_1,FIntegerParams param_2)

{
  ECbFieldError *pEVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  ECbFieldError EVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  
  pEVar1 = &this->Error;
  pbVar3 = this->Value;
  if ((this->TypeWithFlags & CustomById) != IntegerPositive) {
    *pEVar1 = TypeError;
    return param_1;
  }
  uVar7 = (ulonglong)(this->TypeWithFlags & 1);
  uVar8 = (ulonglong)(byte)~*pbVar3 * 2 + 1;
  lVar4 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  pbVar9 = pbVar3 + 1;
  uVar8 = (ulonglong)(0xff >> ((char)-(int)lVar4 + 9U & 0x1f) & 0xff) & (ulonglong)*pbVar3;
  switch(-(int)lVar4) {
  case 0:
    uVar8 = (ulonglong)*pbVar9;
    pbVar9 = pbVar3 + 2;
  case -1:
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -2:
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -3:
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -4:
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -5:
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -6:
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -7:
    uVar8 = uVar8 << 8 | (ulonglong)*pbVar9;
  }
  uVar6 = -uVar7 ^ uVar8;
  if (pEVar1 == (ECbFieldError *)0x0) {
    return uVar6;
  }
  uVar8 = (uVar7 ^ 1 | (ulonglong)(uint)param_2) &
          (ulonglong)((-2L << ((char)param_2.MagnitudeBits - 1U & 0x3f) & uVar8) == 0);
  EVar5 = RangeError;
  if (uVar8 != 0) {
    EVar5 = None;
  }
  uVar8 = -uVar8;
  *pEVar1 = EVar5;
  return ~uVar8 & param_1 | uVar8 & uVar6;
}

// AsObjectAttachment @ 1419e2ce0

FIoHash * __thiscall
FCbFieldView::AsObjectAttachment
          (FCbFieldView *this,FIoHash *__return_storage_ptr__,FIoHash *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = this->Value;
  if ((this->TypeWithFlags & CustomByName) == ObjectAttachment) {
    this->Error = None;
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
    uVar2 = puVar1[1];
    *(undefined8 *)__return_storage_ptr__->Hash = *puVar1;
    *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar2;
    *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(puVar1 + 2);
    return __return_storage_ptr__;
  }
  this->Error = TypeError;
  uVar2 = *(undefined8 *)(param_1->Hash + 8);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)param_1->Hash;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar2;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(param_1->Hash + 0x10);
  return __return_storage_ptr__;
}

// AsObjectId @ 1419e2d30

FCbObjectId * __thiscall
FCbFieldView::AsObjectId
          (FCbFieldView *this,FCbObjectId *__return_storage_ptr__,FCbObjectId *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = this->Value;
  if ((this->TypeWithFlags & CustomByName) == ObjectId) {
    this->Error = None;
    __return_storage_ptr__->Bytes[0] = '\0';
    __return_storage_ptr__->Bytes[1] = '\0';
    __return_storage_ptr__->Bytes[2] = '\0';
    __return_storage_ptr__->Bytes[3] = '\0';
    __return_storage_ptr__->Bytes[4] = '\0';
    __return_storage_ptr__->Bytes[5] = '\0';
    __return_storage_ptr__->Bytes[6] = '\0';
    __return_storage_ptr__->Bytes[7] = '\0';
    __return_storage_ptr__->Bytes[8] = '\0';
    __return_storage_ptr__->Bytes[9] = '\0';
    __return_storage_ptr__->Bytes[10] = '\0';
    __return_storage_ptr__->Bytes[0xb] = '\0';
    *(undefined8 *)__return_storage_ptr__->Bytes = *puVar1;
    *(undefined4 *)(__return_storage_ptr__->Bytes + 8) = *(undefined4 *)(puVar1 + 1);
    return __return_storage_ptr__;
  }
  this->Error = TypeError;
  *(undefined8 *)__return_storage_ptr__->Bytes = *(undefined8 *)param_1->Bytes;
  *(undefined4 *)(__return_storage_ptr__->Bytes + 8) = *(undefined4 *)(param_1->Bytes + 8);
  return __return_storage_ptr__;
}

// AsObjectView @ 1419e2d80

FCbObjectView * __thiscall
FCbFieldView::AsObjectView(FCbFieldView *this,FCbObjectView *__return_storage_ptr__)

{
  void *pvVar1;
  ECbFieldError EVar2;
  undefined2 uVar3;
  uint uVar4;
  
  if ((this->TypeWithFlags & CustomById) == Object) {
    this->Error = None;
    EVar2 = this->Error;
    uVar3 = *(undefined2 *)&this->field_0x2;
    uVar4 = this->NameLen;
    pvVar1 = this->Value;
    __return_storage_ptr__->field_0x0 = this->TypeWithFlags;
    __return_storage_ptr__->field_0x1 = EVar2;
    *(undefined2 *)&__return_storage_ptr__->field_0x2 = uVar3;
    *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
    *(void **)&__return_storage_ptr__->field_0x8 = pvVar1;
    return __return_storage_ptr__;
  }
  this->Error = TypeError;
  FCbFieldView((FCbFieldView *)__return_storage_ptr__,"\x02",HasFieldType);
  return __return_storage_ptr__;
}

// AsString @ 1419e2dd0

TStringView<char8_t> * __thiscall
FCbFieldView::AsString
          (FCbFieldView *this,TStringView<char8_t> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  ECbFieldError *pEVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  uchar *puVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  byte *pbVar10;
  
  pEVar1 = &this->Error;
  pbVar3 = this->Value;
  if ((this->TypeWithFlags & CustomByName) != String) {
    puVar5 = param_1->DataPtr;
    iVar6 = param_1->Size;
    uVar7 = *(undefined4 *)&param_1->field_0xc;
    *pEVar1 = TypeError;
    __return_storage_ptr__->DataPtr = puVar5;
    __return_storage_ptr__->Size = iVar6;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar7;
    return __return_storage_ptr__;
  }
  pbVar10 = pbVar3 + 1;
  uVar8 = (ulonglong)(byte)~*pbVar3 * 2 + 1;
  lVar4 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar9 = -(int)lVar4 + 9;
  uVar8 = (ulonglong)(0xff >> ((byte)uVar9 & 0x1f) & 0xff) & (ulonglong)*pbVar3;
  switch(-(int)lVar4) {
  case 0:
    uVar8 = (ulonglong)*pbVar10;
    pbVar10 = pbVar3 + 2;
  case -1:
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -2:
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -3:
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -4:
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -5:
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -6:
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    uVar8 = uVar8 << 8 | (ulonglong)bVar2;
  case -7:
    uVar8 = uVar8 << 8 | (ulonglong)*pbVar10;
  }
  if (pEVar1 != (ECbFieldError *)0x0) {
    if (0x7fffffff < uVar8) {
      puVar5 = param_1->DataPtr;
      iVar6 = param_1->Size;
      uVar7 = *(undefined4 *)&param_1->field_0xc;
      *pEVar1 = RangeError;
      __return_storage_ptr__->DataPtr = puVar5;
      __return_storage_ptr__->Size = iVar6;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar7;
      return __return_storage_ptr__;
    }
    *pEVar1 = None;
  }
  __return_storage_ptr__->DataPtr = pbVar3 + uVar9;
  __return_storage_ptr__->Size = (int)uVar8;
  return __return_storage_ptr__;
}

// AsTimeSpan @ 1419e2f40

FTimespan __thiscall FCbFieldView::AsTimeSpan(FCbFieldView *this,FTimespan param_1)

{
  ulonglong uVar1;
  undefined8 in_R8;
  
  if ((this->TypeWithFlags & CustomByName) == TimeSpan) {
    this->Error = None;
    uVar1 = *(ulonglong *)this->Value;
    *(ulonglong *)param_1.Ticks =
         uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
         (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
         (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    return (FTimespan)param_1.Ticks;
  }
  this->Error = TypeError;
  *(undefined8 *)param_1.Ticks = in_R8;
  return (FTimespan)param_1.Ticks;
}

// AsTimeSpan @ 1419e2f70

FTimespan __thiscall FCbFieldView::AsTimeSpan(FCbFieldView *this)

{
  ulonglong uVar1;
  ulonglong *in_RDX;
  
  if ((this->TypeWithFlags & CustomByName) == TimeSpan) {
    this->Error = None;
    uVar1 = *(ulonglong *)this->Value;
    *in_RDX = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
              | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18
              | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    return (FTimespan)(long64)in_RDX;
  }
  this->Error = TypeError;
  *in_RDX = 0;
  return (FTimespan)(long64)in_RDX;
}

// AsTimeSpanTicks @ 1419e2fb0

long64 __thiscall FCbFieldView::AsTimeSpanTicks(FCbFieldView *this,long64 param_1)

{
  ulonglong uVar1;
  
  if ((this->TypeWithFlags & CustomByName) == TimeSpan) {
    this->Error = None;
    uVar1 = *(ulonglong *)this->Value;
    return uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
           (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
           (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  }
  this->Error = TypeError;
  return param_1;
}

// AsUuid @ 1419e2fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGuid * __thiscall
FCbFieldView::AsUuid(FCbFieldView *this,FGuid *__return_storage_ptr__,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  FGuid FVar6;
  
  if ((this->TypeWithFlags & CustomByName) != Uuid) {
    this->Error = TypeError;
    uVar1 = param_1->B;
    uVar2 = param_1->C;
    uVar3 = param_1->D;
    __return_storage_ptr__->A = param_1->A;
    __return_storage_ptr__->B = uVar1;
    __return_storage_ptr__->C = uVar2;
    __return_storage_ptr__->D = uVar3;
    return __return_storage_ptr__;
  }
  this->Error = None;
  iVar4 = __isa_available;
  lVar5 = 0;
  FVar6 = *this->Value;
  *__return_storage_ptr__ = FVar6;
  if (1 < iVar4) {
    FVar6 = (FGuid)pshufb((undefined1  [16])FVar6,___xmm_0c0d0e0f08090a0b0405060700010203);
    *__return_storage_ptr__ = FVar6;
    return __return_storage_ptr__;
  }
  do {
    uVar1 = (&__return_storage_ptr__->A)[lVar5];
    (&__return_storage_ptr__->A)[lVar5] =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 4);
  return __return_storage_ptr__;
}

// AsUuid @ 1419e3050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGuid * __thiscall FCbFieldView::AsUuid(FCbFieldView *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  FGuid FVar4;
  
  lVar3 = 0;
  if ((this->TypeWithFlags & CustomByName) != Uuid) {
    this->Error = TypeError;
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
    return __return_storage_ptr__;
  }
  this->Error = None;
  iVar2 = __isa_available;
  FVar4 = *this->Value;
  *__return_storage_ptr__ = FVar4;
  if (1 < iVar2) {
    FVar4 = (FGuid)pshufb((undefined1  [16])FVar4,___xmm_0c0d0e0f08090a0b0405060700010203);
    *__return_storage_ptr__ = FVar4;
    return __return_storage_ptr__;
  }
  do {
    uVar1 = (&__return_storage_ptr__->A)[lVar3];
    (&__return_storage_ptr__->A)[lVar3] =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar3 = lVar3 + 1;
  } while (lVar3 < 4);
  return __return_storage_ptr__;
}

// CopyTo @ 1419e7160

void __thiscall FCbFieldView::CopyTo(FCbFieldView *this,FArchive *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  int iVar7;
  ulonglong uVar8;
  ECbFieldType local_res8 [8];
  
  if ((param_1->field_0x28 & 4) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                       ,0x23d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->TypeWithFlags & HasFieldName) == None) {
    uVar8 = 0;
  }
  else {
    uVar1 = this->NameLen;
    iVar3 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar7 = 0;
    if (uVar1 != 0) {
      iVar7 = iVar3;
    }
    uVar8 = (ulonglong)(uVar1 + 1 + iVar7 / 7);
  }
  uVar6 = GetValueSize(this);
  pvVar2 = this->Value;
  local_res8[0] = this->TypeWithFlags & (HasFieldName|CustomByName);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(longlong)pvVar2 - uVar8,uVar8 + uVar6);
  return;
}

// CopyTo @ 1419e7240

void __thiscall FCbFieldView::CopyTo(FCbFieldView *this,TMemoryView<void> *param_1)

{
  ECbFieldType EVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  ulong64 uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong _Size;
  ulonglong uVar11;
  
  if ((this->TypeWithFlags & HasFieldName) == None) {
    uVar10 = 0;
  }
  else {
    uVar2 = this->NameLen;
    iVar4 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar9 = 0;
    if (uVar2 != 0) {
      iVar9 = iVar4;
    }
    uVar10 = (ulonglong)(uVar2 + 1 + iVar9 / 7);
  }
  uVar8 = GetValueSize(this);
  pvVar3 = this->Value;
  _Size = uVar10 + uVar8;
  if ((param_1->Size != _Size + 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.GetSize() == sizeof(ECbFieldType) + Source.GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                         ,0x236,L"Buffer is %llu bytes but %llu is required."), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar1 = this->TypeWithFlags;
  if ((param_1->Size == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = param_1->Size;
  pvVar6 = param_1->Data;
  uVar11 = (ulonglong)(uVar8 != 0);
  *(ECbFieldType *)param_1->Data = EVar1 & (HasFieldName|CustomByName);
  if ((uVar8 - uVar11 < _Size) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (_Size != 0) {
    memcpy((void *)((longlong)pvVar6 + uVar11),(void *)((longlong)pvVar3 - uVar10),_Size);
  }
  return;
}

// CreateViewIterator @ 1419e8b10

FCbFieldViewIterator * __thiscall
FCbFieldView::CreateViewIterator(FCbFieldView *this,FCbFieldViewIterator *__return_storage_ptr__)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  void *pvVar4;
  ECbFieldError EVar5;
  undefined2 uVar6;
  ECbFieldType EVar7;
  ECbFieldType *pEVar8;
  FCbFieldView *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  FCbFieldView local_18;
  
  EVar7 = this->TypeWithFlags & CustomByName;
  if ((byte)(EVar7 - Object) < 4) {
    pbVar13 = this->Value;
    pbVar12 = pbVar13 + 1;
    uVar11 = (ulonglong)(byte)~*pbVar13 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar10 = -(int)lVar3 + 9;
    uVar11 = (ulonglong)(0xff >> ((byte)uVar10 & 0x1f) & 0xff) & (ulonglong)*pbVar13;
    switch(-(int)lVar3) {
    case 0:
      uVar11 = (ulonglong)*pbVar12;
      pbVar12 = pbVar13 + 2;
    case -1:
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar11 = uVar11 << 8 | (ulonglong)bVar2;
    case -2:
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar11 = uVar11 << 8 | (ulonglong)bVar2;
    case -3:
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar11 = uVar11 << 8 | (ulonglong)bVar2;
    case -4:
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar11 = uVar11 << 8 | (ulonglong)bVar2;
    case -5:
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar11 = uVar11 << 8 | (ulonglong)bVar2;
    case -6:
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar11 = uVar11 << 8 | (ulonglong)bVar2;
    case -7:
      uVar11 = uVar11 << 8 | (ulonglong)*pbVar12;
    }
    pbVar13 = pbVar13 + uVar10;
    if ((this->TypeWithFlags & CustomById) == Array) {
      uVar1 = (ulonglong)(byte)~*pbVar13 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar10 = 9 - (int)lVar3;
    }
    else {
      uVar10 = 0;
    }
    if (uVar10 < uVar11) {
      pEVar8 = pbVar13 + uVar10;
      if ((EVar7 - UniformObject & 0xfd) == 0) {
        EVar7 = *pEVar8;
        pEVar8 = pEVar8 + 1;
      }
      else {
        EVar7 = HasFieldType;
      }
      if (pbVar13 + uVar11 != pEVar8) {
        pFVar9 = FCbFieldView(&local_18,pEVar8,EVar7);
        EVar5 = pFVar9->Error;
        uVar6 = *(undefined2 *)&pFVar9->field_0x2;
        uVar10 = pFVar9->NameLen;
        pvVar4 = pFVar9->Value;
        __return_storage_ptr__->field_0x0 = pFVar9->TypeWithFlags;
        __return_storage_ptr__->field_0x1 = EVar5;
        *(undefined2 *)&__return_storage_ptr__->field_0x2 = uVar6;
        *(uint *)&__return_storage_ptr__->field_0x4 = uVar10;
        *(void **)&__return_storage_ptr__->field_0x8 = pvVar4;
        *(byte **)&__return_storage_ptr__->field_0x10 = pbVar13 + uVar11;
        return __return_storage_ptr__;
      }
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// Equals @ 1419f6820

bool __thiscall FCbFieldView::Equals(FCbFieldView *this,FCbFieldView *param_1)

{
  size_t _Size;
  int iVar1;
  ulong64 uVar2;
  int iVar3;
  void *_Buf2;
  uint uVar4;
  uint uVar5;
  void *_Buf1;
  
  if (((this->TypeWithFlags ^ param_1->TypeWithFlags) & (HasFieldName|CustomByName)) == None) {
    if ((char)this->TypeWithFlags < '\0') {
      uVar5 = this->NameLen;
      iVar1 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar3 = 0;
      if (uVar5 != 0) {
        iVar3 = iVar1;
      }
      uVar5 = uVar5 + 1 + iVar3 / 7;
    }
    else {
      uVar5 = 0;
    }
    uVar4 = 0;
    uVar2 = GetValueSize(this);
    _Buf1 = (void *)((longlong)this->Value - (ulonglong)uVar5);
    _Size = uVar5 + uVar2;
    if ((param_1->TypeWithFlags & HasFieldName) != None) {
      uVar5 = param_1->NameLen;
      iVar1 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar3 = 0;
      if (uVar5 != 0) {
        iVar3 = iVar1;
      }
      uVar4 = uVar5 + 1 + iVar3 / 7;
    }
    uVar2 = GetValueSize(param_1);
    _Buf2 = (void *)((longlong)param_1->Value - (ulonglong)uVar4);
    if (_Size == uVar2 + uVar4) {
      if ((_Buf1 != _Buf2) && (iVar1 = memcmp(_Buf1,_Buf2,_Size), iVar1 != 0)) {
        return false;
      }
      return true;
    }
  }
  return false;
}

// GetHash @ 1419fedb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoHash * __thiscall FCbFieldView::GetHash(FCbFieldView *this,FIoHash *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  FBlake3Hash *pFVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_7d8 [32];
  ECbFieldType local_7b8 [16];
  FBlake3Hash local_7a8;
  FBlake3 local_788;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_7d8;
  FBlake3::Reset(&local_788);
  local_7b8[0] = this->TypeWithFlags & (HasFieldName|CustomByName);
  FBlake3::Update(&local_788,local_7b8,1);
  if ((this->TypeWithFlags & HasFieldName) == None) {
    uVar6 = 0;
  }
  else {
    uVar1 = this->NameLen;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar5 = 0;
    if (uVar1 != 0) {
      iVar5 = iVar2;
    }
    uVar6 = (ulonglong)(uVar1 + 1 + iVar5 / 7);
  }
  local_7a8.Hash._8_8_ = GetValueSize(this);
  local_7a8.Hash._0_8_ = (longlong)this->Value - uVar6;
  local_7a8.Hash._8_8_ = uVar6 + local_7a8.Hash._8_8_;
  FBlake3::Update(&local_788,(TMemoryView<void_const_> *)&local_7a8);
  pFVar4 = FBlake3::Finalize(&local_788,&local_7a8);
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
  uVar3 = *(undefined8 *)(pFVar4->Hash + 8);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)pFVar4->Hash;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar3;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(pFVar4->Hash + 0x10);
  return __return_storage_ptr__;
}

// GetSize @ 141a03930

ulong64 __thiscall FCbFieldView::GetSize(FCbFieldView *this)

{
  int iVar1;
  ulong64 uVar2;
  int iVar3;
  uint uVar4;
  
  if ((this->TypeWithFlags & HasFieldName) == None) {
    uVar4 = 0;
  }
  else {
    uVar4 = this->NameLen;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    iVar3 = 0;
    if (uVar4 != 0) {
      iVar3 = iVar1;
    }
    uVar4 = uVar4 + 1 + iVar3 / 7;
  }
  uVar2 = GetValueSize(this);
  return uVar2 + 1 + (ulonglong)uVar4;
}

// GetValueSize @ 141a047d0

ulong64 __thiscall FCbFieldView::GetValueSize(FCbFieldView *this)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  switch(this->TypeWithFlags & CustomByName) {
  default:
    return 0;
  case Object:
  case UniformObject:
  case Array:
  case UniformArray:
  case Binary:
  case String:
  case CustomById:
  case CustomByName:
    pbVar2 = this->Value;
    pbVar5 = pbVar2 + 1;
    uVar4 = (ulonglong)(byte)~*pbVar2 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    break;
  case IntegerPositive:
  case IntegerNegative:
    uVar4 = (ulonglong)(byte)~*(byte *)this->Value * 2 + 1;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    return (ulonglong)(9 - (int)lVar3);
  case Float32:
    return 4;
  case Float64:
  case DateTime:
  case TimeSpan:
    return 8;
  case ObjectAttachment:
  case BinaryAttachment:
  case Hash:
    return 0x14;
  case Uuid:
    return 0x10;
  case ObjectId:
    return 0xc;
  }
  uVar6 = -(int)lVar3 + 9;
  uVar4 = (ulonglong)(0xff >> ((byte)uVar6 & 0x1f) & 0xff) & (ulonglong)*pbVar2;
  switch(-(int)lVar3) {
  case 0:
    uVar4 = (ulonglong)*pbVar5;
    pbVar5 = pbVar2 + 2;
  case -1:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -2:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -3:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -4:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -5:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -6:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -7:
    uVar4 = uVar4 << 8 | (ulonglong)*pbVar5;
  default:
    return uVar6 + uVar4;
  }
}

// GetView @ 141a04a40

TMemoryView<void_const_> * __thiscall
FCbFieldView::GetView(FCbFieldView *this,TMemoryView<void_const_> *__return_storage_ptr__)

{
  int iVar1;
  ulong64 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = this->TypeWithFlags >> 6 & 1;
  if ((char)this->TypeWithFlags < '\0') {
    uVar5 = this->NameLen;
    iVar1 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    iVar4 = 0;
    if (uVar5 != 0) {
      iVar4 = iVar1;
    }
    uVar5 = uVar5 + 1 + iVar4 / 7;
  }
  else {
    uVar5 = 0;
  }
  uVar2 = GetValueSize(this);
  __return_storage_ptr__->Data =
       (void *)((longlong)this->Value + (-(ulonglong)uVar3 - (ulonglong)uVar5));
  __return_storage_ptr__->Size = (uVar5 + uVar3) + uVar2;
  return __return_storage_ptr__;
}

// GetViewNoType @ 141a04ae0

TMemoryView<void_const_> * __thiscall
FCbFieldView::GetViewNoType(FCbFieldView *this,TMemoryView<void_const_> *__return_storage_ptr__)

{
  int iVar1;
  ulong64 uVar2;
  int iVar3;
  uint uVar4;
  
  if ((this->TypeWithFlags & HasFieldName) == None) {
    uVar4 = 0;
  }
  else {
    uVar4 = this->NameLen;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    iVar3 = 0;
    if (uVar4 != 0) {
      iVar3 = iVar1;
    }
    uVar4 = uVar4 + 1 + iVar3 / 7;
  }
  uVar2 = GetValueSize(this);
  __return_storage_ptr__->Data = (void *)((longlong)this->Value - (ulonglong)uVar4);
  __return_storage_ptr__->Size = uVar2 + uVar4;
  return __return_storage_ptr__;
}

// IterateAttachments @ 141a078f0

void __thiscall
FCbFieldView::IterateAttachments
          (FCbFieldView *this,TFunctionRef<void___cdecl(FCbFieldView)> *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  TCbFieldIterator<FCbFieldView> *this_00;
  FCbFieldView local_38;
  FCbFieldViewIterator local_28;
  
  switch(this->TypeWithFlags & CustomByName) {
  case Object:
  case UniformObject:
  case Array:
  case UniformArray:
    local_38.TypeWithFlags = this->TypeWithFlags;
    local_38.Error = this->Error;
    local_38._2_2_ = *(undefined2 *)&this->field_0x2;
    local_38.NameLen = this->NameLen;
    local_38.Value = this->Value;
    uVar1._0_1_ = param_1->field_0x0;
    uVar1._1_1_ = param_1->field_0x1;
    uVar1._2_2_ = *(undefined2 *)&param_1->field_0x2;
    uVar1._4_4_ = *(uint *)&param_1->field_0x4;
    pvVar2 = *(void **)&param_1->field_0x8;
    this_00 = (TCbFieldIterator<FCbFieldView> *)CreateViewIterator(&local_38,&local_28);
    local_38._0_8_ = uVar1;
    local_38.Value = pvVar2;
    TCbFieldIterator<FCbFieldView>::IterateRangeAttachments
              (this_00,(TFunctionRef<void___cdecl(FCbFieldView)> *)&local_38);
    return;
  case Binary:
  case String:
  case IntegerPositive:
  case IntegerNegative:
  case Float32:
  case Float64:
  case BoolFalse:
  case BoolTrue:
    goto switchD_141a07927_default;
  case ObjectAttachment:
  case BinaryAttachment:
    local_38.TypeWithFlags = this->TypeWithFlags;
    local_38.Error = this->Error;
    local_38._2_2_ = *(undefined2 *)&this->field_0x2;
    local_38.NameLen = this->NameLen;
    local_38.Value = this->Value;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
switchD_141a07927_default:
    return;
  default:
    return;
  }
}

// AsInt16 @ 141a763d0

short __thiscall FCbFieldView::AsInt16(FCbFieldView *this,short param_1)

{
  ulong64 uVar1;
  
  uVar1 = AsInteger(this,(longlong)param_1,(FIntegerParams)0x1f);
  return (short)uVar1;
}

// AsInt32 @ 141a763f0

int __thiscall FCbFieldView::AsInt32(FCbFieldView *this,int param_1)

{
  ulong64 uVar1;
  
  uVar1 = AsInteger(this,(longlong)param_1,(FIntegerParams)0x3f);
  return (int)uVar1;
}

// AsInt64 @ 141a76410

long64 __thiscall FCbFieldView::AsInt64(FCbFieldView *this,long64 param_1)

{
  ulong64 uVar1;
  
  uVar1 = AsInteger(this,param_1,(FIntegerParams)0x7f);
  return uVar1;
}

// AsInt8 @ 141a76430

schar __thiscall FCbFieldView::AsInt8(FCbFieldView *this,schar param_1)

{
  ulong64 uVar1;
  
  uVar1 = AsInteger(this,(longlong)param_1,(FIntegerParams)0xf);
  return (schar)uVar1;
}

// AsUInt16 @ 141a767b0

ushort __thiscall FCbFieldView::AsUInt16(FCbFieldView *this,ushort param_1)

{
  ulong64 uVar1;
  
  uVar1 = AsInteger(this,(ulonglong)param_1,(FIntegerParams)0x20);
  return (ushort)uVar1;
}

// AsUInt32 @ 141a767d0

uint __thiscall FCbFieldView::AsUInt32(FCbFieldView *this,uint param_1)

{
  ulong64 uVar1;
  
  uVar1 = AsInteger(this,(ulonglong)param_1,(FIntegerParams)0x40);
  return (uint)uVar1;
}

// AsUInt64 @ 141a767f0

ulong64 __thiscall FCbFieldView::AsUInt64(FCbFieldView *this,ulong64 param_1)

{
  ulong64 uVar1;
  
  uVar1 = AsInteger(this,param_1,(FIntegerParams)0x80);
  return uVar1;
}

// AsUInt8 @ 141a76810

uchar __thiscall FCbFieldView::AsUInt8(FCbFieldView *this,uchar param_1)

{
  ulong64 uVar1;
  
  uVar1 = AsInteger(this,(ulonglong)param_1,(FIntegerParams)0x10);
  return (uchar)uVar1;
}

// IsArray @ 141a84790

bool __thiscall FCbFieldView::IsArray(FCbFieldView *this)

{
  return (this->TypeWithFlags & CustomById) == Array;
}

// IsAttachment @ 141a847b0

bool __thiscall FCbFieldView::IsAttachment(FCbFieldView *this)

{
  return (this->TypeWithFlags & CustomById) == ObjectAttachment;
}

// IsBool @ 141a847d0

bool __thiscall FCbFieldView::IsBool(FCbFieldView *this)

{
  return (this->TypeWithFlags & CustomById) == BoolFalse;
}

// IsCustomById @ 141a847f0

bool __thiscall FCbFieldView::IsCustomById(FCbFieldView *this)

{
  return (this->TypeWithFlags & CustomByName) == CustomById;
}

// IsCustomByName @ 141a84810

bool __thiscall FCbFieldView::IsCustomByName(FCbFieldView *this)

{
  return (this->TypeWithFlags & CustomByName) == CustomByName;
}

// IsInteger @ 141a849e0

bool __thiscall FCbFieldView::IsInteger(FCbFieldView *this)

{
  return (this->TypeWithFlags & CustomById) == IntegerPositive;
}

// IsObject @ 141a84c60

bool __thiscall FCbFieldView::IsObject(FCbFieldView *this)

{
  return (this->TypeWithFlags & CustomById) == Object;
}

