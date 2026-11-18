// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 23

// FOpenGLTexture @ 145be4800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLTexture * __thiscall
FOpenGLTexture::FOpenGLTexture
          (FOpenGLTexture *this,FOpenGLTexture *param_1,FString *param_2,
          EAliasConstructorParam param_3)

{
  code *pcVar1;
  bool bVar2;
  FRHITextureDesc *pFVar3;
  FOpenGLTexture *pFVar4;
  undefined8 *puVar5;
  byte bVar6;
  wchar_t *pwVar7;
  undefined4 in_register_0000008c;
  undefined1 auStack_b8 [32];
  FRHITextureCreateDesc local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar3 = (FRHITextureDesc *)
           (**(code **)(param_1->_padding_ + 0x20))
                     (param_1,param_1,param_2,CONCAT44(in_register_0000008c,param_3));
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_98,pFVar3);
  local_98.InitialState = SRVMask;
  local_98.InitAction = Default;
  local_98.BulkData = (FResourceBulkDataInterface *)0x0;
  local_98.ClassName.ComparisonIndex.Value = 0;
  local_98.ClassName.Number = 0;
  local_98.OwnerName.ComparisonIndex.Value = 0;
  local_98.OwnerName.Number = 0;
  local_98.DebugName = pwVar7;
  FRHITexture::FRHITexture((FRHITexture *)this,&local_98);
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->Resource = 0;
  this->Target = param_1->Target;
  this->Attachment = param_1->Attachment;
  (this->EvictionParamsPtr).Ptr = (FTextureEvictionParams *)0x0;
  (this->PixelBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PixelBuffers).ArrayNum = 0;
  (this->PixelBuffers).ArrayMax = 0;
  (this->bAllocatedStorage).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  this->SamplerState = (FOpenGLSamplerState *)0x0;
  this->bInStencilTextureMode = false;
  (this->bAllocatedStorage).NumBits = 0;
  *(undefined8 *)&(this->bAllocatedStorage).MaxBits = 0x20;
  bVar6 = this->field_0x194 & 0xfc ^ param_1->bIsPowerOfTwo;
  this->field_0x194 = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0x194) & 4 ^ bVar6;
  this->field_0x194 = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0x194) & 8 ^ bVar6;
  this->field_0x194 = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0x194) & 0x10 ^ bVar6;
  this->field_0x194 = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0x194) & 0x20 ^ bVar6 | 0x40;
  this->field_0x194 = bVar6;
  this->field_0x194 = (bVar6 ^ param_1->field_0x194) & 0x7f ^ param_1->field_0x194;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FOpenGLTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x28,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar5;
    GRHICommandList.CommandListImmediate._48_8_ = puVar5 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar5 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLTexture::FOpenGLTexture'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[2] = this;
    puVar5[3] = param_1;
    puVar5[4] = L"TRHILambdaCommand";
  }
  else {
    AliasResources(this,param_1);
  }
  return this;
}

// FOpenGLTexture @ 145be4a70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLTexture * __thiscall
FOpenGLTexture::FOpenGLTexture(FOpenGLTexture *this,FOpenGLTextureCreateDesc *param_1)

