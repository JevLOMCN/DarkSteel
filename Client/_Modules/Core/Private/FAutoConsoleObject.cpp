// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FAutoConsoleObject @ 14161bc90

FAutoConsoleObject * __thiscall
FAutoConsoleObject::FAutoConsoleObject(FAutoConsoleObject *this,IConsoleObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAutoConsoleObject *pFVar4;
  longlong lVar5;
  FAutoConsoleObject *local_28;
  FAutoConsoleObject *local_20;
  FAutoConsoleObject *local_18 [2];
  
  this->Target = param_1;
  this->_padding_ = (longlong)vftable;
  if (param_1 == (IConsoleObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x592,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAutoConsoleObject *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = (**(code **)(this->Target->_padding_ + 0x18))();
  if ((uVar3 >> 9 & 1) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`FAutoConsoleObject::AccessGeneralShaderChangeCvars'::__l2::
               _dynamic_atexit_destructor_for__GeneralShaderChangeCvars__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_28 = this;
    if ((GeneralShaderChangeCvars.AllocatorInstance.Data <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 <
        GeneralShaderChangeCvars.AllocatorInstance.Data +
        (longlong)GeneralShaderChangeCvars.ArrayMax * 8)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAutoConsoleObject *)(*pcVar1)();
        return pFVar4;
      }
    }
    if (GeneralShaderChangeCvars.ArrayNum == GeneralShaderChangeCvars.ArrayMax) {
      GeneralShaderChangeCvars.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&GeneralShaderChangeCvars.AllocatorInstance,
                      &GeneralShaderChangeCvars.ArrayMax);
    }
    lVar5 = (longlong)GeneralShaderChangeCvars.ArrayNum;
    GeneralShaderChangeCvars.ArrayNum = GeneralShaderChangeCvars.ArrayNum + 1;
    *(FAutoConsoleObject **)(GeneralShaderChangeCvars.AllocatorInstance.Data + lVar5 * 8) = local_28
    ;
    return this;
  }
  uVar3 = (**(code **)(this->Target->_padding_ + 0x18))();
  if ((uVar3 >> 10 & 1) == 0) {
    uVar3 = (**(code **)(this->Target->_padding_ + 0x18))();
    if ((uVar3 >> 0xb & 1) != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          atexit(`FAutoConsoleObject::AccessDesktopShaderChangeCvars'::__l2::
                 _dynamic_atexit_destructor_for__DesktopShaderChangeCvars__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      local_18[0] = this;
      if ((DesktopShaderChangeCvars.AllocatorInstance.Data <= (FScriptContainerElement *)local_18)
         && ((FScriptContainerElement *)local_18 <
             DesktopShaderChangeCvars.AllocatorInstance.Data +
             (longlong)DesktopShaderChangeCvars.ArrayMax * 8)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FAutoConsoleObject *)(*pcVar1)();
          return pFVar4;
        }
      }
      if (DesktopShaderChangeCvars.ArrayNum == DesktopShaderChangeCvars.ArrayMax) {
        DesktopShaderChangeCvars.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&DesktopShaderChangeCvars.AllocatorInstance,
                        &DesktopShaderChangeCvars.ArrayMax);
      }
      lVar5 = (longlong)DesktopShaderChangeCvars.ArrayNum;
      DesktopShaderChangeCvars.ArrayNum = DesktopShaderChangeCvars.ArrayNum + 1;
      *(FAutoConsoleObject **)(DesktopShaderChangeCvars.AllocatorInstance.Data + lVar5 * 8) =
           local_18[0];
    }
    return this;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FAutoConsoleObject::AccessMobileShaderChangeCvars'::__l2::
             _dynamic_atexit_destructor_for__MobileShaderChangeCvars__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_20 = this;
  if ((MobileShaderChangeCvars.AllocatorInstance.Data <= (FScriptContainerElement *)&local_20) &&
     ((FScriptContainerElement *)&local_20 <
      MobileShaderChangeCvars.AllocatorInstance.Data +
      (longlong)MobileShaderChangeCvars.ArrayMax * 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAutoConsoleObject *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (MobileShaderChangeCvars.ArrayNum == MobileShaderChangeCvars.ArrayMax) {
    MobileShaderChangeCvars.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&MobileShaderChangeCvars.AllocatorInstance,
                    &MobileShaderChangeCvars.ArrayMax);
  }
  lVar5 = (longlong)MobileShaderChangeCvars.ArrayNum;
  MobileShaderChangeCvars.ArrayNum = MobileShaderChangeCvars.ArrayNum + 1;
  *(FAutoConsoleObject **)(MobileShaderChangeCvars.AllocatorInstance.Data + lVar5 * 8) = local_20;
  return this;
}

// ~FAutoConsoleObject @ 1416206a0

void __thiscall FAutoConsoleObject::~FAutoConsoleObject(FAutoConsoleObject *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)vftable;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141620708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->Target,1);
  return;
}

// AccessDesktopShaderChangeCvars @ 141625d80

TArray<FAutoConsoleObject_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FAutoConsoleObject::AccessDesktopShaderChangeCvars(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FAutoConsoleObject::AccessDesktopShaderChangeCvars'::__l2::
             _dynamic_atexit_destructor_for__DesktopShaderChangeCvars__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DesktopShaderChangeCvars;
}

// AccessGeneralShaderChangeCvars @ 141625df0

TArray<FAutoConsoleObject_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FAutoConsoleObject::AccessGeneralShaderChangeCvars(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FAutoConsoleObject::AccessGeneralShaderChangeCvars'::__l2::
             _dynamic_atexit_destructor_for__GeneralShaderChangeCvars__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &GeneralShaderChangeCvars;
}

// AccessMobileShaderChangeCvars @ 141625e60

TArray<FAutoConsoleObject_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FAutoConsoleObject::AccessMobileShaderChangeCvars(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FAutoConsoleObject::AccessMobileShaderChangeCvars'::__l2::
             _dynamic_atexit_destructor_for__MobileShaderChangeCvars__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &MobileShaderChangeCvars;
}

