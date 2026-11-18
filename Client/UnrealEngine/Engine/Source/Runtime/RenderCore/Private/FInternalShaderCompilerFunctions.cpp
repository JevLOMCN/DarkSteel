// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// operator() @ 145e48c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FInternalShaderCompilerFunctions::PreprocessShaderInternal'::__l2::<lambda_1>::operator()
          (void *this,FShaderPreprocessOutput *param_1,TStringView<wchar_t> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  char *_Src;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  FString local_1a0;
  FScriptContainerElement *local_190;
  TStringView<char> local_188;
  uchar *local_178;
  int iStack_170;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  char *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  uchar *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  TStringView<char8_t> local_128;
  TStringView<char8_t> local_118;
  TStringView<char8_t> local_108;
  TStringView<char8_t> local_f8;
  TArrayView<unsigned_char_const_,int> local_e8;
  TStringBuilderBase<char> local_d8;
  char local_b8 [65];
  char local_77 [15];
  uchar local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (param_1->bSucceeded != false) {
    lVar1 = *(longlong *)this;
    if ((*(ulonglong *)(lVar1 + 0x268) & 0x20000000000) == 0) {
      bVar4 = FShaderCompilerInput::DumpDebugInfoEnabled((FShaderCompilerInput *)(lVar1 + 0xd8));
      if ((bVar4) || (*(char *)(lVar1 + 0x4c8) != '\0')) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      FShaderPreprocessOutput::StripCode(param_1,bVar4);
      (**(code **)**(undefined8 **)this)();
      GetShaderSourceDebugHashPrefix(&local_188);
      if (((param_1->PreprocessedSource).DecompressedCharCount != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsCompressed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                             ,0x5d,
                             L"FShaderSource is compressed; must decompress prior to calling GetView"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (param_1->PreprocessedSource).Source.AllocatorInstance.Data;
      local_190 = pFVar6;
      if (((param_1->PreprocessedSource).DecompressedCharCount != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsCompressed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                             ,0x74,L"Len should not be called on compressed FShaderSource."), bVar4)
         ) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_178 = (uchar *)local_188.DataPtr;
      iVar7 = (param_1->PreprocessedSource).Source.ArrayNum + -0xf;
      iStack_170 = local_188.Size;
      iStack_160 = 0;
      if (0 < iVar7) {
        iStack_160 = iVar7;
      }
      local_128.DataPtr = (uchar *)local_188.DataPtr;
      local_168 = pFVar6 + ((longlong)iVar7 - (longlong)iStack_160);
      local_118._12_4_ = uStack_15c;
      local_118.Size = iStack_160;
      local_118.DataPtr = (uchar *)local_168;
      iVar5 = UE::String::FindFirst(&local_118,&local_128,CaseSensitive);
      iVar9 = -1;
      uStack_150 = 1;
      if (iVar5 == -1) {
        iVar5 = -1;
      }
      iVar5 = local_188.Size + iVar5;
      local_158 = "\n";
      local_108._12_4_ = uStack_14c;
      local_108.Size = 1;
      local_108.DataPtr = "\n";
      iVar3 = iVar7;
      if (iVar7 - iVar5 < iVar7) {
        iVar3 = iVar7 - iVar5;
      }
      iStack_140 = 0;
      if (0 < iVar3) {
        iStack_140 = iVar3;
      }
      local_148 = local_190 + ((longlong)iVar7 - (longlong)iStack_140);
      local_f8._12_4_ = uStack_13c;
      local_f8.Size = iStack_140;
      local_f8.DataPtr = (uchar *)local_148;
      iVar7 = UE::String::FindFirst(&local_f8,&local_108,CaseSensitive);
      if (iVar7 != -1) {
        iVar9 = iVar7 + iVar5;
      }
      local_d8.Base = local_b8;
      uStack_130 = 0x20;
      local_d8.CurPos = local_b8;
      local_d8.bIsDynamic = false;
      local_d8.bIsExternal = false;
      local_d8.End = local_77;
      local_138 = local_68;
      local_e8._12_4_ = uStack_12c;
      local_e8.ArrayNum = 0x20;
      local_e8.DataPtr = local_138;
      UE::String::BytesToHexLower(&local_e8,&local_d8);
      _Src = local_d8.Base;
      iVar7 = (int)local_d8.CurPos - (int)local_d8.Base;
      if (iVar9 - iVar5 == iVar7) {
        if (((param_1->PreprocessedSource).DecompressedCharCount != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsCompressed()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderSource.h"
                               ,0x66,
                               L"FShaderSource is compressed; must decompress prior to calling GetData"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        memcpy((param_1->PreprocessedSource).Source.AllocatorInstance.Data + iVar5,_Src,
               (longlong)iVar7);
      }
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_d8);
    }
    FShaderSource::Compress(&param_1->PreprocessedSource);
    FShaderSource::Compress(&param_1->OriginalPreprocessedSource);
  }
  if (param_2->Size != 0) {
    pFVar8 = (param_1->Errors).AllocatorInstance.Data;
    iVar7 = (param_1->Errors).ArrayNum;
    pFVar6 = pFVar8 + 0x20;
    pFVar10 = pFVar8 + (longlong)iVar7 * 0x50;
    while( true ) {
      if ((param_1->Errors).ArrayNum != iVar7) {
        `TCheckedPointerIterator<FShaderCompilerError,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1a8);
      }
      if (pFVar8 == pFVar10) break;
      ::FString::ConcatRF(&local_1a0,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size,
                          (FString *)pFVar6);
      if (pFVar6 != (FScriptContainerElement *)&local_1a0) {
        if (*(void **)&pFVar6->field_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar6->field_0x0);
        }
        *(FScriptContainerElement **)&pFVar6->field_0x0 = local_1a0.Data.AllocatorInstance.Data;
        *(int *)(pFVar6 + 8) = local_1a0.Data.ArrayNum;
        *(int *)(pFVar6 + 0xc) = local_1a0.Data.ArrayMax;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      pFVar8 = pFVar8 + 0x50;
      pFVar6 = pFVar6 + 0x50;
    }
  }
  TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_>::
  Append<FShaderCompilerError,TSizedDefaultAllocator<32>_>
            ((TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0x630)
             ,&param_1->Errors);
  **(byte **)((longlong)this + 8) = **(byte **)((longlong)this + 8) & param_1->bSucceeded;
  return;
}

// CombineCodeOutputs @ 145e4d960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145e4e196) */
/* WARNING: Removing unreachable block (ram,0x000145e4e1a4) */
/* WARNING: Removing unreachable block (ram,0x000145e4e1b2) */
/* WARNING: Removing unreachable block (ram,0x000145e4e1c1) */
/* WARNING: Removing unreachable block (ram,0x000145e4e1d0) */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FInternalShaderCompilerFunctions::CombineCodeOutputs
          (IShaderFormat *param_1,FShaderCompileJob *param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<unsigned___int64> *paVar3;
  int *piVar4;
  FShaderCode *this;
  TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *pTVar5;
  atomic<unsigned___int64> aVar6;
  FShaderCompilerOutput *pFVar7;
  code *pcVar8;
  FSharedBuffer FVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  int iVar13;
  FShaderCodeResource *pFVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<FSharedBuffer> FVar16;
  FScriptContainerElement *pFVar17;
  ForElementType<FSharedBuffer> FVar18;
  uint uVar19;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1b8;
  int local_1b0 [2];
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FCompressedBuffer local_158;
  TArrayView<unsigned_char_const_,int> local_140;
  FCompressedBuffer local_130;
  FCompressedBuffer local_118;
  TArrayView<unsigned_char_const_,int> local_100;
  FSHAHash local_e8;
  FCompositeBuffer local_c8;
  undefined4 local_b0;
  FScriptContainerElement *local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FSharedBuffer local_88;
  FSharedBuffer FStack_80;
  undefined1 local_78 [24];
  int iStack_60;
  FName local_5c;
  undefined2 local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (((param_2->SecondaryOutput).Ptr == (FShaderCompilerOutput *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Job.SecondaryOutput.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                          ,0x772,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0[0] = 0;
  local_1b0[1] = 0;
  uVar12 = (**(code **)((longlong)*param_1 + 0x90))(param_1);
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,4,&local_1b8,local_1b0,local_1b0 + 1);
  this = &(param_2->Output).ShaderCode;
  local_130.CompressedData.Segments.AllocatorInstance.InlineData[0] = '\0';
  local_130.CompressedData.Segments.AllocatorInstance.InlineData[1] = '\0';
  local_130.CompressedData.Segments.AllocatorInstance.InlineData[2] = '\0';
  local_130.CompressedData.Segments.AllocatorInstance.InlineData[3] = '\0';
  local_130.CompressedData.Segments.AllocatorInstance.InlineData[4] = '\0';
  local_130.CompressedData.Segments.AllocatorInstance.InlineData[5] = '\0';
  local_130.CompressedData.Segments.AllocatorInstance.InlineData[6] = '\0';
  local_130.CompressedData.Segments.AllocatorInstance.InlineData[7] = '\0';
  local_130.CompressedData.Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  local_130.CompressedData.Segments.ArrayNum = 0;
  *(undefined4 *)(local_1b8.Data + iVar13) = uVar12;
  local_130.CompressedData.Segments.ArrayMax = 1;
  FShaderCode::FinalizeShaderCode(this,&local_130);
  FShaderCodeResource::GetCodeView(&(param_2->Output).ShaderCode.ShaderCodeResource,&local_100);
  pFVar7 = (param_2->SecondaryOutput).Ptr;
  local_118.CompressedData.Segments.AllocatorInstance.InlineData[0] = '\0';
  local_118.CompressedData.Segments.AllocatorInstance.InlineData[1] = '\0';
  local_118.CompressedData.Segments.AllocatorInstance.InlineData[2] = '\0';
  local_118.CompressedData.Segments.AllocatorInstance.InlineData[3] = '\0';
  local_118.CompressedData.Segments.AllocatorInstance.InlineData[4] = '\0';
  local_118.CompressedData.Segments.AllocatorInstance.InlineData[5] = '\0';
  local_118.CompressedData.Segments.AllocatorInstance.InlineData[6] = '\0';
  local_118.CompressedData.Segments.AllocatorInstance.InlineData[7] = '\0';
  local_118.CompressedData.Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  local_118.CompressedData.Segments.ArrayNum = 0;
  local_118.CompressedData.Segments.ArrayMax = 1;
  FShaderCode::FinalizeShaderCode(&pFVar7->ShaderCode,&local_118);
  FShaderCodeResource::GetCodeView(&(pFVar7->ShaderCode).ShaderCodeResource,&local_140);
  uVar19 = local_100.ArrayNum + 8 + local_140.ArrayNum;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (local_1b0[1] < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar19,&local_1b8,local_1b0[0],local_1b0 + 1);
  }
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,4,&local_1b8,local_1b0,local_1b0 + 1);
  *(int *)(local_1b8.Data + iVar13) = local_100.ArrayNum;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,4,&local_1b8,local_1b0,local_1b0 + 1);
  *(int *)(local_1b8.Data + iVar13) = local_140.ArrayNum;
  if ((local_100.ArrayNum < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x9a9,L"Invalid range size: %lld"), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if (local_100.ArrayNum != 0) {
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,local_100.ArrayNum,&local_1b8,local_1b0,local_1b0 + 1);
    memcpy(local_1b8.Data + iVar13,local_100.DataPtr,(longlong)local_100.ArrayNum);
  }
  if ((local_140.ArrayNum < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x9a9,L"Invalid range size: %lld"), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if (local_140.ArrayNum != 0) {
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,local_140.ArrayNum,&local_1b8,local_1b0,local_1b0 + 1);
    memcpy(local_1b8.Data + iVar13,local_140.DataPtr,(longlong)local_140.ArrayNum);
  }
  local_e8.Hash._0_8_ = *(undefined8 *)(param_2->Output).OutputHash.Hash;
  local_e8.Hash._8_8_ = *(undefined8 *)((param_2->Output).OutputHash.Hash + 8);
  local_e8.Hash._16_4_ = *(undefined4 *)((param_2->Output).OutputHash.Hash + 0x10);
  pFVar14 = FShaderCode::GetFinalizedResource
                      (this,*(EShaderFrequency *)&(param_2->Output).Target.field0_0x0 &
                            (SF_NumFrequencies|SF_Pixel),&local_e8);
  local_c8.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  FVar18 = (pFVar14->Symbols).CompressedData.Segments.AllocatorInstance.SecondaryData;
  iVar13 = (pFVar14->Symbols).CompressedData.Segments.ArrayNum;
  if (FVar18 == (ForElementType<FSharedBuffer>)0x0) {
    FVar18 = (ForElementType<FSharedBuffer>)&pFVar14->Symbols;
  }
  local_c8.Segments.ArrayNum = iVar13;
  if (iVar13 == 0) {
    local_c8.Segments.ArrayMax = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,iVar13,0,(ForElementType<FSharedBuffer> *)&local_c8,iVar13,
               &local_c8.Segments.ArrayMax);
    FVar16 = (ForElementType<FSharedBuffer>)&local_c8;
    if (local_c8.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
      FVar16 = local_c8.Segments.AllocatorInstance.SecondaryData;
    }
    ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar16,(FSharedBuffer *)FVar18,iVar13);
  }
  local_b0 = 0;
  pTVar1 = &(param_2->Output).ShaderCode.ShaderCodeWithOptionalData;
  local_a8 = (FScriptContainerElement *)0x0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_90 = 0;
  local_78._8_8_ = (ForElementType<FSharedBuffer>)0x0;
  local_78._16_4_ = 0;
  stack0xffffffffffffff9c = 1;
  local_5c.ComparisonIndex.Value = 0;
  local_5c.Number = 0;
  local_54 = 0;
  local_50 = 0;
  this->OptionalDataSize = 0;
  local_88.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0
  ;
  FStack_80.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_a8) {
    pFVar17 = (pTVar1->AllocatorInstance).Data;
    pFVar15 = (FScriptContainerElement *)0x0;
    local_a0._0_4_ = 0;
    local_a0._4_4_ = 0;
    if (pFVar17 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar17);
      pFVar15 = local_a8;
    }
    (pTVar1->AllocatorInstance).Data = pFVar15;
    (param_2->Output).ShaderCode.ShaderCodeWithOptionalData.ArrayNum = (int)local_a0;
    (param_2->Output).ShaderCode.ShaderCodeWithOptionalData.ArrayMax = local_a0._4_4_;
  }
  local_a0 = 0;
  local_a8 = (FScriptContainerElement *)0x0;
  pTVar2 = &(param_2->Output).ShaderCode.SymbolData;
  if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_98) {
    pFVar17 = (pTVar2->AllocatorInstance).Data;
    if (pFVar17 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar17);
    }
    (pTVar2->AllocatorInstance).Data = local_98.Data;
    (param_2->Output).ShaderCode.SymbolData.ArrayNum = (int)local_90;
    (param_2->Output).ShaderCode.SymbolData.ArrayMax = local_90._4_4_;
    local_90 = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
  }
  FSharedBuffer::operator=(&(param_2->Output).ShaderCode.ShaderCodeResource.Header,&local_88);
  FSharedBuffer::operator=(&(param_2->Output).ShaderCode.ShaderCodeResource.Code,&FStack_80);
  FCompositeBuffer::operator=
            (&(param_2->Output).ShaderCode.ShaderCodeResource.Symbols.CompressedData,
             (FCompositeBuffer *)local_78);
  (param_2->Output).ShaderCode.UncompressedSize = iStack_60;
  (param_2->Output).ShaderCode.CompressionFormat = local_5c;
  (param_2->Output).ShaderCode.OodleCompressor = (ECompressor)local_54;
  (param_2->Output).ShaderCode.OodleLevel = local_54._1_1_;
  (param_2->Output).ShaderCode.ShaderCodeSize = local_50;
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)local_78);
  FVar9.Owner.Owner = FStack_80.Owner.Owner;
  if (FStack_80.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar3 = (atomic<unsigned___int64> *)((longlong)FStack_80.Owner.Owner + 0x18);
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + -1);
    UNLOCK();
    if ((aVar6._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)FStack_80.Owner.Owner + 0x10))(FStack_80.Owner.Owner);
      *(void **)((longlong)FVar9.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar3 = (atomic<unsigned___int64> *)((longlong)FVar9.Owner.Owner + 0x18);
      aVar6 = *paVar3;
      *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar6 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar9.Owner.Owner)(FVar9.Owner.Owner,1);
      }
    }
  }
  FVar9.Owner.Owner = local_88.Owner.Owner;
  if (local_88.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar3 = (atomic<unsigned___int64> *)((longlong)local_88.Owner.Owner + 0x18);
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + -1);
    UNLOCK();
    if ((aVar6._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_88.Owner.Owner + 0x10))(local_88.Owner.Owner);
      *(void **)((longlong)FVar9.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar3 = (atomic<unsigned___int64> *)((longlong)FVar9.Owner.Owner + 0x18);
      aVar6 = *paVar3;
      *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar6 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar9.Owner.Owner)(FVar9.Owner.Owner,1);
      }
    }
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_a8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((this->OptionalDataSize == -1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OptionalDataSize != -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                          ,0x516,L"Tried to add ShaderCode after being finalized!"), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if ((this->OptionalDataSize != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OptionalDataSize == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                          ,0x517,L"Tried to add ShaderCode after adding Optional data!"), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_1b8) {
    pFVar17 = (pTVar1->AllocatorInstance).Data;
    if (pFVar17 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar17);
    }
    (pTVar1->AllocatorInstance).Data = local_1b8.Data;
    (param_2->Output).ShaderCode.ShaderCodeWithOptionalData.ArrayNum = local_1b0[0];
    (param_2->Output).ShaderCode.ShaderCodeWithOptionalData.ArrayMax = local_1b0[1];
    local_1b0[0] = 0;
    local_1b0[1] = 0;
    local_1b8.Data = (FScriptContainerElement *)0x0;
  }
  iVar13 = local_c8.Segments.ArrayNum;
  local_158.CompressedData.Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  FVar18 = (ForElementType<FSharedBuffer>)&local_c8;
  if (local_c8.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
    FVar18 = local_c8.Segments.AllocatorInstance.SecondaryData;
  }
  local_158.CompressedData.Segments.ArrayNum = local_c8.Segments.ArrayNum;
  if (local_c8.Segments.ArrayNum == 0) {
    local_158.CompressedData.Segments.ArrayMax = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,local_c8.Segments.ArrayNum,0,(ForElementType<FSharedBuffer> *)&local_158,
               local_c8.Segments.ArrayNum,&local_158.CompressedData.Segments.ArrayMax);
    FVar16 = (ForElementType<FSharedBuffer>)&local_158;
    if (local_158.CompressedData.Segments.AllocatorInstance.SecondaryData !=
        (ForElementType<FSharedBuffer>)0x0) {
      FVar16 = local_158.CompressedData.Segments.AllocatorInstance.SecondaryData;
    }
    ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar16,(FSharedBuffer *)FVar18,iVar13);
  }
  FShaderCode::FinalizeShaderCode(this,&local_158);
  pFVar7 = (param_2->SecondaryOutput).Ptr;
  iVar13 = (param_2->Output).UsedAttributes.ArrayNum;
  if ((iVar13 == (pFVar7->UsedAttributes).ArrayNum) &&
     (bVar10 = CompareItems<FString,int>
                         ((FString *)(param_2->Output).UsedAttributes.AllocatorInstance.Data,
                          (FString *)(pFVar7->UsedAttributes).AllocatorInstance.Data,iVar13), bVar10
     )) {
    bVar10 = true;
  }
  else {
    pTVar5 = &(param_2->Output).Errors;
    ::FString::FString(&local_1a8,L"");
    ::FString::FString(&local_198,L"");
    ::FString::FString(&local_188,
                       L"Mismatch in UsedAttributes between primary and secondary compilation; these must match since later stages may not have a secondary compile and so require both versions of the earlier stage to output the same set of attributes."
                      );
    ::FString::FString(&local_178,L"");
    ::FString::FString(&local_168,L"");
    pFVar17 = (pTVar5->AllocatorInstance).Data;
    if ((pFVar17 <= (FScriptContainerElement *)&local_1a8) &&
       (((FScriptContainerElement *)&local_1a8 <
         pFVar17 + (longlong)(param_2->Output).Errors.ArrayMax * 0x50 &&
        (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)))) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    iVar13 = (param_2->Output).Errors.ArrayNum;
    piVar4 = &(param_2->Output).Errors.ArrayMax;
    if (iVar13 == *piVar4) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&pTVar5->AllocatorInstance,piVar4);
    }
    (param_2->Output).Errors.ArrayNum = iVar13 + 1;
    pFVar17 = (pTVar5->AllocatorInstance).Data + (longlong)iVar13 * 0x50;
    *(undefined8 *)pFVar17 = 0;
    *(FScriptContainerElement **)pFVar17 = local_1a8.Data.AllocatorInstance.Data;
    *(int *)(pFVar17 + 8) = local_1a8.Data.ArrayNum;
    *(int *)(pFVar17 + 0xc) = local_1a8.Data.ArrayMax;
    *(undefined8 *)(pFVar17 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar17 + 0x10) = local_198.Data.AllocatorInstance.Data;
    *(int *)(pFVar17 + 0x18) = local_198.Data.ArrayNum;
    *(int *)(pFVar17 + 0x1c) = local_198.Data.ArrayMax;
    *(undefined8 *)(pFVar17 + 0x20) = 0;
    *(FScriptContainerElement **)(pFVar17 + 0x20) = local_188.Data.AllocatorInstance.Data;
    *(int *)(pFVar17 + 0x28) = local_188.Data.ArrayNum;
    *(int *)(pFVar17 + 0x2c) = local_188.Data.ArrayMax;
    *(undefined8 *)(pFVar17 + 0x30) = 0;
    *(FScriptContainerElement **)(pFVar17 + 0x30) = local_178.Data.AllocatorInstance.Data;
    *(int *)(pFVar17 + 0x38) = local_178.Data.ArrayNum;
    *(int *)(pFVar17 + 0x3c) = local_178.Data.ArrayMax;
    *(undefined8 *)(pFVar17 + 0x40) = 0;
    *(FScriptContainerElement **)(pFVar17 + 0x40) = local_168.Data.AllocatorInstance.Data;
    *(int *)(pFVar17 + 0x48) = local_168.Data.ArrayNum;
    *(int *)(pFVar17 + 0x4c) = local_168.Data.ArrayMax;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar10 = false;
  }
  FCompositeBuffer::~FCompositeBuffer(&local_c8);
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  return bVar10;
}

// CompileShaderInternal @ 145e4e630

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FInternalShaderCompilerFunctions::CompileShaderInternal
          (IShaderFormat *param_1,FShaderCompileJob *param_2,FString *param_3,FString *param_4,
          FString *param_5,int *param_6)

{
  TUniquePtr<FShaderCompilerOutput,TDefaultDelete<FShaderCompilerOutput>_> *pTVar1;
  ECompressionLevel EVar2;
  ECompressor EVar3;
  FName FVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  FShaderCompilerOutput *pFVar13;
  FShaderCompilerOutput *pFVar14;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  FCompressedBuffer local_a8;
  FCompressedBuffer local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  
  QueryPerformanceCounter(&local_b8);
  dVar6 = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (((param_2->PreprocessOutput).bSucceeded == false) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Job.PreprocessOutput.GetSucceeded()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                          ,0x7c3,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_>::
  Append<FShaderCompilerError,TSizedDefaultAllocator<32>_>
            (&(param_2->Output).Errors,&(param_2->PreprocessOutput).Errors);
  pFVar14 = (FShaderCompilerOutput *)0x0;
  if ((param_2->SecondaryPreprocessOutput).Ptr != (FShaderPreprocessOutput *)0x0) {
    pFVar13 = ::operator_new(0x1c8);
    if (pFVar13 != (FShaderCompilerOutput *)0x0) {
      pFVar14 = FShaderCompilerOutput::FShaderCompilerOutput(pFVar13);
    }
    pTVar1 = &param_2->SecondaryOutput;
    if (pTVar1 == (TUniquePtr<FShaderCompilerOutput,TDefaultDelete<FShaderCompilerOutput>_> *)
                  &local_78) {
      if (pFVar14 != (FShaderCompilerOutput *)0x0) {
        FShaderCompilerOutput::~FShaderCompilerOutput(pFVar14);
        ::operator_delete(pFVar14,0x1c8);
      }
    }
    else {
      pFVar13 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar14;
      if (pFVar13 != (FShaderCompilerOutput *)0x0) {
        FShaderCompilerOutput::~FShaderCompilerOutput(pFVar13);
        ::operator_delete(pFVar13,0x1c8);
      }
    }
  }
  InvokeCompile(param_1,param_2,param_3,param_4,param_5);
  pFVar14 = (param_2->SecondaryOutput).Ptr;
  if (pFVar14 != (FShaderCompilerOutput *)0x0) {
    if (((param_2->Output).bSucceeded == false) || (pFVar14->bSucceeded == false)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    (param_2->Output).bSucceeded = bVar11;
    (pFVar14->Target).field0_0x0 = (param_2->Input).Target.field0_0x0;
    pFVar14 = (param_2->SecondaryOutput).Ptr;
    uVar7 = *(undefined8 *)((param_2->Input).Hash.Hash + 8);
    local_a8.CompressedData.Segments.AllocatorInstance.InlineData[0] = '\0';
    local_a8.CompressedData.Segments.AllocatorInstance.InlineData[1] = '\0';
    local_a8.CompressedData.Segments.AllocatorInstance.InlineData[2] = '\0';
    local_a8.CompressedData.Segments.AllocatorInstance.InlineData[3] = '\0';
    local_a8.CompressedData.Segments.AllocatorInstance.InlineData[4] = '\0';
    local_a8.CompressedData.Segments.AllocatorInstance.InlineData[5] = '\0';
    local_a8.CompressedData.Segments.AllocatorInstance.InlineData[6] = '\0';
    local_a8.CompressedData.Segments.AllocatorInstance.InlineData[7] = '\0';
    uVar8 = *(undefined8 *)((param_2->Input).Hash.Hash + 0x10);
    uVar9 = *(undefined8 *)((param_2->Input).Hash.Hash + 0x18);
    local_a8.CompressedData.Segments.AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    *(undefined8 *)(pFVar14->ValidateInputHash).Hash = *(undefined8 *)(param_2->Input).Hash.Hash;
    *(undefined8 *)((pFVar14->ValidateInputHash).Hash + 8) = uVar7;
    local_a8.CompressedData.Segments.ArrayNum = 0;
    *(undefined8 *)((pFVar14->ValidateInputHash).Hash + 0x10) = uVar8;
    *(undefined8 *)((pFVar14->ValidateInputHash).Hash + 0x18) = uVar9;
    local_a8.CompressedData.Segments.ArrayMax = 1;
    FShaderCode::FinalizeShaderCode(&((param_2->SecondaryOutput).Ptr)->ShaderCode,&local_a8);
    pFVar14 = (param_2->SecondaryOutput).Ptr;
    if (pFVar14->bSucceeded != false) {
      FShaderCompilerOutput::GenerateOutputHash(pFVar14);
    }
    bVar11 = (param_2->Output).bSucceeded;
    bVar12 = CombineCodeOutputs(param_1,param_2);
    (param_2->Output).bSucceeded = (bool)(bVar12 & bVar11);
  }
  uVar7 = *(undefined8 *)(param_2->Input).Hash.Hash;
  uVar8 = *(undefined8 *)((param_2->Input).Hash.Hash + 8);
  uVar9 = *(undefined8 *)((param_2->Input).Hash.Hash + 0x10);
  uVar10 = *(undefined8 *)((param_2->Input).Hash.Hash + 0x18);
  (param_2->Output).Target.field0_0x0 = (param_2->Input).Target.field0_0x0;
  *(undefined8 *)(param_2->Output).ValidateInputHash.Hash = uVar7;
  *(undefined8 *)((param_2->Output).ValidateInputHash.Hash + 8) = uVar8;
  local_90.CompressedData.Segments.AllocatorInstance.InlineData[0] = '\0';
  local_90.CompressedData.Segments.AllocatorInstance.InlineData[1] = '\0';
  local_90.CompressedData.Segments.AllocatorInstance.InlineData[2] = '\0';
  local_90.CompressedData.Segments.AllocatorInstance.InlineData[3] = '\0';
  local_90.CompressedData.Segments.AllocatorInstance.InlineData[4] = '\0';
  local_90.CompressedData.Segments.AllocatorInstance.InlineData[5] = '\0';
  local_90.CompressedData.Segments.AllocatorInstance.InlineData[6] = '\0';
  local_90.CompressedData.Segments.AllocatorInstance.InlineData[7] = '\0';
  *(undefined8 *)((param_2->Output).ValidateInputHash.Hash + 0x10) = uVar9;
  *(undefined8 *)((param_2->Output).ValidateInputHash.Hash + 0x18) = uVar10;
  local_90.CompressedData.Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  local_90.CompressedData.Segments.ArrayNum = 0;
  local_90.CompressedData.Segments.ArrayMax = 1;
  FShaderCode::FinalizeShaderCode(&(param_2->Output).ShaderCode,&local_90);
  bVar11 = FShaderCompilerInput::DumpDebugInfoEnabled(&param_2->Input);
  if ((!bVar11) && ((param_2->Input).ExtraSettings.bExtractShaderSource == false)) {
    ::FString::Empty(&(param_2->Output).ModifiedShaderSource);
    ::FString::Empty(&(param_2->Output).ModifiedEntryPointName);
  }
  if ((param_2->Output).bSucceeded != false) {
    FShaderCompilerOutput::GenerateOutputHash(&param_2->Output);
    FVar4 = (param_2->Input).CompressionFormat;
    if (FVar4 != (FName)0x0) {
      EVar2 = (param_2->Input).OodleLevel;
      EVar3 = (param_2->Input).OodleCompressor;
      local_60 = 0;
      local_70 = 0;
      uStack_68 = 0;
      if ((((*(longlong *)(param_2->Output).OutputHash.Hash == 0) &&
           (*(longlong *)((param_2->Output).OutputHash.Hash + 8) == 0)) &&
          (*(int *)((param_2->Output).OutputHash.Hash + 0x10) == 0)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutputHash != FSHAHash()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                              ,0x627,
                              L"Output hash must be generated before compressing the shader code."),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FShaderCode::Compress(&(param_2->Output).ShaderCode,FVar4,EVar3,EVar2);
    }
  }
  QueryPerformanceCounter(&local_b0);
  (param_2->Output).CompileTime =
       (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar6;
  if (param_6 != (int *)0x0) {
    *param_6 = *param_6 + 1;
  }
  return;
}

// InvokeCompile @ 145e60bd0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FInternalShaderCompilerFunctions::InvokeCompile
          (IShaderFormat *param_1,FShaderCompileJob *param_2,FString *param_3,FString *param_4,
          FString *param_5)

{
  FShaderPreprocessOutput *this;
  code *pcVar1;
  bool bVar2;
  
  FShaderSource::Decompress(&(param_2->PreprocessOutput).PreprocessedSource);
  FShaderSource::Decompress(&(param_2->PreprocessOutput).OriginalPreprocessedSource);
  if ((param_2->SecondaryOutput).Ptr == (FShaderCompilerOutput *)0x0) {
    (**(code **)((longlong)*param_1 + 0x78))
              (param_1,&param_2->Input,&param_2->PreprocessOutput,&param_2->Output,param_3);
  }
  else {
    if ((param_2->SecondaryPreprocessOutput).Ptr == (FShaderPreprocessOutput *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Job.SecondaryPreprocessOutput.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x7a9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this = (param_2->SecondaryPreprocessOutput).Ptr;
    FShaderSource::Decompress(&this->PreprocessedSource);
    FShaderSource::Decompress(&this->OriginalPreprocessedSource);
    (**(code **)((longlong)*param_1 + 0x70))
              (param_1,&param_2->Input,&param_2->PreprocessOutput,
               (param_2->SecondaryPreprocessOutput).Ptr,&param_2->Output,
               (param_2->SecondaryOutput).Ptr,param_3);
  }
  return;
}

// PreprocessShaderInternal @ 145e684a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FInternalShaderCompilerFunctions::PreprocessShaderInternal
          (IShaderFormat *param_1,FShaderCompileJob *param_2,FShaderCompilerEnvironment *param_3)

{
  TUniquePtr<FShaderPreprocessOutput,TDefaultDelete<FShaderPreprocessOutput>_> *pTVar1;
  bool *pbVar2;
  code *pcVar3;
  double dVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  size_t sVar9;
  FShaderPreprocessOutput *pFVar10;
  FShaderPreprocessOutput *this;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [2];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_58;
  longlong local_50 [3];
  
  FVar5.Data = GBreakOnPreprocessJob.Data.AllocatorInstance.Data;
  this = (FShaderPreprocessOutput *)0x0;
  if ((1 < GBreakOnPreprocessJob.Data.ArrayNum) &&
     (GBreakOnPreprocessJob.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    sVar9 = wcslen((wchar_t *)GBreakOnPreprocessJob.Data.AllocatorInstance.Data);
    iVar8 = ::FString::Find(&(param_2->Input).DebugGroupName,(wchar_t *)FVar5.Data,(int)sVar9,
                            IgnoreCase,FromStart,-1);
    if ((iVar8 != -1) && (bVar6 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  QueryPerformanceCounter(&local_res8);
  dVar4 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  bVar6 = (bool)(**(code **)((longlong)*param_1 + 0x68))
                          (param_1,&param_2->Input,param_3,&param_2->PreprocessOutput);
  (param_2->PreprocessOutput).bSucceeded = bVar6;
  QueryPerformanceCounter(local_res10);
  (param_2->PreprocessOutput).PreprocessTime =
       (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4;
  if ((param_2->PreprocessOutput).bSucceeded == false) {
    return;
  }
  cVar7 = (**(code **)((longlong)*param_1 + 0x80))
                    (param_1,&param_2->Input,param_3,&param_2->PreprocessOutput);
  if (cVar7 == '\0') {
    return;
  }
  QueryPerformanceCounter(&local_res20);
  dVar4 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  pFVar10 = ::operator_new(0xd0);
  if (pFVar10 != (FShaderPreprocessOutput *)0x0) {
    this = FShaderPreprocessOutput::FShaderPreprocessOutput(pFVar10);
  }
  pTVar1 = &param_2->SecondaryPreprocessOutput;
  if (pTVar1 == (TUniquePtr<FShaderPreprocessOutput,TDefaultDelete<FShaderPreprocessOutput>_> *)
                local_50) {
    if (this == (FShaderPreprocessOutput *)0x0) goto LAB_145e68633;
    FShaderPreprocessOutput::~FShaderPreprocessOutput(this);
  }
  else {
    pFVar10 = pTVar1->Ptr;
    pTVar1->Ptr = this;
    if (pFVar10 == (FShaderPreprocessOutput *)0x0) goto LAB_145e68633;
    FShaderPreprocessOutput::~FShaderPreprocessOutput(pFVar10);
    this = pFVar10;
  }
  ::operator_delete(this,0xd0);
LAB_145e68633:
  pTVar1->Ptr->bIsSecondary = true;
  bVar6 = (bool)(**(code **)((longlong)*param_1 + 0x68))
                          (param_1,&param_2->Input,param_3,pTVar1->Ptr);
  pTVar1->Ptr->bSucceeded = bVar6;
  QueryPerformanceCounter(&local_58);
  pTVar1->Ptr->PreprocessTime =
       (double)local_58.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4;
  pbVar2 = &(param_2->PreprocessOutput).bSucceeded;
  *pbVar2 = (bool)(*pbVar2 & pTVar1->Ptr->bSucceeded);
  return;
}

// PreprocessShaderInternal @ 145e686c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FInternalShaderCompilerFunctions::PreprocessShaderInternal
          (IShaderFormat *param_1,FShaderCompileJob *param_2)

{
  FShaderCompilerEnvironment *pFVar1;
  undefined8 *puVar2;
  TStringBuilderBase<wchar_t> *this;
  wchar_t *pwVar3;
  undefined1 auStack_358 [32];
  undefined1 local_338 [16];
  TStringView<wchar_t> local_328;
  FShaderCompileJob *local_318;
  undefined1 *local_310;
  undefined1 local_308 [16];
  wchar_t *local_2f8;
  undefined2 local_2f0;
  wchar_t local_2e8 [128];
  wchar_t local_1e8 [232];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_358;
  pFVar1 = &(param_2->Input).Environment;
  if ((param_2->Input).SharedEnvironment.Reference == (FSharedShaderCompilerEnvironment *)0x0) {
    PreprocessShaderInternal(param_1,param_2,pFVar1);
  }
  else {
    FShaderCompilerEnvironment::FShaderCompilerEnvironment
              ((FShaderCompilerEnvironment *)local_308,pFVar1);
    FShaderCompilerEnvironment::Merge
              ((FShaderCompilerEnvironment *)local_308,
               (FShaderCompilerEnvironment *)
               &((param_2->Input).SharedEnvironment.Reference)->field_0x10);
    PreprocessShaderInternal(param_1,param_2,(FShaderCompilerEnvironment *)local_308);
    FShaderCompilerEnvironment::~FShaderCompilerEnvironment((FShaderCompilerEnvironment *)local_308)
    ;
  }
  local_310 = local_338;
  local_338[0] = 1;
  local_328.DataPtr = (wchar_t *)0x0;
  local_328.Size = 0;
  local_328._12_4_ = 0;
  local_318 = param_2;
  `FInternalShaderCompilerFunctions::PreprocessShaderInternal'::__l2::<lambda_1>::operator()
            (&local_318,&param_2->PreprocessOutput,&local_328);
  if ((param_2->SecondaryPreprocessOutput).Ptr != (FShaderPreprocessOutput *)0x0) {
    local_308._0_8_ = local_2e8;
    local_2f0 = 0;
    local_308._8_8_ = local_2e8;
    local_2f8 = local_1e8;
    local_308._8_8_ = FGenericPlatformString::Convert<char,wchar_t>(local_2e8,1,"(",1);
    puVar2 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x88))(param_1,&local_328);
    this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     ((TStringBuilderBase<wchar_t> *)local_308,(wchar_t *)*puVar2,(int)puVar2[1]);
    if (this->End < this->CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(this,2);
    }
    pwVar3 = FGenericPlatformString::Convert<char,wchar_t>(this->CurPos,2,") ",2);
    this->CurPos = pwVar3;
    local_328.Size = (int)((longlong)(local_308._8_8_ - local_308._0_8_) >> 1);
    local_328.DataPtr = (wchar_t *)local_308._0_8_;
    `FInternalShaderCompilerFunctions::PreprocessShaderInternal'::__l2::<lambda_1>::operator()
              (&local_318,(param_2->SecondaryPreprocessOutput).Ptr,&local_328);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_308);
  }
  return (bool)local_338[0];
}

