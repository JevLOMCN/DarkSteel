// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 4

// FOpenGLUniformBuffer @ 145be5750

FOpenGLUniformBuffer * __thiscall
FOpenGLUniformBuffer::FOpenGLUniformBuffer
          (FOpenGLUniformBuffer *this,FRHIUniformBufferLayout *param_1)

{
  bool bVar1;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_UniformBuffer);
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRHIUniformBuffer__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_1;
  if (param_1 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_1);
  }
  *(uint *)&this->_padding_ = param_1->ConstantBufferSize;
  this->_padding_ = (longlong)&___7FOpenGLUniformBuffer__6B_;
  GUniqueUniformBufferID = GUniqueUniformBufferID + 1;
  this->RangeSize = 0;
  this->UniqueID = GUniqueUniformBufferID;
  this->Resource = 0;
  this->Offset = 0;
  this->PersistentlyMappedBuffer = (uchar *)0x0;
  (this->EmulatedBufferData).Reference = (FOpenGLEUniformBufferData *)0x0;
  this->AllocatedSize = 0;
  this->bStreamDraw = false;
  this->bOwnsResource = true;
  if ((GUseEmulatedUniformBuffers == false) ||
     ((param_1->Flags & (UniformView|NoEmulatedUniformBuffer)) != None)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bIsEmulatedUniformBuffer = bVar1;
  this->RangeSize = param_1->ConstantBufferSize;
  return this;
}

