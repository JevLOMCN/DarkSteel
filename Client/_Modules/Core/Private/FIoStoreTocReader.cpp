// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~FIoStoreTocReader @ 1417a73f0

void __thiscall FIoStoreTocReader::~FIoStoreTocReader(FIoStoreTocReader *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  *(undefined4 *)&(this->IndexToFileName).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IndexToFileName).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IndexToFileName);
  *(undefined4 *)&(this->ChunkIdToIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChunkIdToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkIdToIndex);
  FIoDirectoryIndexReader::~FIoDirectoryIndexReader(&this->DirectoryIndexReader);
  uVar5 = (ulonglong)(this->TocStorage).Data.TypeIndex;
  if (2 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(&this->TocStorage);
  pFVar2 = (this->Toc).LegacyChunkMetas.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Toc).CompressionMethods.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 1417ad7c0

bool __thiscall
`FIoStoreTocReader::Read'::__l16::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1,uint param_2)

{
  longlong lVar1;
  FString *pFVar2;
  uint local_res18 [2];
  FString local_28;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)this;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_res18[0] = param_2;
  pFVar2 = ::FString::ConstructFromPtrSize
                     ((FString *)local_18,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_28 != pFVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  local_18._0_8_ = local_res18;
  local_18._8_8_ = &local_28;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,FString_&&>_>
            ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x2e8),(TPairInitializer<int_const_&,FString_&&> *)&stack0x00000008,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetTocChunkInfo @ 1417d8280

FIoStoreTocChunkInfo * __thiscall
FIoStoreTocReader::GetTocChunkInfo
          (FIoStoreTocReader *this,FIoStoreTocChunkInfo *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  GetTocChunkInfoInternal<FIoStoreTocResourceView>(__return_storage_ptr__,&this->Toc,param_1);
  if (*(int *)&(this->IndexToFileName).field_0x8 != *(int *)&(this->IndexToFileName).field_0x34) {
    puVar4 = *(undefined1 **)&(this->IndexToFileName).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->IndexToFileName).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->IndexToFileName).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&this->IndexToFileName);
        if (*piVar3 == param_1) {
          pFVar5 = (FString *)(piVar3 + 2);
          if (piVar3 == (int *)0x0) {
            pFVar5 = (FString *)0x0;
          }
          if (pFVar5 != (FString *)0x0) {
            ::FString::operator=(&__return_storage_ptr__->FileName,pFVar5);
            __return_storage_ptr__->bHasValidFileName = true;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar2 = piVar3[6];
      } while (iVar2 != -1);
    }
  }
  ::LexToString(&local_18,__return_storage_ptr__->ChunkType);
  ::FString::PrintfImpl(&local_28,L"<%s>");
  pFVar5 = &__return_storage_ptr__->FileName;
  if (pFVar5 != &local_28) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->FileName).Data.ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->FileName).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  __return_storage_ptr__->bHasValidFileName = false;
  return __return_storage_ptr__;
}

// Read @ 1417f06d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoStatus * __thiscall
FIoStoreTocReader::Read
          (FIoStoreTocReader *this,FIoStatus *__return_storage_ptr__,wchar_t *param_1,
          TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FIoStatus *pFVar7;
  FAESKey *pFVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  uint uVar11;
  EIoErrorCode EVar12;
  undefined1 auStackY_368 [32];
  uint local_338 [2];
  FIoStatus local_330;
  FIoStatus local_320;
  TPairInitializer<FIoChunkId_const_&,int_const_&> local_310;
  FIoStoreTocReader *local_300;
  FIoChunkId *local_2f8;
  uint *local_2f0;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  code *local_2d8;
  FIoStoreTocReader **local_2d0;
  TArrayView<unsigned_char_const_,int> local_2c8;
  TStringView<wchar_t> local_2b8;
  FAESKey local_2a8;
  undefined1 local_288 [16];
  wchar_t *local_278;
  wchar_t *local_270;
  undefined2 local_268;
  wchar_t local_260 [256];
  wchar_t local_60 [4];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_310.Value = (int *)param_2;
  FIoStoreTocResourceView::Read(&local_330,param_1,ReadAll,&this->Toc,&this->TocStorage);
  EVar12 = local_330.ErrorCode;
  if (local_330.ErrorCode != Ok) {
    (__return_storage_ptr__->ErrorMessage).Chars = local_330.ErrorMessage.Chars;
    if (local_330.ErrorMessage.Chars == (wchar_t *)0x0) {
      pwVar10 = (wchar_t *)&DAT_fffffffffffffff8;
    }
    else {
      pwVar10 = local_330.ErrorMessage.Chars + -4;
      LOCK();
      *(int *)pwVar10 = *(int *)pwVar10 + 1;
      UNLOCK();
    }
    __return_storage_ptr__->SystemErrorCode = local_330.SystemErrorCode;
    __return_storage_ptr__->ErrorCode = local_330.ErrorCode;
    if (local_330.ErrorMessage.Chars == (wchar_t *)0x0) {
      return __return_storage_ptr__;
    }
    LOCK();
    iVar1 = *(int *)pwVar10;
    *(int *)pwVar10 = *(int *)pwVar10 + -1;
    UNLOCK();
    if (iVar1 != 1) {
      return __return_storage_ptr__;
    }
    FMemory::Free(pwVar10);
    return __return_storage_ptr__;
  }
  TSet<TTuple<FIoChunkId,int>,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>,FDefaultSetAllocator>::
  Empty((TSet<TTuple<FIoChunkId,int>,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>,FDefaultSetAllocator>
         *)&this->ChunkIdToIndex,(this->Toc).ChunkIds.ArrayNum);
  uVar11 = 0;
  local_338[0] = 0;
  if (0 < (this->Toc).ChunkIds.ArrayNum) {
    do {
      uVar4 = local_338[0];
      uVar6 = uVar11;
      if ((int)local_338[0] < (this->Toc).ChunkIds.ArrayNum) {
        uVar6 = ~local_338[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FIoStatus *)(*pcVar2)();
        return pFVar7;
      }
      local_2f8 = (this->Toc).ChunkIds.DataPtr + (int)uVar4;
      local_2f0 = local_338;
      TSet<TTuple<FIoChunkId,int>,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FIoChunkId_const_&,int_const_&>_>
                ((TSet<TTuple<FIoChunkId,int>,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>,FDefaultSetAllocator>
                  *)&this->ChunkIdToIndex,&local_310,(bool *)&local_2f8);
      local_338[0] = local_338[0] + 1;
      param_2 = (TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
                 *)local_310.Value;
      EVar12 = local_330.ErrorCode;
    } while ((int)local_338[0] < (this->Toc).ChunkIds.ArrayNum);
  }
  if (((this->Toc).Header.ContainerFlags & Encrypted) != None) {
    pFVar8 = TMapBase<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
             ::Find((TMapBase<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
                     *)param_2,&(this->Toc).Header.EncryptionKeyGuid);
    if (pFVar8 == (FAESKey *)0x0) {
      local_288._8_8_ = local_260;
      local_288._0_4_ = FileOpenFailed;
      local_288._4_4_ = 0;
      local_278 = local_260;
      local_268 = 0;
      local_270 = local_60;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)(local_288 + 8),
                 L"Missing decryption key for IoStore container file \'",0x33);
      if (param_1 != (wchar_t *)0x0) {
        sVar9 = wcslen(param_1);
        uVar11 = (uint)sVar9;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)(local_288 + 8),param_1,uVar11);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)(local_288 + 8),L"\'",1);
      FIoStatusBuilder::operator_FIoStatus((FIoStatusBuilder *)local_288,__return_storage_ptr__);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)(local_288 + 8));
      if (local_330.ErrorMessage.Chars == (wchar_t *)0x0) {
        return __return_storage_ptr__;
      }
      pwVar10 = local_330.ErrorMessage.Chars + -4;
      goto LAB_1417f0a8c;
    }
    uVar3 = *(undefined8 *)(pFVar8->Key + 8);
    *(undefined8 *)(this->DecryptionKey).Key = *(undefined8 *)pFVar8->Key;
    *(undefined8 *)((this->DecryptionKey).Key + 8) = uVar3;
    uVar3 = *(undefined8 *)(pFVar8->Key + 0x18);
    *(undefined8 *)((this->DecryptionKey).Key + 0x10) = *(undefined8 *)(pFVar8->Key + 0x10);
    *(undefined8 *)((this->DecryptionKey).Key + 0x18) = uVar3;
  }
  if ((((this->Toc).Header.ContainerFlags & Indexed) != None) &&
     (0 < (this->Toc).DirectoryIndexBuffer.ArrayNum)) {
    local_2a8.Key._0_8_ = *(undefined8 *)(this->DecryptionKey).Key;
    local_2a8.Key._8_8_ = *(undefined8 *)((this->DecryptionKey).Key + 8);
    local_2a8.Key._16_8_ = *(undefined8 *)((this->DecryptionKey).Key + 0x10);
    local_2a8.Key._24_8_ = *(undefined8 *)((this->DecryptionKey).Key + 0x18);
    local_2c8.DataPtr = (this->Toc).DirectoryIndexBuffer.DataPtr;
    local_2c8.ArrayNum = (this->Toc).DirectoryIndexBuffer.ArrayNum;
    local_2c8._12_4_ = *(undefined4 *)&(this->Toc).DirectoryIndexBuffer.field_0xc;
    FIoDirectoryIndexReader::Initialize
              (&this->DirectoryIndexReader,&local_320,&local_2c8,&local_2a8);
    if (local_320.ErrorCode != Ok) {
      (__return_storage_ptr__->ErrorMessage).Chars = local_320.ErrorMessage.Chars;
      if (local_320.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_320.ErrorMessage.Chars + -4) =
             *(int *)(local_320.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      __return_storage_ptr__->ErrorCode = local_320.ErrorCode;
      __return_storage_ptr__->SystemErrorCode = local_320.SystemErrorCode;
      if (local_320.ErrorMessage.Chars != (wchar_t *)0x0) {
        pwVar10 = local_320.ErrorMessage.Chars + -4;
        LOCK();
        iVar1 = *(int *)pwVar10;
        *(int *)pwVar10 = *(int *)pwVar10 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FMemory::Free(pwVar10);
        }
      }
      if (local_330.ErrorMessage.Chars == (wchar_t *)0x0) {
        return __return_storage_ptr__;
      }
      pwVar10 = local_330.ErrorMessage.Chars + -4;
      goto LAB_1417f0a8c;
    }
    local_2d0 = &local_300;
    uStack_2e0 = 0;
    local_2d8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FIoStoreTocReader::Read'::__l16::<lambda_1>,bool,TStringView<wchar_t>,unsigned_int>
                ::Call;
    local_2e8 = L"";
    local_2b8._8_8_ = (ulonglong)uStack_2dc << 0x20;
    local_2b8.DataPtr = L"";
    local_300 = this;
    FIoDirectoryIndexReader::IterateDirectoryIndex
              (&this->DirectoryIndexReader,(FIoDirectoryIndexHandle)0x0,&local_2b8,
               (TFunctionRef<bool___cdecl(TStringView<wchar_t>,unsigned_int)> *)&local_2d8);
    if (local_320.ErrorMessage.Chars != (wchar_t *)0x0) {
      pwVar10 = local_320.ErrorMessage.Chars + -4;
      LOCK();
      iVar1 = *(int *)pwVar10;
      *(int *)pwVar10 = *(int *)pwVar10 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        FMemory::Free(pwVar10);
      }
    }
  }
  (__return_storage_ptr__->ErrorMessage).Chars = local_330.ErrorMessage.Chars;
  if (local_330.ErrorMessage.Chars == (wchar_t *)0x0) {
    pwVar10 = (wchar_t *)&DAT_fffffffffffffff8;
  }
  else {
    pwVar10 = local_330.ErrorMessage.Chars + -4;
    LOCK();
    *(int *)pwVar10 = *(int *)pwVar10 + 1;
    UNLOCK();
  }
  __return_storage_ptr__->SystemErrorCode = local_330.SystemErrorCode;
  __return_storage_ptr__->ErrorCode = EVar12;
  if (local_330.ErrorMessage.Chars == (wchar_t *)0x0) {
    return __return_storage_ptr__;
  }
LAB_1417f0a8c:
  LOCK();
  iVar1 = *(int *)pwVar10;
  *(int *)pwVar10 = *(int *)pwVar10 + -1;
  UNLOCK();
  if (iVar1 == 1) {
    FMemory::Free(pwVar10);
  }
  return __return_storage_ptr__;
}

