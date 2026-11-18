// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 3

// FColorCurveUniformSampler @ 14d3671d0

FColorCurveUniformSampler * __thiscall
CustomizableObjectPopulation::FColorCurveUniformSampler::FColorCurveUniformSampler
          (FColorCurveUniformSampler *this,UCurveLinearColor *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  FCompressedRichCurve *pFVar3;
  longlong lVar4;
  FRichCurve *this_00;
  
  pFVar3 = this->ColorCurves;
  this->MinValue = param_2;
  this->MaxValue = param_3;
  pFVar3->CompressionFormat = '\0';
  pFVar3->KeyTimeCompressionFormat = '\x01';
  pFVar3->PreInfinityExtrap = '\x05';
  pFVar3->PostInfinityExtrap = '\x05';
  pFVar3->ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this_00 = param_1->FloatCurves;
  this->ColorCurves[0].CompressedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ColorCurves[0].CompressedKeys.ArrayNum = 0;
  this->ColorCurves[0].CompressedKeys.ArrayMax = 0;
  lVar4 = 4;
  this->ColorCurves[1].CompressionFormat = '\0';
  this->ColorCurves[1].KeyTimeCompressionFormat = '\x01';
  this->ColorCurves[1].PreInfinityExtrap = '\x05';
  this->ColorCurves[1].PostInfinityExtrap = '\x05';
  this->ColorCurves[1].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->ColorCurves[1].CompressedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ColorCurves[1].CompressedKeys.ArrayNum = 0;
  this->ColorCurves[1].CompressedKeys.ArrayMax = 0;
  this->ColorCurves[2].CompressionFormat = '\0';
  this->ColorCurves[2].KeyTimeCompressionFormat = '\x01';
  this->ColorCurves[2].PreInfinityExtrap = '\x05';
  this->ColorCurves[2].PostInfinityExtrap = '\x05';
  this->ColorCurves[2].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->ColorCurves[2].CompressedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ColorCurves[2].CompressedKeys.ArrayNum = 0;
  this->ColorCurves[2].CompressedKeys.ArrayMax = 0;
  this->ColorCurves[3].CompressionFormat = '\0';
  fVar2 = __real_42f00000;
  this->ColorCurves[3].KeyTimeCompressionFormat = '\x01';
  this->ColorCurves[3].PreInfinityExtrap = '\x05';
  this->ColorCurves[3].PostInfinityExtrap = '\x05';
  this->ColorCurves[3].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->ColorCurves[3].CompressedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar1 = __real_38d1b717;
  this->ColorCurves[3].CompressedKeys.ArrayNum = 0;
  this->ColorCurves[3].CompressedKeys.ArrayMax = 0;
  do {
    FRichCurve::CompressCurve(this_00,pFVar3,fVar1,fVar2);
    pFVar3 = pFVar3 + 1;
    this_00 = this_00 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return this;
}

// IsValidSampler @ 14d36a420

bool __thiscall
CustomizableObjectPopulation::FColorCurveUniformSampler::IsValidSampler
          (FColorCurveUniformSampler *this)

{
  return this->MinValue < this->MaxValue;
}

// Sample @ 14d36a630

FLinearColor * __thiscall
CustomizableObjectPopulation::FColorCurveUniformSampler::Sample
          (FColorCurveUniformSampler *this,FLinearColor *__return_storage_ptr__,
          FRandomStream *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = this->MaxValue;
  fVar5 = this->MinValue;
  uVar1 = param_1->Seed * 0xbb38435 + 0x3619636b;
  param_1->Seed = uVar1;
  fVar5 = ((float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000) * (fVar2 - fVar5) + fVar5;
  fVar2 = FCompressedRichCurve::Eval(this->ColorCurves + 3,fVar5,0.0);
  fVar3 = FCompressedRichCurve::Eval(this->ColorCurves + 2,fVar5,0.0);
  fVar4 = FCompressedRichCurve::Eval(this->ColorCurves + 1,fVar5,0.0);
  fVar5 = FCompressedRichCurve::Eval(this->ColorCurves,fVar5,0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar5;
  return __return_storage_ptr__;
}

