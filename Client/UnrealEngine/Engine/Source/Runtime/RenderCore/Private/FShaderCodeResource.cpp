// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// GetCodeView @ 145e0eeb0

TArrayView<unsigned_char_const_,int> * __thiscall
FShaderCodeResource::GetCodeView
          (FShaderCodeResource *this,TArrayView<unsigned_char_const_,int> *__return_storage_ptr__)

{
  FBufferOwner *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_char_const_,int> *pTVar4;
  uchar *puVar5;
  int iVar6;
  
  pFVar1 = (this->Code).Owner.Owner;
  puVar5 = (uchar *)0x0;
  if (pFVar1 == (FBufferOwner *)0x0) {
    iVar6 = 0;
  }
  else {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    iVar6 = (int)pFVar1->Size;
  }
  pFVar1 = (this->Code).Owner.Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    puVar5 = pFVar1->Data;
  }
  __return_storage_ptr__->DataPtr = puVar5;
  __return_storage_ptr__->ArrayNum = iVar6;
  if (iVar6 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetShaderCodeSize @ 145e105b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FShaderCodeResource::GetShaderCodeSize(FShaderCodeResource *this)

{
  FBufferOwner *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->Header).Owner.Owner == (FBufferOwner *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x4cc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar1 = (this->Header).Owner.Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    return *(int *)((longlong)pFVar1->Data + 4);
  }
  return _DAT_00000004;
}

// FShaderCodeResource @ 145e815d0

FShaderCodeResource * __thiscall
FShaderCodeResource::FShaderCodeResource(FShaderCodeResource *this,FShaderCodeResource *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  
  pFVar3 = (param_1->Header).Owner.Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar3->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar3->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  (this->Header).Owner.Owner = pFVar3;
  pFVar3 = (param_1->Code).Owner.Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar3->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar3->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  (this->Code).Owner.Owner = pFVar3;
  FCompositeBuffer::FCompositeBuffer
            (&(this->Symbols).CompressedData,&(param_1->Symbols).CompressedData);
  return this;
}

// GetCacheBuffer @ 145e9cdf0

FCompositeBuffer * __thiscall
FShaderCodeResource::GetCacheBuffer
          (FShaderCodeResource *this,FCompositeBuffer *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSharedBuffer> FVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ForElementType<FSharedBuffer> FVar9;
  bool bVar10;
  
  (__return_storage_ptr__->Segments).AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  piVar1 = &(__return_storage_ptr__->Segments).ArrayMax;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  *piVar1 = 1;
  UE::Core::Private::
  ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
            (8,8,2,(ForElementType<FSharedBuffer> *)__return_storage_ptr__,0,piVar1);
  FCompositeBuffer::AppendBuffers(__return_storage_ptr__,&this->Header);
  FCompositeBuffer::AppendBuffers(__return_storage_ptr__,&this->Code);
  iVar2 = (__return_storage_ptr__->Segments).ArrayNum;
  if (iVar2 != 0) {
    FVar3 = (__return_storage_ptr__->Segments).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<FSharedBuffer>)__return_storage_ptr__;
    if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
      FVar9 = FVar3;
    }
    iVar8 = 0;
    bVar10 = *(longlong *)FVar9 != 0;
    lVar4 = 0;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar4 = lVar4 + 1;
        iVar7 = iVar7 + 1;
        if (iVar2 <= lVar4) break;
      } while (bVar10 == (*(longlong *)((longlong)FVar9 + lVar4 * 8) != 0));
      iVar5 = iVar7 - iVar6;
      if (bVar10 == false) {
        DestructItems<FSharedBuffer,int>
                  ((FSharedBuffer *)((longlong)FVar9 + (longlong)iVar6 * 8),iVar5);
      }
      else {
        if (iVar8 != iVar6) {
          memmove((longlong *)((longlong)FVar9 + (longlong)iVar8 * 8),
                  (longlong *)((longlong)FVar9 + (longlong)iVar6 * 8),(longlong)iVar5 << 3);
        }
        iVar8 = iVar8 + iVar5;
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar6 = iVar7;
    } while (lVar4 < iVar2);
    (__return_storage_ptr__->Segments).ArrayNum = iVar8;
  }
  return __return_storage_ptr__;
}

// GetFrequency @ 145e9d540

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

EShaderFrequency __thiscall FShaderCodeResource::GetFrequency(FShaderCodeResource *this)

{
  FBufferOwner *pFVar1;
  code *pcVar2;
  bool bVar3;
  EShaderFrequency EVar4;
  
  if ((this->Header).Owner.Owner == (FBufferOwner *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x4d3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pFVar1 = (this->Header).Owner.Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    return *(EShaderFrequency *)((longlong)pFVar1->Data + 8);
  }
  return DAT_00000008;
}

// GetUncompressedSize @ 145ea2c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FShaderCodeResource::GetUncompressedSize(FShaderCodeResource *this)

{
  FBufferOwner *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->Header).Owner.Owner == (FBufferOwner *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x4c5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar1 = (this->Header).Owner.Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    return *(int *)pFVar1->Data;
  }
  return _DAT_00000000;
}

// PopulateFromComposite @ 145ea8fc0

void __thiscall
FShaderCodeResource::PopulateFromComposite
          (FShaderCodeResource *this,FCompositeBuffer *param_1,FCompressedBuffer *param_2)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  FBufferOwner *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<FSharedBuffer> FVar6;
  
  iVar1 = (param_1->Segments).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_145ea9008:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CacheBuffer.GetSegments().Num() == 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x4b0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (iVar1 != 2) goto LAB_145ea9008;
  FVar2 = (param_1->Segments).AllocatorInstance.SecondaryData;
  iVar1 = (param_1->Segments).ArrayNum;
  FVar6 = (ForElementType<FSharedBuffer>)param_1;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar6 = FVar2;
  }
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_145ea906e:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (iVar1 < 1) goto LAB_145ea906e;
  FSharedBuffer::operator=(&this->Header,(FSharedBuffer *)FVar6);
  pFVar3 = (this->Header).Owner.Owner;
  if (pFVar3 == (FBufferOwner *)0x0) {
LAB_145ea90d2:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header.GetSize() == sizeof(FHeader)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x4b2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if (((ulonglong)pFVar3->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar3->_padding_ + 8))(pFVar3);
    }
    if (pFVar3->Size != 0xc) goto LAB_145ea90d2;
  }
  FVar2 = (param_1->Segments).AllocatorInstance.SecondaryData;
  iVar1 = (param_1->Segments).ArrayNum;
  FVar6 = (ForElementType<FSharedBuffer>)param_1;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    FVar6 = FVar2;
  }
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (1 < iVar1) goto LAB_145ea916f;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_145ea916f:
  FSharedBuffer::operator=(&this->Code,(FSharedBuffer *)((longlong)FVar6 + 8));
  FCompositeBuffer::operator=(&(this->Symbols).CompressedData,&param_2->CompressedData);
  FCompositeBuffer::~FCompositeBuffer(param_1);
  FCompositeBuffer::~FCompositeBuffer(&param_2->CompressedData);
  return;
}

