// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// FShaderMapResourceCode @ 145e81b30

FShaderMapResourceCode * __thiscall
FShaderMapResourceCode::FShaderMapResourceCode
          (FShaderMapResourceCode *this,FShaderMapResourceCode *param_1)

{
  TArray<FSHAHash,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FShaderCodeResource,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  FShaderCodeResource *pFVar6;
  undefined8 uVar7;
  
  *(undefined4 *)&this->_padding_ = 0;
  pTVar1 = &this->ShaderHashes;
  this->_padding_ = (longlong)&___7FShaderMapResourceCode__6B_;
  pTVar2 = &this->ShaderCodeResources;
  piVar3 = &(this->ShaderCodeResources).ArrayMax;
  (this->ResourceHash).Hash[0] = '\0';
  (this->ResourceHash).Hash[1] = '\0';
  (this->ResourceHash).Hash[2] = '\0';
  (this->ResourceHash).Hash[3] = '\0';
  (this->ResourceHash).Hash[4] = '\0';
  (this->ResourceHash).Hash[5] = '\0';
  (this->ResourceHash).Hash[6] = '\0';
  (this->ResourceHash).Hash[7] = '\0';
  (this->ResourceHash).Hash[8] = '\0';
  (this->ResourceHash).Hash[9] = '\0';
  (this->ResourceHash).Hash[10] = '\0';
  (this->ResourceHash).Hash[0xb] = '\0';
  (this->ResourceHash).Hash[0xc] = '\0';
  (this->ResourceHash).Hash[0xd] = '\0';
  (this->ResourceHash).Hash[0xe] = '\0';
  (this->ResourceHash).Hash[0xf] = '\0';
  (this->ResourceHash).Hash[0x10] = '\0';
  (this->ResourceHash).Hash[0x11] = '\0';
  (this->ResourceHash).Hash[0x12] = '\0';
  (this->ResourceHash).Hash[0x13] = '\0';
  piVar4 = &(this->ShaderHashes).ArrayMax;
  *piVar3 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ShaderHashes).ArrayNum = 0;
  *piVar4 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ShaderCodeResources).ArrayNum = 0;
  uVar7 = *(undefined8 *)((param_1->ResourceHash).Hash + 8);
  *(undefined8 *)(this->ResourceHash).Hash = *(undefined8 *)(param_1->ResourceHash).Hash;
  *(undefined8 *)((this->ResourceHash).Hash + 8) = uVar7;
  *(undefined4 *)((this->ResourceHash).Hash + 0x10) =
       *(undefined4 *)((param_1->ResourceHash).Hash + 0x10);
  if (pTVar1 != &param_1->ShaderHashes) {
    iVar5 = (param_1->ShaderHashes).ArrayNum;
    _Src = (param_1->ShaderHashes).AllocatorInstance.Data;
    (this->ShaderHashes).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar4 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar5,*piVar4,&pTVar1->AllocatorInstance,iVar5,piVar4);
      if (iVar5 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar5 * 0x14);
      }
    }
  }
  if (pTVar2 != &param_1->ShaderCodeResources) {
    DestructItems<FShaderCodeResource,int>
              ((FShaderCodeResource *)(pTVar2->AllocatorInstance).Data,
               (this->ShaderCodeResources).ArrayNum);
    iVar5 = (param_1->ShaderCodeResources).ArrayNum;
    pFVar6 = (FShaderCodeResource *)(param_1->ShaderCodeResources).AllocatorInstance.Data;
    (this->ShaderCodeResources).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar5,*piVar3,&pTVar2->AllocatorInstance,iVar5,piVar3);
      ConstructItems<FShaderCodeResource,FShaderCodeResource,int>
                ((pTVar2->AllocatorInstance).Data,pFVar6,iVar5);
    }
  }
  return this;
}

// ~FShaderMapResourceCode @ 145e84c60