{
  int *piVar1;
  TUniquePtr<FTextureEvictionParams,TDefaultDelete<FTextureEvictionParams>_> *pTVar2;
  longlong lVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_OpenGLCreateTextureTime> FVar15;
  FTextureEvictionParams *pFVar16;
  HGLRC pHVar17;
  FOpenGLTexture *pFVar18;
  longlong *plVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  byte bVar20;
  FTextureEvictionParams *this_02;
  FNameEntryId FVar21;
  longlong lVar22;
  FName FVar23;
  FColor_u_0 local_res8 [2];
  FOpenGLTextureCreateDesc *local_res10;
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_80;
  undefined8 local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  local_res10 = param_1;
  FRHITexture::FRHITexture((FRHITexture *)this,(FRHITextureCreateDesc *)param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  pTVar2 = &this->EvictionParamsPtr;
  this->Resource = 0;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  piVar1 = &(this->PixelBuffers).ArrayNum;
  this->Target = *(uint *)&param_1->field_0x78;
  this->Attachment = *(uint *)&param_1->field_0x7c;
  pTVar2->Ptr = (FTextureEvictionParams *)0x0;
  (this->PixelBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->PixelBuffers).ArrayMax = 0;
  (this->bAllocatedStorage).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  this->SamplerState = (FOpenGLSamplerState *)0x0;
  this->bInStencilTextureMode = false;
  (this->bAllocatedStorage).NumBits = 0;
  (this->bAllocatedStorage).MaxBits = 0x20;
  this->MemorySize = *(uint *)&param_1->field_0x80;
  bVar20 = ((byte)param_1->field_0x84 >> 5 ^ this->bIsPowerOfTwo) & 1 ^ this->field_0x194;
  this->field_0x194 = bVar20;
  bVar20 = ((byte)param_1->field_0x84 >> 3 ^ bVar20) & 2 ^ bVar20;
  this->field_0x194 = bVar20;
  bVar20 = (bVar20 ^ param_1->field_0x84) & 4 ^ bVar20;
  this->field_0x194 = bVar20;
  bVar20 = (param_1->field_0x84 << 3 ^ bVar20) & 8 ^ bVar20;
  this->field_0x194 = bVar20;
  bVar20 = (param_1->field_0x84 << 3 ^ bVar20) & 0x10 ^ bVar20;
  this->field_0x194 = bVar20;
  bVar20 = (param_1->field_0x84 & 8) << 2 ^ bVar20 & 0xdf;
  this->field_0x194 = bVar20 & 0xbf;
  this->field_0x194 = (param_1->field_0x84 & 0xc0) * '\x02' | bVar20 & 0x3f;
  FVar15 = StatPtr_STAT_OpenGLCreateTextureTime;
  if (StatPtr_STAT_OpenGLCreateTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLCreateTextureTime>)0x0) {
    pFVar14 = ::FName::FName(&local_80,"STAT_OpenGLCreateTextureTime");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_OpenGLCreateTextureTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLCreateTextureTime,*pFVar14,
                        L"CreateTexture time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  bVar7 = false;
  bVar9 = false;
  FVar23 = *(FName *)FVar15;
  FVar21 = FVar23.ComparisonIndex.Value;
  uVar11 = FVar23.Number;
  if ((FVar21.Value == 0) && (uVar11 == 0)) {
LAB_145be4d05:
    bVar8 = false;
    FVar23 = local_70;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar21.Value;
        local_res18.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                   ,0x1aa);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145be4d05;
    local_res20.s.LowPart = FVar21.Value;
    local_res20.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar8 = true;
  }
  if (this->bCanCreateAsEvicted != '\0') {
    pFVar16 = ::operator_new(0x30);
    if (pFVar16 == (FTextureEvictionParams *)0x0) {
      pFVar16 = (FTextureEvictionParams *)0x0;
    }
    else {
      pFVar16 = FTextureEvictionParams::FTextureEvictionParams
                          (pFVar16,(uint)(byte)param_1->field_0x30);
    }
    if (pTVar2 == (TUniquePtr<FTextureEvictionParams,TDefaultDelete<FTextureEvictionParams>_> *)
                  &local_78) {
      if (pFVar16 == (FTextureEvictionParams *)0x0) goto LAB_145be4f9a;
      pHVar17 = wglGetCurrentContext();
      if (pHVar17 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
        IsInRHIThread();
        IsInRenderingThread();
        IsInGameThread();
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if (pFVar16->bHasRestored != 0) {
        uVar11 = FTextureEvictionParams::GetTotalAllocated(pFVar16);
        GTotalEvictedMipMemDuplicated = GTotalEvictedMipMemDuplicated - uVar11;
      }
      uVar11 = (pFVar16->MipImageData).ArrayNum - 1;
      if (-1 < (int)uVar11) {
        lVar22 = (longlong)(int)uVar11 << 4;
        do {
          uVar12 = 0;
          if ((int)uVar11 < (pFVar16->MipImageData).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar18 = (FOpenGLTexture *)(*pcVar6)();
            return pFVar18;
          }
          lVar3 = lVar22 + 8;
          lVar22 = lVar22 + -0x10;
          GTotalEvictedMipMemStored =
               GTotalEvictedMipMemStored -
               *(int *)((pFVar16->MipImageData).AllocatorInstance.Data + lVar3);
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      GTotalMipStoredCount = GTotalMipStoredCount - (pFVar16->MipImageData).ArrayNum;
      pFVar5 = (pFVar16->TextureDebugName).Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                 (pFVar16->MipImageData).AllocatorInstance.Data,(pFVar16->MipImageData).ArrayNum);
      pFVar5 = (pFVar16->MipImageData).AllocatorInstance.Data;
      this_02 = pFVar16;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
    }
    else {
      this_02 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar16;
      if (this_02 == (FTextureEvictionParams *)0x0) goto LAB_145be4f9a;
      pHVar17 = wglGetCurrentContext();
      if (pHVar17 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
        IsInRHIThread();
        IsInRenderingThread();
        IsInGameThread();
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if (this_02->bHasRestored != 0) {
        uVar11 = FTextureEvictionParams::GetTotalAllocated(this_02);
        GTotalEvictedMipMemDuplicated = GTotalEvictedMipMemDuplicated - uVar11;
      }
      uVar11 = (this_02->MipImageData).ArrayNum - 1;
      if (-1 < (int)uVar11) {
        lVar22 = (longlong)(int)uVar11 << 4;
        do {
          uVar12 = 0;
          if ((int)uVar11 < (this_02->MipImageData).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar18 = (FOpenGLTexture *)(*pcVar6)();
            return pFVar18;
          }
          lVar3 = lVar22 + 8;
          lVar22 = lVar22 + -0x10;
          GTotalEvictedMipMemStored =
               GTotalEvictedMipMemStored -
               *(int *)((this_02->MipImageData).AllocatorInstance.Data + lVar3);
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      GTotalMipStoredCount = GTotalMipStoredCount - (this_02->MipImageData).ArrayNum;
      pFVar5 = (this_02->TextureDebugName).Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                 (this_02->MipImageData).AllocatorInstance.Data,(this_02->MipImageData).ArrayNum);
      pFVar5 = (this_02->MipImageData).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
    }
    ::operator_delete(this_02,0x30);
    param_1 = local_res10;
  }
LAB_145be4f9a:
  UpdateTextureStats(this,true);
  pcVar6 = *(code **)(this->_padding_ + 0x20);
  if (pcVar6 == FRHITexture::GetDesc) {
    plVar19 = &this->_padding_;
  }
  else {
    plVar19 = (longlong *)(*pcVar6)(this);
  }
  lVar22 = 0x2c;
  if (*(char *)((longlong)plVar19 + 0x32) != '\x02') {
    lVar22 = 0x2e;
  }
  iVar13 = 1;
  if (this->bCubemap != 0) {
    iVar13 = 6;
  }
  uVar11 = (uint)*(ushort *)(lVar22 + (longlong)plVar19) * iVar13 * (uint)(byte)param_1->field_0x30;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,uVar11,&(this->PixelBuffers).AllocatorInstance,piVar1,
                      &(this->PixelBuffers).ArrayMax);
  memset((this->PixelBuffers).AllocatorInstance.Data + (longlong)iVar13 * 8,0,(ulonglong)uVar11 << 3
        );
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return this;
}

// FOpenGLTexture @ 145be5140

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FOpenGLTexture * __thiscall
FOpenGLTexture::FOpenGLTexture(FOpenGLTexture *this,FOpenGLTextureCreateDesc *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  FRHITexture::FRHITexture((FRHITexture *)this,(FRHITextureCreateDesc *)param_1);
  this->Resource = param_2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->Target = *(uint *)&param_1->field_0x78;
  uVar1 = *(uint *)&param_1->field_0x7c;
  (this->EvictionParamsPtr).Ptr = (FTextureEvictionParams *)0x0;
  (this->PixelBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PixelBuffers).ArrayNum = 0;
  (this->PixelBuffers).ArrayMax = 0;
  (this->bAllocatedStorage).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  this->SamplerState = (FOpenGLSamplerState *)0x0;
  this->bInStencilTextureMode = false;
  this->Attachment = uVar1;
  (this->bAllocatedStorage).NumBits = 0;
  (this->bAllocatedStorage).MaxBits = 0x20;
  this->MemorySize = *(uint *)&param_1->field_0x80;
  bVar2 = ((byte)param_1->field_0x84 >> 5 & 1 ^ this->field_0x194 & 0xfe) & 0xfd;
  this->field_0x194 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x84) & 4 ^ bVar2;
  this->field_0x194 = bVar2;
  bVar2 = (param_1->field_0x84 << 3 ^ bVar2) & 8 ^ bVar2;
  this->field_0x194 = bVar2;
  bVar2 = (param_1->field_0x84 << 3 ^ bVar2) & 0x10 ^ bVar2;
  this->field_0x194 = bVar2;
  bVar2 = (param_1->field_0x84 << 2 ^ bVar2) & 0x20 ^ bVar2;
  this->field_0x194 = bVar2 | 0x40;
  this->field_0x194 = (param_1->field_0x84 & 0xc0) * '\x02' | bVar2 & 0x7f | 0x40;
  return this;
}

// ~FOpenGLTexture @ 145be9ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FOpenGLTexture::~FOpenGLTexture(FOpenGLTexture *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  HGLRC pHVar5;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                  ::__l2::Lru,4000);
      atexit(`FTextureEvictionLRU::Get'::__l2::_dynamic_atexit_destructor_for__Lru__);
      _Init_thread_footer(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FTextureEvictionLRU::Remove
            (&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
              ::__l2::Lru,this);
  if (this->bCanCreateAsEvicted == '\0') {
    ReleaseOpenGLFramebuffers((FRHITexture *)this);
  }
  DeleteGLResource(this);
  UpdateTextureStats(this,false);
  FVar1 = (this->bAllocatedStorage).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  DestructItems<TRefCountPtr<TOpenGLBuffer<FOpenGLBasePixelBuffer>_>,int>
            ((TRefCountPtr<TOpenGLBuffer<FOpenGLBasePixelBuffer>_> *)
             (this->PixelBuffers).AllocatorInstance.Data,(this->PixelBuffers).ArrayNum);
  pFVar2 = (this->PixelBuffers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDefaultDelete<FTextureEvictionParams>::operator()
            ((TDefaultDelete<FTextureEvictionParams> *)&this->EvictionParamsPtr,
             (this->EvictionParamsPtr).Ptr);
  if (this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                       ,0x53,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// AliasResources @ 145bf15a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLTexture::AliasResources(FOpenGLTexture *this,FOpenGLTexture *param_1)

{
  code *pcVar1;
  bool bVar2;
  HGLRC pHVar3;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((this->bAlias == '\0') || (param_1->bAlias != '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bAlias && !Texture.bAlias",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x140,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsEvicted(param_1);
  if (bVar2) {
    RestoreEvictedGLResource(param_1,false);
  }
  this->Resource = param_1->Resource;
  return;
}

// CanBeEvicted @ 145bf4fd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOpenGLTexture::CanBeEvicted(FOpenGLTexture *this)

{
  uint uVar1;
  FTextureEvictionParams *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  HGLRC pHVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((this->bCanCreateAsEvicted != '\0') &&
      ((this->EvictionParamsPtr).Ptr == (FTextureEvictionParams *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bCanCreateAsEvicted || EvictionParamsPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x552,L"%p, bCanCreateAsEvicted %d, EvictionParamsPtr.IsValid() %d"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((this->bCanCreateAsEvicted == '\x01' && this->bAlias == '\x01') &&
      (((((this->EvictionParamsPtr).Ptr)->MipImageData).ArrayNum != 0 ||
       (lVar7 = (**(code **)(this->_padding_ + 0x20))(this),
       (((this->EvictionParamsPtr).Ptr)->MipImageData).ArrayNum == (uint)*(byte *)(lVar7 + 0x30)))))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bCanCreateAsEvicted || !bAlias || (EvictionParamsPtr->MipImageData.Num() == 0 && EvictionParamsPtr->MipImageData.Num() != this->GetNumMips())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                            ,0x555,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (this->bCanCreateAsEvicted != '\0') {
    lVar7 = (**(code **)(this->_padding_ + 0x20))(this);
    pFVar2 = (this->EvictionParamsPtr).Ptr;
    uVar1 = (pFVar2->MipImageData).ArrayNum;
    if (uVar1 == *(byte *)(lVar7 + 0x30)) {
      pFVar8 = (pFVar2->MipImageData).AllocatorInstance.Data;
      bVar4 = 0 < (int)uVar1;
      pFVar9 = pFVar8 + (longlong)(int)uVar1 * 0x10;
      while( true ) {
        if ((pFVar2->MipImageData).ArrayNum != uVar1) {
          `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar8 == pFVar9) break;
        if ((bVar4) && (0 < *(int *)(pFVar8 + 8))) {
          bVar4 = true;
          pFVar8 = pFVar8 + 0x10;
        }
        else {
          bVar4 = false;
          pFVar8 = pFVar8 + 0x10;
        }
      }
      if (bVar4) {
        return true;
      }
    }
  }
  return false;
}

