// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 9

// FCacheStorageMmap @ 148cb3b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCacheStorageMmap * __thiscall
StorageServer::FCacheStorageMmap::FCacheStorageMmap
          (FCacheStorageMmap *this,wchar_t *param_1,ulong64 param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FPlatformFileManager *this_00;
  FCacheStorageMmap *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  undefined1 auStackY_f8 [32];
  TArray<TTuple<FString,unsigned___int64>,TSizedDefaultAllocator<32>_> local_b8;
  longlong local_a8;
  IPlatformFile *local_a0;
  longlong local_98;
  int *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  undefined8 **local_78;
  FScriptContainerElement local_70 [8];
  FScriptContainerElement local_68 [8];
  undefined8 *local_60 [3];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  *(undefined1 *)&this->_padding_ = 0;
  piVar1 = &(this->BackingFiles).ArrayNum;
  piVar2 = &(this->BackingFiles).ArrayMax;
  this->_padding_ = (longlong)&___7FCacheStorageMmap_StorageServer__6B_;
  (this->BackingFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  local_90 = piVar1;
  ICacheStorage::GetBackingFileNames(&local_b8,param_1,param_2);
  iVar7 = local_b8.ArrayNum;
  iVar15 = *piVar1;
  if (iVar15 < local_b8.ArrayNum) {
    iVar15 = local_b8.ArrayNum - iVar15;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar15,&(this->BackingFiles).AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<StorageServer::FCacheStorageMmap::FBackingFile,int>
              ((this->BackingFiles).AllocatorInstance.Data + (longlong)iVar7 * 0x20,iVar15);
  }
  else {
    if (local_b8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_b8.ArrayNum);
    }
    if (local_b8.ArrayNum < iVar15) {
      uVar22 = iVar15 - local_b8.ArrayNum;
      if ((int)(local_b8.ArrayNum | uVar22) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FCacheStorageMmap *)(*pcVar5)();
          return pFVar9;
        }
      }
      if (uVar22 != 0) {
        TArray<StorageServer::FCacheStorageMmap::FBackingFile,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&this->BackingFiles,iVar7,uVar22);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&(this->BackingFiles).AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  this->TotalSize = 0;
  this_00 = FPlatformFileManager::Get();
  local_a0 = FPlatformFileManager::GetPlatformFile(this_00);
  uVar22 = 0;
  if (0 < (this->BackingFiles).ArrayNum) {
    local_a8 = 0;
    lVar20 = 0;
    local_98 = 0;
    do {
      lVar11 = local_98;
      uVar16 = ~uVar22 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar22 < local_b8.ArrayNum) {
        uVar8 = uVar16;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FCacheStorageMmap *)(*pcVar5)();
          return pFVar9;
        }
      }
      pFVar18 = local_b8.AllocatorInstance.Data + lVar20;
      uVar8 = 0;
      if ((int)uVar22 < local_b8.ArrayNum) {
        uVar8 = uVar16;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FCacheStorageMmap *)(*pcVar5)();
          return pFVar9;
        }
      }
      lVar3 = *(longlong *)(local_b8.AllocatorInstance.Data + lVar20 + 0x10);
      uVar8 = 0;
      if ((int)uVar22 < *local_90) {
        uVar8 = uVar16;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FCacheStorageMmap *)(*pcVar5)();
          return pFVar9;
        }
      }
      pFVar21 = (this->BackingFiles).AllocatorInstance.Data + lVar11;
      if (*(int *)(pFVar18 + 8) == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = *(wchar_t **)pFVar18;
      }
      plVar10 = (longlong *)(**(code **)((longlong)*local_a0 + 0x110))(local_a0,pwVar19,1);
      if ((plVar10 == (longlong *)0x0) &&
         (local_88 = pFVar18,
         bVar6 = `StorageServer::FCacheStorageMmap::FCacheStorageMmap'::__l8::<lambda_1>::operator()
                           (&local_88), !bVar6)) break;
      lVar11 = (**(code **)(*plVar10 + 0x50))(plVar10);
      if (lVar11 != lVar3) {
        (**(code **)(*plVar10 + 0x40))(plVar10,lVar3);
        *(undefined1 *)&this->_padding_ = 1;
      }
      uVar12 = (**(code **)(*plVar10 + 0x50))(plVar10);
      (**(code **)*plVar10)(plVar10,1);
      if (*(int *)(pFVar18 + 8) == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = *(wchar_t **)pFVar18;
      }
      (**(code **)((longlong)*local_a0 + 0x1b0))(local_a0,local_60,pwVar19,1);
      uVar17 = (ulonglong)local_48;
      if ((2 < uVar17) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FCacheStorageMmap *)(*pcVar5)();
        return pFVar9;
      }
      if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
            ::__l2::bIsSameType)[uVar17] != '\0') {
        local_78 = local_60;
        local_80 = pFVar18;
        bVar6 = `StorageServer::FCacheStorageMmap::FCacheStorageMmap'::__l14::<lambda_2>::operator()
                          (&local_80);
        if (!bVar6) {
          uVar17 = (ulonglong)local_48;
          if ((2 < local_48) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FCacheStorageMmap *)(*pcVar5)();
            return pFVar9;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar17] !=
              UE::Core::Private::
              TDestructorCaller<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FEmptyType>
              ::Destruct) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar17])(local_60);
          }
          break;
        }
      }
      if ((local_48 != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FCacheStorageMmap *)(*pcVar5)();
        return pFVar9;
      }
      puVar13 = local_60[0];
      uVar17 = (ulonglong)local_48;
      local_60[0] = (undefined8 *)0x0;
      if ((2 < local_48) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FCacheStorageMmap *)(*pcVar5)();
        return pFVar9;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17])(local_60);
      local_48 = 2;
      if (pFVar21 == local_70) {
        if (puVar13 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)*puVar13;
          goto LAB_148cb3f10;
        }
      }
      else {
        puVar4 = *(undefined8 **)pFVar21;
        *(undefined8 **)pFVar21 = puVar13;
        if (puVar4 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)*puVar4;
          puVar13 = puVar4;
LAB_148cb3f10:
          (*(code *)*puVar14)(puVar13,1);
        }
      }
      puVar13 = (undefined8 *)
                (**(code **)(**(longlong **)pFVar21 + 8))(*(longlong **)pFVar21,0,uVar12,2);
      pFVar18 = pFVar21 + 8;
      if (pFVar18 == local_68) {
        if (puVar13 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)*puVar13;
          goto LAB_148cb3f56;
        }
      }
      else {
        puVar4 = *(undefined8 **)pFVar18;
        *(undefined8 **)pFVar18 = puVar13;
        if (puVar4 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)*puVar4;
          puVar13 = puVar4;
LAB_148cb3f56:
          (*(code *)*puVar14)(puVar13,1);
        }
      }
      lVar11 = *(longlong *)pFVar18;
      if ((*(longlong *)(lVar11 + 8) == 0) || (*(longlong *)(lVar11 + 0x10) == 0)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedPtr && MappedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                           ,0x19,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FCacheStorageMmap *)(*pcVar5)();
          return pFVar9;
        }
      }
      *(longlong *)(pFVar21 + 0x10) = *(longlong *)(lVar11 + 8);
      plVar10 = (longlong *)(*(longlong *)pFVar18 + 0x10);
      if ((*(longlong *)(*(longlong *)pFVar18 + 8) == 0) || (*plVar10 == 0)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedPtr && MappedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                           ,0x19,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FCacheStorageMmap *)(*pcVar5)();
          return pFVar9;
        }
      }
      lVar11 = *plVar10;
      *(longlong *)(pFVar21 + 0x18) = lVar11;
      this->TotalSize = this->TotalSize + lVar11;
      uVar17 = (ulonglong)local_48;
      if (2 < local_48) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FCacheStorageMmap *)(*pcVar5)();
          return pFVar9;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17] !=
          UE::Core::Private::
          TDestructorCaller<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FEmptyType>
          ::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17])(local_60);
      }
      uVar22 = uVar22 + 1;
      local_a8 = local_a8 + 1;
      local_98 = local_98 + 0x20;
      lVar20 = lVar20 + 0x18;
    } while ((int)uVar22 < (this->BackingFiles).ArrayNum);
  }
  DestructItems<TTuple<FString,unsigned___int64>,int>
            ((TTuple<FString,unsigned___int64> *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((TTuple<FString,unsigned___int64> *)local_b8.AllocatorInstance.Data !=
      (TTuple<FString,unsigned___int64> *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return this;
}

// ~FCacheStorageMmap @ 148cb6150

void __thiscall StorageServer::FCacheStorageMmap::~FCacheStorageMmap(FCacheStorageMmap *this)

{
  int *piVar1;
  int iVar2;
  FBackingFile *pFVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->BackingFiles).ArrayMax;
  this->_padding_ = (longlong)&___7FCacheStorageMmap_StorageServer__6B_;
  iVar2 = (this->BackingFiles).ArrayNum;
  pFVar3 = (FBackingFile *)(this->BackingFiles).AllocatorInstance.Data;
  if (*piVar1 < 0) {
    DestructItems<StorageServer::FCacheStorageMmap::FBackingFile,int>(pFVar3,iVar2);
    (this->BackingFiles).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->BackingFiles).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<StorageServer::FCacheStorageMmap::FBackingFile,int>(pFVar3,iVar2);
    (this->BackingFiles).ArrayNum = 0;
  }
  this->TotalSize = 0;
  DestructItems<StorageServer::FCacheStorageMmap::FBackingFile,int>
            ((FBackingFile *)(this->BackingFiles).AllocatorInstance.Data,
             (this->BackingFiles).ArrayNum);
  pFVar4 = (this->BackingFiles).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// Flush @ 148cc58c0

void __thiscall StorageServer::FCacheStorageMmap::Flush(FCacheStorageMmap *this)

{
  return;
}

// GetSize @ 148cc7fa0

ulong64 __thiscall StorageServer::FCacheStorageMmap::GetSize(FCacheStorageMmap *this)

{
  return this->TotalSize;
}

// Invalidate @ 148ccbbe0

void __thiscall
StorageServer::FCacheStorageMmap::Invalidate
          (FCacheStorageMmap *this,ulong64 param_1,ulong64 param_2)

{
  return;
}

// Read @ 148cd35b0

FIoBuffer __thiscall
StorageServer::FCacheStorageMmap::Read
          (FCacheStorageMmap *this,ulong64 param_1,ulong64 param_2,TOptional<FIoBuffer> *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FIoBuffer FVar7;
  FIoBuffer *pFVar8;
  uint uVar9;
  size_t _Size;
  longlong lVar10;
  BufCore *pBVar11;
  TOptional<FIoBuffer> *pTVar12;
  uint uVar13;
  TOptional<FIoBuffer> *in_stack_00000028;
  FIoBuffer local_50;
  longlong local_48;
  ulonglong local_40;
  
  _Size = 0;
  uVar2 = (longlong)&(param_3->TypedValue).CorePtr.Reference + param_2;
  if (this->TotalSize < uVar2) {
    FIoBuffer::FIoBuffer((FIoBuffer *)param_1);
    if (in_stack_00000028->bIsSet == false) {
      return (FIoBuffer)(TRefCountPtr<FIoBuffer::BufCore>)param_1;
    }
    pBVar11 = (in_stack_00000028->TypedValue).CorePtr.Reference;
    if (pBVar11 == (BufCore *)0x0) {
      return (FIoBuffer)(TRefCountPtr<FIoBuffer::BufCore>)param_1;
    }
    FIoBuffer::BufCore::CheckRefCount(pBVar11);
    LOCK();
    piVar1 = &pBVar11->NumRefs;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return (FIoBuffer)(TRefCountPtr<FIoBuffer::BufCore>)param_1;
    }
    FIoBuffer::BufCore::~BufCore(pBVar11);
    ::operator_delete(pBVar11,0x20);
    return (FIoBuffer)(TRefCountPtr<FIoBuffer::BufCore>)param_1;
  }
  local_40 = uVar2 - 1 >> 0x1f;
  uVar13 = (uint)(param_2 >> 0x1f);
  if (uVar13 + 1 < (uint)local_40) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8566135052931432368>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStorage.h"
                       ,0x50,"IndexA + 1 >= IndexB");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      FVar7.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(*pcVar5)();
      return (FIoBuffer)FVar7.CorePtr.Reference;
    }
  }
  else {
    lVar10 = param_2 + (param_2 >> 0x1f & 0xffffffff) * -0x80000000;
    if (uVar13 != (uint)local_40) {
      pTVar12 = (TOptional<FIoBuffer> *)((local_40 & 0xffffffff) * 0x80000000 - param_2);
      _Size = (longlong)param_3 - (longlong)pTVar12;
      param_3 = pTVar12;
    }
    local_48 = lVar10;
    if (param_3 != (TOptional<FIoBuffer> *)0x0) {
      if (_Size == 0) {
        if ((in_stack_00000028->bIsSet == false) ||
           (pFVar8 = TOptional<FIoBuffer>::operator->(in_stack_00000028),
           pBVar11 = (pFVar8->CorePtr).Reference,
           (TOptional<FIoBuffer> *)(ulonglong)CONCAT14(pBVar11->DataSizeHigh,pBVar11->DataSizeLow) <
           param_3)) {
          uVar9 = 0;
          if ((int)uVar13 < (this->BackingFiles).ArrayNum) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            FVar7.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(*pcVar5)();
            return (FIoBuffer)FVar7.CorePtr.Reference;
          }
          FIoBuffer::FIoBuffer
                    ((FIoBuffer *)param_1,Wrap,
                     (void *)(*(longlong *)
                               ((this->BackingFiles).AllocatorInstance.Data +
                               (longlong)(int)uVar13 * 0x20 + 0x10) + lVar10),(ulong64)param_3);
        }
        else {
          pFVar8 = TOptional<FIoBuffer>::operator->(in_stack_00000028);
          FIoBuffer::BufCore::SetSize((pFVar8->CorePtr).Reference,(ulong64)param_3);
          uVar9 = 0;
          if ((int)uVar13 < (this->BackingFiles).ArrayNum) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            FVar7.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(*pcVar5)();
            return (FIoBuffer)FVar7.CorePtr.Reference;
          }
          lVar4 = *(longlong *)
                   ((this->BackingFiles).AllocatorInstance.Data +
                   (longlong)(int)uVar13 * 0x20 + 0x10);
          pFVar8 = TOptional<FIoBuffer>::operator->(in_stack_00000028);
          memcpy(((pFVar8->CorePtr).Reference)->DataPtr,(void *)(lVar4 + lVar10),(size_t)param_3);
          pFVar8 = TOptional<FIoBuffer>::GetValue(in_stack_00000028);
          *(undefined8 *)param_1 = 0;
          pBVar11 = (pFVar8->CorePtr).Reference;
          *(BufCore **)param_1 = pBVar11;
          if (pBVar11 != (BufCore *)0x0) {
            LOCK();
            pBVar11->NumRefs = pBVar11->NumRefs + 1;
            UNLOCK();
          }
        }
      }
      else {
        if ((in_stack_00000028->bIsSet == false) ||
           (pFVar8 = TOptional<FIoBuffer>::operator->(in_stack_00000028),
           pBVar11 = (pFVar8->CorePtr).Reference,
           (ulonglong)CONCAT14(pBVar11->DataSizeHigh,pBVar11->DataSizeLow) <
           (longlong)&(param_3->TypedValue).CorePtr.Reference + _Size)) {
          pFVar8 = FIoBuffer::FIoBuffer
                             (&local_50,(longlong)&(param_3->TypedValue).CorePtr.Reference + _Size);
          pBVar11 = (pFVar8->CorePtr).Reference;
          (pFVar8->CorePtr).Reference = (BufCore *)0x0;
          FVar7.CorePtr.Reference = local_50.CorePtr.Reference;
        }
        else {
          pFVar8 = TOptional<FIoBuffer>::GetValue(in_stack_00000028);
          pBVar11 = (pFVar8->CorePtr).Reference;
          if (pBVar11 != (BufCore *)0x0) {
            LOCK();
            pBVar11->NumRefs = pBVar11->NumRefs + 1;
            UNLOCK();
          }
          FVar7.CorePtr.Reference =
               (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
        }
        if (FVar7.CorePtr.Reference != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)FVar7.CorePtr.Reference);
          LOCK();
          piVar1 = &((BufCore *)FVar7.CorePtr.Reference)->NumRefs;
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)FVar7.CorePtr.Reference);
            ::operator_delete((void *)FVar7.CorePtr.Reference,0x20);
          }
        }
        FIoBuffer::BufCore::SetSize
                  (pBVar11,(longlong)&(param_3->TypedValue).CorePtr.Reference + _Size);
        uVar9 = 0;
        if ((int)uVar13 < (this->BackingFiles).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          FVar7.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(*pcVar5)();
          return (FIoBuffer)FVar7.CorePtr.Reference;
        }
        memcpy(pBVar11->DataPtr,
               (void *)(local_48 +
                       *(longlong *)
                        ((this->BackingFiles).AllocatorInstance.Data +
                        (longlong)(int)uVar13 * 0x20 + 0x10)),(size_t)param_3);
        uVar9 = (uint)local_40;
        uVar13 = 0;
        if ((int)uVar9 < (this->BackingFiles).ArrayNum) {
          uVar13 = ~uVar9 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          FVar7.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(*pcVar5)();
          return (FIoBuffer)FVar7.CorePtr.Reference;
        }
        memcpy(pBVar11->DataPtr + (longlong)&(param_3->TypedValue).CorePtr,
               *(void **)((this->BackingFiles).AllocatorInstance.Data +
                         (longlong)(int)uVar9 * 0x20 + 0x10),_Size);
        *(BufCore **)param_1 = pBVar11;
      }
      goto LAB_148cd369c;
    }
  }
  FIoBuffer::FIoBuffer((FIoBuffer *)param_1);
