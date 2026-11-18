// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int><TArray<D3D12_RAYTRACING_GEOMETRY_DESC,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,TArray<D3D12_RAYTRACING_GEOMETRY_DESC,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_> @ 1459e12c0

TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> * __thiscall
TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int>::
TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int><TArray<D3D12_RAYTRACING_GEOMETRY_DESC,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,TArray<D3D12_RAYTRACING_GEOMETRY_DESC,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> *this,
          TArray<D3D12_RAYTRACING_GEOMETRY_DESC,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> *pTVar5;
  ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)param_1;
  if (FVar2 != (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (D3D12_RAYTRACING_GEOMETRY_DESC *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 145a96910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIShaderBundleComputeDispatch * __thiscall
TArrayView<FRHIShaderBundleComputeDispatch_const_,int>::operator[]
          (TArrayView<FRHIShaderBundleComputeDispatch_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRHIShaderBundleComputeDispatch *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRHIShaderBundleComputeDispatch *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 145a96990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIShaderBundleGraphicsDispatch * __thiscall
TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>::operator[]
          (TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRHIShaderBundleGraphicsDispatch *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRHIShaderBundleGraphicsDispatch *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 145a96a10

FRHIWorkGraphShader ** __thiscall
TArrayView<FRHIWorkGraphShader_*,int>::operator[]
          (TArrayView<FRHIWorkGraphShader_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRHIWorkGraphShader **ppFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar4 = (FRHIWorkGraphShader **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

