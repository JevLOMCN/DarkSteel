// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 3

// ~FImagePixelData @ 1446e97e0

void __thiscall FImagePixelData::~FImagePixelData(FImagePixelData *this)

{
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Payload).SharedReferenceCount.ReferenceController);
  return;
}

// GetImageView @ 1446ee070

FImageView * __thiscall
FImagePixelData::GetImageView(FImagePixelData *this,FImageView *__return_storage_ptr__)

{
  EImagePixelType EVar1;
  code *pcVar2;
  void *pvVar3;
  longlong lVar4;
  bool bVar5;
  FImageView *pFVar6;
  long64 lVar7;
  int iVar8;
  int iVar9;
  void *local_res18;
  longlong local_res20;
  uint uStack_6c;
  uint uStack_54;
  undefined4 uStack_3c;
  
  local_res18 = (void *)0x0;
  local_res20 = 0;
  (**(code **)(this->_padding_ + 8))(this,&local_res18,&local_res20);
  lVar4 = local_res20;
  pvVar3 = local_res18;
  if ((local_res18 == (void *)0x0) ||
     (local_res20 !=
      (ulonglong)(this->BitDepth >> 3) * (ulonglong)this->NumChannels *
      (longlong)(this->Size).field0_0x0._s_0.X * (longlong)(this->Size).field0_0x0._s_0.Y)) {
LAB_1446ee145:
    __return_storage_ptr__->_padding_ = 0;
    *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
    *(undefined2 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0x201;
    __return_storage_ptr__->RawData = (void *)0x0;
  }
  else {
    if ((this->NumChannels != 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChannels == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Public\\ImagePixelData.h"
                           ,0x60,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FImageView *)(*pcVar2)();
      return pFVar6;
    }
    EVar1 = this->Type;
    if (EVar1 == Color) {
      if ((this->PixelLayout != BGRA) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PixelLayout == ERGBFormat::BGRA",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Public\\ImagePixelData.h"
                             ,0x65,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FImageView *)(*pcVar2)();
        return pFVar6;
      }
      if ((this->BitDepth != '\b') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("BitDepth == 8",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Public\\ImagePixelData.h"
                             ,0x66,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FImageView *)(*pcVar2)();
        return pFVar6;
      }
      iVar8 = (this->Size).field0_0x0._s_0.X;
      iVar9 = (this->Size).field0_0x0._s_0.Y;
      uStack_3c = CONCAT22(uStack_3c._2_2_,CONCAT11(-(this->bSRGB != false),1)) & 0xffff02ff;
      uStack_6c = uStack_3c;
    }
    else if (EVar1 == Float16) {
      if ((this->PixelLayout != RGBAF) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PixelLayout == ERGBFormat::RGBAF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Public\\ImagePixelData.h"
                             ,0x6b,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FImageView *)(*pcVar2)();
        return pFVar6;
      }
      if ((this->BitDepth != '\x10') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("BitDepth == 16",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Public\\ImagePixelData.h"
                             ,0x6c,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FImageView *)(*pcVar2)();
        return pFVar6;
      }
      iVar8 = (this->Size).field0_0x0._s_0.X;
      iVar9 = (this->Size).field0_0x0._s_0.Y;
      uStack_54 = CONCAT22(uStack_54._2_2_,4);
      uStack_6c = uStack_54;
    }
    else {
      if (EVar1 != Float32) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Public\\ImagePixelData.h"
                           ,0x77,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FImageView *)(*pcVar2)();
          return pFVar6;
        }
        goto LAB_1446ee145;
      }
      if ((this->PixelLayout != RGBAF) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PixelLayout == ERGBFormat::RGBAF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Public\\ImagePixelData.h"
                             ,0x71,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FImageView *)(*pcVar2)();
        return pFVar6;
      }
      if ((this->BitDepth != ' ') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("BitDepth == 32",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Public\\ImagePixelData.h"
                             ,0x72,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FImageView *)(*pcVar2)();
        return pFVar6;
      }
      iVar8 = (this->Size).field0_0x0._s_0.X;
      iVar9 = (this->Size).field0_0x0._s_0.Y;
      uStack_6c = CONCAT22(uStack_6c._2_2_,5);
    }
    lVar7 = ERawImageFormat::GetBytesPerPixel((Type)uStack_6c);
    if ((lVar7 * iVar9 * (longlong)iVar8 - lVar4 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret.GetImageSizeBytes() == SizeBytes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Public\\ImagePixelData.h"
                           ,0x7b,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FImageView *)(*pcVar2)();
      return pFVar6;
    }
    *(int *)&__return_storage_ptr__->_padding_ = iVar8;
    *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4) = iVar9;
    *(undefined4 *)&__return_storage_ptr__->_padding_ = 1;
    *(uint *)((longlong)&__return_storage_ptr__->_padding_ + 4) = uStack_6c;
    __return_storage_ptr__->RawData = pvVar3;
  }
  return __return_storage_ptr__;
}

// IsDataWellFormed @ 1446ee500

bool __thiscall FImagePixelData::IsDataWellFormed(FImagePixelData *this)

{
  longlong local_res8;
  longlong local_res10 [3];
  
  local_res8 = 0;
  local_res10[0] = 0;
  (**(code **)(this->_padding_ + 8))(this,&local_res8,local_res10);
  if ((local_res8 != 0) &&
     (local_res10[0] ==
      (ulonglong)(this->BitDepth >> 3) * (ulonglong)this->NumChannels *
      (longlong)(this->Size).field0_0x0._s_0.Y * (longlong)(this->Size).field0_0x0._s_0.X)) {
    return true;
  }
  return false;
}

