// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 43

// IsDumped<unsigned_char> @ 145d064c0

bool __thiscall
FRDGResourceDumpContext::IsDumped<unsigned_char>(FRDGResourceDumpContext *this,uchar *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->IsDumpedToDisk).Elements.field_0x8 !=
      *(int *)&(this->IsDumpedToDisk).Elements.field_0x34) {
    FVar3 = (this->IsDumpedToDisk).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->IsDumpedToDisk).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->IsDumpedToDisk).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4)
    ;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->IsDumpedToDisk).Elements;
      do {
        if (*(uchar **)(lVar1 + (longlong)iVar2 * 0x10) == param_1) goto LAB_145d0655a;
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_145d0655a:
  return iVar2 != -1;
}

// IsDumped<FShaderParametersMetadata> @ 145d06570

bool __thiscall
FRDGResourceDumpContext::IsDumped<FShaderParametersMetadata>
          (FRDGResourceDumpContext *this,FShaderParametersMetadata *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->IsDumpedToDisk).Elements.field_0x8 !=
      *(int *)&(this->IsDumpedToDisk).Elements.field_0x34) {
    FVar3 = (this->IsDumpedToDisk).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->IsDumpedToDisk).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->IsDumpedToDisk).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4)
    ;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->IsDumpedToDisk).Elements;
      do {
        if (*(FShaderParametersMetadata **)(lVar1 + (longlong)iVar2 * 0x10) == param_1)
        goto LAB_145d0660a;
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_145d0660a:
  return iVar2 != -1;
}

// FRDGResourceDumpContext @ 145d0ac90

FRDGResourceDumpContext * __thiscall
FRDGResourceDumpContext::FRDGResourceDumpContext(FRDGResourceDumpContext *this)

{
  TAtomic<double> *pTVar1;
  longlong lVar2;
  
  this->bEnableDiskWrite = false;
  this->bUpload = false;
  this->DeltaTime = 0.0;
  this->DumpedFrameId = 0;
  (this->UploadResourceCompressionName).Number = 0;
  (this->DumpingDirectoryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DumpingDirectoryPath).Data.ArrayNum = 0;
  (this->DumpingDirectoryPath).Data.ArrayMax = 0;
  (this->Time).Ticks = 0;
  (this->MemoryConstants).TotalPhysical = 0;
  (this->MemoryConstants).TotalVirtual = 0;
  (this->MemoryConstants).PageSize = 0;
  (this->MemoryConstants).OsAllocationGranularity = 0;
  (this->MemoryConstants).BinnedPageSize = 0;
  (this->MemoryConstants).BinnedAllocationGranularity = 0;
  (this->MemoryConstants).AddressStart = 0;
  (this->MemoryConstants).AddressLimit = 0x100000000;
  this->bStream = false;
  this->FrameCount = 1;
  (this->UploadResourceCompressionName).ComparisonIndex = 0;
  (this->MemoryConstants).TotalPhysicalGB = 1;
  FGenericPlatformMemoryStats::FGenericPlatformMemoryStats(&this->MemoryStats);
  *(undefined8 *)&this->LastResourceVersion = 0;
  *(undefined8 *)&(this->LastResourceVersion).field_0x8 = 0;
  *(undefined8 *)&(this->LastResourceVersion).field_0x20 = 0;
  lVar2 = 7;
  this->ResourcesDumpPasses = 0;
  this->ResourcesDumpExecutedPasses = 0;
  this->GraphBuilderIndex = 0;
  this->PassesCount = 0;
  *(undefined4 *)&(this->LastResourceVersion).field_0x28 = 0;
  *(undefined4 *)&(this->LastResourceVersion).field_0x2c = 0x80;
  *(undefined4 *)&(this->LastResourceVersion).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LastResourceVersion).field_0x34 = 0;
  *(undefined8 *)&(this->LastResourceVersion).field_0x40 = 0;
  *(undefined4 *)&(this->LastResourceVersion).field_0x48 = 0;
  *(undefined8 *)&(this->IsDumpedToDisk).Elements = 0;
  *(undefined8 *)&(this->IsDumpedToDisk).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IsDumpedToDisk).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IsDumpedToDisk).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IsDumpedToDisk).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IsDumpedToDisk).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IsDumpedToDisk).Elements.field_0x34 = 0;
  (this->IsDumpedToDisk).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IsDumpedToDisk).HashSize = 0;
  this->MetadataFilesOpened = (TAtomic<int>)0x0;
  this->MetadataFilesWriteBytes = (TAtomic<__int64>)0x0;
  this->ParametersFilesOpened = (TAtomic<int>)0x0;
  this->ParametersFilesWriteBytes = (TAtomic<__int64>)0x0;
  this->ResourceBinaryFilesOpened = (TAtomic<int>)0x0;
  this->ResourceBinaryWriteBytes = (TAtomic<__int64>)0x0;
  this->bOverrideFixedDeltaTime = false;
  this->PreviousFixedDeltaTime = 0.0;
  this->TimingBucket[0] = (TAtomic<double>)0x0;
  this->TimingBucket[1] = (TAtomic<double>)0x0;
  this->TimingBucket[2] = (TAtomic<double>)0x0;
  this->TimingBucket[3] = (TAtomic<double>)0x0;
  this->TimingBucket[4] = (TAtomic<double>)0x0;
  this->TimingBucket[5] = (TAtomic<double>)0x0;
  this->TimingBucket[6] = (TAtomic<double>)0x0;
  this->bShowInExplore = false;
  (this->StagingTexturePool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingTexturePool).ArrayNum = 0;
  (this->StagingTexturePool).ArrayMax = 0;
  (this->StagingBufferPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingBufferPool).ArrayNum = 0;
  (this->StagingBufferPool).ArrayMax = 0;
  pTVar1 = this->TimingBucket;
  do {
    LOCK();
    *pTVar1 = (TAtomic<double>)0x0;
    UNLOCK();
    lVar2 = lVar2 + -1;
    pTVar1 = pTVar1 + 1;
  } while (lVar2 != 0);
  return this;
}

// operator() @ 145d0ccd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
`FRDGResourceDumpContext::DumpRenderingCVarsToCSV'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  char cVar1;
  EConsoleVariableFlags EVar2;
  ulonglong uVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  ENullTerminatedString EVar6;
  ENullTerminatedString EVar7;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  wchar_t *local_100;
  FString local_f8;
  wchar_t *local_e8;
  int local_e0;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar3 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
  if (((uVar3 & 8) == 0) &&
     (plVar4 = (longlong *)(**(code **)(param_2->_padding_ + 0x38))(param_2),
     plVar4 != (longlong *)0x0)) {
    EVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
    cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
    if ((cVar1 != '\0') ||
       (((cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4), cVar1 != '\0' ||
         (cVar1 = (**(code **)(*plVar4 + 0x50))(plVar4), cVar1 != '\0')) ||
        (cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4), cVar1 != '\0')))) {
      pwVar5 = GetConsoleVariableSetByName(EVar2);
      (**(code **)(*plVar4 + 0xd8))(plVar4,&local_e8);
      local_100 = L"";
      if (local_e0 != 0) {
        local_100 = local_e8;
      }
      local_108 = pwVar5;
      ::FString::PrintfImpl(&local_f8,L"%s,%s,%s,%s\n");
      EVar7 = No;
      local_d8._padding_ = 0;
      EVar6 = local_f8.Data.ArrayNum - Yes;
      if (local_f8.Data.ArrayNum == 0) {
        EVar6 = EVar7;
      }
      if (local_f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        local_d8.StringLength = 0;
        local_d8.Ptr = (char *)0x0;
      }
      else {
        if ((0 < (int)EVar6) &&
           (*(short *)(local_f8.Data.AllocatorInstance.Data + (longlong)(int)EVar6 * 2 + -2) == 0))
        {
          EVar7 = Yes;
          EVar6 = EVar6 - Yes;
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::Init
                  (&local_d8,(wchar_t *)local_f8.Data.AllocatorInstance.Data,EVar6,EVar7);
      }
      (**(code **)(*(longlong *)**(undefined8 **)this + 0x188))
                ((longlong *)**(undefined8 **)this,local_d8.Ptr,(longlong)local_d8.StringLength);
      if ((void *)local_d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_d8._padding_);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_e8 != (wchar_t *)0x0) {
        FMemory::Free(local_e8);
      }
    }
  }
  return;
}

// operator() @ 145d0d2f0

void __thiscall
`FRDGResourceDumpContext::LandCompletedResources'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x28) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Staging->WriteToDiskComplete",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x70b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (**(int **)((longlong)this + 8) != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Staging->Status == FStagingResourceStatus::WritingToDisk",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x70c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FRDGResourceDumpContext::PostProcessTexture
            (*(FRDGResourceDumpContext **)this,
             (FTextureSubresourceDumpDesc *)(*(longlong *)((longlong)this + 8) + 0x30),
             *(void **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18),
             *(int *)((longlong)this + 0x1c),&local_28);
  FRDGResourceDumpContext::DumpResourceBinaryToFile
            (*(FRDGResourceDumpContext **)this,(uchar *)local_28.AllocatorInstance.Data,
             local_28.ArrayNum,(FString *)(*(longlong *)((longlong)this + 8) + 8));
  **(undefined4 **)((longlong)this + 8) = 4;
  (**(code **)(**(longlong **)(*(longlong *)((longlong)this + 8) + 0x28) + 0x10))();
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 145d0d3f0