LAB_148cd369c:
  TOptional<FIoBuffer>::~TOptional<FIoBuffer>(in_stack_00000028);
  return (FIoBuffer)(TRefCountPtr<FIoBuffer::BufCore>)param_1;
}

// WriteAsync @ 148ce3eb0

void __thiscall
StorageServer::FCacheStorageMmap::WriteAsync
          (FCacheStorageMmap *this,ulong64 param_1,void *param_2,ulong64 param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  size_t sVar7;
  size_t _Size;
  longlong lVar8;
  uint uVar9;
  
  if (param_1 + param_3 <= this->TotalSize) {
    uVar6 = (param_1 + param_3) - 1 >> 0x1f;
    uVar2 = (uint)(param_1 >> 0x1f);
    uVar5 = (uint)uVar6;
    if (uVar2 + 1 < uVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8566135052931432368>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStorage.h"
                         ,0x50,"IndexA + 1 >= IndexB");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      lVar8 = param_1 + (param_1 >> 0x1f & 0xffffffff) * -0x80000000;
      _Size = 0;
      if (uVar2 != uVar5) {
        sVar7 = (uVar6 & 0xffffffff) * 0x80000000 - param_1;
        _Size = param_3 - sVar7;
        param_3 = sVar7;
      }
      if (param_3 != 0) {
        uVar9 = 0;
        if (_Size == 0) {
          if ((int)uVar2 < (this->BackingFiles).ArrayNum) {
            uVar9 = ~uVar2 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          _Dst = (void *)(*(longlong *)
                           ((this->BackingFiles).AllocatorInstance.Data +
                           (longlong)(int)uVar2 * 0x20 + 0x10) + lVar8);
          _Size = param_3;
        }
        else {
          uVar4 = uVar9;
          if ((int)uVar2 < (this->BackingFiles).ArrayNum) {
            uVar4 = ~uVar2 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          memcpy((void *)(*(longlong *)
                           ((this->BackingFiles).AllocatorInstance.Data +
                           (longlong)(int)uVar2 * 0x20 + 0x10) + lVar8),param_2,param_3);
          if ((int)uVar5 < (this->BackingFiles).ArrayNum) {
            uVar9 = ~uVar5 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          param_2 = (void *)(param_3 + (longlong)param_2);
          _Dst = *(void **)((this->BackingFiles).AllocatorInstance.Data +
                           (longlong)(int)uVar5 * 0x20 + 0x10);
        }
        memcpy(_Dst,param_2,_Size);
      }
    }
  }
  return;
}

// operator() @ 1505398e0

bool __thiscall
`StorageServer::FCacheStorageMmap::FCacheStorageMmap'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8743336306823659487>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_8743336306823659487>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150539a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`StorageServer::FCacheStorageMmap::FCacheStorageMmap'::__l14::<lambda_2>::operator()(void *this)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 auStackY_888 [32];
  FString local_848;
  undefined4 local_838;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_888;
  bVar6 = false;
  local_838 = 0;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8743336306823659471>);
  if (bVar4) {
    puVar2 = *(undefined8 **)((longlong)this + 8);
    if ((*(char *)(puVar2 + 3) != '\x01') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar1 = *(int *)(puVar2 + 2);
    if (iVar1 == 0) {
      local_848.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_848.Data.ArrayNum = *(int *)(puVar2 + 1);
      lVar7 = (longlong)local_848.Data.ArrayNum;
      _Src = (void *)*puVar2;
      if (local_848.Data.ArrayNum == 0) {
        local_848.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_848.Data.ArrayNum,0,(ForAnyElementType *)&local_848,
                   local_848.Data.ArrayNum,&local_848.Data.ArrayMax);
        memcpy(local_848.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
      }
    }
    else {
      memset(local_828,0,0x800);
      FWindowsPlatformMisc::GetSystemErrorMessage(local_828,0x400,iVar1);
      ::FString::PrintfImpl(&local_848,L"%s [%s (%d)]");
    }
    bVar6 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8743336306823659471>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150539b87;
    }
  }
  bVar4 = false;
LAB_150539b87:
  if ((bVar6) && (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_848.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

