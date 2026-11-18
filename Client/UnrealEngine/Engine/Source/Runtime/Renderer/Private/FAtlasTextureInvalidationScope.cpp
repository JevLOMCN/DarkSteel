// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FAtlasTextureInvalidationScope @ 145362a40

FAtlasTextureInvalidationScope * __thiscall
RectLightAtlas::FAtlasTextureInvalidationScope::FAtlasTextureInvalidationScope
          (FAtlasTextureInvalidationScope *this,UTexture *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FAtlasTextureInvalidationScope *pFVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  this->bLocked = false;
  uVar2 = GRectLightTextureManager._48_4_;
  if (param_1 != (UTexture *)0x0) {
    bVar3 = false;
    lVar6 = (longlong)(int)GRectLightTextureManager._48_4_ * 0x50 + GRectLightTextureManager._40_8_;
    lVar5 = GRectLightTextureManager._40_8_;
    while( true ) {
      if (GRectLightTextureManager._48_4_ != uVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<RectLightAtlas::FAtlasSlot,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar5 == lVar6) break;
      if (*(FRHITextureReference **)(lVar5 + 0x30) ==
          (param_1->TextureReference->TextureReferenceRHI).Reference) {
        if (!bVar3) {
          if ((GRectLightTextureManager._144_1_ != '\0') &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("GRectLightTextureManager.bLock == false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RectLightTextureManager.cpp"
                                 ,0x79c,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FAtlasTextureInvalidationScope *)(*pcVar1)();
            return pFVar4;
          }
          GRectLightTextureManager._144_1_ = 1;
          bVar3 = true;
        }
        this->bLocked = true;
        *(undefined1 *)(lVar5 + 0x44) = 1;
      }
      lVar5 = lVar5 + 0x50;
    }
  }
  return this;
}

// ~FAtlasTextureInvalidationScope @ 1453639d0

void __thiscall
RectLightAtlas::FAtlasTextureInvalidationScope::~FAtlasTextureInvalidationScope
          (FAtlasTextureInvalidationScope *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bLocked != false) {
    if (GRectLightTextureManager._144_1_ != '\x01') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GRectLightTextureManager.bLock == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RectLightTextureManager.cpp"
                         ,0x7ad,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    GRectLightTextureManager._144_1_ = 0;
    this->bLocked = false;
  }
  return;
}

