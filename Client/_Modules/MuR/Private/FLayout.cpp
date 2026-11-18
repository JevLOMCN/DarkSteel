// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 18

// operator== @ 14aa94e70

bool __thiscall UE::Mutable::Private::FLayout::operator==(FLayout *this,FLayout *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (((((this->Size).field0_0x0._s_0.X == (param_1->Size).field0_0x0._s_0.X) &&
       ((this->Size).field0_0x0._s_0.Y == (param_1->Size).field0_0x0._s_0.Y)) &&
      ((this->MaxSize).field0_0x0._s_0.X == (param_1->MaxSize).field0_0x0._s_0.X)) &&
     (((this->MaxSize).field0_0x0._s_0.Y == (param_1->MaxSize).field0_0x0._s_0.Y &&
      (iVar1 = (this->Blocks).ArrayNum, iVar1 == (param_1->Blocks).ArrayNum)))) {
    bVar2 = CompareItems<UE::Mutable::Private::FLayoutBlock,int>
                      ((FLayoutBlock *)(this->Blocks).AllocatorInstance.Data,
                       (FLayoutBlock *)(param_1->Blocks).AllocatorInstance.Data,iVar1);
    if ((bVar2) &&
       ((this->Strategy == param_1->Strategy && (this->ReductionMethod == param_1->ReductionMethod))
       )) {
      return true;
    }
  }
  return false;
}

// Clone @ 14aabe180

TSharedPtr<UE::Mutable::Private::FLayout,1> * __thiscall
UE::Mutable::Private::FLayout::Clone
          (FLayout *this,TSharedPtr<UE::Mutable::Private::FLayout,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  EPackStrategy EVar3;
  EReductionMethod EVar4;
  TReferenceControllerBase<1> *pTVar5;
  TIntVector2<int>_u_0 TVar6;
  FLayout *pFVar7;
  FScriptContainerElement *_Src;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  TSharedRef<UE::Mutable::Private::FLayout,1> *pTVar11;
  TSharedPtr<UE::Mutable::Private::FLayout,1> *pTVar12;
  TArray<UE::Mutable::Private::FLayoutBlock,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSizedDefaultAllocator<32>_> *pTVar14;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  TSharedRef<UE::Mutable::Private::FLayout,1> local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name36,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name36,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name36,true);
  pTVar11 = MakeShared<UE::Mutable::Private::FLayout,1>(&local_28);
  __return_storage_ptr__->Object = pTVar11->Object;
  pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  TVar6 = (this->Size).field0_0x0;
  if (__return_storage_ptr__->Object == (FLayout *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TSharedPtr<UE::Mutable::Private::FLayout,1> *)(*pcVar9)();
      return pTVar12;
    }
  }
  (__return_storage_ptr__->Object->Size).field0_0x0 = TVar6;
  TVar6 = (this->MaxSize).field0_0x0;
  if (__return_storage_ptr__->Object == (FLayout *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TSharedPtr<UE::Mutable::Private::FLayout,1> *)(*pcVar9)();
      return pTVar12;
    }
  }
  (__return_storage_ptr__->Object->MaxSize).field0_0x0 = TVar6;
  if (__return_storage_ptr__->Object == (FLayout *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TSharedPtr<UE::Mutable::Private::FLayout,1> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar7 = __return_storage_ptr__->Object;
  pTVar13 = &pFVar7->Blocks;
  if (pTVar13 != &this->Blocks) {
    iVar2 = (this->Blocks).ArrayNum;
    piVar1 = &(pFVar7->Blocks).ArrayMax;
    _Src = (this->Blocks).AllocatorInstance.Data;
    (pFVar7->Blocks).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar2,*piVar1,&pTVar13->AllocatorInstance,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((pTVar13->AllocatorInstance).Data,_Src,(longlong)iVar2 << 5);
      }
    }
  }
  EVar3 = this->Strategy;
  if (__return_storage_ptr__->Object == (FLayout *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TSharedPtr<UE::Mutable::Private::FLayout,1> *)(*pcVar9)();
      return pTVar12;
    }
  }
  __return_storage_ptr__->Object->Strategy = EVar3;
  EVar4 = this->ReductionMethod;
  if (__return_storage_ptr__->Object == (FLayout *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TSharedPtr<UE::Mutable::Private::FLayout,1> *)(*pcVar9)();
      return pTVar12;
    }
  }
  __return_storage_ptr__->Object->ReductionMethod = EVar4;
  if (__return_storage_ptr__->Object == (FLayout *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TSharedPtr<UE::Mutable::Private::FLayout,1> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar7 = __return_storage_ptr__->Object;
  pTVar14 = &pFVar7->Masks;
  if (pTVar14 != &this->Masks) {
    DestructItems<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,int>
              ((TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
               (pTVar14->AllocatorInstance).Data,(pFVar7->Masks).ArrayNum);
    iVar2 = (this->Masks).ArrayNum;
    piVar1 = &(pFVar7->Masks).ArrayMax;
    pTVar8 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
             (this->Masks).AllocatorInstance.Data;
    (pFVar7->Masks).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,*piVar1,&pTVar14->AllocatorInstance,iVar2,piVar1);
      ConstructItems<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,int>
                ((pTVar14->AllocatorInstance).Data,pTVar8,iVar2);
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// FindBlock @ 14aac89f0

int __thiscall UE::Mutable::Private::FLayout::FindBlock(FLayout *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Blocks).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Blocks).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(ulong64 *)((this->Blocks).AllocatorInstance.Data + lVar6 + 0x10) == param_1) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while ((int)uVar5 < (this->Blocks).ArrayNum);
  }
  return -1;
}