void __thiscall FShaderMapResourceCode::~FShaderMapResourceCode(FShaderMapResourceCode *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FShaderMapResourceCode__6B_;
  RemoveResourceStats(this);
  DestructItems<FShaderCodeResource,int>
            ((FShaderCodeResource *)(this->ShaderCodeResources).AllocatorInstance.Data,
             (this->ShaderCodeResources).ArrayNum);
  pFVar1 = (this->ShaderCodeResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderHashes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// AddShaderCompilerOutput @ 145e8bb20

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

void __thiscall
FShaderMapResourceCode::AddShaderCompilerOutput
          (FShaderMapResourceCode *this,FShaderCompilerOutput *param_1,FShaderCompileJobKey *param_2
          ,FString *param_3)

{
  TArray<FSHAHash,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FSHAHash *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FShaderCodeResource *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FShaderCodeResource *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  bool bVar15;
  FIdentityFunctor local_res8;
  FString local_58;
  FSHAHash local_48;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId276,"FShaderMapResourceCode::AddShaderCode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderResource.cpp"
               ,0x114);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId276);
  }
  pFVar3 = &param_1->OutputHash;
  FShaderCompileJobKey::ToString(param_2,&local_58);
  local_res8 = SUB81(this,0);
  pTVar1 = &this->ShaderHashes;
  iVar10 = AlgoImpl::LowerBoundInternal<FSHAHash_const_,int,FSHAHash,FIdentityFunctor,TLess<void>_>
                     ((FSHAHash *)(pTVar1->AllocatorInstance).Data,(this->ShaderHashes).ArrayNum,
                      pFVar3,local_res8,(TLess<void>)local_res8);
  local_48.Hash._16_4_ = *(undefined4 *)((param_1->OutputHash).Hash + 0x10);
  local_48.Hash._0_8_ = *(undefined8 *)pFVar3->Hash;
  local_48.Hash._8_8_ = *(undefined8 *)((param_1->OutputHash).Hash + 8);
  lVar14 = (longlong)iVar10;
  pFVar12 = FShaderCode::GetFinalizedResource
                      (&param_1->ShaderCode,
                       *(EShaderFrequency *)&(param_1->Target).field0_0x0 &
                       (SF_NumFrequencies|SF_Pixel),&local_48);
  if (iVar10 < (this->ShaderHashes).ArrayNum) {
    if ((iVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar13 = (pTVar1->AllocatorInstance).Data;
    if (((*(longlong *)(pFVar13 + lVar14 * 0x14) == *(longlong *)pFVar3->Hash) &&
        (*(longlong *)(pFVar13 + lVar14 * 0x14 + 8) == *(longlong *)((param_1->OutputHash).Hash + 8)
        )) && (*(int *)(pFVar13 + lVar14 * 0x14 + 0x10) ==
               *(int *)((param_1->OutputHash).Hash + 0x10))) goto LAB_145e8bdea;
  }
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar13 <= pFVar3) && (pFVar3 < pFVar13 + (longlong)(this->ShaderHashes).ArrayMax * 0x14))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar11 = (this->ShaderHashes).ArrayNum;
  piVar2 = &(this->ShaderHashes).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x414,&pTVar1->AllocatorInstance,piVar2);
  }
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  (this->ShaderHashes).ArrayNum = iVar11 + 1;
  lVar4 = lVar14 * 0x14;
  pFVar13 = pFVar13 + lVar4;
  memmove(pFVar13 + 0x14,pFVar13,(longlong)(iVar11 - iVar10) * 0x14);
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  uVar8 = *(undefined8 *)((param_1->OutputHash).Hash + 8);
  pFVar13 = pFVar5 + lVar4;
  *(undefined8 *)pFVar13 = *(undefined8 *)pFVar3->Hash;
  *(undefined8 *)(pFVar13 + 8) = uVar8;
  *(undefined4 *)(pFVar5 + lVar4 + 0x10) = *(undefined4 *)((param_1->OutputHash).Hash + 0x10);
  pFVar6 = (FShaderCodeResource *)(this->ShaderCodeResources).AllocatorInstance.Data;
  if (((pFVar6 <= pFVar12) && (pFVar12 < pFVar6 + (this->ShaderCodeResources).ArrayMax)) &&
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
  iVar11 = (this->ShaderCodeResources).ArrayNum;
  piVar2 = &(this->ShaderCodeResources).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&(this->ShaderCodeResources).AllocatorInstance,piVar2);
  }
  pFVar13 = (this->ShaderCodeResources).AllocatorInstance.Data;
  (this->ShaderCodeResources).ArrayNum = iVar11 + 1;
  pFVar13 = pFVar13 + lVar14 * 0x28;
  memmove(pFVar13 + 0x28,pFVar13,(longlong)(iVar11 - iVar10) * 0x28);
  FShaderCodeResource::FShaderCodeResource
            ((FShaderCodeResource *)
             ((this->ShaderCodeResources).AllocatorInstance.Data + lVar14 * 0x28),pFVar12);
LAB_145e8bdea:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar13 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  return;
}

// Finalize @ 145e9a640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FShaderMapResourceCode::Finalize(FShaderMapResourceCode *this)