// CloneViaCopyImage @ 145bf63f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLTexture::CloneViaCopyImage
          (FOpenGLTexture *this,FOpenGLTexture *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  FTextureEvictionParams *pFVar3;
  code *pcVar4;
  bool bVar5;
  HGLRC pHVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FOpenGLTexture *local_res10;
  uint local_res18;
  int local_res20;
  undefined1 local_58;
  undefined1 local_57 [3];
  int local_54;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((((param_1->field_0x194 ^ this->field_0x194) & 2) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->bCanCreateAsEvicted == bCanCreateAsEvicted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x56d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->bCanCreateAsEvicted != '\0') {
    bVar5 = IsEvicted(param_1);
    if (bVar5) {
      pFVar3 = (param_1->EvictionParamsPtr).Ptr;
      iVar11 = (pFVar3->MipImageData).ArrayNum;
      pFVar12 = (pFVar3->MipImageData).AllocatorInstance.Data;
      bVar5 = 0 < iVar11;
      pFVar13 = pFVar12 + (longlong)iVar11 * 0x10;
      while( true ) {
        if ((pFVar3->MipImageData).ArrayNum != iVar11) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar12 == pFVar13) break;
        if ((bVar5) && (0 < *(int *)(pFVar12 + 8))) {
          bVar5 = true;
          pFVar12 = pFVar12 + 0x10;
        }
        else {
          bVar5 = false;
          pFVar12 = pFVar12 + 0x10;
        }
      }
      param_3 = local_res20;
      param_2 = local_res18;
      if (!bVar5) {
        if (2 < (byte)LogRHI._0_1_) {
          FTextureEvictionParams::AreAllMipsPresent((param_1->EvictionParamsPtr).Ptr);
          IsEvicted(param_1);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        pFVar3 = (param_1->EvictionParamsPtr).Ptr;
        iVar11 = (pFVar3->MipImageData).ArrayNum;
        pFVar12 = (pFVar3->MipImageData).AllocatorInstance.Data;
        pFVar13 = pFVar12 + (longlong)iVar11 * 0x10;
        while( true ) {
          if ((pFVar3->MipImageData).ArrayNum != iVar11) {
            local_58 = 0;
            `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_58);
          }
          param_3 = local_res20;
          param_2 = local_res18;
          if (pFVar12 == pFVar13) break;
          if (2 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          pFVar12 = pFVar12 + 0x10;
        }
      }
    }
    bVar5 = IsEvicted(param_1);
    if (((bVar5) &&
        (bVar5 = FTextureEvictionParams::AreAllMipsPresent((param_1->EvictionParamsPtr).Ptr), !bVar5
        )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Src->IsEvicted() || Src->EvictionParamsPtr->AreAllMipsPresent()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                                  ,0x57a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FTextureEvictionParams::CloneMipData
              ((this->EvictionParamsPtr).Ptr,(param_1->EvictionParamsPtr).Ptr,param_2,param_3,
               param_4);
    bVar5 = IsEvicted(this);
    if (bVar5) {
      bVar5 = IsEvicted(param_1);
      if (bVar5) {
        return;
      }
      pFVar3 = (param_1->EvictionParamsPtr).Ptr;
      iVar11 = (pFVar3->MipImageData).ArrayNum;
      pFVar12 = (pFVar3->MipImageData).AllocatorInstance.Data;
      bVar5 = 0 < iVar11;
      pFVar13 = pFVar12 + (longlong)iVar11 * 0x10;
      while( true ) {
        if ((pFVar3->MipImageData).ArrayNum != iVar11) {
          `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_57);
        }
        if (pFVar12 == pFVar13) break;
        if ((bVar5) && (0 < *(int *)(pFVar12 + 8))) {
          bVar5 = true;
          pFVar12 = pFVar12 + 0x10;
        }
        else {
          bVar5 = false;
          pFVar12 = pFVar12 + 0x10;
        }
      }
      if (bVar5) {
        return;
      }
      bVar5 = FTextureEvictionParams::AreAllMipsPresent((this->EvictionParamsPtr).Ptr);
      param_3 = local_res20;
      param_2 = local_res18;
      if (bVar5) {
        return;
      }
    }
  }
  uVar14 = 0;
  do {
    lVar7 = (**(code **)(this->_padding_ + 0x20))(this);
    lVar8 = 0x2c;
    if (*(char *)(lVar7 + 0x32) != '\x02') {
      lVar8 = 0x2e;
    }
    if (*(ushort *)(lVar8 + lVar7) <= uVar14) {
      return;
    }
    if (param_2 != 0) {
      local_54 = param_3 - param_4;
      iVar11 = param_4;
      do {
        lVar7 = (**(code **)(this->_padding_ + 0x20))(this);
        uVar9 = *(uint *)(lVar7 + 0x24) >> ((byte)iVar11 & 0x1f);
        uVar15 = 1;
        if (1 < uVar9) {
          uVar15 = uVar9;
        }
        lVar7 = (**(code **)(this->_padding_ + 0x20))(this);
        uVar10 = *(uint *)(lVar7 + 0x28) >> ((byte)iVar11 & 0x1f);
        uVar9 = 1;
        if (1 < uVar10) {
          uVar9 = uVar10;
        }
        if ((FOpenGLBase::bAmdWorkaround != false) &&
           ((param_2 = local_res18, uVar15 < 4 || (uVar9 < 4)))) break;
        uVar10 = this->Target;
        TryRestoreGLResource(this);
        uVar1 = this->Resource;
        uVar2 = param_1->Target;
        TryRestoreGLResource(local_res10);
        param_1 = local_res10;
        (*glCopyImageSubData)
                  (local_res10->Resource,uVar2,local_54 + iVar11,0,0,uVar14,uVar1,uVar10,iVar11,0,0,
                   uVar14,uVar15,uVar9,1);
        iVar11 = iVar11 + 1;
        param_2 = local_res18;
      } while ((uint)(iVar11 - param_4) < local_res18);
    }
    uVar14 = uVar14 + 1;
    param_3 = local_res20;
  } while( true );
}

// DeleteGLResource @ 145bfa730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLTexture::DeleteGLResource(FOpenGLTexture *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  HGLRC pHVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLTexture::DeleteGLResource(void)_::_2_::FStat_STAT_OpenGLDeleteGLTextureTime>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  bool bVar12;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_OpenGLDeleteGLTextureTime ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLTexture::DeleteGLResource(void)_::_2_::FStat_STAT_OpenGLDeleteGLTextureTime>
           )0x0) {
        pFVar7 = ::FName::FName(&local_res20,"STAT_OpenGLDeleteGLTextureTime");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLDeleteGLTextureTime,*pFVar7,
                   L"STAT_OpenGLDeleteGLTextureTime","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_OpenGLDeleteGLTextureTime;
  if (StatPtr_STAT_OpenGLDeleteGLTextureTime ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLTexture::DeleteGLResource(void)_::_2_::FStat_STAT_OpenGLDeleteGLTextureTime>
       )0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_OpenGLDeleteGLTextureTime");
    FVar8 = (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLTexture::DeleteGLResource(void)_::_2_::FStat_STAT_OpenGLDeleteGLTextureTime>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLDeleteGLTextureTime,
                         *pFVar7,L"STAT_OpenGLDeleteGLTextureTime","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
LAB_145bfa8f2:
    bVar4 = false;
    FVar11 = local_50;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                   ,0x1d0);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bfa8f2;
    local_res18.s.LowPart = FVar10.Value;
    local_res18.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar4 = true;
  }
  if (this->Resource == 0) goto LAB_145bfa9b1;
  uVar9 = this->Target;
  if (uVar9 < 0x8d42) {
    if (uVar9 == 0x8d41) {
      if (this->bAlias == '\0') {
        (*glDeleteRenderbuffers)(1,&this->Resource);
      }
      goto LAB_145bfa9b1;
    }
    if (((uVar9 != 0xde1) && (uVar9 != 0x806f)) && (uVar9 != 0x8513)) {
      bVar12 = uVar9 == 0x8c1a;
      goto LAB_145bfa960;
    }
  }
  else if ((uVar9 != 0x8d65) && (uVar9 != 0x9009)) {
    bVar12 = uVar9 == 0x9100;
LAB_145bfa960:
    if (!bVar12) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                          ,499,L"");
      if (bVar12) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_145bfa9b1;
    }
  }
  FOpenGLDynamicRHI::InvalidateTextureResourceInCache(FOpenGLDynamicRHI::Singleton,this->Resource);
  if (this->bAlias == '\0') {
    (*glDeleteTextures)(1,&this->Resource);
  }
