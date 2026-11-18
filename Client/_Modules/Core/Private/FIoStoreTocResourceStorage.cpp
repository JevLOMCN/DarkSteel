// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// ChopView<unsigned_char> @ 141788c20

TArrayView<unsigned_char_const_,int> * __thiscall
FIoStoreTocResourceStorage::ChopView<unsigned_char>
          (FIoStoreTocResourceStorage *this,
          TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_char_const_,int> *pTVar3;
  FIoStoreTocResourceStorage *local_28;
  int local_20;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_28 = this;
  local_20 = param_1;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
    ::__l2::Invokers[(this->Data).TypeIndex])(&local_18,(<lambda_1> *)&local_28,&this->Data);
  if (param_1 != local_18.ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequestedSize == Bytes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                       ,0xc0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->DataPtr = local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = param_1;
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// ChopView<int> @ 141788ce0

TArrayView<int_const_,int> * __thiscall
FIoStoreTocResourceStorage::ChopView<int>
          (FIoStoreTocResourceStorage *this,TArrayView<int_const_,int> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<int_const_,int> *pTVar3;
  FIoStoreTocResourceStorage *local_28;
  int local_20;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_28 = this;
  local_20 = param_1 * 4;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
    ::__l2::Invokers[(this->Data).TypeIndex])(&local_18,(<lambda_1> *)&local_28,&this->Data);
  if (param_1 * 4 != local_18.ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequestedSize == Bytes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                       ,0xc0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<int_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->DataPtr = (int *)local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = param_1;
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<int_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// FIoStoreTocResourceStorage @ 1417a26d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoStoreTocResourceStorage * __thiscall
FIoStoreTocResourceStorage::FIoStoreTocResourceStorage
          (FIoStoreTocResourceStorage *this,wchar_t *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  IMappedFileHandle *pIVar5;
  TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> TVar6;
  bool bVar7;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar8;
  longlong lVar9;
  FIoStoreTocResourceStorage *pFVar10;
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  *pTVar11;
  ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
  FVar12;
  ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_> FVar13;
  ulonglong uVar14;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  IMappedFileHandle *local_258 [3];
  byte local_240;
  longlong local_238 [3];
  byte local_220;
  undefined8 *local_218;
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  local_210;
  longlong local_200;
  longlong lStack_1f8;
  longlong local_1f0;
  longlong lStack_1e8;
  longlong local_1e0;
  longlong lStack_1d8;
  longlong local_1d0;
  longlong lStack_1c8;
  longlong local_1c0;
  longlong lStack_1b8;
  longlong local_1b0;
  longlong lStack_1a8;
  longlong local_1a0;
  longlong lStack_198;
  longlong local_190;
  longlong lStack_188;
  longlong local_180;
  longlong lStack_178;
  void *local_170;
  undefined4 local_168;
  undefined4 local_164;
  FMappedFile local_160;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_288;
  (this->Data).TypeIndex = '\0';
  this_00 = FPlatformFileManager::Get();
  pIVar8 = FPlatformFileManager::GetPlatformFile(this_00);
  pTVar4 = CVarIoStoreAllowMemoryMappedUtoc.Ref;
  bVar7 = IsInParallelGameThread();
  if (!bVar7) {
    bVar7 = IsInGameThread();
    lVar9 = 1;
    if (!bVar7) goto LAB_1417a273d;
  }
  lVar9 = 0;
LAB_1417a273d:
  if (pTVar4->ShadowedValue[lVar9] != false) {
    local_268 = 0;
    (**(code **)((longlong)*pIVar8 + 0x1b0))(pIVar8,local_258,param_1,0);
    uVar14 = (ulonglong)local_240;
    if (2 < uVar14) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FIoStoreTocResourceStorage *)(*pcVar3)();
        return pFVar10;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar14 + 4) != '\0') {
      local_160.MappedFile.Ptr = (IMappedFileHandle *)0x0;
      local_160.MappedRegions.AllocatorInstance.SecondaryData =
           (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)0x0;
      local_160.MappedRegions.ArrayNum = 0;
      local_160.MappedRegions.ArrayMax = 10;
      local_160.OwnedRegions.AllocatorInstance.SecondaryData =
           (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
            )0x0;
      local_160.OwnedRegions.ArrayNum = 0;
      local_160.OwnedRegions.ArrayMax = 10;
      local_160.Cursor = 0;
      local_160.bLastReadBlockWasOwned = false;
      if (local_240 != 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FIoStoreTocResourceStorage *)(*pcVar3)();
          return pFVar10;
        }
      }
      pIVar5 = local_258[0];
      local_258[0] = (IMappedFileHandle *)0x0;
      if (2 < local_240) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FIoStoreTocResourceStorage *)(*pcVar3)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_240])(local_258);
      TVar6.Ptr = local_160.MappedFile.Ptr;
      local_240 = 2;
      local_160.MappedFile.Ptr = pIVar5;
      if (TVar6.Ptr != (IMappedFileHandle *)0x0) {
        (**(code **)(TVar6.Ptr)->_padding_)(TVar6.Ptr,1);
      }
      uVar14 = (ulonglong)(this->Data).TypeIndex;
      if (2 < uVar14) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FIoStoreTocResourceStorage *)(*pcVar3)();
          return pFVar10;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] ==
          UE::Core::Private::TDestructorCaller<FIoStoreTocResourceStorage::FReadBlocks>::Destruct) {
        pTVar11 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
                   *)(this->Data)._padding_;
        if (pTVar11 ==
            (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
             *)0x0) {
          pTVar11 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
                     *)&(this->Data)._padding_;
        }
        DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int>
                  (pTVar11,(int)(this->Data)._padding_);
        pvVar1 = (void *)(this->Data)._padding_;
        if (pvVar1 != (void *)0x0) {
          FMemory::Free(pvVar1);
        }
        puVar2 = (undefined8 *)(this->Data)._padding_;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(this);
      }
      FMappedFile::FMappedFile((FMappedFile *)this,&local_160);
      (this->Data).TypeIndex = '\x01';
      FVar12 = (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                )&local_160.OwnedRegions;
      if (local_160.OwnedRegions.AllocatorInstance.SecondaryData !=
          (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
           )0x0) {
        FVar12 = local_160.OwnedRegions.AllocatorInstance.SecondaryData;
      }
      DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int>
                ((TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
                  *)FVar12,local_160.OwnedRegions.ArrayNum);
      if (local_160.OwnedRegions.AllocatorInstance.SecondaryData !=
          (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
           )0x0) {
        FMemory::Free((void *)local_160.OwnedRegions.AllocatorInstance.SecondaryData);
      }
      FVar13 = (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)
               &local_160.MappedRegions;
      if (local_160.MappedRegions.AllocatorInstance.SecondaryData !=
          (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)0x0) {
        FVar13 = local_160.MappedRegions.AllocatorInstance.SecondaryData;
      }
      DestructItems<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>,int>
                ((TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)FVar13,
                 local_160.MappedRegions.ArrayNum);
      if (local_160.MappedRegions.AllocatorInstance.SecondaryData !=
          (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)0x0) {
        FMemory::Free((void *)local_160.MappedRegions.AllocatorInstance.SecondaryData);
      }
      if (local_160.MappedFile.Ptr != (IMappedFileHandle *)0x0) {
        (**(code **)(local_160.MappedFile.Ptr)->_padding_)(local_160.MappedFile.Ptr,1);
      }
    }
    uVar14 = (ulonglong)local_240;
    if (2 < local_240) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FIoStoreTocResourceStorage *)(*pcVar3)();
        return pFVar10;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(local_258);
  }
  uVar14 = (ulonglong)(this->Data).TypeIndex;
  if (2 < uVar14) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FIoStoreTocResourceStorage *)(*pcVar3)();
      return pFVar10;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar14) != '\0') {
    (**(code **)((longlong)*pIVar8 + 0xf0))(pIVar8,local_238,param_1,0);
    uVar14 = (ulonglong)local_220;
    if (2 < uVar14) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FIoStoreTocResourceStorage *)(*pcVar3)();
        return pFVar10;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar14) != '\0') {
      local_218 = (undefined8 *)0x0;
      local_170 = (void *)0x0;
      local_168 = 0;
      local_164 = 10;
      if (local_220 != 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FIoStoreTocResourceStorage *)(*pcVar3)();
          return pFVar10;
        }
      }
      lVar9 = local_238[0];
      local_238[0] = 0;
      if (2 < local_220) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FIoStoreTocResourceStorage *)(*pcVar3)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_220])(local_238);
      puVar2 = local_218;
      local_220 = 2;
      local_218 = (undefined8 *)lVar9;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)();
      }
      uVar14 = (ulonglong)(this->Data).TypeIndex;
      if (2 < uVar14) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FIoStoreTocResourceStorage *)(*pcVar3)();
          return pFVar10;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] !=
          UE::Core::Private::TDestructorCaller<FEmptyVariantState>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(this);
      }
      (this->Data)._padding_ = lVar9;
      local_218 = (undefined8 *)0x0;
      (this->Data)._padding_ = 0;
      if (local_170 == (void *)0x0) {
        (this->Data)._padding_ = (longlong)local_210.AllocatorInstance.Data;
        (this->Data)._padding_ = local_210._8_8_;
        (this->Data)._padding_ = local_200;
        (this->Data)._padding_ = lStack_1f8;
        (this->Data)._padding_ = local_1f0;
        (this->Data)._padding_ = lStack_1e8;
        (this->Data)._padding_ = local_1e0;
        (this->Data)._padding_ = lStack_1d8;
        (this->Data)._padding_ = local_1d0;
        (this->Data)._padding_ = lStack_1c8;
        (this->Data)._padding_ = local_1c0;
        (this->Data)._padding_ = lStack_1b8;
        (this->Data)._padding_ = local_1b0;
        (this->Data)._padding_ = lStack_1a8;
        (this->Data)._padding_ = local_1a0;
        (this->Data)._padding_ = lStack_198;
        (this->Data)._padding_ = local_190;
        (this->Data)._padding_ = lStack_188;
        (this->Data)._padding_ = local_180;
        (this->Data)._padding_ = lStack_178;
      }
      (this->Data)._padding_ = (longlong)local_170;
      *(undefined4 *)&(this->Data)._padding_ = local_168;
      *(undefined4 *)((longlong)&(this->Data)._padding_ + 4) = local_164;
      (this->Data).TypeIndex = '\x02';
      DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int>
                (&local_210,0);
      if (local_170 != (void *)0x0) {
        FMemory::Free(local_170);
      }
      if (local_218 != (undefined8 *)0x0) {
        (**(code **)*local_218)(local_218,1);
      }
    }
    uVar14 = (ulonglong)local_220;
    if (2 < local_220) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FIoStoreTocResourceStorage *)(*pcVar3)();
        return pFVar10;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(local_238);
  }
  return this;
}