{
  undefined1 auStack_c8 [32];
  FSHA1 local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FSHA1::FSHA1(&local_a8);
  FSHA1::Update(&local_a8,(uchar *)(this->ShaderHashes).AllocatorInstance.Data,
                (longlong)(this->ShaderHashes).ArrayNum * 0x14);
  FSHA1::Final(&local_a8);
  FSHA1::GetHash(&local_a8,(this->ResourceHash).Hash);
  ApplyResourceStats(this);
  FSHA1::~FSHA1(&local_a8);
  return;
}

// FindShaderIndex @ 145e9b720

int __thiscall
FShaderMapResourceCode::FindShaderIndex(FShaderMapResourceCode *this,FSHAHash *param_1)

{
  int iVar1;
  TLess<void> local_res8;
  
  iVar1 = Algo::BinarySearch<TArray<FSHAHash,TSizedDefaultAllocator<32>_>,FSHAHash,TLess<void>_>
                    (&this->ShaderHashes,param_1,local_res8);
  return iVar1;
}

// GetSizeBytes @ 145ea0d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FShaderMapResourceCode::GetSizeBytes(FShaderMapResourceCode *this)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ForElementType<FSharedBuffer> FVar7;
  ulong64 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ForElementType<FSharedBuffer> FVar11;
  int iVar12;
  ForElementType<FSharedBuffer> FVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ForElementType<FSharedBuffer> FVar17;
  undefined1 auStackY_c8 [32];
  undefined1 local_78 [4];
  uint local_74;
  ulonglong local_70;
  ForElementType<FSharedBuffer> local_68;
  ForElementType<FSharedBuffer> local_60;
  ForElementType<FSharedBuffer> local_58;
  FShaderMapResourceCode *local_50;
  FCompositeBuffer local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FVar11 = (ForElementType<FSharedBuffer>)(this->ShaderCodeResources).AllocatorInstance.Data;
  FVar13 = (ForElementType<FSharedBuffer>)((longlong)FVar11 + 8);
  local_74 = (this->ShaderCodeResources).ArrayNum;
  uVar10 = (ulonglong)(int)local_74;
  uVar16 = ((longlong)(this->ShaderHashes).ArrayMax +
           (longlong)(this->ShaderCodeResources).ArrayMax * 2) * 0x14 + 0x48;
  FVar17 = (ForElementType<FSharedBuffer>)((longlong)FVar11 + uVar10 * 0x28);
  local_70 = uVar16;
  local_58 = FVar17;
  local_50 = this;
  do {
    local_68 = FVar11;
    local_60 = FVar13;
    if ((local_50->ShaderCodeResources).ArrayNum != (int)uVar10) {
      local_78[0] = 0;
      `TCheckedPointerIterator<FShaderCodeResource_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (FVar11 == FVar17) {
      if ((0xffffffff < uVar16) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size <= TNumericLimits<uint32>::Max()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderResource.cpp"
                             ,0xfc,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      return (uint)uVar16;
    }
    local_48.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
    local_48.Segments.ArrayNum = 0;
    local_48.Segments.ArrayMax = 1;
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,2,(ForElementType<FSharedBuffer> *)&local_48,0,&local_48.Segments.ArrayMax);
    FVar7 = (ForElementType<FSharedBuffer>)&local_48;
    if (local_48.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = local_48.Segments.AllocatorInstance.SecondaryData;
    }
    if ((ulonglong)FVar7 <= (ulonglong)FVar11) {
      FVar7 = (ForElementType<FSharedBuffer>)&local_48;
      if (local_48.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
        FVar7 = local_48.Segments.AllocatorInstance.SecondaryData;
      }
      if (((ulonglong)FVar11 <
           (ulonglong)((longlong)FVar7 + (longlong)local_48.Segments.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    if (local_48.Segments.ArrayNum == local_48.Segments.ArrayMax) {
      local_48.Segments.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                     (0x808,(ForElementType<FSharedBuffer> *)&local_48,&local_48.Segments.ArrayMax);
    }
    FVar7 = (ForElementType<FSharedBuffer>)&local_48;
    if (local_48.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = local_48.Segments.AllocatorInstance.SecondaryData;
    }
    lVar6 = (longlong)local_48.Segments.ArrayNum;
    lVar9 = *(longlong *)FVar11;
    if (lVar9 != 0) {
      LOCK();
      puVar1 = (ulonglong *)(lVar9 + 0x18);
      uVar10 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(lVar9 + 0x18) = *(longlong *)(lVar9 + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    local_48.Segments.ArrayNum = local_48.Segments.ArrayNum + 1;
    *(longlong *)((longlong)FVar7 + lVar6 * 8) = lVar9;
    FVar7 = (ForElementType<FSharedBuffer>)&local_48;
    if (local_48.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = local_48.Segments.AllocatorInstance.SecondaryData;
    }
    if ((ulonglong)FVar7 <= (ulonglong)FVar13) {
      FVar7 = (ForElementType<FSharedBuffer>)&local_48;
      if (local_48.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
        FVar7 = local_48.Segments.AllocatorInstance.SecondaryData;
      }
      if (((ulonglong)FVar13 <
           (ulonglong)((longlong)FVar7 + (longlong)local_48.Segments.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    iVar5 = local_48.Segments.ArrayNum;
    if (local_48.Segments.ArrayNum == local_48.Segments.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                        (0x808,(ForElementType<FSharedBuffer> *)&local_48,
                         &local_48.Segments.ArrayMax);
    }
    local_48.Segments.ArrayNum = iVar5 + 1;
    FVar7 = (ForElementType<FSharedBuffer>)&local_48;
    if (local_48.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = local_48.Segments.AllocatorInstance.SecondaryData;
    }
    lVar9 = *(longlong *)FVar13;
    if (lVar9 != 0) {
      LOCK();
      puVar1 = (ulonglong *)(lVar9 + 0x18);
      uVar10 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(lVar9 + 0x18) = *(longlong *)(lVar9 + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    *(longlong *)((longlong)FVar7 + (longlong)iVar5 * 8) = lVar9;
    lVar9 = (longlong)local_48.Segments.ArrayNum;
    iVar5 = local_48.Segments.ArrayNum;
    if (local_48.Segments.ArrayNum != 0) {
      FVar7 = (ForElementType<FSharedBuffer>)&local_48;
      if (local_48.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
        FVar7 = local_48.Segments.AllocatorInstance.SecondaryData;
      }
      iVar5 = 0;
      lVar6 = 0;
      bVar3 = *(longlong *)FVar7 != 0;
      iVar14 = 0;
      do {
        iVar15 = iVar14;
        do {
          lVar6 = lVar6 + 1;
          iVar15 = iVar15 + 1;
          if (lVar9 <= lVar6) break;
        } while (bVar3 == (*(longlong *)((longlong)FVar7 + lVar6 * 8) != 0));
        iVar12 = iVar15 - iVar14;
        if (bVar3 == false) {
          DestructItems<FSharedBuffer,int>
                    ((FSharedBuffer *)((longlong)FVar7 + (longlong)iVar14 * 8),iVar12);
        }
        else {
          if (iVar5 != iVar14) {
            memmove((FScriptContainerElement *)((longlong)FVar7 + (longlong)iVar5 * 8),
                    (FScriptContainerElement *)((longlong)FVar7 + (longlong)iVar14 * 8),
                    (longlong)iVar12 << 3);
          }
          iVar5 = iVar5 + iVar12;
        }
        bVar3 = (bool)(bVar3 ^ 1);
        FVar11 = local_68;
        FVar13 = local_60;
        uVar16 = local_70;
        FVar17 = local_58;
        iVar14 = iVar15;
      } while (lVar6 < lVar9);
    }
    local_48.Segments.ArrayNum = iVar5;
    uVar8 = FCompositeBuffer::GetSize(&local_48);
    uVar16 = uVar16 + uVar8;
    local_70 = uVar16;
    FCompositeBuffer::~FCompositeBuffer(&local_48);
    FVar11 = (ForElementType<FSharedBuffer>)((longlong)FVar11 + 0x28);
    uVar10 = (ulonglong)local_74;
    FVar13 = (ForElementType<FSharedBuffer>)((longlong)FVar13 + 0x28);
  } while( true );
}

// Serialize @ 145eb41b0

void __thiscall
FShaderMapResourceCode::Serialize(FShaderMapResourceCode *this,FShaderSerializeContext *param_1)

{
  int *piVar1;
  int iVar2;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_1->Ar == (FArchive *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderSerialization.h"
                         ,0x38,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = param_1->Ar;
  (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,&this->ResourceHash,0x14);
  TArrayPrivateFriend::Serialize<FSHAHash,TSizedDefaultAllocator<32>_>(pFVar3,&this->ShaderHashes);
  cVar6 = (**(code **)(param_1->_padding_ + 8))(param_1);
  if (cVar6 == '\0') {
    TArrayPrivateFriend::Serialize<FShaderCodeResource,TSizedDefaultAllocator<32>_>
              (pFVar3,&this->ShaderCodeResources);
  }
  else {
    if ((pFVar3->field_0x28 & 1) != 0) {
      iVar2 = (this->ShaderCodeResources).ArrayNum;
      piVar1 = &(this->ShaderCodeResources).ArrayNum;
      uVar8 = (this->ShaderHashes).ArrayNum;
      if (iVar2 < (int)uVar8) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x28,8,uVar8 - iVar2,&(this->ShaderCodeResources).AllocatorInstance,
                           piVar1,&(this->ShaderCodeResources).ArrayMax);
        DefaultConstructItems<FShaderCodeResource,int>
                  ((this->ShaderCodeResources).AllocatorInstance.Data + (longlong)iVar7 * 0x28,
                   uVar8 - iVar2);
      }
      else {
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        if ((int)uVar8 < iVar2) {
          uVar9 = iVar2 - uVar8;
          if (((int)(uVar9 | uVar8) < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar9 != 0) {
            TArray<FShaderCodeResource,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (&this->ShaderCodeResources,uVar8,uVar9);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,&(this->ShaderCodeResources).AllocatorInstance,*piVar1,
                       &(this->ShaderCodeResources).ArrayMax);
          }
        }
      }
    }
    piVar1 = &(this->ShaderCodeResources).ArrayNum;
    (**(code **)(param_1->_padding_ + 0x18))(param_1,*piVar1);
    uVar8 = 0;
    if (0 < *piVar1) {
      do {
        pcVar4 = *(code **)(param_1->_padding_ + 0x10);
        uVar9 = 0;
        if ((int)uVar8 < (this->ShaderCodeResources).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*pcVar4)(param_1,(this->ShaderCodeResources).AllocatorInstance.Data +
                          (longlong)(int)uVar8 * 0x28,uVar8);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < *piVar1);
    }
  }
  if (((this->ShaderCodeResources).ArrayNum != (this->ShaderHashes).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderCodeResources.Num() == ShaderHashes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderResource.cpp"
                         ,0x1b8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ApplyResourceStats(this);
  return;
}

// ToString @ 145eba510

void __thiscall
FShaderMapResourceCode::ToString(FShaderMapResourceCode *this,TStringBuilderBase<wchar_t> *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res18;
  longlong local_res20;
  FString local_58;
  
  TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"Shaders: Num=%d\n");
  uVar8 = 0;
  if (0 < (this->ShaderHashes).ArrayNum) {
    lVar10 = 0;
    local_res20 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->ShaderCodeResources).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (this->ShaderCodeResources).AllocatorInstance.Data + lVar10;
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Header",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x4c5,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)pFVar9;
      if ((plVar3 != (longlong *)0x0) && (((ulonglong)plVar3[3] >> 0x3c & 4) == 0)) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      local_res18.Owner = *(FBufferOwner **)(pFVar9 + 8);
      if (local_res18.Owner == (FBufferOwner *)0x0) {
LAB_145eba65a:
        if (local_res18.Owner != (FBufferOwner *)0x0) goto LAB_145eba667;
      }
      else {
        LOCK();
        paVar1 = &(local_res18.Owner)->ReferenceCountsAndFlags;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
        UNLOCK();
        if (((ulonglong)aVar2 & 0x3fffffff) != 0) goto LAB_145eba65a;
        LOCK();
        (local_res18.Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_res18.Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
LAB_145eba667:
        if (((ulonglong)(local_res18.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
          (**(code **)((local_res18.Owner)->_padding_ + 8))(local_res18.Owner);
        }
      }
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Header",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x4d3,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)pFVar9;
      if (plVar3 == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
        if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        lVar7 = plVar3[1];
      }
      switch(*(undefined1 *)(lVar7 + 8)) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
        break;
      case 9:
        break;
      case 10:
        break;
      case 0xb:
      }
      uVar6 = 0;
      if ((int)uVar8 < (this->ShaderHashes).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar7 = local_res20;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      BytesToHex((uchar *)((this->ShaderHashes).AllocatorInstance.Data + local_res20),0x14,&local_58
                );
      TStringBuilderBase<wchar_t>::AppendfImpl
                (param_1,L"    [%d]: { Hash: %s, Freq: %s, Size: %llu, UncompressedSize: %d }\n");
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res18);
      local_res20 = lVar7 + 0x14;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x28;
    } while ((int)uVar8 < (this->ShaderHashes).ArrayNum);
  }
  return;
}