// GetBlockCount @ 14aacbca0

int __thiscall UE::Mutable::Private::FLayout::GetBlockCount(FLayout *this)

{
  return (this->Blocks).ArrayNum;
}

// GetDataSize @ 14aacce40

int __thiscall UE::Mutable::Private::FLayout::GetDataSize(FLayout *this)

{
  return ((this->Blocks).ArrayMax + 2) * 0x20;
}

// GetGridSize @ 14aacd6a0

TIntPoint<int> __thiscall UE::Mutable::Private::FLayout::GetGridSize(FLayout *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(int *)in_RDX = (this->Size).field0_0x0._s_0.X;
  *(int *)((longlong)in_RDX + 4) = (this->Size).field0_0x0._s_0.Y;
  return (TIntPoint<int>)in_RDX;
}

// GetLayoutPackingStrategy @ 14aacede0

EPackStrategy __thiscall UE::Mutable::Private::FLayout::GetLayoutPackingStrategy(FLayout *this)

{
  return this->Strategy;
}

// GetMaxGridSize @ 14aacf460

void __thiscall
UE::Mutable::Private::FLayout::GetMaxGridSize(FLayout *this,int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SizeX && SizeY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Layout.cpp"
                       ,0x51,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 == (int *)0x0) {
      return;
    }
    if (param_2 == (int *)0x0) {
      return;
    }
  }
  *param_1 = (this->MaxSize).field0_0x0._s_0.X;
  *param_2 = (this->MaxSize).field0_0x0._s_0.Y;
  return;
}

// IsSimilar @ 14aad8f30

