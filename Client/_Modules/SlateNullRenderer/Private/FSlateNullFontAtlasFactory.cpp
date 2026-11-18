// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateNullRenderer
// Functions: 4

// GetAtlasSize @ 146c84b60

TIntPoint<int> __thiscall
FSlateNullFontAtlasFactory::GetAtlasSize
          (FSlateNullFontAtlasFactory *this,ESlateFontAtlasContentType param_1)

{
  int iVar1;
  TIntPoint<int>_u_0 TVar2;
  undefined4 in_register_00000014;
  
  iVar1 = this->AtlasSize;
  *(int *)CONCAT44(in_register_00000014,param_1) = iVar1;
  *(int *)(CONCAT44(in_register_00000014,param_1) + 4) = iVar1;
  TVar2._s_0.Y = in_register_00000014;
  TVar2._s_0.X = param_1;
  return (TIntPoint<int>)TVar2;
}

// CreateFontAtlas @ 146c84b80

TSharedRef<FSlateFontAtlas,1> * __thiscall
FSlateNullFontAtlasFactory::CreateFontAtlas
          (FSlateNullFontAtlasFactory *this,TSharedRef<FSlateFontAtlas,1> *__return_storage_ptr__,
          ESlateFontAtlasContentType param_1)

{
  uint uVar1;
  TRawPtrProxy<FSlateFontAtlasNull> local_res10;
  
  local_res10.Object = ::operator_new(0x58);
  if ((FSlateFontAtlas *)local_res10.Object == (FSlateFontAtlas *)0x0) {
    local_res10.Object = (FSlateFontAtlasNull *)0x0;
  }
  else {
    uVar1 = (uint)(longlong)(float)this->AtlasSize;
    FSlateFontAtlas::FSlateFontAtlas
              ((FSlateFontAtlas *)local_res10.Object,uVar1,uVar1,Alpha,PadWithZero);
    ((FSlateFontAtlas *)local_res10.Object)->_padding_ =
         (longlong)&FSlateFontAtlasNull::_vftable__for__ISlateFontTexture__;
    ((FSlateFontAtlas *)local_res10.Object)->_padding_ =
         (longlong)&FSlateFontAtlasNull::_vftable__for__FSlateTextureAtlas__;
  }
  TSharedRef<FSlateFontAtlas,1>::TSharedRef<FSlateFontAtlas,1><FSlateFontAtlasNull>
            (__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// CreateNonAtlasedTexture @ 146c84c10

TSharedPtr<ISlateFontTexture,1> * __thiscall
FSlateNullFontAtlasFactory::CreateNonAtlasedTexture
          (FSlateNullFontAtlasFactory *this,TSharedPtr<ISlateFontTexture,1> *__return_storage_ptr__,
          uint param_1,uint param_2,ESlateFontAtlasContentType param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  __return_storage_ptr__->Object = (ISlateFontTexture *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// ~FSlateNullFontAtlasFactory @ 146c856c0

void __thiscall
FSlateNullFontAtlasFactory::~FSlateNullFontAtlasFactory(FSlateNullFontAtlasFactory *this)

{
  this->_padding_ = (longlong)&___7ISlateFontAtlasFactory__6B_;
  return;
}

