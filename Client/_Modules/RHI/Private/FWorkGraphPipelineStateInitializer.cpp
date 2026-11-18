// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FWorkGraphPipelineStateInitializer @ 145c88e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FWorkGraphPipelineStateInitializer * __thiscall
FWorkGraphPipelineStateInitializer::FWorkGraphPipelineStateInitializer
          (FWorkGraphPipelineStateInitializer *this,FWorkGraphPipelineStateInitializer *param_1)

{
  TArray<FWorkGraphPipelineStateInitializer::FNameMap,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FNameMap *pFVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  ::FString::FString(&this->ProgramName,&param_1->ProgramName);
  pTVar1 = &this->NameMaps;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->NameMaps).ArrayMax;
  iVar3 = (param_1->NameMaps).ArrayNum;
  pFVar4 = (FNameMap *)(param_1->NameMaps).AllocatorInstance.Data;
  (this->NameMaps).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FWorkGraphPipelineStateInitializer::FNameMap,FWorkGraphPipelineStateInitializer::FNameMap,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this->RootShaderIndex = param_1->RootShaderIndex;
  iVar3 = (param_1->ShaderTable).ArrayNum;
  uVar6 = *(undefined4 *)&(param_1->ShaderTable).field_0xc;
  (this->ShaderTable).DataPtr = (param_1->ShaderTable).DataPtr;
  (this->ShaderTable).ArrayNum = iVar3;
  *(undefined4 *)&(this->ShaderTable).field_0xc = uVar6;
  iVar3 = (param_1->GraphicsPSOTable).ArrayNum;
  uVar6 = *(undefined4 *)&(param_1->GraphicsPSOTable).field_0xc;
  (this->GraphicsPSOTable).DataPtr = (param_1->GraphicsPSOTable).DataPtr;
  (this->GraphicsPSOTable).ArrayNum = iVar3;
  *(undefined4 *)&(this->GraphicsPSOTable).field_0xc = uVar6;
  return this;
}

// ComputeGraphicsPSOTableHash @ 145c94e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

ulong64 __thiscall
FWorkGraphPipelineStateInitializer::ComputeGraphicsPSOTableHash
          (FWorkGraphPipelineStateInitializer *this,
          TArrayView<FGraphicsPipelineStateInitializer_const_*,int> *param_1,ulong64 param_2)

{
  FGraphicsPipelineStateInitializer **ppFVar1;
  FGraphicsPipelineStateInitializer *pFVar2;
  FRHIVertexDeclaration *pFVar3;
  FRHIVertexShader *pFVar4;
  FRHIPixelShader *pFVar5;
  FRHIMeshShader *pFVar6;
  FRHIAmplificationShader *pFVar7;
  FRHIWorkGraphShader *pFVar8;
  FRHIGeometryShader *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  TStaticArray<unsigned_char,8,4294967295> *pTVar13;
  FGraphicsPipelineStateInitializer **ppFVar14;
  
  ppFVar14 = param_1->DataPtr;
  ppFVar1 = ppFVar14 + param_1->ArrayNum;
  for (; ppFVar14 != ppFVar1; ppFVar14 = ppFVar14 + 1) {
    pFVar2 = *ppFVar14;
    uVar10 = 0;
    if (pFVar2 != (FGraphicsPipelineStateInitializer *)0x0) {
      pFVar3 = (pFVar2->BoundShaderState).VertexDeclarationRHI;
      uVar11 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
               -0x7a143595;
      uVar12 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      uVar12 = uVar12 >> 0x10 ^ uVar12;
      pFVar4 = (pFVar2->BoundShaderState).VertexShaderRHI;
      uVar11 = ((uint)((ulonglong)pFVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar4 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      pFVar5 = (pFVar2->BoundShaderState).PixelShaderRHI;
      uVar12 = (uVar12 >> 2) + (uVar11 >> 0x10 ^ uVar11) + uVar12 * 0x40 + -0x61c88647 ^ uVar12;
      uVar11 = ((uint)((ulonglong)pFVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar5 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      pFVar6 = (pFVar2->BoundShaderState).MeshShaderRHI;
      uVar12 = (uVar12 >> 2) + (uVar11 >> 0x10 ^ uVar11) + uVar12 * 0x40 + -0x61c88647 ^ uVar12;
      uVar11 = ((uint)((ulonglong)pFVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar6 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      pFVar7 = (pFVar2->BoundShaderState).AmplificationShaderRHI;
      uVar12 = (uVar12 >> 2) + (uVar11 >> 0x10 ^ uVar11) + uVar12 * 0x40 + -0x61c88647 ^ uVar12;
      uVar11 = ((uint)((ulonglong)pFVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar7 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      pFVar8 = (pFVar2->BoundShaderState).WorkGraphMeshShaderRHI;
      uVar12 = (uVar12 >> 2) + (uVar11 >> 0x10 ^ uVar11) + uVar12 * 0x40 + -0x61c88647 ^ uVar12;
      uVar11 = ((uint)((ulonglong)pFVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar8 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      pFVar9 = (pFVar2->BoundShaderState).GeometryShaderRHI;
      uVar12 = (uVar12 >> 2) + (uVar11 >> 0x10 ^ uVar11) + uVar12 * 0x40 + -0x61c88647 ^ uVar12;
      uVar11 = ((uint)((ulonglong)pFVar9 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar9 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      uVar12 = (uVar12 >> 2) + (uVar11 >> 0x10 ^ uVar11) + uVar12 * 0x40 + -0x61c88647 ^ uVar12;
      uVar11 = ((uint)((ulonglong)pFVar2->RasterizerState >> 0x14) & 0xffff ^
               (uint)((ulonglong)pFVar2->RasterizerState >> 4)) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      uVar12 = (uVar12 >> 2) + (uVar11 >> 0x10 ^ uVar11) + uVar12 * 0x40 + -0x61c88647 ^ uVar12;
      uVar11 = ((uint)((ulonglong)pFVar2->DepthStencilState >> 0x14) & 0xffff ^
               (uint)((ulonglong)pFVar2->DepthStencilState >> 4)) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      uVar12 = (uVar12 >> 2) + (uVar11 >> 0x10 ^ uVar11) + uVar12 * 0x40 + -0x61c88647 ^ uVar12;
      uVar12 = pFVar2->PrimitiveType + uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
      uVar11 = 0;
      uVar12 = pFVar2->RenderTargetsEnabled + uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
      for (pTVar13 = &pFVar2->RenderTargetFormats;
          (TStaticArray<ETextureCreateFlags,8,4294967295> *)pTVar13 != &pFVar2->RenderTargetFlags;
          pTVar13 = (TStaticArray<unsigned_char,8,4294967295> *)(pTVar13->Elements + 1)) {
        uVar11 = uVar11 ^ uVar11 * 0x40 + (uVar11 >> 2) + -0x61c88647 + (uint)pTVar13->Elements[0];
      }
      uVar12 = uVar12 * 0x40 + uVar11 + 0x9e3779b9 + (uVar12 >> 2) ^ uVar12;
      uVar10 = (ulonglong)
               ((uVar12 >> 2) + 0x9e3779b9 + (uint)pFVar2->DepthStencilTargetFormat + uVar12 * 0x40
               ^ uVar12);
    }
    param_2 = param_2 ^ uVar10 + (param_2 >> 4) + param_2 * 0x1000 + -0x61c8864680b583eb;
  }
  return param_2;
}