bool __thiscall UE::Mutable::Private::FLayout::IsSimilar(FLayout *this,FLayout *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((((((this->Size).field0_0x0._s_0.X == (param_1->Size).field0_0x0._s_0.X) &&
        ((this->Size).field0_0x0._s_0.Y == (param_1->Size).field0_0x0._s_0.Y)) &&
       ((this->MaxSize).field0_0x0._s_0.X == (param_1->MaxSize).field0_0x0._s_0.X)) &&
      (((this->MaxSize).field0_0x0._s_0.Y == (param_1->MaxSize).field0_0x0._s_0.Y &&
       (iVar1 = (this->Blocks).ArrayNum, iVar1 == (param_1->Blocks).ArrayNum)))) &&
     (this->Strategy == param_1->Strategy)) {
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (this->Blocks).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        pFVar7 = (this->Blocks).AllocatorInstance.Data + lVar9;
        uVar5 = 0;
        if ((int)uVar8 < (param_1->Blocks).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        pFVar6 = (param_1->Blocks).AllocatorInstance.Data + lVar9;
        if (((*(int *)pFVar7 != *(int *)pFVar6) || (*(int *)(pFVar7 + 4) != *(int *)(pFVar6 + 4)))
           || ((*(int *)(pFVar7 + 8) != *(int *)(pFVar6 + 8) ||
               ((*(int *)(pFVar7 + 0xc) != *(int *)(pFVar6 + 0xc) ||
                (*(int *)(pFVar7 + 0x18) != *(int *)(pFVar6 + 0x18))))))) goto LAB_14aad90aa;
        if (((((byte)*(undefined2 *)(pFVar7 + 0x1c) ^ (byte)*(undefined2 *)(pFVar6 + 0x1c)) & 1) !=
             0) || (((((byte)*(undefined2 *)(pFVar7 + 0x1c) ^ (byte)*(undefined2 *)(pFVar6 + 0x1c))
                     & 2) != 0 || (*(short *)(pFVar7 + 0x1e) != *(short *)(pFVar6 + 0x1e)))))
        goto LAB_14aad90aa;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x20;
      } while ((int)uVar8 < (this->Blocks).ArrayNum);
    }
    bVar3 = true;
  }
  else {
LAB_14aad90aa:
    bVar3 = false;
  }
  return bVar3;
}

// IsSingleBlockAndFull @ 14aada2d0

bool __thiscall UE::Mutable::Private::FLayout::IsSingleBlockAndFull(FLayout *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((((this->Blocks).ArrayNum == 1) &&
      (pFVar1 = (this->Blocks).AllocatorInstance.Data, *(int *)pFVar1 == 0)) &&
     (*(int *)(pFVar1 + 4) == 0)) {
    if ((this->Blocks).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->Blocks).AllocatorInstance.Data;
    if ((*(int *)(pFVar1 + 8) == (this->Size).field0_0x0._s_0.X) &&
       (*(int *)(pFVar1 + 0xc) == (this->Size).field0_0x0._s_0.Y)) {
      return true;
    }
  }
  return false;
}

// Serialise @ 14aaf42d0

void __thiscall UE::Mutable::Private::FLayout::Serialise(FLayout *this,FOutputArchive *param_1)

{
  EReductionMethod local_res8 [2];
  
  Private::operator<<(param_1,&this->Size);
  Private::operator<<(param_1,&this->MaxSize);
  local_res8[0] = this->Strategy;
  Private::operator<<(param_1,local_res8);
  local_res8[0] = this->ReductionMethod;
  Private::operator<<(param_1,local_res8);
  local_res8[0] = (this->Blocks).ArrayNum;
  Private::operator<<(param_1,local_res8);
  if (local_res8[0] != Halve) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->Blocks).AllocatorInstance.Data,(ulonglong)local_res8[0] << 5);
  }
  operator<<<TSharedPtr<UE::Mutable::Private::FImage_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->Masks);
  return;
}

// Serialise @ 14aaf4370

void __cdecl UE::Mutable::Private::FLayout::Serialise(FLayout *param_1,FOutputArchive *param_2)

{
  EReductionMethod local_res8 [2];
  
  Private::operator<<(param_2,&param_1->Size);
  Private::operator<<(param_2,&param_1->MaxSize);
  local_res8[0] = param_1->Strategy;
  Private::operator<<(param_2,local_res8);
  local_res8[0] = param_1->ReductionMethod;
  Private::operator<<(param_2,local_res8);
  local_res8[0] = (param_1->Blocks).ArrayNum;
  Private::operator<<(param_2,local_res8);
  if (local_res8[0] != Halve) {
    (**(code **)((longlong)*param_2->Stream + 8))
              (param_2->Stream,(param_1->Blocks).AllocatorInstance.Data,
               (ulonglong)local_res8[0] << 5);
  }
  operator<<<TSharedPtr<UE::Mutable::Private::FImage_const__1>_TSizedDefaultAllocator<32>_>
            (param_2,&param_1->Masks);
  return;
}

