// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 5

// Add @ 145bf0a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FTextureEvictionLRU::Add(FTextureEvictionLRU *this,FOpenGLTexture *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  FSetElementId local_res8 [2];
  undefined8 *local_res18;
  
  if (this == (FTextureEvictionLRU *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (((param_1->EvictionParamsPtr).Ptr == (FTextureEvictionParams *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextureBase->EvictionParamsPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x861,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (((((param_1->EvictionParamsPtr).Ptr)->LRUNode).Index != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!TextureBase->EvictionParamsPtr->LRUNode.IsValidId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x862,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  puVar5 = (undefined8 *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _TextureLRU = 0;
    DAT_155170050 = (undefined8 *)0x0;
    DAT_155170058 = (undefined8 *)0x0;
    _DAT_155170008 = 0;
    _DAT_155170020 = 0;
    _DAT_155170028 = 0;
    _DAT_15517002c = 0x80;
    _DAT_155170030 = 0xffffffff;
    DAT_155170034 = 0;
    DAT_155170040 = (undefined *)0x0;
    DAT_155170048 = 0;
    DAT_155170060 = 10000;
    TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Empty
              ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
               &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                ::__l2::TextureLRU,10000);
    atexit(`FTextureEvictionLRU::GetLRUContainer'::__l2::
           _dynamic_atexit_destructor_for__TextureLRU__);
    _Init_thread_footer(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (DAT_155170008 != DAT_155170034) {
    puVar7 = &DAT_155170038;
    if (DAT_155170040 != (undefined *)0x0) {
      puVar7 = DAT_155170040;
    }
    iVar1 = *(int *)(puVar7 + (ulonglong)(DAT_155170048 - 1U & uVar6) * 4);
    while (iVar1 != -1) {
      puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + _TextureLRU);
      if (*(FOpenGLTexture **)*puVar8 == param_1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!TextureLRU.Contains(TextureBase)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                           ,0x864,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        break;
      }
      iVar1 = *(int *)(puVar8 + 1);
    }
  }
  if (DAT_155170008 - DAT_155170034 == DAT_155170060) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_594873122482550682>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x866,"TextureLRU.Num() != TextureLRU.Max()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = false;
  }
  else {
    if ((DAT_155170060 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaxNumElements > 0 && \"Cannot add values to zero size FOpenGLLruCache\""
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                           ,0x8a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (DAT_155170008 != DAT_155170034) {
      puVar7 = &DAT_155170038;
      if (DAT_155170040 != (undefined *)0x0) {
        puVar7 = DAT_155170040;
      }
      iVar1 = *(int *)(puVar7 + (ulonglong)(DAT_155170048 - 1U & uVar6) * 4);
      while (iVar1 != -1) {
        puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + _TextureLRU);
        if (*(FOpenGLTexture **)*puVar8 == param_1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!LookupSet.Contains(Key)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                             ,0x8b,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          break;
        }
        iVar1 = *(int *)(puVar8 + 1);
      }
    }
    if ((DAT_155170060 <= DAT_155170008 - DAT_155170034) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LookupSet.Num() < MaxNumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                           ,0x8d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    puVar8 = ::operator_new(0x20);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = param_1;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = param_1;
      puVar5 = puVar8;
    }
    puVar5[1] = DAT_155170058;
    if (DAT_155170058 != (undefined8 *)0x0) {
      DAT_155170058[2] = puVar5;
    }
    if (DAT_155170050 == (undefined8 *)0x0) {
      DAT_155170050 = puVar5;
    }
    DAT_155170058 = puVar5;
    local_res18 = puVar5;
    TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
    ::Emplace<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*_const_&>
              ((TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
                *)&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                   ::__l2::TextureLRU,(FCacheEntry **)local_res8,(bool *)&local_res18);
    (((param_1->EvictionParamsPtr).Ptr)->LRUNode).Index = local_res8[0].Index;
    bVar3 = true;
    ((param_1->EvictionParamsPtr).Ptr)->FrameLastRendered = GFrameNumberRenderThread;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return bVar3;
}

// GetLeastRecent @ 145c02720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOpenGLTexture * __thiscall FTextureEvictionLRU::GetLeastRecent(FTextureEvictionLRU *this)

{
  code *pcVar1;
  bool bVar2;
  FOpenGLTexture *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _DAT_15517002c = 0x80;
    _TextureLRU = 0;
    _DAT_155170008 = 0;
    _DAT_155170020 = 0;
    _DAT_155170028 = 0;
    DAT_155170034 = 0;
    DAT_155170040 = 0;
    DAT_155170048 = 0;
    DAT_155170050 = 0;
    DAT_155170058 = 0;
    _DAT_155170030 = 0xffffffff;
    DAT_155170060 = 10000;
    TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Empty
              ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
               &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                ::__l2::TextureLRU,10000);
    atexit(`FTextureEvictionLRU::GetLRUContainer'::__l2::
           _dynamic_atexit_destructor_for__TextureLRU__);
    _Init_thread_footer(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_155170050 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LeastRecent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                         ,0x192,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOpenGLTexture *)(*pcVar1)();
    return pFVar3;
  }
  return *(FOpenGLTexture **)(DAT_155170050 + 0x18);
}

// Remove @ 145c292e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FTextureEvictionLRU::Remove(FTextureEvictionLRU *this,FOpenGLTexture *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  FOpenGLTexture *local_res10;
  
  if ((param_1->EvictionParamsPtr).Ptr != (FTextureEvictionParams *)0x0) {
    local_res10 = param_1;
    if (this == (FTextureEvictionLRU *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((((param_1->EvictionParamsPtr).Ptr)->LRUNode).Index != -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        _TextureLRU = 0;
        DAT_155170050 = 0;
        DAT_155170058 = 0;
        _DAT_155170008 = 0;
        _DAT_155170020 = 0;
        _DAT_155170028 = 0;
        _DAT_15517002c = 0x80;
        _DAT_155170030 = 0xffffffff;
        DAT_155170034 = 0;
        DAT_155170040 = (undefined *)0x0;
        DAT_155170048 = 0;
        DAT_155170060 = 10000;
        TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Empty
                  ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
                   &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                    ::__l2::TextureLRU,10000);
        atexit(`FTextureEvictionLRU::GetLRUContainer'::__l2::
               _dynamic_atexit_destructor_for__TextureLRU__);
        _Init_thread_footer(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      bVar3 = TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Contains
                        ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
                         &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                          ::__l2::TextureLRU,&local_res10);
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!TextureBase->EvictionParamsPtr->LRUNode.IsValidId() || GetLRUContainer().Contains(TextureBase)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                             ,0x854,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((((param_1->EvictionParamsPtr).Ptr)->LRUNode).Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        _TextureLRU = 0;
        DAT_155170050 = 0;
        DAT_155170058 = 0;
        _DAT_155170008 = 0;
        _DAT_155170020 = 0;
        _DAT_155170028 = 0;
        _DAT_15517002c = 0x80;
        _DAT_155170030 = 0xffffffff;
        DAT_155170034 = 0;
        DAT_155170040 = (undefined *)0x0;
        DAT_155170048 = 0;
        DAT_155170060 = 10000;
        TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Empty
                  ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
                   &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                    ::__l2::TextureLRU,10000);
        atexit(`FTextureEvictionLRU::GetLRUContainer'::__l2::
               _dynamic_atexit_destructor_for__TextureLRU__);
        _Init_thread_footer(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      bVar3 = TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Contains
                        ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
                         &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                          ::__l2::TextureLRU,&local_res10);
      if ((bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TextureBase->EvictionParamsPtr->LRUNode.IsValidId() || !GetLRUContainer().Contains(TextureBase)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                             ,0x855,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((((param_1->EvictionParamsPtr).Ptr)->LRUNode).Index != -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        _TextureLRU = 0;
        DAT_155170050 = 0;
        DAT_155170058 = 0;
        _DAT_155170008 = 0;
        _DAT_155170020 = 0;
        _DAT_155170028 = 0;
        _DAT_15517002c = 0x80;
        _DAT_155170030 = 0xffffffff;
        DAT_155170034 = 0;
        DAT_155170040 = (undefined *)0x0;
        DAT_155170048 = 0;
        DAT_155170060 = 10000;
        TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Empty
                  ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
                   &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                    ::__l2::TextureLRU,10000);
        atexit(`FTextureEvictionLRU::GetLRUContainer'::__l2::
               _dynamic_atexit_destructor_for__TextureLRU__);
        _Init_thread_footer(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      if (DAT_155170008 != DAT_155170034) {
        puVar6 = &DAT_155170038;
        if (DAT_155170040 != (undefined *)0x0) {
          puVar6 = DAT_155170040;
        }
        iVar1 = *(int *)(puVar6 + (ulonglong)(DAT_155170048 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        while (iVar1 != -1) {
          puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + _TextureLRU);
          if (((FCacheEntry *)*puVar5)->Key == param_1) {
            if (puVar5 != (undefined8 *)0x0) {
              TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Remove
                        ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
                         &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                          ::__l2::TextureLRU,(FCacheEntry *)*puVar5);
            }
            break;
          }
          iVar1 = *(int *)(puVar5 + 1);
        }
      }
      (((param_1->EvictionParamsPtr).Ptr)->LRUNode).Index = -1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return;
}

// TickEviction @ 145c31e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FTextureEvictionLRU::TickEviction(FTextureEvictionLRU *this)

{
  FOpenGLTexture *this_00;
  code *pcVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  LogTextureEvictionDebugInfo();
  if (this == (FTextureEvictionLRU *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _TextureLRU = 0;
    DAT_155170050 = (undefined8 *)0x0;
    DAT_155170058 = (undefined8 *)0x0;
    _DAT_155170008 = 0;
    _DAT_155170020 = 0;
    _DAT_155170028 = 0;
    _DAT_15517002c = 0x80;
    _DAT_155170030 = 0xffffffff;
    DAT_155170034 = 0;
    DAT_155170040 = 0;
    DAT_155170048 = 0;
    DAT_155170060 = 10000;
    TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Empty
              ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
               &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                ::__l2::TextureLRU,10000);
    atexit(`FTextureEvictionLRU::GetLRUContainer'::__l2::
           _dynamic_atexit_destructor_for__TextureLRU__);
    _Init_thread_footer(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar4 = GOGLTextureMinLRUCapacity;
  if (GOGLTextureMinLRUCapacity < 0) {
    iVar4 = 0;
  }
  if (iVar4 < DAT_155170008 - DAT_155170034) {
    do {
      if ((DAT_155170050 == (undefined8 *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("LeastRecent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                             ,0x192,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((GFrameNumberRenderThread <=
           (uint)(GOGLTextureEvictFramesToLive +
                 *(int *)(*(longlong *)(DAT_155170050[3] + 0x150) + 0x18))) ||
         (GOGLTexturesToEvictPerFrame <= iVar5)) break;
      if ((DAT_155170050 == (undefined8 *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("LeastRecent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                             ,0x185,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar2 = DAT_155170050;
      this_00 = (FOpenGLTexture *)DAT_155170050[3];
      if (DAT_155170050 != (undefined8 *)0x0) {
        TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
        ::Remove((TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
                  *)&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                     ::__l2::TextureLRU,(FOpenGLTexture *)*DAT_155170050);
        if (puVar2 == DAT_155170050) {
          DAT_155170050 = (undefined8 *)puVar2[2];
        }
        if (puVar2 == DAT_155170058) {
          DAT_155170058 = (undefined8 *)puVar2[1];
        }
        if (puVar2[1] != 0) {
          *(undefined8 *)(puVar2[1] + 0x10) = puVar2[2];
        }
        if (puVar2[2] != 0) {
          *(undefined8 *)(puVar2[2] + 8) = puVar2[1];
        }
        puVar2[1] = 0;
        puVar2[2] = 0;
        ::operator_delete(puVar2,0x20);
      }
      (((this_00->EvictionParamsPtr).Ptr)->LRUNode).Index = -1;
      FOpenGLTexture::TryEvictGLResource(this_00);
      iVar5 = iVar5 + 1;
      iVar4 = GOGLTextureMinLRUCapacity;
      if (GOGLTextureMinLRUCapacity < 0) {
        iVar4 = 0;
      }
    } while (iVar4 < DAT_155170008 - DAT_155170034);
  }
                    /* WARNING: Could not recover jumptable at 0x000145c32042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Touch @ 145c32510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FTextureEvictionLRU::Touch(FTextureEvictionLRU *this,FOpenGLTexture *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  if (this == (FTextureEvictionLRU *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (((param_1->EvictionParamsPtr).Ptr == (FTextureEvictionParams *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextureBase->EvictionParamsPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x872,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((((param_1->EvictionParamsPtr).Ptr)->LRUNode).Index == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextureBase->EvictionParamsPtr->LRUNode.IsValidId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x873,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) <
       `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _TextureLRU = 0;
    DAT_155170050 = 0;
    DAT_155170058 = 0;
    _DAT_155170008 = 0;
    _DAT_155170020 = 0;
    _DAT_155170028 = 0;
    _DAT_15517002c = 0x80;
    _DAT_155170030 = 0xffffffff;
    DAT_155170034 = 0;
    DAT_155170040 = (undefined *)0x0;
    DAT_155170048 = 0;
    DAT_155170060 = 10000;
    TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Empty
              ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
               &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                ::__l2::TextureLRU,10000);
    atexit(`FTextureEvictionLRU::GetLRUContainer'::__l2::
           _dynamic_atexit_destructor_for__TextureLRU__);
    _Init_thread_footer(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (DAT_155170008 != DAT_155170034) {
    puVar7 = &DAT_155170038;
    if (DAT_155170040 != (undefined *)0x0) {
      puVar7 = DAT_155170040;
    }
    iVar1 = *(int *)(puVar7 + (ulonglong)(DAT_155170048 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    while (iVar1 != -1) {
      puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + _TextureLRU);
      if (*(FOpenGLTexture **)*puVar9 == param_1) goto LAB_145c3271b;
      iVar1 = *(int *)(puVar9 + 1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("GetLRUContainer().Contains(TextureBase)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                     ,0x874,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_145c3271b:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) <
       `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _TextureLRU = 0;
    DAT_155170050 = 0;
    DAT_155170058 = 0;
    _DAT_155170008 = 0;
    _DAT_155170020 = 0;
    _DAT_155170028 = 0;
    _DAT_15517002c = 0x80;
    _DAT_155170030 = 0xffffffff;
    DAT_155170034 = 0;
    DAT_155170040 = (undefined *)0x0;
    DAT_155170048 = 0;
    DAT_155170060 = 10000;
    TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Empty
              ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
               &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                ::__l2::TextureLRU,10000);
    atexit(`FTextureEvictionLRU::GetLRUContainer'::__l2::
           _dynamic_atexit_destructor_for__TextureLRU__);
    _Init_thread_footer(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  lVar2 = *(longlong *)
           (_TextureLRU + (longlong)(((param_1->EvictionParamsPtr).Ptr)->LRUNode).Index * 0x10);
  if ((DAT_155170050 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LeastRecent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                         ,0x241,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((DAT_155170058 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MostRecent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((lVar2 == DAT_155170050) && (*(longlong *)(DAT_155170050 + 0x10) != 0)) {
    DAT_155170050 = *(longlong *)(DAT_155170050 + 0x10);
  }
  lVar4 = DAT_155170058;
  if (lVar2 != DAT_155170058) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
    }
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
    }
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(longlong *)(lVar2 + 8) = DAT_155170058;
    lVar4 = lVar2;
    if (DAT_155170058 != 0) {
      *(longlong *)(DAT_155170058 + 0x10) = lVar2;
    }
  }
  DAT_155170058 = lVar4;
  ((param_1->EvictionParamsPtr).Ptr)->FrameLastRendered = GFrameNumberRenderThread;
                    /* WARNING: Could not recover jumptable at 0x000145c328e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

