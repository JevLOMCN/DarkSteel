// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 36

// Get @ 1436709d0

TArrayView<FEdgeID,int> * __thiscall
TAttributeArrayContainer<FEdgeID>::Get
          (TAttributeArrayContainer<FEdgeID> *this,TArrayView<FEdgeID,int> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<FEdgeID,int> *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar6 = param_1 >> 8;
  uVar4 = 0;
  if ((int)uVar6 < (this->Chunks).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FEdgeID,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar7 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18;
  iVar1 = *(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x410);
  __return_storage_ptr__->DataPtr =
       (FEdgeID *)
       (*(longlong *)pFVar7 +
       (longlong)*(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x10) * 4);
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FEdgeID,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 143670ab0

TArrayView<FUVID,int> * __thiscall
TAttributeArrayContainer<FUVID>::Get
          (TAttributeArrayContainer<FUVID> *this,TArrayView<FUVID,int> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<FUVID,int> *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar6 = param_1 >> 8;
  uVar4 = 0;
  if ((int)uVar6 < (this->Chunks).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FUVID,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar7 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18;
  iVar1 = *(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x410);
  __return_storage_ptr__->DataPtr =
       (FUVID *)(*(longlong *)pFVar7 +
                (longlong)*(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x10) * 4);
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FUVID,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 143670b90

TArrayView<FVertexID,int> * __thiscall
TAttributeArrayContainer<FVertexID>::Get
          (TAttributeArrayContainer<FVertexID> *this,
          TArrayView<FVertexID,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<FVertexID,int> *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar6 = param_1 >> 8;
  uVar4 = 0;
  if ((int)uVar6 < (this->Chunks).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FVertexID,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar7 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18;
  iVar1 = *(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x410);
  __return_storage_ptr__->DataPtr =
       (FVertexID *)
       (*(longlong *)pFVar7 +
       (longlong)*(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x10) * 4);
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FVertexID,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 143670c70

TArrayView<FVertexInstanceID,int> * __thiscall
TAttributeArrayContainer<FVertexInstanceID>::Get
          (TAttributeArrayContainer<FVertexInstanceID> *this,
          TArrayView<FVertexInstanceID,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<FVertexInstanceID,int> *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar6 = param_1 >> 8;
  uVar4 = 0;
  if ((int)uVar6 < (this->Chunks).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FVertexInstanceID,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar7 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18;
  iVar1 = *(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x410);
  __return_storage_ptr__->DataPtr =
       (FVertexInstanceID *)
       (*(longlong *)pFVar7 +
       (longlong)*(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x10) * 4);
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FVertexInstanceID,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Initialize @ 143676740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<int>::Initialize
          (TAttributeArrayContainer<int> *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = (int)(param_1 + 0xffU) >> 8;
  if (-1 < (int)uVar6) {
    DestructItems<TAttributeArrayContainer<int>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,(this->Chunks).ArrayNum);
    piVar1 = &(this->Chunks).ArrayMax;
    (this->Chunks).ArrayNum = 0;
    if (*piVar1 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this,0,piVar1);
    }
    TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Chunks,uVar6,Default);
    if (0 < (int)uVar6) {
      iVar2 = (this->Chunks).ArrayNum;
      uVar5 = iVar2 - 1;
      uVar6 = 0;
      if ((int)uVar5 < iVar2) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    this->NumElements = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Initialize @ 143676880

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<float>::Initialize
          (TAttributeArrayContainer<float> *this,int param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = (int)(param_1 + 0xffU) >> 8;
  if (-1 < (int)uVar6) {
    DestructItems<TAttributeArrayContainer<float>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,(this->Chunks).ArrayNum);
    piVar1 = &(this->Chunks).ArrayMax;
    (this->Chunks).ArrayNum = 0;
    if (*piVar1 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this,0,piVar1);
    }
    TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Chunks,uVar6,Default);
    if (0 < (int)uVar6) {
      iVar2 = (this->Chunks).ArrayNum;
      uVar5 = iVar2 - 1;
      uVar6 = 0;
      if ((int)uVar5 < iVar2) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    this->NumElements = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Initialize @ 1436769c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<UE::Math::TTransform<double>_>::Initialize
          (TAttributeArrayContainer<UE::Math::TTransform<double>_> *this,int param_1,
          TTransform<double> *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = (int)(param_1 + 0xffU) >> 8;
  if (-1 < (int)uVar6) {
    DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,(this->Chunks).ArrayNum);
    piVar1 = &(this->Chunks).ArrayMax;
    (this->Chunks).ArrayNum = 0;
    if (*piVar1 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this,0,piVar1);
    }
    TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->Chunks,uVar6,Default);
    if (0 < (int)uVar6) {
      iVar2 = (this->Chunks).ArrayNum;
      uVar5 = iVar2 - 1;
      uVar6 = 0;
      if ((int)uVar5 < iVar2) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    this->NumElements = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Initialize @ 143676b00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<UE::Math::TVector2<float>_>::Initialize
          (TAttributeArrayContainer<UE::Math::TVector2<float>_> *this,int param_1,
          TVector2<float> *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = (int)(param_1 + 0xffU) >> 8;
  if (-1 < (int)uVar6) {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,(this->Chunks).ArrayNum);
    piVar1 = &(this->Chunks).ArrayMax;
    (this->Chunks).ArrayNum = 0;
    if (*piVar1 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this,0,piVar1);
    }
    TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->Chunks,uVar6,Default);
    if (0 < (int)uVar6) {
      iVar2 = (this->Chunks).ArrayNum;
      uVar5 = iVar2 - 1;
      uVar6 = 0;
      if ((int)uVar5 < iVar2) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    this->NumElements = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Initialize @ 143676c40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<UE::Math::TVector4<float>_>::Initialize
          (TAttributeArrayContainer<UE::Math::TVector4<float>_> *this,int param_1,
          TVector4<float> *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = (int)(param_1 + 0xffU) >> 8;
  if (-1 < (int)uVar6) {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,(this->Chunks).ArrayNum);
    piVar1 = &(this->Chunks).ArrayMax;
    (this->Chunks).ArrayNum = 0;
    if (*piVar1 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this,0,piVar1);
    }
    TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->Chunks,uVar6,Default);
    if (0 < (int)uVar6) {
      iVar2 = (this->Chunks).ArrayNum;
      uVar5 = iVar2 - 1;
      uVar6 = 0;
      if ((int)uVar5 < iVar2) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    this->NumElements = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Initialize @ 143676d80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<UE::Math::TVector<float>_>::Initialize
          (TAttributeArrayContainer<UE::Math::TVector<float>_> *this,int param_1,
          TVector<float> *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = (int)(param_1 + 0xffU) >> 8;
  if (-1 < (int)uVar6) {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,(this->Chunks).ArrayNum);
    piVar1 = &(this->Chunks).ArrayMax;
    (this->Chunks).ArrayNum = 0;
    if (*piVar1 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this,0,piVar1);
    }
    TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->Chunks,uVar6,Default);
    if (0 < (int)uVar6) {
      iVar2 = (this->Chunks).ArrayNum;
      uVar5 = iVar2 - 1;
      uVar6 = 0;
      if ((int)uVar5 < iVar2) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    this->NumElements = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Initialize @ 143676ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<FName>::Initialize
          (TAttributeArrayContainer<FName> *this,int param_1,FName *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = (int)(param_1 + 0xffU) >> 8;
  if (-1 < (int)uVar6) {
    DestructItems<TAttributeArrayContainer<FName>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,(this->Chunks).ArrayNum);
    piVar1 = &(this->Chunks).ArrayMax;
    (this->Chunks).ArrayNum = 0;
    if (*piVar1 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this,0,piVar1);
    }
    TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Chunks,uVar6,Default);
    if (0 < (int)uVar6) {
      iVar2 = (this->Chunks).ArrayNum;
      uVar5 = iVar2 - 1;
      uVar6 = 0;
      if ((int)uVar5 < iVar2) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    this->NumElements = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Initialize @ 143677000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<bool>::Initialize
          (TAttributeArrayContainer<bool> *this,int param_1,bool *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = (int)(param_1 + 0xffU) >> 8;
  if (-1 < (int)uVar6) {
    DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,(this->Chunks).ArrayNum);
    piVar1 = &(this->Chunks).ArrayMax;
    (this->Chunks).ArrayNum = 0;
    if (*piVar1 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this,0,piVar1);
    }
    TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Chunks,uVar6,Default);
    if (0 < (int)uVar6) {
      iVar2 = (this->Chunks).ArrayNum;
      uVar5 = iVar2 - 1;
      uVar6 = 0;
      if ((int)uVar5 < iVar2) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    this->NumElements = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Remap @ 14367fdc0

void __thiscall
TAttributeArrayContainer<int>::Remap
          (TAttributeArrayContainer<int> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  TArrayView<int,int> local_98;
  TAttributeArrayContainer<int> local_88;
  undefined1 local_70 [12];
  uint local_64;
  longlong local_60;
  uint local_58;
  uint local_54;
  
  local_88.DefaultValue = *param_2;
  local_88.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Chunks.ArrayNum = 0;
  local_88.Chunks.ArrayMax = 0;
  local_88.NumElements = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_70,param_1);
  if ((int)local_54 < *(int *)(local_60 + 0x18)) {
    do {
      uVar8 = local_54;
      iVar1 = *(int *)(*(longlong *)param_1 + (longlong)(int)local_54 * 8);
      if ((iVar1 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x6e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_88.NumElements < iVar1 + 1) {
        SetNum(&local_88,iVar1 + 1,param_2);
      }
      uVar10 = (int)uVar8 >> 8;
      uVar9 = (ulonglong)(uVar8 & 0xff);
      uVar8 = 0;
      if ((int)uVar10 < (this->Chunks).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0xc18;
      iVar2 = *(int *)(pFVar12 + uVar9 * 4 + 0x10);
      lVar5 = *(longlong *)pFVar12;
      iVar3 = *(int *)(pFVar12 + uVar9 * 4 + 0x410);
      if ((iVar3 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SetElementSize(&local_88,&local_98,iVar1,iVar3,true,false);
      iVar1 = local_98.ArrayNum;
      uVar9 = 0;
      uVar11 = 0;
      if (0 < iVar3) {
        do {
          uVar4 = *(undefined4 *)(uVar11 + lVar5 + (longlong)iVar2 * 4);
          uVar10 = (uint)uVar9;
          uVar8 = 0;
          if ((int)uVar10 < iVar1) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined4 *)(uVar11 + (longlong)local_98.DataPtr) = uVar4;
          uVar9 = (ulonglong)(uVar10 + 1);
          uVar11 = uVar11 + 4;
        } while ((int)(uVar10 + 1) < iVar3);
      }
      local_58 = local_58 & ~local_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_70 + 8));
    } while ((int)local_54 < *(int *)(local_60 + 0x18));
  }
  piVar13 = &(this->Chunks).ArrayNum;
  if (this == &local_88) {
    uVar8 = local_88.Chunks.ArrayNum;
  }
  else {
    DestructItems<TAttributeArrayContainer<int>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,*piVar13);
    pFVar12 = (this->Chunks).AllocatorInstance.Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (this->Chunks).AllocatorInstance.Data = local_88.Chunks.AllocatorInstance.Data;
    *piVar13 = local_88.Chunks.ArrayNum;
    (this->Chunks).ArrayMax = local_88.Chunks.ArrayMax;
    local_88.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Chunks.ArrayNum = 0;
    local_88.Chunks.ArrayMax = 0;
    uVar8 = 0;
  }
  this->NumElements = local_88.NumElements;
  this->DefaultValue = local_88.DefaultValue;
  DestructItems<TAttributeArrayContainer<int>::FChunk,int>
            ((FChunk *)local_88.Chunks.AllocatorInstance.Data,uVar8);
  if ((FChunk *)local_88.Chunks.AllocatorInstance.Data != (FChunk *)0x0) {
    FMemory::Free(local_88.Chunks.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 1436800e0

void __thiscall
TAttributeArrayContainer<float>::Remap
          (TAttributeArrayContainer<float> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  TArrayView<float,int> local_98;
  TAttributeArrayContainer<float> local_88;
  undefined1 local_70 [12];
  uint local_64;
  longlong local_60;
  uint local_58;
  uint local_54;
  
  local_88.DefaultValue = *param_2;
  local_88.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Chunks.ArrayNum = 0;
  local_88.Chunks.ArrayMax = 0;
  local_88.NumElements = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_70,param_1);
  if ((int)local_54 < *(int *)(local_60 + 0x18)) {
    do {
      uVar8 = local_54;
      iVar2 = *(int *)(*(longlong *)param_1 + (longlong)(int)local_54 * 8);
      if ((iVar2 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x6e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_88.NumElements < iVar2 + 1) {
        SetNum(&local_88,iVar2 + 1,param_2);
      }
      uVar10 = (int)uVar8 >> 8;
      uVar9 = (ulonglong)(uVar8 & 0xff);
      uVar8 = 0;
      if ((int)uVar10 < (this->Chunks).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0xc18;
      iVar3 = *(int *)(pFVar12 + uVar9 * 4 + 0x10);
      lVar5 = *(longlong *)pFVar12;
      iVar4 = *(int *)(pFVar12 + uVar9 * 4 + 0x410);
      if ((iVar4 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SetElementSize(&local_88,&local_98,iVar2,iVar4,true,false);
      iVar2 = local_98.ArrayNum;
      uVar9 = 0;
      uVar11 = 0;
      if (0 < iVar4) {
        do {
          uVar1 = *(undefined4 *)(uVar11 + lVar5 + (longlong)iVar3 * 4);
          uVar10 = (uint)uVar9;
          uVar8 = 0;
          if ((int)uVar10 < iVar2) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined4 *)(uVar11 + (longlong)local_98.DataPtr) = uVar1;
          uVar9 = (ulonglong)(uVar10 + 1);
          uVar11 = uVar11 + 4;
        } while ((int)(uVar10 + 1) < iVar4);
      }
      local_58 = local_58 & ~local_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_70 + 8));
    } while ((int)local_54 < *(int *)(local_60 + 0x18));
  }
  piVar13 = &(this->Chunks).ArrayNum;
  if (this == &local_88) {
    uVar8 = local_88.Chunks.ArrayNum;
  }
  else {
    DestructItems<TAttributeArrayContainer<float>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,*piVar13);
    pFVar12 = (this->Chunks).AllocatorInstance.Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (this->Chunks).AllocatorInstance.Data = local_88.Chunks.AllocatorInstance.Data;
    *piVar13 = local_88.Chunks.ArrayNum;
    (this->Chunks).ArrayMax = local_88.Chunks.ArrayMax;
    local_88.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Chunks.ArrayNum = 0;
    local_88.Chunks.ArrayMax = 0;
    uVar8 = 0;
  }
  this->DefaultValue = local_88.DefaultValue;
  this->NumElements = local_88.NumElements;
  DestructItems<TAttributeArrayContainer<float>::FChunk,int>
            ((FChunk *)local_88.Chunks.AllocatorInstance.Data,uVar8);
  if ((FChunk *)local_88.Chunks.AllocatorInstance.Data != (FChunk *)0x0) {
    FMemory::Free(local_88.Chunks.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 143680420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TAttributeArrayContainer<UE::Math::TTransform<double>_>::Remap
          (TAttributeArrayContainer<UE::Math::TTransform<double>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,TTransform<double> *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  undefined1 auStackY_1a8 [32];
  TArrayView<UE::Math::TTransform<double>,int> local_160;
  undefined1 local_150 [12];
  uint local_144;
  longlong local_140;
  uint local_138;
  uint local_134;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  TAttributeArrayContainer<UE::Math::TTransform<double>_> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_c8.DefaultValue.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_c8.DefaultValue.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_c8.DefaultValue.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_c8.DefaultValue.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_c8.DefaultValue.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_c8.DefaultValue.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_c8.DefaultValue.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_c8.DefaultValue.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_c8.DefaultValue.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_c8.DefaultValue.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_c8.DefaultValue.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_c8.DefaultValue.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  local_c8.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Chunks.ArrayNum = 0;
  local_c8.Chunks.ArrayMax = 0;
  local_c8.NumElements = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_150,param_1);
  if ((int)local_134 < *(int *)(local_140 + 0x18)) {
    do {
      uVar7 = local_134;
      iVar3 = *(int *)(*(longlong *)param_1 + (longlong)(int)local_134 * 8);
      if ((iVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x6e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_c8.NumElements < iVar3 + 1) {
        SetNum(&local_c8,iVar3 + 1,param_2);
      }
      uVar10 = (int)uVar7 >> 8;
      uVar9 = (ulonglong)(uVar7 & 0xff);
      uVar7 = 0;
      if ((int)uVar10 < (this->Chunks).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0xc18;
      iVar4 = *(int *)(pFVar8 + uVar9 * 4 + 0x410);
      lVar13 = (longlong)*(int *)(pFVar8 + uVar9 * 4 + 0x10) * 0x60 + *(longlong *)pFVar8;
      if ((iVar4 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SetElementSize(&local_c8,&local_160,iVar3,iVar4,true,false);
      iVar3 = local_160.ArrayNum;
      uVar9 = 0;
      uVar11 = 0;
      if (0 < iVar4) {
        do {
          puVar2 = (undefined8 *)(uVar9 + 0x10 + lVar13);
          local_118 = *puVar2;
          uStack_110 = puVar2[1];
          uVar10 = (uint)uVar11;
          puVar2 = (undefined8 *)(uVar9 + 0x20 + lVar13);
          local_108 = *puVar2;
          uStack_100 = puVar2[1];
          puVar1 = (undefined4 *)(uVar9 + lVar13);
          local_128 = *puVar1;
          uStack_124 = puVar1[1];
          uStack_120 = puVar1[2];
          uStack_11c = puVar1[3];
          uVar7 = 0;
          if ((int)uVar10 < iVar3) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          puVar2 = (undefined8 *)(uVar9 + 0x30 + lVar13);
          local_f8 = *puVar2;
          uStack_f0 = puVar2[1];
          puVar2 = (undefined8 *)(uVar9 + 0x40 + lVar13);
          local_e8 = *puVar2;
          uStack_e0 = puVar2[1];
          puVar2 = (undefined8 *)(uVar9 + 0x50 + lVar13);
          local_d8 = *puVar2;
          uStack_d0 = puVar2[1];
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar1 = (undefined4 *)((longlong)((local_160.DataPtr)->Rotation).XY.m128d_f64 + uVar9);
          *puVar1 = local_128;
          puVar1[1] = uStack_124;
          puVar1[2] = uStack_120;
          puVar1[3] = uStack_11c;
          puVar2 = (undefined8 *)((longlong)((local_160.DataPtr)->Rotation).ZW.m128d_f64 + uVar9);
          *puVar2 = local_118;
          puVar2[1] = uStack_110;
          puVar2 = (undefined8 *)((longlong)((local_160.DataPtr)->Translation).XY.m128d_f64 + uVar9)
          ;
          *puVar2 = local_108;
          puVar2[1] = uStack_100;
          puVar2 = (undefined8 *)((longlong)((local_160.DataPtr)->Translation).ZW.m128d_f64 + uVar9)
          ;
          *puVar2 = local_f8;
          puVar2[1] = uStack_f0;
          puVar2 = (undefined8 *)((longlong)((local_160.DataPtr)->Scale3D).XY.m128d_f64 + uVar9);
          *puVar2 = local_e8;
          puVar2[1] = uStack_e0;
          puVar2 = (undefined8 *)((longlong)((local_160.DataPtr)->Scale3D).ZW.m128d_f64 + uVar9);
          *puVar2 = local_d8;
          puVar2[1] = uStack_d0;
          uVar9 = uVar9 + 0x60;
          uVar11 = (ulonglong)(uVar10 + 1);
        } while ((int)(uVar10 + 1) < iVar4);
      }
      local_138 = local_138 & ~local_144;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_150 + 8));
    } while ((int)local_134 < *(int *)(local_140 + 0x18));
  }
  piVar12 = &(this->Chunks).ArrayNum;
  if (this == &local_c8) {
    uVar7 = local_c8.Chunks.ArrayNum;
  }
  else {
    DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,*piVar12);
    pFVar8 = (this->Chunks).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->Chunks).AllocatorInstance.Data = local_c8.Chunks.AllocatorInstance.Data;
    *piVar12 = local_c8.Chunks.ArrayNum;
    (this->Chunks).ArrayMax = local_c8.Chunks.ArrayMax;
    local_c8.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Chunks.ArrayNum = 0;
    local_c8.Chunks.ArrayMax = 0;
    uVar7 = 0;
  }
  (this->DefaultValue).Rotation.XY.m128d_f64[0] = local_c8.DefaultValue.Rotation.XY.m128d_f64[0];
  (this->DefaultValue).Rotation.XY.m128d_f64[1] = local_c8.DefaultValue.Rotation.XY.m128d_f64[1];
  this->NumElements = local_c8.NumElements;
  (this->DefaultValue).Rotation.ZW.m128d_f64[0] = local_c8.DefaultValue.Rotation.ZW.m128d_f64[0];
  (this->DefaultValue).Rotation.ZW.m128d_f64[1] = local_c8.DefaultValue.Rotation.ZW.m128d_f64[1];
  (this->DefaultValue).Translation.XY.m128d_f64[0] =
       local_c8.DefaultValue.Translation.XY.m128d_f64[0];
  (this->DefaultValue).Translation.XY.m128d_f64[1] =
       local_c8.DefaultValue.Translation.XY.m128d_f64[1];
  (this->DefaultValue).Translation.ZW.m128d_f64[0] =
       local_c8.DefaultValue.Translation.ZW.m128d_f64[0];
  (this->DefaultValue).Translation.ZW.m128d_f64[1] =
       local_c8.DefaultValue.Translation.ZW.m128d_f64[1];
  (this->DefaultValue).Scale3D.XY.m128d_f64[0] = local_c8.DefaultValue.Scale3D.XY.m128d_f64[0];
  (this->DefaultValue).Scale3D.XY.m128d_f64[1] = local_c8.DefaultValue.Scale3D.XY.m128d_f64[1];
  (this->DefaultValue).Scale3D.ZW.m128d_f64[0] = local_c8.DefaultValue.Scale3D.ZW.m128d_f64[0];
  (this->DefaultValue).Scale3D.ZW.m128d_f64[1] = local_c8.DefaultValue.Scale3D.ZW.m128d_f64[1];
  DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
            ((FChunk *)local_c8.Chunks.AllocatorInstance.Data,uVar7);
  if ((FChunk *)local_c8.Chunks.AllocatorInstance.Data != (FChunk *)0x0) {
    FMemory::Free(local_c8.Chunks.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 143680810

void __thiscall
TAttributeArrayContainer<UE::Math::TVector2<float>_>::Remap
          (TAttributeArrayContainer<UE::Math::TVector2<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,TVector2<float> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  TArrayView<UE::Math::TVector2<float>,int> local_a0;
  TAttributeArrayContainer<UE::Math::TVector2<float>_> local_90;
  undefined1 local_70 [12];
  uint local_64;
  longlong local_60;
  uint local_58;
  uint local_54;
  
  local_90.DefaultValue.field0_0x0._s_0 = param_2->field0_0x0;
  local_90.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Chunks.ArrayNum = 0;
  local_90.Chunks.ArrayMax = 0;
  local_90.NumElements = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_70,param_1);
  piVar1 = &(this->Chunks).ArrayNum;
  if ((int)local_54 < *(int *)(local_60 + 0x18)) {
    do {
      uVar9 = local_54;
      iVar2 = *(int *)(*(longlong *)param_1 + (longlong)(int)local_54 * 8);
      if ((iVar2 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x6e,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_90.NumElements < iVar2 + 1) {
        SetNum(&local_90,iVar2 + 1,param_2);
      }
      uVar11 = (int)uVar9 >> 8;
      uVar10 = (ulonglong)(uVar9 & 0xff);
      uVar9 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar13 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xc18;
      iVar3 = *(int *)(pFVar13 + uVar10 * 4 + 0x410);
      iVar4 = *(int *)(pFVar13 + uVar10 * 4 + 0x10);
      lVar5 = *(longlong *)pFVar13;
      if ((iVar3 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      SetElementSize(&local_90,&local_a0,iVar2,iVar3,true,false);
      iVar2 = local_a0.ArrayNum;
      uVar10 = 0;
      uVar12 = 0;
      if (0 < iVar3) {
        do {
          uVar6 = *(undefined8 *)(uVar10 + lVar5 + (longlong)iVar4 * 8);
          uVar11 = (uint)uVar12;
          uVar9 = 0;
          if ((int)uVar11 < iVar2) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined8 *)((longlong)&(local_a0.DataPtr)->field0_0x0 + uVar10) = uVar6;
          uVar10 = uVar10 + 8;
          uVar12 = (ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < iVar3);
      }
      local_58 = local_58 & ~local_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_70 + 8));
    } while ((int)local_54 < *(int *)(local_60 + 0x18));
  }
  if (this == &local_90) {
    uVar9 = local_90.Chunks.ArrayNum;
  }
  else {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,*piVar1);
    pFVar13 = (this->Chunks).AllocatorInstance.Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (this->Chunks).AllocatorInstance.Data = local_90.Chunks.AllocatorInstance.Data;
    *piVar1 = local_90.Chunks.ArrayNum;
    (this->Chunks).ArrayMax = local_90.Chunks.ArrayMax;
    local_90.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Chunks.ArrayNum = 0;
    local_90.Chunks.ArrayMax = 0;
    uVar9 = 0;
  }
  this->NumElements = local_90.NumElements;
  (this->DefaultValue).field0_0x0 = local_90.DefaultValue.field0_0x0;
  DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
            ((FChunk *)local_90.Chunks.AllocatorInstance.Data,uVar9);
  if ((FChunk *)local_90.Chunks.AllocatorInstance.Data != (FChunk *)0x0) {
    FMemory::Free(local_90.Chunks.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 143680b30

void __thiscall
TAttributeArrayContainer<UE::Math::TVector4<float>_>::Remap
          (TAttributeArrayContainer<UE::Math::TVector4<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,TVector4<float> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int *piVar15;
  TArrayView<UE::Math::TVector4<float>,int> local_b8;
  undefined1 local_a8 [12];
  uint local_9c;
  longlong local_98;
  uint local_90;
  uint local_8c;
  TAttributeArrayContainer<UE::Math::TVector4<float>_> local_78;
  
  local_78.DefaultValue.field0_0x0._0_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_78.DefaultValue.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  local_78.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Chunks.ArrayNum = 0;
  local_78.Chunks.ArrayMax = 0;
  local_78.NumElements = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_a8,param_1);
  if ((int)local_8c < *(int *)(local_98 + 0x18)) {
    do {
      uVar10 = local_8c;
      iVar2 = *(int *)(*(longlong *)param_1 + (longlong)(int)local_8c * 8);
      if ((iVar2 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x6e,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_78.NumElements < iVar2 + 1) {
        SetNum(&local_78,iVar2 + 1,param_2);
      }
      uVar13 = (int)uVar10 >> 8;
      uVar12 = (ulonglong)(uVar10 & 0xff);
      uVar10 = 0;
      if ((int)uVar13 < (this->Chunks).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar13 * 0xc18;
      iVar3 = *(int *)(pFVar11 + uVar12 * 4 + 0x10);
      iVar4 = *(int *)(pFVar11 + uVar12 * 4 + 0x410);
      lVar5 = *(longlong *)pFVar11;
      if ((iVar4 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SetElementSize(&local_78,&local_b8,iVar2,iVar4,true,false);
      iVar2 = local_b8.ArrayNum;
      uVar12 = 0;
      uVar14 = 0;
      if (0 < iVar4) {
        do {
          puVar1 = (undefined8 *)(uVar14 + (longlong)iVar3 * 0x10 + lVar5);
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          uVar13 = (uint)uVar12;
          uVar10 = 0;
          if ((int)uVar13 < iVar2) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar1 = (undefined8 *)((longlong)&(local_b8.DataPtr)->field0_0x0 + uVar14);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          uVar12 = (ulonglong)(uVar13 + 1);
          uVar14 = uVar14 + 0x10;
        } while ((int)(uVar13 + 1) < iVar4);
      }
      local_90 = local_90 & ~local_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a8 + 8));
    } while ((int)local_8c < *(int *)(local_98 + 0x18));
  }
  piVar15 = &(this->Chunks).ArrayNum;
  if (this == &local_78) {
    uVar10 = local_78.Chunks.ArrayNum;
  }
  else {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,*piVar15);
    pFVar11 = (this->Chunks).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (this->Chunks).AllocatorInstance.Data = local_78.Chunks.AllocatorInstance.Data;
    *piVar15 = local_78.Chunks.ArrayNum;
    (this->Chunks).ArrayMax = local_78.Chunks.ArrayMax;
    local_78.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Chunks.ArrayNum = 0;
    local_78.Chunks.ArrayMax = 0;
    uVar10 = 0;
  }
  *(undefined8 *)&(this->DefaultValue).field0_0x0 = local_78.DefaultValue.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8) =
       local_78.DefaultValue.field0_0x0._8_8_;
  this->NumElements = local_78.NumElements;
  DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
            ((FChunk *)local_78.Chunks.AllocatorInstance.Data,uVar10);
  if ((FChunk *)local_78.Chunks.AllocatorInstance.Data != (FChunk *)0x0) {
    FMemory::Free(local_78.Chunks.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 143680e50

void __thiscall
TAttributeArrayContainer<UE::Math::TVector<float>_>::Remap
          (TAttributeArrayContainer<UE::Math::TVector<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,TVector<float> *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  TArrayView<UE::Math::TVector<float>,int> local_a0;
  TAttributeArrayContainer<UE::Math::TVector<float>_> local_90;
  undefined1 local_70 [12];
  uint local_64;
  longlong local_60;
  uint local_58;
  uint local_54;
  
  local_90.DefaultValue.field0_0x0._0_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_90.DefaultValue.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_90.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Chunks.ArrayNum = 0;
  local_90.Chunks.ArrayMax = 0;
  local_90.NumElements = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_70,param_1);
  if ((int)local_54 < *(int *)(local_60 + 0x18)) {
    do {
      uVar8 = local_54;
      iVar3 = *(int *)(*(longlong *)param_1 + (longlong)(int)local_54 * 8);
      if ((iVar3 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x6e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_90.NumElements < iVar3 + 1) {
        SetNum(&local_90,iVar3 + 1,param_2);
      }
      uVar10 = (int)uVar8 >> 8;
      uVar9 = (ulonglong)(uVar8 & 0xff);
      uVar8 = 0;
      if ((int)uVar10 < (this->Chunks).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0xc18;
      iVar4 = *(int *)(pFVar12 + uVar9 * 4 + 0x410);
      lVar1 = *(longlong *)pFVar12 + (longlong)*(int *)(pFVar12 + uVar9 * 4 + 0x10) * 0xc;
      if ((iVar4 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SetElementSize(&local_90,&local_a0,iVar3,iVar4,true,false);
      iVar3 = local_a0.ArrayNum;
      uVar9 = 0;
      uVar11 = 0;
      if (0 < iVar4) {
        do {
          uVar2 = *(undefined8 *)(uVar11 + lVar1);
          uVar10 = (uint)uVar9;
          uVar5 = *(undefined4 *)(uVar11 + 8 + lVar1);
          uVar8 = 0;
          if ((int)uVar10 < iVar3) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined8 *)((longlong)&(local_a0.DataPtr)->field0_0x0 + uVar11) = uVar2;
          *(undefined4 *)((longlong)&(local_a0.DataPtr)->field0_0x0 + uVar11 + 8) = uVar5;
          uVar9 = (ulonglong)(uVar10 + 1);
          uVar11 = uVar11 + 0xc;
        } while ((int)(uVar10 + 1) < iVar4);
      }
      local_58 = local_58 & ~local_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_70 + 8));
    } while ((int)local_54 < *(int *)(local_60 + 0x18));
  }
  piVar13 = &(this->Chunks).ArrayNum;
  if (this == &local_90) {
    uVar8 = local_90.Chunks.ArrayNum;
  }
  else {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,*piVar13);
    pFVar12 = (this->Chunks).AllocatorInstance.Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (this->Chunks).AllocatorInstance.Data = local_90.Chunks.AllocatorInstance.Data;
    *piVar13 = local_90.Chunks.ArrayNum;
    (this->Chunks).ArrayMax = local_90.Chunks.ArrayMax;
    local_90.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Chunks.ArrayNum = 0;
    local_90.Chunks.ArrayMax = 0;
    uVar8 = 0;
  }
  this->NumElements = local_90.NumElements;
  *(undefined8 *)&(this->DefaultValue).field0_0x0 = local_90.DefaultValue.field0_0x0._0_8_;
  (this->DefaultValue).field0_0x0._s_0.Z = local_90.DefaultValue.field0_0x0._s_0.Z;
  DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
            ((FChunk *)local_90.Chunks.AllocatorInstance.Data,uVar8);
  if ((FChunk *)local_90.Chunks.AllocatorInstance.Data != (FChunk *)0x0) {
    FMemory::Free(local_90.Chunks.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 1436811a0

void __thiscall
TAttributeArrayContainer<FName>::Remap
          (TAttributeArrayContainer<FName> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,FName *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  TArrayView<FName,int> local_a0;
  TAttributeArrayContainer<FName> local_90;
  undefined1 local_70 [12];
  uint local_64;
  longlong local_60;
  uint local_58;
  uint local_54;
  
  local_90.DefaultValue = *param_2;
  local_90.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Chunks.ArrayNum = 0;
  local_90.Chunks.ArrayMax = 0;
  local_90.NumElements = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_70,param_1);
  piVar1 = &(this->Chunks).ArrayNum;
  if ((int)local_54 < *(int *)(local_60 + 0x18)) {
    do {
      uVar9 = local_54;
      iVar2 = *(int *)(*(longlong *)param_1 + (longlong)(int)local_54 * 8);
      if ((iVar2 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x6e,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_90.NumElements < iVar2 + 1) {
        SetNum(&local_90,iVar2 + 1,param_2);
      }
      uVar11 = (int)uVar9 >> 8;
      uVar10 = (ulonglong)(uVar9 & 0xff);
      uVar9 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar13 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xc18;
      iVar3 = *(int *)(pFVar13 + uVar10 * 4 + 0x410);
      iVar4 = *(int *)(pFVar13 + uVar10 * 4 + 0x10);
      lVar5 = *(longlong *)pFVar13;
      if ((iVar3 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      SetElementSize(&local_90,&local_a0,iVar2,iVar3,true,false);
      iVar2 = local_a0.ArrayNum;
      uVar10 = 0;
      uVar12 = 0;
      if (0 < iVar3) {
        do {
          uVar6 = *(undefined8 *)(uVar10 + lVar5 + (longlong)iVar4 * 8);
          uVar11 = (uint)uVar12;
          uVar9 = 0;
          if ((int)uVar11 < iVar2) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined8 *)((longlong)&((local_a0.DataPtr)->ComparisonIndex).Value + uVar10) = uVar6;
          uVar10 = uVar10 + 8;
          uVar12 = (ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < iVar3);
      }
      local_58 = local_58 & ~local_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_70 + 8));
    } while ((int)local_54 < *(int *)(local_60 + 0x18));
  }
  if (this == &local_90) {
    uVar9 = local_90.Chunks.ArrayNum;
  }
  else {
    DestructItems<TAttributeArrayContainer<FName>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,*piVar1);
    pFVar13 = (this->Chunks).AllocatorInstance.Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (this->Chunks).AllocatorInstance.Data = local_90.Chunks.AllocatorInstance.Data;
    *piVar1 = local_90.Chunks.ArrayNum;
    (this->Chunks).ArrayMax = local_90.Chunks.ArrayMax;
    local_90.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Chunks.ArrayNum = 0;
    local_90.Chunks.ArrayMax = 0;
    uVar9 = 0;
  }
  this->NumElements = local_90.NumElements;
  this->DefaultValue = local_90.DefaultValue;
  DestructItems<TAttributeArrayContainer<FName>::FChunk,int>
            ((FChunk *)local_90.Chunks.AllocatorInstance.Data,uVar9);
  if ((FChunk *)local_90.Chunks.AllocatorInstance.Data != (FChunk *)0x0) {
    FMemory::Free(local_90.Chunks.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 1436814c0

void __thiscall
TAttributeArrayContainer<bool>::Remap
          (TAttributeArrayContainer<bool> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  int *piVar13;
  TArrayView<bool,int> local_88;
  TAttributeArrayContainer<bool> local_78;
  undefined1 local_60 [12];
  uint local_54;
  longlong local_50;
  uint local_48;
  uint local_44;
  
  local_78.DefaultValue = *param_2;
  local_78.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Chunks.ArrayNum = 0;
  local_78.Chunks.ArrayMax = 0;
  local_78.NumElements = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_60,param_1);
  if ((int)local_44 < *(int *)(local_50 + 0x18)) {
    do {
      uVar8 = local_44;
      iVar1 = *(int *)(*(longlong *)param_1 + (longlong)(int)local_44 * 8);
      if ((iVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x6e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_78.NumElements < iVar1 + 1) {
        SetNum(&local_78,iVar1 + 1,param_2);
      }
      uVar11 = (int)uVar8 >> 8;
      uVar10 = (ulonglong)(uVar8 & 0xff);
      uVar8 = 0;
      if ((int)uVar11 < (this->Chunks).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xc18;
      iVar2 = *(int *)(pFVar9 + uVar10 * 4 + 0x10);
      lVar4 = *(longlong *)pFVar9;
      iVar3 = *(int *)(pFVar9 + uVar10 * 4 + 0x410);
      if ((iVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SetElementSize(&local_78,&local_88,iVar1,iVar3,true,false);
      iVar1 = local_88.ArrayNum;
      uVar10 = 0;
      uVar12 = 0;
      if (0 < iVar3) {
        do {
          bVar6 = *(bool *)(uVar10 + iVar2 + lVar4);
          uVar11 = (uint)uVar12;
          uVar8 = 0;
          if ((int)uVar11 < iVar1) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_88.DataPtr[uVar10] = bVar6;
          uVar10 = uVar10 + 1;
          uVar12 = (ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < iVar3);
      }
      local_48 = local_48 & ~local_54;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_60 + 8));
    } while ((int)local_44 < *(int *)(local_50 + 0x18));
  }
  piVar13 = &(this->Chunks).ArrayNum;
  if (this == &local_78) {
    uVar8 = local_78.Chunks.ArrayNum;
  }
  else {
    DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
              ((FChunk *)(this->Chunks).AllocatorInstance.Data,*piVar13);
    pFVar9 = (this->Chunks).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (this->Chunks).AllocatorInstance.Data = local_78.Chunks.AllocatorInstance.Data;
    *piVar13 = local_78.Chunks.ArrayNum;
    (this->Chunks).ArrayMax = local_78.Chunks.ArrayMax;
    local_78.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Chunks.ArrayNum = 0;
    local_78.Chunks.ArrayMax = 0;
    uVar8 = 0;
  }
  this->NumElements = local_78.NumElements;
  this->DefaultValue = local_78.DefaultValue;
  DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
            ((FChunk *)local_78.Chunks.AllocatorInstance.Data,uVar8);
  if ((FChunk *)local_78.Chunks.AllocatorInstance.Data != (FChunk *)0x0) {
    FMemory::Free(local_78.Chunks.AllocatorInstance.Data);
  }
  return;
}

// SetElementSize @ 14368e740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayView<int,int> * __thiscall
TAttributeArrayContainer<int>::SetElementSize
          (TAttributeArrayContainer<int> *this,TArrayView<int,int> *__return_storage_ptr__,
          int param_1,int param_2,bool param_3,bool param_4)

{
  FScriptContainerElement *_Src;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> *pTVar4;
  uint uVar5;
  uint uVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *local_res8;
  
  uVar6 = param_1 >> 8;
  uVar7 = (ulonglong)(uint)param_1 & 0xff;
  uVar5 = 0;
  if ((int)uVar6 < (this->Chunks).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<int,int> *)(*pcVar2)();
    return pTVar4;
  }
  this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)
            ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18);
  iVar8 = param_2 - *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar7 * 4);
  local_res8 = (this_00->AllocatorInstance).Data;
  if (0 < iVar8) {
    iVar9 = this_00->ArrayNum;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar9 + iVar8,Default);
    local_res8 = (this_00->AllocatorInstance).Data;
    _Src = local_res8 +
           ((longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar7 * 4) +
           (longlong)*(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar7 * 4)) * 4;
    memmove(_Src + (longlong)iVar8 * 4,_Src,
            (ulonglong)(local_res8 + ((longlong)iVar9 * 4 - (longlong)_Src)) & 0xfffffffffffffffc);
    uVar5 = (int)uVar7 + 1;
    *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar7 * 4) = param_2;
    if ((int)uVar5 < *(int *)&this_00[0xc1].AllocatorInstance.Data) {
      do {
        piVar1 = (int *)((longlong)&this_00[1].AllocatorInstance.Data + (ulonglong)uVar5 * 4);
        *piVar1 = *piVar1 + iVar8;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < *(int *)&this_00[0xc1].AllocatorInstance.Data);
    }
  }
  if (param_4) {
    iVar8 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar7 * 4);
    if (iVar8 < param_2) {
      if (iVar8 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar7 * 4)) {
        do {
          uVar6 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar7 * 4) + iVar8;
          iVar9 = this->DefaultValue;
          uVar5 = 0;
          if ((int)uVar6 < this_00->ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar4 = (TArrayView<int,int> *)(*pcVar2)();
            return pTVar4;
          }
          iVar8 = iVar8 + 1;
          *(int *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) = iVar9;
        } while (iVar8 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar7 * 4));
      }
    }
    else {
      iVar9 = param_2;
      if (param_2 < iVar8) {
        do {
          uVar6 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar7 * 4) + iVar9;
          iVar8 = this->DefaultValue;
          uVar5 = 0;
          if ((int)uVar6 < this_00->ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar4 = (TArrayView<int,int> *)(*pcVar2)();
            return pTVar4;
          }
          iVar9 = iVar9 + 1;
          *(int *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) = iVar8;
        } while (iVar9 < *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar7 * 4));
      }
    }
  }
  if (param_3) {
    *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar7 * 4) = param_2;
  }
  iVar8 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar7 * 4);
  __return_storage_ptr__->DataPtr =
       (int *)(local_res8 +
              (longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar7 * 4) * 4);
  __return_storage_ptr__->ArrayNum = iVar8;
  if ((iVar8 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<int,int> *)(*pcVar2)();
    return pTVar4;
  }
  return __return_storage_ptr__;
}

// SetElementSize @ 14368ea00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayView<float,int> * __thiscall
TAttributeArrayContainer<float>::SetElementSize
          (TAttributeArrayContainer<float> *this,TArrayView<float,int> *__return_storage_ptr__,
          int param_1,int param_2,bool param_3,bool param_4)

{
  FScriptContainerElement *_Src;
  int *piVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<float,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  ulonglong uVar10;
  FScriptContainerElement *local_res8;
  
  uVar7 = param_1 >> 8;
  uVar10 = (ulonglong)(byte)param_1;
  uVar6 = 0;
  if ((int)uVar7 < (this->Chunks).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<float,int> *)(*pcVar3)();
    return pTVar5;
  }
  this_00 = (TArray<float,TSizedDefaultAllocator<32>_> *)
            ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc18);
  iVar8 = param_2 - *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar10 * 4);
  local_res8 = (this_00->AllocatorInstance).Data;
  if (0 < iVar8) {
    iVar9 = this_00->ArrayNum;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar9 + iVar8,Default);
    local_res8 = (this_00->AllocatorInstance).Data;
    _Src = local_res8 +
           ((longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar10 * 4) +
           (longlong)*(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar10 * 4)) * 4;
    memmove(_Src + (longlong)iVar8 * 4,_Src,
            (ulonglong)(local_res8 + ((longlong)iVar9 * 4 - (longlong)_Src)) & 0xfffffffffffffffc);
    uVar6 = (param_1 & 0xffU) + 1;
    *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar10 * 4) = param_2;
    if ((int)uVar6 < *(int *)&this_00[0xc1].AllocatorInstance.Data) {
      do {
        piVar1 = (int *)((longlong)&this_00[1].AllocatorInstance.Data + (ulonglong)uVar6 * 4);
        *piVar1 = *piVar1 + iVar8;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)&this_00[0xc1].AllocatorInstance.Data);
    }
  }
  if (param_4) {
    iVar8 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar10 * 4);
    if (iVar8 < param_2) {
      if (iVar8 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar10 * 4)) {
        do {
          uVar7 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar10 * 4) + iVar8;
          fVar2 = this->DefaultValue;
          uVar6 = 0;
          if ((int)uVar7 < this_00->ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TArrayView<float,int> *)(*pcVar3)();
            return pTVar5;
          }
          iVar8 = iVar8 + 1;
          *(float *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 4) = fVar2;
        } while (iVar8 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar10 * 4));
      }
    }
    else {
      iVar9 = param_2;
      if (param_2 < iVar8) {
        do {
          uVar7 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar10 * 4) + iVar9;
          fVar2 = this->DefaultValue;
          uVar6 = 0;
          if ((int)uVar7 < this_00->ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TArrayView<float,int> *)(*pcVar3)();
            return pTVar5;
          }
          iVar9 = iVar9 + 1;
          *(float *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 4) = fVar2;
        } while (iVar9 < *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar10 * 4));
      }
    }
  }
  if (param_3) {
    *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar10 * 4) = param_2;
  }
  iVar8 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar10 * 4);
  __return_storage_ptr__->DataPtr =
       (float *)(local_res8 +
                (longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar10 * 4) * 4);
  __return_storage_ptr__->ArrayNum = iVar8;
  if ((iVar8 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<float,int> *)(*pcVar3)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// SetElementSize @ 14368ecc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayView<UE::Math::TTransform<double>,int> * __thiscall
TAttributeArrayContainer<UE::Math::TTransform<double>_>::SetElementSize
          (TAttributeArrayContainer<UE::Math::TTransform<double>_> *this,
          TArrayView<UE::Math::TTransform<double>,int> *__return_storage_ptr__,int param_1,
          int param_2,bool param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  TArrayView<UE::Math::TTransform<double>,int> *pTVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this_00;
  int iVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  FScriptContainerElement *local_res8;
  
  uVar22 = param_1 >> 8;
  uVar26 = (ulonglong)(byte)param_1;
  uVar20 = 0;
  if ((int)uVar22 < (this->Chunks).ArrayNum) {
    uVar20 = ~uVar22 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TArrayView<UE::Math::TTransform<double>,int> *)(*pcVar3)();
    return pTVar19;
  }
  this_00 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
            ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar22 * 0xc18);
  iVar23 = param_2 - *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar26 * 4);
  local_res8 = (this_00->AllocatorInstance).Data;
  if (0 < iVar23) {
    iVar24 = this_00->ArrayNum;
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
              (this_00,iVar24 + iVar23,Default);
    local_res8 = (this_00->AllocatorInstance).Data;
    pFVar25 = local_res8 +
              ((longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar26 * 4) +
              (longlong)*(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar26 * 4)) *
              0x60;
    memmove(pFVar25 + (longlong)iVar23 * 0x60,pFVar25,
            ((longlong)(local_res8 + ((longlong)iVar24 * 0x60 - (longlong)pFVar25)) / 0x60) * 0x60);
    uVar20 = (param_1 & 0xffU) + 1;
    *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar26 * 4) = param_2;
    if ((int)uVar20 < *(int *)&this_00[0xc1].AllocatorInstance.Data) {
      do {
        piVar1 = (int *)((longlong)&this_00[1].AllocatorInstance.Data + (ulonglong)uVar20 * 4);
        *piVar1 = *piVar1 + iVar23;
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < *(int *)&this_00[0xc1].AllocatorInstance.Data);
    }
  }
  if (param_4) {
    iVar23 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar26 * 4);
    if (iVar23 < param_2) {
      if (iVar23 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar26 * 4)) {
        do {
          dVar8 = (this->DefaultValue).Rotation.ZW.m128d_f64[0];
          dVar9 = (this->DefaultValue).Rotation.ZW.m128d_f64[1];
          dVar10 = (this->DefaultValue).Translation.XY.m128d_f64[0];
          dVar11 = (this->DefaultValue).Translation.XY.m128d_f64[1];
          uVar22 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar26 * 4) + iVar23;
          uVar4 = *(undefined4 *)(this->DefaultValue).Rotation.XY.m128d_f64;
          uVar5 = *(undefined4 *)((longlong)(this->DefaultValue).Rotation.XY.m128d_f64 + 4);
          uVar6 = *(undefined4 *)((this->DefaultValue).Rotation.XY.m128d_f64 + 1);
          uVar7 = *(undefined4 *)((longlong)(this->DefaultValue).Rotation.XY.m128d_f64 + 0xc);
          dVar12 = (this->DefaultValue).Translation.ZW.m128d_f64[0];
          dVar13 = (this->DefaultValue).Translation.ZW.m128d_f64[1];
          uVar20 = 0;
          if ((int)uVar22 < this_00->ArrayNum) {
            uVar20 = ~uVar22 >> 0x1f;
          }
          dVar14 = (this->DefaultValue).Scale3D.XY.m128d_f64[0];
          dVar15 = (this->DefaultValue).Scale3D.XY.m128d_f64[1];
          dVar16 = (this->DefaultValue).Scale3D.ZW.m128d_f64[0];
          dVar17 = (this->DefaultValue).Scale3D.ZW.m128d_f64[1];
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar3 = (code *)swi(3);
            pTVar19 = (TArrayView<UE::Math::TTransform<double>,int> *)(*pcVar3)();
            return pTVar19;
          }
          iVar23 = iVar23 + 1;
          pFVar2 = (this_00->AllocatorInstance).Data;
          lVar21 = (longlong)(int)uVar22 * 0x60;
          pFVar25 = pFVar2 + lVar21;
          *(undefined4 *)pFVar25 = uVar4;
          *(undefined4 *)(pFVar25 + 4) = uVar5;
          *(undefined4 *)(pFVar25 + 8) = uVar6;
          *(undefined4 *)(pFVar25 + 0xc) = uVar7;
          *(double *)(pFVar2 + lVar21 + 0x10) = dVar8;
          *(double *)(pFVar2 + lVar21 + 0x10 + 8) = dVar9;
          *(double *)(pFVar2 + lVar21 + 0x20) = dVar10;
          *(double *)(pFVar2 + lVar21 + 0x20 + 8) = dVar11;
          *(double *)(pFVar2 + lVar21 + 0x30) = dVar12;
          *(double *)(pFVar2 + lVar21 + 0x30 + 8) = dVar13;
          *(double *)(pFVar2 + lVar21 + 0x40) = dVar14;
          *(double *)(pFVar2 + lVar21 + 0x40 + 8) = dVar15;
          *(double *)(pFVar2 + lVar21 + 0x50) = dVar16;
          *(double *)(pFVar2 + lVar21 + 0x50 + 8) = dVar17;
        } while (iVar23 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar26 * 4));
      }
    }
    else {
      iVar24 = param_2;
      if (param_2 < iVar23) {
        do {
          dVar8 = (this->DefaultValue).Rotation.ZW.m128d_f64[0];
          dVar9 = (this->DefaultValue).Rotation.ZW.m128d_f64[1];
          dVar10 = (this->DefaultValue).Translation.XY.m128d_f64[0];
          dVar11 = (this->DefaultValue).Translation.XY.m128d_f64[1];
          uVar22 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar26 * 4) + iVar24;
          uVar4 = *(undefined4 *)(this->DefaultValue).Rotation.XY.m128d_f64;
          uVar5 = *(undefined4 *)((longlong)(this->DefaultValue).Rotation.XY.m128d_f64 + 4);
          uVar6 = *(undefined4 *)((this->DefaultValue).Rotation.XY.m128d_f64 + 1);
          uVar7 = *(undefined4 *)((longlong)(this->DefaultValue).Rotation.XY.m128d_f64 + 0xc);
          dVar12 = (this->DefaultValue).Translation.ZW.m128d_f64[0];
          dVar13 = (this->DefaultValue).Translation.ZW.m128d_f64[1];
          uVar20 = 0;
          if ((int)uVar22 < this_00->ArrayNum) {
            uVar20 = ~uVar22 >> 0x1f;
          }
          dVar14 = (this->DefaultValue).Scale3D.XY.m128d_f64[0];
          dVar15 = (this->DefaultValue).Scale3D.XY.m128d_f64[1];
          dVar16 = (this->DefaultValue).Scale3D.ZW.m128d_f64[0];
          dVar17 = (this->DefaultValue).Scale3D.ZW.m128d_f64[1];
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar3 = (code *)swi(3);
            pTVar19 = (TArrayView<UE::Math::TTransform<double>,int> *)(*pcVar3)();
            return pTVar19;
          }
          iVar24 = iVar24 + 1;
          pFVar2 = (this_00->AllocatorInstance).Data;
          lVar21 = (longlong)(int)uVar22 * 0x60;
          pFVar25 = pFVar2 + lVar21;
          *(undefined4 *)pFVar25 = uVar4;
          *(undefined4 *)(pFVar25 + 4) = uVar5;
          *(undefined4 *)(pFVar25 + 8) = uVar6;
          *(undefined4 *)(pFVar25 + 0xc) = uVar7;
          *(double *)(pFVar2 + lVar21 + 0x10) = dVar8;
          *(double *)(pFVar2 + lVar21 + 0x10 + 8) = dVar9;
          *(double *)(pFVar2 + lVar21 + 0x20) = dVar10;
          *(double *)(pFVar2 + lVar21 + 0x20 + 8) = dVar11;
          *(double *)(pFVar2 + lVar21 + 0x30) = dVar12;
          *(double *)(pFVar2 + lVar21 + 0x30 + 8) = dVar13;
          *(double *)(pFVar2 + lVar21 + 0x40) = dVar14;
          *(double *)(pFVar2 + lVar21 + 0x40 + 8) = dVar15;
          *(double *)(pFVar2 + lVar21 + 0x50) = dVar16;
          *(double *)(pFVar2 + lVar21 + 0x50 + 8) = dVar17;
        } while (iVar24 < *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar26 * 4));
      }
    }
  }
  if (param_3) {
    *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar26 * 4) = param_2;
  }
  iVar23 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar26 * 4);
  __return_storage_ptr__->DataPtr =
       (TTransform<double> *)
       (local_res8 +
       (longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar26 * 4) * 0x60);
  __return_storage_ptr__->ArrayNum = iVar23;
  if ((iVar23 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar18)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TArrayView<UE::Math::TTransform<double>,int> *)(*pcVar3)();
    return pTVar19;
  }
  return __return_storage_ptr__;
}

