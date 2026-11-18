// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAudioBusProxy @ 14761b5f0

FAudioBusProxy * __thiscall FAudioBusProxy::FAudioBusProxy(FAudioBusProxy *this,UAudioBus *param_1)

{
  uint uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'
                      ::__l2::MyClassName,"FAudioBusProxy");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  this->_padding_ =
       (longlong)
       `public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'::__l2::
       MyClassName;
  this->_padding_ = (longlong)&___7FAudioBusProxy__6B_;
  this->AudioBusId = 0xffffffff;
  this->NumChannels = -1;
  this->TypeHash = 0xffffffff;
  if (param_1 != (UAudioBus *)0x0) {
    this->AudioBusId = *(uint *)((longlong)&param_1->_padding_ + 4);
    this->NumChannels = param_1->AudioBusChannels + 1;
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    this->TypeHash = uVar1 >> 0x10 ^ uVar1;
  }
  return this;
}

// ~FAudioBusProxy @ 1476208b0

void __thiscall FAudioBusProxy::~FAudioBusProxy(FAudioBusProxy *this)

{
  this->_padding_ = (longlong)&___7FAudioBusProxy__6B_;
  return;
}

