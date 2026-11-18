// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// TCachedStringStore<wchar_t> @ 14d41ece0

TCachedStringStore<wchar_t> * __thiscall
TraceServices::TCachedStringStore<wchar_t>::TCachedStringStore<wchar_t>
          (TCachedStringStore<wchar_t> *this,wchar_t *param_1,IAnalysisCache *param_2)

{
  wchar_t wVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  TSet<TTuple<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  TCachedStringStore<wchar_t> *pTVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  size_t sVar13;
  size_t sVar14;
  wchar_t *pwVar15;
  ushort uVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  int *piVar19;
  wchar_t *_Str;
  ulonglong uVar20;
  TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *pTVar21;
  uint local_res18;
  uint local_res20 [2];
  TPairInitializer<unsigned_int_const_&,TTuple<unsigned___int64,wchar_t_const_*>_&&> local_88;
  TSet<TTuple<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>,0>,FDefaultSetAllocator>
  *local_78;
  FPersistentState *local_70;
  ulonglong local_68;
  longlong local_60;
  wchar_t *local_58;
  uint *local_50;
  longlong *local_48;
  
  this->Cache = param_2;
  pwVar18 = (wchar_t *)0x0;
  this->CacheIndex = 0;
  *(undefined8 *)&this->StoredStrings = 0;
  *(undefined8 *)&(this->StoredStrings).field_0x8 = 0;
  *(undefined8 *)&(this->StoredStrings).field_0x20 = 0;
  *(undefined4 *)&(this->StoredStrings).field_0x28 = 0;
  *(undefined4 *)&(this->StoredStrings).field_0x2c = 0x80;
  *(undefined4 *)&(this->StoredStrings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StoredStrings).field_0x34 = 0;
  *(undefined8 *)&(this->StoredStrings).field_0x40 = 0;
  *(undefined4 *)&(this->StoredStrings).field_0x48 = 0;
  local_78 = (TSet<TTuple<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>,0>,FDefaultSetAllocator>
              *)&this->StoredStrings;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  (this->Blocks).ArrayMax = 0;
  uVar7 = (**(code **)((longlong)*this->Cache + 8))(this->Cache,param_1,2);
  this->CacheIndex = uVar7;
  (**(code **)((longlong)*this->Cache + 0x10))(this->Cache,&local_70,uVar7);
  if (((local_70 == (FPersistentState *)0x0) || (local_68 < 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserData.GetData() && UserData.GetSize() >= sizeof(FPersistentState)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedStringStore.h"
                         ,0x23,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TCachedStringStore<wchar_t> *)(*pcVar5)();
    return pTVar10;
  }
  this->State = local_70;
  if (local_70->BlockCount == 0) {
    if ((local_70->BufferLeftBytes != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("State->BufferLeftBytes == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedStringStore.h"
                           ,0x29,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TCachedStringStore<wchar_t> *)(*pcVar5)();
      return pTVar10;
    }
  }
  else {
    if ((0x2000 < local_70->BufferLeftBytes) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("State->BufferLeftBytes <= BlockSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedStringStore.h"
                           ,0x2f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TCachedStringStore<wchar_t> *)(*pcVar5)();
      return pTVar10;
    }
    local_res18 = 0;
    pwVar17 = pwVar18;
    if (this->State->BlockCount != 0) {
      do {
        piVar19 = &(this->Blocks).ArrayMax;
        pTVar21 = &this->Blocks;
        pFVar11 = (FScriptContainerElement *)
                  (**(code **)((longlong)*this->Cache + 0x20))
                            (this->Cache,&local_88.Value,this->CacheIndex,pwVar17,1);
        pFVar2 = (pTVar21->AllocatorInstance).Data;
        if (((pFVar2 <= pFVar11) && (pFVar11 < pFVar2 + (longlong)*piVar19 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TCachedStringStore<wchar_t> *)(*pcVar5)();
          return pTVar10;
        }
        iVar8 = (this->Blocks).ArrayNum;
        if (iVar8 == *piVar19) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar21->AllocatorInstance,piVar19);
        }
        (this->Blocks).ArrayNum = iVar8 + 1;
        pFVar2 = (pTVar21->AllocatorInstance).Data + (longlong)iVar8 * 8;
        lVar3 = *(longlong *)pFVar11;
        *(longlong *)pFVar11 = 0;
        *(longlong *)pFVar2 = lVar3;
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                  ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_88.Value);
        if ((*(longlong *)pFVar2 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Block.IsNull()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedStringStore.h"
                               ,0x33,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TCachedStringStore<wchar_t> *)(*pcVar5)();
          return pTVar10;
        }
        plVar4 = *(longlong **)pFVar2;
        _Str = pwVar18;
        if (plVar4 != (longlong *)0x0) {
          if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          _Str = (wchar_t *)plVar4[1];
        }
        plVar4 = *(longlong **)pFVar2;
        pwVar12 = pwVar18;
        if (plVar4 != (longlong *)0x0) {
          if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          pwVar12 = (wchar_t *)plVar4[1];
        }
        this_00 = local_78;
        uVar7 = (uint)pwVar17;
        while ((_Str < pwVar12 + 0x1000 &&
               (sVar13 = wcslen(_Str), uVar7 = local_res18, 0 < (int)sVar13))) {
          sVar13 = wcslen(_Str);
          if (0 < (int)sVar13) {
            uVar9 = 0;
            if (_Str != (wchar_t *)0x0) {
              sVar14 = wcslen(_Str);
              uVar9 = (uint)sVar14;
            }
            if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CRCTable_DEPRECATED[1] != 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                                   ,0xc6,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar10 = (TCachedStringStore<wchar_t> *)(*pcVar5)();
              return pTVar10;
            }
            local_res20[0] = 0;
            if (0 < (int)uVar9) {
              uVar20 = (ulonglong)uVar9;
              pwVar15 = pwVar18;
              pwVar17 = _Str;
              do {
                wVar1 = *pwVar17;
                pwVar17 = pwVar17 + 1;
                uVar16 = wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20);
                uVar9 = (uint)pwVar15 >> 8 ^
                        FCrc::CRCTable_DEPRECATED[(byte)((byte)pwVar15 ^ (byte)uVar16)];
                local_res20[0] =
                     uVar9 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar16 >> 8 ^ uVar9) & 0xff];
                pwVar15 = (wchar_t *)(ulonglong)local_res20[0];
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            plVar4 = *(longlong **)pFVar2;
            pwVar17 = pwVar18;
            if (plVar4 != (longlong *)0x0) {
              if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
                (**(code **)(*plVar4 + 8))(plVar4);
              }
              pwVar17 = (wchar_t *)plVar4[1];
            }
            local_50 = local_res20;
            local_60 = ((ulonglong)(local_res18 << 0xd) - (longlong)pwVar17) + (longlong)_Str;
            local_48 = &local_60;
            local_58 = _Str;
            TSet<TTuple<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<unsigned_int_const_&,TTuple<unsigned___int64,wchar_t_const_*>_&&>_>
                      (this_00,&local_88,(bool *)&local_50);
            _Str = _Str + ((int)sVar13 + 1);
          }
        }
        local_res18 = uVar7 + 1;
        pwVar17 = (wchar_t *)(ulonglong)local_res18;
      } while (local_res18 < this->State->BlockCount);
    }
    if (((this->Blocks).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedStringStore.h"
                           ,0x44,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TCachedStringStore<wchar_t> *)(*pcVar5)();
      return pTVar10;
    }
    iVar8 = (this->Blocks).ArrayNum;
    uVar9 = iVar8 - 1;
    uVar7 = 0;
    if ((int)uVar9 < iVar8) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TCachedStringStore<wchar_t> *)(*pcVar5)();
      return pTVar10;
    }
    plVar4 = *(longlong **)
              ((this->Blocks).AllocatorInstance.Data + (longlong)(this->Blocks).ArrayNum * 8 + -8);
    if (plVar4 != (longlong *)0x0) {
      if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      pwVar18 = (wchar_t *)plVar4[1];
    }
    pwVar18 = (wchar_t *)((ulonglong)(0x2000 - this->State->BufferLeftBytes) + (longlong)pwVar18);
  }
  this->BufferCursor = pwVar18;
  if (((this->Blocks).ArrayNum != this->State->BlockCount) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Blocks.Num() == State->BlockCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedStringStore.h"
                         ,0x49,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TCachedStringStore<wchar_t> *)(*pcVar5)();
    return pTVar10;
  }
  return this;
}

