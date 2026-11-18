// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// ComputeBufferSize @ 14e711b80

long64 __thiscall UE::Interchange::FImportSlicedImage::ComputeBufferSize(FImportSlicedImage *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar2 = 1;
  if (this->bIsVolume == false) {
    iVar2 = this->NumSlice;
  }
  uVar3 = 0;
  uVar5 = uVar3;
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    do {
      lVar1 = (**(code **)(this->_padding_ + 8))(this,uVar5);
      uVar3 = uVar3 + lVar1;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)((longlong)&this->_padding_ + 4));
  }
  return (longlong)iVar2 * uVar3;
}

// GetMipData @ 14e718fd0

uchar * __thiscall
UE::Interchange::FImportSlicedImage::GetMipData(FImportSlicedImage *this,int param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uchar *puVar8;
  uchar *puVar7;
  
  iVar4 = 1;
  if (this->bIsVolume == false) {
    iVar4 = this->NumSlice;
  }
  puVar7 = (uchar *)0x0;
  puVar8 = puVar7;
  if (0 < param_1) {
    do {
      lVar5 = (**(code **)(this->_padding_ + 8))(this,puVar7);
      uVar6 = (int)puVar7 + 1;
      puVar7 = (uchar *)(ulonglong)uVar6;
      puVar8 = puVar8 + lVar5 * iVar4;
    } while ((int)uVar6 < param_1);
  }
  if (param_2 != -1) {
    if ((this->bIsVolume != false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsVolume",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeSlicedTexturePayloadData.cpp"
                           ,0x22,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar8 = (uchar *)(*pcVar2)();
      return puVar8;
    }
    lVar5 = (**(code **)(this->_padding_ + 8))(this,puVar7);
    puVar8 = puVar8 + lVar5 * param_2;
  }
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (puVar8 < (uchar *)plVar1[2]) goto LAB_14e7190c9;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("RawData.GetSize() > uint64(Offset)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeSlicedTexturePayloadData.cpp"
                     ,0x26,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    puVar8 = (uchar *)(*pcVar2)();
    return puVar8;
  }
LAB_14e7190c9:
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    return puVar8;
  }
  if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return puVar8 + plVar1[1];
}

// GetMipData @ 14e719110

uchar * __thiscall
UE::Interchange::FImportSlicedImage::GetMipData(FImportSlicedImage *this,int param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uchar *puVar8;
  uchar *puVar7;
  
  iVar4 = 1;
  if (this->bIsVolume == false) {
    iVar4 = this->NumSlice;
  }
  puVar7 = (uchar *)0x0;
  puVar8 = puVar7;
  if (0 < param_1) {
    do {
      lVar5 = (**(code **)(this->_padding_ + 8))(this,puVar7);
      uVar6 = (int)puVar7 + 1;
      puVar7 = (uchar *)(ulonglong)uVar6;
      puVar8 = puVar8 + lVar5 * iVar4;
    } while ((int)uVar6 < param_1);
  }
  if (param_2 != -1) {
    if ((this->bIsVolume != false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsVolume",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeSlicedTexturePayloadData.cpp"
                           ,0x22,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar8 = (uchar *)(*pcVar2)();
      return puVar8;
    }
    lVar5 = (**(code **)(this->_padding_ + 8))(this,puVar7);
    puVar8 = puVar8 + lVar5 * param_2;
  }
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (puVar8 < (uchar *)plVar1[2]) goto LAB_14e719209;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("RawData.GetSize() > uint64(Offset)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeSlicedTexturePayloadData.cpp"
                     ,0x26,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    puVar8 = (uchar *)(*pcVar2)();
    return puVar8;
  }
LAB_14e719209:
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    return puVar8;
  }
  if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return puVar8 + plVar1[1];
}

// GetMipSize @ 14e719310

