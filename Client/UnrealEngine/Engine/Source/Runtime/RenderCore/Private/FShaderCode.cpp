// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// FinalizeShaderCode @ 145e09380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FShaderCode::FinalizeShaderCode(FShaderCode *this,FCompressedBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSharedBuffer FVar4;
  FCompressedBuffer *pFVar5;
  ForElementType<FSharedBuffer> FVar6;
  ForElementType<FSharedBuffer> FVar7;
  undefined1 auStackY_a8 [32];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  FCompositeBuffer local_58;
  FCompressedBuffer local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (this->OptionalDataSize != -1) {
    if ((this->UncompressedSize != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UncompressedSize == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x504,
                           L"FShaderCode::FinalizeShaderCode() was called after compressing the code"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->OptionalDataSize = this->OptionalDataSize + 4;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,4,&(this->ShaderCodeWithOptionalData).AllocatorInstance,
                       &(this->ShaderCodeWithOptionalData).ArrayNum,
                       &(this->ShaderCodeWithOptionalData).ArrayMax);
    *(int *)((this->ShaderCodeWithOptionalData).AllocatorInstance.Data + iVar3) =
         this->OptionalDataSize;
    this->OptionalDataSize = -1;
    if ((((param_1->CompressedData).Segments.ArrayNum != 0) && ((this->SymbolData).ArrayNum != 0))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("OverrideSymbolsBuffer.IsNull() || SymbolData.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                              ,0x50b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar4 = MakeSharedBufferFromArray<unsigned_char,TSizedDefaultAllocator<32>_>
                      ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_68);
    FSharedBuffer::operator=(&(this->ShaderCodeResource).Code,(FSharedBuffer *)FVar4.Owner.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_68);
    iVar3 = (param_1->CompressedData).Segments.ArrayNum;
    if (iVar3 == 0) {
      FVar4 = MakeSharedBufferFromArray<unsigned_char,TSizedDefaultAllocator<32>_>
                        ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_60);
      pFVar5 = FCompressedBuffer::Compress(&local_40,(FSharedBuffer *)FVar4.Owner.Owner);
      FCompositeBuffer::operator=
                (&(this->ShaderCodeResource).Symbols.CompressedData,&pFVar5->CompressedData);
      FCompositeBuffer::~FCompositeBuffer(&local_40.CompressedData);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_60);
    }
    else {
      FVar6 = (param_1->CompressedData).Segments.AllocatorInstance.SecondaryData;
      local_58.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
      FVar7 = (ForElementType<FSharedBuffer>)param_1;
      if (FVar6 != (ForElementType<FSharedBuffer>)0x0) {
        FVar7 = FVar6;
      }
      local_58.Segments.ArrayNum = iVar3;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                (8,8,iVar3,0,(ForElementType<FSharedBuffer> *)&local_58,iVar3,
                 &local_58.Segments.ArrayMax);
      FVar6 = (ForElementType<FSharedBuffer>)&local_58;
      if (local_58.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
        FVar6 = local_58.Segments.AllocatorInstance.SecondaryData;
      }
      ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar6,(FSharedBuffer *)FVar7,iVar3);
      FCompositeBuffer::operator=(&(this->ShaderCodeResource).Symbols.CompressedData,&local_58);
      FCompositeBuffer::~FCompositeBuffer(&local_58);
    }
  }
  FCompositeBuffer::~FCompositeBuffer(&param_1->CompressedData);
  return;
}

// GetShaderCodeSize @ 145e10440

int __thiscall FShaderCode::GetShaderCodeSize(FShaderCode *this)