// ChopBytes @ 1417b7d10

TArrayView<unsigned_char_const_,int> * __cdecl
FIoStoreTocResourceStorage::ChopBytes
          (TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,FMappedFile *param_1,
          int param_2)

{
  ulong64 *puVar1;
  TArray<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  IMappedFileHandle *pIVar6;
  longlong lVar7;
  code *pcVar8;
  IMappedFileRegion *pIVar9;
  bool bVar10;
  int iVar11;
  TArrayView<unsigned_char_const_,int> *pTVar12;
  FGenericPlatformMemoryConstants *pFVar13;
  uchar *_Src;
  ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_> FVar14;
  ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_> FVar15;
  ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
  FVar16;
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  *pTVar17;
  IMappedFileRegion *local_28 [2];
  
  if (param_2 < 1) {
    __return_storage_ptr__->DataPtr = (uchar *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    pIVar6 = (param_1->MappedFile).Ptr;
    local_28[0] = (IMappedFileRegion *)
                  (**(code **)(pIVar6->_padding_ + 8))
                            (pIVar6,(longlong)param_1->Cursor,(longlong)param_2);
    puVar1 = &local_28[0]->MappedSize;
    if (((local_28[0]->MappedPtr == (uchar *)0x0) || (*puVar1 == 0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("MappedPtr && MappedSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                            ,0x19,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TArrayView<unsigned_char_const_,int> *)(*pcVar8)();
      return pTVar12;
    }
    uVar5 = (uint)*puVar1;
    if ((uVar5 != param_2) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<8353316283793540262>,true,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                            ,0x4a6,"ActualSize == Size"), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TArrayView<unsigned_char_const_,int> *)(*pcVar8)();
      return pTVar12;
    }
    pFVar13 = FWindowsPlatformMemory::GetConstants();
    if ((ulonglong)(longlong)(int)uVar5 < pFVar13->OsAllocationGranularity) {
      _Src = IMappedFileRegion::GetMappedPtr(local_28[0]);
      piVar3 = &(param_1->OwnedRegions).ArrayMax;
      iVar11 = (param_1->OwnedRegions).ArrayNum;
      if (iVar11 == *piVar3) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>_>
                           (0x810,&(param_1->OwnedRegions).AllocatorInstance,piVar3);
      }
      (param_1->OwnedRegions).ArrayNum = iVar11 + 1;
      FVar16 = (param_1->OwnedRegions).AllocatorInstance.SecondaryData;
      if (FVar16 == (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                     )0x0) {
        FVar16 = (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                  )&param_1->OwnedRegions;
      }
      pTVar17 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
                 *)((longlong)iVar11 * 0x10 + (longlong)FVar16);
      (pTVar17->AllocatorInstance).Data = (uchar *)0x0;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if (((_Src == (uchar *)0x0) && (uVar5 != 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ptr != nullptr || Count == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x2d3,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar12 = (TArrayView<unsigned_char_const_,int> *)(*pcVar8)();
        return pTVar12;
      }
      pTVar17->ArrayNum = uVar5;
      if (uVar5 == 0) {
        pTVar17->ArrayMax = 0;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<0,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::ForElementType<unsigned_char>_>
                  (1,1,uVar5,0,(ForElementType<unsigned_char> *)pTVar17,uVar5,&pTVar17->ArrayMax);
        memcpy((pTVar17->AllocatorInstance).Data,_Src,(longlong)(int)uVar5);
      }
      pIVar9 = local_28[0];
      if (local_28[0] != (IMappedFileRegion *)0x0) {
        local_28[0] = (IMappedFileRegion *)0x0;
        (**(code **)pIVar9->_padding_)(pIVar9,1);
      }
      param_1->Cursor = param_1->Cursor + uVar5;
      param_1->bLastReadBlockWasOwned = true;
      MakeConstArrayView<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_&,TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                (__return_storage_ptr__,pTVar17);
    }
    else {
      FVar15 = (param_1->MappedRegions).AllocatorInstance.SecondaryData;
      pTVar2 = &param_1->MappedRegions;
      FVar14 = FVar15;
      if (FVar15 == (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>
                     )0x0) {
        FVar14 = (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)
                 pTVar2;
      }
      if ((ulonglong)FVar14 <= local_28) {
        if (FVar15 == (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>
                       )0x0) {
          FVar15 = (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>
                    )pTVar2;
        }
        if ((local_28 <
             (IMappedFileRegion **)
             ((longlong)FVar15 + (longlong)(param_1->MappedRegions).ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar12 = (TArrayView<unsigned_char_const_,int> *)(*pcVar8)();
          return pTVar12;
        }
      }
      iVar11 = (param_1->MappedRegions).ArrayNum;
      piVar3 = &(param_1->MappedRegions).ArrayMax;
      if (iVar11 == *piVar3) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>_>
                           (0x808,&pTVar2->AllocatorInstance,piVar3);
      }
      (param_1->MappedRegions).ArrayNum = iVar11 + 1;
      FVar15 = (param_1->MappedRegions).AllocatorInstance.SecondaryData;
      if (FVar15 == (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>
                     )0x0) {
        FVar15 = (ForElementType<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>_>)
                 pTVar2;
      }
      plVar4 = (longlong *)((longlong)FVar15 + (longlong)iVar11 * 8);
      *plVar4 = (longlong)local_28[0];
      param_1->Cursor = param_1->Cursor + uVar5;
      local_28[0] = (IMappedFileRegion *)0x0;
      param_1->bLastReadBlockWasOwned = false;
      lVar7 = *plVar4;
      if (((*(longlong *)(lVar7 + 8) == 0) || (*(longlong *)(lVar7 + 0x10) == 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("MappedPtr && MappedSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                              ,0x19,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar12 = (TArrayView<unsigned_char_const_,int> *)(*pcVar8)();
        return pTVar12;
      }
      __return_storage_ptr__->DataPtr = *(uchar **)(lVar7 + 8);
      __return_storage_ptr__->ArrayNum = uVar5;
      if (((int)uVar5 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar12 = (TArrayView<unsigned_char_const_,int> *)(*pcVar8)();
        return pTVar12;
      }
    }
    if (local_28[0] != (IMappedFileRegion *)0x0) {
      (**(code **)local_28[0]->_padding_)(local_28[0],1);
    }
  }
  return __return_storage_ptr__;
}

// ChopBytes @ 1417b8080

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayView<unsigned_char_const_,int> * __cdecl
FIoStoreTocResourceStorage::ChopBytes
          (TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,FReadBlocks *param_1,
          int param_2)

{
  TArray<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  *this;
  int *piVar1;
  IFileHandle *pIVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  TArrayView<unsigned_char_const_,int> *pTVar7;
  ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
  FVar8;
  uchar *_Dst;
  uint uVar9;
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  *pTVar10;
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  local_28;
  
  if (param_2 < 1) {
    __return_storage_ptr__->DataPtr = (uchar *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  this = &param_1->Blocks;
  iVar6 = (param_1->Blocks).ArrayNum;
  piVar1 = &(param_1->Blocks).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>_>
                      (0x810,&this->AllocatorInstance,piVar1);
  }
  (param_1->Blocks).ArrayNum = iVar6 + 1;
  FVar8 = (param_1->Blocks).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
                )0x0) {
    FVar8 = (ForElementType<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
             )this;
  }
  pTVar10 = (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
             *)((longlong)iVar6 * 0x10 + (longlong)FVar8);
  piVar1 = &pTVar10->ArrayNum;
  (pTVar10->AllocatorInstance).Data = (uchar *)0x0;
  pTVar10->ArrayNum = 0;
  pTVar10->ArrayMax = 0;
  iVar6 = *piVar1;
  if (iVar6 < param_2) {
    UE::Core::Private::
    ReallocGrow<0,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::ForElementType<unsigned_char>_>
              (1,1,param_2 - iVar6,(ForElementType<unsigned_char> *)pTVar10,piVar1,
               &pTVar10->ArrayMax);
  }
  else if (param_2 < iVar6) {
    uVar9 = iVar6 - param_2;
    if (((int)(uVar9 | param_2) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
    if (uVar9 != 0) {
      _Dst = (pTVar10->AllocatorInstance).Data + param_2;
      iVar6 = (*piVar1 - uVar9) - param_2;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (int)uVar9,(longlong)iVar6);
      }
      *piVar1 = *piVar1 - uVar9;
      UE::Core::Private::
      ReallocShrink<0,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::ForElementType<unsigned_char>_>
                (1,1,(ForElementType<unsigned_char> *)pTVar10,*piVar1,&pTVar10->ArrayMax);
    }
  }
  pIVar2 = (param_1->File).Ptr;
  cVar5 = (**(code **)((longlong)*pIVar2 + 0x20))
                    (pIVar2,(pTVar10->AllocatorInstance).Data,(longlong)param_2);
  if (cVar5 == '\0') {
    TArray<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
    ::Pop(this,&local_28,Default);
    if (local_28.AllocatorInstance.Data != (uchar *)0x0) {
      TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::Free
                (local_28.AllocatorInstance.Data);
    }
    pIVar2 = (param_1->File).Ptr;
    (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,0);
    __return_storage_ptr__->DataPtr = (uchar *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    MakeConstArrayView<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_&,TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
              (__return_storage_ptr__,pTVar10);
  }
  return __return_storage_ptr__;
}

// FinalizeRead @ 1417cc9a0

void __thiscall FIoStoreTocResourceStorage::FinalizeRead(FIoStoreTocResourceStorage *this)

{
  undefined1 local_res8 [32];
  
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::FinalizeRead_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>_150680a80
            )[(this->Data).TypeIndex])(local_res8,this);
  return;
}

// GetAllocatedSize @ 1417d14b0

ulong64 __thiscall FIoStoreTocResourceStorage::GetAllocatedSize(FIoStoreTocResourceStorage *this)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = (*(code *)(&
                    PTR_VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::GetAllocatedSize_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_const_&>_150680a38
                    )[(this->Data).TypeIndex])(local_res8,this);
  return lVar1 + 0x128;
}

// ReleaseOwnershipOfLastBlock @ 1417f4b10

void __thiscall
FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock(FIoStoreTocResourceStorage *this)

{
  undefined1 local_res8 [32];
  
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>_150680a68
            )[(this->Data).TypeIndex])(local_res8,this);
  return;
}

