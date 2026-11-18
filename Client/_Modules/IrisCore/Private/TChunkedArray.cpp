// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 20

// TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_> @ 1441f8160

TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_> *
__thiscall
TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>::
TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
          (TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
  *pTVar8;
  undefined2 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar5 = (int)(param_1 + 0xff + (param_1 + 0xff >> 0x1f & 0xffU)) >> 8;
  uVar11 = (ulonglong)uVar5;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar11);
  }
  if (uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,(ForAnyElementType *)this,0,piVar1);
  }
  if (0 < (int)uVar5) {
    do {
      pvVar7 = ::operator_new(0x2000);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0x100;
        puVar9 = (undefined2 *)((longlong)pvVar7 + 0x18);
        do {
          *(undefined8 *)(puVar9 + -0xc) = 0;
          *(undefined8 *)(puVar9 + -8) = 0;
          *(undefined8 *)(puVar9 + -4) = 0;
          *puVar9 = 0;
          puVar9 = puVar9 + 0x10;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// operator[] @ 1441fa6a0

uchar ** __thiscall
TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uchar **ppuVar5;
  
  uVar2 = param_1 / 100;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      ppuVar5 = (uchar **)(*pcVar1)();
      return ppuVar5;
    }
  }
  return (uchar **)
         (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
         (longlong)(param_1 % 100) * 8);
}

// operator[] @ 1441fa740

TObjectPtr<UObject> * __thiscall
TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TObjectPtr<UObject> *pTVar5;
  
  uVar2 = param_1 / 100;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UObject> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TObjectPtr<UObject> *)
         (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
         (longlong)(param_1 % 100) * 8);
}

// operator[] @ 1441fa7e0

FPerObjectInfo * __thiscall
TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>::
operator[](TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPerObjectInfo *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0xff;
  uVar3 = param_1 + uVar6;
  uVar7 = (int)uVar3 >> 8;
  uVar5 = 0;
  if ((int)uVar7 < (this->Chunks).Array.ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPerObjectInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPerObjectInfo *)
         ((ulonglong)((uVar3 & 0xff) - uVar6) * 0x20 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8));
}

// Add @ 1441fb280