// SetElementSize @ 14368f0f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayView<UE::Math::TVector2<float>,int> * __thiscall
TAttributeArrayContainer<UE::Math::TVector2<float>_>::SetElementSize
          (TAttributeArrayContainer<UE::Math::TVector2<float>_> *this,
          TArrayView<UE::Math::TVector2<float>,int> *__return_storage_ptr__,int param_1,int param_2,
          bool param_3,bool param_4)

{
  FScriptContainerElement *_Src;
  int *piVar1;
  TVector2<float>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::Math::TVector2<float>,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *local_res8;
  
  uVar9 = (ulonglong)(uint)param_1 & 0xff;
  uVar7 = param_1 >> 8;
  uVar6 = 0;
  if ((int)uVar7 < (this->Chunks).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<UE::Math::TVector2<float>,int> *)(*pcVar3)();
    return pTVar5;
  }
  this_00 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
            ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc18);
  iVar10 = param_2 - *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar9 * 4);
  local_res8 = (this_00->AllocatorInstance).Data;
  if (0 < iVar10) {
    iVar8 = this_00->ArrayNum;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
              (this_00,iVar8 + iVar10,Default);
    local_res8 = (this_00->AllocatorInstance).Data;
    _Src = local_res8 +
           ((longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar9 * 4) +
           (longlong)*(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar9 * 4)) * 8;
    memmove(_Src + (longlong)iVar10 * 8,_Src,
            (ulonglong)(local_res8 + ((longlong)iVar8 * 8 - (longlong)_Src)) & 0xfffffffffffffff8);
    uVar6 = (int)uVar9 + 1;
    *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar9 * 4) = param_2;
    if ((int)uVar6 < *(int *)&this_00[0xc1].AllocatorInstance.Data) {
      do {
        piVar1 = (int *)((longlong)&this_00[1].AllocatorInstance.Data + (ulonglong)uVar6 * 4);
        *piVar1 = *piVar1 + iVar10;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)&this_00[0xc1].AllocatorInstance.Data);
    }
  }
  if (param_4) {
    iVar10 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar9 * 4);
    if (iVar10 < param_2) {
      if (iVar10 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar9 * 4)) {
        do {
          uVar7 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar9 * 4) + iVar10;
          TVar2 = (this->DefaultValue).field0_0x0;
          uVar6 = 0;
          if ((int)uVar7 < this_00->ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TArrayView<UE::Math::TVector2<float>,int> *)(*pcVar3)();
            return pTVar5;
          }
          iVar10 = iVar10 + 1;
          *(TVector2<float>_u_0 *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 8) =
               TVar2;
        } while (iVar10 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar9 * 4));
      }
    }
    else {
      iVar8 = param_2;
      if (param_2 < iVar10) {
        do {
          uVar7 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar9 * 4) + iVar8;
          TVar2 = (this->DefaultValue).field0_0x0;
          uVar6 = 0;
          if ((int)uVar7 < this_00->ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TArrayView<UE::Math::TVector2<float>,int> *)(*pcVar3)();
            return pTVar5;
          }
          iVar8 = iVar8 + 1;
          *(TVector2<float>_u_0 *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 8) =
               TVar2;
        } while (iVar8 < *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar9 * 4));
      }
    }
  }
  if (param_3) {
    *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar9 * 4) = param_2;
  }
  iVar10 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar9 * 4);
  __return_storage_ptr__->DataPtr =
       (TVector2<float> *)
       (local_res8 +
       (longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar9 * 4) * 8);
  __return_storage_ptr__->ArrayNum = iVar10;
  if ((iVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<UE::Math::TVector2<float>,int> *)(*pcVar3)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// SetElementSize @ 14368f390

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayView<UE::Math::TVector4<float>,int> * __thiscall
TAttributeArrayContainer<UE::Math::TVector4<float>_>::SetElementSize
          (TAttributeArrayContainer<UE::Math::TVector4<float>_> *this,
          TArrayView<UE::Math::TVector4<float>,int> *__return_storage_ptr__,int param_1,int param_2,
          bool param_3,bool param_4)

{
  int *piVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  TArrayView<UE::Math::TVector4<float>,int> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *this_00;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *local_res8;
  
  uVar11 = param_1 >> 8;
  uVar14 = (ulonglong)(byte)param_1;
  uVar9 = 0;
  if ((int)uVar11 < (this->Chunks).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArrayView<UE::Math::TVector4<float>,int> *)(*pcVar2)();
    return pTVar8;
  }
  this_00 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
            ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xc18);
  iVar12 = param_2 - *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar14 * 4);
  local_res8 = (this_00->AllocatorInstance).Data;
  if (0 < iVar12) {
    iVar13 = this_00->ArrayNum;
    TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
              (this_00,iVar13 + iVar12,Default);
    local_res8 = (this_00->AllocatorInstance).Data;
    pFVar10 = local_res8 +
              ((longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar14 * 4) +
              (longlong)*(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar14 * 4)) *
              0x10;
    memmove(pFVar10 + (longlong)iVar12 * 0x10,pFVar10,
            (ulonglong)(local_res8 + ((longlong)iVar13 * 0x10 - (longlong)pFVar10)) &
            0xfffffffffffffff0);
    uVar9 = (param_1 & 0xffU) + 1;
    *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar14 * 4) = param_2;
    if ((int)uVar9 < *(int *)&this_00[0xc1].AllocatorInstance.Data) {
      do {
        piVar1 = (int *)((longlong)&this_00[1].AllocatorInstance.Data + (ulonglong)uVar9 * 4);
        *piVar1 = *piVar1 + iVar12;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < *(int *)&this_00[0xc1].AllocatorInstance.Data);
    }
  }
  if (param_4) {
    iVar12 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar14 * 4);
    if (iVar12 < param_2) {
      if (iVar12 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar14 * 4)) {
        do {
          uVar11 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar14 * 4) + iVar12;
          fVar3 = (this->DefaultValue).field0_0x0._s_0.X;
          fVar4 = (this->DefaultValue).field0_0x0._s_0.Y;
          fVar5 = (this->DefaultValue).field0_0x0._s_0.Z;
          fVar6 = (this->DefaultValue).field0_0x0._s_0.W;
          uVar9 = 0;
          if ((int)uVar11 < this_00->ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArrayView<UE::Math::TVector4<float>,int> *)(*pcVar2)();
            return pTVar8;
          }
          iVar12 = iVar12 + 1;
          pFVar10 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
          *(float *)pFVar10 = fVar3;
          *(float *)(pFVar10 + 4) = fVar4;
          *(float *)(pFVar10 + 8) = fVar5;
          *(float *)(pFVar10 + 0xc) = fVar6;
        } while (iVar12 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar14 * 4));
      }
    }
    else {
      iVar13 = param_2;
      if (param_2 < iVar12) {
        do {
          uVar11 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar14 * 4) + iVar13;
          fVar3 = (this->DefaultValue).field0_0x0._s_0.X;
          fVar4 = (this->DefaultValue).field0_0x0._s_0.Y;
          fVar5 = (this->DefaultValue).field0_0x0._s_0.Z;
          fVar6 = (this->DefaultValue).field0_0x0._s_0.W;
          uVar9 = 0;
          if ((int)uVar11 < this_00->ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArrayView<UE::Math::TVector4<float>,int> *)(*pcVar2)();
            return pTVar8;
          }
          iVar13 = iVar13 + 1;
          pFVar10 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
          *(float *)pFVar10 = fVar3;
          *(float *)(pFVar10 + 4) = fVar4;
          *(float *)(pFVar10 + 8) = fVar5;
          *(float *)(pFVar10 + 0xc) = fVar6;
        } while (iVar13 < *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar14 * 4));
      }
    }
  }
  if (param_3) {
    *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar14 * 4) = param_2;
  }
  __return_storage_ptr__->DataPtr =
       (TVector4<float> *)
       (local_res8 +
       (longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar14 * 4) * 0x10);
  iVar12 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar14 * 4);
  __return_storage_ptr__->ArrayNum = iVar12;
  if ((iVar12 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArrayView<UE::Math::TVector4<float>,int> *)(*pcVar2)();
    return pTVar8;
  }
  return __return_storage_ptr__;
}

