// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 10

// FNullCursor @ 1423c23c0

/* WARNING: Enum "Type": Some values do not have unique names */

FNullCursor * __thiscall FNullCursor::FNullCursor(FNullCursor *this)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7FNullCursor__6B_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if ((((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
       false)) && (4 < (byte)LogInit._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  return this;
}

// ~FNullCursor @ 1423c6c40

void __thiscall FNullCursor::~FNullCursor(FNullCursor *this)

{
  this->_padding_ = (longlong)&___7FNullCursor__6B_;
  return;
}

// GetPosition @ 1423e13e0

TVector2<double> * __thiscall
FNullCursor::GetPosition(FNullCursor *this,TVector2<double> *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = this->CachedGlobalXPosition;
  uVar2 = this->CachedGlobalYPosition;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(int)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)uVar2;
  return __return_storage_ptr__;
}

// GetSize @ 1423e2a90

void __thiscall FNullCursor::GetSize(FNullCursor *this,int *param_1,int *param_2)

{
  *param_1 = 0x10;
  *param_2 = 0x10;
  return;
}

// GetType @ 1423e4b00

Type __thiscall FNullCursor::GetType(FNullCursor *this)

{
  return Default;
}

// Lock @ 1423eb9f0

void __thiscall FNullCursor::Lock(FNullCursor *this,tagRECT *param_1)

{
  return;
}

// SetPosition @ 142405490

void __thiscall FNullCursor::SetPosition(FNullCursor *this,int param_1,int param_2)

{
  this->CachedGlobalXPosition = param_1;
  this->CachedGlobalYPosition = param_2;
  return;
}

// SetType @ 142405b60

void __thiscall FNullCursor::SetType(FNullCursor *this,Type param_1)

{
  return;
}

// SetTypeShape @ 142405be0

void __thiscall FNullCursor::SetTypeShape(FNullCursor *this,Type param_1,void *param_2)

{
  return;
}

// Show @ 1424063d0

void __thiscall FNullCursor::Show(FNullCursor *this,bool param_1)

{
  return;
}