int __thiscall
TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>::
Add(TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>
    *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined2 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_18 [2];
  
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar1 = this->NumElements;
  iVar5 = iVar1 + param_1;
  iVar6 = iVar5 + 0xff;
  this->NumElements = iVar5;
  iVar5 = (this->Chunks).Array.ArrayNum;
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0xffU)) >> 8;
  if (iVar5 < iVar6) {
    uVar10 = (ulonglong)(uint)(iVar6 - iVar5);
    do {
      pvVar7 = ::operator_new(0x2000);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0x100;
        puVar8 = (undefined2 *)((longlong)pvVar7 + 0x18);
        do {
          *(undefined8 *)(puVar8 + -0xc) = 0;
          *(undefined8 *)(puVar8 + -8) = 0;
          *(undefined8 *)(puVar8 + -4) = 0;
          *puVar8 = 0;
          puVar8 = puVar8 + 0x10;
          lVar9 = lVar9 + -1;
          local_18[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar5 = (this->Chunks).Array.ArrayNum;
      if (iVar5 == (this->Chunks).Array.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar5 + 1;
      *(void **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

// TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_> @ 144228370

TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::
TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>
          (TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0x491) / 0x492;
  uVar12 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar8 = ::operator_new(0xfff0);
      local_18[0] = (void *)0x0;
      if (pvVar8 != (void *)0x0) {
        lVar11 = 0x492;
        puVar10 = (undefined4 *)((longlong)pvVar8 + 0x1c);
        do {
          uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          *(double *)(puVar10 + -7) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)(puVar10 + -5) = uVar5;
          *(double *)(puVar10 + -3) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          puVar10[-1] = 0;
          *puVar10 = 0xffffffff;
          puVar10[1] = 0;
          puVar10[2] = 0xffffffff;
          puVar10[3] = 0;
          *(undefined2 *)(puVar10 + 4) = 0;
          *(undefined8 *)(puVar10 + 5) = 0;
          lVar11 = lVar11 + -1;
          local_18[0] = pvVar8;
          puVar10 = puVar10 + 0xe;
        } while (lVar11 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar9;
      }
      iVar7 = (this->Chunks).Array.ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar7 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_18[0];
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return this;
}

// operator[] @ 14422b860

FInternalBaselineStateInfo * __thiscall
TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
::operator[](TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FInternalBaselineStateInfo *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0xff;
  uVar3 = param_1 + uVar6;
  uVar7 = (int)uVar3 >> 8;
  uVar5 = 0;
  if ((int)uVar7 < (this->Chunks).Array.ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInternalBaselineStateInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FInternalBaselineStateInfo *)
         ((ulonglong)((uVar3 & 0xff) - uVar6) * 0x10 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8));
}

// operator[] @ 14422b900

FPerObjectInfo * __thiscall
TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FPerObjectInfo *pFVar5;
  
  uVar2 = param_1 / 0x492;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPerObjectInfo *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FPerObjectInfo *)
         ((ulonglong)(uint)(param_1 % 0x492) * 0x38 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// Add @ 14422d730

int __thiscall
TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  if ((param_1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  iVar1 = this->NumElements;
  iVar7 = iVar1 + param_1;
  this->NumElements = iVar7;
  iVar4 = (iVar7 + 0x491) / 0x492;
  iVar7 = (this->Chunks).Array.ArrayNum;
  if (iVar7 < iVar4) {
    uVar11 = (ulonglong)(uint)(iVar4 - iVar7);
    do {
      pvVar8 = ::operator_new(0xfff0);
      local_18[0] = (void *)0x0;
      if (pvVar8 != (void *)0x0) {
        lVar10 = 0x492;
        puVar9 = (undefined4 *)((longlong)pvVar8 + 0x1c);
        do {
          uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          *(double *)(puVar9 + -7) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)(puVar9 + -5) = uVar5;
          *(double *)(puVar9 + -3) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          puVar9[-1] = 0;
          *puVar9 = 0xffffffff;
          puVar9[1] = 0;
          puVar9[2] = 0xffffffff;
          puVar9[3] = 0;
          *(undefined2 *)(puVar9 + 4) = 0;
          *(undefined8 *)(puVar9 + 5) = 0;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar8;
          puVar9 = puVar9 + 0xe;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      iVar7 = (this->Chunks).Array.ArrayNum;
      if (iVar7 == (this->Chunks).Array.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar7 + 1;
      *(void **)(pFVar2 + (longlong)iVar7 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return iVar1;
}

// TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_> @ 144265b80

TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
* __thiscall
TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
::
TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
          (TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
  *pTVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 99) / 100;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x15e0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 100;
        lVar9 = (longlong)pvVar7 + 0xc;
        do {
          *(undefined8 *)(lVar9 + -0xc) = 0;
          *(undefined8 *)(lVar9 + -4) = 0;
          *(undefined8 *)(lVar9 + 4) = 0;
          *(undefined8 *)(lVar9 + 0xc) = 0;
          *(undefined8 *)(lVar9 + 0x14) = 0;
          *(undefined8 *)(lVar9 + 0x1c) = 0;
          *(undefined4 *)(lVar9 + 0x24) = 0xff;
          lVar9 = lVar9 + 0x38;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// operator[] @ 144269c50

ushort * __thiscall
TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar2 = param_1 / 100;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      puVar5 = (ushort *)(*pcVar1)();
      return puVar5;
    }
  }
  return (ushort *)
         (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
         (ulonglong)(uint)(param_1 % 100) * 2);
}

// operator[] @ 144269cf0

uchar ** __thiscall
TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uchar **ppuVar5;
  
  uVar2 = param_1 / 100;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      ppuVar5 = (uchar **)(*pcVar1)();
      return ppuVar5;
    }
  }
  return (uchar **)
         (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
         (ulonglong)(uint)(param_1 % 100) * 8);
}

// operator[] @ 144269d90

TObjectPtr<UObject> * __thiscall
TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TObjectPtr<UObject> *pTVar5;
  
  uVar2 = param_1 / 100;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UObject> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TObjectPtr<UObject> *)
         (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
         (ulonglong)(uint)(param_1 % 100) * 8);
}

// operator[] @ 144269e30

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FReplicatedObjectData * __thiscall
TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
::operator[](TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FReplicatedObjectData *pFVar5;
  
  uVar2 = param_1 / 100;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReplicatedObjectData *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FReplicatedObjectData *)
         ((ulonglong)(uint)(param_1 % 100) * 0x38 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// operator[] @ 144269ed0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FReplicatedObjectData * __thiscall
TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
::operator[](TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FReplicatedObjectData *pFVar5;
  
  uVar2 = param_1 / 100;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReplicatedObjectData *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FReplicatedObjectData *)
         ((longlong)(param_1 % 100) * 0x38 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// Add @ 14426abd0

int __thiscall
TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
::Add(TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_18 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 99) / 100;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x15e0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 100;
        lVar8 = (longlong)pvVar7 + 0xc;
        do {
          *(undefined8 *)(lVar8 + -0xc) = 0;
          *(undefined8 *)(lVar8 + -4) = 0;
          *(undefined8 *)(lVar8 + 4) = 0;
          *(undefined8 *)(lVar8 + 0xc) = 0;
          *(undefined8 *)(lVar8 + 0x14) = 0;
          *(undefined8 *)(lVar8 + 0x1c) = 0;
          *(undefined4 *)(lVar8 + 0x24) = 0xff;
          lVar8 = lVar8 + 0x38;
          lVar9 = lVar9 + -1;
          local_18[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_18[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

// TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_> @ 1442ad570

TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::
TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>
          (TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  void *local_18 [2];
  
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  uVar5 = (int)(param_1 + 0x3ff + (param_1 + 0x3ff >> 0x1f & 0x3ffU)) >> 10;
  uVar8 = (ulonglong)uVar5;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar8);
  }
  if (uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,(ForAnyElementType *)this,0,piVar1);
  }
  if (0 < (int)uVar5) {
    do {
      local_18[0] = ::operator_new(0x800);
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return this;
}

// TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> @ 1442ad6b0

TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
          (TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  void *local_18 [2];
  
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  uVar5 = (int)(param_1 + 0x7ff + (param_1 + 0x7ff >> 0x1f & 0x7ffU)) >> 0xb;
  uVar8 = (ulonglong)uVar5;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar8);
  }
  if (uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,(ForAnyElementType *)this,0,piVar1);
  }
  if (0 < (int)uVar5) {
    do {
      local_18[0] = ::operator_new(0x10000);
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return this;
}

// operator[] @ 1442b1260

ushort * __thiscall
TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0x3ff;
  uVar3 = param_1 + uVar6;
  uVar7 = (int)uVar3 >> 10;
  uVar5 = 0;
  if ((int)uVar7 < (this->Chunks).Array.ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (ushort *)(*pcVar1)();
      return puVar4;
    }
  }
  return (ushort *)
         (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8) +
         (ulonglong)((uVar3 & 0x3ff) - uVar6) * 2);
}

// operator[] @ 1442f95f0

FObjectInfo * __thiscall
TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FObjectInfo *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0x7ff;
  uVar3 = param_1 + uVar6;
  uVar7 = (int)uVar3 >> 0xb;
  uVar5 = 0;
  if ((int)uVar7 < (this->Chunks).Array.ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FObjectInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FObjectInfo *)
         ((ulonglong)((uVar3 & 0x7ff) - uVar6) * 0x20 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8));
}