long64 __thiscall
UE::Interchange::FImportSlicedImage::GetMipSize(FImportSlicedImage *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  long64 lVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar6 = FTextureSource::GetBytesPerPixel
                    (*(ETextureSourceFormat *)((longlong)&this->_padding_ + 4));
  bVar8 = (byte)param_1;
  iVar3 = (int)this->_padding_ >> (bVar8 & 0x1f);
  iVar12 = 1;
  if (1 < iVar3) {
    iVar12 = iVar3;
  }
  iVar4 = *(int *)((longlong)&this->_padding_ + 4) >> (bVar8 & 0x1f);
  iVar3 = 1;
  if (1 < iVar4) {
    iVar3 = iVar4;
  }
  iVar4 = 1;
  if ((this->bIsVolume != false) && (iVar5 = this->NumSlice >> (bVar8 & 0x1f), iVar4 = 1, 1 < iVar5)
     ) {
    iVar4 = iVar5;
  }
  uVar10 = 0;
  uVar14 = (ulonglong)iVar12;
  uVar13 = (ulonglong)iVar3;
  uVar15 = uVar10;
  if (iVar3 == 0) {
LAB_14e7193da:
    uVar14 = (ulonglong)iVar4;
    uVar13 = uVar10;
    if (uVar14 != 0) {
      uVar13 = uVar15;
      if ((longlong)uVar15 < 0) {
        uVar13 = -uVar15;
      }
      uVar11 = uVar14;
      if ((longlong)uVar14 < 0) {
        uVar11 = -uVar14;
      }
      uVar9 = (ulonglong)(byte)((byte)(uVar15 >> 0x3f) ^ 1);
      if (-1 < (longlong)uVar14) {
        uVar9 = uVar15 >> 0x3f;
      }
      if ((uVar9 + 0x7fffffffffffffff) / uVar11 < uVar13) goto LAB_14e7194ac;
      uVar13 = uVar15 * uVar14;
    }
    if (uVar6 == 0) {
      bVar2 = true;
      uVar6 = uVar10;
      goto LAB_14e7194e4;
    }
    uVar15 = uVar13;
    if ((longlong)uVar13 < 0) {
      uVar15 = -uVar13;
    }
    uVar14 = uVar6;
    if ((longlong)uVar6 < 0) {
      uVar14 = -uVar6;
    }
    uVar11 = (ulonglong)(byte)((byte)(uVar13 >> 0x3f) ^ 1);
    if (-1 < (longlong)uVar6) {
      uVar11 = uVar13 >> 0x3f;
    }
    if (uVar15 <= (uVar11 + 0x7fffffffffffffff) / uVar14) {
      uVar6 = uVar6 * uVar13;
      bVar2 = true;
      goto LAB_14e7194e4;
    }
  }
  else {
    uVar15 = uVar14;
    if ((longlong)uVar14 < 0) {
      uVar15 = -uVar14;
    }
    uVar11 = uVar13;
    if ((longlong)uVar13 < 0) {
      uVar11 = -uVar13;
    }
    uVar9 = (ulonglong)(byte)((byte)(iVar12 >> 0x1f) >> 7 ^ 1);
    if (-1 < (longlong)uVar13) {
      uVar9 = uVar14 >> 0x3f;
    }
    if (uVar15 <= (uVar9 + 0x7fffffffffffffff) / uVar11) {
      uVar15 = uVar13 * uVar14;
      goto LAB_14e7193da;
    }
  }
LAB_14e7194ac:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MipSize.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeSlicedTexturePayloadData.cpp"
                     ,0x3a,
                     L"Invalid (overflowing) mip sizes made it in to FImportSlicedImage::GetMipSize! Check import locations for mip size validation"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar7 = (*pcVar1)();
    return lVar7;
  }
  uVar6 = 0;
  bVar2 = false;
LAB_14e7194e4:
  if (bVar2) {
    uVar10 = uVar6;
  }
  return uVar10;
}

// Init @ 14e7233d0

void __thiscall
UE::Interchange::FImportSlicedImage::Init
          (FImportSlicedImage *this,int param_1,int param_2,int param_3,int param_4,
          ETextureSourceFormat param_5,bool param_6)

{
  longlong lVar1;
  FUniqueBuffer FVar2;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8 [4];
  
  *(int *)((longlong)&this->_padding_ + 4) = param_4;
  *(ETextureSourceFormat *)((longlong)&this->_padding_ + 4) = param_5;
  *(bool *)&this->_padding_ = param_6;
  lVar1 = this->_padding_;
  this->NumSlice = param_3;
  *(int *)&this->_padding_ = param_1;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  (**(code **)(lVar1 + 0x10))();
  FVar2 = FUniqueBuffer::Alloc((ulong64)local_res8);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->_padding_,
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar2.Owner.Owner);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_res8);
  return;
}

// InitVolume @ 14e723530

void __thiscall
UE::Interchange::FImportSlicedImage::InitVolume
          (FImportSlicedImage *this,int param_1,int param_2,int param_3,int param_4,
          ETextureSourceFormat param_5,bool param_6)

{
  longlong lVar1;
  FUniqueBuffer FVar2;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8 [4];
  
  *(int *)((longlong)&this->_padding_ + 4) = param_4;
  *(ETextureSourceFormat *)((longlong)&this->_padding_ + 4) = param_5;
  *(bool *)&this->_padding_ = param_6;
  lVar1 = this->_padding_;
  this->bIsVolume = true;
  this->NumSlice = param_3;
  *(int *)&this->_padding_ = param_1;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  (**(code **)(lVar1 + 0x10))();
  FVar2 = FUniqueBuffer::Alloc((ulong64)local_res8);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->_padding_,
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar2.Owner.Owner);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_res8);
  return;
}

// IsValid @ 14e723a90

bool __thiscall UE::Interchange::FImportSlicedImage::IsValid(FImportSlicedImage *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (0 < this->NumSlice) {
    if ((int)this->_padding_ == 0) {
      lVar2 = (**(code **)(this->_padding_ + 0x10))();
      plVar1 = (longlong *)this->_padding_;
      if (plVar1 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar1 + 8))(plVar1);
        }
        lVar3 = plVar1[2];
      }
      bVar4 = lVar2 == lVar3;
    }
    else {
      bVar4 = this->_padding_ != 0;
    }
    if ((((0 < (int)this->_padding_) && (0 < *(int *)((longlong)&this->_padding_ + 4))) &&
        (0 < *(int *)((longlong)&this->_padding_ + 4))) &&
       ((*(int *)((longlong)&this->_padding_ + 4) != 0 && (bVar4)))) {
      return true;
    }
  }
  return false;
}