// SetElementSize @ 14368f670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayView<UE::Math::TVector<float>,int> * __thiscall
TAttributeArrayContainer<UE::Math::TVector<float>_>::SetElementSize
          (TAttributeArrayContainer<UE::Math::TVector<float>_> *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__,int param_1,int param_2,
          bool param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  undefined8 uVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  TArrayView<UE::Math::TVector<float>,int> *pTVar7;
  uint uVar8;
  uint uVar9;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *this_00;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  FScriptContainerElement *local_res10;
  
  uVar9 = param_1 >> 8;
  uVar12 = (ulonglong)(byte)param_1;
  uVar8 = 0;
  if ((int)uVar9 < (this->Chunks).ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
    return pTVar7;
  }
  this_00 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
            ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar9 * 0xc18);
  iVar10 = param_2 - *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar12 * 4);
  local_res10 = (this_00->AllocatorInstance).Data;
  if (0 < iVar10) {
    iVar11 = this_00->ArrayNum;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (this_00,iVar11 + iVar10,Default);
    local_res10 = (this_00->AllocatorInstance).Data;
    pFVar1 = local_res10 +
             ((longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar12 * 4) +
             (longlong)*(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar12 * 4)) * 0xc
    ;
    memmove(pFVar1 + (longlong)iVar10 * 0xc,pFVar1,
            ((longlong)(local_res10 + ((longlong)iVar11 * 0xc - (longlong)pFVar1)) / 0xc) * 0xc);
    uVar8 = (param_1 & 0xffU) + 1;
    *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar12 * 4) = param_2;
    if ((int)uVar8 < *(int *)&this_00[0xc1].AllocatorInstance.Data) {
      do {
        piVar2 = (int *)((longlong)&this_00[1].AllocatorInstance.Data + (ulonglong)uVar8 * 4);
        *piVar2 = *piVar2 + iVar10;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < *(int *)&this_00[0xc1].AllocatorInstance.Data);
    }
  }
  if (param_4) {
    iVar10 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4);
    if (iVar10 < param_2) {
      if (iVar10 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar12 * 4)) {
        do {
          uVar9 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar12 * 4) + iVar10;
          uVar3 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
          fVar4 = (this->DefaultValue).field0_0x0._s_0.Z;
          uVar8 = 0;
          if ((int)uVar9 < this_00->ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar7 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
            return pTVar7;
          }
          iVar10 = iVar10 + 1;
          pFVar1 = (this_00->AllocatorInstance).Data;
          *(undefined8 *)(pFVar1 + (longlong)(int)uVar9 * 0xc) = uVar3;
          *(float *)(pFVar1 + (longlong)(int)uVar9 * 0xc + 8) = fVar4;
        } while (iVar10 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar12 * 4));
      }
    }
    else {
      iVar11 = param_2;
      if (param_2 < iVar10) {
        do {
          uVar9 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar12 * 4) + iVar11;
          uVar3 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
          fVar4 = (this->DefaultValue).field0_0x0._s_0.Z;
          uVar8 = 0;
          if ((int)uVar9 < this_00->ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar7 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
            return pTVar7;
          }
          iVar11 = iVar11 + 1;
          pFVar1 = (this_00->AllocatorInstance).Data;
          *(undefined8 *)(pFVar1 + (longlong)(int)uVar9 * 0xc) = uVar3;
          *(float *)(pFVar1 + (longlong)(int)uVar9 * 0xc + 8) = fVar4;
        } while (iVar11 < *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4));
      }
    }
  }
  if (param_3) {
    *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4) = param_2;
  }
  __return_storage_ptr__->DataPtr =
       (TVector<float> *)
       (local_res10 +
       (longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar12 * 4) * 0xc);
  iVar10 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4);
  __return_storage_ptr__->ArrayNum = iVar10;
  if ((iVar10 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
    return pTVar7;
  }
  return __return_storage_ptr__;
}

