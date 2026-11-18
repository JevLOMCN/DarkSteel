// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FCubeFaceRenderTarget @ 145476db0

FCubeFaceRenderTarget * __thiscall
`FScene::UpdateSceneCaptureContents'::__l32::FCubeFaceRenderTarget::FCubeFaceRenderTarget
          (void *this,FTextureRenderTargetCubeResource *param_1)

{
  code *pcVar1;
  EClearBinding EVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FCubeFaceRenderTarget *pFVar10;
  undefined1 local_48 [32];
  
  FRenderTarget::FRenderTarget(this);
  *(undefined ***)this = &UpdateSceneCaptureContents'::`32'::FCubeFaceRenderTarget::_vftable_;
  *(undefined8 *)((longlong)this + 0x20) = 1;
  *(wchar_t **)((longlong)this + 0x18) = L"UnknownTexture";
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined2 *)((longlong)this + 0x40) = 0;
  ((TIntPoint<int>_u_0 *)((longlong)this + 0x44))->_s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  *(undefined4 *)((longlong)this + 0x4c) = 0x10000;
  *(undefined2 *)((longlong)this + 0x50) = 0x100;
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined1 *)((longlong)this + 0x52) = 0xff;
  *(undefined4 *)((longlong)this + 0x68) = 0;
  *(undefined4 *)((longlong)this + 0x6c) = 1;
  *(undefined1 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x78) = 0;
  *(undefined8 *)((longlong)this + 0x80) = 0;
  *(FTextureRenderTargetCubeResource **)((longlong)this + 0x10) = param_1;
  iVar8 = (**(code **)(param_1->_padding_ + 0x30))(param_1);
  iVar8 = iVar8 * 3;
  iVar9 = (**(code **)(param_1->_padding_ + 0x38))(param_1);
  iVar9 = iVar9 * 2;
  if ((iVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExtent.X",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                         ,0x6b,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    pFVar10 = (FCubeFaceRenderTarget *)(*pcVar1)();
    return pFVar10;
  }
  if ((iVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExtent.Y",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                         ,0x6c,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    pFVar10 = (FCubeFaceRenderTarget *)(*pcVar1)();
    return pFVar10;
  }
  uVar6 = FClearValueBinding::Green.Value.Color[3];
  uVar5 = FClearValueBinding::Green.Value.Color[2];
  uVar4 = FClearValueBinding::Green.Value.Color[1];
  uVar3 = FClearValueBinding::Green.Value.Color[0];
  EVar2 = FClearValueBinding::Green.ColorBinding;
  if (((iVar8 == 0) || (iVar9 == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewDesc.Is2DTexture()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                         ,0x7a,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    pFVar10 = (FCubeFaceRenderTarget *)(*pcVar1)();
    return pFVar10;
  }
  *(ulonglong *)((longlong)this + 0x44) = CONCAT44(iVar9,iVar8);
  *(wchar_t **)((longlong)this + 0x18) = L"UnknownTexture2D";
  *(undefined8 *)((longlong)this + 0x38) = 9;
  *(undefined2 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0x10000;
  *(undefined2 *)((longlong)this + 0x50) = 0x101;
  *(undefined1 *)((longlong)this + 0x52) = 0xff;
  *(EClearBinding *)((longlong)this + 0x20) = EVar2;
  *(undefined4 *)((longlong)this + 0x24) = uVar3;
  *(undefined4 *)((longlong)this + 0x28) = uVar4;
  *(undefined4 *)((longlong)this + 0x2c) = uVar5;
  *(undefined4 *)((longlong)this + 0x30) = uVar6;
  if ((undefined1 *)((longlong)this + 0x58) != local_48) {
    *(undefined1 *)((longlong)this + 0x58) = local_48[0];
    if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)this + 0x60));
    }
    *(undefined8 *)((longlong)this + 0x60) = 0;
    *(undefined4 *)((longlong)this + 0x68) = 0;
    *(undefined4 *)((longlong)this + 0x6c) = 1;
  }
  *(undefined1 *)((longlong)this + 0x70) = 0;
  return this;
}

// GetDisplayGamma @ 1454a7880

float __thiscall
`FScene::UpdateSceneCaptureContents'::__l32::FCubeFaceRenderTarget::GetDisplayGamma(void *this)

{
  return __real_3f800000;
}

// GetRenderTargetTexture @ 1454a7d30

TRefCountPtr<FRHITexture> * __thiscall
`FScene::UpdateSceneCaptureContents'::__l32::FCubeFaceRenderTarget::GetRenderTargetTexture
          (void *this)

{
  return (TRefCountPtr<FRHITexture> *)((longlong)this + 0x80);
}

// GetSizeXY @ 1454a8b00

TIntPoint<int> __thiscall
`FScene::UpdateSceneCaptureContents'::__l32::FCubeFaceRenderTarget::GetSizeXY(void *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)((longlong)this + 0x44);
  return (TIntPoint<int>)in_RDX;
}

