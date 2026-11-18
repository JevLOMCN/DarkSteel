// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 148997bc0

UScriptStruct * __cdecl FVirtualTextureSpacePoolConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVirtualTextureSpacePoolConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FVirtualTextureSpacePoolConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig,(UObject *)pUVar1,
                         L"VirtualTextureSpacePoolConfig");
  }
  return Z_Registration_Info_UScriptStruct_FVirtualTextureSpacePoolConfig.OuterSingleton;
}

// FVirtualTextureSpacePoolConfig @ 1489b4ef0

FVirtualTextureSpacePoolConfig * __thiscall
FVirtualTextureSpacePoolConfig::FVirtualTextureSpacePoolConfig
          (FVirtualTextureSpacePoolConfig *this,FVirtualTextureSpacePoolConfig *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Formats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Formats).ArrayMax;
  iVar2 = (param_1->Formats).ArrayNum;
  _Src = (param_1->Formats).AllocatorInstance.Data;
  (this->Formats).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Formats).AllocatorInstance.Data,_Src,(longlong)iVar2);
  }
  this->MinTileSize = param_1->MinTileSize;
  this->MaxTileSize = param_1->MaxTileSize;
  this->SizeInMegabyte = param_1->SizeInMegabyte;
  this->bEnableResidencyMipMapBias = param_1->bEnableResidencyMipMapBias;
  this->ResidencyMipMapBiasGroup = param_1->ResidencyMipMapBiasGroup;
  this->bAllowSizeScale = param_1->bAllowSizeScale;
  this->MinScaledSizeInMegabyte = param_1->MinScaledSizeInMegabyte;
  this->MaxScaledSizeInMegabyte = param_1->MaxScaledSizeInMegabyte;
  return this;
}

// operator= @ 1489bbb30

FVirtualTextureSpacePoolConfig * __thiscall
FVirtualTextureSpacePoolConfig::operator=
          (FVirtualTextureSpacePoolConfig *this,FVirtualTextureSpacePoolConfig *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Formats).ArrayMax;
    piVar1 = &(this->Formats).ArrayMax;
    _Src = (param_1->Formats).AllocatorInstance.Data;
    iVar3 = (param_1->Formats).ArrayNum;
    (this->Formats).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Formats).AllocatorInstance.Data,_Src,(longlong)iVar3);
      }
    }
  }
  this->MinTileSize = param_1->MinTileSize;
  this->MaxTileSize = param_1->MaxTileSize;
  this->SizeInMegabyte = param_1->SizeInMegabyte;
  this->bEnableResidencyMipMapBias = param_1->bEnableResidencyMipMapBias;
  this->ResidencyMipMapBiasGroup = param_1->ResidencyMipMapBiasGroup;
  this->bAllowSizeScale = param_1->bAllowSizeScale;
  this->MinScaledSizeInMegabyte = param_1->MinScaledSizeInMegabyte;
  this->MaxScaledSizeInMegabyte = param_1->MaxScaledSizeInMegabyte;
  return this;
}