// SetElementSize @ 14368f9b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayView<FName,int> * __thiscall
TAttributeArrayContainer<FName>::SetElementSize
          (TAttributeArrayContainer<FName> *this,TArrayView<FName,int> *__return_storage_ptr__,
          int param_1,int param_2,bool param_3,bool param_4)

{
  FScriptContainerElement *_Src;
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FName,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *local_res8;
  
  uVar9 = (ulonglong)(uint)param_1 & 0xff;
  uVar7 = param_1 >> 8;
  uVar6 = 0;
  if ((int)uVar7 < (this->Chunks).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<FName,int> *)(*pcVar3)();
    return pTVar5;
  }
  this_00 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
            ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc18);
  iVar10 = param_2 - *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar9 * 4);
  local_res8 = (this_00->AllocatorInstance).Data;
  if (0 < iVar10) {
    iVar8 = this_00->ArrayNum;
    TArray<FName,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar8 + iVar10,Default);
    local_res8 = (this_00->AllocatorInstance).Data;
    _Src = local_res8 +
           ((longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar9 * 4) +
           (longlong)*(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar9 * 4)) * 8;
    memmove(_Src + (longlong)iVar10 * 8,_Src,
            (ulonglong)(local_res8 + ((longlong)iVar8 * 8 - (longlong)_Src)) & 0xfffffffffffffff8);
    uVar6 = (int)uVar9 + 1;
    *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar9 * 4) = param_2;
    if ((int)uVar6 < *(int *)&this_00[0xc1].AllocatorInstance.Data) {
      do {
        piVar1 = (int *)((longlong)&this_00[1].AllocatorInstance.Data + (ulonglong)uVar6 * 4);
        *piVar1 = *piVar1 + iVar10;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)&this_00[0xc1].AllocatorInstance.Data);
    }
  }
  if (param_4) {
    iVar10 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar9 * 4);
    if (iVar10 < param_2) {
      if (iVar10 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar9 * 4)) {
        do {
          uVar7 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar9 * 4) + iVar10;
          FVar2 = this->DefaultValue;
          uVar6 = 0;
          if ((int)uVar7 < this_00->ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TArrayView<FName,int> *)(*pcVar3)();
            return pTVar5;
          }
          iVar10 = iVar10 + 1;
          *(FName *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 8) = FVar2;
        } while (iVar10 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar9 * 4));
      }
    }
    else {
      iVar8 = param_2;
      if (param_2 < iVar10) {
        do {
          uVar7 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar9 * 4) + iVar8;
          FVar2 = this->DefaultValue;
          uVar6 = 0;
          if ((int)uVar7 < this_00->ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TArrayView<FName,int> *)(*pcVar3)();
            return pTVar5;
          }
          iVar8 = iVar8 + 1;
          *(FName *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 8) = FVar2;
        } while (iVar8 < *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar9 * 4));
      }
    }
  }
  if (param_3) {
    *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar9 * 4) = param_2;
  }
  iVar10 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar9 * 4);
  __return_storage_ptr__->DataPtr =
       (FName *)(local_res8 +
                (longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar9 * 4) * 8);
  __return_storage_ptr__->ArrayNum = iVar10;
  if ((iVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<FName,int> *)(*pcVar3)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// SetElementSize @ 14368fc50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayView<bool,int> * __thiscall
TAttributeArrayContainer<bool>::SetElementSize
          (TAttributeArrayContainer<bool> *this,TArrayView<bool,int> *__return_storage_ptr__,
          int param_1,int param_2,bool param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<bool,int> *pTVar5;
  uint uVar6;
  FScriptContainerElement *_Src;
  uint uVar7;
  TArray<bool,TSizedDefaultAllocator<32>_> *this_00;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *local_res8;
  
  uVar7 = param_1 >> 8;
  uVar8 = (ulonglong)(uint)param_1 & 0xff;
  uVar6 = 0;
  if ((int)uVar7 < (this->Chunks).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<bool,int> *)(*pcVar3)();
    return pTVar5;
  }
  this_00 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
            ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc18);
  iVar9 = param_2 - *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar8 * 4);
  local_res8 = (this_00->AllocatorInstance).Data;
  if (0 < iVar9) {
    iVar10 = this_00->ArrayNum;
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar10 + iVar9,Default);
    local_res8 = (this_00->AllocatorInstance).Data;
    _Src = local_res8 +
           (longlong)*(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar8 * 4) +
           (longlong)*(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar8 * 4);
    memmove(_Src + iVar9,_Src,(size_t)(local_res8 + ((longlong)iVar10 - (longlong)_Src)));
    uVar6 = (int)uVar8 + 1;
    *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar8 * 4) = param_2;
    if ((int)uVar6 < *(int *)&this_00[0xc1].AllocatorInstance.Data) {
      do {
        piVar1 = (int *)((longlong)&this_00[1].AllocatorInstance.Data + (ulonglong)uVar6 * 4);
        *piVar1 = *piVar1 + iVar9;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)&this_00[0xc1].AllocatorInstance.Data);
    }
  }
  if (param_4) {
    iVar9 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar8 * 4);
    if (iVar9 < param_2) {
      if (iVar9 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar8 * 4)) {
        do {
          uVar7 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar8 * 4) + iVar9;
          FVar2 = (FScriptContainerElement)this->DefaultValue;
          uVar6 = 0;
          if ((int)uVar7 < this_00->ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TArrayView<bool,int> *)(*pcVar3)();
            return pTVar5;
          }
          iVar9 = iVar9 + 1;
          (this_00->AllocatorInstance).Data[(int)uVar7] = FVar2;
        } while (iVar9 < *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar8 * 4));
      }
    }
    else {
      iVar10 = param_2;
      if (param_2 < iVar9) {
        do {
          uVar7 = *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar8 * 4) + iVar10;
          FVar2 = (FScriptContainerElement)this->DefaultValue;
          uVar6 = 0;
          if ((int)uVar7 < this_00->ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TArrayView<bool,int> *)(*pcVar3)();
            return pTVar5;
          }
          iVar10 = iVar10 + 1;
          (this_00->AllocatorInstance).Data[(int)uVar7] = FVar2;
        } while (iVar10 < *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar8 * 4));
      }
    }
  }
  if (param_3) {
    *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar8 * 4) = param_2;
  }
  __return_storage_ptr__->DataPtr =
       (bool *)(local_res8 + *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar8 * 4));
  iVar9 = *(int *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar8 * 4);
  __return_storage_ptr__->ArrayNum = iVar9;
  if ((iVar9 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<bool,int> *)(*pcVar3)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// SetNum @ 143690eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<int>::SetNum(TAttributeArrayContainer<int> *this,int param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar9 = (this->Chunks).ArrayNum;
  uVar13 = param_1 + 0xff;
  iVar8 = (int)uVar13 >> 8;
  TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Chunks,iVar8,Default);
  uVar10 = this->NumElements;
  if (param_1 < (int)uVar10) {
    if (0 < iVar8) {
      iVar9 = (this->Chunks).ArrayNum;
      uVar6 = iVar9 - 1;
      uVar10 = 0;
      if ((int)uVar6 < iVar9) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (uVar13 & 0xff) + 1;
      this->NumElements = param_1;
      return;
    }
  }
  else if ((int)uVar10 < param_1) {
    uVar13 = (uVar13 & 0xff) + 1;
    uVar12 = (ulonglong)(uVar10 & 0xff);
    if ((char)uVar10 != '\0') {
      uVar6 = iVar9 - 1;
      uVar11 = 0x100;
      if (iVar8 == iVar9) {
        uVar11 = uVar13;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Chunks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar4 = (ulonglong)((uVar10 & 0xff) - 1);
      this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18);
      iVar9 = *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar4 * 4) +
              *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar4 * 4);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar9,No);
      if (uVar12 < uVar11) {
        lVar7 = uVar11 - uVar12;
        puVar5 = (undefined4 *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4);
        do {
          puVar5[-0x100] = iVar9;
          *puVar5 = 0;
          puVar5[0x100] = 0;
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *(uint *)&this_00[0xc1].AllocatorInstance.Data = uVar11;
    }
    iVar9 = (this->Chunks).ArrayNum;
    uVar6 = iVar9 - 1;
    uVar10 = 0;
    if ((int)uVar6 < iVar9) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 0xc18 + -8
             ) = uVar13;
  }
  this->NumElements = param_1;
  return;
}