{
  code *pcVar1;
  uchar *puVar2;
  bool bVar3;
  int iVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  int iVar6;
  TArrayView<unsigned_char_const_,int> local_38;
  FCompressedBuffer local_28;
  
  iVar4 = this->ShaderCodeSize;
  if (iVar4 == 0) {
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[0] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[1] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[2] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[3] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[4] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[5] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[6] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[7] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    iVar6 = 0;
    local_28.CompressedData.Segments.ArrayNum = 0;
    local_28.CompressedData.Segments.ArrayMax = 1;
    FinalizeShaderCode(this,&local_28);
    if (this->UncompressedSize != 0) {
      iVar4 = FShaderCodeResource::GetShaderCodeSize(&this->ShaderCodeResource);
      return iVar4;
    }
    pTVar5 = FShaderCodeResource::GetCodeView(&this->ShaderCodeResource,&local_38);
    puVar2 = pTVar5->DataPtr;
    iVar4 = (int)*(undefined8 *)&pTVar5->ArrayNum;
    if (iVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderCode.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                         ,0x3de,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    if (3 < (ulonglong)(longlong)iVar4) {
      if (iVar4 < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      iVar6 = *(int *)(puVar2 + ((longlong)iVar4 - 4));
      if (iVar6 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalOptionalDataSize >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x45d,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      if (iVar4 < iVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderCode.Num() >= LocalOptionalDataSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x45e,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
    }
    iVar4 = iVar4 - iVar6;
  }
  return iVar4;
}

// AddOptionalData @ 145e4aa60

void __thiscall
FShaderCode::AddOptionalData
          (FShaderCode *this,EShaderOptionalDataKey param_1,uchar *param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement local_28 [16];
  
  if (param_2 == (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x56d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->OptionalDataSize < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OptionalDataSize >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x570,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->ShaderCodeWithOptionalData).AllocatorInstance.Data;
  local_28[0] = (FScriptContainerElement)param_1;
  if ((pFVar3 <= local_28) && (local_28 < pFVar3 + (this->ShaderCodeWithOptionalData).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ShaderCodeWithOptionalData).ArrayNum;
  piVar1 = &(this->ShaderCodeWithOptionalData).ArrayNum;
  piVar2 = &(this->ShaderCodeWithOptionalData).ArrayMax;
  if (iVar6 == (this->ShaderCodeWithOptionalData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->ShaderCodeWithOptionalData).AllocatorInstance,piVar2);
  }
  *piVar1 = iVar6 + 1;
  (this->ShaderCodeWithOptionalData).AllocatorInstance.Data[iVar6] = local_28[0];
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&(this->ShaderCodeWithOptionalData).AllocatorInstance,piVar1,piVar2);
  *(uint *)((this->ShaderCodeWithOptionalData).AllocatorInstance.Data + iVar6) = param_3;
  if ((param_2 == (uchar *)0x0) && (param_3 != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_3,&(this->ShaderCodeWithOptionalData).AllocatorInstance,piVar1,piVar2
                    );
  if (param_3 != 0) {
    memcpy((this->ShaderCodeWithOptionalData).AllocatorInstance.Data + iVar6,param_2,
           (longlong)(int)param_3);
  }
  this->OptionalDataSize = this->OptionalDataSize + param_3 + 5;
  return;
}

// Compress @ 145e4ed00

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FShaderCode::Compress(FShaderCode *this,FName param_1,ECompressor param_2,ECompressionLevel param_3)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  int iVar5;
  bool bVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  long64 lVar8;
  FBufferOwner *pFVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FBufferOwner *pFVar13;
  int iVar14;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  FSharedBuffer local_70;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_68;
  TArrayView<unsigned_char_const_,int> local_58 [2];
  
  if ((this->OptionalDataSize != -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OptionalDataSize == -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1027,
                         L"FShaderCode::Compress() was called before calling FShaderCode::FinalizeShaderCode()"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar7 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar10.Number = 0;
  FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar7.Value);
  if ((param_1 != FVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderCompressionFormat == NAME_Oodle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1029,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  FShaderCodeResource::GetCodeView(&this->ShaderCodeResource,local_58);
  FVar7 = FNameEntryId::FromValidEName((EName)local_78);
  iVar5 = local_58[0].ArrayNum;
  FVar11.Number = 0;
  FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
  local_res8[0] = local_58[0].ArrayNum;
  if (param_1 == FVar11) {
    lVar8 = FOodleDataCompression::CompressedBufferSizeNeeded((longlong)local_58[0].ArrayNum);
    local_res8[0] = (int)lVar8;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,local_res8[0],&local_68.AllocatorInstance,&local_68.ArrayNum,&local_68.ArrayMax);
  FVar7 = FNameEntryId::FromValidEName((EName)local_74);
  FVar12.Number = 0;
  FVar12.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar7.Value);
  if (param_1 == FVar12) {
    lVar8 = FOodleDataCompression::Compress
                      (local_68.AllocatorInstance.Data,(longlong)local_res8[0],local_58[0].DataPtr,
                       (longlong)iVar5,param_2,param_3,false,0);
    local_res8[0] = (int)lVar8;
    bVar6 = local_res8[0] != 0;
  }
  else {
    bVar6 = FCompression::CompressMemory
                      (param_1,local_68.AllocatorInstance.Data,local_res8,local_58[0].DataPtr,iVar5,
                       COMPRESS_BiasMemory,0);
  }
  if ((bVar6 != false) && (local_res8[0] < iVar5)) {
    if ((iVar5 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderCode.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x3de,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((ulonglong)(longlong)local_58[0].ArrayNum < 4) {
      iVar14 = 0;
    }
    else {
      if ((local_58[0].ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar14 = *(int *)(local_58[0].DataPtr + ((longlong)local_58[0].ArrayNum - 4));
      if ((iVar14 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalOptionalDataSize >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x45d,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((local_58[0].ArrayNum < iVar14) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderCode.Num() >= LocalOptionalDataSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x45e,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->ShaderCodeSize = local_58[0].ArrayNum - iVar14;
    if ((local_58[0].ArrayNum - iVar14 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderCodeSize >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x1044,L"Unable to determine ShaderCodeSize from uncompressed code"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this->CompressionFormat = param_1;
    this->OodleCompressor = param_2;
    this->OodleLevel = param_3;
    this->UncompressedSize = iVar5;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_68,local_res8[0],Default);
    pFVar9 = ::operator_new(0x30);
    pFVar13 = (FBufferOwner *)0x0;
    if (pFVar9 != (FBufferOwner *)0x0) {
      pFVar9->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
      pFVar9->_padding_ =
           (longlong)
           &___7__TBufferOwnerTArray_EV__TSizedDefaultAllocator__0CA____Private_SharedBuffer_UE__6B_
      ;
      pFVar9[1]._padding_ = (longlong)local_68.AllocatorInstance.Data;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&pFVar9[1].Data = local_68.ArrayNum;
      *(int *)((longlong)&pFVar9[1].Data + 4) = local_68.ArrayMax;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      pFVar9->Data = (void *)pFVar9[1]._padding_;
      pFVar9->Size = (longlong)*(int *)&pFVar9[1].Data;
      LOCK();
      pFVar9->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((ulonglong)pFVar9->ReferenceCountsAndFlags | 0x4000000000000000);
      UNLOCK();
      LOCK();
      pFVar9->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((ulonglong)pFVar9->ReferenceCountsAndFlags | 0x1000000000000000);
      UNLOCK();
      pFVar13 = pFVar9;
    }
    FSharedBuffer::FSharedBuffer(&local_70,pFVar13);
    pFVar13 = (this->ShaderCodeResource).Code.Owner.Owner;
    (this->ShaderCodeResource).Code.Owner.Owner = (FBufferOwner *)local_70.Owner.Owner;
    local_70.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    if (pFVar13 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar13->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(pFVar13->_padding_ + 0x10))(pFVar13);
        pFVar13->Data = (void *)0x0;
        pFVar13->Size = 0;
        LOCK();
        paVar1 = &pFVar13->ReferenceCountsAndFlags;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)pFVar13->_padding_)(pFVar13,1);
        }
      }
    }
    FVar4.Owner.Owner = local_70.Owner.Owner;
    if (local_70.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_70.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_70.Owner.Owner + 0x10))(local_70.Owner.Owner);
        *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
        }
      }
    }
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// GetFinalizedResource @ 145e58400

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShaderCodeResource * __thiscall
FShaderCode::GetFinalizedResource(FShaderCode *this,EShaderFrequency param_1,FSHAHash *param_2)

{
  FBufferOwner *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNameEntryId FVar5;
  FShaderCodeResource *pFVar6;
  FSharedBuffer FVar7;
  undefined4 extraout_var;
  FName FVar8;
  int iVar9;
  ECompressionLevel local_e8;
  ECompressor local_e7 [7];
  FName local_e0;
  int local_d8;
  int local_d4;
  EShaderFrequency local_d0;
  undefined1 local_cf;
  undefined2 local_ce;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FName local_98;
  undefined1 local_90 [4];
  FName local_8c;
  FSHAHash *local_80;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_80 = param_2;
  if ((this->OptionalDataSize != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OptionalDataSize == -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                         ,0x586,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FShaderCodeResource *)(*pcVar2)();
    return pFVar6;
  }
  pFVar1 = (this->ShaderCodeResource).Header.Owner.Owner;
  if (pFVar1 == (FBufferOwner *)0x0) {
    GetShaderCompressionFormat();
    if (local_e0 != (FName)0x0) {
      local_8c = this->CompressionFormat;
      if (local_e0 == local_8c) {
        FVar5 = FNameEntryId::FromValidEName((EName)local_90);
        FVar8.Number = 0;
        FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
        if (local_e0 == FVar8) {
          local_98.ComparisonIndex.Value = 0;
          local_98.Number = 0;
          GetShaderCompressionOodleSettings(local_e7,&local_e8,&local_98);
          if ((this->OodleCompressor != local_e7[0]) || (this->OodleLevel != local_e8)) {
            local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.Data.ArrayNum = 0;
            local_a8.Data.ArrayMax = 0;
            BytesToHex(local_80->Hash,0x14,&local_a8);
            UE::Logging::Private::BasicFatalLog
                      (&`public:_class_FShaderCodeResource_const&___ptr64___cdecl_FShaderCode::GetFinalizedResource(EShaderFrequency,FSHAHash)const___ptr64'
                        ::__l72::LOG_Static,(FLogCategoryBase *)&LogShaders);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            goto LAB_145e586ba;
          }
        }
      }
      else {
        if (local_8c != (FName)0x0) {
          ::FName::ToString(&local_8c,&local_60);
          ::FName::ToString(&local_e0,&local_70);
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          BytesToHex(param_2->Hash,0x14,&local_c8);
          UE::Logging::Private::BasicFatalLog
                    (&`public:_class_FShaderCodeResource_const&___ptr64___cdecl_FShaderCode::GetFinalizedResource(EShaderFrequency,FSHAHash)const___ptr64'
                      ::__l29::LOG_Static,(FLogCategoryBase *)&LogShaders);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          goto LAB_145e586ba;
        }
        if (5 < (byte)LogShaders._0_1_) {
          ::FName::ToString(&local_e0,&local_50);
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Data.ArrayNum = 0;
          local_b8.Data.ArrayMax = 0;
          BytesToHex(param_2->Hash,0x14,&local_b8);
          UE::Logging::Private::BasicLog<6>
                    (&`public:_class_FShaderCodeResource_const&___ptr64___cdecl_FShaderCode::GetFinalizedResource(EShaderFrequency,FSHAHash)const___ptr64'
                      ::__l47::LOG_Static,(FLogCategoryBase *)&LogShaders);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    iVar4 = GetShaderCodeSize(this);
    iVar9 = this->UncompressedSize;
    if (iVar9 == 0) {
      pFVar1 = (this->ShaderCodeResource).Code.Owner.Owner;
      if (pFVar1 == (FBufferOwner *)0x0) {
        iVar9 = 0;
      }
      else {
        if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
          (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
        }
        iVar9 = (int)pFVar1->Size;
      }
    }
    if (((this->ShaderCodeResource).Code.Owner.Owner == (FBufferOwner *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Code",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x4bd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FShaderCodeResource *)(*pcVar2)();
      return pFVar6;
    }
    local_cf = 0;
    local_ce = 0;
    local_d8 = iVar9;
    local_d4 = iVar4;
    local_d0 = param_1;
    FVar7 = FSharedBuffer::Clone(&local_78,(ulong64)&local_d8);
    FSharedBuffer::operator=(&(this->ShaderCodeResource).Header,(FSharedBuffer *)FVar7.Owner.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_78);
  }
  else {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    if ((*(EShaderFrequency *)((longlong)pFVar1->Data + 8) != param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderCodeResource.GetFrequency() == Frequency",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x58c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FShaderCodeResource *)(*pcVar2)();
      return pFVar6;
    }
  }
LAB_145e586ba:
  return &this->ShaderCodeResource;
}