// ~TCachedStringStore<wchar_t> @ 14d4272a0

void __thiscall
TraceServices::TCachedStringStore<wchar_t>::~TCachedStringStore<wchar_t>
          (TCachedStringStore<wchar_t> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->Blocks).ArrayNum != this->State->BlockCount) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Blocks.Num() == State->BlockCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedStringStore.h"
                       ,0x4e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DestructItems<FSharedBuffer,int>
            ((FSharedBuffer *)(this->Blocks).AllocatorInstance.Data,(this->Blocks).ArrayNum);
  pFVar1 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StoredStrings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StoredStrings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StoredStrings);
  return;
}

// GetStringAtOffset @ 14d46d360

wchar_t * __thiscall
TraceServices::TCachedStringStore<wchar_t>::GetStringAtOffset
          (TCachedStringStore<wchar_t> *this,ulong64 param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = (int)(param_1 >> 0xd);
  if ((this->Blocks).ArrayNum <= iVar6) {
    return (wchar_t *)0x0;
  }
  if (iVar6 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar4 = (wchar_t *)(*pcVar2)();
      return pwVar4;
    }
  }
  plVar1 = *(longlong **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8);
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    lVar5 = plVar1[1];
  }
  return (wchar_t *)((ulonglong)((uint)param_1 & 0x1fff) + lVar5);
}

// StoreInternal @ 14d48c3c0

