// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FTextureUpdateContext @ 148809180

FTextureUpdateContext * __thiscall
FTextureUpdateContext::FTextureUpdateContext
          (FTextureUpdateContext *this,UStreamableRenderAsset *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  UClass *pUVar3;
  FTextureResource *pFVar4;
  FStreamableTextureResource *this_00;
  TArrayView<FTexture2DMipMap_const_*,int> *pTVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  TArrayView<FTexture2DMipMap_const_*,int> local_28;
  FString local_18;
  
  if (param_1 == (UStreamableRenderAsset *)0x0) {
    pFVar6 = GetTypeName<UTexture>((FString *)&local_28);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar3 = Z_Construct_UClass_UTexture_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    this->Texture = (UTexture *)param_1;
    this->Resource = (FStreamableTextureResource *)0x0;
    (this->MipsView).DataPtr = (FTexture2DMipMap **)0x0;
    (this->MipsView).ArrayNum = 0;
    this->CurrentThread = param_2;
    if ((this->Texture != (UTexture *)0x0) &&
       (pFVar4 = UTexture::GetResource(this->Texture), pFVar4 != (FTextureResource *)0x0)) {
      pFVar4 = UTexture::GetResource(this->Texture);
      this_00 = (FStreamableTextureResource *)(**(code **)(pFVar4->_padding_ + 0x88))(pFVar4);
      this->Resource = this_00;
      if (this_00 == (FStreamableTextureResource *)0x0) {
        return this;
      }
      pTVar5 = FStreamableTextureResource::GetPlatformMipsView(this_00,&local_28);
      iVar1 = pTVar5->ArrayNum;
      uVar2 = *(undefined4 *)&pTVar5->field_0xc;
      (this->MipsView).DataPtr = pTVar5->DataPtr;
      (this->MipsView).ArrayNum = iVar1;
      *(undefined4 *)&(this->MipsView).field_0xc = uVar2;
      return this;
    }
    this->Resource = (FStreamableTextureResource *)0x0;
    return this;
  }
  pFVar6 = GetTypeName<UTexture>((FString *)&local_28);
  pwVar7 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UStreamableRenderAsset_const_>(&local_18,param_1);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// FTextureUpdateContext @ 1488092d0

FTextureUpdateContext * __thiscall
FTextureUpdateContext::FTextureUpdateContext
          (FTextureUpdateContext *this,UTexture *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  FTextureUpdateContext *pFVar5;
  FTextureResource *pFVar6;
  FStreamableTextureResource *this_00;
  TArrayView<FTexture2DMipMap_const_*,int> *pTVar7;
  TArrayView<FTexture2DMipMap_const_*,int> local_18;
  
  this->Texture = param_1;
  this->Resource = (FStreamableTextureResource *)0x0;
  (this->MipsView).DataPtr = (FTexture2DMipMap **)0x0;
  (this->MipsView).ArrayNum = 0;
  this->CurrentThread = param_2;
  if ((param_1 == (UTexture *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipDataProvider.cpp"
                         ,0xf,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FTextureUpdateContext *)(*pcVar1)();
    return pFVar5;
  }
  if ((this->Texture != (UTexture *)0x0) &&
     (pFVar6 = UTexture::GetResource(this->Texture), pFVar6 != (FTextureResource *)0x0)) {
    pFVar6 = UTexture::GetResource(this->Texture);
    this_00 = (FStreamableTextureResource *)(**(code **)(pFVar6->_padding_ + 0x88))(pFVar6);
    this->Resource = this_00;
    if (this_00 == (FStreamableTextureResource *)0x0) {
      return this;
    }
    pTVar7 = FStreamableTextureResource::GetPlatformMipsView(this_00,&local_18);
    iVar2 = pTVar7->ArrayNum;
    uVar3 = *(undefined4 *)&pTVar7->field_0xc;
    (this->MipsView).DataPtr = pTVar7->DataPtr;
    (this->MipsView).ArrayNum = iVar2;
    *(undefined4 *)&(this->MipsView).field_0xc = uVar3;
    return this;
  }
  this->Resource = (FStreamableTextureResource *)0x0;
  return this;
}

