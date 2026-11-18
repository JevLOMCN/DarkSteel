// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 6

// AsBGRA8 @ 1423560e0

TArrayView<FColor,__int64> * __thiscall
FImageView::AsBGRA8(FImageView *this,TArrayView<FColor,__int64> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FColor,__int64> *pTVar3;
  longlong lVar4;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Format == ERawImageFormat::BGRA8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                       ,0x172,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FColor,__int64> *)(*pcVar1)();
      return pTVar3;
    }
  }
  lVar4 = this->_padding_;
  __return_storage_ptr__->DataPtr = this->RawData;
  lVar4 = (longlong)(int)lVar4 * (longlong)*(int *)((longlong)&this->_padding_ + 4) *
          (longlong)(int)this->_padding_;
  __return_storage_ptr__->ArrayNum = lVar4;
  if (lVar4 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FColor,__int64> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// AsRGBA16 @ 142356180

TArrayView<unsigned_short,__int64> * __thiscall
FImageView::AsRGBA16(FImageView *this,TArrayView<unsigned_short,__int64> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_short,__int64> *pTVar3;
  longlong lVar4;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Format == ERawImageFormat::RGBA16",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                       ,0x17e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short,__int64> *)(*pcVar1)();
      return pTVar3;
    }
  }
  lVar4 = this->_padding_;
  __return_storage_ptr__->DataPtr = this->RawData;
  lVar4 = (longlong)(int)lVar4 * (longlong)*(int *)((longlong)&this->_padding_ + 4) *
          (longlong)(int)this->_padding_ * 4;
  __return_storage_ptr__->ArrayNum = lVar4;
  if (lVar4 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_short,__int64> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// AsRGBA16F @ 142356220

TArrayView<FFloat16Color,__int64> * __thiscall
FImageView::AsRGBA16F(FImageView *this,TArrayView<FFloat16Color,__int64> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFloat16Color,__int64> *pTVar3;
  longlong lVar4;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x04') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Format == ERawImageFormat::RGBA16F",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                       ,0x184,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FFloat16Color,__int64> *)(*pcVar1)();
      return pTVar3;
    }
  }
  lVar4 = this->_padding_;
  __return_storage_ptr__->DataPtr = this->RawData;
  lVar4 = (longlong)(int)lVar4 * (longlong)*(int *)((longlong)&this->_padding_ + 4) *
          (longlong)(int)this->_padding_;
  __return_storage_ptr__->ArrayNum = lVar4;
  if (lVar4 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FFloat16Color,__int64> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// AsRGBA32F @ 1423562c0

TArrayView<FLinearColor,__int64> * __thiscall
FImageView::AsRGBA32F(FImageView *this,TArrayView<FLinearColor,__int64> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FLinearColor,__int64> *pTVar3;
  longlong lVar4;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x05') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Format == ERawImageFormat::RGBA32F",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FLinearColor,__int64> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GammaSpace == EGammaSpace::Linear",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FLinearColor,__int64> *)(*pcVar1)();
      return pTVar3;
    }
  }
  lVar4 = this->_padding_;
  __return_storage_ptr__->DataPtr = this->RawData;
  lVar4 = (longlong)(int)lVar4 * (longlong)*(int *)((longlong)&this->_padding_ + 4) *
          (longlong)(int)this->_padding_;
  __return_storage_ptr__->ArrayNum = lVar4;
  if (lVar4 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FLinearColor,__int64> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// CopyTo @ 14235a7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FImageView::CopyTo(FImageView *this,FImage *param_1,Type param_2,EGammaSpace param_3)

{
  longlong lVar1;
  longlong lVar2;
  FImageView local_28;
  
  if ((param_3 == Pow22) && (*(char *)((longlong)&this->_padding_ + 5) != '\x01')) {
    if (2 < (byte)LogImageCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
    }
    param_3 = sRGB;
  }
  lVar1 = this->_padding_;
  lVar2 = this->_padding_;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) =
       *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(int *)&param_1->_padding_ = (int)lVar2;
  *(int *)&param_1->_padding_ = (int)lVar1;
  *(Type *)((longlong)&param_1->_padding_ + 4) = param_2;
  *(EGammaSpace *)((longlong)&param_1->_padding_ + 5) = param_3;
  InitImageStorage(param_1);
  local_28._padding_ = param_1->_padding_;
  local_28._padding_ = param_1->_padding_;
  local_28.RawData = (param_1->RawData).AllocatorInstance.Data;
  FImageCore::CopyImage(this,&local_28);
  return;
}

// GetSlice @ 14235df60

FImageView * __thiscall
FImageView::GetSlice(FImageView *this,FImageView *__return_storage_ptr__,int param_1)

{
  void *pvVar1;
  Type TVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FImageView *pFVar7;
  long64 lVar8;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SliceIndex >= 0 && SliceIndex < NumSlices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x427,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FImageView *)(*pcVar4)();
      return pFVar7;
    }
  }
  lVar5 = this->_padding_;
  pvVar1 = this->RawData;
  __return_storage_ptr__->_padding_ = this->_padding_;
  __return_storage_ptr__->_padding_ = lVar5;
  __return_storage_ptr__->RawData = pvVar1;
  iVar3 = *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  lVar5 = __return_storage_ptr__->_padding_;
  TVar2 = *(Type *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 1;
  lVar8 = ERawImageFormat::GetBytesPerPixel(TVar2);
  __return_storage_ptr__->RawData =
       (void *)(lVar8 * param_1 * (longlong)iVar3 * (longlong)(int)lVar5 + (longlong)this->RawData);
  return __return_storage_ptr__;
}

