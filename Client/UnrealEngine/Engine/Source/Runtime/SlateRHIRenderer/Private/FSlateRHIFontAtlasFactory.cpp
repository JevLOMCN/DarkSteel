// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 5

// GetAtlasSize @ 145fd33f0

TIntPoint<int> __thiscall
FSlateRHIFontAtlasFactory::GetAtlasSize
          (FSlateRHIFontAtlasFactory *this,ESlateFontAtlasContentType param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TIntPoint<int> TVar4;
  undefined4 in_register_00000014;
  TIntPoint<int>_u_0 TVar5;
  int in_R8D;
  
  TVar5._s_0.Y = in_register_00000014;
  TVar5._s_0.X = param_1;
  if (in_R8D == 0) {
    iVar1 = this->GrayscaleAtlasSize;
    *(int *)TVar5 = iVar1;
    *(int *)((longlong)TVar5 + 4) = iVar1;
    return (TIntPoint<int>)TVar5;
  }
  if (in_R8D == 1) {
    iVar1 = this->ColorAtlasSize;
    *(int *)TVar5 = iVar1;
    *(int *)((longlong)TVar5 + 4) = iVar1;
    return (TIntPoint<int>)TVar5;
  }
  if (in_R8D == 2) {
    iVar1 = this->SdfAtlasSize;
    *(int *)TVar5 = iVar1;
    *(int *)((longlong)TVar5 + 4) = iVar1;
    return (TIntPoint<int>)TVar5;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRendererModule.cpp"
                     ,0x3f,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar4.field0_0x0;
  }
  iVar1 = this->ColorAtlasSize;
  *(int *)TVar5 = iVar1;
  *(int *)((longlong)TVar5 + 4) = iVar1;
  return (TIntPoint<int>)TVar5;
}

// CreateFontAtlas @ 145fd34a0

TSharedRef<FSlateFontAtlas,1> * __thiscall
FSlateRHIFontAtlasFactory::CreateFontAtlas
          (FSlateRHIFontAtlasFactory *this,TSharedRef<FSlateFontAtlas,1> *__return_storage_ptr__,
          ESlateFontAtlasContentType param_1)