/* WARNING: Removing unreachable block (ram,0x000145d0dbad) */
/* WARNING: Removing unreachable block (ram,0x000145d0dbbf) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRDGResourceDumpContext::AddDumpBufferPass'::__l30::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  double *pdVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  FRDGResource *pFVar4;
  FRHIStagingBuffer *pFVar5;
  double dVar6;
  longlong lVar7;
  code *pcVar8;
  FRHICommandListBase *pFVar9;
  FRHIResource *pFVar10;
  bool bVar11;
  FStagingBufferPoolEntry *pFVar12;
  IFileManager *pIVar13;
  longlong *plVar14;
  IRHIComputeContext *pIVar15;
  FRHICommandBase *pFVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  FRHIResource *pFVar21;
  int iVar22;
  ForAnyElementType FVar23;
  double dVar24;
  uint local_res8 [2];
  FRHICommandListBase *local_res10;
  FRHIResource *local_res18;
  FRHIResource *local_res20;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60;
  FString local_58;
  
  local_res10 = (FRHICommandListBase *)param_1;
  bVar11 = IsInRenderingThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                          ,0x67f,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar17 = *(longlong *)this;
  if (*(char *)(lVar17 + 2) == '\0') {
    QueryPerformanceCounter(&local_a8);
    (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_res18);
    pFVar10 = local_res18;
    local_b8.QuadPart = (LONGLONG)local_res18;
    aVar3 = (local_res18->AtomicFlags).Packed;
    if ((((uint)aVar3 >> 0x1e & 1) != 0) || (((uint)aVar3 & 0x3fffffff) == 0)) {
      `FRHIResource::DisableLifetimeExtension'::__l2::<lambda_1>::operator()(local_res8);
    }
    pFVar10->field_0xd = pFVar10->field_0xd & 0xfd;
    (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,&local_res20,&GDumpGPUBufferFenceName);
    pFVar10 = local_res20;
    QueryPerformanceCounter(&local_b0);
    plVar18 = (longlong *)0x0;
    plVar14 = plVar18;
    if ((longlong *)(local_b0.QuadPart - (longlong)local_a8) != (longlong *)0x0) {
      plVar14 = (longlong *)(local_b0.QuadPart - (longlong)local_a8);
    }
    dVar24 = (double)plVar14 * FGenericPlatformTime::SecondsPerCycle64;
    do {
      dVar6 = *(double *)(lVar17 + 0x1e0);
      LOCK();
      bVar11 = dVar6 == *(double *)(lVar17 + 0x1e0);
      if (bVar11) {
        *(double *)(lVar17 + 0x1e0) = dVar24 + dVar6;
      }
      UNLOCK();
    } while (!bVar11);
    plVar14 = plVar18;
    if ((*(FRDGResourceDumpContext **)this)->bEnableDiskWrite != false) {
      FRDGResourceDumpContext::GetDumpFullPath
                (*(FRDGResourceDumpContext **)this,&local_58,(FString *)((longlong)this + 8));
      lVar17 = *(longlong *)this;
      QueryPerformanceCounter(&local_c0);
      LOCK();
      *(int *)(lVar17 + 0x1d0) = *(int *)(lVar17 + 0x1d0) + 1;
      UNLOCK();
      LOCK();
      *(undefined8 *)(lVar17 + 0x1d8) = *(undefined8 *)(lVar17 + 0x1d8);
      UNLOCK();
      pIVar13 = IFileManager::Get();
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar23.Data = local_58.Data.AllocatorInstance.Data;
      }
      plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x20))(pIVar13,FVar23.Data,0);
      QueryPerformanceCounter(&local_a0);
      plVar19 = plVar18;
      if ((longlong *)(local_a0.QuadPart - (longlong)local_c0) != (longlong *)0x0) {
        plVar19 = (longlong *)(local_a0.QuadPart - (longlong)local_c0);
      }
      dVar24 = (double)plVar19 * FGenericPlatformTime::SecondsPerCycle64;
      do {
        dVar6 = *(double *)(lVar17 + 0x210);
        LOCK();
        bVar11 = dVar6 == *(double *)(lVar17 + 0x210);
        if (bVar11) {
          *(double *)(lVar17 + 0x210) = dVar24 + dVar6;
        }
        UNLOCK();
      } while (!bVar11);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    iVar22 = *(int *)((longlong)this + 0x20);
    local_res8[0] = 0;
    pFVar21 = local_res18;
    if (0 < iVar22) {
      do {
        lVar17 = *(longlong *)this;
        iVar22 = iVar22 - (int)plVar18;
        if (*(int *)((longlong)this + 0x24) < iVar22) {
          iVar22 = *(int *)((longlong)this + 0x24);
        }
        QueryPerformanceCounter(&local_90);
        pFVar4 = *(FRDGResource **)((longlong)this + 0x18);
        FRDGResource::ValidateRHIAccess(pFVar4);
        pFVar9 = local_res10;
        local_c8 = (LARGE_INTEGER)pFVar4->ResourceRHI;
        if ((GRHICommandList.bLatchedBypass == false) ||
           ((local_res10->PersistentState).bImmediate == '\0')) {
          pFVar16 = FMemStackBase::Alloc(&local_res10->MemManager,0x28,8);
          pFVar9->NumCommands = pFVar9->NumCommands + 1;
          *pFVar9->CommandLink = pFVar16;
          pFVar9->CommandLink = &pFVar16->Next;
          pFVar16->Next = (FRHICommandBase *)0x0;
          pFVar16->_padding_ = (longlong)&___7FRHICommandCopyToStagingBuffer__6B_;
          ((LARGE_INTEGER *)(pFVar16 + 1))->QuadPart = (LONGLONG)local_c8;
          *(uint *)&pFVar16[2]._padding_ = local_res8[0];
          pFVar16[1].Next = (FRHICommandBase *)pFVar21;
          *(int *)((longlong)&pFVar16[2]._padding_ + 4) = iVar22;
        }
        else {
          pIVar15 = FRHICommandListBase::GetComputeContext(local_res10);
          (**(code **)(pIVar15->_padding_ + 0xd8))
                    (pIVar15,local_c8.QuadPart,pFVar21,local_res8[0],iVar22);
        }
        QueryPerformanceCounter(&local_98);
        uVar20 = 0;
        if (local_98.QuadPart - (longlong)local_90 != 0) {
          uVar20 = local_98.QuadPart - (longlong)local_90;
        }
        dVar24 = (double)uVar20 * FGenericPlatformTime::SecondsPerCycle64;
        do {
          dVar6 = *(double *)(lVar17 + 0x1e0);
          pdVar1 = (double *)(lVar17 + 0x1e0);
          LOCK();
          bVar11 = dVar6 == *pdVar1;
          if (bVar11) {
            *pdVar1 = dVar24 + dVar6;
          }
          UNLOCK();
        } while (!bVar11);
        lVar17 = *(longlong *)this;
        QueryPerformanceCounter(&local_80);
        pFVar21 = local_res20;
        (**(code **)(local_res20->_padding_ + 0x10))(local_res20);
        param_1 = (FRHICommandListImmediate *)local_res10;
        (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,local_res10,pFVar21);
        FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
        FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
        QueryPerformanceCounter(&local_88);
        pFVar21 = local_res18;
        uVar20 = 0;
        if (local_88.QuadPart - (longlong)local_80 != 0) {
          uVar20 = local_88.QuadPart - (longlong)local_80;
        }
        dVar24 = (double)uVar20 * FGenericPlatformTime::SecondsPerCycle64;
        do {
          dVar6 = *(double *)(lVar17 + 0x1f0);
          pdVar1 = (double *)(lVar17 + 0x1f0);
          LOCK();
          bVar11 = dVar6 == *pdVar1;
          if (bVar11) {
            *pdVar1 = dVar24 + dVar6;
          }
          UNLOCK();
        } while (!bVar11);
        lVar17 = (**(code **)(GDynamicRHI->_padding_ + 0xf8))
                           (GDynamicRHI,param_1,local_res18,local_res20,0,iVar22);
        if (lVar17 == 0) {
          if (2 < (byte)LogDumpGPU._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:___cdecl_`public:_void___cdecl_FRDGResourceDumpContext::AddDumpBufferPass(FRDGBuilder&___ptr64,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>&___ptr64,FRDGPass_const*___ptr64,FRDGBuffer*___ptr64,bool)___ptr64'::`30'::<lambda_1>::operator()(FRHICommandListImmediate&___ptr64)const___ptr64'
                        ::__l40::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
          }
          break;
        }
        if (plVar14 != (longlong *)0x0) {
          lVar7 = *(longlong *)this;
          QueryPerformanceCounter(&local_70);
          LOCK();
          *(undefined4 *)(lVar7 + 0x1d0) = *(undefined4 *)(lVar7 + 0x1d0);
          UNLOCK();
          LOCK();
          *(longlong *)(lVar7 + 0x1d8) = *(longlong *)(lVar7 + 0x1d8) + (longlong)iVar22;
          UNLOCK();
          (**(code **)(*plVar14 + 0x188))(plVar14,lVar17);
          (**(code **)(*plVar14 + 0x208))(plVar14);
          QueryPerformanceCounter(&local_78);
          uVar20 = 0;
          if (local_78.QuadPart - (longlong)local_70 != 0) {
            uVar20 = local_78.QuadPart - (longlong)local_70;
          }
          dVar24 = (double)uVar20 * FGenericPlatformTime::SecondsPerCycle64;
          do {
            dVar6 = *(double *)(lVar7 + 0x210);
            LOCK();
            bVar11 = dVar6 == *(double *)(lVar7 + 0x210);
            if (bVar11) {
              *(double *)(lVar7 + 0x210) = dVar24 + dVar6;
            }
            UNLOCK();
            pFVar21 = local_res18;
          } while (!bVar11);
        }
        (**(code **)(GDynamicRHI->_padding_ + 0x100))(GDynamicRHI,param_1,pFVar21);
        local_res8[0] = local_res8[0] + *(int *)((longlong)this + 0x24);
        plVar18 = (longlong *)(ulonglong)local_res8[0];
        iVar22 = *(int *)((longlong)this + 0x20);
      } while ((int)local_res8[0] < iVar22);
    }
    if (plVar14 != (longlong *)0x0) {
      lVar17 = *(longlong *)this;
      QueryPerformanceCounter(&local_60);
      LOCK();
      *(undefined4 *)(lVar17 + 0x1d0) = *(undefined4 *)(lVar17 + 0x1d0);
      UNLOCK();
      LOCK();
      *(undefined8 *)(lVar17 + 0x1d8) = *(undefined8 *)(lVar17 + 0x1d8);
      UNLOCK();
      (**(code **)(*plVar14 + 0x210))(plVar14);
      (**(code **)*plVar14)(plVar14,1);
      QueryPerformanceCounter(&local_68);
      uVar20 = 0;
      if (local_68.QuadPart - (longlong)local_60 != 0) {
        uVar20 = local_68.QuadPart - (longlong)local_60;
      }
      dVar24 = (double)uVar20 * FGenericPlatformTime::SecondsPerCycle64;
      do {
        dVar6 = *(double *)(lVar17 + 0x210);
        LOCK();
        bVar11 = dVar6 == *(double *)(lVar17 + 0x210);
        if (bVar11) {
          *(double *)(lVar17 + 0x210) = dVar24 + dVar6;
        }
        UNLOCK();
      } while (!bVar11);
    }
    if ((FRHIResource *)local_b8.QuadPart != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b8);
    }
    if (pFVar10 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar10);
    }
    FRDGResourceDumpContext::ReleaseRHIResources(*(FRDGResourceDumpContext **)this,param_1);
  }
  else {
    if ((*(int *)((longlong)this + 0x20) != *(int *)((longlong)this + 0x24)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ByteSize == StagingResourceByteSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                            ,0x682,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar12 = FRDGResourceDumpContext::ReuseStagingBuffer
                        (*(FRDGResourceDumpContext **)this,param_1,*(int *)((longlong)this + 0x24));
    ::FString::operator=((FString *)&pFVar12->_padding_,(FString *)((longlong)this + 8));
    lVar17 = *(longlong *)this;
    QueryPerformanceCounter(&local_b8);
    pFVar4 = *(FRDGResource **)((longlong)this + 0x18);
    uVar2 = *(uint *)((longlong)this + 0x20);
    pFVar5 = (pFVar12->StagingBuffer).Reference;
    FRDGResource::ValidateRHIAccess(pFVar4);
    FRHIComputeCommandList::CopyToStagingBuffer
              ((FRHIComputeCommandList *)local_res10,(FRHIBuffer *)pFVar4->ResourceRHI,pFVar5,0,
               uVar2);
    (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,local_res10,pFVar12->_padding_);
    QueryPerformanceCounter(&local_c8);
    uVar20 = 0;
    if (local_c8.QuadPart - (longlong)local_b8 != 0) {
      uVar20 = local_c8.QuadPart - (longlong)local_b8;
    }
    dVar24 = (double)uVar20 * FGenericPlatformTime::SecondsPerCycle64;
    do {
      dVar6 = *(double *)(lVar17 + 0x1e0);
      pdVar1 = (double *)(lVar17 + 0x1e0);
      LOCK();
      bVar11 = dVar6 == *pdVar1;
      if (bVar11) {
        *pdVar1 = dVar24 + dVar6;
      }
      UNLOCK();
    } while (!bVar11);
  }
  iVar22 = *(int *)(*(longlong *)this + 0xf4) + 1;
  *(int *)(*(longlong *)this + 0xf4) = iVar22;
  if ((iVar22 == (iVar22 / 10) * 10) && (3 < (byte)LogDumpGPU._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FRDGResourceDumpContext::UpdatePassProgress(void)___ptr64'::
                __l6::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
  }
  return;
}

// operator() @ 145d0dc70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FRDGResourceDumpContext::AddDumpTextureSubResourcePass'::__l44::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRDGResourceDumpContext *this_00;
  FRDGResource *pFVar1;
  FRHITexture *pFVar2;
  int iVar3;
  FRHITexture *pFVar4;
  
  pFVar2 = (FRHITexture *)0x0;
  this_00 = *(FRDGResourceDumpContext **)((longlong)this + 8);
  pFVar4 = pFVar2;
  if (*(char *)((longlong)this + 0x48) != '\0') {
    pFVar1 = (FRDGResource *)**(undefined8 **)this;
    FRDGResource::ValidateRHIAccess(pFVar1);
    pFVar4 = (FRHITexture *)pFVar1->ResourceRHI;
  }
  if (*(char *)((longlong)this + 0x48) == '\0') {
    pFVar1 = *(FRDGResource **)((longlong)this + 0x30);
    FRDGResource::ValidateRHIAccess(pFVar1);
    pFVar2 = (FRHITexture *)pFVar1->ResourceRHI;
  }
  FRDGResourceDumpContext::DumpTextureSubResource
            (this_00,param_1,*(wchar_t **)(*(longlong *)((longlong)this + 0x30) + 8),pFVar2,
             (FRHIShaderResourceView *)pFVar4,(FTextureSubresourceDumpDesc *)((longlong)this + 0x38)
             ,(FString *)((longlong)this + 0x10));
  if ((*(FRDGResourceDumpContext **)((longlong)this + 8))->bStream == false) {
    FRDGResourceDumpContext::ReleaseRHIResources
              (*(FRDGResourceDumpContext **)((longlong)this + 8),param_1);
  }
  iVar3 = *(int *)(*(longlong *)((longlong)this + 8) + 0xf4) + 1;
  *(int *)(*(longlong *)((longlong)this + 8) + 0xf4) = iVar3;
  if ((iVar3 == (iVar3 / 10) * 10) && (3 < (byte)LogDumpGPU._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FRDGResourceDumpContext::UpdatePassProgress(void)___ptr64'::
                __l6::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
    return;
  }
  return;
}

// operator() @ 145d0e620

void __thiscall
`FRDGResourceDumpContext::LandCompletedResources'::__l51::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x28) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Staging->WriteToDiskComplete",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x739,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (**(int **)((longlong)this + 8) != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Staging->Status == FStagingResourceStatus::WritingToDisk",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x73a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRDGResourceDumpContext::DumpResourceBinaryToFile
            (*(FRDGResourceDumpContext **)this,*(uchar **)((longlong)this + 0x10),
             (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 0x30),
             (FString *)(*(longlong *)((longlong)this + 8) + 8));
  **(undefined4 **)((longlong)this + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x000145d0e6bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)((longlong)this + 8) + 0x28) + 0x10))();
  return;
}

// operator() @ 145d0e6d0

void __thiscall `FRDGResourceDumpContext::Start'::__l76::<lambda_2>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  uint uVar9;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar4 = &::FString::FString(&local_28,L"Extras")->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_58,pTVar4,0xf - (uint)(pTVar4->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_58,L"GPUDumpViewer",0xd);
  pFVar5 = FPaths::EngineDir(&local_38);
  ::FString::ConcatFF(&local_48,pFVar5,(FString *)&local_58);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar3 = local_48.Data.ArrayNum;
  FVar7.Data = local_48.Data.AllocatorInstance.Data;
  plVar1 = *(longlong **)((longlong)this + 8);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = local_48.Data.ArrayNum;
  pcVar2 = *(code **)(*plVar1 + 0x208);
  uVar9 = (0x14 - (uint)(local_48.Data.ArrayNum != 0)) + local_48.Data.ArrayNum;
  if ((int)uVar9 < local_48.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  pTVar4 = &local_58;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar9,0,&pTVar4->AllocatorInstance,local_48.Data.ArrayNum,&local_58.ArrayMax);
  if (iVar3 != 0) {
    memcpy(local_58.AllocatorInstance.Data,FVar7.Data,(longlong)iVar3 * 2);
  }
  ::FString::PathAppend((FString *)&local_58,L"GPUDumpViewer.html",0x12);
  pwVar8 = L"";
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_58.ArrayNum != 0) {
    FVar7.Data = local_58.AllocatorInstance.Data;
  }
  pFVar5 = ::operator/(&local_28,(FString *)(*(longlong *)this + 0x18),L"GPUDumpViewer.html");
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(plVar1,pwVar6,FVar7.Data,0,(ulonglong)pTVar4 & 0xffffffffffffff00);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  iVar3 = local_48.Data.ArrayNum;
  FVar7.Data = local_48.Data.AllocatorInstance.Data;
  plVar1 = *(longlong **)((longlong)this + 8);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = local_48.Data.ArrayNum;
  pcVar2 = *(code **)(*plVar1 + 0x208);
  uVar9 = (0x17 - (uint)(local_48.Data.ArrayNum != 0)) + local_48.Data.ArrayNum;
  if (local_48.Data.ArrayNum <= (int)uVar9) {
    pTVar4 = &local_58;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar9,0,&pTVar4->AllocatorInstance,local_48.Data.ArrayNum,&local_58.ArrayMax);
    if (iVar3 != 0) {
      memcpy(local_58.AllocatorInstance.Data,FVar7.Data,(longlong)iVar3 * 2);
    }
    ::FString::PathAppend((FString *)&local_58,L"OpenGPUDumpViewer.bat",0x15);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_58.ArrayNum != 0) {
      FVar7.Data = local_58.AllocatorInstance.Data;
    }
    pFVar5 = ::operator/(&local_28,(FString *)(*(longlong *)this + 0x18),L"OpenGPUDumpViewer.bat");
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    (*pcVar2)(plVar1,pwVar6,FVar7.Data,0,(ulonglong)pTVar4 & 0xffffffffffffff00);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
    plVar1 = *(longlong **)((longlong)this + 8);
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_48.Data.ArrayNum;
    pcVar2 = *(code **)(*plVar1 + 0x208);
    uVar9 = (0x16 - (uint)(local_48.Data.ArrayNum != 0)) + local_48.Data.ArrayNum;
    if (local_48.Data.ArrayNum <= (int)uVar9) {
      pTVar4 = &local_58;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar9,0,&pTVar4->AllocatorInstance,local_48.Data.ArrayNum,&local_58.ArrayMax);
      if (local_48.Data.ArrayNum != 0) {
        memcpy(local_58.AllocatorInstance.Data,FVar7.Data,(longlong)local_48.Data.ArrayNum * 2);
      }
      ::FString::PathAppend((FString *)&local_58,L"OpenGPUDumpViewer.sh",0x14);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_58.ArrayNum != 0) {
        FVar7.Data = local_58.AllocatorInstance.Data;
      }
      pFVar5 = ::operator/(&local_28,(FString *)(*(longlong *)this + 0x18),L"OpenGPUDumpViewer.sh");
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      (*pcVar2)(plVar1,pwVar8,FVar7.Data,0,(ulonglong)pTVar4 & 0xffffffffffffff00);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
}

// AddDumpBufferPass @ 145d10160

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
FRDGResourceDumpContext::AddDumpBufferPass
          (FRDGResourceDumpContext *this,FRDGBuilder *param_1,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_3,FRDGPass *param_4,
          FRDGBuffer *param_5,bool param_6)

{
  FString *pFVar1;
  int *piVar2;
  FShaderParametersMetadata *pFVar3;
  ulonglong uVar4;
  TConsoleVariableData<int> *pTVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  TJsonValueString<wchar_t> *this_00;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined8 *puVar10;
  FRDGEventName *pFVar11;
  code *pcVar12;
  int iVar13;
  FRDGPass *pFVar14;
  int iVar15;
  undefined1 local_148;
  undefined8 *local_138;
  FString local_130;
  FString local_120;
  undefined8 local_110;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_108;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_100;
  FString local_f0;
  FString local_e0;
  <lambda_1> local_d0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_a0;
  TSharedPtr<FJsonValue,1> local_90;
  TSharedPtr<FJsonValue,1> local_80;
  TSharedPtr<FJsonObject,1> local_70;
  FString local_60;
  FRDGEventName local_50;
  
  pTVar5 = GDumpTextureCVar.Ref;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar15 = pTVar5->ShadowedValue[1];
  if (iVar15 == 0) {
    return;
  }
  GetUniqueResourceName(this,&local_120,(FRDGResource *)param_5);
  this_00 = ::operator_new(0x20);
  if (param_6) {
    if (this_00 == (TJsonValueString<wchar_t> *)0x0) {
      this_00 = (TJsonValueString<wchar_t> *)0x0;
    }
    else {
      FJsonValue::FJsonValue((FJsonValue *)this_00);
      FVar6.Data = local_120.Data.AllocatorInstance.Data;
      pFVar1 = &this_00->Value;
      this_00->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar2 = &(this_00->Value).Data.ArrayMax;
      (this_00->Value).Data.ArrayNum = local_120.Data.ArrayNum;
      if (local_120.Data.ArrayNum == 0) {
        *piVar2 = 0;
        *(EJson *)&this_00->_padding_ = String;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_120.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_120.Data.ArrayNum
                   ,piVar2);
        memcpy((pFVar1->Data).AllocatorInstance.Data,FVar6.Data,
               (longlong)local_120.Data.ArrayNum * 2);
        *(EJson *)&this_00->_padding_ = String;
      }
    }
    local_a8.Object = this_00;
    TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
              (&local_90,&local_a8);
    TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSharedPtr<FJsonValue,1>_>(param_3,&local_90);
  }
  else {
    if (this_00 == (TJsonValueString<wchar_t> *)0x0) {
      this_00 = (TJsonValueString<wchar_t> *)0x0;
    }
    else {
      FJsonValue::FJsonValue((FJsonValue *)this_00);
      FVar6.Data = local_120.Data.AllocatorInstance.Data;
      pFVar1 = &this_00->Value;
      this_00->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar2 = &(this_00->Value).Data.ArrayMax;
      (this_00->Value).Data.ArrayNum = local_120.Data.ArrayNum;
      if (local_120.Data.ArrayNum == 0) {
        *piVar2 = 0;
        *(EJson *)&this_00->_padding_ = String;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_120.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_120.Data.ArrayNum
                   ,piVar2);
        memcpy((pFVar1->Data).AllocatorInstance.Data,FVar6.Data,
               (longlong)local_120.Data.ArrayNum * 2);
        *(EJson *)&this_00->_padding_ = String;
      }
    }
    local_108.Object = this_00;
    TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
              (&local_80,&local_108);
    TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSharedPtr<FJsonValue,1>_>(param_2,&local_80);
    local_90.SharedReferenceCount.ReferenceController =
         local_80.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  iVar13 = (param_5->Desc).NumElements * (param_5->Desc).BytesPerElement;
  bVar7 = HasResourceEverBeenDumped(this,(FRDGResource *)param_5);
  if (bVar7) {
    if (!param_6) goto LAB_145d1089e;
    UpdateResourceLastModifyingPass(this,(FRDGResource *)param_5,param_4);
  }
  else {
    pFVar14 = (FRDGPass *)0x0;
    if (param_6) {
      pFVar14 = param_4;
    }
    RegisterResourceAsDumped(this,(FRDGResource *)param_5,pFVar14);
    local_110 = CONCAT44(local_110._4_4_,1);
    ToJson(this,&local_70,&local_120,(wchar_t *)param_5->_padding_,&param_5->Desc,iVar13);
    pTVar9 = &::FString::FString(&local_60,L"Base/")->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_a0,pTVar9,0x14 - (uint)(pTVar9->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_a0,L"ResourceDescs.json",0x12);
    DumpJsonToFile(this,&local_70,(FString *)&local_a0,8);
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    pFVar3 = (param_5->Desc).Metadata;
    if ((pFVar3 != (FShaderParametersMetadata *)0x0) && (iVar15 == 2)) {
      Dump(this,pFVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    if ((char)local_110 == '\0') goto LAB_145d1089e;
  }
  pTVar5 = GDumpMaxStagingSize.Ref;
  if (iVar15 == 2) {
    iVar15 = iVar13;
    if (this->bStream == false) {
      bVar7 = IsInParallelRenderingThread();
      if ((!bVar7) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar15 = pTVar5->ShadowedValue[1] << 0x14;
      if (iVar13 < iVar15) {
        iVar15 = iVar13;
      }
    }
    pFVar14 = (FRDGPass *)0x0;
    if (param_6) {
      pFVar14 = param_4;
    }
    if (pFVar14 == (FRDGPass *)0x0) {
      ::FString::FString(&local_e0,L"00000000000000000000");
    }
    else {
      ::FString::PrintfImpl(&local_e0,L"%04u%016llx");
    }
    ::FString::PrintfImpl(&local_f0,L"%s.v%s.bin");
    ::operator/(&local_130,L"Resources/",&local_f0);
    if ((FRDGBuffer *)local_f0.Data.AllocatorInstance.Data != (FRDGBuffer *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    bVar7 = IsUnsafeToDumpResource(this,(longlong)iVar15,__real_3f99999a);
    if (bVar7) {
      if (2 < (byte)LogDumpGPU._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_FRDGResourceDumpContext::AddDumpBufferPass(FRDGBuilder&___ptr64,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>&___ptr64,FRDGPass_const*___ptr64,FRDGBuffer*___ptr64,bool)___ptr64'
                    ::__l34::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
      }
    }
    else if ((param_5->Flags & SkipTracking) == None) {
      uVar4 = *(ulonglong *)((longlong)&param_5->_padding_ + 4);
      local_110 = uVar4;
      if ((uVar4 >> 0x20 & 4) != 0) {
        FRDGBuilder::UseInternalAccessMode(param_1,(FRDGViewableResource *)param_5);
      }
      puVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        if (bVar7) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      else {
        puVar10[2] = 0;
        *puVar10 = &FRDGAllocator::TObject<FDumpBufferPass>::_vftable_;
        *(undefined4 *)(puVar10 + 3) = 0x80;
      }
      local_138 = puVar10;
      if ((((undefined8 **)param_1->_padding_ <= &local_138) &&
          (&local_138 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar8 = (int)param_1->_padding_;
      piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)&param_1->_padding_,piVar2);
      }
      FVar6.Data = local_130.Data.AllocatorInstance.Data;
      *(int *)&param_1->_padding_ = iVar8 + 1;
      local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_5;
      local_f0.Data.ArrayNum = 0x80;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_138;
      local_108.Object = (TJsonValueString<wchar_t> *)(puVar10 + 2);
      (local_108.Object)->_padding_ = (longlong)param_5;
      puVar10[3] = CONCAT44(local_f0.Data.ArrayMax,0x80);
      local_d0.DumpFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.__this = this;
      if (local_130.Data.ArrayNum == 0) {
        local_d0.DumpFilePath.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_130.Data.ArrayNum,0,(ForAnyElementType *)&local_d0.DumpFilePath,
                   local_130.Data.ArrayNum,&local_d0.DumpFilePath.Data.ArrayMax);
        memcpy(local_d0.DumpFilePath.Data.AllocatorInstance.Data,FVar6.Data,
               (longlong)local_130.Data.ArrayNum * 2);
      }
      local_d0.Buffer = param_5;
      local_d0.ByteSize = iVar13;
      local_d0.StagingResourceByteSize = iVar15;
      pFVar11 = FRDGEventName::FRDGEventName(&local_50,L"RDG DumpBuffer(%s -> %s)");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < `FDumpBufferPass::FTypeInfo::GetStructMetadata'::`2'::_TSS0) &&
         (_Init_thread_header(&`FDumpBufferPass::FTypeInfo::GetStructMetadata'::`2'::_TSS0),
         `FDumpBufferPass::FTypeInfo::GetStructMetadata'::`2'::_TSS0 == -1)) {
        pcVar12 = _anon_6E8CE10E::FDumpBufferPass::zzAppendMemberGetPrev;
        local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_100.ArrayNum = 0;
        local_100.ArrayMax = 0;
        do {
          pcVar12 = (code *)(*pcVar12)(local_148,&local_100);
        } while (pcVar12 != (code *)0x0);
        AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                  ((FMember *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
        FShaderParametersMetadata::FShaderParametersMetadata
                  (&`FDumpBufferPass::FTypeInfo::GetStructMetadata'::`2'::StaticStructMetadata,
                   ShaderParameterStruct,Shader,L"FDumpBufferPass",L"FDumpBufferPass",(wchar_t *)0x0
                   ,(wchar_t *)0x0,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                   ,0xdf,0x10,&local_100,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
        if ((FMember *)local_100.AllocatorInstance.Data != (FMember *)0x0) {
          FMemory::Free(local_100.AllocatorInstance.Data);
        }
        atexit(``anonymous_namespace'::FDumpBufferPass::FTypeInfo::GetStructMetadata'::__l2::
               _dynamic_atexit_destructor_for__StaticStructMetadata__);
        _Init_thread_footer(&`FDumpBufferPass::FTypeInfo::GetStructMetadata'::`2'::_TSS0);
      }
      FRDGBuilder::
      AddPassInternal<_anonymous_namespace_::FDumpBufferPass,_FRDGResourceDumpContext::AddDumpBufferPass_::__l30::<lambda_1>_>
                (param_1,pFVar11,
                 &`FDumpBufferPass::FTypeInfo::GetStructMetadata'::`2'::StaticStructMetadata,
                 (FDumpBufferPass *)local_108.Object,Readback,&local_d0);
      if (local_50.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_50.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_d0.DumpFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.DumpFilePath.Data.AllocatorInstance.Data);
      }
      if ((local_110 & 0x400000000) != 0) {
        FRDGBuilder::UseExternalAccessMode
                  (param_1,(FRDGViewableResource *)param_5,(ERHIAccess)uVar4,local_110._4_1_ & All);
      }
      this->ResourcesDumpPasses = this->ResourcesDumpPasses + 1;
    }
    else if (2 < (byte)LogDumpGPU._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_FRDGResourceDumpContext::AddDumpBufferPass(FRDGBuilder&___ptr64,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>&___ptr64,FRDGPass_const*___ptr64,FRDGBuffer*___ptr64,bool)___ptr64'
                  ::__l55::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
LAB_145d1089e:
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  return;
}

// AddDumpTextureAllSubResourcesPasses @ 145d109d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGResourceDumpContext::AddDumpTextureAllSubResourcesPasses
          (FRDGResourceDumpContext *this,FRDGBuilder *param_1,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_3,FRDGPass *param_4,
          FRDGTextureSRVDesc *param_5,bool param_6,bool param_7,bool param_8)

{
  char cVar1;
  ushort uVar2;
  undefined1 uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  FRDGTextureSRVDesc local_68;
  
  local_68.Texture = param_5->Texture;
  cVar5 = ((local_68.Texture)->Desc).field_0x32;
  if ((cVar5 == '\x01') || (cVar5 == '\x04')) {
    uVar2 = *(ushort *)((longlong)&param_5->_padding_ + 6);
    uVar4 = (uint)uVar2;
    if (uVar2 != 1) {
      uVar6 = (uint)*(ushort *)((longlong)&param_5->_padding_ + 4);
      if (uVar2 == 0) {
        uVar4 = *(ushort *)&((local_68.Texture)->Desc).field_0x2e - uVar6;
      }
      uVar4 = uVar4 + uVar6;
      for (; uVar6 < uVar4; uVar6 = uVar6 + 1) {
        local_68._padding_._0_1_ = (undefined1)param_5->_padding_;
        local_68._padding_._1_1_ = *(undefined1 *)((longlong)&param_5->_padding_ + 1);
        local_68._padding_._2_1_ = *(undefined1 *)((longlong)&param_5->_padding_ + 2);
        local_68._padding_._3_1_ = *(undefined1 *)((longlong)&param_5->_padding_ + 3);
        local_68._padding_._0_1_ = (undefined1)param_5->_padding_;
        local_68.Texture = param_5->Texture;
        local_68._padding_._6_2_ = 1;
        local_68._padding_._4_2_ = (undefined2)uVar6;
        local_68._padding_._1_2_ = 0x100;
        AddDumpTextureAllSubResourcesPasses
                  (this,param_1,param_2,param_3,param_4,&local_68,param_6,param_7,param_8);
      }
      return;
    }
  }
  local_68._padding_._1_1_ = *(byte *)((longlong)&param_5->_padding_ + 1);
  local_68._padding_._2_1_ = *(byte *)((longlong)&param_5->_padding_ + 2);
  if ((char)param_5->_padding_ == ',') {
    local_68._padding_._3_1_ = *(undefined1 *)((longlong)&param_5->_padding_ + 3);
    local_68._padding_._4_2_ = *(undefined2 *)((longlong)&param_5->_padding_ + 4);
    local_68._padding_._6_2_ = *(undefined2 *)((longlong)&param_5->_padding_ + 6);
    local_68._padding_._0_1_ = (undefined1)param_5->_padding_;
    cVar5 = *(char *)((longlong)&param_5->_padding_ + 2);
    local_68._padding_._0_1_ = 0x2c;
    if (cVar5 != '\0') {
      local_68._padding_._1_1_ = *(undefined1 *)((longlong)&param_5->_padding_ + 1);
    }
    local_68._padding_._1_2_ = CONCAT11(cVar5,local_68._padding_._1_1_);
    AddDumpTextureSubResourcePass
              (this,param_1,param_2,param_3,param_4,&local_68,param_6,param_7,param_8);
  }
  else {
    uVar4 = (uint)local_68._padding_._1_1_;
    if (uVar4 < uVar4 + local_68._padding_._2_1_) {
      do {
        cVar5 = *(char *)((longlong)&param_5->_padding_ + 2);
        local_68._padding_._0_1_ = (undefined1)param_5->_padding_;
        local_68._padding_._3_1_ = *(undefined1 *)((longlong)&param_5->_padding_ + 3);
        local_68._padding_._4_2_ = *(undefined2 *)((longlong)&param_5->_padding_ + 4);
        local_68._padding_._6_2_ = *(undefined2 *)((longlong)&param_5->_padding_ + 6);
        local_68._padding_._0_1_ = (undefined1)param_5->_padding_;
        uVar3 = local_68._padding_._1_1_;
        if (cVar5 != '\0') {
          uVar3 = *(undefined1 *)((longlong)&param_5->_padding_ + 1);
        }
        local_68.Texture = param_5->Texture;
        cVar1 = ((local_68.Texture)->Desc).field_0x32;
        if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
          uVar3 = 0;
          cVar5 = '\x01';
        }
        local_68._padding_._1_1_ = (byte)uVar4;
        local_68._padding_._2_1_ = 1;
        if (cVar5 != '\0') {
          local_68._padding_._1_1_ = uVar3;
        }
        local_68._padding_._1_2_ = CONCAT11(cVar5,local_68._padding_._1_1_);
        AddDumpTextureSubResourcePass
                  (this,param_1,param_2,param_3,param_4,&local_68,param_6,param_7,param_8);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 <
               (int)((uint)*(byte *)((longlong)&param_5->_padding_ + 2) +
                    (uint)*(byte *)((longlong)&param_5->_padding_ + 1)));
    }
  }
  return;
}

// AddDumpTexturePasses @ 145d10c60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGResourceDumpContext::AddDumpTexturePasses
          (FRDGResourceDumpContext *this,FRDGBuilder *param_1,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_3,FRDGPass *param_4,
          FRDGTextureSRVDesc *param_5,bool param_6)

{
  char cVar1;
  void *pvVar2;
  bool bVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  FRDGPass *pFVar5;
  bool bVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FJsonObject,1> local_68;
  FString local_58;
  FRDGTextureSRVDesc local_48;
  
  bVar6 = true;
  bVar3 = HasResourceEverBeenDumped(this,(FRDGResource *)param_5->Texture);
  if (bVar3) {
    if (param_6) {
      UpdateResourceLastModifyingPass(this,(FRDGResource *)param_5->Texture,param_4);
      goto LAB_145d10e95;
    }
  }
  else {
    pFVar5 = (FRDGPass *)0x0;
    if (param_6) {
      pFVar5 = param_4;
    }
    RegisterResourceAsDumped(this,(FRDGResource *)param_5->Texture,pFVar5);
    GetUniqueResourceName(this,&local_58,(FRDGResource *)param_5->Texture);
    ToJson(this,&local_68,&local_58,(wchar_t *)param_5->Texture->_padding_,&param_5->Texture->Desc);
    pTVar4 = &::FString::FString((FString *)&local_48,L"Base/")->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_78,pTVar4,0x14 - (uint)(pTVar4->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_78,L"ResourceDescs.json",0x12);
    DumpJsonToFile(this,&local_68,(FString *)&local_78,8);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    pvVar2 = (void *)CONCAT26(local_48._padding_._6_2_,
                              CONCAT24(local_48._padding_._4_2_,
                                       CONCAT13(local_48._padding_._3_1_,
                                                CONCAT12(local_48._padding_._2_1_,
                                                         CONCAT11(local_48._padding_._1_1_,
                                                                  (undefined1)local_48._padding_))))
                             );
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (param_6) goto LAB_145d10e95;
    local_48.Texture = param_5->Texture;
    cVar1 = ((local_48.Texture)->Desc).field_0x33;
    if ((cVar1 == '\v') || (cVar1 == ',')) {
      local_48._padding_._2_1_ = ((local_48.Texture)->Desc).field_0x30;
      cVar1 = ((local_48.Texture)->Desc).field_0x32;
      local_48._padding_._1_1_ = 0;
      local_48._padding_._3_1_ = 0;
      local_48._padding_._4_2_ = 0;
      local_48._padding_._6_2_ = 0;
      local_48._padding_._0_1_ = 0;
      local_48._padding_._2_1_ = 0;
      if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
        local_48._padding_._6_2_ = *(undefined2 *)&((local_48.Texture)->Desc).field_0x2e;
      }
      local_48._padding_._0_1_ = 0x2c;
      AddDumpTextureAllSubResourcesPasses
                (this,param_1,param_2,param_3,param_4,&local_48,false,false,true);
    }
    local_48.Texture = param_5->Texture;
    local_48._padding_._0_1_ = 0;
    local_48._padding_._1_1_ = 0;
    local_48._padding_._3_1_ = 0;
    local_48._padding_._4_2_ = 0;
    local_48._padding_._6_2_ = 0;
    local_48._padding_._2_1_ = ((local_48.Texture)->Desc).field_0x30;
    cVar1 = ((local_48.Texture)->Desc).field_0x32;
    local_48._padding_._0_1_ = 0;
    local_48._padding_._2_1_ = 0;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      local_48._padding_._6_2_ = *(undefined2 *)&((local_48.Texture)->Desc).field_0x2e;
    }
    AddDumpTextureAllSubResourcesPasses
              (this,param_1,param_2,param_3,param_4,&local_48,false,false,true);
    param_6 = false;
  }
  bVar6 = false;
LAB_145d10e95:
  AddDumpTextureAllSubResourcesPasses
            (this,param_1,param_2,param_3,param_4,param_5,true,param_6,bVar6);
  return;
}

// AddDumpTextureSubResourcePass @ 145d10f00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
FRDGResourceDumpContext::AddDumpTextureSubResourcePass
          (FRDGResourceDumpContext *this,FRDGBuilder *param_1,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_3,FRDGPass *param_4,
          FRDGTextureSRVDesc *param_5,bool param_6,bool param_7,bool param_8)

{
  FString *pFVar1;
  int *piVar2;
  FDumpTexturePass *pFVar3;
  undefined8 uVar4;
  char cVar5;
  FRDGTexture *pFVar6;
  FAccessModeState FVar7;
  FRDGTextureSubresourceRange FVar8;
  TConsoleVariableData<int> *pTVar9;
  FRDGTextureSRVDesc *pFVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  ERDGPassFlags EVar13;
  int iVar14;
  FRDGTextureSRVDesc *pFVar15;
  TJsonValueString<wchar_t> *this_00;
  undefined8 *puVar16;
  FRDGTextureSRV *pFVar17;
  FRDGTextureAccess *pFVar18;
  FRDGEventName *pFVar19;
  code *pcVar20;
  int iVar21;
  FRDGPass *pFVar22;
  float fVar23;
  FString local_1b0;
  undefined8 *local_1a0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_198;
  FString local_190;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_180;
  FString local_170;
  FString local_160;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_150;
  FAccessModeState local_148;
  FString local_140;
  <lambda_1> local_130;
  TIntPoint<int>_u_0 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  char local_c8;
  EPixelFormat EStack_c0;
  EPixelFormat EStack_bf;
  undefined6 uStack_be;
  TSharedPtr<FJsonValue,1> local_b8;
  TSharedPtr<FJsonValue,1> local_a8;
  FString local_98;
  FRDGEventName local_88;
  FRDGTextureSRVDesc local_70;
  FRDGTextureAccess local_58;
  
  pFVar10 = param_5;
  pTVar9 = GDumpTextureCVar.Ref;
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
  iVar14 = pTVar9->ShadowedValue[1];
  if (iVar14 == 0) {
    return;
  }
  if ((*(uint *)&param_5->Texture->Desc & 0x1000) != 0) {
    return;
  }
  if ((*(char *)((longlong)&param_5->_padding_ + 2) != '\x01') &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SubResourceDesc.NumMipLevels == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                          ,0x1f9,L""), bVar12)) {
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
  cVar5 = (param_5->Texture->Desc).field_0x32;
  if ((((cVar5 == '\x01') || (cVar5 == '\x04')) &&
      (*(short *)((longlong)&param_5->_padding_ + 6) != 1)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!SubResourceDesc.Texture->Desc.IsTextureArray() || SubResourceDesc.NumArraySlices == 1"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                          ,0x1fa,L""), bVar12)) {
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
  GetUniqueResourceName(this,&local_190,(FRDGResource *)param_5->Texture);
  cVar5 = (param_5->Texture->Desc).field_0x32;
  if ((cVar5 == '\x01') || (cVar5 == '\x04')) {
    ::FString::PrintfImpl(&local_140,L".[%d]");
    iVar21 = local_140.Data.ArrayNum + -1;
    if (local_140.Data.ArrayNum == 0) {
      iVar21 = 0;
    }
    ::FString::AppendChars(&local_190,(wchar_t *)local_140.Data.AllocatorInstance.Data,iVar21);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  if ((char)param_5->_padding_ == ',') {
    ::FString::PrintfImpl(&local_1b0,L"%s.stencil");
  }
  else {
    ::FString::PrintfImpl(&local_1b0,L"%s.mip%d");
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  pFVar15 = FRDGTextureSRVDesc::FRDGTextureSRVDesc(&local_70,param_5);
  TranslateSubresourceDumpDesc(this,(FTextureSubresourceDumpDesc *)&local_d8._s_0,pFVar15);
  if (param_6) {
    this_00 = ::operator_new(0x20);
    if (param_7) {
      if (this_00 == (TJsonValueString<wchar_t> *)0x0) {
        this_00 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        FJsonValue::FJsonValue((FJsonValue *)this_00);
        FVar11.Data = local_1b0.Data.AllocatorInstance.Data;
        pFVar1 = &this_00->Value;
        this_00->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        piVar2 = &(this_00->Value).Data.ArrayMax;
        (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Value).Data.ArrayNum = local_1b0.Data.ArrayNum;
        if (local_1b0.Data.ArrayNum == 0) {
          *piVar2 = 0;
          *(EJson *)&this_00->_padding_ = String;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1b0.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
                     local_1b0.Data.ArrayNum,piVar2);
          memcpy((pFVar1->Data).AllocatorInstance.Data,FVar11.Data,
                 (longlong)local_1b0.Data.ArrayNum * 2);
          *(EJson *)&this_00->_padding_ = String;
        }
      }
      local_150.Object = this_00;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_b8,&local_150);
      TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TSharedPtr<FJsonValue,1>_>(param_3,&local_b8);
    }
    else {
      if (this_00 == (TJsonValueString<wchar_t> *)0x0) {
        this_00 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        FJsonValue::FJsonValue((FJsonValue *)this_00);
        FVar11.Data = local_1b0.Data.AllocatorInstance.Data;
        pFVar1 = &this_00->Value;
        this_00->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        piVar2 = &(this_00->Value).Data.ArrayMax;
        (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Value).Data.ArrayNum = local_1b0.Data.ArrayNum;
        if (local_1b0.Data.ArrayNum == 0) {
          *piVar2 = 0;
          *(EJson *)&this_00->_padding_ = String;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1b0.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
                     local_1b0.Data.ArrayNum,piVar2);
          memcpy((pFVar1->Data).AllocatorInstance.Data,FVar11.Data,
                 (longlong)local_1b0.Data.ArrayNum * 2);
          *(EJson *)&this_00->_padding_ = String;
        }
      }
      local_198.Object = this_00;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_a8,&local_198);
      TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TSharedPtr<FJsonValue,1>_>(param_2,&local_a8);
      local_b8.SharedReferenceCount.ReferenceController =
           local_a8.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  if (((param_8) && (iVar14 == 2)) && (CONCAT44(uStack_cc,uStack_d0) != 0)) {
    fVar23 = __real_400ccccd;
    if (local_c8 != '\0') {
      fVar23 = __real_404ccccd;
    }
    bVar12 = IsUnsafeToDumpResource(this,CONCAT44(uStack_cc,uStack_d0),fVar23);
    if (bVar12) {
      if (2 < (byte)LogDumpGPU._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_FRDGResourceDumpContext::AddDumpTextureSubResourcePass(FRDGBuilder&___ptr64,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>&___ptr64,FRDGPass_const*___ptr64,FRDGTextureSRVDesc,bool,bool,bool)___ptr64'
                    ::__l23::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
      }
    }
    else {
      pFVar6 = param_5->Texture;
      FVar7 = *(FAccessModeState *)((longlong)&pFVar6->_padding_ + 4);
      local_148 = FVar7;
      if ((((FAccessModeState *)((longlong)&pFVar6->_padding_ + 4))->Mode == 0) ||
         ((pFVar6->Flags & SkipTracking) != None)) {
        param_5._0_1_ = '\0';
      }
      else {
        param_5._0_1_ = '\x01';
        FRDGBuilder::UseInternalAccessMode(param_1,(FRDGViewableResource *)pFVar6);
      }
      pFVar22 = (FRDGPass *)0x0;
      if (param_7) {
        pFVar22 = param_4;
      }
      if (pFVar22 == (FRDGPass *)0x0) {
        ::FString::FString(&local_160,L"00000000000000000000");
      }
      else {
        ::FString::PrintfImpl(&local_160,L"%04u%016llx");
      }
      ::FString::PrintfImpl(&local_98,L"%s.v%s.bin");
      ::operator/(&local_170,L"Resources/",&local_98);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      puVar16 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
      if (puVar16 == (undefined8 *)0x0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar12) {
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
      }
      else {
        *puVar16 = &FRDGAllocator::TObject<FDumpTexturePass>::_vftable_;
        puVar16[2] = 0;
        puVar16[3] = 0;
        *(undefined4 *)(puVar16 + 4) = 0;
        *(undefined8 *)((longlong)puVar16 + 0x24) = 0;
      }
      local_1a0 = puVar16;
      if ((((undefined8 **)param_1->_padding_ <= &local_1a0) &&
          (&local_1a0 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      iVar14 = (int)param_1->_padding_;
      piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,piVar2);
      }
      *(int *)&param_1->_padding_ = iVar14 + 1;
      pFVar3 = (FDumpTexturePass *)(puVar16 + 2);
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar14 * 8) = local_1a0;
      if (local_c8 == '\0') {
        pFVar18 = FRDGTextureAccess::FRDGTextureAccess(&local_58,pFVar10->Texture,CopySrc);
        FVar8 = pFVar18->SubresourceRange;
        uVar4 = *(undefined8 *)&pFVar18->Access;
        puVar16[3] = pFVar18->Texture;
        *(FRDGTextureSubresourceRange *)(puVar16 + 4) = FVar8;
        puVar16[5] = uVar4;
      }
      else {
        if ((*(byte *)&pFVar10->Texture->Desc & 8) == 0) {
          if (2 < (byte)LogDumpGPU._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_FRDGResourceDumpContext::AddDumpTextureSubResourcePass(FRDGBuilder&___ptr64,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>&___ptr64,FRDGPass_const*___ptr64,FRDGTextureSRVDesc,bool,bool,bool)___ptr64'
                        ::__l51::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
          }
          if ((TJsonValueString<wchar_t> *)local_170.Data.AllocatorInstance.Data !=
              (TJsonValueString<wchar_t> *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
          goto LAB_145d11737;
        }
        pFVar17 = FRDGBuilder::CreateSRV(param_1,pFVar10);
        pFVar3->Texture = pFVar17;
      }
      local_130.DumpFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Object = (TJsonValueString<wchar_t> *)local_170.Data.AllocatorInstance.Data;
      local_130.PassParameters = pFVar3;
      local_130.__this = this;
      if (local_170.Data.ArrayNum == 0) {
        local_130.DumpFilePath.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_170.Data.ArrayNum,0,(ForAnyElementType *)&local_130.DumpFilePath,
                   local_170.Data.ArrayNum,&local_130.DumpFilePath.Data.ArrayMax);
        memcpy(local_130.DumpFilePath.Data.AllocatorInstance.Data,local_198.Object,
               (longlong)local_170.Data.ArrayNum * 2);
      }
      local_130.SubresourceDesc._padding_._0_1_ = (undefined1)pFVar10->_padding_;
      local_130.SubresourceDesc._padding_._1_1_ = *(undefined1 *)((longlong)&pFVar10->_padding_ + 1)
      ;
      local_130.SubresourceDesc._padding_._2_1_ = *(undefined1 *)((longlong)&pFVar10->_padding_ + 2)
      ;
      local_130.SubresourceDesc._padding_._3_1_ = *(undefined1 *)((longlong)&pFVar10->_padding_ + 3)
      ;
      local_130.SubresourceDesc._padding_._4_2_ = *(undefined2 *)((longlong)&pFVar10->_padding_ + 4)
      ;
      local_130.SubresourceDesc._padding_._6_2_ = *(undefined2 *)((longlong)&pFVar10->_padding_ + 6)
      ;
      local_130.SubresourceDesc._padding_._0_1_ = (undefined1)pFVar10->_padding_;
      local_130.SubresourceDesc._padding_._2_1_ = *(char *)((longlong)&pFVar10->_padding_ + 2);
      if (local_130.SubresourceDesc._padding_._2_1_ != '\0') {
        local_130.SubresourceDesc._padding_._1_1_ =
             *(undefined1 *)((longlong)&pFVar10->_padding_ + 1);
      }
      local_130.SubresourceDesc.Texture = pFVar10->Texture;
      EVar13 = Readback;
      if (local_c8 != '\0') {
        EVar13 = NeverCull|Compute;
      }
      local_130.SubresourceDumpDesc.PreprocessedPixelFormat = EStack_c0;
      local_130.SubresourceDumpDesc.PostprocessedPixelFormat = EStack_bf;
      local_130.SubresourceDumpDesc._26_6_ = uStack_be;
      local_130.SubresourceDumpDesc.SubResourceExtent.field0_0x0._s_0.X = local_d8._s_0.X;
      local_130.SubresourceDumpDesc.SubResourceExtent.field0_0x0._s_0.Y = local_d8._s_0.Y;
      local_130.SubresourceDumpDesc.ByteSize._0_4_ = uStack_d0;
      local_130.SubresourceDumpDesc.ByteSize._4_4_ = uStack_cc;
      pFVar19 = FRDGEventName::FRDGEventName(&local_88,L"RDG DumpTexture(%s -> %s) %dx%d");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < `FDumpTexturePass::FTypeInfo::GetStructMetadata'::`2'::_TSS0) &&
         (_Init_thread_header(&`FDumpTexturePass::FTypeInfo::GetStructMetadata'::`2'::_TSS0),
         `FDumpTexturePass::FTypeInfo::GetStructMetadata'::`2'::_TSS0 == -1)) {
        pcVar20 = _anon_6E8CE10E::FDumpTexturePass::zzAppendMemberGetPrev;
        local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_180.ArrayNum = 0;
        local_180.ArrayMax = 0;
        do {
          pcVar20 = (code *)(*pcVar20)((char)param_5,&local_180);
        } while (pcVar20 != (code *)0x0);
        AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                  ((FMember *)local_180.AllocatorInstance.Data,local_180.ArrayNum);
        FShaderParametersMetadata::FShaderParametersMetadata
                  (&`FDumpTexturePass::FTypeInfo::GetStructMetadata'::`2'::StaticStructMetadata,
                   ShaderParameterStruct,Shader,L"FDumpTexturePass",L"FDumpTexturePass",
                   (wchar_t *)0x0,(wchar_t *)0x0,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                   ,0xda,0x20,&local_180,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
        if ((FMember *)local_180.AllocatorInstance.Data != (FMember *)0x0) {
          FMemory::Free(local_180.AllocatorInstance.Data);
        }
        atexit(``anonymous_namespace'::FDumpTexturePass::FTypeInfo::GetStructMetadata'::__l2::
               _dynamic_atexit_destructor_for__StaticStructMetadata__);
        _Init_thread_footer(&`FDumpTexturePass::FTypeInfo::GetStructMetadata'::`2'::_TSS0);
      }
      FRDGBuilder::
      AddPassInternal<_anonymous_namespace_::FDumpTexturePass,_FRDGResourceDumpContext::AddDumpTextureSubResourcePass_::__l44::<lambda_1>_>
                (param_1,pFVar19,
                 &`FDumpTexturePass::FTypeInfo::GetStructMetadata'::`2'::StaticStructMetadata,pFVar3
                 ,EVar13,&local_130);
      if (local_88.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_88.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_130.DumpFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.DumpFilePath.Data.AllocatorInstance.Data);
      }
      this->ResourcesDumpPasses = this->ResourcesDumpPasses + 1;
      if ((TJsonValueString<wchar_t> *)local_170.Data.AllocatorInstance.Data !=
          (TJsonValueString<wchar_t> *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      if ((char)param_5 != '\0') {
        FRDGBuilder::UseExternalAccessMode
                  (param_1,(FRDGViewableResource *)pFVar10->Texture,FVar7.Access,local_148.Pipelines
                  );
      }
    }
  }
LAB_145d11737:
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateStagingTexture @ 145d1b740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGResourceDumpContext::CreateStagingTexture
          (FRDGResourceDumpContext *this,FRHICommandListBase *param_1,FRHITextureCreateDesc *param_2
          ,TRefCountPtr<FRHITexture> *param_3)

{
  byte *pbVar1;
  uint uVar2;
  FRHITexture *pFVar3;
  code *pcVar4;
  bool bVar5;
  TRefCountPtr<FRHITexture> TVar6;
  FRHIResource *local_18;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x3fe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TVar6 = FRHICommandListBase::CreateTexture
                    (param_1,(FRHITextureCreateDesc *)&stack0xffffffffffffffe8);
  if ((FRHITexture *)param_3 != TVar6.Reference) {
    pFVar3 = param_3->Reference;
    param_3->Reference = (FRHITexture *)(TVar6.Reference)->_padding_;
    (TVar6.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  if (local_18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_18);
  }
  pFVar3 = param_3->Reference;
  uVar2 = (uint)pFVar3->_padding_;
  if (((uVar2 >> 0x1e & 1) != 0) || ((uVar2 & 0x3fffffff) == 0)) {
    `FRHIResource::DisableLifetimeExtension'::__l2::<lambda_1>::operator()(&stack0x00000020);
  }
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfd;
  return;
}

// Dump @ 145d1d970

void __thiscall
FRDGResourceDumpContext::Dump(FRDGResourceDumpContext *this,FShaderParametersMetadata *param_1)

{
  TSet<void_const_*,DefaultKeyFuncs<void_const_*,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined1 local_res18 [8];
  void *local_res20;
  FShaderParametersMetadata *local_78;
  FString local_70;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  TSharedPtr<FJsonObject,1> local_40;
  FString local_30;
  
  bVar4 = IsDumped<FShaderParametersMetadata>(this,param_1);
  if (!bVar4) {
    ToJson(this,&local_40,param_1);
    if (param_1 == (FShaderParametersMetadata *)0x0) {
      ::FString::FString(&local_70,L"00000000000000000000");
    }
    else {
      ::FString::PrintfImpl(&local_70,L"%04u%016llx");
    }
    iVar10 = 1;
    iVar12 = local_70.Data.ArrayNum;
    if (local_70.Data.ArrayNum == 0) {
      iVar12 = 1;
    }
    pTVar6 = &::FString::FString(&local_30,L"StructuresMetadata/")->Data;
    if ((pTVar6->ArrayNum != 0) || (iVar7 = 1, iVar12 == 0)) {
      iVar7 = 0;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_60,pTVar6,iVar7 + iVar12);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    iVar12 = local_70.Data.ArrayNum + -1;
    if (local_70.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    ::FString::PathAppend
              ((FString *)&local_60,(wchar_t *)local_70.Data.AllocatorInstance.Data,iVar12);
    ::FString::ConcatFC(&local_50,(FString *)&local_60,L".json");
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DumpJsonToFile(this,&local_40,&local_50,0);
    bVar4 = IsDumped<FShaderParametersMetadata>(this,param_1);
    if (bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDumped(Ptr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x283,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00 = &this->IsDumpedToDisk;
    uVar8 = *(int *)&(this->IsDumpedToDisk).Elements.field_0x8 -
            *(int *)&(this->IsDumpedToDisk).Elements.field_0x34;
    uVar5 = uVar8 & 0x800003ff;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffc00) + 1;
    }
    if ((uVar5 == 0) && (uVar5 = uVar8 + 0x400, uVar8 < uVar5)) {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar5);
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,uVar5);
      if (3 < uVar5) {
        uVar1 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar2 & 0x1f);
      }
      iVar12 = (this->IsDumpedToDisk).HashSize;
      if ((iVar12 == 0) || (iVar12 < iVar10)) {
        (this->IsDumpedToDisk).HashSize = iVar10;
        TSet<void_const_*,DefaultKeyFuncs<void_const_*,0>,FDefaultSetAllocator>::Rehash(this_00);
      }
    }
    local_78 = param_1;
    TSet<void_const_*,DefaultKeyFuncs<void_const_*,0>,FDefaultSetAllocator>::Emplace<void_const_*>
              (this_00,&local_res20,(bool *)&local_78);
    iVar12 = (param_1->Members).ArrayNum;
    pFVar9 = (param_1->Members).AllocatorInstance.Data;
    pFVar11 = pFVar9 + (longlong)iVar12 * 0x30;
    while( true ) {
      if ((param_1->Members).ArrayNum != iVar12) {
        `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar11) break;
      if (*(FShaderParametersMetadata **)(pFVar9 + 0x28) != (FShaderParametersMetadata *)0x0) {
        FShaderParametersMetadata::
        IterateStructureMetadataDependencies<_FRDGResourceDumpContext::Dump_::__l2::<lambda_1>_>
                  (*(FShaderParametersMetadata **)(pFVar9 + 0x28),(<lambda_1>)this);
      }
      pFVar9 = pFVar9 + 0x30;
    }
    if (param_1 != (FShaderParametersMetadata *)0x0) {
      Dump(this,param_1);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.SharedReferenceCount.ReferenceController);
  }
  return;
}

// DumpJsonToFile @ 145d1dc00

bool __thiscall
FRDGResourceDumpContext::DumpJsonToFile
          (FRDGResourceDumpContext *this,TSharedPtr<FJsonObject,1> *param_1,FString *param_2,
          uint param_3)

{
  FJsonObject *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_68;
  TSharedPtr<FJsonObject,1> local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_38;
  TStringView<wchar_t> local_28;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_38,&local_68,0);
  if (param_1->Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Object = pFVar1;
  local_58.SharedReferenceCount.ReferenceController = pTVar2;
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_58,&local_38,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_48 = local_68.Data.AllocatorInstance.Data;
  iStack_40 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iStack_40 = 0;
  }
  local_28._12_4_ = uStack_3c;
  local_28.Size = iStack_40;
  local_28.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  bVar4 = DumpStringToFile(this,&local_28,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// DumpRenderingCVarsToCSV @ 145d1def0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRDGResourceDumpContext::DumpRenderingCVarsToCSV(FRDGResourceDumpContext *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  IFileManager *pIVar5;
  longlong lVar6;
  IConsoleManager *pIVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  ForAnyElementType FVar10;
  int iVar11;
  ENullTerminatedString EVar12;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  longlong *local_100;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FString local_d8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar4 = &::FString::FString((FString *)local_118,L"Base/")->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_f8,pTVar4,
             0x16 - (uint)(pTVar4->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_f8,L"ConsoleVariables.csv",0x14);
  GetDumpFullPath(this,&local_d8,(FString *)&local_f8);
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  if ((atomic<unsigned___int64>)local_118 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_118);
  }
  pIVar5 = IFileManager::Get();
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar10.Data = local_d8.Data.AllocatorInstance.Data;
  }
  local_100 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,FVar10.Data,0);
  if (local_100 != (longlong *)0x0) {
    ::FString::FString((FString *)&local_f8,L"CVar,Type,SetBy,Value\n");
    local_c8._padding_ = 0;
    EVar12 = No;
    iVar11 = (int)local_f8.Accessor + -1;
    if ((int)local_f8.Accessor == 0) {
      iVar11 = 0;
    }
    if ((FScriptContainerElement *)local_f8._0_8_ == (FScriptContainerElement *)0x0) {
      local_c8.Ptr = (char *)0x0;
      local_c8.StringLength = 0;
    }
    else {
      if ((0 < iVar11) && (*(wchar_t *)(local_f8._0_8_ + ((longlong)iVar11 + -1) * 2) == L'\0')) {
        EVar12 = Yes;
        iVar11 = iVar11 + -1;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::Init
                (&local_c8,(wchar_t *)local_f8._0_8_,iVar11,EVar12);
    }
    (**(code **)(*local_100 + 0x188))(local_100,local_c8.Ptr,(longlong)local_c8.StringLength);
    if ((void *)local_c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._padding_);
    }
    if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f8._0_8_);
    }
    pTVar2 = GDumpRenderingConsoleVariablesCVar.Ref;
    bVar3 = IsInParallelGameThread();
    if (bVar3) {
LAB_145d1e089:
      lVar6 = 0;
    }
    else {
      bVar3 = IsInGameThread();
      lVar6 = 4;
      if (bVar3) goto LAB_145d1e089;
    }
    if (*(int *)((longlong)pTVar2->ShadowedValue + lVar6) == 0) {
      pIVar7 = IConsoleManager::Get();
      local_118 = (undefined1  [8])0x0;
      local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_110.DelegateSize = 0;
      pcVar1 = *(code **)((longlong)*pIVar7 + 0xd8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                 (FWriteAccessScope *)&local_f8);
      local_e0 = &local_110;
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_110);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseFunctorDelegateInstance___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__DumpRenderingCVarsToCSV_FRDGResourceDumpContext__QEBAXXZ___V__6B_
        ;
        puVar8[3] = &local_100;
      }
      if (local_f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
      }
      (*pcVar1)(pIVar7,local_118);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                 (FWriteAccessScope *)&local_f8);
    }
    else {
      pIVar7 = IConsoleManager::Get();
      local_118 = (undefined1  [8])0x0;
      local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_110.DelegateSize = 0;
      pcVar1 = *(code **)((longlong)*pIVar7 + 0xd8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                 (FWriteAccessScope *)&local_f8);
      local_e0 = &local_110;
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_110);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseFunctorDelegateInstance___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__DumpRenderingCVarsToCSV_FRDGResourceDumpContext__QEBAXXZ___V__6B_
        ;
        puVar8[3] = &local_100;
      }
      if (local_f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
      }
      (*pcVar1)(pIVar7,local_118);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                 (FWriteAccessScope *)&local_f8);
    }
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_118);
    (**(code **)(*local_100 + 0x210))();
    if ((*(byte *)((longlong)local_100 + 0x29) & 6) == 0) {
      if (3 < (byte)LogDumpGPU._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_FRDGResourceDumpContext::DumpRenderingCVarsToCSV(void)const___ptr64'
                    ::__l15::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
      }
      goto LAB_145d1e30d;
    }
  }
  if (1 < (byte)LogDumpGPU._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_void___cdecl_FRDGResourceDumpContext::DumpRenderingCVarsToCSV(void)const___ptr64'
                ::__l35::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
  }
LAB_145d1e30d:
  if (local_100 != (longlong *)0x0) {
    (**(code **)*local_100)(local_100,1);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// DumpResourceBinaryToFile @ 145d1e360

bool __thiscall
FRDGResourceDumpContext::DumpResourceBinaryToFile
          (FRDGResourceDumpContext *this,uchar *param_1,long64 param_2,FString *param_3)

{
  TAtomic<double> TVar1;
  IFileManager *pIVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_28;
  FString local_20;
  
  if (this->bEnableDiskWrite == false) {
    return true;
  }
  GetDumpFullPath(this,&local_20,param_3);
  QueryPerformanceCounter(&local_res8);
  LOCK();
  this->ResourceBinaryFilesOpened = (TAtomic<int>)((int)this->ResourceBinaryFilesOpened + 1);
  UNLOCK();
  LOCK();
  this->ResourceBinaryWriteBytes =
       (TAtomic<__int64>)((longlong)this->ResourceBinaryWriteBytes + param_2);
  UNLOCK();
  pIVar2 = IFileManager::Get();
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_20.Data.ArrayNum != 0) {
    FVar5.Data = local_20.Data.AllocatorInstance.Data;
  }
  plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,FVar5.Data,0);
  if (plVar3 == (longlong *)0x0) {
    QueryPerformanceCounter(&local_28);
    uVar4 = 0;
    if (local_28.QuadPart - (longlong)local_res8 != 0) {
      uVar4 = local_28.QuadPart - (longlong)local_res8;
    }
    dVar8 = (double)uVar4 * FGenericPlatformTime::SecondsPerCycle64;
    do {
      TVar1 = this->TimingBucket[6];
      LOCK();
      bVar6 = TVar1 == this->TimingBucket[6];
      if (bVar6) {
        this->TimingBucket[6] = (TAtomic<double>)(dVar8 + (double)TVar1);
      }
      UNLOCK();
    } while (!bVar6);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    bVar6 = false;
  }
  else {
    (**(code **)(*plVar3 + 0x188))(plVar3,param_1,param_2);
    (**(code **)(*plVar3 + 0x210))(plVar3);
    bVar6 = (*(byte *)((longlong)plVar3 + 0x29) & 6) == 0;
    (**(code **)*plVar3)(plVar3,1);
    QueryPerformanceCounter(&local_28);
    uVar4 = 0;
    if (local_28.QuadPart - (longlong)local_res8 != 0) {
      uVar4 = local_28.QuadPart - (longlong)local_res8;
    }
    dVar8 = (double)uVar4 * FGenericPlatformTime::SecondsPerCycle64;
    do {
      TVar1 = this->TimingBucket[6];
      LOCK();
      bVar7 = TVar1 == this->TimingBucket[6];
      if (bVar7) {
        this->TimingBucket[6] = (TAtomic<double>)(dVar8 + (double)TVar1);
      }
      UNLOCK();
    } while (!bVar7);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return bVar6;
}

// DumpStatusToFile @ 145d1f970

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRDGResourceDumpContext::DumpStatusToFile
          (FRDGResourceDumpContext *this,TStringView<wchar_t> *param_1)

{
  bool bVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  if (3 < (byte)LogDumpGPU._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_bool___cdecl_FRDGResourceDumpContext::DumpStatusToFile(TStringView<wchar_t>)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
  }
  pTVar2 = &::FString::FString(&local_18,L"Base/")->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,pTVar2,0xc - (uint)(pTVar2->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_38,L"Status.txt",10);
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = DumpStringToFile(this,&local_28,(FString *)&local_38,0);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// DumpStringToFile @ 145d1fa40

bool __thiscall
FRDGResourceDumpContext::DumpStringToFile
          (FRDGResourceDumpContext *this,TStringView<wchar_t> *param_1,FString *param_2,uint param_3
          )

{
  TAtomic<double> TVar1;
  bool bVar2;
  IFileManager *pIVar3;
  ForAnyElementType FVar4;
  ulonglong uVar5;
  bool bVar6;
  double dVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_38;
  FString local_30;
  TStringView<wchar_t> local_18;
  
  if (this->bEnableDiskWrite == false) {
    return true;
  }
  GetDumpFullPath(this,&local_30,param_2);
  QueryPerformanceCounter(&local_38);
  LOCK();
  this->MetadataFilesOpened = (TAtomic<int>)((int)this->MetadataFilesOpened + 1);
  UNLOCK();
  LOCK();
  this->MetadataFilesWriteBytes =
       (TAtomic<__int64>)((longlong)this->MetadataFilesWriteBytes + (longlong)param_1->Size);
  UNLOCK();
  pIVar3 = IFileManager::Get();
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_30.Data.ArrayNum != 0) {
    FVar4.Data = local_30.Data.AllocatorInstance.Data;
  }
  bVar2 = FFileHelper::SaveStringToFile(&local_18,(wchar_t *)FVar4.Data,AutoDetect,pIVar3,param_3);
  QueryPerformanceCounter(&local_res8);
  uVar5 = 0;
  if (local_res8.QuadPart - (longlong)local_38 != 0) {
    uVar5 = local_res8.QuadPart - (longlong)local_38;
  }
  dVar7 = (double)uVar5 * FGenericPlatformTime::SecondsPerCycle64;
  do {
    TVar1 = this->TimingBucket[4];
    LOCK();
    bVar6 = TVar1 == this->TimingBucket[4];
    if (bVar6) {
      this->TimingBucket[4] = (TAtomic<double>)(dVar7 + (double)TVar1);
    }
    UNLOCK();
  } while (!bVar6);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// DumpTextureSubResource @ 145d1fb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145d1ff6a) */
