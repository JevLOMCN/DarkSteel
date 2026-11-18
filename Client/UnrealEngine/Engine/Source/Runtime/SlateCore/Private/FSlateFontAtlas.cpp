// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 10

// FSlateFontAtlas @ 142475740

FSlateFontAtlas * __thiscall
FSlateFontAtlas::FSlateFontAtlas
          (FSlateFontAtlas *this,uint param_1,uint param_2,ESlateFontAtlasContentType param_3,
          ESlateTextureAtlasPaddingStyle param_4)

{
  uint uVar1;
  
  this->_padding_ = (longlong)&___7ISlateFontTexture__6B_;
  uVar1 = GetSlateFontAtlasContentBytesPerPixel(param_3);
  FSlateTextureAtlas::FSlateTextureAtlas
            ((FSlateTextureAtlas *)&this->_padding_,param_1,param_2,uVar1,param_4,true);
  this->_padding_ = (longlong)&_vftable__for__ISlateFontTexture__;
  this->_padding_ = (longlong)&_vftable__for__FSlateTextureAtlas__;
  this->ContentType = param_3;
  return this;
}

// ~FSlateFontAtlas @ 142479660

void __thiscall FSlateFontAtlas::~FSlateFontAtlas(FSlateFontAtlas *this)

{
  this->_padding_ = (longlong)&_vftable__for__ISlateFontTexture__;
  this->_padding_ = (longlong)&_vftable__for__FSlateTextureAtlas__;
  FSlateTextureAtlas::~FSlateTextureAtlas((FSlateTextureAtlas *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISlateFontTexture__6B_;
  return;
}

// AddCharacter @ 14247e930

FAtlasedTextureSlot * __thiscall
FSlateFontAtlas::AddCharacter(FSlateFontAtlas *this,FCharacterRenderData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAtlasedTextureSlot *pFVar3;
  
  if (param_1->ContentType != this->ContentType) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderData.ContentType == GetContentType()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontTypes.cpp"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAtlasedTextureSlot *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FSlateTextureAtlas::AddTexture
                     ((FSlateTextureAtlas *)&this->_padding_,(int)param_1->SizeX,(int)param_1->SizeY
                      ,&param_1->RawPixels);
  return pFVar3;
}

// BeginDeferredAddCharacter @ 142480c00

bool __thiscall
FSlateFontAtlas::BeginDeferredAddCharacter
          (FSlateFontAtlas *this,short param_1,short param_2,FDeferredCharacterRenderData *param_3)

{
  FAtlasedTextureSlot *pFVar1;
  
  if ((0 < param_1) && (0 < param_2)) {
    pFVar1 = FSlateTextureAtlas::FindSlotForTexture
                       ((FSlateTextureAtlas *)&this->_padding_,(int)param_1,(int)param_2);
    if (pFVar1 != (FAtlasedTextureSlot *)0x0) {
      param_3->StartU = (ushort)pFVar1->Padding + (short)pFVar1->X;
      param_3->StartV = (ushort)pFVar1->Padding + (short)pFVar1->Y;
      param_3->USize = (short)pFVar1->Width + (ushort)pFVar1->Padding * -2;
      param_3->VSize = (short)pFVar1->Height + (ushort)pFVar1->Padding * -2;
      return true;
    }
  }
  return false;
}

// EndDeferredAddCharacter @ 142486510

void __thiscall
FSlateFontAtlas::EndDeferredAddCharacter
          (FSlateFontAtlas *this,FDeferredCharacterRenderData *param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  bool bVar4;
  FAtlasedTextureSlot local_38;
  
  sVar1 = param_1->USize;
  bVar4 = *(int *)((longlong)&this->_padding_ + 4) != 0;
  if ((((0 < sVar1) && (sVar2 = param_1->VSize, 0 < sVar2)) &&
      ((short)(ushort)bVar4 <= param_1->StartU)) && ((short)(ushort)bVar4 <= param_1->StartV)) {
    uVar3 = GetSlateFontAtlasContentBytesPerPixel(this->ContentType);
    if ((param_1->RawPixels).ArrayNum == uVar3 * (int)sVar1 * (int)sVar2) {
      local_38.X = (int)param_1->StartU - (uint)bVar4;
      local_38.Y = (int)param_1->StartV - (uint)bVar4;
      local_38.Width = (int)param_1->USize + (uint)bVar4 * 2;
      local_38.Height = (int)param_1->VSize + (uint)bVar4 * 2;
      local_38._padding_ = 0;
      local_38._padding_ = 0;
      local_38.Padding = bVar4;
      FSlateTextureAtlas::CopyDataIntoSlot
                ((FSlateTextureAtlas *)&this->_padding_,&local_38,&param_1->RawPixels);
      FSlateTextureAtlas::MarkTextureDirty((FSlateTextureAtlas *)&this->_padding_);
    }
  }
  return;
}

// Flush @ 142488d00

void __thiscall FSlateFontAtlas::Flush(FSlateFontAtlas *this)

{
  FSlateTextureAtlas::EmptyAtlasData((FSlateTextureAtlas *)&this->_padding_);
  FSlateTextureAtlas::InitAtlasData((FSlateTextureAtlas *)&this->_padding_);
  *(undefined1 *)&this->_padding_ = 1;
                    /* WARNING: Could not recover jumptable at 0x000142488d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(&this->_padding_);
  return;
}

// GetAtlasDataCopy @ 14248ad50

void __thiscall
FSlateFontAtlas::GetAtlasDataCopy
          (FSlateFontAtlas *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  return;
}

// GetAtlasTexture @ 14248ae00

FSlateShaderResource * __thiscall FSlateFontAtlas::GetAtlasTexture(FSlateFontAtlas *this)

{
  FSlateShaderResource *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014248ae08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FSlateShaderResource *)
           (**(code **)(*(longlong *)&this[-1].ContentType + 8))(&this[-1].ContentType);
  return pFVar1;
}

// GetContentType @ 14248cce0

ESlateFontAtlasContentType __thiscall FSlateFontAtlas::GetContentType(FSlateFontAtlas *this)

{
  return this->ContentType;
}

// ReleaseRenderingResources @ 1424a5160

void __thiscall FSlateFontAtlas::ReleaseRenderingResources(FSlateFontAtlas *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001424a5168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(&this->_padding_);
  return;
}

