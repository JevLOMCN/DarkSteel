// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FStreamingPageUploader @ 147fa5570

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStreamingPageUploader * __thiscall
Nanite::FStreamingPageUploader::FStreamingPageUploader(FStreamingPageUploader *this)

{
  (this->ClusterInstallInfoUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->PageUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->PageDependenciesBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->AddedPageInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddedPageInfos).ArrayNum = 0;
  (this->AddedPageInfos).ArrayMax = 0;
  *(undefined8 *)&this->GPUPageKeyToAddedIndex = 0;
  *(undefined8 *)&(this->GPUPageKeyToAddedIndex).field_0x8 = 0;
  *(undefined8 *)&(this->GPUPageKeyToAddedIndex).field_0x20 = 0;
  *(undefined4 *)&(this->GPUPageKeyToAddedIndex).field_0x28 = 0;
  *(undefined4 *)&(this->GPUPageKeyToAddedIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->GPUPageKeyToAddedIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GPUPageKeyToAddedIndex).field_0x34 = 0;
  *(undefined8 *)&(this->GPUPageKeyToAddedIndex).field_0x40 = 0;
  *(undefined4 *)&(this->GPUPageKeyToAddedIndex).field_0x48 = 0;
  (this->FlattenedPageDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlattenedPageDependencies).ArrayNum = 0;
  (this->FlattenedPageDependencies).ArrayMax = 0;
  (this->PassInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassInfos).ArrayNum = 0;
  (this->PassInfos).ArrayMax = 0;
  ResetState(this);
  return this;
}

// Add_GetRef @ 147fb2ce0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar * __thiscall
Nanite::FStreamingPageUploader::Add_GetRef
          (FStreamingPageUploader *this,uint param_1,uint param_2,uint param_3,FPageKey *param_4,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FPageKey *pFVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uchar *puVar9;
  uint local_res10 [2];
  TPairInitializer<Nanite::FPageKey_const_&,unsigned_int_const_&> local_res18;
  FPageKey *local_48;
  uint *local_40;
  
  if ((param_1 & 3) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(PageSize, 4)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteStreamingPageUploader.cpp"
                       ,0xa8,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      puVar9 = (uchar *)(*pcVar5)();
      return puVar9;
    }
  }
  if ((param_3 & 3) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(DstPageOffset, 4)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteStreamingPageUploader.cpp"
                       ,0xa9,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      puVar9 = (uchar *)(*pcVar5)();
      return puVar9;
    }
  }
  local_res10[0] = (this->AddedPageInfos).ArrayNum;
  if (this->MaxPages <= local_res10[0]) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PageIndex < MaxPages",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteStreamingPageUploader.cpp"
                       ,0xad,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      puVar9 = (uchar *)(*pcVar5)();
      return puVar9;
    }
  }
  if (this->MaxPageBytes < this->NextPageByteOffset + param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextPageByteOffset + PageSize <= MaxPageBytes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteStreamingPageUploader.cpp"
                       ,0xae,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      puVar9 = (uchar *)(*pcVar5)();
      return puVar9;
    }
  }
  iVar7 = (this->AddedPageInfos).ArrayNum;
  piVar1 = &(this->AddedPageInfos).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x424,&(this->AddedPageInfos).AllocatorInstance,piVar1);
  }
  (this->AddedPageInfos).ArrayNum = iVar7 + 1;
  pFVar3 = (FPageKey *)((this->AddedPageInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x24);
  DefaultConstructItems<Nanite::FStreamingPageUploader::FAddedPageInfo,int>(pFVar3,1);
  pTVar2 = &this->FlattenedPageDependencies;
  *pFVar3 = *param_4;
  uVar4 = this->NextPageByteOffset;
  pFVar3[1].PageIndex = param_3;
  piVar1 = &(this->FlattenedPageDependencies).ArrayNum;
  pFVar3[1].RuntimeResourceID = uVar4;
  pFVar3[2].RuntimeResourceID = *piVar1;
  pFVar3[2].PageIndex = param_5->ArrayNum;
  pFVar3[3].RuntimeResourceID = this->NextClusterIndex;
  pFVar3[3].PageIndex = param_2;
  pFVar3[4].RuntimeResourceID = 0xffffffff;
  if (pTVar2 == param_5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      puVar9 = (uchar *)(*pcVar5)();
      return puVar9;
    }
  }
  iVar7 = param_5->ArrayNum;
  if (iVar7 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar7,&pTVar2->AllocatorInstance,piVar1,
                       &(this->FlattenedPageDependencies).ArrayMax);
    memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4,(param_5->AllocatorInstance).Data,
           (longlong)iVar7 << 2);
  }
  local_40 = local_res10;
  local_48 = param_4;
  TSet<TTuple<Nanite::FPageKey,unsigned_int>,TDefaultMapHashableKeyFuncs<Nanite::FPageKey,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<Nanite::FPageKey_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<Nanite::FPageKey,unsigned_int>,TDefaultMapHashableKeyFuncs<Nanite::FPageKey,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->GPUPageKeyToAddedIndex,&local_res18,(bool *)&local_48);
  uVar4 = this->NextPageByteOffset;
  this->NextClusterIndex = this->NextClusterIndex + param_2;
  this->NextPageByteOffset = uVar4 + param_1;
  return this->PageDataPtr + uVar4;
}