LAB_145bfa9b1:
  this->Resource = 0;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FillGLTextureImage @ 145bff230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOpenGLTexture::FillGLTextureImage
          (FOpenGLTexture *this,FOpenGLTextureFormat *param_1,bool param_2,uint param_3,uint param_4
          ,TIntVector3<unsigned_int> *param_5,void *param_6,ulong64 param_7)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  undefined1 auStackY_c18 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_b98;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_a78;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_958;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_838;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_718;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c18;
  (*glPixelStorei)(0xcf5,1);
  lVar5 = (**(code **)(this->_padding_ + 0x20))(this);
  if ((*(char *)(lVar5 + 0x32) == '\x01') || (*(char *)(lVar5 + 0x32) == '\x04')) {
LAB_145bff682:
    if (param_1->bCompressed == false) {
      (*glTexSubImage3D)(this->Target,param_3,0,0,param_4,(param_5->field0_0x0)._s_0.X,
                         (param_5->field0_0x0)._s_0.Y,1,param_1->Format,param_1->Type,param_6);
      uVar4 = (*glGetError)();
      if (uVar4 == 0) goto LAB_145bff879;
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,"",0,Yes);
      local_298._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_298,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                 ,0x53,Yes);
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"(%s:%d) GL_CHECK Failed \'%s\'! %d (%x)\n")
      ;
      if ((void *)local_298._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_298._padding_);
      }
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      iVar6 = 0x3b8;
    }
    else {
      (*glCompressedTexSubImage3D)
                (this->Target,param_3,0,0,param_4,(param_5->field0_0x0)._s_0.X,
                 (param_5->field0_0x0)._s_0.Y,1,param_1->InternalFormat[param_2],(int)param_7,
                 param_6);
      uVar4 = (*glGetError)();
      if (uVar4 == 0) goto LAB_145bff879;
      local_3b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,"",0,Yes);
      local_4d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4d8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                 ,0x53,Yes);
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"(%s:%d) GL_CHECK Failed \'%s\'! %d (%x)\n")
      ;
      if ((void *)local_4d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4d8._padding_);
      }
      if ((void *)local_3b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._padding_);
      }
      iVar6 = 0x3aa;
    }
  }
  else {
    lVar5 = (**(code **)(this->_padding_ + 0x20))(this);
    if (*(char *)(lVar5 + 0x32) == '\x02') goto LAB_145bff682;
    uVar4 = param_4 + 0x8515;
    if (this->bCubemap == '\0') {
      uVar4 = this->Target;
    }
    if (param_1->bCompressed == false) {
      bVar3 = GetAllocatedStorageForMip(this,param_3,param_4);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetAllocatedStorageForMip(MipIndex, ArrayIndex) == true",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                           ,0x3e1,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      (*glTexSubImage2D)(uVar4,param_3,0,0,(param_5->field0_0x0)._s_0.X,(param_5->field0_0x0)._s_0.Y
                         ,param_1->Format,param_1->Type,param_6);
      uVar4 = (*glGetError)();
      if (uVar4 == 0) goto LAB_145bff879;
      local_5f8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_5f8,"",0,Yes);
      local_718._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_718,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                 ,0x53,Yes);
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"(%s:%d) GL_CHECK Failed \'%s\'! %d (%x)\n")
      ;
      if ((void *)local_718._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_718._padding_);
      }
      if ((void *)local_5f8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5f8._padding_);
      }
      iVar6 = 0x3ec;
    }
    else {
      bVar3 = GetAllocatedStorageForMip(this,param_3,param_4);
      if (!bVar3) {
        (*glCompressedTexImage2D)
                  (uVar4,param_3,param_1->InternalFormat[param_2],(param_5->field0_0x0)._s_0.X,
                   (param_5->field0_0x0)._s_0.Y,0,(int)param_7,param_6);
        uVar4 = (*glGetError)();
        if (uVar4 != 0) {
          local_838._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_838,"",0,Yes);
          local_958._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_958,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                     ,0x53,Yes);
          FGenericPlatformMisc::LowLevelOutputDebugStringf
                    (L"(%s:%d) GL_CHECK Failed \'%s\'! %d (%x)\n");
          if ((void *)local_958._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_958._padding_);
          }
          if ((void *)local_838._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_838._padding_);
          }
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Err",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                             ,0x3d9,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar6 = 1;
        if (this->bCubemap != '\0') {
          iVar6 = 6;
        }
        iVar6 = iVar6 * param_3 + param_4;
        if ((iVar6 < 0) || ((this->bAllocatedStorage).NumBits <= iVar6)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        FVar7 = (this->bAllocatedStorage).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<unsigned_int>)0x0) {
          FVar7 = (ForElementType<unsigned_int>)&this->bAllocatedStorage;
        }
        puVar1 = (uint *)((longlong)FVar7 +
                         (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
        goto LAB_145bff879;
      }
      (*glCompressedTexSubImage2D)
                (uVar4,param_3,0,0,(param_5->field0_0x0)._s_0.X,(param_5->field0_0x0)._s_0.Y,
                 param_1->InternalFormat[param_2],(int)param_7,param_6);
      uVar4 = (*glGetError)();
      if (uVar4 == 0) goto LAB_145bff879;
      local_a78._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_a78,"",0,Yes);
      local_b98._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_b98,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                 ,0x53,Yes);
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"(%s:%d) GL_CHECK Failed \'%s\'! %d (%x)\n")
      ;
      if ((void *)local_b98._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_b98._padding_);
      }
      if ((void *)local_a78._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_a78._padding_);
      }
      iVar6 = 0x3cc;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Err",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                     ,iVar6,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145bff879:
  (*glPixelStorei)(0xcf5,4);
  return;
}

// GetAllocatedStorageForMip @ 145c01720

