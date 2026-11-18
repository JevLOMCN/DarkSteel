// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FSceneUniformBuffer @ 1454d4b40

FSceneUniformBuffer * __thiscall FSceneUniformBuffer::FSceneUniformBuffer(FSceneUniformBuffer *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  FSceneUniformBuffer *pFVar9;
  ForElementType<unsigned_int> FVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement local_18 [16];
  
  this_00 = &this->MemberHasBeenSet;
  this->Buffer = (TRDGUniformBuffer<FSceneUniformParameters> *)0x0;
  this->bAnyMemberDirty = false;
  iVar7 = FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.ArrayNum;
  (this->MemberHasBeenSet).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->MemberHasBeenSet).MaxBits = 0x80;
  (this->MemberHasBeenSet).NumBits = iVar7;
  uVar6 = iVar7 + 0x1f;
  uVar12 = uVar6 >> 5;
  if (uVar6 >> 5 != 0) {
    if (4 < uVar12) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar12,4);
      (this->MemberHasBeenSet).MaxBits = uVar12 << 5;
    }
    FVar10 = (this->MemberHasBeenSet).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar10,0,(ulonglong)uVar12 << 2);
    iVar7 = (this->MemberHasBeenSet).NumBits;
    uVar12 = iVar7 >> 0x1f & 0x1f;
    uVar6 = iVar7 + uVar12;
    iVar7 = (uVar6 & 0x1f) - uVar12;
    if (iVar7 != 0) {
      FVar10 = (this->MemberHasBeenSet).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)this_00;
      }
      puVar2 = (uint *)((longlong)FVar10 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  piVar1 = &(this->CachedData).ArrayMax;
  (this->CachedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->CachedData).ArrayNum = 0;
  pFVar8 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  uVar6 = pFVar8->Size;
  uVar11 = (ulonglong)uVar6;
  local_18[0] = (FScriptContainerElement)0x0;
  if (-1 < (int)uVar6) {
    (this->CachedData).ArrayNum = 0;
    if (*piVar1 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar6,&(this->CachedData).AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar6) {
      do {
        pFVar3 = (this->CachedData).AllocatorInstance.Data;
        if (((pFVar3 <= local_18) && (local_18 < pFVar3 + *piVar1)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FSceneUniformBuffer *)(*pcVar4)();
          return pFVar9;
        }
        iVar7 = (this->CachedData).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&(this->CachedData).AllocatorInstance,piVar1);
        }
        (this->CachedData).ArrayNum = iVar7 + 1;
        (this->CachedData).AllocatorInstance.Data[iVar7] = local_18[0];
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    pFVar3 = (this->CachedData).AllocatorInstance.Data;
    if (((FScriptContainerElement *)((ulonglong)(pFVar3 + 0xf) & 0xfffffffffffffff0) != pFVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Align(CachedData.GetData(), 16) == CachedData.GetData()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                           ,0x87,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FSceneUniformBuffer *)(*pcVar4)();
      return pFVar9;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// Get @ 1454f1a90

void * __thiscall FSceneUniformBuffer::Get(FSceneUniformBuffer *this,int param_1,int param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  
  if ((param_1 < 0) ||
     (iVar7 = FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.ArrayNum, iVar7 <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MemberId >= 0 && MemberId < FRegistry::FImpl::MemberInfos.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                       ,0x9f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
    iVar7 = FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.ArrayNum;
  }
  uVar6 = 0;
  if (param_1 < iVar7) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  FVar2.Data = FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.AllocatorInstance.Data;
  if (*(int *)(*(longlong *)
                (FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.AllocatorInstance.Data +
                (longlong)param_1 * 0x50 + 0x18) + 0x3c) != param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MemberInfo.Metadata->GetSize() == ValueSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                       ,0xa1,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  if ((this->CachedData).ArrayNum < *(int *)(FVar2.Data + (longlong)param_1 * 0x50 + 4) + param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(MemberInfo.Offset + ValueSize) <= CachedData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                       ,0xa2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  if ((param_1 < 0) || ((this->MemberHasBeenSet).NumBits <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  FVar8 = (this->MemberHasBeenSet).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->MemberHasBeenSet;
  }
  if ((*(uint *)((longlong)FVar8 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (param_1 & 0x1fU) & 1) == 0) {
    pFVar5 = (FScriptContainerElement *)0x0;
  }
  else {
    uVar6 = *(uint *)(FVar2.Data + (longlong)param_1 * 0x50 + 4);
    uVar9 = 0;
    if ((int)uVar6 < (this->CachedData).ArrayNum) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar1)();
        return pvVar4;
      }
    }
    pFVar5 = (this->CachedData).AllocatorInstance.Data + (int)uVar6;
  }
  return pFVar5;
}

// GetBuffer @ 1454f1df0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGUniformBuffer<FSceneUniformParameters> * __thiscall
FSceneUniformBuffer::GetBuffer(FSceneUniformBuffer *this,FRDGBuilder *param_1)

{
  int *piVar1;
  uint *puVar2;
  ForElementType<unsigned_int> FVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  FShaderParametersMetadata *pFVar15;
  FScriptContainerElement *pFVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  uint uVar19;
  FSceneUniformParameters *_Dst;
  longlong lVar20;
  FScriptContainerElement *local_res8;
  FRDGBuilder *local_res10;
  longlong local_res18;
  undefined8 *local_48 [2];
  
  local_res10 = param_1;
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                         ,0xc0,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TRDGUniformBuffer<FSceneUniformParameters> *)(*pcVar6)();
    return pTVar12;
  }
  pTVar12 = this->Buffer;
  if ((pTVar12 == (TRDGUniformBuffer<FSceneUniformParameters> *)0x0) ||
     (this->bAnyMemberDirty != false)) {
    uVar18 = 0;
    if (0 < FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.ArrayNum) {
      uVar19 = 1;
      lVar20 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar18 < FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.ArrayNum) {
          uVar9 = ~uVar18 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TRDGUniformBuffer<FSceneUniformParameters> *)(*pcVar6)();
          return pTVar12;
        }
        FVar7.Data = FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.AllocatorInstance.Data;
        if ((((int)uVar18 < 0) || ((this->MemberHasBeenSet).NumBits <= (int)uVar18)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TRDGUniformBuffer<FSceneUniformParameters> *)(*pcVar6)();
          return pTVar12;
        }
        FVar3 = (this->MemberHasBeenSet).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<unsigned_int>)&this->MemberHasBeenSet;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar17 = FVar3;
        }
        local_res18 = (longlong)((int)(uVar18 + ((int)uVar18 >> 0x1f & 0x1fU)) >> 5);
        if ((*(uint *)((longlong)FVar17 + local_res18 * 4) & uVar19) == 0) {
          uVar9 = *(uint *)(FVar7.Data + lVar20 + 4);
          uVar10 = 0;
          if ((int)uVar9 < (this->CachedData).ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TRDGUniformBuffer<FSceneUniformParameters> *)(*pcVar6)();
            return pTVar12;
          }
          pFVar16 = (this->CachedData).AllocatorInstance.Data;
          if (((uint)(this->CachedData).ArrayNum <
               (uint)(*(int *)(*(longlong *)(FVar7.Data + lVar20 + 0x18) + 0x3c) +
                     *(int *)(FVar7.Data + lVar20 + 4))) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(MemberInfo.Offset + MemberInfo.Metadata->GetSize()) <= static_cast<uint32>(CachedData.Num())"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                                 ,0xcb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TRDGUniformBuffer<FSceneUniformParameters> *)(*pcVar6)();
            return pTVar12;
          }
          uVar4 = *(undefined8 *)(FVar7.Data + lVar20 + 0x18);
          local_res8 = pFVar16 + (int)uVar9;
          UE::Core::Private::Function::CheckCallable(*(void **)(FVar7.Data + lVar20 + 0x20));
          pcVar6 = *(code **)(FVar7.Data + lVar20 + 0x20);
          pFVar16 = FVar7.Data + lVar20 + 0x30;
          if (*(FScriptContainerElement **)(FVar7.Data + lVar20 + 0x48) !=
              (FScriptContainerElement *)0x0) {
            pFVar16 = *(FScriptContainerElement **)(FVar7.Data + lVar20 + 0x48);
          }
          uVar13 = (**(code **)(*(longlong *)pFVar16 + 8))();
          (*pcVar6)(uVar13,&local_res8,uVar4,local_res10);
          if ((((int)uVar18 < 0) || ((this->MemberHasBeenSet).NumBits <= (int)uVar18)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TRDGUniformBuffer<FSceneUniformParameters> *)(*pcVar6)();
            return pTVar12;
          }
          FVar3 = (this->MemberHasBeenSet).AllocatorInstance.SecondaryData;
          FVar17 = (ForElementType<unsigned_int>)&this->MemberHasBeenSet;
          if (FVar3 != (ForElementType<unsigned_int>)0x0) {
            FVar17 = FVar3;
          }
          puVar2 = (uint *)((longlong)FVar17 + local_res18 * 4);
          *puVar2 = *puVar2 | uVar19;
        }
        uVar18 = uVar18 + 1;
        uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
        lVar20 = lVar20 + 0x50;
        param_1 = local_res10;
      } while ((int)uVar18 < FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.ArrayNum);
    }
    puVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1010,0x10);
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TRDGUniformBuffer<FSceneUniformParameters> *)(*pcVar6)();
        return pTVar12;
      }
    }
    else {
      *puVar14 = &___7__TObject_VFSceneUniformParameters___FRDGAllocator__6B_;
    }
    local_48[0] = puVar14;
    if ((((undefined8 **)param_1->_padding_ <= local_48) &&
        (local_48 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
        ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TRDGUniformBuffer<FSceneUniformParameters> *)(*pcVar6)();
      return pTVar12;
    }
    iVar11 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    _Dst = (FSceneUniformParameters *)(puVar14 + 2);
    *(int *)&param_1->_padding_ = iVar11 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar11 * 8) = local_48[0];
    memcpy(_Dst,(this->CachedData).AllocatorInstance.Data,(longlong)(this->CachedData).ArrayNum);
    pFVar15 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateCreateUniformBuffer(&param_1->UserValidation,_Dst,pFVar15);
    pFVar15 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
    pwVar5 = pFVar15->ShaderVariableName;
    pTVar12 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
    pTVar12 = TRDGUniformBuffer<FSceneUniformParameters>::TRDGUniformBuffer<FSceneUniformParameters>
                        (pTVar12,_Dst,pwVar5);
    piVar1 = &(param_1->UniformBuffers).Array.ArrayMax;
    iVar11 = (param_1->UniformBuffers).Array.ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_>
                         (0x808,(ForElementType<FRDGUniformBuffer_*> *)&param_1->UniformBuffers,
                          piVar1);
    }
    (param_1->UniformBuffers).Array.ArrayNum = iVar11 + 1;
    (param_1->UniformBuffers).Array.AllocatorInstance.Data[iVar11] = (FRDGUniformBuffer *)pTVar12;
    *(int *)&pTVar12->_padding_ = (param_1->UniformBuffers).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateUniformBuffer
              (&param_1->UserValidation,(FRDGUniformBuffer *)pTVar12);
    this->Buffer = pTVar12;
    this->bAnyMemberDirty = false;
  }
  return pTVar12;
}