// Init @ 147fde0e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FStreamingPageUploader::Init
          (FStreamingPageUploader *this,FRDGBuilder *param_1,uint param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  FRDGPooledBuffer *pFVar3;
  FRHIBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *pTVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uchar *puVar10;
  uint uVar11;
  FRDGBufferDesc local_30;
  
  ResetState(this);
  pFVar3 = (this->PageUploadBuffer).Reference;
  this->MaxPages = param_2;
  uVar11 = 0x10;
  if (0x10 < param_3) {
    uVar11 = param_3;
  }
  lVar9 = 0;
  this->MaxPageBytes = uVar11;
  this->MaxStreamingPages = param_4;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    pFVar4 = (pFVar3->Buffer).Reference;
    uVar11 = ((uint)((ulonglong)pFVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar4 >> 4)) *
             -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
    ::FindIdByHash((TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
                    *)&param_1->ExternalBuffers,(FHashType)(uint)&param_4,
                   (FRHIBuffer **)(ulonglong)((uVar11 >> 0x10 ^ uVar11) & 0x7fffffff));
    if (param_4 != 0xffffffff) {
      pTVar7 = Experimental::RobinHoodHashTable_Private::
               TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
               ::FData::Get((FData *)&param_1->ExternalBuffers,param_4);
      puVar8 = &(pTVar7->Pair).field_0x8;
      if (puVar8 != (undefined1 *)0x0) {
        lVar9 = *(longlong *)puVar8;
      }
    }
    if (lVar9 != 0) {
      pFVar3 = (this->PageUploadBuffer).Reference;
      if (pFVar3 != (FRDGPooledBuffer *)0x0) {
        (this->PageUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
        plVar1 = &pFVar3->_padding_;
        LOCK();
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
      pFVar3 = (this->ClusterInstallInfoUploadBuffer).Reference;
      if (pFVar3 != (FRDGPooledBuffer *)0x0) {
        (this->ClusterInstallInfoUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
        plVar1 = &pFVar3->_padding_;
        LOCK();
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
      pFVar3 = (this->PageDependenciesBuffer).Reference;
      if (pFVar3 != (FRDGPooledBuffer *)0x0) {
        (this->PageDependenciesBuffer).Reference = (FRDGPooledBuffer *)0x0;
        plVar1 = &pFVar3->_padding_;
        LOCK();
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
  }
  uVar11 = 1;
  if (this->MaxPageBytes != 0) {
    uVar11 = this->MaxPageBytes;
  }
  uVar2 = (ulonglong)(uVar11 - 1) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  uVar11 = 1 << ((byte)lVar9 & 0x1f);
  if (((uVar11 & 3) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBytes % 4 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                         ,0x427,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_30.NumElements = uVar11 >> 2;
  local_30.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
  local_30.BytesPerElement = 4;
  local_30.Metadata = (FShaderParametersMetadata *)0x0;
  if (GNaniteStreamingDynamicPageUploadBuffer != 0) {
    local_30.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|Dynamic;
  }
  AllocatePooledBuffer(&local_30,&this->PageUploadBuffer,L"Nanite.PageUploadBuffer",Page);
  puVar10 = FRHICommandListBase::LockBuffer
                      ((FRHICommandListBase *)param_1->_padding_,
                       (((this->PageUploadBuffer).Reference)->Buffer).Reference,0,this->MaxPageBytes
                       ,RLM_WriteOnly);
  this->PageDataPtr = puVar10;
  return;
}

// Release @ 147feca90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall Nanite::FStreamingPageUploader::Release(FStreamingPageUploader *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->ClusterInstallInfoUploadBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->ClusterInstallInfoUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->PageUploadBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->PageUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->PageDependenciesBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->PageDependenciesBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  ResetState(this);
  return;
}

// ResetState @ 147fee810

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall Nanite::FStreamingPageUploader::ResetState(FStreamingPageUploader *this)

{
  int *piVar1;
  
  this->PageDataPtr = (uchar *)0x0;
  this->MaxPages = 0;
  this->MaxPageBytes = 0;
  this->NextPageByteOffset = 0;
  this->NextClusterIndex = 0;
  piVar1 = &(this->AddedPageInfos).ArrayMax;
  (this->AddedPageInfos).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,&(this->AddedPageInfos).AllocatorInstance,0,piVar1);
  }
  TSet<TTuple<Nanite::FPageKey,unsigned_int>,TDefaultMapHashableKeyFuncs<Nanite::FPageKey,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<Nanite::FPageKey,unsigned_int>,TDefaultMapHashableKeyFuncs<Nanite::FPageKey,unsigned_int,0>,FDefaultSetAllocator>
           *)&this->GPUPageKeyToAddedIndex);
  (this->FlattenedPageDependencies).ArrayNum = 0;
  if ((this->FlattenedPageDependencies).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FlattenedPageDependencies).AllocatorInstance,0,
               &(this->FlattenedPageDependencies).ArrayMax);
  }
  (this->PassInfos).ArrayNum = 0;
  if ((this->PassInfos).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PassInfos).AllocatorInstance,0,&(this->PassInfos).ArrayMax);
  }
  return;
}

