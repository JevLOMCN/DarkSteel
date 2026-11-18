// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// Init2D @ 145909340

void __thiscall
FVirtualTextureFeedbackBufferDesc::Init2D
          (FVirtualTextureFeedbackBufferDesc *this,TIntPoint<int> param_1)

{
  this->bSizeInHeader = false;
  this->bPageAndCount = false;
  this->BufferSize = param_1.field0_0x0._4_4_ * param_1.field0_0x0._0_4_;
  return;
}

// Init2D @ 145909360

void __thiscall
FVirtualTextureFeedbackBufferDesc::Init2D
          (FVirtualTextureFeedbackBufferDesc *this,TIntPoint<int> param_1,
          TArrayView<UE::Math::TIntRect<int>,int> *param_2,int param_3)

{
  this->bSizeInHeader = false;
  this->bPageAndCount = false;
  this->BufferSize =
       ((param_1.field0_0x0._4_4_ + -1 + param_3) / param_3) *
       ((param_3 + -1 + param_1.field0_0x0._0_4_) / param_3);
  return;
}

// Init @ 14590c0c0

void __thiscall
FVirtualTextureFeedbackBufferDesc::Init(FVirtualTextureFeedbackBufferDesc *this,int param_1)

{
  this->BufferSize = param_1;
  this->bSizeInHeader = false;
  this->bPageAndCount = false;
  return;
}