TTuple<unsigned___int64,wchar_t_const_*> * __thiscall
TraceServices::TCachedStringStore<wchar_t>::StoreInternal
          (TCachedStringStore<wchar_t> *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  wchar_t *_Dst;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<unsigned___int64,wchar_t_const_*> *pTVar9;
  TTuple<unsigned___int64,wchar_t_const_*> *pTVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  uint *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,TTuple<unsigned___int64,wchar_t_const_*>_&&> local_res10;
  ulonglong local_68;
  wchar_t *local_60;
  uint *local_58;
  ulonglong *local_50;
  TStringView<wchar_t> local_48;
  
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res8[0] = ::GetTypeHash(&local_48);
  pTVar10 = (TTuple<unsigned___int64,wchar_t_const_*> *)0x0;
  if (*(int *)&(this->StoredStrings).field_0x8 != *(int *)&(this->StoredStrings).field_0x34) {
    puVar14 = *(undefined1 **)&(this->StoredStrings).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->StoredStrings).field_0x38;
    }
    uVar7 = *(uint *)(puVar14 +
                     (ulonglong)(*(int *)&(this->StoredStrings).field_0x48 - 1U & local_res8[0]) * 4
                     );
    if (uVar7 != 0xffffffff) {
      do {
        puVar13 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)&this->StoredStrings);
        if (*puVar13 == local_res8[0]) {
          pTVar9 = (TTuple<unsigned___int64,wchar_t_const_*> *)(puVar13 + 2);
          if (puVar13 == (uint *)0x0) {
            pTVar9 = pTVar10;
          }
          if (pTVar9 != (TTuple<unsigned___int64,wchar_t_const_*> *)0x0) {
            return pTVar9;
          }
          break;
        }
        uVar7 = puVar13[6];
      } while (uVar7 != 0xffffffff);
    }
  }
  if ((param_1->Size < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("String.Len() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedStringStore.h"
                         ,0xbc,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TTuple<unsigned___int64,wchar_t_const_*> *)(*pcVar5)();
    return pTVar10;
  }
  uVar7 = param_1->Size;
  uVar15 = uVar7 + 1;
  if ((0x2000 < uVar15 * 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StringLengthBytes <= BlockSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedStringStore.h"
                         ,0xbf,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TTuple<unsigned___int64,wchar_t_const_*> *)(*pcVar5)();
    return pTVar10;
  }
  if (this->State->BufferLeftBytes < uVar15 * 2) {
    pFVar11 = (FScriptContainerElement *)
              (**(code **)((longlong)*this->Cache + 0x18))
                        (this->Cache,&local_res10.Value,this->CacheIndex,1);
    pFVar2 = (this->Blocks).AllocatorInstance.Data;
    if (((pFVar2 <= pFVar11) && (pFVar11 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TTuple<unsigned___int64,wchar_t_const_*> *)(*pcVar5)();
      return pTVar10;
    }
    iVar8 = (this->Blocks).ArrayNum;
    piVar1 = &(this->Blocks).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Blocks).AllocatorInstance,piVar1);
    }
    (this->Blocks).ArrayNum = iVar8 + 1;
    pFVar2 = (this->Blocks).AllocatorInstance.Data + (longlong)iVar8 * 8;
    lVar3 = *(longlong *)pFVar11;
    *(longlong *)pFVar11 = 0;
    *(longlong *)pFVar2 = lVar3;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_res10.Value);
    plVar4 = *(longlong **)pFVar2;
    if (plVar4 != (longlong *)0x0) {
      if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      pTVar10 = (TTuple<unsigned___int64,wchar_t_const_*> *)plVar4[1];
    }
    this->BufferCursor = (wchar_t *)pTVar10;
    this->State->BlockCount = this->State->BlockCount + 1;
    this->State->BufferLeftBytes = 0x2000;
  }
  _Dst = this->BufferCursor;
  uVar16 = (ulonglong)((this->Blocks).ArrayNum * 0x2000 - this->State->BufferLeftBytes);
  memcpy(_Dst,param_1->DataPtr,(ulonglong)uVar7 * 2);
  this->BufferCursor[uVar7] = L'\0';
  puVar13 = &this->State->BufferLeftBytes;
  *puVar13 = *puVar13 + uVar15 * -2;
  this->BufferCursor = this->BufferCursor + uVar15;
  pwVar12 = GetStringAtOffset(this,uVar16);
  if ((pwVar12 != _Dst) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStringAtOffset(StoredOffset) == StoreString",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedStringStore.h"
                         ,0xd1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TTuple<unsigned___int64,wchar_t_const_*> *)(*pcVar5)();
    return pTVar10;
  }
  local_58 = local_res8;
  local_50 = &local_68;
  local_68 = uVar16;
  local_60 = _Dst;
  TSet<TTuple<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TTuple<unsigned___int64,wchar_t_const_*>_&&>_>
            ((TSet<TTuple<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned___int64,wchar_t_const_*>,0>,FDefaultSetAllocator>
              *)&this->StoredStrings,&local_res10,(bool *)&local_58);
  return (TTuple<unsigned___int64,wchar_t_const_*> *)
         (*(longlong *)&this->StoredStrings + (longlong)(int)local_res10.Key * 0x20 + 8);
}

