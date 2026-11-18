// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FVertexFactory @ 1480f4d90

FVertexFactory * __thiscall FVertexFactory::FVertexFactory(FVertexFactory *this,Type param_1)

{
  FRenderResource::FRenderResource((FRenderResource *)this,param_1);
  this->_padding_ = (longlong)&___7FVertexFactory__6B_;
  (this->Streams).AllocatorInstance.SecondaryData =
       (ForElementType<FVertexFactory::FVertexStream>)0x0;
  (this->Streams).ArrayNum = 0;
  (this->Streams).ArrayMax = 8;
  (this->PositionStream).AllocatorInstance.SecondaryData =
       (ForElementType<FVertexFactory::FVertexStream>)0x0;
  (this->PositionStream).ArrayNum = 0;
  (this->PositionStream).ArrayMax = 2;
  (this->PositionAndNormalStream).AllocatorInstance.SecondaryData =
       (ForElementType<FVertexFactory::FVertexStream>)0x0;
  (this->PositionAndNormalStream).ArrayNum = 0;
  (this->PositionAndNormalStream).ArrayMax = 3;
  (this->Declaration).Reference = (FRHIVertexDeclaration *)0x0;
  (this->PositionDeclaration).Reference = (FRHIVertexDeclaration *)0x0;
  (this->PositionAndNormalDeclaration).Reference = (FRHIVertexDeclaration *)0x0;
  this->PrimitiveIdStreamIndex[0] = -1;
  this->PrimitiveIdStreamIndex[1] = -1;
  this->PrimitiveIdStreamIndex[2] = -1;
  this->bNeedsDeclaration = true;
  return this;
}

// GetPSOPrecacheVertexFetchElements @ 148409710

void __cdecl
FVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                     ,0x2b5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

