// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateNullRenderer
// Functions: 19

// NullFontTexture'' @ 1410acfa0

void __cdecl `dynamic_initializer_for_'FSlateFontAtlasNull::NullFontTexture__(void)

{
  FTexture::FTexture((FTexture *)&FSlateFontAtlasNull::NullFontTexture.field_0x10);
  FSlateFontAtlasNull::NullFontTexture._104_8_ = 0;
  FSlateFontAtlasNull::NullFontTexture._0_8_ =
       &FSlateFontTextureNull::_vftable__for__FSlateShaderResource__;
  FSlateFontAtlasNull::NullFontTexture._16_8_ =
       &FSlateFontTextureNull::_vftable__for__FTextureResource__;
  atexit(`dynamic_atexit_destructor_for_'FSlateFontAtlasNull::NullFontTexture__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSlateNullRenderer'' @ 1410acff0

void __cdecl _dynamic_initializer_for__ModuleRegistrantSlateNullRenderer__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SlateNullRenderer";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SlateNullRenderer",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSlateNullRendererModule>::InitializeModule
            );
  return;
}

// `scalar_deleting_destructor' @ 146c84830

void * __thiscall
ISlateNullRendererModule::_scalar_deleting_destructor_(ISlateNullRendererModule *this,uint param_1)

{
  *this = (ISlateNullRendererModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c849a0

void * __thiscall
FSlateNullShaderResourceManager::_scalar_deleting_destructor_
          (FSlateNullShaderResourceManager *this,uint param_1)

{
  FSlateShaderResourceManager::~FSlateShaderResourceManager
            ((FSlateShaderResourceManager *)&this->field_0x8);
  *(undefined ***)this = &___7ISlateAtlasProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c84a70

void * __thiscall
FSlateFontTextureNull::_scalar_deleting_destructor_(FSlateFontTextureNull *this,uint param_1)

{
  *(undefined ***)&this->field_0x10 = &___7FTextureResource__6B_;
  TRefCountPtr<FRHITextureReference>::~TRefCountPtr<FRHITextureReference>
            ((TRefCountPtr<FRHITextureReference> *)&this->field_0x68);
  FTexture::~FTexture((FTexture *)&this->field_0x10);
  this->field_0x8 = 0x84;
  *(undefined ***)this = &___7FSlateShaderResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c84b20

void * __thiscall
FSlateFontAtlasNull::_scalar_deleting_destructor_(FSlateFontAtlasNull *this,uint param_1)

{
  FSlateFontAtlas::~FSlateFontAtlas((FSlateFontAtlas *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c84c30

void * __thiscall
FSlateNullFontAtlasFactory::_scalar_deleting_destructor_
          (FSlateNullFontAtlasFactory *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISlateFontAtlasFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c85060

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
FSlateNullRendererModule::_scalar_deleting_destructor_(FSlateNullRendererModule *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResourceManager).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlateFontServices).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c850e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateFontAtlasNull,SharedPointerInternals::DefaultDeleter<FSlateFontAtlasNull>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateFontAtlasNull,SharedPointerInternals::DefaultDeleter<FSlateFontAtlasNull>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c85140

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateNullRenderer,SharedPointerInternals::DefaultDeleter<FSlateNullRenderer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateNullRenderer,SharedPointerInternals::DefaultDeleter<FSlateNullRenderer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c851a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateNullFontAtlasFactory,SharedPointerInternals::DefaultDeleter<FSlateNullFontAtlasFactory>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateNullFontAtlasFactory,SharedPointerInternals::DefaultDeleter<FSlateNullFontAtlasFactory>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c85200

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateNullShaderResourceManager,SharedPointerInternals::DefaultDeleter<FSlateNullShaderResourceManager>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateNullShaderResourceManager,SharedPointerInternals::DefaultDeleter<FSlateNullShaderResourceManager>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146c85234

/* [thunk]:public: virtual void * __ptr64 __cdecl FSlateNullShaderResourceManager::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FSlateNullShaderResourceManager::_vector_deleting_destructor__adjustor_8__
          (FSlateNullShaderResourceManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSlateNullShaderResourceManager *)&this[-1].field_0x58,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 146c85244

/* [thunk]:public: virtual void * __ptr64 __cdecl FSlateFontTextureNull::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FSlateFontTextureNull::_vector_deleting_destructor__adjustor_16__
          (FSlateFontTextureNull *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSlateFontTextureNull *)&this[-1].field_0x60,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146c85254

/* [thunk]:public: virtual void * __ptr64 __cdecl FSlateFontAtlasNull::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FSlateFontAtlasNull::_vector_deleting_destructor__adjustor_8__
          (FSlateFontAtlasNull *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSlateFontAtlasNull *)&this[-1].field_0x50,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146c856e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
FSlateNullRenderer::_scalar_deleting_destructor_(FSlateNullRenderer *this,uint param_1)

{
  FSlateDrawBuffer *pFVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ResourceCriticalSection);
  pFVar1 = (this->DrawBuffer).Ptr;
  if (pFVar1 != (FSlateDrawBuffer *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResourceManager).SharedReferenceCount.ReferenceController);
  FSlateRenderer::~FSlateRenderer((FSlateRenderer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// IMPLEMENT_MODULE_SlateNullRenderer @ 146c85b30

void __cdecl IMPLEMENT_MODULE_SlateNullRenderer(void)

{
  return;
}

// NullFontTexture'' @ 1503dfe10

void __cdecl `dynamic_atexit_destructor_for_'FSlateFontAtlasNull::NullFontTexture__(void)

{
  FSlateFontAtlasNull::NullFontTexture._16_8_ = &___7FTextureResource__6B_;
  TRefCountPtr<FRHITextureReference>::~TRefCountPtr<FRHITextureReference>
            ((TRefCountPtr<FRHITextureReference> *)&FSlateFontAtlasNull::NullFontTexture.field_0x68)
  ;
  FTexture::~FTexture((FTexture *)&FSlateFontAtlasNull::NullFontTexture.field_0x10);
  FSlateFontAtlasNull::NullFontTexture._8_1_ = 0x84;
  FSlateFontAtlasNull::NullFontTexture._0_8_ = &___7FSlateShaderResource__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'NullHandle'' @ 1503dfe60

void __cdecl
`FSlateNullShaderResourceManager::GetResourceHandle'::__l2::
_dynamic_atexit_destructor_for__NullHandle__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (`public:_virtual_class_FSlateResourceHandle___cdecl_FSlateNullShaderResourceManager::GetResourceHandle(FSlateBrush_const&___ptr64)___ptr64'
             ::__l2::NullHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

