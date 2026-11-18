// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// ReleaseRHI @ 145cf93a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall GPUMessage::FSystem::ReleaseRHI(FSystem *this)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ForElementType<FRHIGPUBufferReadback_*> FVar9;
  ForElementType<FRHIGPUBufferReadback_*> FVar10;
  undefined1 local_res8 [8];
  ForElementType<FRHIGPUBufferReadback_*> local_res10;
  LPCRITICAL_SECTION local_res18;
  
  local_res18 = (LPCRITICAL_SECTION)&this->AccessCS;
  if (local_res18 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_res18);
  if (this->MessageBuffer != (FRDGBuffer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("MessageBuffer == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GPUMessaging.cpp"
                       ,0xf0,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar10 = (this->MessageReadbackBuffersInUse).AllocatorInstance.SecondaryData;
  iVar3 = (this->MessageReadbackBuffersInUse).ArrayNum;
  if (FVar10 == (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
    FVar10 = (ForElementType<FRHIGPUBufferReadback_*>)&this->MessageReadbackBuffersInUse;
  }
  FVar9 = (ForElementType<FRHIGPUBufferReadback_*>)((longlong)FVar10 + (longlong)iVar3 * 8);
  local_res10 = FVar9;
  while( true ) {
    if ((this->MessageReadbackBuffersInUse).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FRHIGPUBufferReadback_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar10 == FVar9) break;
    puVar4 = *(undefined8 **)FVar10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar7 = puVar4 + 0xb;
      lVar8 = 8;
      do {
        puVar1 = puVar7 + -1;
        puVar7 = puVar7 + -1;
        lVar8 = lVar8 + -1;
        if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)*puVar1);
        }
      } while (lVar8 != 0);
      *puVar4 = &___7FRHIGPUMemoryReadback__6B_;
      if ((FRHIResource *)puVar4[1] != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)puVar4[1]);
      }
      ::operator_delete(puVar4,0x58);
      FVar9 = local_res10;
    }
    FVar10 = (ForElementType<FRHIGPUBufferReadback_*>)((longlong)FVar10 + 8);
  }
  piVar2 = &(this->MessageReadbackBuffersInUse).ArrayMax;
  (this->MessageReadbackBuffersInUse).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_>
              (8,8,0,&(this->MessageReadbackBuffersInUse).AllocatorInstance,0,piVar2);
  }
  FVar10 = (this->MessageReadbackBuffersReady).AllocatorInstance.SecondaryData;
  iVar3 = (this->MessageReadbackBuffersReady).ArrayNum;
  if (FVar10 == (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
    FVar10 = (ForElementType<FRHIGPUBufferReadback_*>)&this->MessageReadbackBuffersReady;
  }
  FVar9 = (ForElementType<FRHIGPUBufferReadback_*>)((longlong)FVar10 + (longlong)iVar3 * 8);
  while( true ) {
    if ((this->MessageReadbackBuffersReady).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FRHIGPUBufferReadback_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    lpCriticalSection = local_res18;
    if (FVar10 == FVar9) break;
    puVar4 = *(undefined8 **)FVar10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar7 = puVar4 + 0xb;
      lVar8 = 8;
      do {
        puVar1 = puVar7 + -1;
        puVar7 = puVar7 + -1;
        lVar8 = lVar8 + -1;
        if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)*puVar1);
        }
      } while (lVar8 != 0);
      *puVar4 = &___7FRHIGPUMemoryReadback__6B_;
      if ((FRHIResource *)puVar4[1] != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)puVar4[1]);
      }
      ::operator_delete(puVar4,0x58);
    }
    FVar10 = (ForElementType<FRHIGPUBufferReadback_*>)((longlong)FVar10 + 8);
  }
  piVar2 = &(this->MessageReadbackBuffersReady).ArrayMax;
  (this->MessageReadbackBuffersReady).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_>
              (8,8,0,&(this->MessageReadbackBuffersReady).AllocatorInstance,0,piVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000145cf95c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// ~FSystem @ 145d0c260

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall GPUMessage::FSystem::~FSystem(FSystem *this)

{
  ForElementType<FRHIGPUBufferReadback_*> FVar1;
  void *pvVar2;
  
  FVar1 = (this->MessageReadbackBuffersReady).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->MessageReadbackBuffersInUse).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  *(undefined4 *)&(this->MessageHandlers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MessageHandlers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TRDGHandle<GPUMessage::FSocket,unsigned_int>,TSharedPtr<GPUMessage::FHandler,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRDGHandle<GPUMessage::FSocket,unsigned_int>,TSharedPtr<GPUMessage::FHandler,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRDGHandle<GPUMessage::FSocket,unsigned_int>,TSharedPtr<GPUMessage::FHandler,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MessageHandlers);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AccessCS);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// BeginMessageScope @ 145d12940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall GPUMessage::FSystem::BeginMessageScope(FSystem *this,FRDGBuilder *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGBuffer *pFVar5;
  FParameters *pFVar6;
  FRDGBufferUAV *pFVar7;
  FGlobalShaderMap *this_00;
  FGlobalShaderType *pFVar8;
  FGlobalShaderMapSection **ppFVar9;
  FShader *pFVar10;
  FName this_01;
  FRDGEventName *pFVar11;
  FShaderParametersMetadata *pFVar12;
  byte bVar13;
  uint uVar14;
  FShader *pFVar15;
  FShader *pFVar16;
  TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_> *pTVar17;
  undefined1 local_res18 [16];
  FShader *local_d8;
  FRDGBufferUAVDesc local_d0;
  TIntVector3<int>_u_0 local_b8;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  TShaderRefBase<FClearMessageBufferCS,FShaderMapPointerTable> local_90;
  FRDGBufferDesc local_80;
  FString local_68;
  FRDGEventName local_58;
  
  pFVar16 = (FShader *)0x0;
  if ((this->MessageBuffer != (FRDGBuffer *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MessageBuffer == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GPUMessaging.cpp"
                         ,0x4a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lpCriticalSection = &this->AccessCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  PollMessages(this);
  if (*(int *)&(this->MessageHandlers).field_0x8 == *(int *)&(this->MessageHandlers).field_0x34)
  goto LAB_145d12cc8;
  uVar14 = GMaxBufferSize << 10;
  uStack_a0 = 0x10109;
  local_a8 = 4;
  local_80.NumElements = uVar14;
  local_80.BytesPerElement = 4;
  local_98 = 0;
  local_80._12_4_ = uStack_9c;
  local_80.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
  local_80.Metadata = (FShaderParametersMetadata *)0x0;
  uStack_a4 = uVar14;
  pFVar5 = FRDGBuilder::CreateBuffer(param_1,&local_80,L"GPUMessageManager.MessageBuffer",None);
  this->MessageBuffer = pFVar5;
  pFVar6 = FRDGBlackboard::Create<GPUMessage::FParameters>(&param_1->Blackboard);
  local_d0.Buffer = this->MessageBuffer;
  local_d0._padding_._2_1_ = 0;
  bVar13 = 0;
  if ((((local_d0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar13 = 0x1c;
  }
  local_d0._padding_._0_2_ = (ushort)bVar13;
  pFVar7 = FRDGBuilder::CreateUAV(param_1,&local_d0,None);
  pFVar6->GPUMessageDataBuffer = pFVar7;
  pFVar6->GPUMessageDataBufferSize = uVar14;
  this_00 = GetGlobalShaderMap(GMaxRHIFeatureLevel);
  pFVar8 = FClearMessageBufferCS::GetStaticType();
  ppFVar9 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
            ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                    *)this_00,(FHashedName *)&pFVar8->field_0x30);
  pFVar10 = pFVar16;
  if (ppFVar9 == (FGlobalShaderMapSection **)0x0) {
LAB_145d12ac5:
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
    ::FName::ToString((FName *)this_01,&local_68);
    FClearMessageBufferCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pFVar15 = pFVar16;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar15 = (FShader *)*ppFVar9;
    pFVar10 = FShaderMapContent::GetShader
                        (*(FShaderMapContent **)
                          &(pFVar15->Bindings).BindlessResourceParameters.ArrayNum,
                         (FHashedName *)&pFVar8->field_0x28,0);
    if (pFVar10 == (FShader *)0x0) goto LAB_145d12ac5;
  }
  FClearMessageBufferCS::GetStaticType();
  local_90.ShaderContent = (FClearMessageBufferCS *)pFVar10;
  local_90.ShaderMap = (FShaderMapBase *)pFVar15;
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  if (pFVar10 == (FShader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (pFVar10->Bindings).ResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    (pFVar10->Bindings).Parameters.AllocatorInstance =
         (ForAnyElementType)&___7__TObject_VFParameters_FClearMessageBufferCS___FRDGAllocator__6B_;
    pFVar16 = pFVar10;
  }
  local_d8 = pFVar16;
  if ((((FShader **)param_1->_padding_ <= &local_d8) &&
      (&local_d8 < (FShader **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar4 + 1;
  pTVar17 = &(pFVar16->Bindings).ResourceParameters;
  *(FShader **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_d8;
  pTVar17->AllocatorInstance = (ForAnyElementType)pFVar6->GPUMessageDataBuffer;
  pFVar11 = FRDGEventName::FRDGEventName(&local_58,1,L"ClearGPUMessageBuffer");
  pFVar12 = FClearMessageBufferCS::FParameters::FTypeInfo::GetStructMetadata();
  local_b8._s_0.X = 1;
  local_b8._s_0.Y = 1;
  local_b8._s_0.Z = 1;
  FComputeShaderUtils::AddPass<FClearMessageBufferCS>
            (param_1,pFVar11,Compute,&local_90,pFVar12,(FParameters *)pTVar17,
             (TIntVector3<int> *)&local_b8._s_0);
  if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
  }
LAB_145d12cc8:
                    /* WARNING: Could not recover jumptable at 0x000145d12cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// EndMessageScope @ 145d20e10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall GPUMessage::FSystem::EndMessageScope(FSystem *this,FRDGBuilder *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<FRHIGPUBufferReadback_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FRHIGPUBufferReadback *this_00;
  FName *pFVar5;
  ForElementType<FRHIGPUBufferReadback_*> FVar6;
  int iVar7;
  FName local_res8;
  ForElementType<FRHIGPUBufferReadback_*> local_28 [2];
  
  lpCriticalSection = &this->AccessCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->MessageHandlers).field_0x8 == *(int *)&(this->MessageHandlers).field_0x34) {
    if (this->MessageBuffer != (FRDGBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MessageBuffer == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GPUMessaging.cpp"
                         ,0x6c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  else {
    if (this->MessageBuffer == (FRDGBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MessageBuffer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GPUMessaging.cpp"
                         ,0x70,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = (this->MessageReadbackBuffersReady).ArrayNum;
    if (iVar7 == 0) {
      this_00 = ::operator_new(0x58);
      if (this_00 == (FRHIGPUBufferReadback *)0x0) {
        FVar6 = (ForElementType<FRHIGPUBufferReadback_*>)0x0;
      }
      else {
        pFVar5 = ::FName::FName(&local_res8,L"GPUMessageManager.Readback");
        FVar6 = (ForElementType<FRHIGPUBufferReadback_*>)
                FRHIGPUBufferReadback::FRHIGPUBufferReadback(this_00,*pFVar5);
      }
    }
    else {
      if (iVar7 < 1) {
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
      FVar6 = (this->MessageReadbackBuffersReady).AllocatorInstance.SecondaryData;
      iVar7 = (this->MessageReadbackBuffersReady).ArrayNum;
      if (FVar6 == (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
        FVar6 = (ForElementType<FRHIGPUBufferReadback_*>)&this->MessageReadbackBuffersReady;
      }
      FVar6 = *(ForElementType<FRHIGPUBufferReadback_*> *)
               ((int *)((longlong)FVar6 + -8) + (longlong)iVar7 * 2);
      iVar7 = iVar7 + -1;
      (this->MessageReadbackBuffersReady).ArrayNum = iVar7;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_>
                (8,8,&(this->MessageReadbackBuffersReady).AllocatorInstance,iVar7,
                 &(this->MessageReadbackBuffersReady).ArrayMax);
    }
    local_28[0] = FVar6;
    AddEnqueueCopyPass(param_1,(FRHIGPUBufferReadback *)FVar6,this->MessageBuffer,0);
    FVar6 = (this->MessageReadbackBuffersInUse).AllocatorInstance.SecondaryData;
    pTVar2 = &this->MessageReadbackBuffersInUse;
    if (FVar6 == (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
      FVar6 = (ForElementType<FRHIGPUBufferReadback_*>)pTVar2;
    }
    if (((ulonglong)FVar6 <= local_28) &&
       (local_28 <
        (ForElementType<FRHIGPUBufferReadback_*> *)
        ((longlong)FVar6 + (longlong)(this->MessageReadbackBuffersInUse).ArrayMax * 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = (this->MessageReadbackBuffersInUse).ArrayNum;
    piVar1 = &(this->MessageReadbackBuffersInUse).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->MessageReadbackBuffersInUse).ArrayNum = iVar7 + 1;
    FVar6 = (this->MessageReadbackBuffersInUse).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
      FVar6 = (ForElementType<FRHIGPUBufferReadback_*>)pTVar2;
    }
    *(ForElementType<FRHIGPUBufferReadback_*> *)((longlong)FVar6 + (longlong)iVar7 * 8) =
         local_28[0];
    this->MessageBuffer = (FRDGBuffer *)0x0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PollMessages @ 145d46ac0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall GPUMessage::FSystem::PollMessages(FSystem *this)

{
  void *_Dst;
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  ForElementType<FRHIGPUBufferReadback_*> FVar10;
  uint *puVar11;
  ForElementType<FRHIGPUBufferReadback_*> FVar12;
  undefined1 *puVar13;
  ForElementType<FRHIGPUBufferReadback_*> FVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_108 [2];
  FString local_100;
  FRHIGPUBufferReadback *local_f0;
  int local_e8;
  uint local_e4;
  int local_e0 [2];
  int *local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  int *piStack_c0;
  undefined4 local_b8;
  uint uStack_b4;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  longlong local_58;
  
  uVar17 = 0;
  local_e4 = 0;
  if (0 < (this->MessageReadbackBuffersInUse).ArrayNum) {
    local_d0 = 0;
    do {
      lVar15 = local_d0;
      uVar6 = 0;
      if ((int)uVar17 < (this->MessageReadbackBuffersInUse).ArrayNum) {
        uVar6 = ~uVar17 >> 0x1f;
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
      FVar14 = (this->MessageReadbackBuffersInUse).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FRHIGPUBufferReadback_*>)&this->MessageReadbackBuffersInUse;
      if (FVar14 != (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
        FVar12 = FVar14;
      }
      local_f0 = *(FRHIGPUBufferReadback **)((longlong)FVar12 + lVar15 * 8);
      if (local_f0->_padding_ == 0) {
LAB_145d46bae:
        local_res20[0] = GMaxBufferSize << 10;
        piVar8 = FRHIGPUBufferReadback::Lock(local_f0,GMaxBufferSize << 0xc);
        local_e8 = *piVar8 + 1;
        local_res10[0] = local_res20[0];
        if (local_e8 < local_res20[0]) {
          local_res10[0] = local_e8;
        }
        local_d8 = piVar8;
        if (local_res10[0] != local_e8) {
          local_b0 = &local_e8;
          local_a8 = local_res20;
          `GPUMessage::FSystem::PollMessages'::__l7::<lambda_1>::operator()(&local_b0);
        }
        if (GLogAllMessages != 0) {
          local_100.Data.ArrayNum = 0;
          local_100.Data.ArrayMax = 0;
          local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          ::FString::AppendfImpl(&local_100,L"\nMessage Buffer[0] = %u;\n");
          if (local_res10[0] != local_e8) {
            ::FString::AppendfImpl
                      (&local_100,
                       L"GPU messages size %d exceeded maximum size %d. Results have been truncated.\n"
                      );
          }
          iVar16 = 1;
          if (1 < local_res10[0] + -1) {
            do {
              iVar18 = (local_res10[0] - iVar16) + -2;
              iVar1 = piVar8[(longlong)iVar16 + 1];
              uVar17 = piVar8[iVar16];
              if (iVar1 < iVar18) {
                iVar18 = iVar1;
              }
              ::FString::AppendfImpl(&local_100,L"  Message[Offset: %d, ID: %d, PayloadSize: %d, ");
              if (iVar18 != iVar1) {
                ::FString::AppendfImpl
                          (&local_100,
                           L"!payload size %d exceeds buffer size (ReadOffset=%d, ValidRangeEnd=%d), truncated to %d!, "
                          );
              }
              if (uVar17 == 0xffffffff) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                                   ,0x166,L"");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              if (*(int *)&(this->MessageHandlers).field_0x8 !=
                  *(int *)&(this->MessageHandlers).field_0x34) {
                puVar2 = *(undefined1 **)&(this->MessageHandlers).field_0x40;
                puVar13 = &(this->MessageHandlers).field_0x38;
                if (puVar2 != (undefined1 *)0x0) {
                  puVar13 = puVar2;
                }
                uVar6 = *(uint *)(puVar13 +
                                 (ulonglong)
                                 (*(int *)&(this->MessageHandlers).field_0x48 - 1U & uVar17) * 4);
                if (uVar6 != 0xffffffff) {
                  do {
                    puVar11 = (uint *)((longlong)(int)uVar6 * 0x20 +
                                      *(longlong *)&this->MessageHandlers);
                    if (*puVar11 == uVar17) {
                      puVar9 = puVar11 + 2;
                      if (puVar11 == (uint *)0x0) {
                        puVar9 = (uint *)0x0;
                      }
                      if (puVar9 != (uint *)0x0) {
                        if (*(longlong *)puVar9 == 0) {
                          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L"");
                          if (bVar4) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                        }
                        ::FString::AppendfImpl(&local_100,L"Name: %s]");
                        goto LAB_145d46d52;
                      }
                      break;
                    }
                    uVar6 = puVar11[6];
                  } while (uVar6 != 0xffffffff);
                }
              }
              ::FString::AppendChars(&local_100,L"<Unknown>]",10);
LAB_145d46d52:
              if (0 < iVar18) {
                ::FString::AppendChars(&local_100,L" Payload: { ",0xc);
                lVar15 = (longlong)iVar18;
                if (0 < iVar18) {
                  do {
                    ::FString::AppendfImpl(&local_100,L"%u%s");
                    lVar15 = lVar15 + -1;
                  } while (lVar15 != 0);
                }
                ::FString::AppendChars(&local_100,L" }",2);
                piVar8 = local_d8;
              }
              ::FString::AppendChars(&local_100,L"\n",1);
              iVar16 = iVar16 + 2 + iVar18;
              uVar17 = local_e4;
            } while (iVar16 < local_res10[0] + -1);
          }
          if (4 < (byte)LogGPUMessaging._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`private:_void___cdecl_GPUMessage::FSystem::PollMessages(void)___ptr64'::
                        __l29::LOG_Static,(FLogCategoryBase *)&LogGPUMessaging);
          }
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
        }
        local_res18[0] = 1;
        if (1 < local_res10[0] + -1) {
          do {
            puVar11 = (uint *)0x0;
            local_e0[0] = piVar8[(longlong)local_res18[0] + 1];
            uVar6 = piVar8[local_res18[0]];
            local_108[0] = (local_res10[0] - local_res18[0]) + -2;
            if (local_e0[0] < local_108[0]) {
              local_108[0] = local_e0[0];
            }
            if (local_108[0] != local_e0[0]) {
              local_90 = local_e0;
              local_88 = local_res18;
              local_80 = local_res10;
              local_78 = local_108;
              `GPUMessage::FSystem::PollMessages'::__l48::<lambda_2>::operator()(&local_90);
            }
            if (uVar6 == 0xffffffff) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                                 ,0x166,L"");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            puVar9 = puVar11;
            if (*(int *)&(this->MessageHandlers).field_0x8 !=
                *(int *)&(this->MessageHandlers).field_0x34) {
              puVar2 = *(undefined1 **)&(this->MessageHandlers).field_0x40;
              puVar13 = &(this->MessageHandlers).field_0x38;
              if (puVar2 != (undefined1 *)0x0) {
                puVar13 = puVar2;
              }
              uVar7 = *(uint *)(puVar13 +
                               (ulonglong)(*(int *)&(this->MessageHandlers).field_0x48 - 1U & uVar6)
                               * 4);
              if (uVar7 != 0xffffffff) {
                do {
                  puVar9 = (uint *)((longlong)(int)uVar7 * 0x20 +
                                   *(longlong *)&this->MessageHandlers);
                  if (*puVar9 == uVar6) break;
                  uVar7 = puVar9[6];
                  puVar9 = puVar11;
                } while (uVar7 != 0xffffffff);
              }
            }
            puVar11 = puVar9 + 2;
            if (puVar9 == (uint *)0x0) {
              puVar11 = (uint *)0x0;
            }
            if (puVar11 != (uint *)0x0) {
              if (*(longlong *)puVar11 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L"");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              iStack_c4 = local_108[0];
              local_b8 = 0;
              local_58 = (ulonglong)uStack_b4 << 0x20;
              piStack_c0 = piVar8 + (local_res18[0] + 2);
              iStack_64 = local_108[0];
              local_c8 = uVar6;
              local_68 = uVar6;
              uStack_60 = piStack_c0;
              (**(code **)(**(longlong **)puVar11 + 8))(*(longlong **)puVar11,&local_68);
            }
            local_res18[0] = local_res18[0] + local_108[0] + 2;
          } while (local_res18[0] < local_res10[0] + -1);
        }
        if (local_res18[0] != local_res10[0]) {
          local_a0 = local_res18;
          local_98 = local_res10;
          `GPUMessage::FSystem::PollMessages'::__l7::<lambda_3>::operator()(&local_a0);
        }
        FRHIGPUBufferReadback::Unlock(local_f0);
        uVar6 = 0;
        if ((int)uVar17 < (this->MessageReadbackBuffersInUse).ArrayNum) {
          uVar6 = ~uVar17 >> 0x1f;
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
        FVar14 = (this->MessageReadbackBuffersInUse).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FRHIGPUBufferReadback_*>)&this->MessageReadbackBuffersInUse;
        if (FVar14 != (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
          FVar12 = FVar14;
        }
        _Dst = (void *)((longlong)FVar12 + (longlong)(int)uVar17 * 8);
        iVar16 = ~uVar17 + (this->MessageReadbackBuffersInUse).ArrayNum;
        if (iVar16 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar16 << 3);
        }
        piVar8 = &(this->MessageReadbackBuffersInUse).ArrayNum;
        *piVar8 = *piVar8 + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_>
                  (8,8,&(this->MessageReadbackBuffersInUse).AllocatorInstance,
                   (this->MessageReadbackBuffersInUse).ArrayNum,
                   &(this->MessageReadbackBuffersInUse).ArrayMax);
        FVar14 = (ForElementType<FRHIGPUBufferReadback_*>)&this->MessageReadbackBuffersReady;
        FVar12 = (this->MessageReadbackBuffersReady).AllocatorInstance.SecondaryData;
        FVar10 = FVar14;
        if (FVar12 != (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
          FVar10 = FVar12;
        }
        if ((ulonglong)FVar10 <= &local_f0) {
          FVar10 = FVar14;
          if (FVar12 != (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
            FVar10 = FVar12;
          }
          if (&local_f0 <
              (FRHIGPUBufferReadback **)
              ((longlong)FVar10 + (longlong)(this->MessageReadbackBuffersReady).ArrayMax * 8)) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        iVar16 = (this->MessageReadbackBuffersReady).ArrayNum;
        piVar8 = &(this->MessageReadbackBuffersReady).ArrayMax;
        if (iVar16 == *piVar8) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_>
                             (0x808,(ForElementType<FRHIGPUBufferReadback_*> *)FVar14,piVar8);
        }
        (this->MessageReadbackBuffersReady).ArrayNum = iVar16 + 1;
        FVar12 = (this->MessageReadbackBuffersReady).AllocatorInstance.SecondaryData;
        if (FVar12 != (ForElementType<FRHIGPUBufferReadback_*>)0x0) {
          FVar14 = FVar12;
        }
        *(FRHIGPUBufferReadback **)((longlong)FVar14 + (longlong)iVar16 * 8) = local_f0;
      }
      else {
        if (*(int *)(local_f0->_padding_ + 0x18) == 0) {
          cVar5 = (**(code **)(*(longlong *)local_f0->_padding_ + 0x20))();
          if (cVar5 != '\0') goto LAB_145d46bae;
        }
        local_e4 = uVar17 + 1;
        local_d0 = lVar15 + 1;
        uVar17 = local_e4;
      }
    } while ((int)uVar17 < (this->MessageReadbackBuffersInUse).ArrayNum);
  }
  return;
}

// operator() @ 1504dba40

bool __thiscall `GPUMessage::FSystem::PollMessages'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_606015246900920174>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_606015246900920174>,
                       &`public:___cdecl_`private:_void___cdecl_GPUMessage::FSystem::PollMessages(void)___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504dbad0

bool __thiscall `GPUMessage::FSystem::PollMessages'::__l48::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_606015246900920109>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_606015246900920109>,
                       &`public:___cdecl_`private:_void___cdecl_GPUMessage::FSystem::PollMessages(void)___ptr64'::`48'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504dbb80

bool __thiscall `GPUMessage::FSystem::PollMessages'::__l7::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_606015246900920098>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_606015246900920098>,
                       &`public:___cdecl_`private:_void___cdecl_GPUMessage::FSystem::PollMessages(void)___ptr64'::`7'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