// SetNum @ 1436910f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<float>::SetNum
          (TAttributeArrayContainer<float> *this,int param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar9 = (this->Chunks).ArrayNum;
  uVar13 = param_1 + 0xff;
  iVar8 = (int)uVar13 >> 8;
  TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Chunks,iVar8,Default);
  uVar10 = this->NumElements;
  if (param_1 < (int)uVar10) {
    if (0 < iVar8) {
      iVar9 = (this->Chunks).ArrayNum;
      uVar6 = iVar9 - 1;
      uVar10 = 0;
      if ((int)uVar6 < iVar9) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (uVar13 & 0xff) + 1;
      this->NumElements = param_1;
      return;
    }
  }
  else if ((int)uVar10 < param_1) {
    uVar13 = (uVar13 & 0xff) + 1;
    uVar12 = (ulonglong)(uVar10 & 0xff);
    if ((char)uVar10 != '\0') {
      uVar6 = iVar9 - 1;
      uVar11 = 0x100;
      if (iVar8 == iVar9) {
        uVar11 = uVar13;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Chunks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar4 = (ulonglong)((uVar10 & 0xff) - 1);
      this_00 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18);
      iVar9 = *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar4 * 4) +
              *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar4 * 4);
      TArray<float,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar9,No);
      if (uVar12 < uVar11) {
        lVar7 = uVar11 - uVar12;
        puVar5 = (undefined4 *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4);
        do {
          puVar5[-0x100] = iVar9;
          *puVar5 = 0;
          puVar5[0x100] = 0;
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *(uint *)&this_00[0xc1].AllocatorInstance.Data = uVar11;
    }
    iVar9 = (this->Chunks).ArrayNum;
    uVar6 = iVar9 - 1;
    uVar10 = 0;
    if ((int)uVar6 < iVar9) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 0xc18 + -8
             ) = uVar13;
  }
  this->NumElements = param_1;
  return;
}