{
  FSlateFontAtlasRHI *this_00;
  FSlateFontTextureRHIResource *this_01;
  FSlateFontTextureRHIResource *pFVar1;
  uint local_res8;
  uint uStackX_c;
  TRawPtrProxy<FSlateFontAtlasRHI> local_res10;
  
  (**(code **)(this->_padding_ + 8))(this,&local_res8);
  this_00 = ::operator_new(0x60);
  if (this_00 != (FSlateFontAtlasRHI *)0x0) {
    FSlateFontAtlas::FSlateFontAtlas
              ((FSlateFontAtlas *)this_00,local_res8,uStackX_c,param_1,PadWithZero);
    this_00->_padding_ = (longlong)&FSlateFontAtlasRHI::_vftable__for__ISlateFontTexture__;
    this_00->_padding_ = (longlong)&FSlateFontAtlasRHI::_vftable__for__FSlateTextureAtlas__;
    this_01 = ::operator_new(0x98);
    pFVar1 = (FSlateFontTextureRHIResource *)0x0;
    if (this_01 != (FSlateFontTextureRHIResource *)0x0) {
      pFVar1 = FSlateFontTextureRHIResource::FSlateFontTextureRHIResource
                         (this_01,local_res8,uStackX_c,param_1);
    }
    (this_00->FontTexture).Ptr = pFVar1;
    if (param_1 == Msdf) {
      *(undefined1 *)&this_00->_padding_ = 1;
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateFontAtlas,1>::TSharedRef<FSlateFontAtlas,1><FSlateFontAtlasRHI>
            (__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// CreateNonAtlasedTexture @ 145fd3570

TSharedPtr<ISlateFontTexture,1> * __thiscall
FSlateRHIFontAtlasFactory::CreateNonAtlasedTexture
          (FSlateRHIFontAtlasFactory *this,TSharedPtr<ISlateFontTexture,1> *__return_storage_ptr__,
          uint param_1,uint param_2,ESlateFontAtlasContentType param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  __return_storage_ptr__->Object = (ISlateFontTexture *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FSlateRHIFontAtlasFactory @ 145fe6ba0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateRHIFontAtlasFactory * __thiscall
FSlateRHIFontAtlasFactory::FSlateRHIFontAtlasFactory(FSlateRHIFontAtlasFactory *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  this->GrayscaleAtlasSize = 0x400;
  this->_padding_ = (longlong)&___7FSlateRHIFontAtlasFactory__6B_;
  this->ColorAtlasSize = 0x200;
  this->SdfAtlasSize = 0x200;
  if (GConfig != (FConfigCacheIni *)0x0) {
    FConfigCacheIni::GetInt
              (GConfig,L"SlateRenderer",L"GrayscaleFontAtlasSize",&this->GrayscaleAtlasSize,
               &GEngineIni);
    bVar1 = FConfigCacheIni::GetInt
                      (GConfig,L"SlateRenderer",L"FontAtlasSize",&this->GrayscaleAtlasSize,
                       &GEngineIni);
    if ((bVar1) && (2 < (byte)LogCore._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_`public:___cdecl_FSlateRHIFontAtlasFactory::FSlateRHIFontAtlasFactory(void)___ptr64'::`2'::<lambda_1>::operator()(wchar_t_const*___ptr64,FString_const&___ptr64,int&___ptr64)const___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
  }
  iVar3 = 0x800;
  if (this->GrayscaleAtlasSize < 0x800) {
    iVar3 = this->GrayscaleAtlasSize;
  }
  iVar2 = 0x80;
  if (0x80 < iVar3) {
    iVar2 = iVar3;
  }
  this->GrayscaleAtlasSize = iVar2;
  if (GConfig != (FConfigCacheIni *)0x0) {
    FConfigCacheIni::GetInt
              (GConfig,L"SlateRenderer",L"ColorFontAtlasSize",&this->ColorAtlasSize,&GEngineIni);
    bVar1 = FConfigCacheIni::GetInt
                      (GConfig,L"SlateRenderer",L"FontAtlasSize",&this->ColorAtlasSize,&GEngineIni);
    if ((bVar1) && (2 < (byte)LogCore._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_`public:___cdecl_FSlateRHIFontAtlasFactory::FSlateRHIFontAtlasFactory(void)___ptr64'::`2'::<lambda_1>::operator()(wchar_t_const*___ptr64,FString_const&___ptr64,int&___ptr64)const___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
  }
  iVar3 = 0x800;
  if (this->ColorAtlasSize < 0x800) {
    iVar3 = this->ColorAtlasSize;
  }
  iVar2 = 0x80;
  if (0x80 < iVar3) {
    iVar2 = iVar3;
  }
  this->ColorAtlasSize = iVar2;
  if (GConfig != (FConfigCacheIni *)0x0) {
    FConfigCacheIni::GetInt
              (GConfig,L"SlateRenderer",L"SdfFontAtlasSize",&this->SdfAtlasSize,&GEngineIni);
    bVar1 = FConfigCacheIni::GetInt
                      (GConfig,L"SlateRenderer",L"FontAtlasSize",&this->SdfAtlasSize,&GEngineIni);
    if ((bVar1) && (2 < (byte)LogCore._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_`public:___cdecl_FSlateRHIFontAtlasFactory::FSlateRHIFontAtlasFactory(void)___ptr64'::`2'::<lambda_1>::operator()(wchar_t_const*___ptr64,FString_const&___ptr64,int&___ptr64)const___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
  }
  iVar3 = 0x800;
  if (this->SdfAtlasSize < 0x800) {
    iVar3 = this->SdfAtlasSize;
  }
  iVar2 = 0x80;
  if (0x80 < iVar3) {
    iVar2 = iVar3;
  }
  this->SdfAtlasSize = iVar2;
  return this;
}

// ~FSlateRHIFontAtlasFactory @ 145fea2f0

void __thiscall
FSlateRHIFontAtlasFactory::~FSlateRHIFontAtlasFactory(FSlateRHIFontAtlasFactory *this)

{
  this->_padding_ = (longlong)&___7ISlateFontAtlasFactory__6B_;
  return;
}