// ResourceUploadTo @ 147feeef0

/* WARNING: Removing unreachable block (ram,0x000147fefc47) */
/* WARNING: Removing unreachable block (ram,0x000147fefc5a) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
Nanite::FStreamingPageUploader::ResourceUploadTo
          (FStreamingPageUploader *this,FRDGBuilder *param_1,FRDGBuffer *param_2)

{
  TArray<Nanite::FStreamingPageUploader::FPassInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 uVar2;
  char cVar3;
  FRDGPooledBuffer *pFVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FRDGScope *this_00;
  uint *puVar12;
  void *_Dst;
  FRDGBufferSRV *pFVar13;
  FRDGBufferSRV *pFVar14;
  FRDGBufferSRV *pFVar15;
  FParameters *pFVar16;
  FGlobalShaderMap *pFVar17;
  TIntVector3<int> *pTVar18;
  FRDGEventName *pFVar19;
  FShaderParametersMetadata *pFVar20;
  FShaderType *pFVar21;
  FName this_01;
  byte bVar22;
  uint *puVar23;
  longlong *plVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  FRDGBufferUAV *pFVar33;
  uint local_res20 [2];
  int local_278;
  undefined1 local_274 [4];
  uint local_270;
  int local_26c;
  uint local_268;
  int local_260;
  int iStack_25c;
  FRDGBufferUAV *local_258;
  int local_250;
  uint uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_240;
  TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
  local_238;
  FRDGBufferUAVDesc local_228;
  TRDGEventScopeGuard<FRDGScope_RHI> local_218;
  char local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  FRDGBufferSRV *local_1f8;
  FRDGBufferSRV *local_1f0;
  FRDGBufferSRV *local_1e8;
  FScriptContainerElement *local_1e0;
  TIntVector3<int>_u_0 local_1d8;
  TIntVector3<int>_u_0 local_1c8;
  FRDGBufferSRVDesc local_1b8;
  FRDGBufferSRVDesc local_198;
  FRDGBufferSRVDesc local_178;
  TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
  local_138;
  undefined1 local_128 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_> local_120;
  TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> local_110;
  FString local_100;
  FRDGBufferDesc local_f0;
  FRDGBufferDesc local_d8;
  uint uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  TIntVector3<int> local_a0;
  FRDGEventName local_90;
  FRDGEventName local_78 [2];
  
  uVar10 = 0;
  local_res20[0] = 0;
  cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_208 = '\0';
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_b0 = 0;
      uStack_ac = 0;
      ::Desc._12_8_ = ZEXT48(uStack_b4);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_Nanite__Transco;
      ::Desc._padding_ = (longlong)u_Nanite__Transco;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0xcd;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```Nanite::FStreamingPageUploader::ResourceUploadTo'::__l7::Desc::operator()<>'::__l3::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_120._Myfirst._Val = &::Desc;
    local_218.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    uVar30 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
    local_218.Scope = this_00;
    if ((3 < uVar30) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar30])(&this_00->Impl);
    FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_>
              ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)param_1,&local_120);
    (this_00->Impl).Impl.TypeIndex = '\x02';
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_208 = '\x01';
  }
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1->_padding_,
             (((this->PageUploadBuffer).Reference)->Buffer).Reference);
  local_26c = (this->AddedPageInfos).ArrayNum;
  if (local_26c != 0) {
    iVar31 = 1;
    if ((this->NextClusterIndex & 0xfffffff) != 0) {
      iVar31 = this->NextClusterIndex << 4;
    }
    uVar30 = (ulonglong)(iVar31 - 1) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar26 = 1 << ((byte)lVar6 & 0x1f);
    local_200 = (undefined4)lVar6;
    pFVar4 = (this->ClusterInstallInfoUploadBuffer).Reference;
    uVar27 = uVar10;
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      uVar27 = (pFVar4->Desc).NumElements * (pFVar4->Desc).BytesPerElement;
    }
    if (uVar27 < uVar26) {
      uStack_248 = 0x10100;
      uStack_24c = uVar26 >> 4;
      local_250 = 0x10;
      local_f0.NumElements = uStack_24c;
      local_f0.BytesPerElement = 0x10;
      local_f0._12_4_ = uStack_244;
      local_f0.Usage = StructuredBuffer|ShaderResource;
      local_240 = 0;
      local_f0.Metadata = (FShaderParametersMetadata *)0x0;
      AllocatePooledBuffer
                (&local_f0,&this->ClusterInstallInfoUploadBuffer,
                 L"Nanite.ClusterInstallInfoUploadBuffer",Page);
    }
    puVar12 = FRHICommandListBase::LockBuffer
                        ((FRHICommandListBase *)param_1->_padding_,
                         (((this->ClusterInstallInfoUploadBuffer).Reference)->Buffer).Reference,0,
                         uVar26,RLM_WriteOnly);
    uVar27 = (this->FlattenedPageDependencies).ArrayNum;
    uVar26 = 0x1000;
    if (0x1000 < (int)uVar27) {
      uVar26 = uVar27;
    }
    iVar31 = 1;
    if ((uVar26 & 0x3fffffff) != 0) {
      iVar31 = uVar26 << 2;
    }
    uVar30 = (ulonglong)(iVar31 - 1) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar27 = 1 << ((byte)lVar6 & 0x1f);
    local_1fc = (undefined4)lVar6;
    pFVar4 = (this->PageDependenciesBuffer).Reference;
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      uVar10 = (pFVar4->Desc).NumElements * (pFVar4->Desc).BytesPerElement;
    }
    if (uVar10 < uVar27) {
      local_250 = 4;
      uStack_248 = 0x10100;
      uStack_24c = uVar27 >> 2;
      local_d8.NumElements = uStack_24c;
      local_d8.BytesPerElement = 4;
      local_d8._12_4_ = uStack_244;
      local_d8.Usage = StructuredBuffer|ShaderResource;
      local_240 = 0;
      local_d8.Metadata = (FShaderParametersMetadata *)0x0;
      AllocatePooledBuffer
                (&local_d8,&this->PageDependenciesBuffer,L"Nanite.PageDependenciesBuffer",Page);
    }
    _Dst = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1->_padding_,
                      (((this->PageDependenciesBuffer).Reference)->Buffer).Reference,0,uVar27,
                      RLM_WriteOnly);
    memcpy(_Dst,(this->FlattenedPageDependencies).AllocatorInstance.Data,
           (longlong)(this->FlattenedPageDependencies).ArrayNum << 2);
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1->_padding_,
               (((this->PageDependenciesBuffer).Reference)->Buffer).Reference);
    if (((this->PassInfos).ArrayNum != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("PassInfos.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteStreamingPageUploader.cpp"
                           ,0xf0,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar31 = 0;
    do {
      local_268 = (this->AddedPageInfos).ArrayNum;
      uVar30 = (ulonglong)(int)local_268;
      pFVar29 = (this->AddedPageInfos).AllocatorInstance.Data;
      uVar10 = (this->PassInfos).ArrayNum;
      local_270 = 0;
      local_278 = 0;
      local_258 = (FRDGBufferUAV *)(pFVar29 + uVar30 * 0x24);
      pFVar33 = local_258;
      uVar27 = 0;
      iVar11 = 0;
      while( true ) {
        if ((this->AddedPageInfos).ArrayNum != (int)uVar30) {
          local_res20[0] = local_res20[0] & 0xffffff00;
          `TCheckedPointerIterator<Nanite::FStreamingPageUploader::FAddedPageInfo,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
          iVar11 = local_278;
        }
        uVar26 = 0;
        if ((FRDGBufferUAV *)pFVar29 == pFVar33) break;
        if (*(uint *)(pFVar29 + 0x20) < uVar10) {
LAB_147fef4b8:
          uVar30 = (ulonglong)local_268;
          pFVar29 = pFVar29 + 0x24;
        }
        else {
          if (*(int *)(pFVar29 + 0x14) != 0) {
            do {
              uVar28 = *(int *)(pFVar29 + 0x10) + uVar26;
              uVar27 = 0;
              if ((int)uVar28 < (this->FlattenedPageDependencies).ArrayNum) {
                uVar27 = ~uVar28 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar11 = *(int *)((this->FlattenedPageDependencies).AllocatorInstance.Data +
                               (longlong)(int)uVar28 * 4);
              if (*(int *)&(this->GPUPageKeyToAddedIndex).field_0x8 !=
                  *(int *)&(this->GPUPageKeyToAddedIndex).field_0x34) {
                puVar5 = *(undefined1 **)&(this->GPUPageKeyToAddedIndex).field_0x40;
                puVar25 = &(this->GPUPageKeyToAddedIndex).field_0x38;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar25 = puVar5;
                }
                iVar32 = *(int *)(puVar25 +
                                 (ulonglong)
                                 (*(int *)&(this->GPUPageKeyToAddedIndex).field_0x48 - 1U &
                                 iVar11 * 0x58399e77 + *(int *)pFVar29 * -0x39feb07) * 4);
                if (iVar32 != -1) {
                  do {
                    lVar6 = *(longlong *)&this->GPUPageKeyToAddedIndex + (longlong)iVar32 * 0x14;
                    if ((*(int *)(*(longlong *)&this->GPUPageKeyToAddedIndex +
                                 (longlong)iVar32 * 0x14) == *(int *)pFVar29) &&
                       (*(int *)(lVar6 + 4) == iVar11)) {
                      if (iVar32 != -1) {
                        puVar23 = (uint *)(lVar6 + 8);
                        if (lVar6 == 0) {
                          puVar23 = (uint *)0x0;
                        }
                        if (puVar23 != (uint *)0x0) {
                          uVar28 = *puVar23;
                          uVar27 = 0;
                          if ((int)uVar28 < (this->AddedPageInfos).ArrayNum) {
                            uVar27 = ~uVar28 >> 0x1f;
                          }
                          if ((uVar27 == 0) &&
                             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar9)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          pFVar33 = local_258;
                          uVar27 = local_270;
                          iVar11 = local_278;
                          if (uVar10 <= *(uint *)((this->AddedPageInfos).AllocatorInstance.Data +
                                                 (longlong)(int)uVar28 * 0x24 + 0x20))
                          goto LAB_147fef4b8;
                        }
                      }
                      break;
                    }
                    iVar32 = *(int *)(lVar6 + 0xc);
                  } while (iVar32 != -1);
                }
              }
              uVar26 = uVar26 + 1;
              uVar27 = local_270;
            } while (uVar26 < *(uint *)(pFVar29 + 0x14));
          }
          *(uint *)(pFVar29 + 0x20) = uVar10;
          if ((0x100 < *(uint *)(pFVar29 + 0x1c)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PageInfo.NumClusters <= ( 1 << ((17 - 9) > (15 - 9) ? (17 - 9) : (15 - 9)))"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteStreamingPageUploader.cpp"
                                 ,0x113,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar28 = 0;
          uVar26 = 0;
          if (*(int *)(pFVar29 + 0x1c) != 0) {
            do {
              uVar26 = iVar31 << 8 | uVar28;
              uVar28 = uVar28 + 1;
              *puVar12 = uVar26;
              puVar12[1] = *(uint *)(pFVar29 + 8);
              puVar12[2] = *(uint *)(pFVar29 + 0xc);
              puVar12[3] = *(uint *)(pFVar29 + 0x10);
              puVar12 = puVar12 + 4;
              uVar26 = *(uint *)(pFVar29 + 0x1c);
            } while (uVar28 < uVar26);
          }
          local_270 = uVar27 + 1;
          local_278 = local_278 + uVar26;
          uVar30 = (ulonglong)local_268;
          iVar31 = iVar31 + 1;
          pFVar29 = pFVar29 + 0x24;
          pFVar33 = local_258;
          uVar27 = local_270;
          iVar11 = local_278;
        }
      }
      pTVar1 = &this->PassInfos;
      pFVar29 = (pTVar1->AllocatorInstance).Data;
      local_260 = uVar27;
      iStack_25c = iVar11;
      if (((pFVar29 <= (FScriptContainerElement *)&local_260) &&
          ((FScriptContainerElement *)&local_260 <
           pFVar29 + (longlong)(this->PassInfos).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (this->PassInfos).ArrayNum;
      if (iVar11 == (this->PassInfos).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar1->AllocatorInstance,&(this->PassInfos).ArrayMax);
      }
      local_26c = local_26c - uVar27;
      (this->PassInfos).ArrayNum = iVar11 + 1;
      *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8) =
           CONCAT44(iStack_25c,local_260);
    } while (local_26c != 0);
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1->_padding_,
               (((this->ClusterInstallInfoUploadBuffer).Reference)->Buffer).Reference);
    local_1b8.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->PageUploadBuffer,None);
    local_1b8._padding_._0_4_ = 0xffffffff;
    local_1b8._padding_._4_4_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_._0_1_ = 0;
    if ((((local_1b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_1b8._padding_._0_1_ = 0x1c;
    }
    pFVar13 = FRDGBuilder::CreateSRV(param_1,&local_1b8);
    local_1e8 = pFVar13;
    local_198.Buffer =
         FRDGBuilder::RegisterExternalBuffer(param_1,&this->ClusterInstallInfoUploadBuffer,None);
    local_198._padding_._0_1_ = 0;
    local_198._padding_._4_4_ = 0;
    local_198._padding_._0_4_ = 0xffffffff;
    local_198._padding_ = 0;
    if ((((local_198.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_198._padding_._0_1_ = 0x1c;
    }
    pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_198);
    local_1f8 = pFVar14;
    local_178.Buffer =
         FRDGBuilder::RegisterExternalBuffer(param_1,&this->PageDependenciesBuffer,None);
    local_178._padding_._0_1_ = 0;
    local_178._padding_._4_4_ = 0;
    local_178._padding_._0_4_ = 0xffffffff;
    local_178._padding_ = 0;
    if ((((local_178.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_178._padding_._0_1_ = 0x1c;
    }
    pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_178);
    bVar22 = 0;
    local_228._padding_._2_1_ = 0;
    if (((param_2->Desc).Usage & DrawIndirect) != None) {
      bVar22 = 0x1c;
    }
    local_228._padding_._0_2_ = (ushort)bVar22;
    local_228.Buffer = param_2;
    local_1f0 = pFVar15;
    local_258 = FRDGBuilder::CreateUAV(param_1,&local_228,None);
    if (((GRHIGlobals.SupportsEfficientAsyncCompute == false) || (GNaniteStreamingAsyncCompute == 0)
        ) || (iVar31 = 4, GNumExplicitGPUsForRendering != 1)) {
      iVar31 = 2;
    }
    local_26c = iVar31;
    if ((GRHIGlobals.SupportsWaveOperations == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("GRHIGlobals.SupportsWaveOperations",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteStreamingPageUploader.cpp"
                           ,0x133,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar8 = CVarNaniteStreamingTranscodeWaveSize.Ref;
    bVar9 = IsInParallelRenderingThread();
    if ((!bVar9) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_238.Tail.DimensionValue = pTVar8->ShadowedValue[1];
    if ((((((local_238.Tail.DimensionValue == 0) ||
           (local_238.Tail.DimensionValue < GRHIGlobals.MinimumWaveSize)) ||
          (GRHIGlobals.MaximumWaveSize < local_238.Tail.DimensionValue)) ||
         ((local_238.Tail.DimensionValue & local_238.Tail.DimensionValue - 1U) != 0)) &&
        ((bVar9 = IsRHIDeviceIntel(), local_238.Tail.DimensionValue = GRHIGlobals.MaximumWaveSize,
         bVar9 && (GRHIGlobals.MinimumWaveSize < 0x11)))) && (0xf < GRHIGlobals.MaximumWaveSize)) {
      local_238.Tail.DimensionValue = 0x10;
    }
    pFVar16 = FRDGBuilder::AllocParameters<Nanite::FTranscodePageToGPU_CS::FParameters>(param_1);
    pFVar16->SrcPageBuffer = pFVar13;
    pFVar16->ClusterInstallInfoBuffer = pFVar14;
    uVar27 = 0;
    pFVar16->PageDependenciesBuffer = pFVar15;
    pFVar16->DstPageBuffer = local_258;
    pFVar16->StartClusterIndex = 0;
    pFVar16->NumClusters = this->NextClusterIndex;
    pFVar16->ZeroUniform = 0;
    uVar10 = this->MaxStreamingPages;
    (pFVar16->PageConstants).field0_0x0._s_0.X = 0;
    (pFVar16->PageConstants).field0_0x0._s_0.Y = uVar10;
    *(undefined8 *)((longlong)&(pFVar16->PageConstants).field0_0x0 + 8) = 0;
    local_238.DimensionValue = 0;
    pFVar17 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    FGlobalShaderMap::GetShader<Nanite::FTranscodePageToGPU_CS>(pFVar17,&local_110,&local_238);
    pTVar18 = FComputeShaderUtils::GetGroupCountWrapped(&local_a0,this->NextClusterIndex);
    uVar2 = *(undefined8 *)&pTVar18->field0_0x0;
    iVar11 = (pTVar18->field0_0x0)._s_0.Z;
    pFVar19 = FRDGEventName::FRDGEventName
                        (&local_90,
                         L"TranscodePageToGPU Independent (ClusterCount: %u, GroupSize: %u)");
    pFVar20 = FTranscodePageToGPU_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_1d8._0_8_ = uVar2;
    local_1d8._s_0.Z = iVar11;
    FComputeShaderUtils::AddPass<Nanite::FTranscodePageToGPU_CS>
              (param_1,pFVar19,(ERDGPassFlags)iVar31,&local_110,pFVar20,pFVar16,
               (TIntVector3<int> *)&local_1d8._s_0);
    if (local_90.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.FormattedEventName.Data.AllocatorInstance.Data);
    }
    local_270 = 0;
    local_268 = (this->PassInfos).ArrayNum;
    if (local_268 != 0) {
      do {
        uVar10 = local_270;
        uVar26 = 0;
        if ((int)uVar27 < (this->PassInfos).ArrayNum) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar29 = (this->PassInfos).AllocatorInstance.Data + (longlong)(int)uVar27 * 8;
        local_1e0 = pFVar29;
        pFVar16 = FRDGBuilder::AllocParameters<Nanite::FTranscodePageToGPU_CS::FParameters>(param_1)
        ;
        pFVar16->ClusterInstallInfoBuffer = local_1f8;
        pFVar16->PageDependenciesBuffer = local_1f0;
        pFVar16->SrcPageBuffer = local_1e8;
        pFVar16->DstPageBuffer = local_258;
        pFVar16->StartClusterIndex = uVar10;
        pFVar16->NumClusters = *(uint *)(pFVar29 + 4);
        iVar31 = 0;
        pFVar16->ZeroUniform = 0;
        uVar10 = this->MaxStreamingPages;
        (pFVar16->PageConstants).field0_0x0._s_0.X = 0;
        (pFVar16->PageConstants).field0_0x0._s_0.Y = uVar10;
        *(undefined8 *)((longlong)&(pFVar16->PageConstants).field0_0x0 + 8) = 0;
        local_238.DimensionValue = 1;
        pFVar17 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                     [(int)GMaxRHIFeatureLevel]);
        if (local_238.Tail.DimensionValue == 4) {
          iVar31 = 5;
        }
        else if (local_238.Tail.DimensionValue == 8) {
          iVar31 = 4;
        }
        else if (local_238.Tail.DimensionValue == 0x10) {
          iVar31 = 3;
        }
        else if (local_238.Tail.DimensionValue == 0x20) {
          iVar31 = 2;
        }
        else if (local_238.Tail.DimensionValue == 0x40) {
          iVar31 = 1;
        }
        else if ((local_238.Tail.DimensionValue != 0x80) &&
                (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                                    ,0x90,L"Unknown shader permutation dimension value %i."), bVar9)
                ) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar21 = (FShaderType *)FTranscodePageToGPU_CS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar17,&local_148,pFVar21,iVar31 * 2);
        if (local_148.ShaderContent == (FShader *)0x0) {
          this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_128);
          ::FName::ToString((FName *)this_01,&local_100);
          FTranscodePageToGPU_CS::GetStaticType();
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        FTranscodePageToGPU_CS::GetStaticType();
        TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
        ::
        TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
                  (&local_138,iVar31 * 2);
        iVar31 = local_138.Tail.DimensionValue;
        if ((iVar31 != 0) &&
           ((iVar31 < GRHIGlobals.MinimumWaveSize || (GRHIGlobals.MaximumWaveSize < iVar31)))) {
          local_274[0] = 0;
          `FGlobalShaderMap::GetShader<Nanite::FTranscodePageToGPU_CS>'::__l2::<lambda_1>::
          operator()(local_274);
        }
        iVar31 = *(int *)(pFVar29 + 4);
        local_158.ShaderContent = (FTranscodePageToGPU_CS *)local_148.ShaderContent;
        local_158.ShaderMap = local_148.ShaderMap;
        if (((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < 0x80) ||
            (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < 0x80)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X >= WrappedGroupStride && GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y >= WrappedGroupStride"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                               ,400,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar10 = 1;
        iVar32 = 1;
        iVar11 = iVar31;
        if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < iVar31) {
          iVar11 = 0x80;
          uVar10 = (int)((iVar31 + 0x7f >> 0x1f & 0x7fU) + iVar31 + 0x7f) >> 7;
        }
        if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < (int)uVar10) {
          iVar32 = uVar10 + 0x7f;
          uVar10 = 0x80;
          iVar32 = (int)((iVar32 >> 0x1f & 0x7fU) + iVar32) >> 7;
        }
        if (((int)(iVar11 * uVar10 * iVar32) < iVar31) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TargetGroupCount <= GroupCount.X * GroupCount.Y * GroupCount.Z",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                               ,0x19f,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar29 = local_1e0;
        local_250 = iVar11;
        uStack_24c = uVar10;
        pFVar19 = FRDGEventName::FRDGEventName
                            (local_78,
                             L"TranscodePageToGPU Dependent (ClusterOffset: %u, ClusterCount: %u, GroupSize: %u)"
                            );
        pFVar20 = FTranscodePageToGPU_CS::FParameters::FTypeInfo::GetStructMetadata();
        local_1c8._0_8_ = CONCAT44(uStack_24c,local_250);
        local_1c8._s_0.Z = iVar32;
        FComputeShaderUtils::AddPass<Nanite::FTranscodePageToGPU_CS>
                  (param_1,pFVar19,(ERDGPassFlags)local_26c,&local_158,pFVar20,pFVar16,
                   (TIntVector3<int> *)&local_1c8._s_0);
        if (local_78[0].FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78[0].FormattedEventName.Data.AllocatorInstance.Data);
        }
        uVar27 = uVar27 + 1;
        local_270 = local_270 + *(int *)(pFVar29 + 4);
      } while (uVar27 < local_268);
    }
    pFVar4 = (this->ClusterInstallInfoUploadBuffer).Reference;
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      (this->ClusterInstallInfoUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar24 = &pFVar4->_padding_;
      LOCK();
      lVar6 = *plVar24;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((((int)lVar6 == 1) && (plVar24 != (longlong *)0x0)) && (pFVar4 != (FRDGPooledBuffer *)0x0)
         ) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
    pFVar4 = (this->PageUploadBuffer).Reference;
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      (this->PageUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar24 = &pFVar4->_padding_;
      LOCK();
      lVar6 = *plVar24;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((((int)lVar6 == 1) && (plVar24 != (longlong *)0x0)) && (pFVar4 != (FRDGPooledBuffer *)0x0)
         ) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
    pFVar4 = (this->PageDependenciesBuffer).Reference;
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      (this->PageDependenciesBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar24 = &pFVar4->_padding_;
      LOCK();
      lVar6 = *plVar24;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((((int)lVar6 == 1) && (plVar24 != (longlong *)0x0)) && (pFVar4 != (FRDGPooledBuffer *)0x0)
         ) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  ResetState(this);
  if (local_208 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_218);
  }
  return;
}

// ~FStreamingPageUploader @ 148446870

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
Nanite::FStreamingPageUploader::~FStreamingPageUploader(FStreamingPageUploader *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FRDGPooledBuffer *pFVar4;
  longlong lVar5;
  
  pFVar2 = (this->PassInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FlattenedPageDependencies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->GPUPageKeyToAddedIndex).field_0x48 = 0;
  pvVar3 = *(void **)&(this->GPUPageKeyToAddedIndex).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<Nanite::FPageKey,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Nanite::FPageKey,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Nanite::FPageKey,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GPUPageKeyToAddedIndex);
  pFVar2 = (this->AddedPageInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar4 = (this->PageDependenciesBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar4 = (this->PageUploadBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar4 = (this->ClusterInstallInfoUploadBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return;
}

