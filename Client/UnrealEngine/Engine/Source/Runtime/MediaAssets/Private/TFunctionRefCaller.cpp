// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 2

// Call @ 146c20fb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMediaTexture::TickResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMediaTextureResource *this;
  FRenderParams *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FAtlasTextureInvalidationScope aFStackX_8 [8];
  
  if (*(longlong *)param_1 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceParam",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Assets\\MediaTexture.cpp"
                       ,0x1f7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  RectLightAtlas::FAtlasTextureInvalidationScope::FAtlasTextureInvalidationScope
            (aFStackX_8,*(UTexture **)((longlong)param_1 + 0x80));
  this = *(FMediaTextureResource **)param_1;
  if (*(int *)((longlong)param_1 + 0x78) == 1) {
    FMediaTextureResource::SetJustInTimeRenderParams(this,(FRenderParams *)((longlong)param_1 + 8));
  }
  else {
    bVar6 = IsInRenderingThread();
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                         ,0x33f,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (this->JustInTimeRenderParams).Ptr;
    if (pFVar3 != (FRenderParams *)0x0) {
      (this->JustInTimeRenderParams).Ptr = (FRenderParams *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar3->TextureSample).SharedReferenceCount.ReferenceController);
      pTVar4 = (pFVar3->SampleSource).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      ::operator_delete(pFVar3,0x70);
    }
    FMediaTextureResource::Render
              (*(FMediaTextureResource **)param_1,(FRenderParams *)((longlong)param_1 + 8));
  }
  RectLightAtlas::FAtlasTextureInvalidationScope::~FAtlasTextureInvalidationScope(aFStackX_8);
  return;
}

// Call @ 146c20fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMediaTexture::BeginDestroy'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FExternalTextureRegistry *this;
  
  this = FExternalTextureRegistry::Get();
  FExternalTextureRegistry::UnregisterExternalTexture(this,param_1);
  return;
}

