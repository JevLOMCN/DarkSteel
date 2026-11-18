// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 6

// TPaletteBaseAdapter<unsigned_char> @ 142664520

TPaletteBaseAdapter<unsigned_char> * __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TPaletteBaseAdapter<unsigned_char>::
TPaletteBaseAdapter<unsigned_char>(TPaletteBaseAdapter<unsigned_char> *this,tiff *param_1)

{
  code *pcVar1;
  ushort *puVar2;
  ushort *puVar3;
  bool bVar4;
  TPaletteBaseAdapter<unsigned_char> *pTVar5;
  longlong lVar6;
  byte local_res8 [8];
  ushort *local_res18;
  ushort *local_res20;
  ushort *local_28 [2];
  
  (this->Reds).DataPtr = (ushort *)0x0;
  (this->Reds).ArrayNum = 0;
  (this->Greens).DataPtr = (ushort *)0x0;
  (this->Greens).ArrayNum = 0;
  (this->Blues).DataPtr = (ushort *)0x0;
  (this->Blues).ArrayNum = 0;
  local_28[0] = (ushort *)0x0;
  local_res18 = (ushort *)0x0;
  local_res20 = (ushort *)0x0;
  TIFFGetField(param_1,0x140,local_28,&local_res18,&local_res20);
  if (((local_28[0] == (ushort *)0x0) || (local_res18 == (ushort *)0x0)) ||
     (local_res20 == (ushort *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RedsPtr && GreensPtr && BluesPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\TiffImageWrapper.cpp"
                       ,0xa7,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_char> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TIFFGetField(param_1,0x102,local_res8);
  puVar3 = local_28[0];
  lVar6 = 1L << (local_res8[0] & 0x3f);
  if (lVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_char> *)(*pcVar1)();
      return pTVar5;
    }
  }
  puVar2 = local_res18;
  (this->Reds).DataPtr = puVar3;
  (this->Reds).ArrayNum = lVar6;
  if (lVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_char> *)(*pcVar1)();
      return pTVar5;
    }
  }
  puVar3 = local_res20;
  (this->Greens).DataPtr = puVar2;
  (this->Greens).ArrayNum = lVar6;
  if (lVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_char> *)(*pcVar1)();
      return pTVar5;
    }
  }
  (this->Blues).DataPtr = puVar3;
  (this->Blues).ArrayNum = lVar6;
  return this;
}

// TPaletteBaseAdapter<unsigned_short> @ 1426646c0

TPaletteBaseAdapter<unsigned_short> * __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TPaletteBaseAdapter<unsigned_short>::
TPaletteBaseAdapter<unsigned_short>(TPaletteBaseAdapter<unsigned_short> *this,tiff *param_1)

{
  code *pcVar1;
  ushort *puVar2;
  ushort *puVar3;
  bool bVar4;
  TPaletteBaseAdapter<unsigned_short> *pTVar5;
  longlong lVar6;
  byte local_res8 [8];
  ushort *local_res18;
  ushort *local_res20;
  ushort *local_28 [2];
  
  (this->Reds).DataPtr = (ushort *)0x0;
  (this->Reds).ArrayNum = 0;
  (this->Greens).DataPtr = (ushort *)0x0;
  (this->Greens).ArrayNum = 0;
  (this->Blues).DataPtr = (ushort *)0x0;
  (this->Blues).ArrayNum = 0;
  local_28[0] = (ushort *)0x0;
  local_res18 = (ushort *)0x0;
  local_res20 = (ushort *)0x0;
  TIFFGetField(param_1,0x140,local_28,&local_res18,&local_res20);
  if (((local_28[0] == (ushort *)0x0) || (local_res18 == (ushort *)0x0)) ||
     (local_res20 == (ushort *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RedsPtr && GreensPtr && BluesPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\TiffImageWrapper.cpp"
                       ,0xa7,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_short> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TIFFGetField(param_1,0x102,local_res8);
  puVar3 = local_28[0];
  lVar6 = 1L << (local_res8[0] & 0x3f);
  if (lVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_short> *)(*pcVar1)();
      return pTVar5;
    }
  }
  puVar2 = local_res18;
  (this->Reds).DataPtr = puVar3;
  (this->Reds).ArrayNum = lVar6;
  if (lVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_short> *)(*pcVar1)();
      return pTVar5;
    }
  }
  puVar3 = local_res20;
  (this->Greens).DataPtr = puVar2;
  (this->Greens).ArrayNum = lVar6;
  if (lVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_short> *)(*pcVar1)();
      return pTVar5;
    }
  }
  (this->Blues).DataPtr = puVar3;
  (this->Blues).ArrayNum = lVar6;
  return this;
}

