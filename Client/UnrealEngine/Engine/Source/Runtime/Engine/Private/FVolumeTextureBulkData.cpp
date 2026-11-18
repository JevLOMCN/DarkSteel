// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FVolumeTextureBulkData @ 148446d50

void __thiscall FVolumeTextureBulkData::~FVolumeTextureBulkData(FVolumeTextureBulkData *this)

{
  FVolumeTextureBulkData *pFVar1;
  void **ppvVar2;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7FVolumeTextureBulkData__6B_;
  lVar3 = 0xf;
  pFVar1 = this;
  do {
    ppvVar2 = pFVar1->MipData;
    if (*ppvVar2 != (void *)0x0) {
      FMemory::Free(*ppvVar2);
      *ppvVar2 = (void *)0x0;
    }
    pFVar1->MipSize[0] = 0;
    lVar3 = lVar3 + -1;
    pFVar1 = (FVolumeTextureBulkData *)ppvVar2;
  } while (lVar3 != 0);
  this->_padding_ = (longlong)&___7FResourceBulkDataInterface__6B_;
  return;
}

// Discard @ 1484627b0

void __thiscall FVolumeTextureBulkData::Discard(FVolumeTextureBulkData *this)

{
  void **ppvVar1;
  longlong lVar2;
  
  lVar2 = 0xf;
  do {
    ppvVar1 = this->MipData;
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free(*ppvVar1);
      *ppvVar1 = (void *)0x0;
    }
    this->MipSize[0] = 0;
    lVar2 = lVar2 + -1;
    this = (FVolumeTextureBulkData *)ppvVar1;
  } while (lVar2 != 0);
  return;
}

// GetResourceBulkData @ 14846de90

void * __thiscall FVolumeTextureBulkData::GetResourceBulkData(FVolumeTextureBulkData *this)

{
  return this->MipData[this->FirstMipIdx];
}

// GetResourceBulkDataSize @ 14846deb0

uint __thiscall FVolumeTextureBulkData::GetResourceBulkDataSize(FVolumeTextureBulkData *this)

{
  return (uint)this->MipSize[this->FirstMipIdx];
}

// MergeMips @ 1484799e0

void __thiscall FVolumeTextureBulkData::MergeMips(FVolumeTextureBulkData *this,int param_1)

{
  code *pcVar1;
  FVolumeTextureBulkData *pFVar2;
  bool bVar3;
  long64 *plVar4;
  void *pvVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  longlong lVar8;
  void **ppvVar9;
  void *_Dst;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulong64 uVar13;
  
  lVar8 = (longlong)param_1;
  if (0xe < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumMips < MAX_TEXTURE_MIP_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture3DResource.cpp"
                       ,0x21,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar11 = (longlong)this->FirstMipIdx;
  uVar13 = 0;
  if (lVar8 <= lVar11) goto LAB_148479a95;
  uVar6 = uVar13;
  uVar7 = uVar13;
  lVar12 = lVar11;
  if (lVar8 - lVar11 < 2) {
LAB_148479a86:
    uVar13 = this->MipSize[lVar12];
  }
  else {
    plVar4 = this->MipSize + lVar11 + 1;
    lVar10 = ((lVar8 - lVar11) - 2U >> 1) + 1;
    lVar12 = lVar11 + lVar10 * 2;
    do {
      uVar6 = uVar6 + (longlong)plVar4[-1];
      uVar7 = uVar7 + *plVar4;
      plVar4 = plVar4 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if (lVar12 < lVar8) goto LAB_148479a86;
  }
  uVar13 = uVar13 + uVar7 + uVar6;
LAB_148479a95:
  if (this->MipSize[lVar11] < (longlong)uVar13) {
    pvVar5 = FMemory::Malloc(uVar13,0x10);
    lVar11 = (longlong)this->FirstMipIdx;
    if (lVar11 < lVar8) {
      lVar8 = lVar8 - lVar11;
      plVar4 = this->MipSize + lVar11;
      _Dst = pvVar5;
      do {
        if ((void *)plVar4[-0xf] != (void *)0x0) {
          memcpy(_Dst,(void *)plVar4[-0xf],*plVar4);
        }
        _Dst = (void *)((longlong)_Dst + *plVar4);
        plVar4 = plVar4 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    lVar8 = 0xf;
    pFVar2 = this;
    do {
      ppvVar9 = pFVar2->MipData;
      if (*ppvVar9 != (void *)0x0) {
        FMemory::Free(*ppvVar9);
        *ppvVar9 = (void *)0x0;
      }
      pFVar2->MipSize[0] = 0;
      lVar8 = lVar8 + -1;
      pFVar2 = (FVolumeTextureBulkData *)ppvVar9;
    } while (lVar8 != 0);
    this->MipData[this->FirstMipIdx] = pvVar5;
    this->MipSize[this->FirstMipIdx] = uVar13;
  }
  return;
}