// SetBlockCount @ 14aaf6460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FLayout::SetBlockCount(FLayout *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FMemScope local_res8;
  FLLMScope local_res10 [2];
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Layout.cpp"
                       ,0x6b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name108,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name108,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,&LLMScope_Name108,true);
  TArray<UE::Mutable::Private::FLayoutBlock,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Blocks,param_1,Default);
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetGridSize @ 14aaf7270

void __thiscall UE::Mutable::Private::FLayout::SetGridSize(FLayout *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 < 0) || (param_2 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SizeX>=0 && SizeY>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Layout.cpp"
                       ,0x49,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Size).field0_0x0._s_0.X = param_1 & 0xffff;
  (this->Size).field0_0x0._s_0.Y = param_2 & 0xffff;
  return;
}

// SetLayoutPackingStrategy @ 14aaf73d0

void __thiscall
UE::Mutable::Private::FLayout::SetLayoutPackingStrategy(FLayout *this,EPackStrategy param_1)

{
  this->Strategy = param_1;
  return;
}

// SetMaxGridSize @ 14aaf7700

void __thiscall UE::Mutable::Private::FLayout::SetMaxGridSize(FLayout *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 < 0) || (param_2 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SizeX >= 0 && SizeY >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Layout.cpp"
                       ,0x5d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->MaxSize).field0_0x0._s_0.X = param_1 & 0xffff;
  (this->MaxSize).field0_0x0._s_0.Y = param_2 & 0xffff;
  return;
}

// StaticUnserialise @ 14aafa340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedPtr<UE::Mutable::Private::FLayout,1> * __cdecl
UE::Mutable::Private::FLayout::StaticUnserialise
          (TSharedPtr<UE::Mutable::Private::FLayout,1> *__return_storage_ptr__,
          FInputArchive *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<UE::Mutable::Private::FLayout,1> *pTVar5;
  TSharedPtr<UE::Mutable::Private::FLayout,1> *pTVar6;
  FLLMScope local_res8 [2];
  EReductionMethod local_res18 [2];
  uint local_res20 [2];
  FMemScope local_38;
  TSharedRef<UE::Mutable::Private::FLayout,1> local_30;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name27,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name27,false,None,Default,true);
  FMemScope::FMemScope(&local_38,&LLMScope_Name27,true);
  pTVar5 = MakeShared<UE::Mutable::Private::FLayout,1>(&local_30);
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  if (__return_storage_ptr__->Object == (FLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::Mutable::Private::FLayout,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  Private::operator>>(param_1,&pFVar2->Size);
  Private::operator>>(param_1,&pFVar2->MaxSize);
  Private::operator>>(param_1,local_res18);
  pFVar2->Strategy = local_res18[0];
  Private::operator>>(param_1,local_res18);
  pFVar2->ReductionMethod = local_res18[0];
  Private::operator>>(param_1,local_res20);
  TArray<UE::Mutable::Private::FLayoutBlock,TSizedDefaultAllocator<32>_>::SetNum
            (&pFVar2->Blocks,local_res20[0],Default);
  if (local_res20[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(pFVar2->Blocks).AllocatorInstance.Data,
               (ulonglong)local_res20[0] << 5);
  }
  operator>><TSharedPtr<UE::Mutable::Private::FImage_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&pFVar2->Masks);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Unserialise @ 14aafce40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FLayout::Unserialise(FLayout *this,FInputArchive *param_1)

{
  EReductionMethod local_res8 [2];
  uint local_res18 [2];
  
  Private::operator>>(param_1,&this->Size);
  Private::operator>>(param_1,&this->MaxSize);
  Private::operator>>(param_1,local_res8);
  this->Strategy = local_res8[0];
  Private::operator>>(param_1,local_res8);
  this->ReductionMethod = local_res8[0];
  Private::operator>>(param_1,local_res18);
  TArray<UE::Mutable::Private::FLayoutBlock,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Blocks,local_res18[0],Default);
  if (local_res18[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->Blocks).AllocatorInstance.Data,(ulonglong)local_res18[0] << 5)
    ;
  }
  operator>><TSharedPtr<UE::Mutable::Private::FImage_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->Masks);
  return;
}

