// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 4

// GetGammaSpace @ 14235c880

EGammaSpace __thiscall FImageInfo::GetGammaSpace(FImageInfo *this)

{
  code *pcVar1;
  bool bVar2;
  EGammaSpace EVar3;
  
  if (((this->Format != G8) && (this->Format != BGRA8)) && (this->GammaSpace != Linear)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetFormatNeedsGammaSpace(Format) || GammaSpace == EGammaSpace::Linear",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                       ,0xe4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return this->GammaSpace;
  }
  return this->GammaSpace;
}

// GetImageSizeBytes @ 14235c930

long64 __thiscall FImageInfo::GetImageSizeBytes(FImageInfo *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long64 lVar4;
  
  iVar1 = this->SizeY;
  iVar2 = this->NumSlices;
  iVar3 = this->SizeX;
  lVar4 = ERawImageFormat::GetBytesPerPixel(this->Format);
  return lVar4 * (longlong)iVar2 * (longlong)iVar1 * (longlong)iVar3;
}

// ImageInfoFromCompactBinary @ 14235e1c0

bool __thiscall FImageInfo::ImageInfoFromCompactBinary(FImageInfo *this,FCbObject *param_1)

{
  ulonglong *puVar1;
  atomic<unsigned___int64> *paVar2;
  ulonglong uVar3;
  atomic<unsigned___int64> aVar4;
  FSharedBuffer FVar5;
  bool bVar6;
  ulong64 uVar7;
  FCbField *pFVar8;
  TStringView<char8_t> *pTVar9;
  longlong local_res18;
  char *local_78;
  void *pvStack_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  TCbBuffer<FCbFieldView> local_58;
  undefined1 local_40 [24];
  
  pvStack_70 = (void *)CONCAT44(pvStack_70._4_4_,7);
  local_78 = "Version";
  local_68 = (undefined1  [8])0x150617b10;
  uStack_60 = pvStack_70;
  FCbObjectView::FindView
            ((FCbObjectView *)param_1,(FCbFieldView *)&local_78,(TStringView<char8_t> *)local_68);
  if (((ulonglong)local_78 & 0x1f) == 0) {
    local_58._padding_ = 0;
    local_58._padding_ = 0;
    local_58.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  }
  else {
    local_res18 = *(longlong *)&param_1->field_0x10;
    if (local_res18 != 0) {
      LOCK();
      puVar1 = (ulonglong *)(local_res18 + 0x18);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(local_res18 + 0x18) = *(longlong *)(local_res18 + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
              (&local_58,(FCbFieldView *)&local_78,(FSharedBuffer)&local_res18);
  }
  uVar7 = FCbFieldView::AsInteger((FCbFieldView *)&local_58,0,(FIntegerParams)0x40);
  FVar5.Owner.Owner = local_58.Buffer.Owner.Owner;
  if (local_58.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar2 = (atomic<unsigned___int64> *)((longlong)local_58.Buffer.Owner.Owner + 0x18);
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
    UNLOCK();
    if ((aVar4._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_58.Buffer.Owner.Owner + 0x10))(local_58.Buffer.Owner.Owner);
      *(void **)((longlong)FVar5.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar5.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar2 = (atomic<unsigned___int64> *)((longlong)FVar5.Owner.Owner + 0x18);
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar5.Owner.Owner)(FVar5.Owner.Owner,1);
      }
    }
  }
  if ((int)uVar7 == 1) {
    pvStack_70 = (void *)CONCAT44(pvStack_70._4_4_,5);
    local_78 = "SizeX";
    local_68 = (undefined1  [8])0x1508bd580;
    uStack_60 = pvStack_70;
    FCbObjectView::FindView
              ((FCbObjectView *)param_1,(FCbFieldView *)&local_78,(TStringView<char8_t> *)local_68);
    if (((ulonglong)local_78 & 0x1f) == 0) {
      local_58._padding_ = 0;
      local_58._padding_ = 0;
      local_58.Buffer.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    }
    else {
      local_res18 = *(longlong *)&param_1->field_0x10;
      if (local_res18 != 0) {
        LOCK();
        puVar1 = (ulonglong *)(local_res18 + 0x18);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 0) {
          LOCK();
          *(longlong *)(local_res18 + 0x18) = *(longlong *)(local_res18 + 0x18) + 0x40000000;
          UNLOCK();
        }
      }
      TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                (&local_58,(FCbFieldView *)&local_78,(FSharedBuffer)&local_res18);
    }
    uVar7 = FCbFieldView::AsInteger((FCbFieldView *)&local_58,0,(FIntegerParams)0x3f);
    FVar5.Owner.Owner = local_58.Buffer.Owner.Owner;
    this->SizeX = (int)uVar7;
    if (local_58.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = (atomic<unsigned___int64> *)((longlong)local_58.Buffer.Owner.Owner + 0x18);
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_58.Buffer.Owner.Owner + 0x10))(local_58.Buffer.Owner.Owner);
        *(void **)((longlong)FVar5.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar5.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar2 = (atomic<unsigned___int64> *)((longlong)FVar5.Owner.Owner + 0x18);
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar5.Owner.Owner)(FVar5.Owner.Owner,1);
        }
      }
    }
    pvStack_70 = (void *)CONCAT44(pvStack_70._4_4_,5);
    local_78 = "SizeY";
    local_68 = (undefined1  [8])0x1508bd588;
    uStack_60 = pvStack_70;
    FCbObjectView::FindView
              ((FCbObjectView *)param_1,(FCbFieldView *)&local_78,(TStringView<char8_t> *)local_68);
    if (((ulonglong)local_78 & 0x1f) == 0) {
      local_58._padding_ = 0;
      local_58._padding_ = 0;
      local_58.Buffer.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    }
    else {
      local_res18 = *(longlong *)&param_1->field_0x10;
      if (local_res18 != 0) {
        LOCK();
        puVar1 = (ulonglong *)(local_res18 + 0x18);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 0) {
          LOCK();
          *(longlong *)(local_res18 + 0x18) = *(longlong *)(local_res18 + 0x18) + 0x40000000;
          UNLOCK();
        }
      }
      TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                (&local_58,(FCbFieldView *)&local_78,(FSharedBuffer)&local_res18);
    }
    uVar7 = FCbFieldView::AsInteger((FCbFieldView *)&local_58,0,(FIntegerParams)0x3f);
    FVar5.Owner.Owner = local_58.Buffer.Owner.Owner;
    this->SizeY = (int)uVar7;
    if (local_58.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = (atomic<unsigned___int64> *)((longlong)local_58.Buffer.Owner.Owner + 0x18);
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_58.Buffer.Owner.Owner + 0x10))(local_58.Buffer.Owner.Owner);
        *(void **)((longlong)FVar5.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar5.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar2 = (atomic<unsigned___int64> *)((longlong)FVar5.Owner.Owner + 0x18);
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar5.Owner.Owner)(FVar5.Owner.Owner,1);
        }
      }
    }
    pvStack_70._0_4_ = 9;
    local_78 = "NumSlices";
    local_68 = (undefined1  [8])0x1508bd590;
    uStack_60._0_4_ = 9;
    uStack_60._4_4_ = pvStack_70._4_4_;
    pFVar8 = FCbObject::operator[](param_1,(FCbField *)&local_58,(TStringView<char8_t> *)local_68);
    uVar7 = FCbFieldView::AsInteger((FCbFieldView *)pFVar8,0,(FIntegerParams)0x3f);
    this->NumSlices = (int)uVar7;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_58.Buffer.Owner);
    pvStack_70._0_4_ = 10;
    local_78 = "GammaSpace";
    local_68 = (undefined1  [8])0x1508bd5a0;
    uStack_60._0_4_ = 10;
    uStack_60._4_4_ = pvStack_70._4_4_;
    pFVar8 = FCbObject::operator[](param_1,(FCbField *)&local_58,(TStringView<char8_t> *)local_68);
    uVar7 = FCbFieldView::AsInteger((FCbFieldView *)pFVar8,0,(FIntegerParams)0x10);
    this->GammaSpace = (EGammaSpace)uVar7;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_58.Buffer.Owner);
    pvStack_70 = (void *)CONCAT44(pvStack_70._4_4_,6);
    local_78 = "Format";
    local_68 = (undefined1  [8])0x1506acf44;
    uStack_60 = pvStack_70;
    pFVar8 = FCbObject::operator[](param_1,(FCbField *)local_40,(TStringView<char8_t> *)local_68);
    pvStack_70 = (void *)0x0;
    local_78 = (char *)0x0;
    local_68 = (undefined1  [8])0x0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    pTVar9 = FCbFieldView::AsString
                       ((FCbFieldView *)pFVar8,(TStringView<char8_t> *)&local_58,
                        (TStringView<char8_t> *)local_68);
    local_68 = (undefined1  [8])pTVar9->DataPtr;
    uStack_60._0_4_ = pTVar9->Size;
    uStack_60._4_4_ = *(undefined4 *)&pTVar9->field_0xc;
    bVar6 = ERawImageFormat::GetFormatFromString((TStringView<char8_t> *)local_68,&this->Format);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_40 + 0x10));
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// ImageInfoToCompactBinary @ 14235e5d0

