// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// GetCastableFormats @ 145a68d00

TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FD3D12ResourceDesc::GetCastableFormats
          (FD3D12ResourceDesc *this,
          TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  uint uVar1;
  ForElementType<DXGI_FORMAT> FVar2;
  DXGI_FORMAT_conflict DVar3;
  int iVar4;
  ForElementType<DXGI_FORMAT> FVar5;
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<DXGI_FORMAT>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 4;
  if (this->UAVPixelFormat != PF_Unknown) {
    DVar3 = UE::DXGIUtilities::FindShaderResourceFormat((DXGI_FORMAT_conflict)this->_padding_,true);
    __return_storage_ptr__->ArrayNum = 1;
    *(DXGI_FORMAT_conflict *)(__return_storage_ptr__->AllocatorInstance).InlineData = DVar3;
    DVar3 = UE::DXGIUtilities::FindShaderResourceFormat((DXGI_FORMAT_conflict)this->_padding_,false)
    ;
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_DXGI_FORMAT>_>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<DXGI_FORMAT>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<DXGI_FORMAT>)0x0) {
      FVar5 = FVar2;
    }
    *(DXGI_FORMAT_conflict *)((longlong)FVar5 + (longlong)iVar4 * 4) = DVar3;
    iVar4 = __return_storage_ptr__->ArrayNum;
    uVar1 = GPixelFormats[this->UAVPixelFormat].PlatformFormat;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_DXGI_FORMAT>_>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<DXGI_FORMAT>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<DXGI_FORMAT>)0x0) {
      FVar5 = FVar2;
    }
    *(uint *)((longlong)FVar5 + (longlong)iVar4 * 4) = uVar1;
  }
  return __return_storage_ptr__;
}

