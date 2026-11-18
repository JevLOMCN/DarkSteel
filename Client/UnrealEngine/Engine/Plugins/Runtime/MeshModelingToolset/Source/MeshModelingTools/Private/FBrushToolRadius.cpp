// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 5

// StaticStruct @ 14cc92fe0

UScriptStruct * __cdecl FBrushToolRadius::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBrushToolRadius.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UScriptStruct_FBrushToolRadius.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBrushToolRadius,(UObject *)pUVar1,
                         L"BrushToolRadius");
  }
  return Z_Registration_Info_UScriptStruct_FBrushToolRadius.OuterSingleton;
}

// DecreaseRadius @ 14ccf60d0

void __thiscall FBrushToolRadius::DecreaseRadius(FBrushToolRadius *this,bool param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = __real_3ccccccd;
  if (param_1) {
    fVar2 = __real_3ba3d70a;
  }
  if (this->SizeType != Adaptive) {
    fVar1 = (this->WorldSizeRange).Max;
    fVar2 = this->WorldRadius - (fVar1 - (this->WorldSizeRange).Min) * fVar2 * __real_3f000000;
    if (fVar1 <= fVar2) {
      fVar2 = fVar1;
    }
    fVar1 = (this->WorldSizeRange).Min;
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
    this->WorldRadius = fVar2;
    return;
  }
  fVar2 = this->AdaptiveSize - fVar2;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  this->AdaptiveSize = fVar2;
  return;
}

// GetWorldRadius @ 14cd02ec0

float __thiscall FBrushToolRadius::GetWorldRadius(FBrushToolRadius *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (this->SizeType != Adaptive) {
    return this->WorldRadius;
  }
  fVar1 = (this->WorldSizeRange).Max;
  fVar2 = (this->WorldSizeRange).Min;
  if (fVar2 <= fVar1) {
    fVar3 = this->AdaptiveSize;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    return ((fVar1 - fVar2) * fVar3 + fVar2) * __real_3f000000;
  }
  return __real_3f000000 * 0.0;
}

// IncreaseRadius @ 14cd03f30

void __thiscall FBrushToolRadius::IncreaseRadius(FBrushToolRadius *this,bool param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = __real_3ccccccd;
  if (param_1) {
    fVar2 = __real_3ba3d70a;
  }
  if (this->SizeType != Adaptive) {
    fVar1 = (this->WorldSizeRange).Max;
    fVar2 = (fVar1 - (this->WorldSizeRange).Min) * fVar2 * __real_3f000000 + this->WorldRadius;
    if (fVar1 <= fVar2) {
      fVar2 = fVar1;
    }
    fVar1 = (this->WorldSizeRange).Min;
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
    this->WorldRadius = fVar2;
    return;
  }
  fVar2 = fVar2 + this->AdaptiveSize;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  this->AdaptiveSize = fVar2;
  return;
}

// InitializeWorldSizeRange @ 14cd07260

void __thiscall
FBrushToolRadius::InitializeWorldSizeRange
          (FBrushToolRadius *this,TInterval<float> param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1.Min;
  fVar2 = param_1.Max;
  this->WorldSizeRange = param_1;
  if (fVar1 <= this->WorldRadius) {
    if (this->WorldRadius <= fVar2) {
      return;
    }
    if (fVar1 <= fVar2) {
      this->WorldRadius = (fVar2 - fVar1) * __real_3f4ccccd + fVar1;
      return;
    }
  }
  else if (fVar1 <= fVar2) {
    this->WorldRadius = (fVar2 - fVar1) * __real_3e4ccccd + fVar1;
    return;
  }
  this->WorldRadius = 0.0;
  return;
}

