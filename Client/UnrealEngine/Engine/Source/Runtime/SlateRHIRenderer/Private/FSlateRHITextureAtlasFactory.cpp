// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 3

// CreateNonAtlasedTexture @ 145ffb110

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_> __thiscall
FSlateRHITextureAtlasFactory::CreateNonAtlasedTexture
          (FSlateRHITextureAtlasFactory *this,uint param_1,uint param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlateTexture2DRHIRef *pFVar4;
  TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_> TVar5;
  FSlateTexture2DRHIRef *pFVar6;
  FSlateTexture2DRHIRef *pFVar7;
  TRHIGlobal<int> TVar8;
  undefined4 in_register_00000014;
  FSlateShaderResource *pFVar9;
  longlong *plVar10;
  FSlateTexture2DRHIRef *pFVar11;
  uint uVar12;
  FSlateTextureData *pFVar13;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *in_stack_00000028;
  TSharedPtr<FSlateTextureData,1> local_28;
  
  pFVar9 = (FSlateShaderResource *)CONCAT44(in_register_00000014,param_1);
  uVar12 = (uint)param_3;
  uVar3 = uVar12;
  if (uVar12 < param_2) {
    uVar3 = param_2;
  }
  TVar8.Value = GRHIGlobals.MaxTextureDimensions.Value;
  if (uVar3 < (uint)GRHIGlobals.MaxTextureDimensions.Value) {
    TVar8.Value = uVar3;
  }
  if (((uint)TVar8.Value < param_2) || ((uint)TVar8.Value < uVar12)) {
    pFVar9->_padding_ = 0;
  }
  else {
    pFVar4 = ::operator_new(0x30);
    pFVar11 = (FSlateTexture2DRHIRef *)0x0;
    if (pFVar4 == (FSlateTexture2DRHIRef *)0x0) {
      plVar10 = (longlong *)&DAT_00000008;
      pFVar13 = (FSlateTextureData *)&DAT_00000010;
      pFVar4 = pFVar11;
    }
    else {
      *(undefined4 *)&pFVar4->_padding_ = 1;
      *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 1;
      pFVar4->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFSlateTextureData___00_SharedPointerInternals__6B_;
      FSlateTextureData::FSlateTextureData
                ((FSlateTextureData *)&pFVar4->_padding_,param_2,uVar12,GPixelFormats[2].BlockBytes,
                 in_stack_00000028);
      pFVar13 = (FSlateTextureData *)&pFVar4->_padding_;
      if ((pFVar13 == (FSlateTextureData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar5.Ptr = (FSlateShaderResource *)(*pcVar1)();
        return (TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_>)TVar5.Ptr;
      }
      plVar10 = &pFVar4->_padding_;
      LOCK();
      *(int *)plVar10 = (int)*plVar10 + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
    pFVar6 = ::operator_new(0x70);
    pFVar7 = pFVar11;
    if (pFVar6 != (FSlateTexture2DRHIRef *)0x0) {
      if (pFVar4 != (FSlateTexture2DRHIRef *)0x0) {
        LOCK();
        *(int *)plVar10 = (int)*plVar10 + 1;
        UNLOCK();
      }
      local_28.Object = pFVar13;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
      pFVar7 = FSlateTexture2DRHIRef::FSlateTexture2DRHIRef
                         (pFVar6,param_2,uVar12,PF_B8G8R8A8,&local_28,SRGB|ShaderResource,false);
    }
    pFVar6 = (FSlateTexture2DRHIRef *)&pFVar7->_padding_;
    if (pFVar7 == (FSlateTexture2DRHIRef *)0x0) {
      pFVar6 = pFVar11;
    }
    BeginInitResource((FRenderResource *)pFVar6,(FRenderCommandPipe *)0x0);
    pFVar9->_padding_ = (longlong)pFVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
  }
  return (TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_>)pFVar9;
}

// CreateTextureAtlas @ 145ffc8c0

TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_> __thiscall
FSlateRHITextureAtlasFactory::CreateTextureAtlas
          (FSlateRHITextureAtlasFactory *this,int param_1,int param_2,
          ESlateTextureAtlasPaddingStyle param_3,bool param_4)

{
  FSlateTextureAtlasRHI *pFVar1;
  undefined4 in_register_00000014;
  FSlateTextureAtlas *pFVar2;
  undefined3 in_stack_00000029;
  bool in_stack_00000030;
  
  pFVar2 = (FSlateTextureAtlas *)CONCAT44(in_register_00000014,param_1);
  pFVar1 = ::operator_new(0x50);
  if (pFVar1 != (FSlateTextureAtlasRHI *)0x0) {
    pFVar1 = FSlateTextureAtlasRHI::FSlateTextureAtlasRHI
                       (pFVar1,param_2,param_2,_param_4,in_stack_00000030);
    pFVar2->_padding_ = (longlong)pFVar1;
    return (TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_>)pFVar2;
  }
  pFVar2->_padding_ = 0;
  return (TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_>)pFVar2;
}

// ReleaseTextureAtlases @ 146021fe0

void __thiscall
FSlateRHITextureAtlasFactory::ReleaseTextureAtlases
          (FSlateRHITextureAtlasFactory *this,
          TArray<TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_>,TSizedDefaultAllocator<32>_>
          *param_1,TArray<TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_>,TSizedDefaultAllocator<32>_>
                   *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FRenderResource *pFVar3;
  FScriptContainerElement *pFVar4;
  FRenderCommandFence local_res10 [2];
  undefined1 local_res20 [8];
  
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar4 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar4 + 0x10))();
    pFVar4 = pFVar4 + 8;
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = (FRenderResource *)(*(longlong *)pFVar4 + 0x28);
    if (*(longlong *)pFVar4 == 0) {
      pFVar3 = (FRenderResource *)0x0;
    }
    BeginReleaseResource(pFVar3,(FRenderCommandPipe *)0x0);
    pFVar4 = pFVar4 + 8;
  }
  if (param_3) {
    FRenderCommandFence::FRenderCommandFence(local_res10);
    FRenderCommandFence::BeginFence(local_res10,RenderThread);
    FRenderCommandFence::Wait(local_res10,false);
    FRenderCommandFence::~FRenderCommandFence(local_res10);
  }
  return;
}