// SetNum @ 143691330

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<UE::Math::TTransform<double>_>::SetNum
          (TAttributeArrayContainer<UE::Math::TTransform<double>_> *this,int param_1,
          TTransform<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this_00;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar9 = (this->Chunks).ArrayNum;
  uVar13 = param_1 + 0xff;
  iVar8 = (int)uVar13 >> 8;
  TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::SetNum(&this->Chunks,iVar8,Default);
  uVar10 = this->NumElements;
  if (param_1 < (int)uVar10) {
    if (0 < iVar8) {
      iVar9 = (this->Chunks).ArrayNum;
      uVar6 = iVar9 - 1;
      uVar10 = 0;
      if ((int)uVar6 < iVar9) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (uVar13 & 0xff) + 1;
      this->NumElements = param_1;
      return;
    }
  }
  else if ((int)uVar10 < param_1) {
    uVar13 = (uVar13 & 0xff) + 1;
    uVar12 = (ulonglong)(uVar10 & 0xff);
    if ((char)uVar10 != '\0') {
      uVar6 = iVar9 - 1;
      uVar11 = 0x100;
      if (iVar8 == iVar9) {
        uVar11 = uVar13;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Chunks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar4 = (ulonglong)((uVar10 & 0xff) - 1);
      this_00 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18);
      iVar9 = *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar4 * 4) +
              *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar4 * 4);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar9,No);
      if (uVar12 < uVar11) {
        lVar7 = uVar11 - uVar12;
        puVar5 = (undefined4 *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4);
        do {
          puVar5[-0x100] = iVar9;
          *puVar5 = 0;
          puVar5[0x100] = 0;
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *(uint *)&this_00[0xc1].AllocatorInstance.Data = uVar11;
    }
    iVar9 = (this->Chunks).ArrayNum;
    uVar6 = iVar9 - 1;
    uVar10 = 0;
    if ((int)uVar6 < iVar9) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 0xc18 + -8
             ) = uVar13;
  }
  this->NumElements = param_1;
  return;
}