bool __thiscall
FOpenGLTexture::GetAllocatedStorageForMip(FOpenGLTexture *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<unsigned_int> FVar6;
  
  iVar4 = 1;
  if (this->bCubemap != '\0') {
    iVar4 = 6;
  }
  uVar5 = iVar4 * param_1 + param_2;
  if (((int)uVar5 < 0) || ((this->bAllocatedStorage).NumBits <= (int)uVar5)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar6 = (this->bAllocatedStorage).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)&this->bAllocatedStorage;
  }
  return (*(uint *)((longlong)FVar6 +
                   (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (uVar5 & 0x1f) & 1) != 0;
}

// GetLockSize @ 145c02830

uint __thiscall
FOpenGLTexture::GetLockSize
          (FOpenGLTexture *this,uint param_1,EResourceLockMode param_2,uint *param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (param_2 == RLM_WriteOnly_NoOverwrite) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LockMode != EResourceLockMode::RLM_WriteOnly_NoOverwrite",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x38f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  lVar5 = (**(code **)(this->_padding_ + 0x20))(this);
  bVar1 = *(byte *)(lVar5 + 0x33);
  bVar6 = (byte)param_1;
  uVar7 = *(uint *)(lVar5 + 0x24) >> (bVar6 & 0x1f);
  uVar4 = 1;
  if (1 < uVar7) {
    uVar4 = uVar7;
  }
  uVar8 = *(uint *)(lVar5 + 0x28) >> (bVar6 & 0x1f);
  uVar7 = 1;
  if (1 < uVar8) {
    uVar7 = uVar8;
  }
  uVar9 = (uint)(*(ushort *)(lVar5 + 0x2c) >> (bVar6 & 0x1f));
  uVar8 = 1;
  if (1 < uVar9) {
    uVar8 = uVar9;
  }
  uVar8 = ((GPixelFormats[bVar1].BlockSizeZ - 1U) + uVar8) / (uint)GPixelFormats[bVar1].BlockSizeZ;
  iVar10 = (int)(CONCAT44(0 >> (bVar6 & 0x1f),(uVar4 - 1) + GPixelFormats[bVar1].BlockSizeX) /
                (ulonglong)(uint)GPixelFormats[bVar1].BlockSizeX);
  if (iVar10 == 0) {
    iVar10 = 1;
  }
  uVar4 = iVar10 * GPixelFormats[bVar1].BlockBytes;
  if (uVar8 == 0) {
    uVar8 = 1;
  }
  iVar10 = (int)(CONCAT44(0 >> (bVar6 & 0x1f),(uVar7 - 1) + GPixelFormats[bVar1].BlockSizeY) /
                (ulonglong)(uint)GPixelFormats[bVar1].BlockSizeY);
  if (iVar10 == 0) {
    iVar10 = 1;
  }
  *param_3 = uVar4;
  return uVar8 * iVar10 * uVar4;
}

// GetNativeResource @ 145c02960

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FOpenGLTexture::GetNativeResource(FOpenGLTexture *this)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_unsigned_int&___ptr64___cdecl_FOpenGLTexture::GetResourceRef(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  TryRestoreGLResource(this);
  return &this->Resource;
}

// GetTextureBaseRHI @ 145c04750

void * __thiscall FOpenGLTexture::GetTextureBaseRHI(FOpenGLTexture *this)

{
  return this;
}

// Initialize @ 145c08490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLTexture::Initialize(FOpenGLTexture *this,FRHICommandListBase *param_1)

{
  FRHICommandBase *pFVar1;
  
  if (((!GRHICommandList.bLatchedBypass) || ((param_1->PersistentState).bImmediate == '\0')) &&
     (param_1->bExecuting == false)) {
    pFVar1 = FMemStackBase::Alloc(&param_1->MemManager,0x20,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar1;
    param_1->CommandLink = &pFVar1->Next;
    pFVar1->Next = (FRHICommandBase *)0x0;
    pFVar1->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FOpenGLTexture::Initialize'::`2'::<lambda_1>_>::
          _vftable_;
    pFVar1[1].Next = (FRHICommandBase *)L"TRHILambdaCommand";
    pFVar1[1]._padding_ = (longlong)this;
    return;
  }
  FOpenGLDynamicRHI::InitializeGLTexture(FOpenGLDynamicRHI::Singleton,this,(void *)0x0,0);
  return;
}

// IsEvicted @ 145c0ab30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOpenGLTexture::IsEvicted(FOpenGLTexture *this)

{
  FTextureEvictionParams *pFVar1;
  HGLRC pHVar2;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_bool___cdecl_FOpenGLTexture::IsEvicted(void)const___ptr64'::__l6::
                LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar1 = (this->EvictionParamsPtr).Ptr;
  if ((pFVar1 != (FTextureEvictionParams *)0x0) && (pFVar1->bHasRestored == 0)) {
    return true;
  }
  return false;
}

// Lock @ 145c0c180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void * __thiscall
FOpenGLTexture::Lock
          (FOpenGLTexture *this,uint param_1,uint param_2,EResourceLockMode param_3,uint *param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  FTextureEvictionParams *pFVar3;
  FScriptContainerElement *pFVar4;
  TOpenGLBuffer<FOpenGLBasePixelBuffer> *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  HGLRC pHVar13;
  longlong lVar14;
  void *pvVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_OpenGLLockTextureTime> FVar17;
  FOpenGLTexture *pFVar18;
  uint *puVar19;
  byte *pbVar20;
  uchar *puVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  FOpenGLTexture *pFVar25;
  uint uVar26;
  FName FVar27;
  uint uVar28;
  FColor_u_0 local_b8 [2];
  FName local_b0;
  FName local_a8;
  FOpenGLTexture *local_90;
  undefined8 local_88;
  FName local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  
  pHVar13 = wglGetCurrentContext();
  if (pHVar13 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar25 = (FOpenGLTexture *)0x0;
  uVar26 = 0;
  pFVar18 = pFVar25;
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    pFVar18 = this;
  }
  if (((pFVar18 != (FOpenGLTexture *)0x0) &&
      (lVar14 = (**(code **)(this->_padding_ + 0x20))(this), *(char *)(lVar14 + 0x31) != '\x01')) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetTexture2D() || GetNumSamples() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x3f4,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pvVar15 = (void *)(*pcVar5)();
    return pvVar15;
  }
  FVar17 = StatPtr_STAT_OpenGLLockTextureTime;
  if (StatPtr_STAT_OpenGLLockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLLockTextureTime>)0x0) {
    pFVar16 = ::FName::FName(&local_80,"STAT_OpenGLLockTextureTime");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_OpenGLLockTextureTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLLockTextureTime,*pFVar16,
                        L"LockTexture time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar17;
  bVar8 = false;
  bVar7 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_b0.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                   ,0x3f6);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar6 = true;
      goto LAB_145c0c374;
    }
  }
  bVar6 = false;
  FVar27 = local_a8;
