// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// CompressShader @ 145bf8940

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FOpenGLCompiledShaderValue::CompressShader
          (FOpenGLCompiledShaderValue *this,TArray<char,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<char,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint local_res8 [2];
  
  piVar1 = &(this->GlslCode).ArrayNum;
  if ((this->GlslCode).ArrayNum != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GlslCode.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x1d7,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  this->UncompressedSize = iVar7;
  local_res8[0] =
       FCompression::CompressMemoryBound(this->CompressionMethod,iVar7,COMPRESS_NoFlags,0);
  this_00 = &this->GlslCode;
  if (-1 < (int)local_res8[0]) {
    piVar2 = &(this->GlslCode).ArrayMax;
    (this->GlslCode).ArrayNum = 0;
    if (*piVar2 != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_res8[0],&this_00->AllocatorInstance,0,piVar2);
    }
    uVar5 = local_res8[0];
    iVar7 = (this->GlslCode).ArrayNum;
    if (iVar7 < (int)local_res8[0]) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_res8[0] - iVar7,&this_00->AllocatorInstance,piVar1,piVar2);
    }
    else {
      if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
      }
      if ((int)local_res8[0] < iVar7) {
        uVar9 = iVar7 - local_res8[0];
        if ((int)(local_res8[0] | uVar9) < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar9 != 0) {
          pFVar8 = (this_00->AllocatorInstance).Data + (int)uVar5;
          iVar7 = ((this->GlslCode).ArrayNum - uVar9) - uVar5;
          if (iVar7 != 0) {
            memmove(pFVar8,pFVar8 + (int)uVar9,(longlong)iVar7);
          }
          piVar3 = &(this->GlslCode).ArrayNum;
          *piVar3 = *piVar3 - uVar9;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&this_00->AllocatorInstance,(this->GlslCode).ArrayNum,piVar2);
        }
      }
    }
    bVar6 = FCompression::CompressMemory
                      (this->CompressionMethod,(this_00->AllocatorInstance).Data,(int *)local_res8,
                       (param_1->AllocatorInstance).Data,this->UncompressedSize,COMPRESS_BiasSpeed,0
                      );
    if (bVar6) {
      TArray<char,TSizedDefaultAllocator<32>_>::SetNum(this_00,local_res8[0],Default);
    }
    else {
      if (this_00 != param_1) {
        iVar7 = param_1->ArrayNum;
        pFVar8 = (param_1->AllocatorInstance).Data;
        (this->GlslCode).ArrayNum = iVar7;
        if ((iVar7 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar7,*piVar2,&this_00->AllocatorInstance,iVar7,piVar2);
          if (iVar7 != 0) {
            memcpy((this_00->AllocatorInstance).Data,pFVar8,(longlong)iVar7);
          }
        }
      }
      this->UncompressedSize = -1;
    }
    LOCK();
    StatTotalStoredSize = (TAtomic<unsigned_int>)((int)StatTotalStoredSize + *piVar1);
    UNLOCK();
    iVar7 = this->UncompressedSize;
    if (iVar7 == -1) {
      iVar7 = *piVar1;
    }
    LOCK();
    StatTotalUncompressedSize = (TAtomic<unsigned_int>)((int)StatTotalUncompressedSize + iVar7);
    UNLOCK();
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
}

// GetUncompressedShader @ 145c049d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

TArray<char,TSizedDefaultAllocator<32>_> * __thiscall
FOpenGLCompiledShaderValue::GetUncompressedShader
          (FOpenGLCompiledShaderValue *this,
          TArray<char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  void *pvVar8;
  bool bVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  ulonglong uVar16;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  pvVar8 = ThreadLocalStoragePointer;
  uVar16 = (ulonglong)_tls_index;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  lVar3 = *(longlong *)((longlong)pvVar8 + uVar16 * 8);
  *piVar1 = 0;
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:_class_TArray<char,TSizedDefaultAllocator<32>_>___cdecl_FOpenGLCompiledShaderValue::GetUncompressedShader(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TArray<char,TSizedDefaultAllocator<32>_>___cdecl_FOpenGLCompiledShaderValue::GetUncompressedShader(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TArray<char,TSizedDefaultAllocator<32>_>___cdecl_FOpenGLCompiledShaderValue::GetUncompressedShader(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_glUncompressShader = (TStatIdData *)0x0;
    pFVar10 = ::FName::FName(&local_res20,"STAT_glUncompressShader");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_class_TArray<char,TSizedDefaultAllocator<32>_>___cdecl_FOpenGLCompiledShaderValue::GetUncompressedShader(void)const___ptr64'
                ::__l2::StatPtr_STAT_glUncompressShader,*pFVar10,L"STAT_glUncompressShader",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_class_TArray<char,TSizedDefaultAllocator<32>_>___cdecl_FOpenGLCompiledShaderValue::GetUncompressedShader(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar11 = _StatPtr_STAT_glUncompressShader;
  if (_StatPtr_STAT_glUncompressShader == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName(&local_68,"STAT_glUncompressShader");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_class_TArray<char,TSizedDefaultAllocator<32>_>___cdecl_FOpenGLCompiledShaderValue::GetUncompressedShader(void)const___ptr64'
                          ::__l2::StatPtr_STAT_glUncompressShader,*pFVar10,
                         L"STAT_glUncompressShader","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar11->Name;
  bVar5 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0x1b8);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar14.Value;
      local_res18.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_145c04b5c;
    }
  }
  bVar6 = false;
  FVar15 = local_60;
LAB_145c04b5c:
  uVar13 = this->UncompressedSize;
  if (uVar13 == 0xffffffff) {
    if (__return_storage_ptr__ != &this->GlslCode) {
      iVar2 = (this->GlslCode).ArrayNum;
      _Src = (this->GlslCode).AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,*piVar1,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2);
        }
      }
    }
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    __return_storage_ptr__->ArrayNum = 0;
    if (*piVar1 != uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar13,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    TArray<char,TSizedDefaultAllocator<32>_>::SetNum
              (__return_storage_ptr__,this->UncompressedSize,Default);
    bVar9 = FCompression::UncompressMemory
                      (this->CompressionMethod,(__return_storage_ptr__->AllocatorInstance).Data,
                       (longlong)this->UncompressedSize,(this->GlslCode).AllocatorInstance.Data,
                       (longlong)(this->GlslCode).ArrayNum,COMPRESS_NoFlags,0);
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("bResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                           ,0x1c6,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<char,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar12;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
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
  return __return_storage_ptr__;
}

