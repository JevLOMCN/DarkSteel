// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FD3D12LockedResource @ 1459a9b30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12LockedResource * __thiscall
FD3D12LockedResource::FD3D12LockedResource(FD3D12LockedResource *this,FD3D12LockedResource *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FD3D12LockedResource *pFVar5;
  uint uVar6;
  
  this->_padding_ = param_1->_padding_;
  if ((param_1->ResourceLocation)._padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FD3D12LockedResource *)(*pcVar1)();
      return pFVar5;
    }
  }
  FD3D12ResourceLocation::FD3D12ResourceLocation
            (&this->ResourceLocation,(FD3D12Device *)(param_1->ResourceLocation)._padding_);
  FD3D12ResourceLocation::TransferOwnership(&this->ResourceLocation,&param_1->ResourceLocation);
  uVar6 = (param_1->Footprint).Width;
  uVar2 = (param_1->Footprint).Height;
  uVar3 = (param_1->Footprint).Depth;
  (this->Footprint).Format = (param_1->Footprint).Format;
  (this->Footprint).Width = uVar6;
  (this->Footprint).Height = uVar2;
  (this->Footprint).Depth = uVar3;
  (this->Footprint).RowPitch = (param_1->Footprint).RowPitch;
  this->LockOffset = param_1->LockOffset;
  this->LockSize = param_1->LockSize;
  uVar6 = (ZPULL(*(undefined4 *)&this->field_0x9c,0,1) ^ param_1->bLocked) & 1 ^
          *(undefined4 *)&this->field_0x9c;
  *(uint *)&this->field_0x9c = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x9c) & 2 ^ uVar6;
  *(uint *)&this->field_0x9c = uVar6;
  *(uint *)&this->field_0x9c = (uVar6 ^ *(uint *)&param_1->field_0x9c) & 4 ^ uVar6;
  return this;
}

