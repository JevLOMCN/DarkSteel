// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// GetViewInfo @ 145cafa50

/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "EDimension": Some values do not have unique names */

FViewInfo * __thiscall
FRHIViewDesc::FTextureUAV::GetViewInfo
          (FTextureUAV *this,FViewInfo *__return_storage_ptr__,FRHITexture *param_1)

{
  code *pcVar1;
  bool bVar2;
  FViewInfo *pFVar3;
  longlong lVar4;
  byte bVar5;
  
  if (*(char *)this != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewType == EViewType::TextureUAV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x1a6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FViewInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_1 == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x1a7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FViewInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  lVar4 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  FTexture::GetViewInfo((FTexture *)this,(FRHITexture *)__return_storage_ptr__);
  *(undefined2 *)&__return_storage_ptr__->MipLevel = 0;
  __return_storage_ptr__->MipLevel = this->field_0x3;
  if (this->field_0x4 != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipRange.Num == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x1ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FViewInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(char *)(lVar4 + 0x31) != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Desc.NumSamples == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x1ae,L"Cannot create an unordered access view of a multisampled texture.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FViewInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(byte *)(lVar4 + 0x30) < __return_storage_ptr__->MipLevel) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info.MipLevel <= Desc.NumMips",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x1af,
                       L"Mip level (%d) is out of bounds for texture description (Num Mips: %d).");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FViewInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  bVar5 = 0;
  if (*(char *)(lVar4 + 0x30) == '\x01') {
    bVar5 = 8;
  }
  __return_storage_ptr__->field_0x6 = bVar5 | __return_storage_ptr__->field_0x6 & 0xf7;
  return __return_storage_ptr__;
}