/* WARNING: Removing unreachable block (ram,0x000145d1ff7b) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGResourceDumpContext::DumpTextureSubResource
          (FRDGResourceDumpContext *this,FRHICommandListImmediate *param_1,wchar_t *param_2,
          FRHITexture *param_3,FRHIShaderResourceView *param_4,FTextureSubresourceDumpDesc *param_5,
          FString *param_6)

{
  byte *pbVar1;
  ETextureType EVar2;
  atomic<unsigned_int> aVar3;
  FGlobalShaderMap *this_00;
  TAtomic<double> TVar4;
  code *pcVar5;
  TIntPoint<int>_u_0 TVar6;
  FRHITransitionInfo_u_8 this_01;
  TRefCountPtr<FRHITexture> TVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FRHITextureCreateDesc *pFVar12;
  FInitializer *pFVar13;
  FGlobalShaderType *pFVar14;
  FGlobalShaderMapSection **ppFVar15;
  FShader *pFVar16;
  FName this_02;
  FShaderParametersMetadata *pFVar17;
  FRHIComputeShader *pFVar18;
  FRHIBatchedShaderUnbinds *pFVar19;
  IRHICommandContext *pIVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  FShaderMapBase *pFVar24;
  FRHITransitionInfo_u_8 this_03;
  uint uVar25;
  uint uVar26;
  double dVar27;
  undefined1 auStackY_6a8 [32];
  undefined1 local_668;
  undefined1 local_667;
  undefined1 local_666 [6];
  FRHITransitionInfo_u_8 local_660;
  TRefCountPtr<FRHITexture> local_658 [2];
  FRHITransitionInfo *local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  int local_638;
  int local_634;
  TRefCountPtr<FRHIUnorderedAccessView> local_630;
  FLLMScope local_628 [2];
  FRHIResource *local_620;
  undefined1 local_618 [40];
  longlong lStack_5f0;
  FString *local_5e8;
  FShaderMapBase *local_5e0;
  void *local_5d8;
  TIntVector3<int>_u_0 local_5c8;
  longlong local_5b8;
  int iStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  int iStack_5a4;
  longlong lStack_5a0;
  int local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 local_580;
  FShader *local_578;
  LARGE_INTEGER local_570;
  LARGE_INTEGER local_568;
  LARGE_INTEGER local_560;
  LARGE_INTEGER local_558;
  FMemScope local_550;
  wchar_t *local_548;
  uint local_540;
  undefined1 local_538 [8];
  LARGE_INTEGER local_530 [3];
  FRHIShaderResourceView *local_518;
  FRHIUnorderedAccessView *local_510;
  TShaderRefBase<_anonymous_namespace_::FDumpTextureCS,FShaderMapPointerTable> local_508;
  ForElementType<EPixelFormat> local_4f8;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_4f0;
  FRHITransitionInfo local_4d8;
  FRHITransitionInfo local_4a8;
  FRHITransitionInfo local_478;
  FRHITransitionInfo local_448;
  FRHITransitionInfo local_418;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3e8;
  FString local_3d8;
  TArrayView<FRHITransitionInfo_const_,int> local_3c8;
  TArrayView<FRHITransitionInfo_const_,int> local_3b8;
  TArrayView<FRHITransitionInfo_const_,int> local_3a8;
  TArrayView<FRHITransitionInfo_const_,int> local_398;
  TArrayView<FRHITransitionInfo_const_,int> local_388;
  undefined1 local_378 [32];
  uint local_358;
  TIntPoint<int>_u_0 local_354;
  undefined4 local_34c;
  undefined4 local_348;
  undefined2 local_344;
  ForElementType<EPixelFormat> local_338;
  int local_330;
  int local_32c;
  wchar_t *local_328;
  ERHIAccess local_320;
  ERHITextureInitAction local_31c;
  FResourceBulkDataInterface *local_318;
  FName local_310;
  FName local_308;
  undefined1 local_2f8 [32];
  uint local_2d8;
  TIntPoint<int>_u_0 local_2d4;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined2 local_2c4;
  ForElementType<EPixelFormat> local_2b8;
  int local_2b0;
  int local_2ac;
  wchar_t *local_2a8;
  ERHIAccess local_2a0;
  ERHITextureInitAction local_29c;
  FResourceBulkDataInterface *local_298;
  FName local_290;
  FName local_288;
  undefined1 local_278 [48];
  longlong local_248;
  longlong local_238 [3];
  longlong *local_220;
  FRHICommandListBase *local_218;
  FRHITexture *local_210;
  undefined1 local_1e8 [48];
  longlong local_1b8;
  longlong local_1a8 [3];
  longlong *local_190;
  FRHICommandListBase *local_188;
  FRHITexture *local_180;
  FRHITextureCreateDesc local_158;
  FRHITextureCreateDesc local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  local_530[1] = (LARGE_INTEGER)param_4;
  local_5e8 = param_6;
  local_618._8_8_ = param_5;
  local_548 = param_2;
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x485,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar16 = (FShader *)0x0;
  local_658[0].Reference = (FRHITexture *)0x0;
  local_660.Resource = (FRHIResource *)0x0;
  local_578 = (FShader *)0x0;
  QueryPerformanceCounter(local_530);
  local_568 = local_530[0];
  if (param_5->bPreprocessForStaging == false) goto LAB_145d202c7;
  local_630.Reference = (FRHIUnorderedAccessView *)0x0;
  pFVar12 = FRHITextureCreateDesc::Create2D
                      (&local_158,L"DumpGPU.PreprocessTexture",
                       (TIntPoint<int>)(param_5->SubResourceExtent).field0_0x0._s_0,
                       param_5->PreprocessedPixelFormat);
  pFVar12->_padding_ = 0x420008;
  local_378._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_378._0_8_ = None;
  local_378._8_8_ = 1;
  local_378._16_8_ = 0;
  local_378._24_4_ = 0.0;
  local_358 = 0;
  local_354._s_0.X = 1;
  local_354._s_0.Y = 1;
  local_34c._0_2_ = 1;
  local_34c._2_2_ = 1;
  local_348._0_1_ = '\x01';
  local_348._1_1_ = '\x01';
  local_348._2_1_ = Texture2D;
  local_348._3_1_ = PF_Unknown;
  local_344._0_1_ = PF_Unknown;
  local_344._1_1_ = 0xff;
  local_338 = (ForElementType<EPixelFormat>)0x0;
  local_330 = 0;
  local_32c = 1;
  FRHITextureDesc::operator=((FRHITextureDesc *)local_378,(FRHITextureDesc *)pFVar12);
  local_328 = pFVar12->DebugName;
  local_320 = pFVar12->InitialState;
  local_31c = pFVar12->InitAction;
  local_318 = pFVar12->BulkData;
  local_310 = pFVar12->ClassName;
  local_308 = pFVar12->OwnerName;
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (this->bStream == false) {
    bVar9 = IsInRenderingThread();
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                           ,0x3fe,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FRHICommandListBase::CreateTextureInitializer
              ((FRHICommandListBase *)param_1,(FRHITextureInitializer *)local_278,
               (FRHITextureCreateDesc *)local_378);
    FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_278);
    if ((local_218 != (FRHICommandListBase *)0x0) && (local_210 != (FRHITexture *)0x0)) {
      FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_278);
    }
    if (local_248 != 0) {
      plVar22 = local_238;
      if (local_220 != (longlong *)0x0) {
        plVar22 = local_220;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_278._0_8_ != 0) {
      plVar22 = (longlong *)(local_278 + 0x10);
      if ((longlong *)local_278._40_8_ != (longlong *)0x0) {
        plVar22 = (longlong *)local_278._40_8_;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    TVar7.Reference = local_658[0].Reference;
    local_658[0].Reference = (FRHITexture *)local_618._16_8_;
    local_618._16_8_ = (FRHITexture *)0x0;
    if ((TVar7.Reference != (FRHITexture *)0x0) &&
       (FRHIResource::Release((FRHIResource *)TVar7.Reference),
       (FRHITexture *)local_618._16_8_ != (FRHITexture *)0x0)) {
      FRHIResource::Release((FRHIResource *)local_618._16_8_);
    }
    uVar25 = (uint)(local_658[0].Reference)->_padding_;
    if (((uVar25 >> 0x1e & 1) != 0) || ((uVar25 & 0x3fffffff) == 0)) {
      local_668 = 0;
      `FRHIResource::DisableLifetimeExtension'::__l2::<lambda_1>::operator()(&local_668);
    }
    TVar7.Reference = local_658[0].Reference;
    lStack_5f0 = CONCAT44(lStack_5f0._4_4_,1);
    local_4d8._padding_._4_2_ = 0xffff;
    local_618._32_8_ = &local_4d8;
    local_4d8._padding_._0_4_ = 0xffffffff;
    pbVar1 = (byte *)((longlong)&(local_658[0].Reference)->_padding_ + 5);
    *pbVar1 = *pbVar1 & 0xfd;
    local_388._8_8_ = lStack_5f0;
    local_4d8.field1_0x8.Texture = local_658[0].Reference;
    local_4d8.Type = Texture;
    local_4d8.AccessBefore = None;
    local_4d8.AccessAfter = UAVCompute;
    local_4d8.Flags = None;
    local_4d8.CommitInfo.bIsSet = false;
    local_388.DataPtr = (FRHITransitionInfo *)local_618._32_8_;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_388,None);
    lStack_5f0 = 0;
    local_618._32_8_ = &DAT_100000003;
    pFVar13 = FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
                        ((FInitializer *)(local_618 + 0x20),TVar7.Reference);
    pFVar13->field_0x3 = 0;
    FRHICommandListBase::CreateUnorderedAccessView
              ((FRHICommandListBase *)param_1,(FRHITexture *)local_618,
               (FInitializer *)TVar7.Reference);
    uVar8 = local_618._0_8_;
    aVar3 = ((FAtomicFlags *)(local_618._0_8_ + 8))->Packed;
    if ((((uint)aVar3 >> 0x1e & 1) != 0) || (((uint)aVar3 & 0x3fffffff) == 0)) {
      local_667 = 0;
      `FRHIResource::DisableLifetimeExtension'::__l2::<lambda_1>::operator()(&local_667);
    }
    uVar8->bAllowExtendLifetime = '\0';
    local_630.Reference = (FRHIUnorderedAccessView *)local_618._0_8_;
    local_618._0_8_ = (FRHIUnorderedAccessView *)0x0;
  }
  else {
    ReuseStagingTexture(this,param_1,(FRHITextureCreateDesc *)local_378,UAVCompute,local_658,
                        &local_630);
  }
  local_4f8 = (ForElementType<EPixelFormat>)local_658[0].Reference;
  if (local_338 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_338);
  }
  uVar23 = (ulonglong)GMaxRHIShaderPlatform;
  EVar2 = param_5->DumpTextureType;
  if ((GGlobalShaderMap[uVar23] == (FGlobalShaderMap *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GGlobalShaderMap[Platform]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalShader.cpp"
                         ,0x21e,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = GGlobalShaderMap[uVar23];
  if ((Texture2DDepthStencilNoMSAA < EVar2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar14 = _anon_6E8CE10E::FDumpTextureCS::GetStaticType();
  ppFVar15 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
             ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                     *)this_00,(FHashedName *)&pFVar14->field_0x30);
  if (ppFVar15 == (FGlobalShaderMapSection **)0x0) {
LAB_145d2005e:
    local_5e0 = (FShaderMapBase *)0x0;
    pFVar24 = local_5e0;
    this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_538);
    ::FName::ToString((FName *)this_02,&local_3d8);
    _anon_6E8CE10E::FDumpTextureCS::GetStaticType();
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pFVar24 = (FShaderMapBase *)*ppFVar15;
    pFVar16 = FShaderMapContent::GetShader
                        ((pFVar24->Content).Object,(FHashedName *)&pFVar14->field_0x28,EVar2);
    local_5e0 = pFVar24;
    if (pFVar16 == (FShader *)0x0) goto LAB_145d2005e;
  }
  _anon_6E8CE10E::FDumpTextureCS::GetStaticType();
  local_518 = (FRHIShaderResourceView *)local_530[1];
  local_510 = local_630.Reference;
  iVar10 = *(int *)local_618._8_8_ + 7;
  iVar11 = *(int *)(local_618._8_8_ + 4) + 7;
  uVar26 = (int)((iVar10 >> 0x1f & 7U) + iVar10) >> 3;
  uVar25 = (int)((iVar11 >> 0x1f & 7U) + iVar11) >> 3;
  local_508.ShaderContent = (FDumpTextureCS *)pFVar16;
  local_508.ShaderMap = pFVar24;
  pFVar17 = _anon_6E8CE10E::FDumpTextureCS::FParameters::FTypeInfo::GetStructMetadata();
  local_5c8._s_0.Z = 1;
  local_5c8._s_0.X = uVar26;
  local_5c8._s_0.Y = uVar25;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_5c8._s_0);
  pFVar18 = TShaderRefBase<`anonymous_namespace'::FDumpTextureCS,FShaderMapPointerTable>::
            GetComputeShader(&local_508);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar18);
  local_3e8.ShaderMap = local_5e0;
  local_3e8.ShaderContent = pFVar16;
  ValidateShaderParameters(&local_3e8,pFVar17,&local_518);
  ::SetShaderParameters
            ((FRHIComputeCommandList *)param_1,pFVar18,&pFVar16->Bindings,pFVar17,&local_518);
  FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,uVar26,uVar25,1);
  pFVar18 = TShaderRefBase<`anonymous_namespace'::FDumpTextureCS,FShaderMapPointerTable>::
            GetComputeShader(&local_508);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar19 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if (((pFVar16->Bindings).RootParameterBufferIndex != 0xffff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                           ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar19,&pFVar16->Bindings);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,pFVar18,pFVar19);
  }
  param_3 = (FRHITexture *)local_4f8;
  uStack_640 = 1;
  local_4a8._padding_._4_2_ = 0xffff;
  local_648 = &local_4a8;
  local_4a8._padding_._0_4_ = 0xffffffff;
  local_3c8._12_4_ = uStack_63c;
  local_3c8.ArrayNum = 1;
  local_4a8.field1_0x8.Resource = (FRHIResource *)local_4f8;
  local_4a8.Type = Texture;
  local_4a8.AccessBefore = UAVCompute;
  local_4a8.AccessAfter = CopySrc;
  local_4a8.Flags = None;
  local_4a8.CommitInfo.bIsSet = false;
  local_3c8.DataPtr = local_648;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_3c8,None);
  param_5 = (FTextureSubresourceDumpDesc *)local_618._8_8_;
  pFVar16 = local_578;
  if (local_630.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_630.Reference);
    param_5 = (FTextureSubresourceDumpDesc *)local_618._8_8_;
    pFVar16 = local_578;
  }
LAB_145d202c7:
  pFVar12 = FRHITextureCreateDesc::Create2D
                      (&local_d8,L"DumpGPU.StagingTexture",
                       (TIntPoint<int>)*(TIntPoint<int>_u_0_s_0 *)param_5,
                       *(EPixelFormat *)((longlong)param_5 + 0x18));
  pFVar12->_padding_ = 0x480000;
  local_2f8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_2f8._0_8_ = None;
  local_2f8._8_8_ = 1;
  local_2f8._16_8_ = 0;
  local_2f8._24_4_ = 0.0;
  local_2d8 = 0;
  local_2d4._s_0.X = 1;
  local_2d4._s_0.Y = 1;
  local_2cc._0_2_ = 1;
  local_2cc._2_2_ = 1;
  local_2c8._0_1_ = '\x01';
  local_2c8._1_1_ = '\x01';
  local_2c8._2_1_ = Texture2D;
  local_2c8._3_1_ = PF_Unknown;
  local_2c4._0_1_ = PF_Unknown;
  local_2c4._1_1_ = 0xff;
  local_2b8 = (ForElementType<EPixelFormat>)0x0;
  local_2b0 = 0;
  local_2ac = 1;
  FRHITextureDesc::operator=((FRHITextureDesc *)local_2f8,(FRHITextureDesc *)pFVar12);
  local_2a8 = pFVar12->DebugName;
  local_2a0 = pFVar12->InitialState;
  local_29c = pFVar12->InitAction;
  local_298 = pFVar12->BulkData;
  local_290 = pFVar12->ClassName;
  local_288 = pFVar12->OwnerName;
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  if (this->bStream == false) {
    bVar9 = IsInRenderingThread();
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                           ,0x3fe,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FRHICommandListBase::CreateTextureInitializer
              ((FRHICommandListBase *)param_1,(FRHITextureInitializer *)local_1e8,
               (FRHITextureCreateDesc *)local_2f8);
    FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_1e8);
    if ((local_188 != (FRHICommandListBase *)0x0) && (local_180 != (FRHITexture *)0x0)) {
      FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_1e8);
    }
    if (local_1b8 != 0) {
      plVar22 = local_1a8;
      if (local_190 != (longlong *)0x0) {
        plVar22 = local_190;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_1e8._0_8_ != 0) {
      plVar22 = (longlong *)(local_1e8 + 0x10);
      if ((longlong *)local_1e8._40_8_ != (longlong *)0x0) {
        plVar22 = (longlong *)local_1e8._40_8_;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    this_03 = (FRHITransitionInfo_u_8)local_618._24_8_;
    this_01 = local_660;
    local_660.Texture = (FRHITexture *)local_618._24_8_;
    local_618._24_8_ = (ForElementType<EPixelFormat>)0x0;
    if (((ForElementType<EPixelFormat>)this_01.Resource != (ForElementType<EPixelFormat>)0x0) &&
       (FRHIResource::Release(this_01.Resource),
       (ForElementType<EPixelFormat>)local_618._24_8_ != (ForElementType<EPixelFormat>)0x0)) {
      FRHIResource::Release((FRHIResource *)local_618._24_8_);
    }
    aVar3 = ((FAtomicFlags *)((longlong)this_03.Resource + 8))->Packed;
    if ((((uint)aVar3 >> 0x1e & 1) != 0) || (((uint)aVar3 & 0x3fffffff) == 0)) {
      local_666[0] = 0;
      `FRHIResource::DisableLifetimeExtension'::__l2::<lambda_1>::operator()(local_666);
    }
    pbVar1 = (byte *)((longlong)((longlong)this_03.ViewableResource + 8) + 5);
    *pbVar1 = *pbVar1 & 0xfd;
    uStack_640 = 1;
    local_478._padding_._4_2_ = 0xffff;
    local_648 = &local_478;
    local_478._padding_._0_4_ = 0xffffffff;
    local_3b8._12_4_ = uStack_63c;
    local_3b8.ArrayNum = 1;
    local_478.field1_0x8.Resource = this_03.Resource;
    local_478.Type = Texture;
    local_478.AccessBefore = None;
    local_478.AccessAfter = CopyDest;
    local_478.Flags = None;
    local_478.CommitInfo.bIsSet = false;
    local_3b8.DataPtr = local_648;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_3b8,None);
  }
  else {
    pFVar16 = (FShader *)
              ReuseStagingTexture(this,param_1,(FRHITextureCreateDesc *)local_2f8,CopyDest,
                                  (TRefCountPtr<FRHITexture> *)&local_660,
                                  (TRefCountPtr<FRHIUnorderedAccessView> *)0x0);
    this_03 = local_660;
  }
  uStack_58c = 1;
  uStack_588 = 0;
  local_580 = 1;
  local_5b8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uStack_5ac = (undefined4)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uStack_5a8 = (undefined4)
               ((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
  lStack_5a0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  iStack_5b0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  iStack_5a4 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_598 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  uStack_594 = 0;
  uStack_590 = 0;
  uStack_584 = 0;
  if ((((ForElementType<EPixelFormat>)param_3 == (ForElementType<EPixelFormat>)0x0) ||
      ((ForElementType<EPixelFormat>)this_03.Resource == (ForElementType<EPixelFormat>)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceTextureRHI && DestTextureRHI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1077,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_3 == (FRHITexture *)this_03.Resource) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceTextureRHI != DestTextureRHI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1078,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((param_1->field_0x29b & 2) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsOutsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1079,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar21 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x60,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar21;
    *(undefined8 **)&param_1->field_0x30 = puVar21 + 1;
    puVar21[1] = 0;
    *puVar21 = &___7FRHICommandCopyTexture__6B_;
    puVar21[2] = local_5b8;
    puVar21[3] = CONCAT44(uStack_5ac,iStack_5b0);
    puVar21[4] = CONCAT44(iStack_5a4,uStack_5a8);
    puVar21[5] = lStack_5a0;
    puVar21[6] = CONCAT44(uStack_594,local_598);
    puVar21[7] = CONCAT44(uStack_58c,uStack_590);
    puVar21[8] = CONCAT44(uStack_584,uStack_588);
    *(undefined4 *)(puVar21 + 9) = local_580;
    *(FRHITexture **)(puVar21 + 10) = param_3;
    ((FRHITransitionInfo_u_8 *)(puVar21 + 0xb))->Resource = (FRHIResource *)this_03;
    if (((ForElementType<EPixelFormat>)param_3 == (ForElementType<EPixelFormat>)0x0) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6604847226579585294>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x90e,"SourceTexture"), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((puVar21[0xb] == 0) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6604847226579585295>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x90f,"DestTexture"), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pIVar20 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar20->_padding_ + 0x260))(pIVar20,param_3);
  }
  local_448._padding_._0_4_ = 0xffffffff;
  local_648 = &local_448;
  uStack_640 = 1;
  local_3a8._12_4_ = uStack_63c;
  local_3a8.ArrayNum = 1;
  local_448._padding_._4_2_ = 0xffff;
  local_448.Type = Texture;
  local_448.AccessBefore = CopyDest;
  local_448.AccessAfter = CPURead;
  local_448.Flags = None;
  local_448.CommitInfo.bIsSet = false;
  local_448.field1_0x8 = this_03;
  local_3a8.DataPtr = local_648;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_3a8,None);
  if (local_2b8 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_2b8);
  }
  if ((local_658[0].Reference != (FRHITexture *)0x0) && (this->bStream != false)) {
    local_648 = &local_418;
    uStack_640 = 1;
    local_398._12_4_ = uStack_63c;
    local_398.ArrayNum = 1;
    local_418._padding_._0_4_ = 0xffffffff;
    local_418._padding_._4_2_ = 0xffff;
    local_418.field1_0x8.Texture = local_658[0].Reference;
    local_418.Type = Texture;
    local_418.AccessBefore = CopySrc;
    local_418.AccessAfter = UAVCompute;
    local_418.Flags = None;
    local_418.CommitInfo.bIsSet = false;
    local_398.DataPtr = local_648;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_398,None);
  }
  QueryPerformanceCounter(&local_570);
  uVar23 = 0;
  if (local_570.QuadPart - (longlong)local_568 != 0) {
    uVar23 = local_570.QuadPart - (longlong)local_568;
  }
  dVar27 = (double)uVar23 * FGenericPlatformTime::SecondsPerCycle64;
  do {
    TVar4 = this->TimingBucket[0];
    LOCK();
    bVar9 = TVar4 == this->TimingBucket[0];
    if (bVar9) {
      this->TimingBucket[0] = (TAtomic<double>)(dVar27 + (double)TVar4);
    }
    UNLOCK();
  } while (!bVar9);
  local_540 = 0x1f;
  bVar9 = *(int *)&param_1->field_0x29c != 0;
  if (bVar9) {
    for (; *(uint *)&param_1->field_0x29c >> local_540 == 0; local_540 = local_540 - 1) {
    }
  }
  uVar25 = 0;
  if (bVar9) {
    uVar25 = local_540;
  }
  if (this->bStream == false) {
    (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,&local_620,&GDumpGPUTextureFenceName);
    QueryPerformanceCounter(&local_558);
    (**(code **)(local_620->_padding_ + 0x10))();
    (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,param_1);
    FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
    FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
    QueryPerformanceCounter(&local_560);
    uVar23 = 0;
    if (local_560.QuadPart - (longlong)local_558 != 0) {
      uVar23 = local_560.QuadPart - (longlong)local_558;
    }
    dVar27 = (double)uVar23 * FGenericPlatformTime::SecondsPerCycle64;
    do {
      TVar4 = this->TimingBucket[2];
      LOCK();
      bVar9 = TVar4 == this->TimingBucket[2];
      if (bVar9) {
        this->TimingBucket[2] = (TAtomic<double>)((double)TVar4 + dVar27);
      }
      UNLOCK();
    } while (!bVar9);
    local_5d8 = (void *)0x0;
    local_634 = 0;
    local_638 = 0;
    FLLMScope::FLLMScope(local_628,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_550,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x428))(GDynamicRHI,param_1,this_03.Resource,uVar25);
    FMemScope::~FMemScope(&local_550);
    FLLMScope::~FLLMScope(local_628);
    if (local_5d8 == (void *)0x0) {
      if (2 < (byte)LogDumpGPU._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_FRDGResourceDumpContext::DumpTextureSubResource(FRHICommandListImmediate&___ptr64,wchar_t_const*___ptr64,FRHITexture*___ptr64,FRHIShaderResourceView*___ptr64,FRDGResourceDumpContext::FTextureSubresourceDumpDesc_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l49::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
      }
    }
    else {
      local_4f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4f0.ArrayNum = 0;
      local_4f0.ArrayMax = 0;
      PostProcessTexture(this,(FTextureSubresourceDumpDesc *)local_618._8_8_,local_5d8,local_634,
                         local_638,&local_4f0);
      FRHICommandListImmediate::UnmapStagingSurface(param_1,this_03.Texture,uVar25);
      DumpResourceBinaryToFile
                (this,(uchar *)local_4f0.AllocatorInstance.Data,local_4f0.ArrayNum,local_5e8);
      if (local_4f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f0.AllocatorInstance.Data);
      }
    }
    if (local_620 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_620);
    }
  }
  else {
    if ((pFVar16 == (FShader *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StagingTexturePoolEntry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                           ,0x4df,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(GDynamicRHI->_padding_ + 0xc0))
              (GDynamicRHI,param_1,(pFVar16->Bindings).BindlessResourceParameters.AllocatorInstance)
    ;
    TVar6 = *(TIntPoint<int>_u_0 *)(local_618._8_8_ + 8);
    (pFVar16->Bindings).GraphUniformBuffers.AllocatorInstance =
         (ForAnyElementType)*(TIntPoint<int>_u_0 *)local_618._8_8_;
    *(TIntPoint<int>_u_0 *)&(pFVar16->Bindings).GraphUniformBuffers.ArrayNum = TVar6;
    TVar6 = *(TIntPoint<int>_u_0 *)(local_618._8_8_ + 0x18);
    (pFVar16->Bindings).ParameterReferences.AllocatorInstance =
         (ForAnyElementType)*(TIntPoint<int>_u_0 *)(local_618._8_8_ + 0x10);
    *(TIntPoint<int>_u_0 *)&(pFVar16->Bindings).ParameterReferences.ArrayNum = TVar6;
    ::FString::operator=((FString *)&(pFVar16->Bindings).Parameters.ArrayNum,local_5e8);
    (pFVar16->Bindings).ResourceParameters.ArrayNum = uVar25;
  }
  if ((ForElementType<EPixelFormat>)this_03.Resource != (ForElementType<EPixelFormat>)0x0) {
    FRHIResource::Release(this_03.Resource);
  }
  if (local_658[0].Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_658[0].Reference);
  }
  return;
}

// Finish @ 145d29300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRDGResourceDumpContext::Finish(FRDGResourceDumpContext *this)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  IFileManager *pIVar5;
  FOutputDeviceRedirector *pFVar6;
  FString *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  double local_190;
  FString local_188;
  wchar_t *local_178;
  int local_170;
  TAtomic<double> local_160;
  TAtomic<double> local_158;
  TStringView<wchar_t> local_148;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [64];
  int local_e8;
  int local_e4;
  FString local_d8;
  FString local_c8;
  code *local_b8 [2];
  undefined **local_a8;
  FRDGResourceDumpContext *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  FRDGResourceDumpContext *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x8c6,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GRDGResourceDumpContext_GameThread != this) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GRDGResourceDumpContext_GameThread == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x8c7,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (3 < (byte)LogDumpGPU._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
  }
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRDGResourceDumpContext::Finish'::`17'::<lambda_1>,1,0>::
              _vftable_;
  local_90 = (undefined ***)0x0;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRDGResourceDumpContext::Finish'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_a0 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRDGResourceDumpContext::Finish_::__l17::TSTR_FEndGPUDump2253>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_78 = local_a8;
    pFStack_70 = pFStack_a0;
    local_68 = local_98;
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FRDGResourceDumpContext::Finish'::__l17::TSTR_FEndGPUDump2253>::Get
                       ();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar4);
    uVar9 = (ulonglong)local_58;
    if (2 < uVar9) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar8 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar8 = local_60;
        }
        (*(code *)(*pppuVar8)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    pppuVar8 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar8 = local_90;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  FlushRenderingCommands();
  pIVar5 = IFileManager::Get();
  if ((this->DumpingDirectoryPath).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(this->DumpingDirectoryPath).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar5 + 0x100))(pIVar5,&local_178,pwVar10);
  FDateTime::Now();
  local_160 = this->TimingBucket[4];
  local_158 = this->TimingBucket[5];
  local_148.DataPtr = *(wchar_t **)(this->TimingBucket + 6);
  if (3 < (byte)LogDumpGPU._0_1_) {
    local_198 = L"";
    if (local_170 != 0) {
      local_198 = local_178;
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
    if (3 < (byte)LogDumpGPU._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
      if (3 < (byte)LogDumpGPU._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
        if (3 < (byte)LogDumpGPU._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
        }
      }
    }
  }
  fVar2 = __real_35800000;
  if (3 < (byte)LogDumpGPU._0_1_) {
    local_190 = (double)((__real_35800000 / (float)(double)local_160) *
                        (float)(longlong)this->MetadataFilesWriteBytes);
    local_198 = (wchar_t *)(double)(float)(double)local_160;
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
    if (3 < (byte)LogDumpGPU._0_1_) {
      local_190 = (double)((fVar2 / (float)(double)local_158) *
                          (float)(longlong)this->ParametersFilesWriteBytes);
      local_198 = (wchar_t *)(double)(float)(double)local_158;
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
      if (3 < (byte)LogDumpGPU._0_1_) {
        local_190 = (double)((fVar2 / (float)(double)local_148.DataPtr) *
                            (float)(longlong)this->ResourceBinaryWriteBytes);
        local_198 = (wchar_t *)(double)(float)(double)local_148.DataPtr;
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
        if (3 < (byte)LogDumpGPU._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
        }
      }
    }
  }
  if (this->bEnableDiskWrite != false) {
    pFVar6 = GetGlobalLogSingleton();
    if (pFVar6 != (FOutputDeviceRedirector *)0x0) {
      pFVar6 = GetGlobalLogSingleton();
      FOutputDeviceRedirector::FlushThreadedLogs(pFVar6,None);
      pFVar6 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(pFVar6);
    }
    pFVar7 = ::operator/(&local_c8,&this->DumpingDirectoryPath,L"Base/");
    FGenericCrashContext::DumpLog(&local_d8,pFVar7);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  uStack_130 = 2;
  local_138 = L"ok";
  local_148._12_4_ = uStack_12c;
  local_148.Size = 2;
  local_148.DataPtr = L"ok";
  DumpStatusToFile(this,&local_148);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnShutdownAfterError,this);
  if ((this->bUpload != false) &&
     (IDumpGPUUploadServiceProvider::GProvider != (IDumpGPUUploadServiceProvider *)0x0)) {
    GetDumpParameters(this,(FDumpParameters *)local_128);
    if (this->UploadResourceCompressionName != (FName)0x0) {
      local_128._48_8_ = this->UploadResourceCompressionName;
      ::FString::FString(&local_188,L"*.bin");
      if ((FScriptContainerElement *)local_128._56_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_128._56_8_);
      }
      local_128._56_8_ = local_188.Data.AllocatorInstance.Data;
      local_e8 = local_188.Data.ArrayNum;
      local_e4 = local_188.Data.ArrayMax;
      local_188.Data.ArrayNum = 0;
      local_188.Data.ArrayMax = 0;
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    (**(code **)*IDumpGPUUploadServiceProvider::GProvider)
              (IDumpGPUUploadServiceProvider::GProvider,local_128);
    if ((FScriptContainerElement *)local_128._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._56_8_);
    }
    if ((FScriptContainerElement *)local_128._32_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._32_8_);
    }
    if ((FScriptContainerElement *)local_128._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._16_8_);
    }
    if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._0_8_);
    }
  }
  if (this->bShowInExplore != false) {
    pwVar10 = L"";
    if (local_170 != 0) {
      pwVar10 = local_178;
    }
    FWindowsPlatformProcess::ExploreFolder(pwVar10);
  }
  if (this->bOverrideFixedDeltaTime != false) {
    FApp::FixedDeltaTime = (atomic<double>)this->PreviousFixedDeltaTime;
    FApp::bUseFixedTimeStep = false;
  }
  if (local_178 != (wchar_t *)0x0) {
    FMemory::Free(local_178);
  }
  return;
}

// GetDumpFullPath @ 145d2b3f0

FString * __thiscall
FRDGResourceDumpContext::GetDumpFullPath
          (FRDGResourceDumpContext *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  uint uVar6;
  int iVar7;
  
  if (this->bEnableDiskWrite == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bEnableDiskWrite",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x18a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (param_1->Data).ArrayNum;
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  if (((this->DumpingDirectoryPath).Data.ArrayNum != 0) || (iVar4 = 2, iVar7 == -1)) {
    iVar4 = 1;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->DumpingDirectoryPath).Data.ArrayNum;
  _Src = (this->DumpingDirectoryPath).Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar4 + iVar7 == 0)) {
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    uVar6 = iVar1 + iVar4 + iVar7;
    if ((int)uVar6 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar6,0,(ForAnyElementType *)__return_storage_ptr__,iVar1,
               &(__return_storage_ptr__->Data).ArrayMax);
    if (iVar1 != 0) {
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar7);
  return __return_storage_ptr__;
}

// GetDumpParameters @ 145d2b500

FDumpParameters * __thiscall
FRDGResourceDumpContext::GetDumpParameters
          (FRDGResourceDumpContext *this,FDumpParameters *__return_storage_ptr__)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar1 = &__return_storage_ptr__->Time;
  (__return_storage_ptr__->Type).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Type).Data.ArrayNum = 0;
  (__return_storage_ptr__->Type).Data.ArrayMax = 0;
  (__return_storage_ptr__->LocalPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->LocalPath).Data.ArrayNum = 0;
  (__return_storage_ptr__->LocalPath).Data.ArrayMax = 0;
  (__return_storage_ptr__->CompressionName).ComparisonIndex = 0;
  (__return_storage_ptr__->CompressionName).Number = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Time).Data.ArrayNum = 0;
  (__return_storage_ptr__->Time).Data.ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->CompressionFiles = 0;
  *(undefined8 *)&(__return_storage_ptr__->CompressionFiles).field_0x8 = 0;
  ::FString::operator=(&__return_storage_ptr__->Type,L"DumpGPU");
  ::FString::operator=(&__return_storage_ptr__->LocalPath,&this->DumpingDirectoryPath);
  pFVar3 = FDateTime::ToString(&this->Time,&local_18);
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Time).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Time).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUniqueResourceName @ 145d40fe0

FString * __thiscall
FRDGResourceDumpContext::GetUniqueResourceName
          (FRDGResourceDumpContext *this,FString *__return_storage_ptr__,FRDGResource *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_28;
  FString local_18;
  
  pTVar2 = GDumpTestPrettifyResourceFileNames.Ref;
  bVar3 = IsInParallelRenderingThread();
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  if (pTVar2->ShadowedValue[1] == 0) {
    if (param_1 == (FRDGResource *)0x0) {
      ::FString::FString(__return_storage_ptr__,L"00000000000000000000");
    }
    else {
      ::FString::PrintfImpl(__return_storage_ptr__,L"%04u%016llx");
    }
  }
  else {
    if (param_1 == (FRDGResource *)0x0) {
      ::FString::FString(&local_18,L"00000000000000000000");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"%04u%016llx");
    }
    ::FString::PrintfImpl(&local_28,L"%s.%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::ReplaceInline(&local_28,L"/",L"",IgnoreCase);
    ::FString::ReplaceInline(&local_28,L"\\",L"",IgnoreCase);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// HasResourceEverBeenDumped @ 145d41150

bool __thiscall
FRDGResourceDumpContext::HasResourceEverBeenDumped
          (FRDGResourceDumpContext *this,FRDGResource *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(this->LastResourceVersion).field_0x8 !=
      *(int *)&(this->LastResourceVersion).field_0x34) {
    puVar2 = *(undefined1 **)&(this->LastResourceVersion).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->LastResourceVersion).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->LastResourceVersion).field_0x48 - 1U &
                              (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(FRDGResource **)(*(longlong *)&this->LastResourceVersion + (longlong)iVar1 * 0x18) ==
            param_1) goto LAB_145d411ec;
        iVar1 = *(int *)(*(longlong *)&this->LastResourceVersion + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_145d411ec:
  return iVar1 != -1;
}

// IsDumpingPass @ 145d444a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FRDGResourceDumpContext::IsDumpingPass(FRDGResourceDumpContext *this,FRDGPass *param_1)

{
  FScriptContainerElement *_Src;
  FRDGScope *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  TConsoleVariableData<FString> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  undefined1 auStackY_178 [32];
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  pTVar4 = GDumpGPURootCVar.Ref;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = pTVar4->ShadowedValue[1].Data.ArrayNum;
  lVar10 = (longlong)local_120;
  _Src = pTVar4->ShadowedValue[1].Data.AllocatorInstance.Data;
  if (local_120 == 0) {
    local_11c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_120,0,&local_128,local_120,&local_11c);
    memcpy(local_128.Data,_Src,lVar10 * 2);
  }
  iVar7 = local_120;
  FVar9.Data = local_128.Data;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = local_120;
  if (local_120 == 0) {
    local_12c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_120,0,&local_138,local_120,&local_12c);
    memcpy(local_138.Data,FVar9.Data,(longlong)iVar7 * 2);
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_120 != 0) {
    FVar9.Data = local_128.Data;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L"*");
  bVar5 = iVar7 == 0;
  if (iVar7 != 0) {
    pwVar8 = FRDGEventName::GetTCHAR(&param_1->Name);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_130 != 0) {
      FVar9.Data = local_138.Data;
    }
    bVar5 = FWildcardString::IsMatch((wchar_t *)FVar9.Data,pwVar8);
  }
  for (pFVar1 = param_1->Scope; (bVar5 == false && (pFVar1 != (FRDGScope *)0x0));
      pFVar1 = pFVar1->Parent) {
    if (((pFVar1->Impl).Impl.TypeIndex == '\x02') &&
       (&pFVar1->Impl != (TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *)0x0)) {
      plVar2 = (longlong *)(pFVar1->Impl).Impl._padding_;
      pwVar8 = (wchar_t *)(**(code **)(*plVar2 + 0x10))(plVar2,local_118);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_130 != 0) {
        FVar9.Data = local_138.Data;
      }
      bVar5 = FWildcardString::IsMatch((wchar_t *)FVar9.Data,pwVar8);
    }
  }
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  return bVar5;
}

// IsUnsafeToDumpResource @ 145d44b40

bool __thiscall
FRDGResourceDumpContext::IsUnsafeToDumpResource
          (FRDGResourceDumpContext *this,ulong64 param_1,float param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  
  uVar1 = (this->MemoryStats).AvailableVirtual;
  uVar2 = (this->MemoryStats).AvailablePhysical;
  uVar4 = uVar2;
  if ((uVar1 != 0) && (uVar4 = uVar1, uVar2 < uVar1)) {
    uVar4 = uVar2;
  }
  lVar3 = 0;
  dVar5 = (double)param_1 * (double)param_2;
  if ((__real_43e0000000000000 <= dVar5) &&
     (dVar5 = dVar5 - __real_43e0000000000000, dVar5 < __real_43e0000000000000)) {
    lVar3 = -0x8000000000000000;
  }
  return uVar4 < (ulonglong)((longlong)dVar5 + lVar3);
}

// LandCompletedResources @ 145d454c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGResourceDumpContext::LandCompletedResources
          (FRDGResourceDumpContext *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  code *pcVar5;
  FQueuedThreadPool *pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FEvent *pFVar10;
  FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *pFVar11;
  void *pvVar12;
  longlong lVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_168 [32];
  undefined1 local_128;
  undefined1 local_127 [7];
  FRHICommandListImmediate *local_120;
  undefined4 local_118;
  undefined4 local_114;
  FLLMScope local_110;
  FLLMScope local_10c;
  FScriptContainerElement *local_108;
  longlong local_100;
  FMemScope local_f8;
  FMemScope local_f0;
  FRHITransitionInfo local_e8;
  FRHITransitionInfo *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  code *local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_120 = param_1;
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x6f0,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->bStream == false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("bStream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x6f1,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar16 = (this->StagingTexturePool).AllocatorInstance.Data;
  iVar1 = (this->StagingTexturePool).ArrayNum;
  local_108 = pFVar16 + (longlong)iVar1 * 8;
  pFVar15 = local_108;
  while( true ) {
    if ((this->StagingTexturePool).ArrayNum != iVar1) {
      local_128 = 0;
      `TCheckedPointerIterator<TUniquePtr<FRDGResourceDumpContext::FStagingTexturePoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingTexturePoolEntry>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_128);
    }
    if (pFVar16 == pFVar15) break;
    piVar2 = *(int **)pFVar16;
    if (*piVar2 == 2) {
      local_100 = 0;
      local_118 = 0;
      local_114 = 0;
      FLLMScope::FLLMScope(&local_110,Textures,false,None,Default,true);
      FMemScope::FMemScope(&local_f8,Textures,true);
      param_1 = local_120;
      (**(code **)(GDynamicRHI->_padding_ + 0x428))(GDynamicRHI,local_120);
      FMemScope::~FMemScope(&local_f8);
      FLLMScope::~FLLMScope(&local_110);
      pFVar15 = local_108;
      if (local_100 != 0) {
        if ((*(longlong *)(*(longlong *)pFVar16 + 0x28) != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Entry->WriteToDiskComplete == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                               ,0x704,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = FGenericPlatformProcess::GetSynchEventFromPool(true);
        lVar3 = local_100;
        uVar8 = local_114;
        uVar7 = local_118;
        *(FEvent **)(*(longlong *)pFVar16 + 0x28) = pFVar10;
        **(undefined4 **)pFVar16 = 3;
        lVar13 = *(longlong *)pFVar16;
        local_98 = (code *)0x0;
        local_70 = (longlong *)0x0;
        local_70 = FMemory::Malloc(0x28,8);
        *local_70 = (longlong)
                    &
                    ___7__TFunction_OwnedObject_V<lambda_1>__BM___LandCompletedResources_FRDGResourceDumpContext__QEAAXAEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
        ;
        local_70[1] = (longlong)this;
        local_70[2] = lVar13;
        local_70[3] = lVar3;
        *(undefined4 *)(local_70 + 4) = uVar7;
        *(undefined4 *)((longlong)local_70 + 0x24) = uVar8;
        if (local_70 + 1 != (longlong *)0x0) {
          local_98 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FRDGResourceDumpContext::LandCompletedResources'::__l28::<lambda_1>,void>
                     ::Call;
        }
        if (this->bStream == false) {
          UE::Core::Private::Function::CheckCallable(local_98);
          pcVar5 = local_98;
          plVar14 = local_88;
          if (local_70 != (longlong *)0x0) {
            plVar14 = local_70;
          }
          pvVar12 = (void *)(**(code **)(*plVar14 + 8))();
          if (pcVar5 == UE::Core::Private::Function::
                        TFunctionRefCaller<`FRDGResourceDumpContext::LandCompletedResources'::__l28::<lambda_1>,void>
                        ::Call) {
            `FRDGResourceDumpContext::LandCompletedResources'::__l28::<lambda_1>::operator()
                      (pvVar12);
          }
          else {
            (*pcVar5)();
          }
        }
        else {
          pFVar11 = ::operator_new(0x70);
          if (pFVar11 == (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *)0x0) {
            pFVar11 = (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *)0x0;
          }
          else {
            pFVar11->_padding_ = 0;
            pFVar11->_padding_ =
                 (longlong)&___7__FAutoDeleteAsyncTask_VFDumpGPUTask_FRDGResourceDumpContext____6B_;
            *(code **)&(pFVar11->Task).TaskCallback = local_98;
            *(undefined8 *)&(pFVar11->Task).TaskCallback.field_0x28 = 0;
            if (local_98 != (code *)0x0) {
              plVar14 = local_88;
              if (local_70 != (longlong *)0x0) {
                plVar14 = local_70;
              }
              (**(code **)*plVar14)();
            }
          }
          pFVar6 = GThreadPool;
          UE::FInheritedContextBase::CaptureInheritedContext
                    ((FInheritedContextBase *)&pFVar11->_padding_);
          if (pFVar6 == (FQueuedThreadPool *)0x0) {
            FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask>::DoWork(pFVar11);
          }
          else {
            (**(code **)((longlong)*pFVar6 + 0x18))(pFVar6,pFVar11);
          }
        }
        pFVar15 = local_108;
        param_1 = local_120;
        if (local_98 != (code *)0x0) {
          plVar14 = local_88;
          if (local_70 != (longlong *)0x0) {
            plVar14 = local_70;
          }
          (**(code **)(*plVar14 + 0x10))();
          pFVar15 = local_108;
          param_1 = local_120;
        }
      }
LAB_145d457e2:
      pFVar16 = pFVar16 + 8;
    }
    else {
      if (*piVar2 != 4) goto LAB_145d457e2;
      if ((*(longlong *)(piVar2 + 10) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Entry->WriteToDiskComplete",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                             ,0x6e4,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(**(longlong **)(piVar2 + 10) + 0x20))(*(longlong **)(piVar2 + 10),0xffffffff);
      FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)(piVar2 + 10));
      piVar2[10] = 0;
      piVar2[0xb] = 0;
      if ((*piVar2 != 4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Entry->Status == FStagingResourceStatus::WritingToDiskComplete",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                             ,0x6ea,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *piVar2 = 0;
      FLLMScope::FLLMScope(&local_10c,Textures,false,None,Default,true);
      FMemScope::FMemScope(&local_f0,Textures,true);
      (**(code **)(GDynamicRHI->_padding_ + 0x430))(GDynamicRHI,param_1);
      FMemScope::~FMemScope(&local_f0);
      FLLMScope::~FLLMScope(&local_10c);
      uStack_b0 = 1;
      local_e8.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)pFVar16 + 200);
      local_b8 = &local_e8;
      local_a8._12_4_ = uStack_ac;
      local_a8.ArrayNum = 1;
      local_e8._padding_._0_4_ = 0xffffffff;
      local_e8._padding_._4_2_ = 0xffff;
      local_e8.Type = Texture;
      local_e8.AccessBefore = CPURead;
      local_e8.AccessAfter = CopyDest;
      local_e8.Flags = None;
      local_e8.CommitInfo.bIsSet = false;
      local_a8.DataPtr = local_b8;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
      pFVar16 = pFVar16 + 8;
      pFVar15 = local_108;
    }
  }
  pFVar15 = (this->StagingBufferPool).AllocatorInstance.Data;
  iVar1 = (this->StagingBufferPool).ArrayNum;
  pFVar16 = pFVar15 + (longlong)iVar1 * 8;
  do {
    while( true ) {
      if ((this->StagingBufferPool).ArrayNum != iVar1) {
        local_127[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<FRDGResourceDumpContext::FStagingBufferPoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingBufferPoolEntry>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_127);
      }
      if (pFVar15 == pFVar16) {
        return;
      }
      piVar2 = *(int **)pFVar15;
      if (*piVar2 != 2) break;
      lVar13 = (**(code **)(GDynamicRHI->_padding_ + 0xf8))
                         (GDynamicRHI,param_1,*(undefined8 *)(piVar2 + 0xe),
                          *(undefined8 *)(piVar2 + 8));
      param_1 = local_120;
      if (lVar13 != 0) {
        if ((*(longlong *)(*(longlong *)pFVar15 + 0x28) != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Entry->WriteToDiskComplete == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                               ,0x732,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = FGenericPlatformProcess::GetSynchEventFromPool(true);
        local_68 = (code *)0x0;
        local_40 = (longlong *)0x0;
        *(FEvent **)(*(longlong *)pFVar15 + 0x28) = pFVar10;
        **(undefined4 **)pFVar15 = 3;
        lVar3 = *(longlong *)pFVar15;
        local_40 = FMemory::Malloc(0x20,8);
        *local_40 = (longlong)
                    &
                    ___7__TFunction_OwnedObject_V<lambda_2>__DD___LandCompletedResources_FRDGResourceDumpContext__QEAAXAEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
        ;
        local_40[1] = (longlong)this;
        local_40[2] = lVar3;
        local_40[3] = lVar13;
        if (local_40 + 1 != (longlong *)0x0) {
          local_68 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FRDGResourceDumpContext::LandCompletedResources'::__l51::<lambda_2>,void>
                     ::Call;
        }
        if (this->bStream == false) {
          UE::Core::Private::Function::CheckCallable(local_68);
          pcVar5 = local_68;
          plVar14 = local_58;
          if (local_40 != (longlong *)0x0) {
            plVar14 = local_40;
          }
          pvVar12 = (void *)(**(code **)(*plVar14 + 8))();
          if (pcVar5 == UE::Core::Private::Function::
                        TFunctionRefCaller<`FRDGResourceDumpContext::LandCompletedResources'::__l51::<lambda_2>,void>
                        ::Call) {
            `FRDGResourceDumpContext::LandCompletedResources'::__l51::<lambda_2>::operator()
                      (pvVar12);
          }
          else {
            (*pcVar5)();
          }
        }
        else {
          pFVar11 = ::operator_new(0x70);
          if (pFVar11 == (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *)0x0) {
            pFVar11 = (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *)0x0;
          }
          else {
            pFVar11->_padding_ = 0;
            pFVar11->_padding_ =
                 (longlong)&___7__FAutoDeleteAsyncTask_VFDumpGPUTask_FRDGResourceDumpContext____6B_;
            *(code **)&(pFVar11->Task).TaskCallback = local_68;
            *(undefined8 *)&(pFVar11->Task).TaskCallback.field_0x28 = 0;
            if (local_68 != (code *)0x0) {
              plVar14 = local_58;
              if (local_40 != (longlong *)0x0) {
                plVar14 = local_40;
              }
              (**(code **)*plVar14)();
            }
          }
          pFVar6 = GThreadPool;
          UE::FInheritedContextBase::CaptureInheritedContext
                    ((FInheritedContextBase *)&pFVar11->_padding_);
          if (pFVar6 == (FQueuedThreadPool *)0x0) {
            FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask>::DoWork(pFVar11);
          }
          else {
            (**(code **)((longlong)*pFVar6 + 0x18))(pFVar6,pFVar11);
          }
        }
        param_1 = local_120;
        if (local_68 != (code *)0x0) {
          plVar14 = local_58;
          if (local_40 != (longlong *)0x0) {
            plVar14 = local_40;
          }
          (**(code **)(*plVar14 + 0x10))();
          param_1 = local_120;
        }
      }
LAB_145d45b27:
      pFVar15 = pFVar15 + 8;
    }
    if (*piVar2 != 4) goto LAB_145d45b27;
    if ((*(longlong *)(piVar2 + 10) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry->WriteToDiskComplete",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                           ,0x6e4,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(**(longlong **)(piVar2 + 10) + 0x20))(*(longlong **)(piVar2 + 10),0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)(piVar2 + 10));
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    if ((*piVar2 != 4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry->Status == FStagingResourceStatus::WritingToDiskComplete",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                           ,0x6ea,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *piVar2 = 0;
    (**(code **)(GDynamicRHI->_padding_ + 0x100))(GDynamicRHI,param_1);
    puVar4 = *(undefined4 **)pFVar15;
    pFVar15 = pFVar15 + 8;
    *puVar4 = 0;
  } while( true );
}

// OnCrash @ 145d46980

void __thiscall FRDGResourceDumpContext::OnCrash(FRDGResourceDumpContext *this)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FOutputDeviceRedirector *pFVar2;
  uint uVar3;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  pFVar2 = GetGlobalLogSingleton();
  if (pFVar2 != (FOutputDeviceRedirector *)0x0) {
    pFVar2 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(pFVar2);
  }
  local_28.Size = 5;
  local_28.DataPtr = L"crash";
  DumpStatusToFile(this,&local_28);
  iVar1 = (this->DumpingDirectoryPath).Data.ArrayNum;
  local_28.DataPtr = (wchar_t *)0x0;
  local_28.Size = iVar1;
  if (iVar1 == 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,0,(ForAnyElementType *)&local_28,0,(int *)&local_28.field_0xc);
  }
  else {
    _Src = (this->DumpingDirectoryPath).Data.AllocatorInstance.Data;
    uVar3 = iVar1 + 6;
    if ((int)uVar3 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar3,0,(ForAnyElementType *)&local_28,iVar1,(int *)&local_28.field_0xc);
    memcpy(local_28.DataPtr,_Src,(longlong)iVar1 * 2);
  }
  ::FString::PathAppend((FString *)&local_28,L"Base/",5);
  FGenericCrashContext::DumpLog(&local_18,(FString *)&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  return;
}

// PostProcessTexture @ 145d47240

void __thiscall
FRDGResourceDumpContext::PostProcessTexture
          (FRDGResourceDumpContext *this,FTextureSubresourceDumpDesc *param_1,void *param_2,
          int param_3,int param_4,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_5)

{
  long64 *plVar1;
  TAtomic<double> TVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  ulong64 uVar6;
  long64 lVar7;
  longlong lVar8;
  uint uVar9;
  void *_Src;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  size_t sVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  double dVar17;
  LARGE_INTEGER local_res10;
  void *local_res18;
  LARGE_INTEGER local_50;
  LARGE_INTEGER local_48;
  
  local_res18 = param_2;
  QueryPerformanceCounter(&local_res10);
  lVar5 = param_5->ArrayNum;
  plVar1 = &param_5->ArrayNum;
  uVar6 = param_1->ByteSize;
  local_48 = local_res10;
  if (lVar5 < (longlong)uVar6) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,uVar6 - lVar5,&param_5->AllocatorInstance,plVar1,&param_5->ArrayMax);
  }
  else {
    if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar6);
    }
    if ((longlong)uVar6 < lVar5) {
      lVar5 = lVar5 - uVar6;
      if (((((uint)(uVar6 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar5 >> 0x3f) ^ 1)) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (lVar5 != 0) {
        pFVar14 = (param_5->AllocatorInstance).Data + uVar6;
        sVar13 = (*plVar1 - uVar6) - lVar5;
        if (sVar13 != 0) {
          memmove(pFVar14,pFVar14 + lVar5,sVar13);
        }
        *plVar1 = *plVar1 - lVar5;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,&param_5->AllocatorInstance,*plVar1,&param_5->ArrayMax);
      }
    }
  }
  uVar12 = 0;
  lVar5 = (longlong)GPixelFormats[param_1->PreprocessedPixelFormat].BlockBytes;
  uVar10 = uVar12;
  if (0 < (param_1->SubResourceExtent).field0_0x0._s_0.Y) {
    do {
      iVar11 = (int)uVar10;
      _Src = (void *)((longlong)param_3 * (longlong)iVar11 * lVar5 + (longlong)local_res18);
      if ((*plVar1 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar8 = (longlong)(param_1->SubResourceExtent).field0_0x0._s_0.X;
      memmove((param_5->AllocatorInstance).Data + lVar8 * iVar11 * lVar5,_Src,lVar8 * lVar5);
      uVar10 = (ulonglong)(iVar11 + 1U);
    } while ((int)(iVar11 + 1U) < (param_1->SubResourceExtent).field0_0x0._s_0.Y);
  }
  if (param_1->PreprocessedPixelFormat != param_1->PostprocessedPixelFormat) {
    lVar5 = *plVar1;
    pFVar14 = (param_5->AllocatorInstance).Data;
    iVar11 = GPixelFormats[param_1->PostprocessedPixelFormat].BlockBytes;
    uVar10 = uVar12;
    pFVar15 = pFVar14;
    pFVar16 = pFVar14;
    if (0 < (longlong)(lVar5 + (ulonglong)((uint)(lVar5 >> 0x3f) & 3)) >> 2) {
      do {
        if (iVar11 == 2) {
          *(short *)pFVar15 = (short)*(undefined4 *)pFVar16;
        }
        else {
          *pFVar14 = SUB41(*(undefined4 *)pFVar16,0);
        }
        lVar5 = *plVar1;
        uVar9 = (int)uVar10 + 1;
        pFVar14 = pFVar14 + 1;
        uVar10 = (ulonglong)uVar9;
        pFVar15 = pFVar15 + 2;
        pFVar16 = pFVar16 + 4;
      } while ((longlong)(int)uVar9 <
               (longlong)(lVar5 + (ulonglong)((uint)(lVar5 >> 0x3f) & 3)) >> 2);
    }
    uVar6 = lVar5 / (longlong)(int)(4 / (longlong)iVar11);
    if (lVar5 < (longlong)uVar6) {
      lVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                        (1,1,uVar6 - lVar5,&param_5->AllocatorInstance,plVar1,&param_5->ArrayMax);
      memset((param_5->AllocatorInstance).Data + lVar7,0,uVar6 - lVar5);
    }
    else {
      if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar6);
      }
      if ((longlong)uVar6 < lVar5) {
        lVar5 = lVar5 - uVar6;
        if (((((uint)(uVar6 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar5 >> 0x3f) ^ 1)) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (lVar5 != 0) {
          pFVar14 = (param_5->AllocatorInstance).Data + uVar6;
          sVar13 = (*plVar1 - lVar5) - uVar6;
          if (sVar13 != 0) {
            memmove(pFVar14,pFVar14 + lVar5,sVar13);
          }
          *plVar1 = *plVar1 - lVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,&param_5->AllocatorInstance,*plVar1,&param_5->ArrayMax);
        }
      }
    }
  }
  QueryPerformanceCounter(&local_50);
  if (local_50.QuadPart - (longlong)local_48 != 0) {
    uVar12 = local_50.QuadPart - (longlong)local_48;
  }
  dVar17 = (double)uVar12 * FGenericPlatformTime::SecondsPerCycle64;
  do {
    TVar2 = this->TimingBucket[3];
    LOCK();
    bVar4 = TVar2 == this->TimingBucket[3];
    if (bVar4) {
      this->TimingBucket[3] = (TAtomic<double>)(dVar17 + (double)TVar2);
    }
    UNLOCK();
  } while (!bVar4);
  return;
}

// RegisterResourceAsDumped @ 145d47790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGResourceDumpContext::RegisterResourceAsDumped
          (FRDGResourceDumpContext *this,FRDGResource *param_1,FRDGPass *param_2)

{
  TMap<FRDGResource_const_*,FRDGPass_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGResource_const_*,FRDGPass_const_*,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  TPairInitializer<FRDGResource_const_*_const_&,FRDGPass_const_*_const_&> local_res8;
  FRDGPass *local_res18;
  FRDGPass ***local_18;
  FRDGPass **local_10;
  
  this_00 = &this->LastResourceVersion;
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_res8.Value = (FRDGPass **)param_1;
  local_res18 = param_2;
  if (*(int *)&(this->LastResourceVersion).field_0x8 !=
      *(int *)&(this->LastResourceVersion).field_0x34) {
    puVar5 = *(undefined1 **)&(this->LastResourceVersion).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->LastResourceVersion).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->LastResourceVersion).field_0x48 - 1U &
                              (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FRDGResource **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) == param_1
           ) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!LastResourceVersion.Contains(Resource)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                             ,0x294,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
        iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  uVar4 = *(int *)&(this->LastResourceVersion).field_0x8 -
          *(int *)&(this->LastResourceVersion).field_0x34;
  uVar6 = uVar4 & 0x800003ff;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffc00) + 1;
  }
  if (uVar6 == 0) {
    TSet<TTuple<FRDGResource_const_*,FRDGPass_const_*>,TDefaultMapHashableKeyFuncs<FRDGResource_const_*,FRDGPass_const_*,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FRDGResource_const_*,FRDGPass_const_*>,TDefaultMapHashableKeyFuncs<FRDGResource_const_*,FRDGPass_const_*,0>,FDefaultSetAllocator>
               *)this_00,uVar4 + 0x400);
  }
  local_18 = &local_res8.Value;
  local_10 = &local_res18;
  TSet<TTuple<FRDGResource_const_*,FRDGPass_const_*>,TDefaultMapHashableKeyFuncs<FRDGResource_const_*,FRDGPass_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRDGResource_const_*_const_&,FRDGPass_const_*_const_&>_>
            ((TSet<TTuple<FRDGResource_const_*,FRDGPass_const_*>,TDefaultMapHashableKeyFuncs<FRDGResource_const_*,FRDGPass_const_*,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_18);
  return;
}

// ReleaseRHIResources @ 145d48350

void __thiscall
FRDGResourceDumpContext::ReleaseRHIResources
          (FRDGResourceDumpContext *this,FRHICommandListImmediate *param_1)

{
  TAtomic<double> TVar1;
  ulonglong uVar2;
  bool bVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18 [2];
  
  QueryPerformanceCounter(local_res18);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  FRHICommandListImmediate::FlushResources(param_1);
  FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThreadFlushResources,None);
  QueryPerformanceCounter(&local_res8);
  uVar2 = 0;
  if (local_res8.QuadPart - (longlong)local_res18[0] != 0) {
    uVar2 = local_res8.QuadPart - (longlong)local_res18[0];
  }
  dVar4 = (double)uVar2 * FGenericPlatformTime::SecondsPerCycle64;
  do {
    TVar1 = this->TimingBucket[1];
    LOCK();
    bVar3 = TVar1 == this->TimingBucket[1];
    if (bVar3) {
      this->TimingBucket[1] = (TAtomic<double>)(dVar4 + (double)TVar1);
    }
    UNLOCK();
  } while (!bVar3);
  return;
}

// ReuseStagingBuffer @ 145d48bb0

FStagingBufferPoolEntry * __thiscall
FRDGResourceDumpContext::ReuseStagingBuffer
          (FRDGResourceDumpContext *this,FRHICommandListImmediate *param_1,int param_2)

{
  TRefCountPtr<FRHIStagingBuffer> *pTVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint uVar4;
  int *piVar5;
  FRHIStagingBuffer *pFVar6;
  FRHIResource *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FStagingBufferPoolEntry *pFVar11;
  FStagingBufferPoolEntry *pFVar12;
  FScriptContainerElement *pFVar13;
  TArray<TUniquePtr<FRDGResourceDumpContext::FStagingBufferPoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingBufferPoolEntry>_>,TSizedDefaultAllocator<32>_>
  *pTVar14;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  TRefCountPtr<FRHIStagingBuffer> local_38;
  FRHIResource *local_30;
  FStagingBufferPoolEntry *local_28 [2];
  
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x45e,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar11 = (FStagingBufferPoolEntry *)(*pcVar8)();
    return pFVar11;
  }
  if ((this->bStream == false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("bStream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x45f,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar11 = (FStagingBufferPoolEntry *)(*pcVar8)();
    return pFVar11;
  }
  pTVar14 = &this->StagingBufferPool;
  pFVar13 = (pTVar14->AllocatorInstance).Data;
  iVar10 = (this->StagingBufferPool).ArrayNum;
  pFVar7 = pFVar13 + (longlong)iVar10 * 8;
  while( true ) {
    if ((this->StagingBufferPool).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FRDGResourceDumpContext::FStagingBufferPoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingBufferPoolEntry>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar7) break;
    piVar5 = *(int **)pFVar13;
    if ((piVar5[0xc] == param_2) && (*piVar5 == 0)) {
      *piVar5 = 2;
      (**(code **)(**(longlong **)(*(longlong *)pFVar13 + 0x20) + 0x10))();
      return *(FStagingBufferPoolEntry **)pFVar13;
    }
    pFVar13 = pFVar13 + 8;
  }
  pFVar12 = ::operator_new(0x40);
  pFVar11 = (FStagingBufferPoolEntry *)0x0;
  if (pFVar12 != (FStagingBufferPoolEntry *)0x0) {
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    *(undefined4 *)&pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    (pFVar12->StagingBuffer).Reference = (FRHIStagingBuffer *)0x0;
    pFVar11 = pFVar12;
  }
  *(undefined4 *)&pFVar11->_padding_ = 2;
  pFVar11->ByteSize = param_2;
  (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_38);
  pTVar1 = &pFVar11->StagingBuffer;
  if (pTVar1 == &local_38) {
LAB_145d48cfa:
    if (local_38.Reference != (FRHIStagingBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_38.Reference);
    }
  }
  else {
    pFVar6 = pTVar1->Reference;
    pTVar1->Reference = local_38.Reference;
    local_38.Reference = (FRHIStagingBuffer *)0x0;
    if (pFVar6 != (FRHIStagingBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar6);
      goto LAB_145d48cfa;
    }
  }
  pFVar6 = pTVar1->Reference;
  uVar4 = (uint)pFVar6->_padding_;
  if (((uVar4 >> 0x1e & 1) != 0) || ((uVar4 & 0x3fffffff) == 0)) {
    local_res20[0] = 0;
    `FRHIResource::DisableLifetimeExtension'::__l2::<lambda_1>::operator()(local_res20);
  }
  pbVar2 = (byte *)((longlong)&pFVar6->_padding_ + 5);
  *pbVar2 = *pbVar2 & 0xfd;
  (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,&local_30,&GDumpGPUBufferFenceName);
  plVar3 = &pFVar11->_padding_;
  if ((FRHIResource **)plVar3 != &local_30) {
    this_00 = (FRHIResource *)*plVar3;
    *plVar3 = (longlong)local_30;
    local_30 = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_145d48d88;
    FRHIResource::Release(this_00);
  }
  if (local_30 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_30);
  }
LAB_145d48d88:
  (**(code **)(*(longlong *)*plVar3 + 0x10))();
  pFVar7 = (pTVar14->AllocatorInstance).Data;
  local_28[0] = pFVar11;
  if (((pFVar7 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 <
       pFVar7 + (longlong)(this->StagingBufferPool).ArrayMax * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar11 = (FStagingBufferPoolEntry *)(*pcVar8)();
    return pFVar11;
  }
  iVar10 = (this->StagingBufferPool).ArrayNum;
  piVar5 = &(this->StagingBufferPool).ArrayMax;
  if (iVar10 == *piVar5) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar14->AllocatorInstance,piVar5);
  }
  pFVar7 = (pTVar14->AllocatorInstance).Data;
  (this->StagingBufferPool).ArrayNum = iVar10 + 1;
  *(FStagingBufferPoolEntry **)(pFVar7 + (longlong)iVar10 * 8) = local_28[0];
  return pFVar11;
}

// ReuseStagingTexture @ 145d48e50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FStagingTexturePoolEntry * __thiscall
FRDGResourceDumpContext::ReuseStagingTexture
          (FRDGResourceDumpContext *this,FRHICommandListImmediate *param_1,
          FRHITextureCreateDesc *param_2,ERHIAccess param_3,TRefCountPtr<FRHITexture> *param_4,
          TRefCountPtr<FRHIUnorderedAccessView> *param_5)

{
  TArray<TUniquePtr<FRDGResourceDumpContext::FStagingTexturePoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingTexturePoolEntry>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar2;
  int *piVar3;
  FRHITexture *pFVar4;
  FRHITexture *pFVar5;
  FScriptContainerElement *pFVar6;
  FRHIUnorderedAccessView *pFVar7;
  FRHIUnorderedAccessView *this_00;
  FRHIResource *this_01;
  code *pcVar8;
  FRHICommandListBase *this_02;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FStagingTexturePoolEntry *pFVar14;
  FStagingTexturePoolEntry *pFVar15;
  FInitializer *pFVar16;
  int *_Buf1;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  FRHICommandListBase *local_res10;
  undefined1 local_res20 [8];
  FStagingTexturePoolEntry *local_a8;
  undefined1 local_a0 [24];
  longlong lStack_88;
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  FRHITransitionInfo local_68;
  
  local_res10 = (FRHICommandListBase *)param_1;
  bVar10 = IsInRenderingThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                          ,0x41c,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
    return pFVar14;
  }
  if ((this->bStream == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bStream",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                          ,0x41d,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
    return pFVar14;
  }
  if (((param_3 != CopyDest) && (param_3 != UAVCompute)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Access == ERHIAccess::CopyDest || Access == ERHIAccess::UAVCompute",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                          ,0x41e,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
    return pFVar14;
  }
  pFVar18 = (this->StagingTexturePool).AllocatorInstance.Data;
  iVar13 = (this->StagingTexturePool).ArrayNum;
  pFVar6 = pFVar18 + (longlong)iVar13 * 8;
  do {
    if ((this->StagingTexturePool).ArrayNum != iVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FRDGResourceDumpContext::FStagingTexturePoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingTexturePoolEntry>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar18 == pFVar6) {
      CreateStagingTexture(this,local_res10,param_2,param_4);
      pFVar15 = ::operator_new(0xd8);
      pFVar14 = (FStagingTexturePoolEntry *)0x0;
      if (pFVar15 != (FStagingTexturePoolEntry *)0x0) {
        *(undefined4 *)&pFVar15->_padding_ = 0;
        pFVar15->_padding_ = 0;
        pFVar15->_padding_ = 0;
        *(undefined4 *)&pFVar15->_padding_ = 0;
        pFVar15->_padding_ = 0;
        pFVar15->_padding_ = 0;
        (pFVar15->SubresourceDumpDesc).SubResourceExtent.field0_0x0 = (TIntPoint<int>_u_0)0x0;
        (pFVar15->SubresourceDumpDesc).ByteSize = 0;
        (pFVar15->SubresourceDumpDesc).bPreprocessForStaging = false;
        (pFVar15->SubresourceDumpDesc).DumpTextureType = MAX;
        (pFVar15->Desc)._padding_ = 1;
        (pFVar15->Desc)._padding_ = 0;
        (pFVar15->Desc)._padding_ = 0;
        *(undefined4 *)&(pFVar15->Desc)._padding_ = 0;
        uVar12 = GNumExplicitGPUsForRendering;
        *(undefined4 *)((longlong)&(pFVar15->Desc)._padding_ + 4) = 1;
        *(undefined4 *)&(pFVar15->Desc)._padding_ = 1;
        (pFVar15->Desc)._padding_ = 0;
        *(undefined4 *)&(pFVar15->Desc)._padding_ = 0;
        *(undefined4 *)((longlong)&(pFVar15->Desc)._padding_ + 4) = 0x10001;
        *(undefined4 *)&(pFVar15->Desc)._padding_ = 0x101;
        *(undefined2 *)((longlong)&(pFVar15->Desc)._padding_ + 4) = 0xff00;
        *(int *)((longlong)&(pFVar15->Desc)._padding_ + 4) = (1 << ((byte)uVar12 & 0x1f)) + -1;
        *(undefined4 *)&(pFVar15->Desc)._padding_ = 0;
        *(undefined4 *)((longlong)&(pFVar15->Desc)._padding_ + 4) = 1;
        (pFVar15->Desc).DebugName = (wchar_t *)0x0;
        (pFVar15->Desc).InitialState = None;
        (pFVar15->Desc).InitAction = Default;
        (pFVar15->Desc).BulkData = (FResourceBulkDataInterface *)0x0;
        (pFVar15->Desc).ClassName.ComparisonIndex = 0;
        (pFVar15->Desc).ClassName.Number = 0;
        (pFVar15->Desc).OwnerName.ComparisonIndex = 0;
        (pFVar15->Desc).OwnerName.Number = 0;
        (pFVar15->Texture).Reference = (FRHITexture *)0x0;
        (pFVar15->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
        pFVar14 = pFVar15;
      }
      *(uint *)&pFVar14->_padding_ = (param_3 == CopyDest) + 1;
      FRHITextureDesc::operator=((FRHITextureDesc *)&pFVar14->Desc,(FRHITextureDesc *)param_2);
      (pFVar14->Desc).DebugName = param_2->DebugName;
      (pFVar14->Desc).InitialState = param_2->InitialState;
      (pFVar14->Desc).InitAction = param_2->InitAction;
      (pFVar14->Desc).BulkData = param_2->BulkData;
      (pFVar14->Desc).ClassName = param_2->ClassName;
      (pFVar14->Desc).OwnerName = param_2->OwnerName;
      pFVar4 = param_4->Reference;
      pFVar5 = (pFVar14->Texture).Reference;
      if (pFVar5 != pFVar4) {
        (pFVar14->Texture).Reference = pFVar4;
        if (pFVar4 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar4);
        }
        if (pFVar5 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar5);
        }
      }
      pTVar1 = &this->StagingTexturePool;
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      local_a8 = pFVar14;
      if (((pFVar6 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar6 + (longlong)(this->StagingTexturePool).ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
        return pFVar14;
      }
      iVar13 = (this->StagingTexturePool).ArrayNum;
      piVar3 = &(this->StagingTexturePool).ArrayMax;
      if (iVar13 == *piVar3) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,piVar3);
      }
      this_02 = local_res10;
      (this->StagingTexturePool).ArrayNum = iVar13 + 1;
      local_78.ArrayNum = 1;
      local_68._padding_._0_4_ = 0xffffffff;
      local_68.Type = Texture;
      *(FStagingTexturePoolEntry **)((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 8) =
           local_a8;
      local_68._padding_._4_2_ = 0xffff;
      local_68.field1_0x8 = (FRHITransitionInfo_u_8)param_4->Reference;
      local_78.DataPtr = &local_68;
      local_a8 = (FStagingTexturePoolEntry *)0x0;
      local_68.AccessBefore = None;
      local_68.Flags = None;
      local_68.CommitInfo.bIsSet = false;
      local_68.AccessAfter = param_3;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)local_res10,&local_78,None);
      if (param_5 == (TRefCountPtr<FRHIUnorderedAccessView> *)0x0) {
        if ((param_3 != CopyDest) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Access == ERHIAccess::CopyDest",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                                ,0x452,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
          return pFVar14;
        }
        (**(code **)(GDynamicRHI->_padding_ + 0xb8))
                  (GDynamicRHI,local_a0 + 8,&GDumpGPUTextureFenceName);
        plVar17 = &pFVar14->_padding_;
        if (plVar17 != (longlong *)(local_a0 + 8)) {
          this_01 = (FRHIResource *)*plVar17;
          *plVar17 = local_a0._8_8_;
          local_a0._8_8_ = (FRHIResource *)0x0;
          if (this_01 == (FRHIResource *)0x0) goto LAB_145d496ca;
          FRHIResource::Release(this_01);
        }
        if ((FRHIResource *)local_a0._8_8_ != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)local_a0._8_8_);
        }
LAB_145d496ca:
        (**(code **)(*(longlong *)*plVar17 + 0x10))();
        return pFVar14;
      }
      if ((param_3 != UAVCompute) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Access == ERHIAccess::UAVCompute",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                              ,0x44c,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
        return pFVar14;
      }
      pFVar4 = param_4->Reference;
      lStack_88 = 0;
      local_a0._16_8_ = &DAT_100000003;
      pFVar16 = FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
                          ((FInitializer *)(local_a0 + 0x10),pFVar4);
      pFVar16->field_0x3 = 0;
      FRHICommandListBase::CreateUnorderedAccessView
                (this_02,(FRHITexture *)local_a0,(FInitializer *)pFVar4);
      uVar9 = local_a0._0_8_;
      if (((*(uint *)(local_a0._0_8_ + 8) >> 0x1e & 1) != 0) ||
         ((*(uint *)(local_a0._0_8_ + 8) & 0x3fffffff) == 0)) {
        `FRHIResource::DisableLifetimeExtension'::__l2::<lambda_1>::operator()(local_res8);
      }
      *(undefined1 *)(uVar9 + 0xd) = *(undefined1 *)(uVar9 + 0xd) & 0xfd;
      pTVar2 = &pFVar14->UAV;
      if (pTVar2 != (TRefCountPtr<FRHIUnorderedAccessView> *)local_a0) {
        pFVar7 = pTVar2->Reference;
        pTVar2->Reference = (FRHIUnorderedAccessView *)local_a0._0_8_;
        local_a0._0_8_ = (FRHIUnorderedAccessView *)0x0;
        if (pFVar7 == (FRHIUnorderedAccessView *)0x0) goto LAB_145d4961b;
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
      if ((FRHIUnorderedAccessView *)local_a0._0_8_ != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_a0._0_8_);
      }
LAB_145d4961b:
      pFVar7 = pTVar2->Reference;
      this_00 = param_5->Reference;
      if (this_00 == pFVar7) {
        return pFVar14;
      }
      param_5->Reference = pFVar7;
      if (pFVar7 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar7);
      }
      if (this_00 == (FRHIUnorderedAccessView *)0x0) {
        return pFVar14;
      }
      FRHIResource::Release((FRHIResource *)this_00);
      return pFVar14;
    }
    piVar3 = *(int **)pFVar18;
    if (((((((*(char *)((longlong)piVar3 + 0x82) == *(char *)((longlong)&param_2->_padding_ + 2)) &&
            (*(longlong *)(piVar3 + 0x14) == param_2->_padding_)) &&
           (*(char *)((longlong)piVar3 + 0x83) == *(char *)((longlong)&param_2->_padding_ + 3))) &&
          (((char)piVar3[0x21] == *(char *)((longlong)&param_2->_padding_ + 4) &&
           (piVar3[0x1d] == *(int *)((longlong)&param_2->_padding_ + 4))))) &&
         ((piVar3[0x1e] == (int)param_2->_padding_ &&
          (((short)piVar3[0x1f] == *(short *)((longlong)&param_2->_padding_ + 4) &&
           (*(short *)((longlong)piVar3 + 0x7e) == *(short *)((longlong)&param_2->_padding_ + 6)))))
         )) && ((char)piVar3[0x20] == (char)param_2->_padding_)) &&
       (((*(char *)((longlong)piVar3 + 0x81) == *(char *)((longlong)&param_2->_padding_ + 1) &&
         (*(char *)((longlong)piVar3 + 0x85) == *(char *)((longlong)&param_2->_padding_ + 5))) &&
        (iVar11 = piVar3[0x16], iVar11 == (int)param_2->_padding_)))) {
      if (iVar11 == 1) {
        if (((*(float *)((longlong)&param_2->_padding_ + 4) == (float)piVar3[0x17]) &&
            (*(float *)&param_2->_padding_ == (float)piVar3[0x18])) &&
           (*(float *)((longlong)&param_2->_padding_ + 4) == (float)piVar3[0x19])) {
          bVar10 = *(float *)&param_2->_padding_ == (float)piVar3[0x1a];
LAB_145d49049:
          if (bVar10) goto LAB_145d4904f;
        }
      }
      else if (iVar11 == 2) {
        if (*(float *)((longlong)&param_2->_padding_ + 4) == (float)piVar3[0x17]) {
          bVar10 = piVar3[0x18] == (int)param_2->_padding_;
          goto LAB_145d49049;
        }
      }
      else {
LAB_145d4904f:
        if ((piVar3[0x1c] == (int)param_2->_padding_) &&
           (piVar3[0x1b] == *(int *)((longlong)&param_2->_padding_ + 4))) {
          iVar11 = piVar3[0x26];
          if (iVar11 == (int)param_2->_padding_) {
            plVar17 = &param_2->_padding_;
            if ((longlong *)param_2->_padding_ != (longlong *)0x0) {
              plVar17 = (longlong *)param_2->_padding_;
            }
            _Buf1 = piVar3 + 0x22;
            if (*(int **)(piVar3 + 0x24) != (int *)0x0) {
              _Buf1 = *(int **)(piVar3 + 0x24);
            }
            if ((iVar11 == 0) || (iVar11 = memcmp(_Buf1,plVar17,(longlong)iVar11), iVar11 == 0)) {
              if (param_3 == CopyDest) {
                if (*piVar3 == 0) break;
              }
              else if ((*piVar3 == 1) && (*(longlong *)(piVar3 + 0x32) != 0)) {
                uVar12 = *(uint *)(*(longlong *)(piVar3 + 0x32) + 8) & 0x3fffffff;
                if (uVar12 == 0) {
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Result > 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                                      ,0x262,L"");
                  if (bVar10) {
                    pcVar8 = (code *)swi(3);
                    pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
                    return pFVar14;
                  }
                }
                else if (uVar12 == 1) {
                  pFVar4 = *(FRHITexture **)(*(longlong *)pFVar18 + 200);
                  pFVar5 = param_4->Reference;
                  if (pFVar5 != pFVar4) {
                    param_4->Reference = pFVar4;
                    if (pFVar4 != (FRHITexture *)0x0) {
                      FRHIResource::AddRef((FRHIResource *)pFVar4);
                    }
                    if (pFVar5 != (FRHITexture *)0x0) {
                      FRHIResource::Release((FRHIResource *)pFVar5);
                    }
                  }
                  uVar12 = TRefCountPtr<FRHITexture>::GetRefCount
                                     ((TRefCountPtr<FRHITexture> *)(*(longlong *)pFVar18 + 200));
                  if ((uVar12 != 2) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Entry->Texture.GetRefCount() == 2",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                                          ,0x438,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
                    return pFVar14;
                  }
                  if ((*(longlong *)(*(longlong *)pFVar18 + 0x20) != 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!Entry->WriteToResourceComplete",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                                          ,0x439,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
                    return pFVar14;
                  }
                  return *(FStagingTexturePoolEntry **)pFVar18;
                }
              }
            }
          }
        }
      }
    }
    pFVar18 = pFVar18 + 8;
  } while( true );
  if (*(longlong *)(piVar3 + 0x32) == 0) {
LAB_145d49165:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Entry->Texture.GetRefCount() == 1",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                        ,0x42b,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
      return pFVar14;
    }
  }
  else {
    uVar12 = *(uint *)(*(longlong *)(piVar3 + 0x32) + 8) & 0x3fffffff;
    if (uVar12 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                          ,0x262,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
        return pFVar14;
      }
      goto LAB_145d49165;
    }
    if (uVar12 != 1) goto LAB_145d49165;
  }
  pFVar4 = *(FRHITexture **)(*(longlong *)pFVar18 + 200);
  pFVar5 = param_4->Reference;
  if (pFVar5 != pFVar4) {
    param_4->Reference = pFVar4;
    if (pFVar4 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar4);
    }
    if (pFVar5 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if (*(longlong *)(*(longlong *)pFVar18 + 200) != 0) {
    uVar12 = *(uint *)(*(longlong *)(*(longlong *)pFVar18 + 200) + 8) & 0x3fffffff;
    if (uVar12 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                          ,0x262,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
        return pFVar14;
      }
    }
    else if (uVar12 == 2) goto LAB_145d49227;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Entry->Texture.GetRefCount() == 2",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                      ,0x42d,L"");
  if (bVar10) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FStagingTexturePoolEntry *)(*pcVar8)();
    return pFVar14;
  }
LAB_145d49227:
  **(undefined4 **)pFVar18 = 2;
  (**(code **)(**(longlong **)(*(longlong *)pFVar18 + 0x20) + 0x10))();
  return *(FStagingTexturePoolEntry **)pFVar18;
}

// Start @ 145d508b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRDGResourceDumpContext::Start(FRDGResourceDumpContext *this)

{
  code *pcVar1;
  ulong64 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  double dVar5;
  FQueuedThreadPool *pFVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  char cVar9;
  EBuildConfiguration EVar10;
  EBuildTargetType EVar11;
  int iVar12;
  FThreadHeartBeat *this_00;
  FGenericPlatformMemoryConstants *pFVar13;
  FPlatformMemoryStats *pFVar14;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar15;
  FString *pFVar16;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar17;
  FDumpParameters *this_02;
  IFileManager *pIVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  FJsonObject *pFVar23;
  FJsonObject *pFVar24;
  FUtf8String *pFVar25;
  FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *pFVar26;
  undefined8 *puVar27;
  void *this_03;
  FRenderCommandList *this_04;
  FCommandList *this_05;
  FRenderCommandTag *pFVar28;
  undefined ***pppuVar29;
  ForAnyElementType FVar30;
  ulonglong uVar31;
  undefined1 auStackY_718 [32];
  TSharedPtr<FJsonObject,1> local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  TRawPtrProxy<FJsonObject> local_6a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_6a0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_690;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_680;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  wchar_t *local_628;
  undefined4 uStack_620;
  uint uStack_61c;
  wchar_t *local_618;
  undefined4 uStack_610;
  uint uStack_60c;
  wchar_t *local_608;
  undefined4 uStack_600;
  uint uStack_5fc;
  wchar_t *local_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  FScriptContainerElement *local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  undefined1 local_3e8 [8];
  FString local_3e0;
  FString local_3d0;
  TStringView<wchar_t> local_3b8;
  FString local_3a8;
  TStringView<wchar_t> local_398;
  FString local_388;
  TStringView<wchar_t> local_378;
  FString local_368;
  TStringView<wchar_t> local_358;
  TStringView<wchar_t> local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FUtf8String local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FGPUDriverInfo local_258;
  undefined1 local_1e8 [72];
  FPlatformMemoryStats local_1a0;
  code *local_118;
  undefined **local_108;
  FRDGResourceDumpContext *local_100;
  IPlatformFile *local_f8;
  undefined ***local_f0;
  code *local_e8;
  undefined **local_d8;
  FRDGResourceDumpContext *local_d0;
  undefined ***local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  FRDGResourceDumpContext *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  FRDGResourceDumpContext *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_718;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x831,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((GNextRDGResourceDumpContext != this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GNextRDGResourceDumpContext == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x832,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = FThreadHeartBeat::Get();
  FThreadHeartBeat::SuspendHeartBeat(this_00,true);
  SuspendRenderThreadTimeout();
  if (3 < (byte)LogDumpGPU._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
  }
  pFVar13 = FWindowsPlatformMemory::GetConstants();
  uVar2 = pFVar13->TotalVirtual;
  (this->MemoryConstants).TotalPhysical = pFVar13->TotalPhysical;
  (this->MemoryConstants).TotalVirtual = uVar2;
  uVar2 = pFVar13->OsAllocationGranularity;
  (this->MemoryConstants).PageSize = pFVar13->PageSize;
  (this->MemoryConstants).OsAllocationGranularity = uVar2;
  uVar2 = pFVar13->BinnedAllocationGranularity;
  (this->MemoryConstants).BinnedPageSize = pFVar13->BinnedPageSize;
  (this->MemoryConstants).BinnedAllocationGranularity = uVar2;
  uVar2 = pFVar13->AddressLimit;
  (this->MemoryConstants).AddressStart = pFVar13->AddressStart;
  (this->MemoryConstants).AddressLimit = uVar2;
  uVar4 = *(undefined4 *)&pFVar13->field_0x44;
  (this->MemoryConstants).TotalPhysicalGB = pFVar13->TotalPhysicalGB;
  *(undefined4 *)&(this->MemoryConstants).field_0x44 = uVar4;
  pFVar14 = FWindowsPlatformMemory::GetStats(&local_1a0);
  lVar3 = pFVar14->_padding_;
  (this->MemoryStats)._padding_ = pFVar14->_padding_;
  (this->MemoryStats)._padding_ = lVar3;
  lVar3 = pFVar14->_padding_;
  (this->MemoryStats)._padding_ = pFVar14->_padding_;
  (this->MemoryStats)._padding_ = lVar3;
  lVar3 = pFVar14->_padding_;
  (this->MemoryStats)._padding_ = pFVar14->_padding_;
  (this->MemoryStats)._padding_ = lVar3;
  lVar3 = pFVar14->_padding_;
  (this->MemoryStats)._padding_ = pFVar14->_padding_;
  (this->MemoryStats)._padding_ = lVar3;
  uVar2 = pFVar14->_padding_;
  (this->MemoryStats)._padding_ = pFVar14->_padding_;
  (this->MemoryStats).AvailablePhysical = uVar2;
  uVar2 = pFVar14->_padding_;
  (this->MemoryStats).AvailableVirtual = pFVar14->_padding_;
  (this->MemoryStats).UsedPhysical = uVar2;
  uVar2 = pFVar14->_padding_;
  (this->MemoryStats).PeakUsedPhysical = pFVar14->_padding_;
  (this->MemoryStats).UsedVirtual = uVar2;
  (this->MemoryStats).PeakUsedVirtual = pFVar14->_padding_;
  this_01 = FPlatformFileManager::Get();
  pIVar15 = FPlatformFileManager::GetPlatformFile(this_01);
  if (this->bEnableDiskWrite != false) {
    if ((this->DumpingDirectoryPath).Data.ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(this->DumpingDirectoryPath).Data.AllocatorInstance.Data;
    }
    cVar9 = (**(code **)((longlong)*pIVar15 + 0x118))(pIVar15,pwVar19);
    if (cVar9 == '\0') {
      if ((this->DumpingDirectoryPath).Data.ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(this->DumpingDirectoryPath).Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar15 + 0x200))(pIVar15,pwVar19);
    }
    pcVar1 = *(code **)((longlong)*pIVar15 + 0x200);
    pFVar16 = ::operator/(&local_3e0,&this->DumpingDirectoryPath,L"Base/");
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    (*pcVar1)(pIVar15,pwVar19);
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
    pcVar1 = *(code **)((longlong)*pIVar15 + 0x200);
    pFVar16 = ::operator/(&local_3d0,&this->DumpingDirectoryPath,L"Resources/");
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    (*pcVar1)(pIVar15,pwVar19);
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
    pTVar17 = &::FString::FString(&local_3a8,L"Base/")->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_690,pTVar17,0xd - (uint)(pTVar17->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_690,L"Passes.json",0xb);
    local_628 = L"";
    uStack_620 = 0;
    local_3b8._8_8_ = (ulonglong)uStack_61c << 0x20;
    local_3b8.DataPtr = L"";
    DumpStringToFile(this,&local_3b8,(FString *)&local_690,0);
    if (local_690.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_690.AllocatorInstance.Data);
    }
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    pTVar17 = &::FString::FString(&local_388,L"Base/")->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_680,pTVar17,0x14 - (uint)(pTVar17->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_680,L"ResourceDescs.json",0x12);
    local_618 = L"";
    uStack_610 = 0;
    local_398._8_8_ = (ulonglong)uStack_60c << 0x20;
    local_398.DataPtr = L"";
    DumpStringToFile(this,&local_398,(FString *)&local_680,0);
    if (local_680.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_680.AllocatorInstance.Data);
    }
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    pTVar17 = &::FString::FString(&local_368,L"Base/")->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_670,pTVar17,0x15 - (uint)(pTVar17->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_670,L"PassDrawCounts.json",0x13);
    local_608 = L"";
    uStack_600 = 0;
    local_378._8_8_ = (ulonglong)uStack_5fc << 0x20;
    local_378.DataPtr = L"";
    DumpStringToFile(this,&local_378,(FString *)&local_670,0);
    if (local_670.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_670.AllocatorInstance.Data);
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = (FJsonObject *)0x0;
  uStack_5f0 = 7;
  local_5f8 = L"dumping";
  local_358._8_8_ = CONCAT44(uStack_5ec,7);
  local_358.DataPtr = L"dumping";
  DumpStatusToFile(this,&local_358);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FRDGResourceDumpContext>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnShutdownAfterError,(FRDGResourceDumpContext *)local_3e8,
             (pmf_cf2365b0)this);
  if (this->bEnableDiskWrite != false) {
    this_02 = GetDumpParameters(this,(FDumpParameters *)local_1e8);
    ::operator/(&local_650,&this_02->LocalPath,L"Base/DumpService.json");
    IDumpGPUUploadServiceProvider::FDumpParameters::DumpServiceParametersFileContent
              (this_02,&local_660);
    pIVar18 = IFileManager::Get();
    local_5e8 = local_660.Data.AllocatorInstance.Data;
    FVar30.Data = (FScriptContainerElement *)L"";
    if (local_650.Data.ArrayNum != 0) {
      FVar30.Data = local_650.Data.AllocatorInstance.Data;
    }
    pFVar23 = (FJsonObject *)(ulonglong)(local_660.Data.ArrayNum - 1);
    if (local_660.Data.ArrayNum == 0) {
      pFVar23 = pFVar24;
    }
    uStack_5e0 = SUB84(pFVar23,0);
    local_348._8_8_ = CONCAT44(uStack_5dc,uStack_5e0);
    local_348.DataPtr = (wchar_t *)local_660.Data.AllocatorInstance.Data;
    FFileHelper::SaveStringToFile(&local_348,(wchar_t *)FVar30.Data,AutoDetect,pIVar18,0);
    if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_660.Data.AllocatorInstance.Data);
    }
    if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_650.Data.AllocatorInstance.Data);
    }
    if ((void *)local_1e8._56_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1e8._56_8_);
    }
    if ((FScriptContainerElement *)local_1e8._32_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1e8._32_8_);
    }
    if ((TAtomic<double>)local_1e8._16_8_ != (TAtomic<double>)0x0) {
      FMemory::Free((void *)local_1e8._16_8_);
    }
    if ((TAtomic<double>)local_1e8._0_8_ != (TAtomic<double>)0x0) {
      FMemory::Free((void *)local_1e8._0_8_);
    }
  }
  pTVar7 = GDumpGPUFixedTickRate.Ref;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((0.0 < pTVar7->ShadowedValue[0]) && (FApp::bUseFixedTimeStep == false)) {
    this->bOverrideFixedDeltaTime = true;
    this->PreviousFixedDeltaTime = (double)FApp::FixedDeltaTime;
    pTVar7 = GDumpGPUFixedTickRate.Ref;
    bVar8 = IsInParallelGameThread();
    if ((!bVar8) &&
       ((bVar8 = IsInGameThread(), !bVar8 &&
        (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar8)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FApp::bUseFixedTimeStep = true;
    FApp::FixedDeltaTime = (atomic<double>)(double)(__real_3f800000 / pTVar7->ShadowedValue[0]);
    if (3 < (byte)LogDumpGPU._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPU);
    }
  }
  pwVar19 = BuildSettings::GetBranchName();
  pwVar20 = BuildSettings::GetBuildDate();
  pwVar21 = BuildSettings::GetBuildVersion();
  EVar10 = FApp::GetBuildConfiguration();
  pwVar22 = ::LexToString(EVar10);
  ::FString::FString(&local_640,pwVar22);
  EVar11 = FApp::GetBuildTargetType();
  pwVar22 = ::LexToString(EVar11);
  ::FString::FString(&local_3f8,pwVar22);
  local_6d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6d8.Data.ArrayNum = 0;
  local_6d8.Data.ArrayMax = 0;
  local_6b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6b8.Data.ArrayNum = 0;
  local_6b8.Data.ArrayMax = 0;
  FWindowsPlatformMisc::GetOSVersions(&local_6d8,&local_6b8);
  if (1 < local_6b8.Data.ArrayNum) {
    ::FString::PrintfImpl(&local_6c8,L"%s %s");
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
    local_6d8.Data.AllocatorInstance.Data = local_6c8.Data.AllocatorInstance.Data;
    local_6d8.Data.ArrayNum = local_6c8.Data.ArrayNum;
    local_6d8.Data.ArrayMax = local_6c8.Data.ArrayMax;
    local_6c8.Data.ArrayNum = 0;
    local_6c8.Data.ArrayMax = 0;
    local_6c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  FWindowsPlatformMisc::GetGPUDriverInfo(&local_258,&GRHIGlobals.GpuInfo.AdapterName,true);
  pFVar23 = ::operator_new(0x50);
  if (pFVar23 != (FJsonObject *)0x0) {
    *(undefined8 *)&pFVar23->Values = 0;
    *(undefined8 *)&(pFVar23->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar23->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar23->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar23->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar23->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar23->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar23->Values).field_0x40 = 0;
    *(undefined4 *)&(pFVar23->Values).field_0x48 = 0;
    pFVar24 = pFVar23;
  }
  local_6a8.Object = pFVar24;
  TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_6e8,&local_6a8);
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_5d8,L"Project");
  pFVar16 = ::FString::FString(&local_338,GInternalProjectName);
  FJsonObject::SetStringField(local_6e8.Object,&local_5d8,pFVar16);
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_5c8,L"EngineMajorVersion");
  FJsonObject::SetNumberField(local_6e8.Object,&local_5c8,__real_4014000000000000);
  if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_5b8,L"EngineMinorVersion");
  FJsonObject::SetNumberField(local_6e8.Object,&local_5b8,__real_401c000000000000);
  if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_5a8,L"EnginePatchVersion");
  dVar5 = __real_3ff0000000000000;
  FJsonObject::SetNumberField(local_6e8.Object,&local_5a8,__real_3ff0000000000000);
  if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_598,L"BuildBranch");
  pwVar22 = L"";
  if (pwVar19 != (wchar_t *)0x0) {
    pwVar22 = pwVar19;
  }
  pFVar16 = ::FString::FString(&local_328,pwVar22);
  FJsonObject::SetStringField(local_6e8.Object,&local_598,pFVar16);
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_588,L"BuildDate");
  pwVar19 = L"";
  if (pwVar20 != (wchar_t *)0x0) {
    pwVar19 = pwVar20;
  }
  pFVar16 = ::FString::FString(&local_318,pwVar19);
  FJsonObject::SetStringField(local_6e8.Object,&local_588,pFVar16);
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_578,L"BuildVersion");
  pwVar19 = L"";
  if (pwVar21 != (wchar_t *)0x0) {
    pwVar19 = pwVar21;
  }
  pFVar16 = ::FString::FString(&local_308,pwVar19);
  FJsonObject::SetStringField(local_6e8.Object,&local_578,pFVar16);
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_568,L"BuildTarget");
  FJsonObject::SetStringField(local_6e8.Object,&local_568,&local_3f8);
  if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_558,L"BuildConfiguration");
  FJsonObject::SetStringField(local_6e8.Object,&local_558,&local_640);
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_548,L"Build64Bits");
  FJsonObject::SetNumberField(local_6e8.Object,&local_548,dVar5);
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_538,L"Platform");
  pFVar25 = FUtf8String::FUtf8String(&local_2f8,"Windows");
  FJsonObject::SetStringField(local_6e8.Object,&local_538,pFVar25);
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_538.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_528,L"OS");
  FJsonObject::SetStringField(local_6e8.Object,&local_528,&local_6d8);
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pwVar19 = FWindowsPlatformProcess::ComputerName();
  ::FString::FString(&local_518,L"DeviceName");
  pFVar16 = ::FString::FString(&local_2e8,pwVar19);
  FJsonObject::SetStringField(local_6e8.Object,&local_518,pFVar16);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar16 = FWindowsPlatformMisc::GetCPUVendor(&local_2d8);
  ::FString::FString(&local_508,L"CPUVendor");
  FJsonObject::SetStringField(local_6e8.Object,&local_508,pFVar16);
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar16 = FWindowsPlatformMisc::GetCPUBrand(&local_2c8);
  ::FString::FString(&local_4f8,L"CPUBrand");
  FJsonObject::SetStringField(local_6e8.Object,&local_4f8,pFVar16);
  if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar12 = FWindowsPlatformMisc::NumberOfCores();
  ::FString::FString(&local_4e8,L"CPUNumberOfCores");
  FJsonObject::SetNumberField(local_6e8.Object,&local_4e8,(double)iVar12);
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar12 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  ::FString::FString(&local_4d8,L"CPUNumberOfCoresIncludingHyperthreads");
  FJsonObject::SetNumberField(local_6e8.Object,&local_4d8,(double)iVar12);
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pwVar19 = RHIVendorIdToString();
  ::FString::FString(&local_4c8,L"GPUVendor");
  pFVar16 = ::FString::FString(&local_2b8,pwVar19);
  FJsonObject::SetStringField(local_6e8.Object,&local_4c8,pFVar16);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_4b8,L"GPUDeviceDescription");
  FJsonObject::SetStringField(local_6e8.Object,&local_4b8,&local_258.DeviceDescription);
  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_4a8,L"GPUDriverUserVersion");
  FJsonObject::SetStringField(local_6e8.Object,&local_4a8,&local_258.UserDriverVersion);
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar16 = FGPUDriverInfo::GetUnifiedDriverVersion(&local_258,&local_2a8);
  ::FString::FString(&local_498,L"GPUDriverInternalVersion");
  FJsonObject::SetStringField(local_6e8.Object,&local_498,pFVar16);
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_488,L"GPUDriverDate");
  FJsonObject::SetStringField(local_6e8.Object,&local_488,&local_258.DriverDate);
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar31 = (this->MemoryConstants).TotalPhysical;
  ::FString::FString(&local_478,L"MemoryTotalPhysical");
  FJsonObject::SetNumberField(local_6e8.Object,&local_478,(double)uVar31);
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar31 = (this->MemoryConstants).PageSize;
  ::FString::FString(&local_468,L"MemoryPageSize");
  FJsonObject::SetNumberField(local_6e8.Object,&local_468,(double)uVar31);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pwVar19 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
  ::FString::FString(&local_458,L"RHI");
  pFVar16 = ::FString::FString(&local_298,pwVar19);
  FJsonObject::SetStringField(local_6e8.Object,&local_458,pFVar16);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar16 = ::LexToString(&local_288,GMaxRHIFeatureLevel);
  ::FString::FString(&local_448,L"RHIMaxFeatureLevel");
  FJsonObject::SetStringField(local_6e8.Object,&local_448,pFVar16);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar16 = FDateTime::ToString(&this->Time,&local_278);
  ::FString::FString(&local_438,L"DumpTime");
  FJsonObject::SetStringField(local_6e8.Object,&local_438,pFVar16);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  FGenericPlatformOutputDevices::GetAbsoluteLogFilename(&local_408);
  FPaths::GetCleanFilename(&local_418,&local_408);
  if ((local_6e8.Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_428,L"LogFilename");
  FJsonObject::SetStringField(local_6e8.Object,&local_428,&local_418);
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  pTVar17 = &::FString::FString(&local_268,L"Base/")->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_6a0,pTVar17,0xc - (uint)(pTVar17->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_6a0,L"Infos.json",10);
  DumpJsonToFile(this,&local_6e8,(FString *)&local_6a0,0);
  if (local_6a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a0.AllocatorInstance.Data);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6e8.SharedReferenceCount.ReferenceController);
  if ((TAtomic<double>)local_258.RHIName.Data.AllocatorInstance.Data != (TAtomic<double>)0x0) {
    FMemory::Free(local_258.RHIName.Data.AllocatorInstance.Data);
  }
  if ((TAtomic<__int64>)local_258.DriverDate.Data.AllocatorInstance.Data != (TAtomic<__int64>)0x0) {
    FMemory::Free(local_258.DriverDate.Data.AllocatorInstance.Data);
  }
  if ((TAtomic<__int64>)local_258.UserDriverVersion.Data.AllocatorInstance.Data !=
      (TAtomic<__int64>)0x0) {
    FMemory::Free(local_258.UserDriverVersion.Data.AllocatorInstance.Data);
  }
  if ((TAtomic<__int64>)local_258.InternalDriverVersion.Data.AllocatorInstance.Data !=
      (TAtomic<__int64>)0x0) {
    FMemory::Free(local_258.InternalDriverVersion.Data.AllocatorInstance.Data);
  }
  if (local_258.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.ProviderName.Data.AllocatorInstance.Data);
  }
  if (local_258.DeviceDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.DeviceDescription.Data.AllocatorInstance.Data);
  }
  if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
  }
  if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
  }
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_640.Data.AllocatorInstance.Data);
  }
  if (this->bEnableDiskWrite != false) {
    local_c0 = (undefined ***)0x0;
    local_d8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::`73'::<lambda_1>,0,0>::
                _vftable_;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FRDGResourceDumpContext::Start'::__l73::<lambda_1>,void>::Call;
    local_d0 = this;
    if (this->bStream == false) {
      UE::Core::Private::Function::CheckCallable
                (UE::Core::Private::Function::
                 TFunctionRefCaller<`FRDGResourceDumpContext::Start'::__l73::<lambda_1>,void>::Call)
      ;
      pcVar1 = local_e8;
      pppuVar29 = &local_d8;
      if (local_c0 != (undefined ***)0x0) {
        pppuVar29 = local_c0;
      }
      puVar27 = (undefined8 *)(*(code *)(*pppuVar29)[1])();
      if (pcVar1 == UE::Core::Private::Function::
                    TFunctionRefCaller<`FRDGResourceDumpContext::Start'::__l73::<lambda_1>,void>::
                    Call) {
        DumpRenderingCVarsToCSV((FRDGResourceDumpContext *)*puVar27);
      }
      else {
        (*pcVar1)(puVar27);
      }
    }
    else {
      pFVar26 = ::operator_new(0x70);
      if (pFVar26 == (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *)0x0) {
        pFVar26 = (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *)0x0;
      }
      else {
        pFVar26->_padding_ = 0;
        pFVar26->_padding_ =
             (longlong)&___7__FAutoDeleteAsyncTask_VFDumpGPUTask_FRDGResourceDumpContext____6B_;
        *(code **)&(pFVar26->Task).TaskCallback = local_e8;
        *(undefined8 *)&(pFVar26->Task).TaskCallback.field_0x28 = 0;
        if (local_e8 != (code *)0x0) {
          pppuVar29 = &local_d8;
          if (local_c0 != (undefined ***)0x0) {
            pppuVar29 = local_c0;
          }
          (*(code *)**pppuVar29)();
        }
      }
      pFVar6 = GThreadPool;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&pFVar26->_padding_);
      if (pFVar6 == (FQueuedThreadPool *)0x0) {
        FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask>::DoWork(pFVar26);
      }
      else {
        (**(code **)((longlong)*pFVar6 + 0x18))(pFVar6,pFVar26,3);
      }
    }
    if (local_e8 != (code *)0x0) {
      pppuVar29 = &local_d8;
      if (local_c0 != (undefined ***)0x0) {
        pppuVar29 = local_c0;
      }
      (*(code *)(*pppuVar29)[2])();
    }
    if (this->bEnableDiskWrite != false) {
      local_f0 = (undefined ***)0x0;
      local_108 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::`76'::<lambda_2>,0,0>::
                   _vftable_;
      local_118 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRDGResourceDumpContext::Start'::__l76::<lambda_2>,void>::Call
      ;
      local_100 = this;
      local_f8 = pIVar15;
      if (this->bStream == false) {
        UE::Core::Private::Function::CheckCallable
                  (UE::Core::Private::Function::
                   TFunctionRefCaller<`FRDGResourceDumpContext::Start'::__l76::<lambda_2>,void>::
                   Call);
        pcVar1 = local_118;
        pppuVar29 = &local_108;
        if (local_f0 != (undefined ***)0x0) {
          pppuVar29 = local_f0;
        }
        this_03 = (void *)(*(code *)(*pppuVar29)[1])();
        if (pcVar1 == UE::Core::Private::Function::
                      TFunctionRefCaller<`FRDGResourceDumpContext::Start'::__l76::<lambda_2>,void>::
                      Call) {
          `FRDGResourceDumpContext::Start'::__l76::<lambda_2>::operator()(this_03);
        }
        else {
          (*pcVar1)();
        }
      }
      else {
        pFVar26 = ::operator_new(0x70);
        if (pFVar26 == (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *)0x0) {
          pFVar26 = (FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask> *)0x0;
        }
        else {
          pFVar26->_padding_ = 0;
          pFVar26->_padding_ =
               (longlong)&___7__FAutoDeleteAsyncTask_VFDumpGPUTask_FRDGResourceDumpContext____6B_;
          *(code **)&(pFVar26->Task).TaskCallback = local_118;
          *(undefined8 *)&(pFVar26->Task).TaskCallback.field_0x28 = 0;
          if (local_118 != (code *)0x0) {
            pppuVar29 = &local_108;
            if (local_f0 != (undefined ***)0x0) {
              pppuVar29 = local_f0;
            }
            (*(code *)**pppuVar29)();
          }
        }
        pFVar6 = GThreadPool;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&pFVar26->_padding_);
        if (pFVar6 == (FQueuedThreadPool *)0x0) {
          FAutoDeleteAsyncTask<FRDGResourceDumpContext::FDumpGPUTask>::DoWork(pFVar26);
        }
        else {
          (**(code **)((longlong)*pFVar6 + 0x18))(pFVar6,pFVar26,3);
        }
      }
      if (local_118 != (code *)0x0) {
        pppuVar29 = &local_108;
        if (local_f0 != (undefined ***)0x0) {
          pppuVar29 = local_f0;
        }
        (*(code *)(*pppuVar29)[2])();
      }
    }
  }
  GNextRDGResourceDumpContext = (FRDGResourceDumpContext *)0x0;
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::`2'::<lambda_3>,1,0>::
              _vftable_;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRDGResourceDumpContext::Start'::__l2::<lambda_3>,void,FRHICommandListImmediate_&>
                ::Call;
  local_90 = (undefined ***)0x0;
  GRDGResourceDumpContext_GameThread = this;
  pFStack_a0 = this;
  this_04 = FRenderCommandList::GetInstanceTLS();
  if (this_04 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRDGResourceDumpContext::Start_::__l2::TSTR_FStartGPUDump2229>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_05 = FRenderCommandList::GetRenderThread(this_04);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_78 = local_a8;
    pFStack_70 = pFStack_a0;
    local_68 = local_98;
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar28 = (FRenderCommandTag *)
              TRenderCommandTag<`FRDGResourceDumpContext::Start'::__l2::TSTR_FStartGPUDump2229>::Get
                        ();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_05,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar28);
    uVar31 = (ulonglong)local_58;
    if ((2 < uVar31) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar31] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar29 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar29 = local_60;
        }
        (*(code *)(*pppuVar29)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar31])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    pppuVar29 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar29 = local_90;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  return;
}

// ToJson @ 145d5faf0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

TSharedPtr<FJsonObject,1> * __thiscall
FRDGResourceDumpContext::ToJson
          (FRDGResourceDumpContext *this,TSharedPtr<FJsonObject,1> *__return_storage_ptr__,
          FMember *param_1)

{
  Type TVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  FJsonObject *pFVar6;
  TSharedPtr<FJsonObject,1> *pTVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  TRawPtrProxy<FJsonObject> local_res10;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  pFVar6 = ::operator_new(0x50);
  local_res10.Object = (FJsonObject *)0x0;
  if (pFVar6 != (FJsonObject *)0x0) {
    *(undefined8 *)&pFVar6->Values = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x40 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x48 = 0;
    local_res10.Object = pFVar6;
  }
  TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>
            (__return_storage_ptr__,&local_res10);
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonObject,1> *)(*pcVar4)();
    return pTVar7;
  }
  pFVar6 = __return_storage_ptr__->Object;
  pwVar9 = param_1->Name;
  ::FString::FString(&local_118,L"Name");
  pFVar8 = ::FString::FString(&local_78,pwVar9);
  FJsonObject::SetStringField(pFVar6,&local_118,pFVar8);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonObject,1> *)(*pcVar4)();
    return pTVar7;
  }
  pFVar6 = __return_storage_ptr__->Object;
  pwVar9 = param_1->ShaderType;
  ::FString::FString(&local_108,L"ShaderType");
  pFVar8 = ::FString::FString(&local_68,pwVar9);
  FJsonObject::SetStringField(pFVar6,&local_108,pFVar8);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonObject,1> *)(*pcVar4)();
    return pTVar7;
  }
  iVar2 = param_1->FileLine;
  pFVar6 = __return_storage_ptr__->Object;
  ::FString::FString(&local_f8,L"FileLine");
  FJsonObject::SetNumberField(pFVar6,&local_f8,(double)iVar2);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonObject,1> *)(*pcVar4)();
    return pTVar7;
  }
  uVar3 = param_1->Offset;
  pFVar6 = __return_storage_ptr__->Object;
  ::FString::FString(&local_e8,L"Offset");
  FJsonObject::SetNumberField(pFVar6,&local_e8,(double)uVar3);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonObject,1> *)(*pcVar4)();
    return pTVar7;
  }
  pFVar6 = __return_storage_ptr__->Object;
  pwVar9 = GetUniformBufferBaseTypeString(param_1->BaseType);
  ::FString::FString(&local_d8,L"BaseType");
  pFVar8 = ::FString::FString(&local_58,pwVar9);
  FJsonObject::SetStringField(pFVar6,&local_d8,pFVar8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonObject,1> *)(*pcVar4)();
    return pTVar7;
  }
  TVar1 = param_1->Precision;
  pFVar6 = __return_storage_ptr__->Object;
  ::FString::FString(&local_c8,L"Precision");
  FJsonObject::SetNumberField(pFVar6,&local_c8,(double)TVar1);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonObject,1> *)(*pcVar4)();
    return pTVar7;
  }
  uVar3 = param_1->NumRows;
  pFVar6 = __return_storage_ptr__->Object;
  ::FString::FString(&local_b8,L"NumRows");
  FJsonObject::SetNumberField(pFVar6,&local_b8,(double)uVar3);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonObject,1> *)(*pcVar4)();
    return pTVar7;
  }
  uVar3 = param_1->NumColumns;
  pFVar6 = __return_storage_ptr__->Object;
  ::FString::FString(&local_a8,L"NumColumns");
  FJsonObject::SetNumberField(pFVar6,&local_a8,(double)uVar3);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonObject,1> *)(*pcVar4)();
    return pTVar7;
  }
  uVar3 = param_1->NumElements;
  pFVar6 = __return_storage_ptr__->Object;
  ::FString::FString(&local_98,L"NumElements");
  FJsonObject::SetNumberField(pFVar6,&local_98,(double)uVar3);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonObject,1> *)(*pcVar4)();
    return pTVar7;
  }
  pFVar6 = __return_storage_ptr__->Object;
  if (param_1->Struct == (FShaderParametersMetadata *)0x0) {
    ::FString::FString(&local_128,L"00000000000000000000");
  }
  else {
    ::FString::PrintfImpl(&local_128,L"%04u%016llx");
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar10.Data = local_128.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_88,L"StructMetadata");
  pFVar8 = ::FString::FString(local_48,(wchar_t *)FVar10.Data);
  FJsonObject::SetStringField(pFVar6,&local_88,pFVar8);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToJson @ 145d60030

TSharedPtr<FJsonObject,1> * __thiscall
FRDGResourceDumpContext::ToJson
          (FRDGResourceDumpContext *this,TSharedPtr<FJsonObject,1> *__return_storage_ptr__,
          FString *param_1,wchar_t *param_2,FRDGBufferDesc *param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FJsonObject *pFVar5;
  TSharedPtr<FJsonObject,1> *pTVar6;
  FString *pFVar7;
  TJsonValueString<wchar_t> *this_00;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  TJsonValueString<wchar_t> *pTVar10;
  ulonglong uVar11;
  longlong lVar12;
  FJsonObject *pFVar13;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_138;
  TSharedPtr<FJsonValue,1> local_128;
  FString local_118;
  TRawPtrProxy<FJsonObject> local_108;
  FString local_100;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  pFVar13 = (FJsonObject *)0x0;
  local_108.Object = (FJsonObject *)((ulonglong)local_108.Object & 0xffffffff00000000);
  pFVar5 = ::operator_new(0x50);
  local_108.Object = pFVar13;
  if (pFVar5 != (FJsonObject *)0x0) {
    *(undefined8 *)&pFVar5->Values = 0;
    *(undefined8 *)&(pFVar5->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar5->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar5->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar5->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar5->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar5->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar5->Values).field_0x40 = 0;
    *(undefined4 *)&(pFVar5->Values).field_0x48 = 0;
    local_108.Object = pFVar5;
  }
  TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>
            (__return_storage_ptr__,&local_108);
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
    return pTVar6;
  }
  pFVar5 = __return_storage_ptr__->Object;
  ::FString::FString(&local_e8,L"Name");
  pFVar7 = ::FString::FString(&local_68,param_2);
  FJsonObject::SetStringField(pFVar5,&local_e8,pFVar7);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
    return pTVar6;
  }
  pFVar5 = __return_storage_ptr__->Object;
  ::FString::FString(&local_d8,L"UniqueResourceName");
  FJsonObject::SetStringField(pFVar5,&local_d8,param_1);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
    return pTVar6;
  }
  pFVar5 = __return_storage_ptr__->Object;
  ::FString::FString(&local_c8,L"ByteSize");
  FJsonObject::SetNumberField(pFVar5,&local_c8,(double)param_4);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
    return pTVar6;
  }
  pFVar5 = __return_storage_ptr__->Object;
  ::FString::FString(&local_b8,L"Desc");
  pFVar7 = ::FString::FString(&local_58,L"FRDGBufferDesc");
  FJsonObject::SetStringField(pFVar5,&local_b8,pFVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
    return pTVar6;
  }
  pFVar5 = __return_storage_ptr__->Object;
  uVar1 = param_3->BytesPerElement;
  ::FString::FString(&local_a8,L"BytesPerElement");
  FJsonObject::SetNumberField(pFVar5,&local_a8,(double)uVar1);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
    return pTVar6;
  }
  uVar1 = param_3->NumElements;
  pFVar5 = __return_storage_ptr__->Object;
  ::FString::FString(&local_98,L"NumElements");
  FJsonObject::SetNumberField(pFVar5,&local_98,(double)uVar1);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
    return pTVar6;
  }
  pFVar5 = __return_storage_ptr__->Object;
  if (param_3->Metadata == (FShaderParametersMetadata *)0x0) {
    ::FString::FString(&local_100,L"00000000000000000000");
  }
  else {
    ::FString::PrintfImpl(&local_100,L"%04u%016llx");
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_100.Data.ArrayNum != 0) {
    FVar9.Data = local_100.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_88,L"Metadata");
  pFVar7 = ::FString::FString(local_48,(wchar_t *)FVar9.Data);
  FJsonObject::SetStringField(pFVar5,&local_88,pFVar7);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar11 = 1;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  lVar12 = 0x20;
  do {
    if ((param_3->Usage & (EBufferUsageFlags)uVar11) != None) {
      this_00 = ::operator_new(0x20);
      pTVar10 = (TJsonValueString<wchar_t> *)0x0;
      if (this_00 != (TJsonValueString<wchar_t> *)0x0) {
        pwVar8 = GetBufferUsageFlagString((EBufferUsageFlags)uVar11);
        ::FString::FString(&local_118,pwVar8);
        pFVar13 = (FJsonObject *)&DAT_00000001;
        FJsonValue::FJsonValue((FJsonValue *)this_00);
        this_00->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (this_00->Value).Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Value).Data.ArrayNum = local_118.Data.ArrayNum;
        (this_00->Value).Data.ArrayMax = local_118.Data.ArrayMax;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        *(EJson *)&this_00->_padding_ = String;
        pTVar10 = this_00;
      }
      local_f0.Object = pTVar10;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_128,&local_f0);
      if (((local_138.AllocatorInstance.Data <= &local_128) &&
          (&local_128 <
           (TSharedPtr<FJsonValue,1> *)
           (local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
        return pTVar6;
      }
      iVar4 = local_138.ArrayNum;
      if (local_138.ArrayNum == local_138.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_138.AllocatorInstance,&local_138.ArrayMax);
      }
      local_138.ArrayNum = iVar4 + 1;
      *(FJsonValue **)&local_138.AllocatorInstance.Data[(longlong)iVar4 * 0x10].field_0x0 =
           local_128.Object;
      *(TReferenceControllerBase<1> **)
       (local_138.AllocatorInstance.Data + (longlong)iVar4 * 0x10 + 8) =
           local_128.SharedReferenceCount.ReferenceController;
      local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_128.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((pFVar13 != (FJsonObject *)0x0) &&
         (pFVar13 = (FJsonObject *)0x0,
         local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    uVar11 = uVar11 << 1 | (ulonglong)((longlong)uVar11 < 0);
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
        return pTVar6;
      }
      pFVar5 = __return_storage_ptr__->Object;
      ::FString::FString(&local_78,L"Usage");
      FJsonObject::SetArrayField(pFVar5,&local_78,&local_138);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_138.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// ToJson @ 145d60650

TSharedPtr<FJsonObject,1> * __thiscall
FRDGResourceDumpContext::ToJson
          (FRDGResourceDumpContext *this,TSharedPtr<FJsonObject,1> *__return_storage_ptr__,
          FString *param_1,wchar_t *param_2,FRDGTextureDesc *param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FJsonObject *pFVar9;
  FJsonObject *pFVar10;
  TSharedPtr<FJsonObject,1> *pTVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  TJsonValueString<wchar_t> *this_00;
  ForAnyElementType FVar14;
  TJsonValueString<wchar_t> *pTVar15;
  longlong lVar16;
  bool bVar17;
  ETextureCreateFlags EVar18;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_1a8;
  FString local_198;
  TSharedPtr<FJsonValue,1> local_188;
  FString local_178;
  FString local_168;
  TRawPtrProxy<FJsonObject> local_158;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  bVar17 = false;
  local_158.Object = (FJsonObject *)((ulonglong)local_158.Object & 0xffffffff00000000);
  ::FString::FString(&local_198,GPixelFormats[(byte)param_3->field_0x33].Name);
  EVar18 = RenderTargetable;
  bVar7 = ::FString::StartsWith(&local_198,L"PF_",3,IgnoreCase);
  if (!bVar7) {
    ::FString::PrintfImpl(&local_168,L"PF_%s");
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_198.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
    local_198.Data.ArrayNum = local_168.Data.ArrayNum;
    local_198.Data.ArrayMax = local_168.Data.ArrayMax;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pFVar10 = (FJsonObject *)0x0;
  bVar1 = param_3->field_0x31;
  iVar8 = GPixelFormats[(byte)param_3->field_0x33].BlockBytes;
  uVar2 = *(ushort *)&param_3->field_0x2c;
  uVar3 = *(ushort *)&param_3->field_0x2e;
  iVar4 = *(int *)&param_3->field_0x28;
  iVar5 = *(int *)&param_3->field_0x24;
  pFVar9 = ::operator_new(0x50);
  if (pFVar9 != (FJsonObject *)0x0) {
    *(undefined8 *)&pFVar9->Values = 0;
    *(undefined8 *)&(pFVar9->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar9->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar9->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar9->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar9->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar9->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar9->Values).field_0x40 = 0;
    *(undefined4 *)&(pFVar9->Values).field_0x48 = 0;
    pFVar10 = pFVar9;
  }
  local_158.Object = pFVar10;
  TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>
            (__return_storage_ptr__,&local_158);
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  pFVar10 = __return_storage_ptr__->Object;
  ::FString::FString(&local_148,L"Name");
  pFVar12 = ::FString::FString(&local_78,param_2);
  FJsonObject::SetStringField(pFVar10,&local_148,pFVar12);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  pFVar10 = __return_storage_ptr__->Object;
  ::FString::FString(&local_138,L"UniqueResourceName");
  FJsonObject::SetStringField(pFVar10,&local_138,param_1);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  pFVar10 = __return_storage_ptr__->Object;
  ::FString::FString(&local_128,L"ByteSize");
  FJsonObject::SetNumberField
            (pFVar10,&local_128,
             (double)(int)((uint)bVar1 * iVar8 * (uint)uVar2 * (uint)uVar3 * iVar4 * iVar5));
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  pFVar10 = __return_storage_ptr__->Object;
  ::FString::FString(&local_118,L"Desc");
  pFVar12 = ::FString::FString(&local_68,L"FRDGTextureDesc");
  FJsonObject::SetStringField(pFVar10,&local_118,pFVar12);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  pFVar10 = __return_storage_ptr__->Object;
  pwVar13 = GetTextureDimensionString(param_3->field_0x32);
  ::FString::FString(&local_108,L"Type");
  pFVar12 = ::FString::FString(&local_58,pwVar13);
  FJsonObject::SetStringField(pFVar10,&local_108,pFVar12);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  pFVar10 = __return_storage_ptr__->Object;
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar14.Data = local_198.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_f8,L"Format");
  pFVar12 = ::FString::FString(local_48,(wchar_t *)FVar14.Data);
  FJsonObject::SetStringField(pFVar10,&local_f8,pFVar12);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  iVar8 = *(int *)&param_3->field_0x24;
  pFVar10 = __return_storage_ptr__->Object;
  ::FString::FString(&local_e8,L"ExtentX");
  FJsonObject::SetNumberField(pFVar10,&local_e8,(double)iVar8);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  iVar8 = *(int *)&param_3->field_0x28;
  pFVar10 = __return_storage_ptr__->Object;
  ::FString::FString(&local_d8,L"ExtentY");
  FJsonObject::SetNumberField(pFVar10,&local_d8,(double)iVar8);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  uVar2 = *(ushort *)&param_3->field_0x2c;
  pFVar10 = __return_storage_ptr__->Object;
  ::FString::FString(&local_c8,L"Depth");
  FJsonObject::SetNumberField(pFVar10,&local_c8,(double)uVar2);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  uVar2 = *(ushort *)&param_3->field_0x2e;
  pFVar10 = __return_storage_ptr__->Object;
  ::FString::FString(&local_b8,L"ArraySize");
  FJsonObject::SetNumberField(pFVar10,&local_b8,(double)uVar2);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  bVar1 = param_3->field_0x30;
  pFVar10 = __return_storage_ptr__->Object;
  ::FString::FString(&local_a8,L"NumMips");
  FJsonObject::SetNumberField(pFVar10,&local_a8,(double)bVar1);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
    return pTVar11;
  }
  bVar1 = param_3->field_0x31;
  pFVar10 = __return_storage_ptr__->Object;
  ::FString::FString(&local_98,L"NumSamples");
  FJsonObject::SetNumberField(pFVar10,&local_98,(double)bVar1);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar16 = 0x40;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  do {
    if ((*(ETextureCreateFlags *)param_3 & EVar18) != None) {
      this_00 = ::operator_new(0x20);
      pTVar15 = (TJsonValueString<wchar_t> *)0x0;
      if (this_00 != (TJsonValueString<wchar_t> *)0x0) {
        pwVar13 = GetTextureCreateFlagString(EVar18);
        ::FString::FString(&local_178,pwVar13);
        bVar17 = true;
        FJsonValue::FJsonValue((FJsonValue *)this_00);
        this_00->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (this_00->Value).Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
        local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Value).Data.ArrayNum = local_178.Data.ArrayNum;
        (this_00->Value).Data.ArrayMax = local_178.Data.ArrayMax;
        local_178.Data.ArrayNum = 0;
        local_178.Data.ArrayMax = 0;
        *(EJson *)&this_00->_padding_ = String;
        pTVar15 = this_00;
      }
      local_150.Object = pTVar15;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_188,&local_150);
      if (((local_1a8.AllocatorInstance.Data <= &local_188) &&
          (&local_188 <
           (TSharedPtr<FJsonValue,1> *)
           (local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayMax * 0x10))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
        return pTVar11;
      }
      iVar8 = local_1a8.ArrayNum;
      if (local_1a8.ArrayNum == local_1a8.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_1a8.AllocatorInstance,&local_1a8.ArrayMax);
      }
      local_1a8.ArrayNum = iVar8 + 1;
      *(FJsonValue **)&local_1a8.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 =
           local_188.Object;
      *(TReferenceControllerBase<1> **)
       (local_1a8.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) =
           local_188.SharedReferenceCount.ReferenceController;
      local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_188.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar17) &&
         (bVar17 = false, local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    EVar18 = EVar18 << 1 | (ulonglong)((longlong)EVar18 < 0);
    lVar16 = lVar16 + -1;
    if (lVar16 == 0) {
      if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TSharedPtr<FJsonObject,1> *)(*pcVar6)();
        return pTVar11;
      }
      pFVar10 = __return_storage_ptr__->Object;
      ::FString::FString(&local_88,L"Flags");
      FJsonObject::SetArrayField(pFVar10,&local_88,&local_1a8);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_1a8.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_1a8.AllocatorInstance.Data);
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// ToJson @ 145d60f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

TSharedPtr<FJsonObject,1> * __thiscall
FRDGResourceDumpContext::ToJson
          (FRDGResourceDumpContext *this,TSharedPtr<FJsonObject,1> *__return_storage_ptr__,
          FShaderParametersMetadata *param_1)

{
  uint uVar1;
  FJsonObject *pFVar2;
  wchar_t *pwVar3;
  char *pcVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FJsonObject,1> *pTVar10;
  FString *pFVar11;
  FUtf8String *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  ulonglong uVar14;
  FMember *pFVar15;
  FMember *pFVar16;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_138;
  TSharedPtr<FJsonValue,1> local_128;
  TRawPtrProxy<FJsonObject> local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  TSharedPtr<FJsonObject,1> local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FUtf8String local_80;
  TSharedPtr<FJsonObject,1> local_70 [3];
  
  pTVar9 = ::operator_new(0x50);
  local_118.Object = (FJsonObject *)(TReferenceControllerBase<1> *)0x0;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    pTVar9->_padding_ = 0;
    pTVar9->SharedReferenceCount = (atomic<int>)0x0;
    pTVar9->WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar9[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar9[3]._padding_ + 4) = 0;
    pTVar9[4]._padding_ = 0;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    local_118.Object = (FJsonObject *)pTVar9;
  }
  TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>
            (__return_storage_ptr__,&local_118);
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
    return pTVar10;
  }
  pFVar2 = __return_storage_ptr__->Object;
  pwVar3 = param_1->StructTypeName;
  ::FString::FString(&local_110,L"StructTypeName");
  pFVar11 = ::FString::FString(&local_a0,pwVar3);
  FJsonObject::SetStringField(pFVar2,&local_110,pFVar11);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
    return pTVar10;
  }
  pFVar2 = __return_storage_ptr__->Object;
  pwVar3 = param_1->ShaderVariableName;
  ::FString::FString(&local_100,L"ShaderVariableName");
  pFVar11 = ::FString::FString(&local_90,pwVar3);
  FJsonObject::SetStringField(pFVar2,&local_100,pFVar11);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
    return pTVar10;
  }
  pFVar2 = __return_storage_ptr__->Object;
  pcVar4 = param_1->FileName;
  ::FString::FString(&local_f0,L"FileName");
  pFVar12 = FUtf8String::FUtf8String(&local_80,pcVar4);
  FJsonObject::SetStringField(pFVar2,&local_f0,pFVar12);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
    return pTVar10;
  }
  iVar8 = param_1->FileLine;
  pFVar2 = __return_storage_ptr__->Object;
  ::FString::FString(&local_e0,L"FileLine");
  FJsonObject::SetNumberField(pFVar2,&local_e0,(double)iVar8);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
    return pTVar10;
  }
  uVar1 = param_1->Size;
  pFVar2 = __return_storage_ptr__->Object;
  ::FString::FString(&local_d0,L"Size");
  FJsonObject::SetNumberField(pFVar2,&local_d0,(double)uVar1);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  pTVar6 = _UNK_150651568;
  pTVar9 = ___xmm_00000000000000000000000000000010;
  local_res20 = (param_1->Members).ArrayNum;
  uVar14 = (ulonglong)(int)local_res20;
  pFVar15 = (FMember *)(param_1->Members).AllocatorInstance.Data;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  pFVar16 = pFVar15 + uVar14;
  while( true ) {
    if ((param_1->Members).ArrayNum != (int)uVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar16) {
      if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
        return pTVar10;
      }
      pFVar2 = __return_storage_ptr__->Object;
      ::FString::FString(&local_b0,L"Members");
      FJsonObject::SetArrayField(pFVar2,&local_b0,&local_138);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_138.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pTVar10 = ToJson(this,local_70,pFVar15);
    pTVar13 = ::operator_new(0x30);
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      local_128.Object = (FJsonValue *)pTVar9;
      local_128.SharedReferenceCount.ReferenceController = pTVar6;
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar13->SharedReferenceCount = (atomic<int>)0x1;
      pTVar13->WeakReferenceCount = (atomic<int>)0x1;
      pTVar13->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      local_c0.Object = pTVar10->Object;
      local_c0.SharedReferenceCount.ReferenceController =
           (pTVar10->SharedReferenceCount).ReferenceController;
      (pTVar10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar10->Object = (FJsonObject *)0x0;
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar13 + 1),&local_c0);
      if ((pTVar13 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
        return pTVar10;
      }
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
      local_128.Object = (FJsonValue *)(pTVar13 + 1);
      local_128.SharedReferenceCount.ReferenceController = pTVar13;
    }
    if (((local_138.AllocatorInstance.Data <= &local_128) &&
        (&local_128 <
         (TSharedPtr<FJsonValue,1> *)
         (local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x10))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar8 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar8 + 1;
    *(FJsonValue **)&local_138.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 =
         local_128.Object;
    *(TReferenceControllerBase<1> **)(local_138.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8)
         = local_128.SharedReferenceCount.ReferenceController;
    local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_128.Object = (FJsonValue *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70[0].SharedReferenceCount.ReferenceController);
    uVar14 = (ulonglong)local_res20;
    pFVar15 = pFVar15 + 1;
  }
  pcVar5 = (code *)swi(3);
  pTVar10 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
  return pTVar10;
}

// TranslateSubresourceDumpDesc @ 145d61590

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FTextureSubresourceDumpDesc * __thiscall
FRDGResourceDumpContext::TranslateSubresourceDumpDesc
          (FRDGResourceDumpContext *this,FTextureSubresourceDumpDesc *__return_storage_ptr__,
          FRDGTextureSRVDesc *param_1)

{
  char cVar1;
  byte bVar2;
  EPixelFormat EVar3;
  ERDGTextureFlags EVar4;
  FRDGTexture *pFVar5;
  code *pcVar6;
  bool bVar7;
  FTextureSubresourceDumpDesc *pFVar8;
  ulonglong uVar9;
  ETextureType EVar10;
  
  if ((*(char *)((longlong)&param_1->_padding_ + 2) != '\x01') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubresourceDesc.NumMipLevels == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x33b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FTextureSubresourceDumpDesc *)(*pcVar6)();
    return pFVar8;
  }
  cVar1 = (param_1->Texture->Desc).field_0x32;
  if ((((cVar1 == '\x01') || (cVar1 == '\x04')) &&
      (*(short *)((longlong)&param_1->_padding_ + 6) != 1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SubresourceDesc.Texture->Desc.IsTextureArray() || SubresourceDesc.NumArraySlices == 1"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x33c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FTextureSubresourceDumpDesc *)(*pcVar6)();
    return pFVar8;
  }
  pFVar5 = param_1->Texture;
  (__return_storage_ptr__->SubResourceExtent).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  __return_storage_ptr__->ByteSize = 0;
  __return_storage_ptr__->bPreprocessForStaging = false;
  __return_storage_ptr__->DumpTextureType = MAX;
  __return_storage_ptr__->PostprocessedPixelFormat = (pFVar5->Desc).field_0x33;
  bVar2 = (pFVar5->Desc).field_0x33;
  if ((((((GPixelFormats[bVar2].BlockSizeX != 1) || (GPixelFormats[bVar2].BlockSizeY != 1)) ||
        (GPixelFormats[bVar2].BlockSizeZ != 1)) &&
       ((bVar2 != 0x27 && (((bVar2 - 0x17 & 0xde) != 0 || (bVar2 == 0x18)))))) ||
      ((cVar1 = (pFVar5->Desc).field_0x32, cVar1 != '\0' && (cVar1 != '\x01')))) ||
     (1 < (byte)(pFVar5->Desc).field_0x31)) goto LAB_145d6175b;
  (__return_storage_ptr__->SubResourceExtent).field0_0x0._s_0.X =
       *(int *)&(pFVar5->Desc).field_0x24 >> (*(byte *)((longlong)&param_1->_padding_ + 1) & 0x1f);
  (__return_storage_ptr__->SubResourceExtent).field0_0x0._s_0.Y =
       *(int *)&(pFVar5->Desc).field_0x28 >> (*(byte *)((longlong)&param_1->_padding_ + 1) & 0x1f);
  cVar1 = (pFVar5->Desc).field_0x33;
  EVar10 = Texture2DFloatNoMSAA;
  switch(cVar1) {
  case '\x1c':
  case ' ':
  case '\"':
  case '0':
  case '1':
  case '9':
  case '<':
  case 'D':
switchD_145d616e5_caseD_1c:
    EVar10 = Texture2DUintNoMSAA;
    break;
  default:
    if (((cVar1 - 0x1dU & 0xf9) == 0) && (cVar1 != '\x1f')) goto switchD_145d616e5_caseD_1c;
  }
  __return_storage_ptr__->DumpTextureType = EVar10;
  if ((char)param_1->_padding_ == ',') {
    __return_storage_ptr__->PostprocessedPixelFormat = PF_R8_UINT;
    __return_storage_ptr__->DumpTextureType = Texture2DDepthStencilNoMSAA;
  }
  else {
    cVar1 = (pFVar5->Desc).field_0x33;
    if (cVar1 == '\v') {
      __return_storage_ptr__->PostprocessedPixelFormat = PF_R32_FLOAT;
    }
    else if (cVar1 == '\f') {
      __return_storage_ptr__->PostprocessedPixelFormat = PF_R32_FLOAT;
    }
    else if (cVar1 == '\x14') {
      __return_storage_ptr__->PostprocessedPixelFormat = PF_R32_FLOAT;
    }
    else if (cVar1 == '\'') {
      __return_storage_ptr__->PostprocessedPixelFormat = PF_R32_FLOAT;
    }
    else if (cVar1 == '\x17') {
      __return_storage_ptr__->PostprocessedPixelFormat = PF_G16R16F;
    }
    else {
      if (1 < (byte)(cVar1 - 0x37U)) goto LAB_145d6175b;
      __return_storage_ptr__->PostprocessedPixelFormat = PF_FloatRGBA;
    }
    __return_storage_ptr__->DumpTextureType = Texture2DFloatNoMSAA;
  }
LAB_145d6175b:
  EVar3 = __return_storage_ptr__->PostprocessedPixelFormat;
  bVar7 = EVar3 != (pFVar5->Desc).field_0x33;
  __return_storage_ptr__->bPreprocessForStaging = bVar7;
  bVar7 = 1 < (byte)(param_1->Texture->Desc).field_0x30 || bVar7;
  __return_storage_ptr__->bPreprocessForStaging = bVar7;
  cVar1 = (param_1->Texture->Desc).field_0x32;
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    bVar7 = true;
  }
  __return_storage_ptr__->bPreprocessForStaging = bVar7;
  EVar4 = param_1->Texture->Flags;
  __return_storage_ptr__->PreprocessedPixelFormat = EVar3;
  bVar7 = (bool)(EVar4 >> 1 & 1 | bVar7);
  __return_storage_ptr__->bPreprocessForStaging = bVar7;
  if (bVar7 != false) {
    uVar9 = (ulonglong)GMaxRHIShaderPlatform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar9].bContainsValidPlatformInfo == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xc1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FTextureSubresourceDumpDesc *)(*pcVar6)();
      return pFVar8;
    }
    if (((FGenericDataDrivenShaderPlatformInfo::Infos[uVar9].Language == LANGUAGE_OpenGL) &&
        (GPixelFormats[__return_storage_ptr__->PostprocessedPixelFormat].NumComponents == 1)) &&
       (GPixelFormats[__return_storage_ptr__->PostprocessedPixelFormat].BlockBytes < 4)) {
      __return_storage_ptr__->PreprocessedPixelFormat = PF_R32_UINT;
    }
  }
  __return_storage_ptr__->ByteSize =
       (longlong)GPixelFormats[__return_storage_ptr__->PreprocessedPixelFormat].BlockBytes *
       (longlong)(__return_storage_ptr__->SubResourceExtent).field0_0x0._s_0.Y *
       (longlong)(__return_storage_ptr__->SubResourceExtent).field0_0x0._s_0.X;
  return __return_storage_ptr__;
}

// UpdateResourceLastModifyingPass @ 145d621d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGResourceDumpContext::UpdateResourceLastModifyingPass
          (FRDGResourceDumpContext *this,FRDGResource *param_1,FRDGPass *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGPass **ppFVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->LastResourceVersion).field_0x8 !=
      *(int *)&(this->LastResourceVersion).field_0x34) {
    puVar7 = *(undefined1 **)&(this->LastResourceVersion).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->LastResourceVersion).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->LastResourceVersion).field_0x48 - 1U &
                              (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->LastResourceVersion;
      do {
        if (*(FRDGResource **)(lVar1 + (longlong)iVar4 * 0x18) == param_1) goto LAB_145d6228c;
        iVar4 = *(int *)(lVar1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("LastResourceVersion.Contains(Resource)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                     ,0x2a0,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145d6228c:
  if (param_2 == (FRDGPass *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LastModifyingPass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x2a1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ppFVar5 = TMapBase<FRDGResource_const_*,FRDGPass_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGResource_const_*,FRDGPass_const_*,0>_>
            ::FindChecked((TMapBase<FRDGResource_const_*,FRDGPass_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGResource_const_*,FRDGPass_const_*,0>_>
                           *)&this->LastResourceVersion,param_1);
  *ppFVar5 = param_2;
  return;
}

// WaitAndReleaseStagingResources @ 145d622e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FRDGResourceDumpContext::WaitAndReleaseStagingResources
          (FRDGResourceDumpContext *this,FRHICommandListImmediate *param_1)

{
  TArray<TUniquePtr<FRDGResourceDumpContext::FStagingTexturePoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingTexturePoolEntry>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<TUniquePtr<FRDGResourceDumpContext::FStagingBufferPoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingBufferPoolEntry>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FLLMScope local_res20 [2];
  FMemScope local_48 [2];
  
  bVar7 = IsInRenderingThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x74f,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->bStream == false) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bStream",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x750,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  LandCompletedResources(this,param_1);
  pTVar1 = &this->StagingTexturePool;
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  iVar4 = (this->StagingTexturePool).ArrayNum;
  pFVar3 = pFVar8 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->StagingTexturePool).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FRDGResourceDumpContext::FStagingTexturePoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingTexturePoolEntry>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar3) break;
    piVar5 = *(int **)pFVar8;
    if ((*piVar5 == 3) || (*piVar5 == 4)) {
      if (*(longlong *)(piVar5 + 10) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry->WriteToDiskComplete",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                           ,0x6e4,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      (**(code **)(**(longlong **)(piVar5 + 10) + 0x20))(*(longlong **)(piVar5 + 10),0xffffffff);
      FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)(piVar5 + 10));
      piVar5[10] = 0;
      piVar5[0xb] = 0;
      if (*piVar5 != 4) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry->Status == FStagingResourceStatus::WritingToDiskComplete",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                           ,0x6ea,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *piVar5 = 0;
      FLLMScope::FLLMScope(local_res20,Textures,false,None,Default,true);
      FMemScope::FMemScope(local_48,Textures,true);
      (**(code **)(GDynamicRHI->_padding_ + 0x430))(GDynamicRHI,param_1);
      FMemScope::~FMemScope(local_48);
      FLLMScope::~FLLMScope(local_res20);
    }
    if (*(longlong *)(*(longlong *)pFVar8 + 0x28) != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry->WriteToDiskComplete == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x760,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((**(int **)pFVar8 != 0) && (**(int **)pFVar8 != 1)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry->Status == FStagingResourceStatus::Unused || Entry->Status == FStagingResourceStatus::RenderingIntermediaryOnly"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x761,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  pTVar2 = &this->StagingBufferPool;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->StagingBufferPool).ArrayNum;
  pFVar3 = pFVar8 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->StagingBufferPool).ArrayNum != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FRDGResourceDumpContext::FStagingBufferPoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingBufferPoolEntry>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar3) break;
    piVar5 = *(int **)pFVar8;
    if ((*piVar5 == 3) || (*piVar5 == 4)) {
      if (*(longlong *)(piVar5 + 10) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry->WriteToDiskComplete",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                           ,0x6e4,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      (**(code **)(**(longlong **)(piVar5 + 10) + 0x20))(*(longlong **)(piVar5 + 10),0xffffffff,0);
      FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)(piVar5 + 10));
      piVar5[10] = 0;
      piVar5[0xb] = 0;
      if (*piVar5 != 4) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry->Status == FStagingResourceStatus::WritingToDiskComplete",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                           ,0x6ea,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *piVar5 = 0;
      (**(code **)(GDynamicRHI->_padding_ + 0x100))(GDynamicRHI,param_1);
    }
    if (*(longlong *)(*(longlong *)pFVar8 + 0x28) != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry->WriteToDiskComplete == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x76d,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (**(int **)pFVar8 != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry->Status == FStagingResourceStatus::Unused",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0x76e,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  piVar5 = &(this->StagingTexturePool).ArrayMax;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  iVar4 = (this->StagingTexturePool).ArrayNum;
  if ((this->StagingTexturePool).ArrayMax < 0) {
    DestructItems<TUniquePtr<FRDGResourceDumpContext::FStagingTexturePoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingTexturePoolEntry>_>,int>
              ((TUniquePtr<FRDGResourceDumpContext::FStagingTexturePoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingTexturePoolEntry>_>
                *)pFVar3,iVar4);
    (this->StagingTexturePool).ArrayNum = 0;
    if (*piVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,piVar5);
    }
  }
  else {
    DestructItems<TUniquePtr<FRDGResourceDumpContext::FStagingTexturePoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingTexturePoolEntry>_>,int>
              ((TUniquePtr<FRDGResourceDumpContext::FStagingTexturePoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingTexturePoolEntry>_>
                *)pFVar3,iVar4);
    (this->StagingTexturePool).ArrayNum = 0;
  }
  piVar5 = &(this->StagingBufferPool).ArrayMax;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->StagingBufferPool).ArrayNum;
  if ((this->StagingBufferPool).ArrayMax < 0) {
    DestructItems<TUniquePtr<FRDGResourceDumpContext::FStagingBufferPoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingBufferPoolEntry>_>,int>
              ((TUniquePtr<FRDGResourceDumpContext::FStagingBufferPoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingBufferPoolEntry>_>
                *)pFVar3,iVar4);
    (this->StagingBufferPool).ArrayNum = 0;
    if (*piVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar5);
    }
  }
  else {
    DestructItems<TUniquePtr<FRDGResourceDumpContext::FStagingBufferPoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingBufferPoolEntry>_>,int>
              ((TUniquePtr<FRDGResourceDumpContext::FStagingBufferPoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingBufferPoolEntry>_>
                *)pFVar3,iVar4);
    (this->StagingBufferPool).ArrayNum = 0;
  }
  ReleaseRHIResources(this,param_1);
  return;
}