// TPaletteBaseAdapter<unsigned_int> @ 142664860

TPaletteBaseAdapter<unsigned_int> * __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TPaletteBaseAdapter<unsigned_int>::
TPaletteBaseAdapter<unsigned_int>(TPaletteBaseAdapter<unsigned_int> *this,tiff *param_1)

{
  code *pcVar1;
  ushort *puVar2;
  ushort *puVar3;
  bool bVar4;
  TPaletteBaseAdapter<unsigned_int> *pTVar5;
  longlong lVar6;
  byte local_res8 [8];
  ushort *local_res18;
  ushort *local_res20;
  ushort *local_28 [2];
  
  (this->Reds).DataPtr = (ushort *)0x0;
  (this->Reds).ArrayNum = 0;
  (this->Greens).DataPtr = (ushort *)0x0;
  (this->Greens).ArrayNum = 0;
  (this->Blues).DataPtr = (ushort *)0x0;
  (this->Blues).ArrayNum = 0;
  local_28[0] = (ushort *)0x0;
  local_res18 = (ushort *)0x0;
  local_res20 = (ushort *)0x0;
  TIFFGetField(param_1,0x140,local_28,&local_res18,&local_res20);
  if (((local_28[0] == (ushort *)0x0) || (local_res18 == (ushort *)0x0)) ||
     (local_res20 == (ushort *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RedsPtr && GreensPtr && BluesPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\TiffImageWrapper.cpp"
                       ,0xa7,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  TIFFGetField(param_1,0x102,local_res8);
  puVar3 = local_28[0];
  lVar6 = 1L << (local_res8[0] & 0x3f);
  if (lVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  puVar2 = local_res18;
  (this->Reds).DataPtr = puVar3;
  (this->Reds).ArrayNum = lVar6;
  if (lVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  puVar3 = local_res20;
  (this->Greens).DataPtr = puVar2;
  (this->Greens).ArrayNum = lVar6;
  if (lVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPaletteBaseAdapter<unsigned_int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  (this->Blues).DataPtr = puVar3;
  (this->Blues).ArrayNum = lVar6;
  return this;
}

// Write @ 1426922d0

void __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TPaletteBaseAdapter<unsigned_char>::Write
          (TPaletteBaseAdapter<unsigned_char> *this,TArrayView<unsigned_short,__int64> *param_1,
          long64 param_2,uchar param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](&this->Reds,(ulonglong)param_3);
  uVar1 = *puVar2;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](param_1,param_2);
  *puVar2 = uVar1;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](&this->Greens,(ulonglong)param_3);
  uVar1 = *puVar2;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](param_1,param_2 + 1);
  *puVar2 = uVar1;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](&this->Blues,(ulonglong)param_3);
  uVar1 = *puVar2;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](param_1,param_2 + 2);
  *puVar2 = uVar1;
  return;
}

// Write @ 142692370

void __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TPaletteBaseAdapter<unsigned_short>::Write
          (TPaletteBaseAdapter<unsigned_short> *this,TArrayView<unsigned_short,__int64> *param_1,
          long64 param_2,ushort param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](&this->Reds,(ulonglong)param_3);
  uVar1 = *puVar2;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](param_1,param_2);
  *puVar2 = uVar1;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](&this->Greens,(ulonglong)param_3);
  uVar1 = *puVar2;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](param_1,param_2 + 1);
  *puVar2 = uVar1;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](&this->Blues,(ulonglong)param_3);
  uVar1 = *puVar2;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](param_1,param_2 + 2);
  *puVar2 = uVar1;
  return;
}

// Write @ 142692410

void __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TPaletteBaseAdapter<unsigned_int>::Write
          (TPaletteBaseAdapter<unsigned_int> *this,TArrayView<unsigned_short,__int64> *param_1,
          long64 param_2,uint param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](&this->Reds,(ulonglong)param_3);
  uVar1 = *puVar2;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](param_1,param_2);
  *puVar2 = uVar1;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](&this->Greens,(ulonglong)param_3);
  uVar1 = *puVar2;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](param_1,param_2 + 1);
  *puVar2 = uVar1;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](&this->Blues,(ulonglong)param_3);
  uVar1 = *puVar2;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](param_1,param_2 + 2);
  *puVar2 = uVar1;
  return;
}