// GetBufferRHI @ 1454f2260

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIUniformBuffer * __thiscall
FSceneUniformBuffer::GetBufferRHI(FSceneUniformBuffer *this,FRDGBuilder *param_1)

{
  FRHIUniformBuffer *pFVar1;
  
  GetBuffer(this,param_1);
  pFVar1 = FRDGBuilder::ConvertToExternalUniformBuffer(param_1,(FRDGUniformBuffer *)this->Buffer);
  return pFVar1;
}

// GetDebugInfo @ 1454f27e0

TArray<FSceneUniformBuffer::FDebugMemberInfo,TSizedDefaultAllocator<32>_> * __thiscall
FSceneUniformBuffer::GetDebugInfo
          (FSceneUniformBuffer *this,
          TArray<FSceneUniformBuffer::FDebugMemberInfo,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<FSceneUniformBuffer::FDebugMemberInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FShaderParametersMetadata *local_res20;
  FString local_78;
  FString local_68;
  FScriptContainerElement *local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res20 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  local_res18 = (local_res20->Members).ArrayNum;
  uVar10 = (ulonglong)(int)local_res18;
  pFVar13 = (local_res20->Members).AllocatorInstance.Data;
  pFVar12 = pFVar13 + uVar10 * 0x30;
  while( true ) {
    if ((local_res20->Members).ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar12) break;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    ::FString::operator=(&local_78,*(wchar_t **)(pFVar13 + 8));
    ::FString::operator=(&local_68,*(wchar_t **)pFVar13);
    uVar1 = *(uint *)(pFVar13 + 0x14);
    uVar6 = 0;
    if ((int)uVar1 < (this->CachedData).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<FSceneUniformBuffer::FDebugMemberInfo,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_58 = (this->CachedData).AllocatorInstance.Data + (int)uVar1;
    if ((pFVar2 <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 <
        pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x28)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<FSceneUniformBuffer::FDebugMemberInfo,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar4.Data = local_78.Data.AllocatorInstance.Data;
    lVar9 = (longlong)iVar7;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar9 * 0x28) = 0;
    lVar11 = (longlong)local_78.Data.ArrayNum;
    *(int *)(pFVar2 + lVar9 * 0x28 + 8) = local_78.Data.ArrayNum;
    pFVar2 = pFVar2 + lVar9 * 0x28;
    if (local_78.Data.ArrayNum == 0) {
      *(int *)(pFVar2 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)pFVar2,local_78.Data.ArrayNum,
                 (int *)(pFVar2 + 0xc));
      memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,FVar4.Data,lVar11 * 2);
    }
    FVar4.Data = local_68.Data.AllocatorInstance.Data;
    *(FScriptContainerElement **)&pFVar2[0x10].field_0x0 = (FScriptContainerElement *)0x0;
    lVar9 = (longlong)local_68.Data.ArrayNum;
    *(int *)&pFVar2[0x18].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar2 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)(pFVar2 + 0x10),
                 local_68.Data.ArrayNum,(int *)(pFVar2 + 0x1c));
      memcpy(*(FScriptContainerElement **)&pFVar2[0x10].field_0x0,FVar4.Data,lVar9 * 2);
    }
    *(FScriptContainerElement **)&pFVar2[0x20].field_0x0 = local_58;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pFVar13 = pFVar13 + 0x30;
    uVar10 = (ulonglong)local_res18;
  }
  return __return_storage_ptr__;
}

