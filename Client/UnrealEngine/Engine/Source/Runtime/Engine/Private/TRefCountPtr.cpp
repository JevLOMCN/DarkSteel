// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// ~TRefCountPtr<FSkyTextureCubeResource> @ 1479a8ac0

void __thiscall
TRefCountPtr<FSkyTextureCubeResource>::~TRefCountPtr<FSkyTextureCubeResource>
          (TRefCountPtr<FSkyTextureCubeResource> *this)

{
  int *piVar1;
  FSkyTextureCubeResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar2 = this->Reference;
  if (pFVar2 != (FSkyTextureCubeResource *)0x0) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyLightComponent.cpp"
                         ,0xa1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    piVar1 = &pFVar2->NumRefs;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      BeginReleaseResource((FRenderResource *)pFVar2,(FRenderCommandPipe *)0x0);
      BeginCleanup((FDeferredCleanupInterface *)&pFVar2->_padding_);
      return;
    }
  }
  return;
}

// operator= @ 1479a9e20

TRefCountPtr<FSkyTextureCubeResource> * __thiscall
TRefCountPtr<FSkyTextureCubeResource>::operator=
          (TRefCountPtr<FSkyTextureCubeResource> *this,FSkyTextureCubeResource *param_1)

{
  int *piVar1;
  FSkyTextureCubeResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FSkyTextureCubeResource> *pTVar5;
  
  pFVar2 = this->Reference;
  if (pFVar2 != param_1) {
    this->Reference = param_1;
    if (param_1 != (FSkyTextureCubeResource *)0x0) {
      bVar4 = IsInGameThread();
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SkyLightComponent.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TRefCountPtr<FSkyTextureCubeResource> *)(*pcVar3)();
          return pTVar5;
        }
      }
      param_1->NumRefs = param_1->NumRefs + 1;
    }
    if (pFVar2 != (FSkyTextureCubeResource *)0x0) {
      bVar4 = IsInGameThread();
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyLightComponent.cpp"
                           ,0xa1,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TRefCountPtr<FSkyTextureCubeResource> *)(*pcVar3)();
          return pTVar5;
        }
      }
      piVar1 = &pFVar2->NumRefs;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        BeginReleaseResource((FRenderResource *)pFVar2,(FRenderCommandPipe *)0x0);
        BeginCleanup((FDeferredCleanupInterface *)&pFVar2->_padding_);
      }
    }
  }
  return this;
}

// TRefCountPtr<FRHIBuffer> @ 147cc2c80

TRefCountPtr<FRHIBuffer> * __thiscall
TRefCountPtr<FRHIBuffer>::TRefCountPtr<FRHIBuffer>(TRefCountPtr<FRHIBuffer> *this)

{
  this->Reference = (FRHIBuffer *)0x0;
  return this;
}

// TRefCountPtr<FRHIStreamSourceSlot> @ 147cc2ca0

TRefCountPtr<FRHIStreamSourceSlot> * __thiscall
TRefCountPtr<FRHIStreamSourceSlot>::TRefCountPtr<FRHIStreamSourceSlot>
          (TRefCountPtr<FRHIStreamSourceSlot> *this)

{
  this->Reference = (FRHIStreamSourceSlot *)0x0;
  return this;
}

// TRefCountPtr<FRHIUnorderedAccessView> @ 147cc2cc0

TRefCountPtr<FRHIUnorderedAccessView> * __thiscall
TRefCountPtr<FRHIUnorderedAccessView>::TRefCountPtr<FRHIUnorderedAccessView>
          (TRefCountPtr<FRHIUnorderedAccessView> *this)

{
  this->Reference = (FRHIUnorderedAccessView *)0x0;
  return this;
}

// ~TRefCountPtr<FRHIBuffer> @ 147cc7ce0

void __thiscall TRefCountPtr<FRHIBuffer>::~TRefCountPtr<FRHIBuffer>(TRefCountPtr<FRHIBuffer> *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIBuffer *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = this->Reference;
  if (this_00 == (FRHIBuffer *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->_padding_;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// ~TRefCountPtr<FRHIStreamSourceSlot> @ 147cc7d00

void __thiscall
TRefCountPtr<FRHIStreamSourceSlot>::~TRefCountPtr<FRHIStreamSourceSlot>
          (TRefCountPtr<FRHIStreamSourceSlot> *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIStreamSourceSlot *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = this->Reference;
  if (this_00 == (FRHIStreamSourceSlot *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->_padding_;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// ~TRefCountPtr<FRHIUnorderedAccessView> @ 147cc7d20

void __thiscall
TRefCountPtr<FRHIUnorderedAccessView>::~TRefCountPtr<FRHIUnorderedAccessView>
          (TRefCountPtr<FRHIUnorderedAccessView> *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIUnorderedAccessView *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = this->Reference;
  if (this_00 == (FRHIUnorderedAccessView *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->field_0x8;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// TRefCountPtr<FMaterialShaderMap> @ 147f642e0

TRefCountPtr<FMaterialShaderMap> * __thiscall
TRefCountPtr<FMaterialShaderMap>::TRefCountPtr<FMaterialShaderMap>
          (TRefCountPtr<FMaterialShaderMap> *this,TRefCountPtr<FMaterialShaderMap> *param_1)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FMaterialShaderMap> *pTVar4;
  
  this->Reference = (FMaterialShaderMap *)0x0;
  pFVar1 = param_1->Reference;
  this->Reference = pFVar1;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&FMaterialShaderMap::GIdToMaterialShaderMapCS);
    if (pFVar1->bDeletedThroughDeferredCleanup != false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bDeletedThroughDeferredCleanup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                         ,0xe9f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TRefCountPtr<FMaterialShaderMap> *)(*pcVar2)();
        return pTVar4;
      }
    }
    pFVar1->NumRefs = pFVar1->NumRefs + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&FMaterialShaderMap::GIdToMaterialShaderMapCS);
  }
  return this;
}

// operator= @ 1488b2d40

TRefCountPtr<FRHIUnorderedAccessView> * __thiscall
TRefCountPtr<FRHIUnorderedAccessView>::operator=
          (TRefCountPtr<FRHIUnorderedAccessView> *this,
          TRefCountPtr<FRHIUnorderedAccessView> *param_1)

{
  FRHIUnorderedAccessView *this_00;
  
  if (this != param_1) {
    this_00 = this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (FRHIUnorderedAccessView *)0x0;
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return this;
}

// operator= @ 14890f1e0

TRefCountPtr<ITextData> * __thiscall
TRefCountPtr<ITextData>::operator=(TRefCountPtr<ITextData> *this,ITextData *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  pIVar1 = this->Reference;
  if (pIVar1 != param_1) {
    this->Reference = param_1;
    if (param_1 != (ITextData *)0x0) {
      (**(code **)((longlong)*param_1 + 8))(param_1,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  return this;
}

