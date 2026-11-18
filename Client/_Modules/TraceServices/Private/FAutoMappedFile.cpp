// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// GetData @ 14d464a30

SYMS_String8 * __thiscall
TraceServices::`anonymous_namespace'::FAutoMappedFile::GetData
          (void *this,SYMS_String8 *__return_storage_ptr__)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  SYMS_String8 *pSVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)((longlong)this + 0x18);
  if (lVar1 == 0) {
    puVar7 = (undefined8 *)syms_str8(local_18,0,0);
    puVar8 = &local_38;
    local_38 = *puVar7;
    uStack_30 = puVar7[1];
  }
  else {
    if ((*(longlong *)(lVar1 + 8) == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MappedPtr && MappedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                         ,0x19,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pSVar6 = (SYMS_String8 *)(*pcVar3)();
        return pSVar6;
      }
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    lVar2 = *(longlong *)((longlong)this + 0x18);
    if ((*(longlong *)(lVar2 + 8) == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MappedPtr && MappedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                         ,0x19,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pSVar6 = (SYMS_String8 *)(*pcVar3)();
        return pSVar6;
      }
    }
    puVar7 = (undefined8 *)syms_str8(local_28,*(undefined8 *)(lVar2 + 8),lVar1);
    puVar8 = &local_48;
    local_48 = *puVar7;
    uStack_40 = puVar7[1];
  }
  uVar4 = puVar8[1];
  __return_storage_ptr__->str = (uchar *)*puVar8;
  __return_storage_ptr__->size = uVar4;
  return __return_storage_ptr__;
}

// Load @ 14d4755b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TraceServices::`anonymous_namespace'::FAutoMappedFile::Load(void *this,wchar_t *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48;
  undefined8 *local_40 [3];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  this_00 = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this_00);
  local_58 = 0;
  (**(code **)((longlong)*pIVar7 + 0x1b0))(pIVar7,local_40,param_1,0);
  uVar10 = (ulonglong)local_28;
  if ((2 < uVar10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10 + 4) == '\0') {
    puVar9 = *(undefined8 **)((longlong)this + 0x10);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)this + 0x10) = 0;
      (**(code **)*puVar9)(puVar9,1);
    }
    puVar9 = *(undefined8 **)((longlong)this + 0x18);
    if (puVar9 == (undefined8 *)0x0) goto LAB_14d475760;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    if ((local_28 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    puVar9 = local_40[0];
    local_40[0] = (undefined8 *)0x0;
    if ((2 < local_28) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_28])(local_40);
    local_28 = 2;
    plVar1 = (longlong *)((longlong)this + 0x10);
    if (plVar1 == &local_48) {
      if (puVar9 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)*puVar9;
        goto LAB_14d4756f8;
      }
    }
    else {
      puVar2 = (undefined8 *)*plVar1;
      *plVar1 = (longlong)puVar9;
      if (puVar2 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)*puVar2;
        puVar9 = puVar2;
LAB_14d4756f8:
        (*(code *)*puVar8)(puVar9,1);
      }
    }
    plVar1 = (longlong *)*plVar1;
    puVar8 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0,plVar1[1],0);
    puVar9 = *(undefined8 **)((longlong)this + 0x18);
    if ((puVar9 == puVar8) ||
       (*(undefined8 **)((longlong)this + 0x18) = puVar8, puVar9 == (undefined8 *)0x0))
    goto LAB_14d475760;
  }
  (**(code **)*puVar9)(puVar9,1);
LAB_14d475760:
  lVar3 = *(longlong *)((longlong)this + 0x18);
  uVar10 = (ulonglong)local_28;
  if ((2 < local_28) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar10])(local_40);
  return lVar3 != 0;
}

