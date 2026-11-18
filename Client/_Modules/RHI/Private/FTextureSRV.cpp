// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// GetViewInfo @ 145caf950

/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "EDimension": Some values do not have unique names */

FViewInfo * __thiscall
FRHIViewDesc::FTextureSRV::GetViewInfo
          (FTextureSRV *this,FViewInfo *__return_storage_ptr__,FRHITexture *param_1)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  FViewInfo *pFVar5;
  byte *pbVar6;
  
  if (*(char *)this != '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewType == EViewType::TextureSRV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x195,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FViewInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (param_1 == (FRHITexture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x196,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FViewInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  pbVar6 = (byte *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
  FTexture::GetViewInfo((FTexture *)this,(FRHITexture *)__return_storage_ptr__);
  *(undefined4 *)&__return_storage_ptr__->MipRange = 0;
  uVar1 = this->field_0x3;
  (__return_storage_ptr__->MipRange).First = uVar1;
  bVar4 = this->field_0x4;
  if (bVar4 == 0) {
    bVar4 = pbVar6[0x30];
  }
  (__return_storage_ptr__->MipRange).Num = bVar4;
  if ((uVar1 == '\0') && (bVar4 == pbVar6[0x30])) {
    bVar4 = 8;
  }
  else {
    bVar4 = 0;
  }
  __return_storage_ptr__->field_0x6 = __return_storage_ptr__->field_0x6 & 0xf7;
  __return_storage_ptr__->field_0x6 = __return_storage_ptr__->field_0x6 | bVar4;
  if ((this->field_0x2 & 8) == 0) {
    bVar4 = *pbVar6 >> 4 & 1;
  }
  else {
    bVar4 = 0;
  }
  __return_storage_ptr__->bSRGB = '\0';
  __return_storage_ptr__->field_0xa = __return_storage_ptr__->field_0xa | bVar4;
  return __return_storage_ptr__;
}

