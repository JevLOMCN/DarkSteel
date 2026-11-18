// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// SetLandscapeEditorServices @ 145f667f0

void __thiscall
ILandscapeModule::SetLandscapeEditorServices
          (ILandscapeModule *this,ILandscapeEditorServices *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeModule.h"
             ,0x1a,L"Pure virtual not implemented (%s)");
  return;
}

// GetLandscapeEditorServices @ 145f66820

ILandscapeEditorServices * __thiscall
ILandscapeModule::GetLandscapeEditorServices(ILandscapeModule *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeModule.h"
             ,0x1b,L"Pure virtual not implemented (%s)");
  return (ILandscapeEditorServices *)0x0;
}

// SetCreateLandscapeComponentSceneProxyDelegate @ 145f66850

void __thiscall
ILandscapeModule::SetCreateLandscapeComponentSceneProxyDelegate
          (ILandscapeModule *this,
          TDelegate<FPrimitiveSceneProxy_*___cdecl(ULandscapeComponent_*),FDefaultDelegateUserPolicy>
          *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeModule.h"
             ,0x1c,L"Pure virtual not implemented (%s)");
  return;
}

// GetCreateLandscapeComponentSceneProxyDelegate @ 145f66880

TDelegate<FPrimitiveSceneProxy_*___cdecl(ULandscapeComponent_*),FDefaultDelegateUserPolicy> *
__thiscall ILandscapeModule::GetCreateLandscapeComponentSceneProxyDelegate(ILandscapeModule *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeModule.h"
             ,0x1e,L"Pure virtual not implemented (%s)");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TDelegate<class_FPrimitiveSceneProxy*___ptr64___cdecl(ULandscapeComponent*___ptr64),FDefaultDelegateUserPolicy>_const&___ptr64___cdecl_ILandscapeModule::GetCreateLandscapeComponentSceneProxyDelegate(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TDelegate<class_FPrimitiveSceneProxy*___ptr64___cdecl(ULandscapeComponent*___ptr64),FDefaultDelegateUserPolicy>_const&___ptr64___cdecl_ILandscapeModule::GetCreateLandscapeComponentSceneProxyDelegate(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TDelegate<class_FPrimitiveSceneProxy*___ptr64___cdecl(ULandscapeComponent*___ptr64),FDefaultDelegateUserPolicy>_const&___ptr64___cdecl_ILandscapeModule::GetCreateLandscapeComponentSceneProxyDelegate(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`ILandscapeModule::GetCreateLandscapeComponentSceneProxyDelegate'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_virtual_class_TDelegate<class_FPrimitiveSceneProxy*___ptr64___cdecl(ULandscapeComponent*___ptr64),FDefaultDelegateUserPolicy>_const&___ptr64___cdecl_ILandscapeModule::GetCreateLandscapeComponentSceneProxyDelegate(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TDelegate<FPrimitiveSceneProxy_*___cdecl(ULandscapeComponent_*),FDefaultDelegateUserPolicy>
          *)&`public:_virtual_class_TDelegate<class_FPrimitiveSceneProxy*___ptr64___cdecl(ULandscapeComponent*___ptr64),FDefaultDelegateUserPolicy>_const&___ptr64___cdecl_ILandscapeModule::GetCreateLandscapeComponentSceneProxyDelegate(void)const___ptr64'
             ::__l2::Dummy;
}