LAB_145c0c374:
  uVar11 = GetLockSize(this,param_1,param_3,param_4);
  bVar9 = IsEvicted(this);
  if (((bVar9) && (param_2 != 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsEvicted() || ArrayIndex==0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                         ,0x3fa,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pvVar15 = (void *)(*pcVar5)();
    return pvVar15;
  }
  lVar14 = (**(code **)(this->_padding_ + 0x20))(this);
  lVar22 = 0x2c;
  if (*(char *)(lVar14 + 0x32) != '\x02') {
    lVar22 = 0x2e;
  }
  iVar23 = 1;
  if (this->bCubemap != '\0') {
    iVar23 = 6;
  }
  uVar24 = iVar23 * (uint)*(ushort *)(lVar22 + lVar14) * param_1 + param_2;
  (**(code **)(this->_padding_ + 0x20))(this);
  bVar9 = IsEvicted(this);
  if (bVar9) {
    if ((param_2 != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayIndex == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                           ,0x404,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pvVar15 = (void *)(*pcVar5)();
      return pvVar15;
    }
    FTextureEvictionParams::SetMipData((this->EvictionParamsPtr).Ptr,param_1,(void *)0x0,uVar11);
    pFVar3 = (this->EvictionParamsPtr).Ptr;
    if ((int)param_1 < (pFVar3->MipImageData).ArrayNum) {
      uVar26 = ~param_1 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      pvVar15 = (void *)(*pcVar5)();
      return pvVar15;
    }
    puVar21 = *(uchar **)
               ((pFVar3->MipImageData).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10);
  }
  else {
    if (param_3 != RLM_ReadOnly) {
      RemoveEvictionData(this);
    }
    bVar9 = true;
    uVar28 = ~uVar24 >> 0x1f;
    uVar12 = uVar26;
    if ((int)uVar24 < (this->PixelBuffers).ArrayNum) {
      uVar12 = uVar28;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pvVar15 = (void *)(*pcVar5)();
      return pvVar15;
    }
    lVar14 = (longlong)(int)uVar24;
    if (*(longlong *)((this->PixelBuffers).AllocatorInstance.Data + lVar14 * 8) == 0) {
      iStack_6c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      bVar9 = false;
      uStack_74 = 0;
      uStack_70 = 2;
      local_78 = uVar11;
      pFVar18 = ::operator_new(0x50);
      if (pFVar18 != (FOpenGLTexture *)0x0) {
        *(uint *)&pFVar18->_padding_ = (uint)pFVar18->_padding_ & 0xfffffff8;
        *(undefined4 *)&pFVar18->_padding_ = 0;
        pFVar18->_padding_ = CONCAT44(uStack_74,local_78);
        pFVar18->_padding_ = CONCAT44(iStack_6c,uStack_70);
        pFVar18->_padding_ = 0x88ec;
        pFVar18->_padding_ = (longlong)&___7__TOpenGLBuffer_VFOpenGLBasePixelBuffer____6B_;
        *(undefined8 *)((longlong)&pFVar18->_padding_ + 4) = 0;
        pFVar18->_padding_ = 0;
        pFVar18->_padding_ = 0;
        *(undefined4 *)&pFVar18->_padding_ = 0;
        local_88 = 0;
        local_90 = pFVar18;
        `TOpenGLBuffer<FOpenGLBasePixelBuffer>::TOpenGLBuffer<FOpenGLBasePixelBuffer>'::__l2::
        <lambda_1>::operator()(&local_90);
        pFVar25 = pFVar18;
      }
      if ((int)uVar24 < (this->PixelBuffers).ArrayNum) {
        uVar26 = uVar28;
      }
      if ((uVar26 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pvVar15 = (void *)(*pcVar5)();
        return pvVar15;
      }
      pFVar4 = (this->PixelBuffers).AllocatorInstance.Data;
      pFVar18 = *(FOpenGLTexture **)(pFVar4 + lVar14 * 8);
      if (pFVar18 != pFVar25) {
        *(FOpenGLTexture **)(pFVar4 + lVar14 * 8) = pFVar25;
        if (pFVar25 != (FOpenGLTexture *)0x0) {
          *(int *)&pFVar25->_padding_ = (int)pFVar25->_padding_ + 1;
        }
        if (pFVar18 != (FOpenGLTexture *)0x0) {
          plVar1 = &pFVar18->_padding_;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) {
            (**(code **)pFVar18->_padding_)(pFVar18,1);
          }
        }
      }
    }
    uVar26 = 0;
    if ((int)uVar24 < (this->PixelBuffers).ArrayNum) {
      uVar26 = uVar28;
    }
    if ((uVar26 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pvVar15 = (void *)(*pcVar5)();
      return pvVar15;
    }
    this_00 = *(TOpenGLBuffer<FOpenGLBasePixelBuffer> **)
               ((this->PixelBuffers).AllocatorInstance.Data + lVar14 * 8);
    if (this_00 != (TOpenGLBuffer<FOpenGLBasePixelBuffer> *)0x0) {
      *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    }
    if (((uint)this_00->_padding_ != uVar11) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("PixelBuffer->GetSize() == MipBytes",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                            ,0x41b,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pvVar15 = (void *)(*pcVar5)();
      return pvVar15;
    }
    if ((this_00->bIsLocked != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!PixelBuffer->IsLocked()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                            ,0x41c,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pvVar15 = (void *)(*pcVar5)();
      return pvVar15;
    }
    if (((bVar9) &&
        (puVar19 = (uint *)(**(code **)(this->_padding_ + 0x20))(this), (*puVar19 >> 0x13 & 1) != 0)
        ) && (pbVar20 = (byte *)(**(code **)(this->_padding_ + 0x20))(this), (*pbVar20 & 5) == 0)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if ((param_3 != RLM_WriteOnly) && (!bVar9)) {
      FOpenGLDynamicRHI::ResolveTexture(FOpenGLDynamicRHI::Singleton,this,param_1,param_2);
    }
    puVar21 = TOpenGLBuffer<FOpenGLBasePixelBuffer>::Lock
                        (this_00,0,(uint)this_00->_padding_,param_3 == RLM_ReadOnly,
                         param_3 != RLM_ReadOnly);
    plVar1 = &this_00->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return puVar21;
}

// RemoveEvictionData @ 145c29e10

void __thiscall FOpenGLTexture::RemoveEvictionData(FOpenGLTexture *this)

{
  bool bVar1;
  
  if ((this->EvictionParamsPtr).Ptr != (FTextureEvictionParams *)0x0) {
    bVar1 = CanBeEvicted(this);
    if (bVar1) {
      TryRestoreGLResource(this);
      FTextureEvictionParams::ReleaseMipData((this->EvictionParamsPtr).Ptr,0);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          InitializeCriticalSectionAndSpinCount
                    ((LPCRITICAL_SECTION)
                     &`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                      ::__l2::Lru,4000);
          atexit(`FTextureEvictionLRU::Get'::__l2::_dynamic_atexit_destructor_for__Lru__);
          _Init_thread_footer(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FTextureEvictionLRU::Remove
                (&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                  ::__l2::Lru,this);
      return;
    }
  }
  return;
}

// RestoreEvictedGLResource @ 145c2b230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLTexture::RestoreEvictedGLResource(FOpenGLTexture *this,bool param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FTextureEvictionParams *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FOpenGLDynamicRHI *pFVar10;
  FOpenGLTextureFormat *pFVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLTexture::RestoreEvictedGLResource(bool)_::_2_::FStat_STAT_OpenGLRestoreEvictedTextureTime>
  FVar16;
  longlong lVar17;
  byte *pbVar18;
  HGLRC pHVar19;
  longlong lVar20;
  uint *puVar21;
  byte bVar22;
  uint uVar23;
  char *pcVar24;
  FName FVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  bool local_res18;
  undefined1 local_res20 [8];
  FColor_u_0 local_98 [2];
  FName local_90;
  FName local_88;
  FOpenGLTextureFormat *local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  TIntVector3<unsigned_int>_u_0 local_58 [2];
  
  iVar29 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_OpenGLRestoreEvictedTextureTime =
         (FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLTexture::RestoreEvictedGLResource(bool)_::_2_::FStat_STAT_OpenGLRestoreEvictedTextureTime>
          )0x0;
    pFVar15 = ::FName::FName(&local_78,"STAT_OpenGLRestoreEvictedTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLRestoreEvictedTextureTime,*pFVar15,
               L"STAT_OpenGLRestoreEvictedTextureTime","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
               ,true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_OpenGLRestoreEvictedTextureTime;
  if (StatPtr_STAT_OpenGLRestoreEvictedTextureTime ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLTexture::RestoreEvictedGLResource(bool)_::_2_::FStat_STAT_OpenGLRestoreEvictedTextureTime>
       )0x0) {
    pFVar15 = ::FName::FName(&local_70,"STAT_OpenGLRestoreEvictedTextureTime");
    FVar16 = (FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLTexture::RestoreEvictedGLResource(bool)_::_2_::FStat_STAT_OpenGLRestoreEvictedTextureTime>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLRestoreEvictedTextureTime
                          ,*pFVar15,L"STAT_OpenGLRestoreEvictedTextureTime","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar16;
  bVar14 = false;
  bVar9 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar13 = false;
  bVar7 = false;
  if ((FVar25.ComparisonIndex.Value.Value != 0) ||
     (bVar6 = bVar14, bVar8 = bVar9, FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar14 = false;
      bVar9 = true;
      bVar13 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_90.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                   ,0x4df);
        bVar14 = true;
        bVar9 = true;
        bVar13 = true;
        bVar7 = true;
      }
    }
    bVar6 = bVar14;
    bVar8 = bVar9;
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar13 = true;
      bVar7 = true;
      goto LAB_145c2b464;
    }
  }
  bVar9 = bVar7;
  bVar14 = bVar13;
  bVar13 = false;
  bVar7 = false;
  local_88 = local_68;
  FVar25 = local_68;
LAB_145c2b464:
  if ((((this->EvictionParamsPtr).Ptr)->bHasRestored != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!EvictionParamsPtr->bHasRestored",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                          ,0x4e1,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ((this->EvictionParamsPtr).Ptr)->bHasRestored = 1;
  (**(code **)(this->_padding_ + 0x20))(this);
  FOpenGLDynamicRHI::InitializeGLTextureInternal(FOpenGLDynamicRHI::Singleton,this,(void *)0x0,0);
  lVar17 = (**(code **)(this->_padding_ + 0x20))(this);
  local_80 = GOpenGLTextureFormats + *(byte *)(lVar17 + 0x33);
  pbVar18 = (byte *)(**(code **)(this->_padding_ + 0x20))(this);
  local_res18 = (bool)(*pbVar18 >> 4 & 1);
  lVar17 = (**(code **)(this->_padding_ + 0x20))(this);
  if ((((this->EvictionParamsPtr).Ptr)->MipImageData).ArrayNum != (uint)*(byte *)(lVar17 + 0x30)) {
    (**(code **)(this->_padding_ + 0x20))(this);
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("EvictionParamsPtr->MipImageData.Num() == this->GetNumMips()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                        ,0x4ea,L"EvictionParamsPtr->MipImageData.Num() =%d, this->GetNumMips() = %d"
                       );
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = FOpenGLDynamicRHI::Singleton;
  pHVar19 = wglGetCurrentContext();
  if (pHVar19 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FOpenGLDynamicRHI::CachedBindBuffer(unsigned_int,unsigned_int)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((pFVar10->ContextState).PixelUnpackBufferBound != 0) {
    (*glBindBuffer)(0x88ec,0);
    (pFVar10->ContextState).PixelUnpackBufferBound = 0;
  }
  pFVar11 = local_80;
  uVar27 = (((this->EvictionParamsPtr).Ptr)->MipImageData).ArrayNum - 1;
  if (-1 < (int)uVar27) {
    lVar17 = (longlong)(int)uVar27 << 4;
    do {
      pFVar3 = (this->EvictionParamsPtr).Ptr;
      uVar23 = 0;
      if ((int)uVar27 < (pFVar3->MipImageData).ArrayNum) {
        uVar23 = ~uVar27 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar28 = (pFVar3->MipImageData).AllocatorInstance.Data;
      iVar2 = *(int *)(pFVar28 + lVar17 + 8);
      pvVar4 = *(void **)(pFVar28 + lVar17);
      if (iVar2 < 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_145c2b695:
        lVar20 = (**(code **)(this->_padding_ + 0x20))(this);
        bVar22 = (byte)uVar27;
        uVar23 = (uint)(*(ushort *)(lVar20 + 0x2c) >> (bVar22 & 0x1f));
        local_58[0]._8_4_ = 1;
        if (1 < uVar23) {
          local_58[0]._8_4_ = uVar23;
        }
        uVar23 = *(uint *)(lVar20 + 0x28) >> (bVar22 & 0x1f);
        local_58[0]._4_4_ = 1;
        if (1 < uVar23) {
          local_58[0]._4_4_ = uVar23;
        }
        uVar23 = *(uint *)(lVar20 + 0x24) >> (bVar22 & 0x1f);
        local_58[0]._0_4_ = 1;
        if (1 < uVar23) {
          local_58[0]._0_4_ = uVar23;
        }
        FillGLTextureImage(this,pFVar11,local_res18,uVar27,0,
                           (TIntVector3<unsigned_int> *)&local_58[0]._s_0,pvVar4,(longlong)iVar2);
      }
      else if (iVar2 != 0) goto LAB_145c2b695;
      lVar17 = lVar17 + -0x10;
      uVar27 = uVar27 - 1;
      FVar25 = local_88;
      bVar6 = bVar14;
      bVar13 = bVar7;
      bVar8 = bVar9;
    } while (-1 < (int)uVar27);
  }
  uVar27 = UTexture::GMinTextureResidentMipCount;
  if (-1 < GOGLDeferTextureCreationKeepLowerMipCount) {
    uVar27 = GOGLDeferTextureCreationKeepLowerMipCount;
  }
  if ((((!param_1) ||
       (puVar21 = (uint *)(**(code **)(this->_padding_ + 0x20))(this), (*puVar21 >> 0x1c & 1) == 0))
      || (lVar17 = (**(code **)(this->_padding_ + 0x20))(this), *(byte *)(lVar17 + 0x30) < 2)) ||
     (this->bAlias != '\0')) {
    uVar27 = 0;
  }
  FTextureEvictionParams::ReleaseMipData((this->EvictionParamsPtr).Ptr,uVar27);
  bVar14 = CanBeEvicted(this);
  if (bVar14) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                  ::__l2::Lru,4000);
      atexit(`FTextureEvictionLRU::Get'::__l2::_dynamic_atexit_destructor_for__Lru__);
      _Init_thread_footer(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    bVar14 = FTextureEvictionLRU::Add
                       (&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                         ::__l2::Lru,this);
    if (!bVar14) {
      FTextureEvictionParams::ReleaseMipData((this->EvictionParamsPtr).Ptr,0);
    }
  }
  pFVar3 = (this->EvictionParamsPtr).Ptr;
  iVar2 = (pFVar3->TextureDebugName).Data.ArrayNum;
  uVar23 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar23 = 0;
  }
  if (uVar23 != 0) {
    if (iVar2 == 0) {
      pcVar24 = "";
    }
    else {
      pcVar24 = (char *)(pFVar3->TextureDebugName).Data.AllocatorInstance.Data;
    }
    SetOpenGLResourceName(this,pcVar24);
    if (uVar27 == 0) {
      FAnsiString::Empty(&pFVar3->TextureDebugName);
    }
  }
  pFVar3 = (this->EvictionParamsPtr).Ptr;
  iVar2 = (pFVar3->MipImageData).ArrayNum;
  pFVar28 = (pFVar3->MipImageData).AllocatorInstance.Data;
  pFVar26 = pFVar28 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((pFVar3->MipImageData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar28 == pFVar26) break;
    iVar29 = iVar29 + *(int *)(pFVar28 + 8);
    pFVar28 = pFVar28 + 0x10;
  }
  GTotalEvictedMipMemDuplicated = GTotalEvictedMipMemDuplicated + iVar29;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// SetAllocatedStorage @ 145c2cf20

void __thiscall FOpenGLTexture::SetAllocatedStorage(FOpenGLTexture *this,bool param_1)

{
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this_00;
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  this_00 = &this->bAllocatedStorage;
  lVar4 = (**(code **)(this->_padding_ + 0x20))();
  iVar5 = 1;
  if (this->bCubemap != '\0') {
    iVar5 = 6;
  }
  iVar5 = (uint)*(byte *)(lVar4 + 0x30) * iVar5;
  (this->bAllocatedStorage).NumBits = iVar5;
  uVar3 = iVar5 + 0x1f;
  uVar8 = uVar3 >> 5;
  if (uVar3 >> 5 != 0) {
    if ((this->bAllocatedStorage).MaxBits + 0x1fU >> 5 < uVar8) {
      TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar8,4);
      (this->bAllocatedStorage).MaxBits = uVar8 << 5;
    }
    FVar7 = (this->bAllocatedStorage).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)this_00;
    }
    if (uVar8 < 9) {
      for (uVar6 = (ulonglong)uVar8; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)FVar7 = -(uint)param_1;
        FVar7 = (ForElementType<unsigned_int>)((longlong)FVar7 + 4);
      }
    }
    else {
      memset((void *)FVar7,-(uint)param_1 & 0xff,(ulonglong)uVar8 << 2);
    }
    iVar5 = (this->bAllocatedStorage).NumBits;
    uVar8 = iVar5 >> 0x1f & 0x1f;
    uVar3 = iVar5 + uVar8;
    iVar5 = (uVar3 & 0x1f) - uVar8;
    if (iVar5 != 0) {
      FVar7 = (this->bAllocatedStorage).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<unsigned_int>)0x0) {
        FVar7 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar7 + (longlong)((int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
    }
  }
  return;
}

// TryEvictGLResource @ 145c32b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLTexture::TryEvictGLResource(FOpenGLTexture *this)

{
  undefined1 *puVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  HGLRC pHVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLTexture::TryEvictGLResource(void)_::_29_::FStat_STAT_OpenGLTryEvictGLResource>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->bCanCreateAsEvicted == '\0') {
    return;
  }
  if (((this->EvictionParamsPtr).Ptr)->bHasRestored == 0) {
    return;
  }
  bVar5 = CanBeEvicted(this);
  if (!bVar5) {
    return;
  }
  FVar12.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OpenGLTryEvictGLResource ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLTexture::TryEvictGLResource(void)_::_29_::FStat_STAT_OpenGLTryEvictGLResource>
         )0x0) {
      pFVar8 = ::FName::FName((FName *)&local_res8.s,"STAT_OpenGLTryEvictGLResource");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLTryEvictGLResource,*pFVar8,
                 L"STAT_OpenGLTryEvictGLResource","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_OpenGLTryEvictGLResource;
  if (StatPtr_STAT_OpenGLTryEvictGLResource ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLTexture::TryEvictGLResource(void)_::_29_::FStat_STAT_OpenGLTryEvictGLResource>
       )0x0) {
    pFVar8 = ::FName::FName(&local_res10,"STAT_OpenGLTryEvictGLResource");
    FVar9 = (FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLTexture::TryEvictGLResource(void)_::_29_::FStat_STAT_OpenGLTryEvictGLResource>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLTryEvictGLResource,*pFVar8
                         ,L"STAT_OpenGLTryEvictGLResource","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar5 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar6 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                   ,0x525);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_145c32d68;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_145c32d68:
  DeleteGLResource(this);
  ((this->EvictionParamsPtr).Ptr)->bHasRestored = 0;
  (**(code **)(this->_padding_ + 0x20))(this);
  FOpenGLDynamicRHI::InitializeGLTexture(FOpenGLDynamicRHI::Singleton,this,(void *)0x0,0);
  uVar6 = FTextureEvictionParams::GetTotalAllocated((this->EvictionParamsPtr).Ptr);
  GTotalEvictedMipMemDuplicated = GTotalEvictedMipMemDuplicated - uVar6;
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// TryRestoreGLResource @ 145c33990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLTexture::TryRestoreGLResource(FOpenGLTexture *this)

{
  bool bVar1;
  HGLRC pHVar2;
  
  if ((this->EvictionParamsPtr).Ptr != (FTextureEvictionParams *)0x0) {
    pHVar2 = wglGetCurrentContext();
    if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog
                (&`private:_void___cdecl_FOpenGLTexture::TryRestoreGLResource(void)___ptr64'::__l9::
                  LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if (((this->EvictionParamsPtr).Ptr)->bHasRestored == 0) {
      RestoreEvictedGLResource(this,true);
      return;
    }
    bVar1 = CanBeEvicted(this);
    if (bVar1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          InitializeCriticalSectionAndSpinCount
                    ((LPCRITICAL_SECTION)
                     &`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                      ::__l2::Lru,4000);
          atexit(`FTextureEvictionLRU::Get'::__l2::_dynamic_atexit_destructor_for__Lru__);
          _Init_thread_footer(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FTextureEvictionLRU::Touch
                (&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                  ::__l2::Lru,this);
      return;
    }
  }
  return;
}

// Unlock @ 145c353c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLTexture::Unlock(FOpenGLTexture *this,uint param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  FTextureEvictionParams *pFVar4;
  TOpenGLBuffer<FOpenGLBasePixelBuffer> *this_00;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FOpenGLDynamicRHI *pFVar11;
  bool bVar12;
  int iVar13;
  HGLRC pHVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_OpenGLUnlockTextureTime> FVar16;
  longlong lVar17;
  byte *pbVar18;
  byte bVar19;
  longlong lVar20;
  uint uVar21;
  FName FVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool local_res20;
  FColor_u_0 local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  FName local_80;
  FOpenGLDynamicRHI *local_78;
  FName local_70;
  TIntVector3<unsigned_int>_u_0 local_60;
  FOpenGLTextureFormat *local_50;
  FName local_48 [2];
  
  pHVar14 = wglGetCurrentContext();
  if (pHVar14 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar21 = 0;
  FVar16 = StatPtr_STAT_OpenGLUnlockTextureTime;
  if (StatPtr_STAT_OpenGLUnlockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLUnlockTextureTime>)0x0) {
    pFVar15 = ::FName::FName(local_48,"STAT_OpenGLUnlockTextureTime");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_OpenGLUnlockTextureTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLUnlockTextureTime,*pFVar15,
                        L"UnlockTexture time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar16;
  bVar8 = false;
  bVar10 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_145c3556d:
    bVar9 = false;
    FVar22 = local_70;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_94.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_94._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_80.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                   ,0x462);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145c3556d;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar9 = true;
  }
  bVar12 = IsEvicted(this);
  if (bVar12) {
    if ((param_2 != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayIndex == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                            ,0x467,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = (this->EvictionParamsPtr).Ptr;
    uVar23 = (pFVar4->MipImageData).ArrayNum;
    if (param_1 < uVar23) {
      if ((int)param_1 < (int)uVar23) {
        uVar21 = ~param_1 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(int *)((pFVar4->MipImageData).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10 + 8
                  ) != 0) goto LAB_145c35acc;
    }
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_594873122482551703>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                        ,0x469,
                        "MipIndex < (uint32)EvictionParamsPtr->MipImageData.Num() && EvictionParamsPtr->MipImageData[MipIndex].Num()"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    lVar17 = (**(code **)(this->_padding_ + 0x20))(this);
    lVar20 = 0x2c;
    if (*(char *)(lVar17 + 0x32) != '\x02') {
      lVar20 = 0x2e;
    }
    iVar13 = 1;
    if (this->bCubemap != '\0') {
      iVar13 = 6;
    }
    uVar23 = param_2 + (uint)*(ushort *)(lVar20 + lVar17) * iVar13 * param_1;
    local_88 = uVar23;
    lVar17 = (**(code **)(this->_padding_ + 0x20))(this);
    local_50 = GOpenGLTextureFormats + *(byte *)(lVar17 + 0x33);
    pbVar18 = (byte *)(**(code **)(this->_padding_ + 0x20))(this);
    local_res20 = (bool)(*pbVar18 >> 4 & 1);
    if (((this->PixelBuffers).ArrayNum <= (int)uVar23) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferIndex < PixelBuffers.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                            ,0x471,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar25 = ~uVar23 >> 0x1f;
    uVar24 = uVar21;
    if ((int)uVar23 < (this->PixelBuffers).ArrayNum) {
      uVar24 = uVar25;
    }
    if ((uVar24 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = *(TOpenGLBuffer<FOpenGLBasePixelBuffer> **)
               ((this->PixelBuffers).AllocatorInstance.Data + (longlong)(int)uVar23 * 8);
    if (this_00 == (TOpenGLBuffer<FOpenGLBasePixelBuffer> *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidRef(PixelBuffer)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                          ,0x474,L"");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    }
    if ((int)uVar23 < (this->PixelBuffers).ArrayNum) {
      uVar21 = uVar25;
    }
    if ((uVar21 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((*(longlong *)((this->PixelBuffers).AllocatorInstance.Data + (longlong)(int)uVar23 * 8) == 0
        ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidRef(PixelBuffers[BufferIndex])",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                                  ,0x4b5,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TOpenGLBuffer<FOpenGLBasePixelBuffer>::Unlock(this_00);
    if (this_00->bIsLockReadOnly == 0) {
      local_78 = FOpenGLDynamicRHI::Singleton;
      lVar17 = (**(code **)(this->_padding_ + 0x20))(this);
      local_8c = (uint)*(byte *)(lVar17 + 0x30);
      TryRestoreGLResource(this);
      uVar21 = this->Resource;
      local_90 = this->Target;
      if ((FOpenGLBase::MaxCombinedTextureImageUnits == -1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("MaxCombinedTextureImageUnits != -1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                              ,0x7c,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar24 = FOpenGLBase::MaxCombinedTextureImageUnits - 1;
      uVar23 = 0;
      if ((int)uVar24 < (int)(local_78->ContextState)._padding_) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar17 = (local_78->ContextState)._padding_;
      if ((*(uint *)(lVar17 + 0x10 + (longlong)(int)uVar24 * 0x28) != local_90) ||
         (*(uint *)(lVar17 + 0x14 + (longlong)(int)uVar24 * 0x28) != uVar21)) {
        FOpenGLDynamicRHI::CachedSetupTextureStageInner(local_78,uVar24,local_90,uVar21,-1,local_8c)
        ;
      }
      lVar17 = (**(code **)(this->_padding_ + 0x20))(this);
      bVar19 = (byte)param_1;
      uVar23 = *(uint *)(lVar17 + 0x28) >> (bVar19 & 0x1f);
      uVar21 = *(uint *)(lVar17 + 0x24) >> (bVar19 & 0x1f);
      uVar24 = (uint)(*(ushort *)(lVar17 + 0x2c) >> (bVar19 & 0x1f));
      local_60._s_0.X = 1;
      if (1 < uVar21) {
        local_60._s_0.X = uVar21;
      }
      local_60._s_0.Y = 1;
      if (1 < uVar23) {
        local_60._s_0.Y = uVar23;
      }
      local_60._s_0.Z = 1;
      if (1 < uVar24) {
        local_60._s_0.Z = uVar24;
      }
      FillGLTextureImage(this,local_50,local_res20,param_1,param_2,
                         (TIntVector3<unsigned_int> *)&local_60._s_0,(void *)0x0,
                         (ulonglong)(uint)this_00->_padding_);
      uVar23 = local_88;
    }
    uVar21 = 0;
    if ((int)uVar23 < (this->PixelBuffers).ArrayNum) {
      uVar21 = uVar25;
    }
    if ((uVar21 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (this->PixelBuffers).AllocatorInstance.Data;
    puVar6 = *(undefined8 **)(pFVar5 + (longlong)(int)uVar23 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(pFVar5 + (longlong)(int)uVar23 * 8) = 0;
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    pFVar11 = FOpenGLDynamicRHI::Singleton;
    pHVar14 = wglGetCurrentContext();
    if (pHVar14 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog
                (&`public:_void___cdecl_FOpenGLDynamicRHI::CachedBindBuffer(unsigned_int,unsigned_int)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((pFVar11->ContextState).PixelUnpackBufferBound != 0) {
      (*glBindBuffer)(0x88ec,0);
      (pFVar11->ContextState).PixelUnpackBufferBound = 0;
    }
    if (this_00 != (TOpenGLBuffer<FOpenGLBasePixelBuffer> *)0x0) {
      plVar2 = &this_00->_padding_;
      *(int *)plVar2 = (int)*plVar2 + -1;
      if ((int)*plVar2 == 0) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
  }
LAB_145c35acc:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// UpdateTextureStats @ 145c36cf0

void __cdecl FOpenGLTexture::UpdateTextureStats(FOpenGLTexture *param_1,bool param_2)

{
  ETextureCreateFlags EVar1;
  ETextureCreateFlags *pEVar2;
  ELLMTag EVar3;
  ulong64 uVar4;
  FLLMPauseScope local_28;
  FLLMPauseScope local_18;
  
  pEVar2 = (ETextureCreateFlags *)(**(code **)(param_1->_padding_ + 0x20))();
  uVar4 = (ulong64)param_1->MemorySize;
  UE::RHICore::UpdateGlobalTextureStats
            (*pEVar2,*(ETextureDimension *)((longlong)pEVar2 + 0x32),(ulonglong)param_1->MemorySize,
             false,param_2);
  if (!param_2) {
    uVar4 = -uVar4;
  }
  EVar1 = *pEVar2;
  FLLMPauseScope::FLLMPauseScope(&local_18,GraphicsPlatform,false,uVar4,Platform,None);
  EVar3 = Textures;
  if ((EVar1 & (DepthStencilTargetable|ResolveTargetable|RenderTargetable)) != None) {
    EVar3 = RenderTargets;
  }
  FLLMPauseScope::FLLMPauseScope(&local_28,EVar3,false,uVar4,Default,None);
  FLLMPauseScope::~FLLMPauseScope(&local_28);
  FLLMPauseScope::~FLLMPauseScope(&local_18);
  return;
}

