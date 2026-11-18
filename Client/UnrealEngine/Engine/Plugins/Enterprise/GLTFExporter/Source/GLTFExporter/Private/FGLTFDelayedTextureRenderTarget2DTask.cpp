// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// GetName @ 14e5f7e60

FString * __thiscall
FGLTFDelayedTextureRenderTarget2DTask::GetName
          (FGLTFDelayedTextureRenderTarget2DTask *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  if (this->RenderTarget2D == (UTextureRenderTarget2D *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"");
    return __return_storage_ptr__;
  }
  local_res8[0] = (FName)this->RenderTarget2D->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Process @ 14e6073d0

void __thiscall
FGLTFDelayedTextureRenderTarget2DTask::Process(FGLTFDelayedTextureRenderTarget2DTask *this)

{
  byte bVar1;
  byte bVar2;
  UTextureRenderTarget2D *pUVar3;
  FGLTFConvertBuilder *pFVar4;
  FGLTFJsonTexture *pFVar5;
  TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
  *this_00;
  code *pcVar6;
  TIntPoint<int> TVar7;
  bool bVar8;
  EPixelFormat EVar9;
  TextureAddress TVar10;
  TextureAddress TVar11;
  size_t sVar12;
  TReferenceControllerBase<1> *pTVar13;
  FGLTFJsonImage *pFVar14;
  FGLTFJsonSampler *pFVar15;
  wchar_t *_Str;
  bool bVar16;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar17;
  FName local_res8;
  FString local_58;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_48;
  TReferenceControllerBase<1> *local_40;
  FString local_38;
  
  pUVar3 = this->RenderTarget2D;
  UStreamableRenderAsset::SetForceMipLevelsToBeResident
            ((UStreamableRenderAsset *)pUVar3,__real_41f00000,0);
  UStreamableRenderAsset::WaitForStreaming((UStreamableRenderAsset *)pUVar3,false,false);
  local_res8 = (FName)this->RenderTarget2D->_padding_;
  ::FName::ToString(&local_res8,&this->JsonTexture->Name);
  bVar16 = (bool)(*(byte *)((longlong)&this->RenderTarget2D->_padding_ + 6) & 1);
  if (bVar16 != this->bToSRGB) {
    _Str = L"_Linear";
    if (this->bToSRGB != false) {
      _Str = L"_sRGB";
    }
    sVar12 = wcslen(_Str);
    ::FString::AppendChars(&this->JsonTexture->Name,_Str,(int)sVar12);
  }
  pTVar13 = ::operator_new(0x20);
  pFVar15 = (FGLTFJsonSampler *)0x0;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
    pTVar17 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar17 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(pTVar13 + 1);
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_UFColor__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTVar13[1]._padding_ = 0;
    pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar17 == (TArray<FColor,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  bVar8 = FGLTFTextureUtilities::ReadPixels(this->RenderTarget2D,pTVar17);
  if (bVar8) {
    FGLTFTextureUtilities::TransformColorSpace(pTVar17,bVar16,this->bToSRGB);
    TVar7.field0_0x0 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&this->RenderTarget2D->SizeX;
    EVar9 = (**(code **)(this->RenderTarget2D->_padding_ + 0x3d0))();
    bVar16 = FGLTFTextureUtilities::IsAlphaless(EVar9);
    pFVar5 = this->JsonTexture;
    this_00 = (this->Builder->ImageConverter).Ptr;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = pTVar17;
    local_40 = pTVar13;
    ::FString::FString(&local_38,&pFVar5->Name);
    pFVar14 = TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
              ::GetOrAdd(this_00,(TGLTFSuperfluous<FString> *)&local_38,bVar16,TVar7,
                         (TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1> *)
                         &local_48);
    this->JsonTexture->Source = pFVar14;
    pUVar3 = this->RenderTarget2D;
    pFVar4 = this->Builder;
    if (pUVar3 != (UTextureRenderTarget2D *)0x0) {
      bVar1 = *(byte *)((longlong)&pUVar3->_padding_ + 7);
      bVar2 = *(byte *)((longlong)&pUVar3->_padding_ + 1);
      TVar10 = (**(code **)(pUVar3->_padding_ + 0x390))(pUVar3);
      TVar11 = (**(code **)(pUVar3->_padding_ + 0x388))(pUVar3);
      pFVar15 = TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>
                ::GetOrAdd((pFVar4->SamplerConverter).Ptr,TVar11,TVar10,(uint)bVar2,(uint)bVar1);
    }
    this->JsonTexture->Sampler = pFVar15;
  }
  else {
    pFVar4 = this->Builder;
    ::FString::PrintfImpl(&local_58,L"Failed to read pixels for 2D render target %s");
    FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)pFVar4,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return;
}