// GetOrDefault @ 1454f7450

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FSceneUniformBuffer::GetOrDefault
          (FSceneUniformBuffer *this,int param_1,int param_2,FRDGBuilder *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *local_48 [2];
  
  if ((param_1 < 0) ||
     (iVar6 = FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.ArrayNum, iVar6 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MemberId >= 0 && MemberId < FRegistry::FImpl::MemberInfos.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                       ,0xae,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar3)();
      return pvVar7;
    }
    iVar6 = FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.ArrayNum;
  }
  uVar9 = 0;
  if (param_1 < iVar6) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  FVar4.Data = FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.AllocatorInstance.Data;
  if ((*(int *)(*(longlong *)
                 (FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.AllocatorInstance.Data +
                 (longlong)param_1 * 0x50 + 0x18) + 0x3c) != param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MemberInfo.Metadata->GetSize() == ValueSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                         ,0xb0,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  if (((this->CachedData).ArrayNum < *(int *)(FVar4.Data + (longlong)param_1 * 0x50 + 4) + param_2)
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(MemberInfo.Offset + ValueSize) <= CachedData.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                            ,0xb1,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  uVar9 = *(uint *)(FVar4.Data + (longlong)param_1 * 0x50 + 4);
  uVar11 = 0;
  if ((int)uVar9 < (this->CachedData).ArrayNum) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  pFVar13 = (this->CachedData).AllocatorInstance.Data + (int)uVar9;
  if (((param_1 < 0) || ((this->MemberHasBeenSet).NumBits <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  FVar12 = (this->MemberHasBeenSet).AllocatorInstance.SecondaryData;
  iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)&this->MemberHasBeenSet;
  }
  if ((*(uint *)((longlong)FVar12 + (longlong)iVar6 * 4) >> (param_1 & 0x1fU) & 1) == 0) {
    if (((uint)(this->CachedData).ArrayNum <
         (uint)(*(int *)(*(longlong *)(FVar4.Data + (longlong)param_1 * 0x50 + 0x18) + 0x3c) +
               *(int *)(FVar4.Data + (longlong)param_1 * 0x50 + 4))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(MemberInfo.Offset + MemberInfo.Metadata->GetSize()) <= static_cast<uint32>(CachedData.Num())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                           ,0xb6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar3)();
      return pvVar7;
    }
    uVar2 = *(undefined8 *)(FVar4.Data + (longlong)param_1 * 0x50 + 0x18);
    local_48[0] = pFVar13;
    UE::Core::Private::Function::CheckCallable
              (*(void **)(FVar4.Data + (longlong)param_1 * 0x50 + 0x20));
    pcVar3 = *(code **)(FVar4.Data + (longlong)param_1 * 0x50 + 0x20);
    pFVar10 = FVar4.Data + (longlong)param_1 * 0x50 + 0x30;
    if (*(FScriptContainerElement **)(FVar4.Data + (longlong)param_1 * 0x50 + 0x48) !=
        (FScriptContainerElement *)0x0) {
      pFVar10 = *(FScriptContainerElement **)(FVar4.Data + (longlong)param_1 * 0x50 + 0x48);
    }
    uVar8 = (**(code **)(*(longlong *)pFVar10 + 8))();
    (*pcVar3)(uVar8,local_48,uVar2,param_3);
    if (((param_1 < 0) || ((this->MemberHasBeenSet).NumBits <= param_1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar3)();
      return pvVar7;
    }
    FVar12 = (this->MemberHasBeenSet).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<unsigned_int>)0x0) {
      FVar12 = (ForElementType<unsigned_int>)&this->MemberHasBeenSet;
    }
    puVar1 = (uint *)((longlong)FVar12 + (longlong)iVar6 * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  }
  return pFVar13;
}

// Set @ 145504b70

bool __thiscall
FSceneUniformBuffer::Set(FSceneUniformBuffer *this,int param_1,void *param_2,int param_3)

{
  uint *puVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *_Buf1;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  
  if ((param_1 < 0) ||
     (iVar6 = FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.ArrayNum, iVar6 <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MemberId >= 0 && MemberId < FRegistry::FImpl::MemberInfos.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                       ,0x8c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    iVar6 = FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.ArrayNum;
  }
  uVar7 = 0;
  if (param_1 < iVar6) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FVar3.Data = FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.AllocatorInstance.Data;
  if ((*(int *)(*(longlong *)
                 (FSceneUniformBufferTypeRegistry::FImpl::MemberInfos.AllocatorInstance.Data +
                 (longlong)param_1 * 0x50 + 0x18) + 0x3c) != param_3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MemberInfo.Metadata->GetSize() == ValueSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                         ,0x8e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (((this->CachedData).ArrayNum < *(int *)(FVar3.Data + (longlong)param_1 * 0x50 + 4) + param_3)
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(MemberInfo.Offset + ValueSize) <= CachedData.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                            ,0x8f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (((param_1 < 0) || ((this->MemberHasBeenSet).NumBits <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FVar8 = (this->MemberHasBeenSet).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->MemberHasBeenSet;
  }
  puVar1 = (uint *)((longlong)FVar8 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  uVar7 = *(uint *)(FVar3.Data + (longlong)param_1 * 0x50 + 4);
  uVar9 = 0;
  if ((int)uVar7 < (this->CachedData).ArrayNum) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  _Buf1 = (this->CachedData).AllocatorInstance.Data + (int)uVar7;
  iVar6 = memcmp(_Buf1,param_2,(longlong)param_3);
  if (iVar6 != 0) {
    this->bAnyMemberDirty = true;
    memcpy(_Buf1,param_2,(longlong)param_3);
  }
  return iVar6 != 0;
}

