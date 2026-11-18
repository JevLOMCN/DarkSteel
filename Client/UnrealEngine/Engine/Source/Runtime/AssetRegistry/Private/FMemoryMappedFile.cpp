// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// FMemoryMappedFile @ 142ad6910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMemoryMappedFile * __thiscall
UE::AssetDataGather::Private::FMemoryMappedFile::FMemoryMappedFile
          (FMemoryMappedFile *this,wchar_t *param_1)

{
  IMappedFileRegion *pIVar1;
  IMappedFileHandle *pIVar2;
  code *pcVar3;
  bool bVar4;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar5;
  FMemoryMappedFile *pFVar6;
  undefined8 *puVar7;
  IMappedFileRegion *pIVar8;
  TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> TVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  FMemoryMappedFile local_48 [2];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  (this->Handle).Ptr = (IMappedFileHandle *)0x0;
  (this->Region).Ptr = (IMappedFileRegion *)0x0;
  this_00 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(this_00);
  local_58 = 0;
  (**(code **)((longlong)*pIVar5 + 0x1b0))(pIVar5,&local_48[0].Region,param_1,0);
  uVar10 = (ulonglong)local_28;
  if (2 < uVar10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMemoryMappedFile *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
        ::__l2::bIsSameType)[uVar10] != '\0') goto LAB_142ad6a97;
  if (local_28 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMemoryMappedFile *)(*pcVar3)();
      return pFVar6;
    }
  }
  TVar9.Ptr = local_48[0].Region.Ptr;
  local_48[0].Region.Ptr = (IMappedFileRegion *)0x0;
  if (2 < local_28) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMemoryMappedFile *)(*pcVar3)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(&local_48[0].Region);
  local_28 = 2;
  if (this == local_48) {
    if (TVar9.Ptr != (IMappedFileRegion *)0x0) {
      puVar7 = (undefined8 *)(TVar9.Ptr)->_padding_;
      goto LAB_142ad6a5c;
    }
  }
  else {
    pIVar1 = (IMappedFileRegion *)(this->Handle).Ptr;
    (this->Handle).Ptr = (IMappedFileHandle *)TVar9.Ptr;
    if (pIVar1 != (IMappedFileRegion *)0x0) {
      puVar7 = (undefined8 *)pIVar1->_padding_;
      TVar9.Ptr = pIVar1;
LAB_142ad6a5c:
      (*(code *)*puVar7)(TVar9.Ptr,1);
    }
  }
  pIVar2 = (this->Handle).Ptr;
  pIVar8 = (IMappedFileRegion *)(**(code **)(pIVar2->_padding_ + 8))(pIVar2,0,0x7fffffffffffffff,0);
  pIVar1 = (this->Region).Ptr;
  if ((pIVar1 != pIVar8) && ((this->Region).Ptr = pIVar8, pIVar1 != (IMappedFileRegion *)0x0)) {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
  }
LAB_142ad6a97:
  uVar10 = (ulonglong)local_28;
  if (2 < local_28) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMemoryMappedFile *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10] !=
      Core::Private::
      TDestructorCaller<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FEmptyType>
      ::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_48[0].Region);
  }
  return this;
}