void __thiscall FImageInfo::ImageInfoToCompactBinary(FImageInfo *this,FCbObject *param_1)

{
  EGammaSpace EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  FCbFieldIterator *this_00;
  int iVar6;
  undefined8 local_res8;
  undefined4 uStack_19c;
  FCbWriter local_198;
  FCbObjectView local_170;
  FSharedBuffer local_160;
  TCbBuffer<FCbObjectView> local_158;
  FCbObjectView local_140;
  undefined8 local_130;
  char *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  char *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  char *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  char *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TStringView<char8_t> local_d8;
  TStringView<char8_t> local_c8;
  TStringView<char8_t> local_b8;
  TStringView<char8_t> local_a8;
  TStringView<char8_t> local_98;
  TStringView<char8_t> local_88;
  TStringView<char8_t> local_78;
  FCbObjectView local_68;
  undefined4 local_4c;
  undefined1 local_48 [48];
  
  FCbWriter::FCbWriter(&local_198);
  FCbWriter::BeginObject(&local_198);
  local_d8._12_4_ = uStack_19c;
  local_d8.Size = 7;
  local_d8.DataPtr = "Version";
  FCbWriter::SetName(&local_198,&local_d8);
  FCbWriter::AddInteger(&local_198,1);
  iVar2 = this->SizeX;
  local_128 = "SizeX";
  iVar6 = 5;
  uStack_120 = 5;
  local_c8._12_4_ = uStack_11c;
  local_c8.Size = 5;
  local_c8.DataPtr = "SizeX";
  FCbWriter::SetName(&local_198,&local_c8);
  FCbWriter::AddInteger(&local_198,iVar2);
  iVar2 = this->SizeY;
  local_118 = "SizeY";
  uStack_110 = 5;
  local_b8._12_4_ = uStack_10c;
  local_b8.Size = 5;
  local_b8.DataPtr = "SizeY";
  FCbWriter::SetName(&local_198,&local_b8);
  FCbWriter::AddInteger(&local_198,iVar2);
  iVar2 = this->NumSlices;
  local_108 = "NumSlices";
  uStack_100 = 9;
  local_a8._12_4_ = uStack_fc;
  local_a8.Size = 9;
  local_a8.DataPtr = "NumSlices";
  FCbWriter::SetName(&local_198,&local_a8);
  FCbWriter::AddInteger(&local_198,iVar2);
  EVar1 = this->GammaSpace;
  local_f8 = "GammaSpace";
  uStack_f0 = 10;
  local_98._12_4_ = uStack_ec;
  local_98.Size = 10;
  local_98.DataPtr = "GammaSpace";
  FCbWriter::SetName(&local_198,&local_98);
  FCbWriter::AddInteger(&local_198,(uint)EVar1);
  switch(this->Format) {
  case G8:
    pcVar5 = "G8";
    iVar6 = 2;
    break;
  case BGRA8:
    pcVar5 = "BGRA8";
    break;
  case BGRE8:
    pcVar5 = "BGRE8";
    break;
  case RGBA16:
    pcVar5 = "RGBA16";
    iVar6 = 6;
    break;
  case RGBA16F:
    pcVar5 = "RGBA16F";
    goto LAB_14235e7e8;
  case RGBA32F:
    pcVar5 = "RGBA32F";
    goto LAB_14235e7e8;
  case G16:
    pcVar5 = "G16";
    iVar6 = 3;
    break;
  case R16F:
    pcVar5 = "R16F";
    iVar6 = 4;
    break;
  case R32F:
    pcVar5 = "R32F";
    iVar6 = 4;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x55c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar5 = "invalid";
LAB_14235e7e8:
    iVar6 = 7;
  }
  local_e8 = "Format";
  uStack_e0 = 6;
  local_88._12_4_ = uStack_dc;
  local_88.Size = 6;
  local_88.DataPtr = "Format";
  FCbWriter::SetName(&local_198,&local_88);
  local_78._12_4_ = local_4c;
  local_78.Size = iVar6;
  local_78.DataPtr = (uchar *)pcVar5;
  FCbWriter::AddString(&local_198,&local_78);
  FCbWriter::EndObject(&local_198);
  this_00 = FCbWriter::Save(&local_198,(FCbFieldIterator *)local_48);
  FCbFieldView::AsObjectView((FCbFieldView *)this_00,&local_68);
  if (this_00->field_0x1 == '\0') {
    local_res8 = *(undefined8 *)&this_00->field_0x10;
    *(undefined8 *)&this_00->field_0x10 = 0;
    TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
              (&local_158,&local_68,(FSharedBuffer)&local_res8);
    local_160.Owner.Owner = local_158.Buffer.Owner.Owner;
    local_158.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    local_170._0_4_ = (undefined4)local_158._padding_;
    local_170._4_4_ = local_158._padding_._4_4_;
    local_170._8_4_ = (undefined4)local_158._padding_;
    local_170._12_4_ = local_158._padding_._4_4_;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_158.Buffer.Owner);
  }
  else {
    local_140._0_8_ = 0;
    local_140._8_8_ = 0;
    local_130 = 0;
    FCbObjectView::FCbObjectView(&local_140);
    local_130 = 0;
    local_160.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    local_170._0_4_ = local_140._0_4_;
    local_170._4_4_ = local_140._4_4_;
    local_170._8_4_ = local_140._8_4_;
    local_170._12_4_ = local_140._12_4_;
    local_158._padding_._0_4_ = local_140._0_4_;
    local_158._padding_._4_4_ = local_140._4_4_;
    local_158._padding_._0_4_ = local_140._8_4_;
    local_158._padding_._4_4_ = local_140._12_4_;
  }
  *(undefined4 *)param_1 = (undefined4)local_158._padding_;
  *(undefined4 *)&param_1->field_0x4 = local_158._padding_._4_4_;
  *(undefined4 *)&param_1->field_0x8 = (undefined4)local_158._padding_;
  *(undefined4 *)&param_1->field_0xc = local_158._padding_._4_4_;
  FSharedBuffer::operator=((FSharedBuffer *)&param_1->field_0x10,&local_160);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_160.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_48 + 0x10));
  FCbWriter::~FCbWriter(&local_198);
  return;
}