// ~FOpenGLUniformBuffer @ 145bea1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLUniformBuffer::~FOpenGLUniformBuffer(FOpenGLUniformBuffer *this)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  FOpenGLEUniformBufferData *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  HGLRC pHVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory> FVar15;
  FLowLevelMemTracker *this_02;
  uint uVar16;
  longlong lVar17;
  TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> (*paaTVar18) [45] [2];
  ForAnyElementType *pFVar19;
  uint uVar20;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  FStatMessage local_68;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uchar *local_48;
  
  this->_padding_ = (longlong)&___7FOpenGLUniformBuffer__6B_;
  pHVar12 = wglGetCurrentContext();
  if (pHVar12 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((this->Resource != 0) && (this->bOwnsResource != false)) {
    bVar8 = IsPoolingEnabled();
    if (bVar8) {
      uStack_50 = this->Offset;
      uStack_54 = this->AllocatedSize;
      bVar8 = this->bStreamDraw;
      local_48 = this->PersistentlyMappedBuffer;
      uStack_4c = GFrameNumberRenderThread;
      uVar20 = GFrameNumberRenderThread % 3;
      local_58 = this->Resource;
      uVar10 = GetPoolBucketIndex(uStack_54);
      uVar16 = 0;
      if ((int)uVar10 < UniformBufferSizeBuckets.ArrayNum) {
        uVar16 = ~uVar10 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (this->AllocatedSize !=
          *(uint *)(UniformBufferSizeBuckets.AllocatorInstance.Data + (longlong)(int)uVar10 * 4)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocatedSize == UniformBufferSizeBuckets[BucketIndex]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                           ,0x1c7,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&GGLUniformBufferPoolCS);
      if ((GUseEmulatedUniformBuffers == false) || ((*(byte *)(this->_padding_ + 0x94) & 1) != 0)) {
        lVar17 = ((longlong)(int)uVar20 * 0x2d + (ulonglong)uVar10) * 0x20 +
                 (ulonglong)(-(uint)(bVar8 != false) & 0x10);
        paaTVar18 = SafeGLUniformBufferPools;
      }
      else {
        lVar17 = ((longlong)(int)uVar20 * 0x2d + (ulonglong)uVar10) * 0x20 +
                 (ulonglong)(-(uint)(bVar8 != false) & 0x10);
        paaTVar18 = SafeGLEmulatedUniformBufferPools;
      }
      pFVar19 = (ForAnyElementType *)((longlong)&(*paaTVar18)[0][0].AllocatorInstance.Data + lVar17)
      ;
      if ((pFVar19->Data <= (FScriptContainerElement *)&local_58) &&
         ((FScriptContainerElement *)&local_58 <
          pFVar19->Data + (longlong)*(int *)((longlong)&pFVar19[1].Data + 4) * 0x18)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar11 = *(int *)&pFVar19[1].Data;
      piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,pFVar19,piVar1);
      }
      *(int *)&pFVar19[1].Data = iVar11 + 1;
      pFVar4 = pFVar19->Data;
      pFVar3 = pFVar4 + (longlong)iVar11 * 0x18;
      *(uint *)pFVar3 = local_58;
      *(uint *)(pFVar3 + 4) = uStack_54;
      *(uint *)(pFVar3 + 8) = uStack_50;
      *(uint *)(pFVar3 + 0xc) = uStack_4c;
      *(uchar **)(pFVar4 + (longlong)iVar11 * 0x18 + 0x10) = local_48;
      FVar14 = StatPtr_STAT_OpenGLNumFreeUniformBuffers;
      if (StatPtr_STAT_OpenGLNumFreeUniformBuffers ==
          (FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers>)0x0) {
        pFVar13 = ::FName::FName(&local_res10,"STAT_OpenGLNumFreeUniformBuffers");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLNumFreeUniformBuffers,
                            *pFVar13,L"Uniform buffer pool num free","STATGROUP_OpenGLRHI",
                            "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar5 = *(FName *)FVar14;
      local_res8 = FVar5;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_68.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
        local_68.StatData.Pad[0] = '\x01';
        local_68.StatData.Pad[1] = '\0';
        local_68.StatData.Pad[2] = '\0';
        local_68.StatData.Pad[3] = '\0';
        local_68.StatData.Pad[4] = '\0';
        local_68.StatData.Pad[5] = '\0';
        local_68.StatData.Pad[6] = '\0';
        local_68.StatData.Pad[7] = '\0';
        local_res8 = FVar5;
        local_68.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_68);
        FStatsTrace::Add(&local_res8,1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
      uVar16 = this->AllocatedSize;
      if ((ulonglong)uVar16 != 0) {
        FVar15 = StatPtr_STAT_OpenGLFreeUniformBufferMemory;
        if (StatPtr_STAT_OpenGLFreeUniformBufferMemory ==
            (FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory>)0x0) {
          pFVar13 = ::FName::FName(local_res18,"STAT_OpenGLFreeUniformBufferMemory");
          FVar15 = (FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_OpenGLFreeUniformBufferMemory,*pFVar13,
                              L"Uniform buffer pool memory","STATGROUP_OpenGLRHI","STATCAT_Advanced"
                              ,L"OpenGL RHI",true,false,ST_int64,false,false,MCR_Physical);
        }
        local_res8 = *(FName *)FVar15;
        FThreadStats::AddMessage<__int64>(local_res8,Add,(ulonglong)uVar16,false);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&GGLUniformBufferPoolCS);
    }
    else {
      ReleaseUniformBuffer
                ((this->EmulatedBufferData).Reference != (FOpenGLEUniformBufferData *)0x0,
                 this->Resource,this->AllocatedSize);
      this->Resource = 0;
    }
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_02 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_02 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree
                (this_02,Default,(void *)((longlong)&this->_padding_ + 1),None,true);
    }
  }
  pFVar6 = (this->EmulatedBufferData).Reference;
  if (pFVar6 != (FOpenGLEUniformBufferData *)0x0) {
    plVar2 = &pFVar6->_padding_;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  DestructItems<TRefCountPtr<FRHIResource>,int>
            ((TRefCountPtr<FRHIResource> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// SetGLUniformBufferParams @ 145c2d470

void __thiscall
FOpenGLUniformBuffer::SetGLUniformBufferParams
          (FOpenGLUniformBuffer *this,uint param_1,uint param_2,uchar *param_3,uint param_4,
          TRefCountPtr<FOpenGLEUniformBufferData> param_5,bool param_6)

{
  longlong *plVar1;
  int *piVar2;
  FOpenGLEUniformBufferData *pFVar3;
  FOpenGLEUniformBufferData *pFVar4;
  undefined8 *puVar5;
  FLowLevelMemTracker *this_00;
  
  this->Resource = param_1;
  this->Offset = param_2;
  this->PersistentlyMappedBuffer = param_3;
  pFVar3 = (FOpenGLEUniformBufferData *)(param_5.Reference)->_padding_;
  pFVar4 = (this->EmulatedBufferData).Reference;
  if (pFVar4 != pFVar3) {
    (this->EmulatedBufferData).Reference = pFVar3;
    if (pFVar3 != (FOpenGLEUniformBufferData *)0x0) {
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
    }
    if (pFVar4 != (FOpenGLEUniformBufferData *)0x0) {
      plVar1 = &pFVar4->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  this->AllocatedSize = param_4;
  this->bStreamDraw = param_6;
  this->bOwnsResource = true;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc
              (this_00,Default,(void *)((longlong)&this->_padding_ + 1),(ulonglong)param_4,Untagged,
               None,true);
  }
  puVar5 = (undefined8 *)(param_5.Reference)->_padding_;
  if (puVar5 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return;
}

// SetLayoutTable @ 145c2d540

void __thiscall
FOpenGLUniformBuffer::SetLayoutTable
          (FOpenGLUniformBuffer *this,void *param_1,EUniformBufferValidation param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  FRDGResource *this_00;
  FRHIResource *this_01;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FRHIResource *this_02;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar3 = *(uint *)(this->_padding_ + 0x30);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    DestructItems<TRefCountPtr<FRHIResource>,int>
              ((TRefCountPtr<FRHIResource> *)this->_padding_,(int)this->_padding_);
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*puVar1 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,(ForAnyElementType *)&this->_padding_,0,(int *)puVar1);
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar3,(ForAnyElementType *)&this->_padding_,(int *)&this->_padding_,
                       (int *)puVar1);
    memset((void *)(this->_padding_ + (longlong)iVar8 * 8),0,(longlong)(int)uVar3 * 8);
    if ((param_1 != (void *)0x0) && (uVar12 = 0, 0 < (int)uVar3)) {
      lVar13 = 0;
      do {
        lVar4 = this->_padding_;
        uVar11 = ~uVar12 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar12 < *(int *)(lVar4 + 0x30)) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = this->_padding_;
        bVar2 = *(byte *)(*(longlong *)(lVar4 + 0x28) + 2 + lVar13 * 4);
        uVar9 = 0;
        if ((int)uVar12 < *(int *)(lVar5 + 0x30)) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((bVar2 < 0x18) && ((0xc98c00U >> (bVar2 & 0x1f) & 1) != 0)) {
LAB_145c2d6cc:
          this_02 = (FRHIResource *)0x0;
        }
        else {
          puVar10 = (undefined8 *)
                    ((ulonglong)*(ushort *)(*(longlong *)(lVar5 + 0x28) + lVar13 * 4) +
                    (longlong)param_1);
          if ((bVar2 < 0x13) && ((0x67200U >> (bVar2 & 0x1f) & 1) != 0)) {
            this_00 = (FRDGResource *)*puVar10;
            if (this_00 == (FRDGResource *)0x0) goto LAB_145c2d6cc;
            FRDGResource::ValidateRHIAccess(this_00);
            this_02 = this_00->ResourceRHI;
          }
          else {
            this_02 = (FRHIResource *)*puVar10;
          }
        }
        uVar9 = 0;
        if ((int)uVar12 < (int)this->_padding_) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_01 = *(FRHIResource **)(this->_padding_ + lVar13 * 8);
        if (this_01 != this_02) {
          *(FRHIResource **)(this->_padding_ + lVar13 * 8) = this_02;
          if (this_02 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(this_02);
          }
          if (this_01 != (FRHIResource *)0x0) {
            FRHIResource::Release(this_01);
          }
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)uVar3);
    }
  }
  return;
}