// SetNum @ 143691570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<UE::Math::TVector2<float>_>::SetNum
          (TAttributeArrayContainer<UE::Math::TVector2<float>_> *this,int param_1,
          TVector2<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *this_00;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar9 = (this->Chunks).ArrayNum;
  uVar13 = param_1 + 0xff;
  iVar8 = (int)uVar13 >> 8;
  TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
  SetNum(&this->Chunks,iVar8,Default);
  uVar10 = this->NumElements;
  if (param_1 < (int)uVar10) {
    if (0 < iVar8) {
      iVar9 = (this->Chunks).ArrayNum;
      uVar6 = iVar9 - 1;
      uVar10 = 0;
      if ((int)uVar6 < iVar9) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (uVar13 & 0xff) + 1;
      this->NumElements = param_1;
      return;
    }
  }
  else if ((int)uVar10 < param_1) {
    uVar13 = (uVar13 & 0xff) + 1;
    uVar12 = (ulonglong)(uVar10 & 0xff);
    if ((char)uVar10 != '\0') {
      uVar6 = iVar9 - 1;
      uVar11 = 0x100;
      if (iVar8 == iVar9) {
        uVar11 = uVar13;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Chunks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar4 = (ulonglong)((uVar10 & 0xff) - 1);
      this_00 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
                ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18);
      iVar9 = *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar4 * 4) +
              *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar4 * 4);
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar9,No);
      if (uVar12 < uVar11) {
        lVar7 = uVar11 - uVar12;
        puVar5 = (undefined4 *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4);
        do {
          puVar5[-0x100] = iVar9;
          *puVar5 = 0;
          puVar5[0x100] = 0;
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *(uint *)&this_00[0xc1].AllocatorInstance.Data = uVar11;
    }
    iVar9 = (this->Chunks).ArrayNum;
    uVar6 = iVar9 - 1;
    uVar10 = 0;
    if ((int)uVar6 < iVar9) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 0xc18 + -8
             ) = uVar13;
  }
  this->NumElements = param_1;
  return;
}

// SetNum @ 1436917b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<UE::Math::TVector4<float>_>::SetNum
          (TAttributeArrayContainer<UE::Math::TVector4<float>_> *this,int param_1,
          TVector4<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *this_00;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar9 = (this->Chunks).ArrayNum;
  uVar13 = param_1 + 0xff;
  iVar8 = (int)uVar13 >> 8;
  TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
  SetNum(&this->Chunks,iVar8,Default);
  uVar10 = this->NumElements;
  if (param_1 < (int)uVar10) {
    if (0 < iVar8) {
      iVar9 = (this->Chunks).ArrayNum;
      uVar6 = iVar9 - 1;
      uVar10 = 0;
      if ((int)uVar6 < iVar9) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (uVar13 & 0xff) + 1;
      this->NumElements = param_1;
      return;
    }
  }
  else if ((int)uVar10 < param_1) {
    uVar13 = (uVar13 & 0xff) + 1;
    uVar12 = (ulonglong)(uVar10 & 0xff);
    if ((char)uVar10 != '\0') {
      uVar6 = iVar9 - 1;
      uVar11 = 0x100;
      if (iVar8 == iVar9) {
        uVar11 = uVar13;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Chunks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar4 = (ulonglong)((uVar10 & 0xff) - 1);
      this_00 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18);
      iVar9 = *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar4 * 4) +
              *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar4 * 4);
      TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar9,No);
      if (uVar12 < uVar11) {
        lVar7 = uVar11 - uVar12;
        puVar5 = (undefined4 *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4);
        do {
          puVar5[-0x100] = iVar9;
          *puVar5 = 0;
          puVar5[0x100] = 0;
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *(uint *)&this_00[0xc1].AllocatorInstance.Data = uVar11;
    }
    iVar9 = (this->Chunks).ArrayNum;
    uVar6 = iVar9 - 1;
    uVar10 = 0;
    if ((int)uVar6 < iVar9) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 0xc18 + -8
             ) = uVar13;
  }
  this->NumElements = param_1;
  return;
}

// SetNum @ 1436919f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<UE::Math::TVector<float>_>::SetNum
          (TAttributeArrayContainer<UE::Math::TVector<float>_> *this,int param_1,
          TVector<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *this_00;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar9 = (this->Chunks).ArrayNum;
  uVar13 = param_1 + 0xff;
  iVar8 = (int)uVar13 >> 8;
  TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
  SetNum(&this->Chunks,iVar8,Default);
  uVar10 = this->NumElements;
  if (param_1 < (int)uVar10) {
    if (0 < iVar8) {
      iVar9 = (this->Chunks).ArrayNum;
      uVar6 = iVar9 - 1;
      uVar10 = 0;
      if ((int)uVar6 < iVar9) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (uVar13 & 0xff) + 1;
      this->NumElements = param_1;
      return;
    }
  }
  else if ((int)uVar10 < param_1) {
    uVar13 = (uVar13 & 0xff) + 1;
    uVar12 = (ulonglong)(uVar10 & 0xff);
    if ((char)uVar10 != '\0') {
      uVar6 = iVar9 - 1;
      uVar11 = 0x100;
      if (iVar8 == iVar9) {
        uVar11 = uVar13;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Chunks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar4 = (ulonglong)((uVar10 & 0xff) - 1);
      this_00 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18);
      iVar9 = *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar4 * 4) +
              *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar4 * 4);
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar9,No);
      if (uVar12 < uVar11) {
        lVar7 = uVar11 - uVar12;
        puVar5 = (undefined4 *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4);
        do {
          puVar5[-0x100] = iVar9;
          *puVar5 = 0;
          puVar5[0x100] = 0;
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *(uint *)&this_00[0xc1].AllocatorInstance.Data = uVar11;
    }
    iVar9 = (this->Chunks).ArrayNum;
    uVar6 = iVar9 - 1;
    uVar10 = 0;
    if ((int)uVar6 < iVar9) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 0xc18 + -8
             ) = uVar13;
  }
  this->NumElements = param_1;
  return;
}

// SetNum @ 143691c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<FName>::SetNum
          (TAttributeArrayContainer<FName> *this,int param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar9 = (this->Chunks).ArrayNum;
  uVar13 = param_1 + 0xff;
  iVar8 = (int)uVar13 >> 8;
  TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Chunks,iVar8,Default);
  uVar10 = this->NumElements;
  if (param_1 < (int)uVar10) {
    if (0 < iVar8) {
      iVar9 = (this->Chunks).ArrayNum;
      uVar6 = iVar9 - 1;
      uVar10 = 0;
      if ((int)uVar6 < iVar9) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (uVar13 & 0xff) + 1;
      this->NumElements = param_1;
      return;
    }
  }
  else if ((int)uVar10 < param_1) {
    uVar13 = (uVar13 & 0xff) + 1;
    uVar12 = (ulonglong)(uVar10 & 0xff);
    if ((char)uVar10 != '\0') {
      uVar6 = iVar9 - 1;
      uVar11 = 0x100;
      if (iVar8 == iVar9) {
        uVar11 = uVar13;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Chunks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar4 = (ulonglong)((uVar10 & 0xff) - 1);
      this_00 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
                ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18);
      iVar9 = *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar4 * 4) +
              *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar4 * 4);
      TArray<FName,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar9,No);
      if (uVar12 < uVar11) {
        lVar7 = uVar11 - uVar12;
        puVar5 = (undefined4 *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4);
        do {
          puVar5[-0x100] = iVar9;
          *puVar5 = 0;
          puVar5[0x100] = 0;
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *(uint *)&this_00[0xc1].AllocatorInstance.Data = uVar11;
    }
    iVar9 = (this->Chunks).ArrayNum;
    uVar6 = iVar9 - 1;
    uVar10 = 0;
    if ((int)uVar6 < iVar9) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 0xc18 + -8
             ) = uVar13;
  }
  this->NumElements = param_1;
  return;
}

// SetNum @ 143691e70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TAttributeArrayContainer<bool>::SetNum
          (TAttributeArrayContainer<bool> *this,int param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<bool,TSizedDefaultAllocator<32>_> *this_00;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar9 = (this->Chunks).ArrayNum;
  uVar13 = param_1 + 0xff;
  iVar8 = (int)uVar13 >> 8;
  TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Chunks,iVar8,Default);
  uVar10 = this->NumElements;
  if (param_1 < (int)uVar10) {
    if (0 < iVar8) {
      iVar9 = (this->Chunks).ArrayNum;
      uVar6 = iVar9 - 1;
      uVar10 = 0;
      if ((int)uVar6 < iVar9) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(uint *)((this->Chunks).AllocatorInstance.Data +
               (longlong)(this->Chunks).ArrayNum * 0xc18 + -8) = (uVar13 & 0xff) + 1;
      this->NumElements = param_1;
      return;
    }
  }
  else if ((int)uVar10 < param_1) {
    uVar13 = (uVar13 & 0xff) + 1;
    uVar12 = (ulonglong)(uVar10 & 0xff);
    if ((char)uVar10 != '\0') {
      uVar6 = iVar9 - 1;
      uVar11 = 0x100;
      if (iVar8 == iVar9) {
        uVar11 = uVar13;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Chunks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar4 = (ulonglong)((uVar10 & 0xff) - 1);
      this_00 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
                ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18);
      iVar9 = *(int *)((longlong)&this_00[0x81].AllocatorInstance.Data + uVar4 * 4) +
              *(int *)((longlong)&this_00[1].AllocatorInstance.Data + uVar4 * 4);
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar9,No);
      if (uVar12 < uVar11) {
        lVar7 = uVar11 - uVar12;
        puVar5 = (undefined4 *)((longlong)&this_00[0x41].AllocatorInstance.Data + uVar12 * 4);
        do {
          puVar5[-0x100] = iVar9;
          *puVar5 = 0;
          puVar5[0x100] = 0;
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *(uint *)&this_00[0xc1].AllocatorInstance.Data = uVar11;
    }
    iVar9 = (this->Chunks).ArrayNum;
    uVar6 = iVar9 - 1;
    uVar10 = 0;
    if ((int)uVar6 < iVar9) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)((this->Chunks).AllocatorInstance.Data + (longlong)(this->Chunks).ArrayNum * 0xc18 + -8
             ) = uVar13;
  }
  this->NumElements = param_1;
  return;
}

