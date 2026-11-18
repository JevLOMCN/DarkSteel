// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 11

// FMutableTextureMipDataProvider @ 14ac0ac90

FMutableTextureMipDataProvider * __thiscall
FMutableTextureMipDataProvider::FMutableTextureMipDataProvider
          (FMutableTextureMipDataProvider *this,UTexture *param_1,
          UCustomizableObjectInstance *param_2,FMutableImageReference *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FMutableTextureMipDataProvider *pFVar7;
  
  FTextureMipDataProvider::FTextureMipDataProvider
            ((FTextureMipDataProvider *)this,param_1,Init,Async);
  this->CustomizableObjectInstance = param_2;
  this->_padding_ = (longlong)&___7FMutableTextureMipDataProvider__6B_;
  (this->ImageRef).ImageID.Id = 0xffffffff;
  (this->ImageRef).ImageID.WeakRegistry.Object =
       (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
        *)0x0;
  (this->ImageRef).ImageID.WeakRegistry.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
  FHandle::operator=(&(this->ImageRef).ImageID,&param_3->ImageID);
  pTVar1 = &(this->ImageRef).ConstantImagesNeededToGenerate;
  (this->ImageRef).SurfaceId = param_3->SurfaceId;
  (this->ImageRef).LOD = param_3->LOD;
  (this->ImageRef).Component = param_3->Component;
  (this->ImageRef).Image = param_3->Image;
  (this->ImageRef).BaseMip = param_3->BaseMip;
  piVar2 = &(this->ImageRef).ConstantImagesNeededToGenerate.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_3->ConstantImagesNeededToGenerate).ArrayNum;
  _Src = (param_3->ConstantImagesNeededToGenerate).AllocatorInstance.Data;
  (this->ImageRef).ConstantImagesNeededToGenerate.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  (this->UpdateContext).Object = (FMutableUpdateImageContext *)0x0;
  (this->UpdateContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bRequestAborted = false;
  (this->OperationData).Object = (FMutableImageOperationData *)0x0;
  (this->OperationData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PrefetchRequest).Ptr = (FMutableStreamRequest *)0x0;
  if (((((this->ImageRef).ImageID.Id == 0xffffffff) ||
       ((this->ImageRef).ImageID.WeakRegistry.Object ==
        (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
         *)0x0)) ||
      (pTVar4 = (this->ImageRef).ImageID.WeakRegistry.WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ImageRef.ImageID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                       ,0x2d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FMutableTextureMipDataProvider *)(*pcVar5)();
      return pFVar7;
    }
  }
  return this;
}

// operator() @ 14ac0fee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FMutableTextureMipDataProvider::GetMips'::__l70::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  UCustomizableObjectSystemPrivate *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UCustomizableObjectSystem *pUVar6;
  undefined ***pppuVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar8;
  undefined1 auStackY_78 [32];
  code *local_48 [2];
  undefined **local_38 [2];
  longlong local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId416,"Mutable_ImagePrefetchTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
               ,0x1a0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId416);
  }
  if ((*(longlong *)this == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)this;
  *(undefined4 *)(lVar1 + 0x80) = 0;
  if (*(int *)(lVar1 + 0x84) != 0) {
    UE::Core::Private::
    ReallocTo<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)(lVar1 + 0x70),0,(int *)(lVar1 + 0x84));
  }
  if ((*(longlong *)this == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 200);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if ((*(longlong *)this == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  **(int **)(*(longlong *)this + 0x88) = **(int **)(*(longlong *)this + 0x88) + -1;
  UNLOCK();
  if ((*(longlong *)this == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)(*(longlong *)this + 0xc0) == '\0') {
    pUVar6 = UCustomizableObjectSystem::GetInstance();
    if (((pUVar6->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x32c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar2 = (pUVar6->Private).field0_0x0.DebugPtr;
    if (pUVar2 != (UCustomizableObjectSystemPrivate *)0x0) {
      local_28 = *(longlong *)((longlong)this + 8);
      local_38[1] = *(undefined ***)this;
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      local_38[0] = &UE::Core::Private::Function::
                     TFunction_OwnedObject<``FMutableTextureMipDataProvider::GetMips'::`70'::<lambda_1>::operator()'::`15'::<lambda_1>,0,0>
                     ::_vftable_;
      local_20 = (undefined ***)0x0;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``FMutableTextureMipDataProvider::GetMips'::__l70::<lambda_1>::operator()'::__l15::<lambda_1>,void>
                    ::Call;
      uVar5 = FMutableTaskGraph::AddMutableThreadTaskLowPriority
                        (&pUVar2->MutableTaskGraph,L"Mutable_MipUpdate",
                         (TFunction<void___cdecl(void)> *)local_48);
      if ((*(longlong *)this == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)(*(longlong *)this + 0x68) = uVar5;
      if (local_48[0] != (code *)0x0) {
        pppuVar7 = local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar7 = local_20;
        }
        (*(code *)(*pppuVar7)[2])();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
  }
  else {
    if ((*(longlong *)this == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((**(int **)(*(longlong *)this + 0x88) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OperationData->Counter->GetValue() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                           ,0x1ab,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AbortPollMips @ 14ac13e50

void __thiscall FMutableTextureMipDataProvider::AbortPollMips(FMutableTextureMipDataProvider *this)

{
  this->bRequestAborted = true;
  CancelAsyncTasks(this);
  return;
}

// Cancel @ 14ac16420

void __thiscall
FMutableTextureMipDataProvider::Cancel
          (FMutableTextureMipDataProvider *this,FTextureUpdateSyncOptions *param_1)

{
  this->bRequestAborted = true;
  CancelAsyncTasks(this);
  return;
}

// CancelAsyncTasks @ 14ac16430

void __thiscall
FMutableTextureMipDataProvider::CancelAsyncTasks(FMutableTextureMipDataProvider *this)

{
  FMutableStreamRequest *this_00;
  FMutableImageOperationData *pFVar1;
  FThreadSafeCounter *pFVar2;
  UCustomizableObjectSystemPrivate *pUVar3;
  code *pcVar4;
  bool bVar5;
  UCustomizableObjectSystem *pUVar6;
  FWindowsRecursiveMutex *lpCriticalSection;
  
  this_00 = (this->PrefetchRequest).Ptr;
  if (this_00 != (FMutableStreamRequest *)0x0) {
    FMutableStreamRequest::Cancel(this_00);
  }
  pFVar1 = (this->OperationData).Object;
  if (pFVar1 != (FMutableImageOperationData *)0x0) {
    lpCriticalSection = &pFVar1->CounterTaskLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->OperationData).Object == (FMutableImageOperationData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar1 = (this->OperationData).Object;
    if (pFVar1->bIsCancelled == false) {
      if (pFVar1 == (FMutableImageOperationData *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      ((this->OperationData).Object)->bIsCancelled = true;
      if ((this->OperationData).Object == (FMutableImageOperationData *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (0 < ((this->OperationData).Object)->Counter->Counter) {
        if ((this->OperationData).Object == (FMutableImageOperationData *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar2 = ((this->OperationData).Object)->Counter;
        LOCK();
        pFVar2->Counter = pFVar2->Counter + -1;
        UNLOCK();
      }
    }
    pUVar6 = UCustomizableObjectSystem::GetInstance();
    if (pUVar6 != (UCustomizableObjectSystem *)0x0) {
      if ((pUVar6->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x32c,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pUVar3 = (pUVar6->Private).field0_0x0.DebugPtr;
      if ((this->OperationData).Object == (FMutableImageOperationData *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FMutableTaskGraph::CancelMutableThreadTaskLowPriority
                (&pUVar3->MutableTaskGraph,((this->OperationData).Object)->MutableTaskId);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// CleanUp @ 14ac16880

void __thiscall
FMutableTextureMipDataProvider::CleanUp
          (FMutableTextureMipDataProvider *this,FTextureUpdateSyncOptions *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->Counter != (FThreadSafeCounter *)0x0) && (param_1->Counter->Counter != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SyncOptions.Counter || SyncOptions.Counter->GetValue() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                       ,0x226,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (5 < (uint)this->_padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)NextTickState <= (uint32)InState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&this->_padding_ = 5;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  return;
}

// GetCancelThread @ 14ac1d7c0

ETickThread __thiscall
FMutableTextureMipDataProvider::GetCancelThread(FMutableTextureMipDataProvider *this)

{
  return None;
}

// GetMips @ 14ac1f170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
FMutableTextureMipDataProvider::GetMips
          (FMutableTextureMipDataProvider *this,FTextureUpdateContext *param_1,int param_2,
          TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *param_3
          ,FTextureUpdateSyncOptions *param_4)

{
  TSharedPtr<FMutableImageOperationData,1> *pTVar1;
  int *piVar2;
  atomic<unsigned_int> *paVar3;
  TUniquePtr<FMutableStreamRequest,TDefaultDelete<FMutableStreamRequest>_> *pTVar4;
  atomic<unsigned_int> aVar5;
  FMutableUpdateImageContext *pFVar6;
  longlong lVar7;
  FMutableImageOperationData *pFVar8;
  FThreadSafeCounter *pFVar9;
  FModel *this_00;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  FTextureUpdateContext *pFVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  FString *pFVar26;
  UClass *pUVar27;
  TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_> *pTVar28;
  long64 lVar29;
  UCustomizableObjectSystem *pUVar30;
  TReferenceControllerBase<1> *pTVar31;
  FTexturePlatformData *pFVar32;
  FMutableStreamRequest *pFVar33;
  FMutableStreamRequest *pFVar34;
  FMutableStreamableBlock *pFVar35;
  FTaskBase *this_01;
  FScriptContainerElement *pFVar36;
  FMutableUpdateImageContext *pFVar37;
  longlong *plVar38;
  UTexture2D *pUVar39;
  UTexture2D *pUVar40;
  ulong64 uVar42;
  longlong lVar43;
  FScriptContainerElement *pFVar44;
  void *_Dst;
  uint uVar45;
  ulonglong uVar46;
  FMutableImageOperationData *pFVar47;
  TReferenceControllerBase<1> *pTVar48;
  TSharedPtr<FModelStreamableBulkData,1> *pTVar49;
  ForAnyElementType FVar50;
  bool bVar51;
  undefined1 auStackY_248 [32];
  uint local_1f4;
  uint local_1f0;
  undefined1 local_1ec;
  undefined1 local_1eb [3];
  uint local_1e8;
  int local_1e4;
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  FScriptContainerElement *local_1c8;
  UTexture2D *local_1c0;
  FMutableImageOperationData *local_1b8;
  TReferenceControllerBase<1> *local_1b0;
  FTextureUpdateContext *local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  ForElementType<FTextureMipInfo> local_198;
  FTextureUpdateContext *local_190;
  FMutableImageOperationData *local_188;
  FSharedReferencer<1> FStack_180;
  FTaskBase *local_178;
  void *local_170;
  void *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  uint uStack_154;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  FSoftObjectPath local_148;
  FName local_128;
  FMutableUpdateImageContext *local_120;
  TReferenceControllerBase<1> *pTStack_118;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [2];
  TStringView<wchar_t> local_d8;
  FString local_c8;
  TArrayView<unsigned_char,int> local_b8;
  undefined4 local_9c;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong *plStack_70;
  ulonglong local_68;
  ForElementType<FTextureMipInfo> FVar41;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1b8 = (FMutableImageOperationData *)param_4;
  pFVar44 = (FScriptContainerElement *)0x0;
  uVar46 = (ulonglong)param_2;
  bVar51 = -1 < CpuChannel->Enabled;
  local_1a8 = param_1;
  local_198 = (ForElementType<FTextureMipInfo>)param_3;
  if (bVar51) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId263,"Mutable_FMutableTextureMipDataProvider::GetMips",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
               ,0x107);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId263);
  }
  if (((this->UpdateContext).Object == (FMutableUpdateImageContext *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  pFVar6 = (this->UpdateContext).Object;
  local_148.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_148.AssetPath.PackageName.Number = 0;
  local_148.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_148.AssetPath.AssetName.Number = 0;
  local_148.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.SubPathString.Data.ArrayNum = 0;
  local_148.SubPathString.Data.ArrayMax = 0;
  local_108 = (pFVar6->CustomizableObjectPathName).Data.AllocatorInstance.Data;
  iVar22 = (pFVar6->CustomizableObjectPathName).Data.ArrayNum;
  iVar25 = 0;
  iStack_100 = iVar22 + -1;
  if (iVar22 == 0) {
    iStack_100 = iVar25;
  }
  local_d8._12_4_ = uStack_fc;
  local_d8.Size = iStack_100;
  local_d8.DataPtr = (wchar_t *)local_108;
  FSoftObjectPath::SetPath(&local_148,&local_d8);
  local_128 = local_148.AssetPath.AssetName;
  if (local_148.AssetPath.AssetName == (FName)0x0) {
    local_f8 = 0;
    local_f0 = 0;
  }
  else {
    pFVar26 = ::FName::ToString(&local_128,&local_c8);
    pFVar44 = (pFVar26->Data).AllocatorInstance.Data;
    (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar25 = (pFVar26->Data).ArrayNum;
    (pFVar26->Data).ArrayNum = 0;
    (pFVar26->Data).ArrayMax = 0;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar36 = (FScriptContainerElement *)L"";
  if (iVar25 != 0) {
    pFVar36 = pFVar44;
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)pFVar36,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
               ,0x10a);
  }
  if (pFVar44 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar44);
  }
  if ((UCustomizableObjectSystemPrivate::SSystem == (UCustomizableObjectSystem *)0x0) ||
     (bIsMutableEnabled == false)) {
    if ((5 < (uint)this->_padding_) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)NextTickState <= (uint32)InState",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                            ,0xd1,L""), bVar20)) {
      pcVar10 = (code *)swi(3);
      iVar22 = (*pcVar10)();
      return iVar22;
    }
    *(undefined4 *)&this->_padding_ = 5;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
    goto LAB_14ac20604;
  }
  pUVar39 = (UTexture2D *)param_1->Texture;
  if (pUVar39 == (UTexture2D *)0x0) {
LAB_14ac1f355:
    pUVar39 = (UTexture2D *)0x0;
    local_1c0 = (UTexture2D *)0x0;
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Texture",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                        ,0x11f,L"");
    if (bVar20) {
      pcVar10 = (code *)swi(3);
      iVar22 = (*pcVar10)();
      return iVar22;
    }
  }
  else {
    local_1c0 = pUVar39;
    pUVar27 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar22 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar39->_padding_ + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar39->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar27->_padding_)) goto LAB_14ac1f355;
  }
  if (((pUVar39->_padding_ & 1) != 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Texture->NeverStream",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                          ,0x120,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  pTVar28 = UTexture2D::GetPlatformMips(pUVar39);
  local_1e4 = (pTVar28->Array).ArrayNum;
  if ((((((this->ImageRef).ImageID.Id == 0xffffffff) ||
        ((this->ImageRef).ImageID.WeakRegistry.Object ==
         (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
          *)0x0)) ||
       (pTVar48 = (this->ImageRef).ImageID.WeakRegistry.WeakReferenceCount.ReferenceController,
       pTVar48 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar48->SharedReferenceCount < 1))
     && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("ImageRef.ImageID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                             ,0x124,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  pUVar39 = local_1c0;
  pTVar48 = _UNK_150651568;
  pFVar8 = ___xmm_00000000000000000000000000000010;
  local_1d0 = 0x100;
  local_1f4 = 0;
  local_190 = (FTextureUpdateContext *)0x0;
  if (param_2 < (int)this->_padding_) {
    local_1c8 = (FScriptContainerElement *)(uVar46 * 0x30);
    lVar43 = uVar46 * 8;
    pTVar31 = (TReferenceControllerBase<1> *)&(param_1->MipsView).ArrayNum;
    local_1f0 = param_2;
    do {
      uVar45 = (uint)uVar46;
      local_1b0 = pTVar31;
      if (((((int)uVar45 < 0) || (*(int *)&pTVar31->_padding_ <= (int)uVar45)) ||
          (*(int *)((longlong)local_198 + 0x2d8) <= (int)uVar45)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Context.MipsView.IsValidIndex(MipIndex) && MipInfos.IsValidIndex(MipIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                              ,0x12e,L""), bVar20)) {
        pcVar10 = (code *)swi(3);
        iVar22 = (*pcVar10)();
        return iVar22;
      }
      uVar23 = 0;
      if ((int)uVar45 <
          *(int *)&((FSharedReferencer<1> *)&(param_1->MipsView).ArrayNum)->ReferenceController) {
        uVar23 = ~uVar45 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        iVar22 = (*pcVar10)();
        return iVar22;
      }
      lVar7 = *(longlong *)
               ((longlong)&((FParameters *)(param_1->MipsView).DataPtr)->_padding_ + lVar43);
      uVar23 = 0;
      if ((int)uVar45 < *(int *)((longlong)local_198 + 0x2d8)) {
        uVar23 = ~uVar45 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        iVar22 = (*pcVar10)();
        return iVar22;
      }
      FVar41 = local_198;
      if (*(ForElementType<FTextureMipInfo> *)((longlong)local_198 + 0x2d0) !=
          (ForElementType<FTextureMipInfo>)0x0) {
        FVar41 = *(ForElementType<FTextureMipInfo> *)((longlong)local_198 + 0x2d0);
      }
      pUVar40 = (UTexture2D *)(local_1c8 + (longlong)FVar41);
      local_170 = (void *)pUVar40->_padding_;
      local_1c0 = pUVar40;
      lVar29 = FBulkData::GetBulkDataSize((FBulkData *)(lVar7 + 0x20));
      if (lVar29 < 1) {
        pUVar30 = UCustomizableObjectSystem::GetInstance();
        if (((pUVar30->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Private",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                ,0x32c,L""), bVar20)) {
          pcVar10 = (code *)swi(3);
          iVar22 = (*pcVar10)();
          return iVar22;
        }
        if ((UCustomizableObjectSystemPrivate::EnableMutableProgressiveMipStreaming != 1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("UCustomizableObjectSystem::GetInstance()->GetPrivate()->EnableMutableProgressiveMipStreaming == 1"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                                ,0x13d,L""), bVar20)) {
          pcVar10 = (code *)swi(3);
          iVar22 = (*pcVar10)();
          return iVar22;
        }
        pTVar1 = &this->OperationData;
        if ((this->OperationData).Object == (FMutableImageOperationData *)0x0) {
          pTVar31 = ::operator_new(0x110);
          if (pTVar31 == (TReferenceControllerBase<1> *)0x0) {
            pTVar31 = (TReferenceControllerBase<1> *)0x0;
            pFVar47 = (FMutableImageOperationData *)&DAT_00000010;
            local_188 = pFVar8;
            FStack_180.ReferenceController = pTVar48;
          }
          else {
            pTVar31->SharedReferenceCount = (atomic<int>)0x1;
            pTVar31->WeakReferenceCount = (atomic<int>)0x1;
            pTVar31->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFMutableImageOperationData___00_SharedPointerInternals__6B_
            ;
            memset(pTVar31 + 1,0,0x100);
            pTVar31[1].SharedReferenceCount = (atomic<int>)0xffffffff;
            InitializeCriticalSectionAndSpinCount
                      ((LPCRITICAL_SECTION)&pTVar31[0xd].SharedReferenceCount,4000);
            pFVar47 = (FMutableImageOperationData *)(pTVar31 + 1);
            pTVar31[0x10]._padding_ = 0;
            if ((pFVar47 == (FMutableImageOperationData *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar20)) {
              pcVar10 = (code *)swi(3);
              iVar22 = (*pcVar10)();
              return iVar22;
            }
            LOCK();
            pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
            UNLOCK();
            FStack_180.ReferenceController = pTVar31;
            local_188 = pFVar47;
          }
          if (pTVar1 != (TSharedPtr<FMutableImageOperationData,1> *)&local_188) {
            pTVar1->Object = pFVar47;
            local_188 = (FMutableImageOperationData *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->OperationData).SharedReferenceCount,&FStack_180);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_180.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar31);
          pUVar40 = local_1c0;
        }
        pFVar32 = UTexture2D::GetPlatformData(pUVar39);
        iVar22 = (int)((longlong)(local_1a8->MipsView).DataPtr -
                       (longlong)(pFVar32->Mips).Array.AllocatorInstance.Data >> 3);
        if ((iVar22 < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("LODBias >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                                ,0x145,L""), bVar20)) {
          pcVar10 = (code *)swi(3);
          iVar22 = (*pcVar10)();
          return iVar22;
        }
        if ((local_1e4 != *(int *)&local_1b0->_padding_ + iVar22) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumMips == Context.MipsView.Num() + LODBias",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                                ,0x146,L""), bVar20)) {
          pcVar10 = (code *)swi(3);
          iVar22 = (*pcVar10)();
          return iVar22;
        }
        uVar46 = pUVar40->_padding_;
        if (uVar46 == 0) {
          uVar46 = FPixelFormatInfo::Get2DTextureMipSizeInBytes
                             (GPixelFormats + (byte)pUVar40->_padding_,
                              *(uint *)((longlong)&pUVar40->_padding_ + 4),(uint)pUVar40->_padding_,
                              0);
        }
        uVar45 = (uint)uVar46;
        if (local_1f4 < uVar46) {
          local_190 = (FTextureUpdateContext *)pUVar40->_padding_;
          local_1f4 = uVar45;
        }
        if ((pTVar1->Object == (FMutableImageOperationData *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar10 = (code *)swi(3);
          iVar22 = (*pcVar10)();
          return iVar22;
        }
        iVar22 = iVar22 + local_1f0;
        pFVar47 = pTVar1->Object;
        local_168 = local_170;
        uStack_15c = *(undefined4 *)((longlong)&local_1c0->_padding_ + 4);
        local_158 = (undefined4)local_1c0->_padding_;
        uStack_150 = (undefined1)local_1c0->_padding_;
        pFVar44 = (pFVar47->Levels).AllocatorInstance.Data;
        iStack_160 = iVar22;
        uStack_154 = uVar45;
        if (((pFVar44 <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 <
             pFVar44 + (longlong)(pFVar47->Levels).ArrayMax * 0x20)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          iVar22 = (*pcVar10)();
          return iVar22;
        }
        iVar25 = (pFVar47->Levels).ArrayNum;
        piVar2 = &(pFVar47->Levels).ArrayMax;
        if (iVar25 == *piVar2) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&(pFVar47->Levels).AllocatorInstance,piVar2);
        }
        (pFVar47->Levels).ArrayNum = iVar25 + 1;
        pFVar44 = (pFVar47->Levels).AllocatorInstance.Data;
        if (local_1d0 < iVar22) {
          iVar22 = local_1d0;
        }
        pFVar36 = pFVar44 + (longlong)iVar25 * 0x20;
        *(void **)pFVar36 = local_168;
        *(ulonglong *)(pFVar36 + 8) = CONCAT44(uStack_15c,iStack_160);
        pFVar44 = pFVar44 + (longlong)iVar25 * 0x20 + 0x10;
        *(ulonglong *)pFVar44 = CONCAT44(uStack_154,local_158);
        *(ulonglong *)(pFVar44 + 8) = CONCAT71(uStack_14f,uStack_150);
        pTVar31 = local_1b0;
        param_1 = local_1a8;
        local_1d0 = iVar22;
      }
      else {
        FBulkData::GetCopy((FBulkData *)(lVar7 + 0x20),&local_170,false);
        pTVar31 = (TReferenceControllerBase<1> *)&(param_1->MipsView).ArrayNum;
        local_1f0 = uVar45;
      }
      local_1c8 = local_1c8 + 0x30;
      local_1f0 = local_1f0 + 1;
      uVar46 = (ulonglong)local_1f0;
      lVar43 = lVar43 + 8;
    } while ((int)local_1f0 < (int)this->_padding_);
  }
  if ((this->OperationData).Object == (FMutableImageOperationData *)0x0) {
    if ((4 < (uint)this->_padding_) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)NextTickState <= (uint32)InState",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                            ,0xd1,L""), bVar20)) {
      pcVar10 = (code *)swi(3);
      iVar22 = (*pcVar10)();
      return iVar22;
    }
    this->_padding_ = 4;
    goto LAB_14ac20604;
  }
  pFVar8 = (this->OperationData).Object;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
  FHandle::operator=(&(pFVar8->RequestedImage).ImageID,&(this->ImageRef).ImageID);
  (pFVar8->RequestedImage).SurfaceId = (this->ImageRef).SurfaceId;
  (pFVar8->RequestedImage).LOD = (this->ImageRef).LOD;
  (pFVar8->RequestedImage).Component = (this->ImageRef).Component;
  (pFVar8->RequestedImage).Image = (this->ImageRef).Image;
  (pFVar8->RequestedImage).BaseMip = (this->ImageRef).BaseMip;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&(pFVar8->RequestedImage).ConstantImagesNeededToGenerate,
             &(this->ImageRef).ConstantImagesNeededToGenerate);
  if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  pFVar6 = (this->UpdateContext).Object;
  pFVar8 = (this->OperationData).Object;
  pTVar48 = (this->UpdateContext).SharedReferenceCount.ReferenceController;
  if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_120 = (pFVar8->UpdateContext).Object;
  pTStack_118 = (pFVar8->UpdateContext).SharedReferenceCount.ReferenceController;
  (pFVar8->UpdateContext).Object = pFVar6;
  (pFVar8->UpdateContext).SharedReferenceCount.ReferenceController = pTVar48;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_118);
  if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  pFVar8 = local_1b8;
  ((this->OperationData).Object)->MipsToSkip = local_1d0;
  pFVar9 = *(FThreadSafeCounter **)&(local_1b8->RequestedImage).ImageID;
  if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  ((this->OperationData).Object)->Counter = pFVar9;
  if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  local_98 = (pFVar8->RequestedImage).ImageID.WeakRegistry.Object;
  pFVar34 = (FMutableStreamRequest *)0x0;
  pFVar47 = (this->OperationData).Object;
  plStack_70 = (longlong *)0x0;
  if (local_98 !=
      (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
       *)0x0) {
    pFVar6 = (pFVar8->UpdateContext).Object;
    pFVar37 = (FMutableUpdateImageContext *)&(pFVar8->RequestedImage).SurfaceId;
    if (pFVar6 != (FMutableUpdateImageContext *)0x0) {
      pFVar37 = pFVar6;
    }
    (**(code **)(pFVar37->CapturedDescriptor).Data.AllocatorInstance.Data)(pFVar37,&local_88);
  }
  lVar43 = *(longlong *)&pFVar47->RescheduleCallback;
  uVar17 = *(undefined8 *)&(pFVar47->RescheduleCallback).field_0x8;
  uVar11 = *(undefined4 *)&(pFVar47->RescheduleCallback).field_0x10;
  uVar12 = *(undefined4 *)&(pFVar47->RescheduleCallback).field_0x14;
  uVar13 = *(undefined4 *)&(pFVar47->RescheduleCallback).field_0x18;
  uVar14 = *(undefined4 *)&(pFVar47->RescheduleCallback).field_0x1c;
  uVar15 = *(undefined8 *)&(pFVar47->RescheduleCallback).field_0x20;
  plVar16 = *(longlong **)&(pFVar47->RescheduleCallback).field_0x28;
  *(TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData> **
   )&pFVar47->RescheduleCallback = local_98;
  *(undefined8 *)&(pFVar47->RescheduleCallback).field_0x8 = uStack_90;
  *(ulonglong *)&(pFVar47->RescheduleCallback).field_0x10 =
       CONCAT44(local_88._4_4_,(undefined4)local_88);
  *(ulonglong *)&(pFVar47->RescheduleCallback).field_0x18 = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)&(pFVar47->RescheduleCallback).field_0x20 = local_78;
  *(longlong **)&(pFVar47->RescheduleCallback).field_0x28 = plStack_70;
  local_88._0_4_ = uVar11;
  local_88._4_4_ = uVar12;
  uStack_80 = uVar13;
  uStack_7c = uVar14;
  local_78 = uVar15;
  plStack_70 = plVar16;
  local_98 = (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
              *)lVar43;
  uStack_90 = uVar17;
  if (lVar43 != 0) {
    plVar38 = &local_88;
    if (plVar16 != (longlong *)0x0) {
      plVar38 = plVar16;
    }
    (**(code **)(*plVar38 + 0x10))();
  }
  if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  if ((((this->OperationData).Object)->Counter == (FThreadSafeCounter *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("OperationData->Counter",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                          ,0x161,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  if ((((this->OperationData).Object)->Counter->Counter != 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("OperationData->Counter->GetValue() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                          ,0x162,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  pFVar9 = ((this->OperationData).Object)->Counter;
  LOCK();
  pFVar9->Counter = pFVar9->Counter + 1;
  UNLOCK();
  if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  pFVar9 = ((this->OperationData).Object)->Counter;
  LOCK();
  pFVar9->Counter = pFVar9->Counter + 1;
  UNLOCK();
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId358,"Mutable_ImagePrefetch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
               ,0x166);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId358);
  }
  if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  pFVar8 = (this->OperationData).Object;
  if (((pFVar8->UpdateContext).Object == (FMutableUpdateImageContext *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  pTVar49 = &((pFVar8->UpdateContext).Object)->ModelStreamableBulkData;
  local_1a8 = (FTextureUpdateContext *)pTVar49;
  pFVar33 = ::operator_new(0x58);
  if (pFVar33 != (FMutableStreamRequest *)0x0) {
    pFVar34 = FMutableStreamRequest::FMutableStreamRequest(pFVar33,pTVar49);
  }
  pTVar4 = &this->PrefetchRequest;
  if (pTVar4 == (TUniquePtr<FMutableStreamRequest,TDefaultDelete<FMutableStreamRequest>_> *)local_e8
     ) {
    if (pFVar34 != (FMutableStreamRequest *)0x0) {
      pFVar44 = (pFVar34->BlockReadInfos).AllocatorInstance.Data;
      if (pFVar44 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar44);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar34->HeapMemory).SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<IAsyncReadFileHandle,1>,int>
                ((TSharedPtr<IAsyncReadFileHandle,1> *)
                 (pFVar34->OpenFileHandles).AllocatorInstance.Data,
                 (pFVar34->OpenFileHandles).ArrayNum);
      pFVar44 = (pFVar34->OpenFileHandles).AllocatorInstance.Data;
      if (pFVar44 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar44);
      }
      pFVar44 = (pFVar34->OpenFilesIds).AllocatorInstance.Data;
      if (pFVar44 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar44);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar34->ModelStreamableBulkData).SharedReferenceCount.ReferenceController);
      ::operator_delete(pFVar34,0x58);
    }
  }
  else {
    pFVar33 = pTVar4->Ptr;
    pTVar4->Ptr = pFVar34;
    if (pFVar33 != (FMutableStreamRequest *)0x0) {
      pFVar44 = (pFVar33->BlockReadInfos).AllocatorInstance.Data;
      if (pFVar44 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar44);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar33->HeapMemory).SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<IAsyncReadFileHandle,1>,int>
                ((TSharedPtr<IAsyncReadFileHandle,1> *)
                 (pFVar33->OpenFileHandles).AllocatorInstance.Data,
                 (pFVar33->OpenFileHandles).ArrayNum);
      pFVar44 = (pFVar33->OpenFileHandles).AllocatorInstance.Data;
      if (pFVar44 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar44);
      }
      pFVar44 = (pFVar33->OpenFilesIds).AllocatorInstance.Data;
      if (pFVar44 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar44);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar33->ModelStreamableBulkData).SharedReferenceCount.ReferenceController);
      ::operator_delete(pFVar33,0x58);
    }
  }
  uVar42 = 0;
  if (bPrefetchHighQualityMips != false) {
    local_1e0.Data = (FScriptContainerElement *)0x0;
    local_1d8 = 0;
    if (((this->UpdateContext).Object == (FMutableUpdateImageContext *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      iVar22 = (*pcVar10)();
      return iVar22;
    }
    pFVar6 = (this->UpdateContext).Object;
    this_00 = (pFVar6->Model).Object;
    local_1b0 = (pFVar6->Model).SharedReferenceCount.ReferenceController;
    if (local_1b0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1b0->SharedReferenceCount = (atomic<int>)((int)local_1b0->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 == (FModel *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Model",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                            ,0x172,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      iVar22 = (*pcVar10)();
      return iVar22;
    }
    if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      iVar22 = (*pcVar10)();
      return iVar22;
    }
    pFVar8 = (this->OperationData).Object;
    if ((pFVar8->Levels).ArrayNum != 0) {
      if ((pFVar8 == (FMutableImageOperationData *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        iVar22 = (*pcVar10)();
        return iVar22;
      }
      local_1b8 = (this->OperationData).Object;
      if (((local_1b8->Levels).ArrayNum < 1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar10 = (code *)swi(3);
        iVar22 = (*pcVar10)();
        return iVar22;
      }
      local_1c8 = (this->ImageRef).ConstantImagesNeededToGenerate.AllocatorInstance.Data;
      iVar22 = (this->ImageRef).ConstantImagesNeededToGenerate.ArrayNum;
      pFVar44 = local_1c8 + (longlong)iVar22 * 4;
      iVar25 = *(int *)((local_1b8->Levels).AllocatorInstance.Data + 8);
      while( true ) {
        if ((this->ImageRef).ConstantImagesNeededToGenerate.ArrayNum != iVar22) {
          local_1ec = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1ec)
          ;
        }
        uVar45 = (uint)uVar42;
        if (local_1c8 == pFVar44) break;
        local_1e4 = *(int *)local_1c8;
        if ((this_00 == (FModel *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar10 = (code *)swi(3);
          iVar22 = (*pcVar10)();
          return iVar22;
        }
        local_1e8 = UE::Mutable::Private::FModel::GetConstantImageRomId(this_00,local_1e4,iVar25);
        if (-1 < (int)local_1e8) {
          if ((this_00 == (FModel *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar10 = (code *)swi(3);
            iVar22 = (*pcVar10)();
            return iVar22;
          }
          bVar21 = UE::Mutable::Private::FModel::IsRomHighRes(this_00,local_1e8);
          if (bVar21) {
            if ((pTVar49->Object == (FModelStreamableBulkData *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              iVar22 = (*pcVar10)();
              return iVar22;
            }
            pFVar35 = TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
                      ::FindChecked((TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
                                     *)pTVar49->Object,local_1e8);
            if (pFVar35->IsPrefetched == 0) {
              pFVar35->IsPrefetched = 1;
              if ((this_00 == (FModel *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar21)) {
                pcVar10 = (code *)swi(3);
                iVar22 = (*pcVar10)();
                return iVar22;
              }
              uVar23 = UE::Mutable::Private::FModel::GetRomSize(this_00,local_1e8);
              if (uVar23 < uVar45) {
                uVar23 = uVar45;
              }
              uVar42 = (ulong64)uVar23;
              if (((local_1e0.Data <= (FScriptContainerElement *)&local_1e8) &&
                  ((FScriptContainerElement *)&local_1e8 <
                   local_1e0.Data + (longlong)local_1d8._4_4_ * 4)) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar21)) {
                pcVar10 = (code *)swi(3);
                iVar22 = (*pcVar10)();
                return iVar22;
              }
              iVar24 = (int)local_1d8;
              if ((int)local_1d8 == local_1d8._4_4_) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_1e0,(int *)((longlong)&local_1d8 + 4));
              }
              local_1d8 = CONCAT44(local_1d8._4_4_,iVar24 + 1);
              *(uint *)(local_1e0.Data + (longlong)iVar24 * 4) = local_1e8;
            }
          }
        }
        local_1c8 = local_1c8 + 4;
      }
      if (local_1f4 < uVar45) {
        if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar10 = (code *)swi(3);
          iVar22 = (*pcVar10)();
          return iVar22;
        }
        pFVar8 = (this->OperationData).Object;
        piVar2 = &(pFVar8->AllocatedMemory).ArrayNum;
        iVar22 = *piVar2;
        if (iVar22 < (int)uVar45) {
          iVar25 = UE::Core::Private::
                   ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>::ForAnyElementType>
                             (1,1,uVar45 - iVar22,&(pFVar8->AllocatedMemory).AllocatorInstance,
                              piVar2,&(pFVar8->AllocatedMemory).ArrayMax);
          memset((void *)((longlong)iVar25 + (pFVar8->AllocatedMemory).AllocatorInstance._padding_),
                 0,(longlong)(int)(uVar45 - iVar22));
        }
        else {
          if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar42);
          }
          if ((int)uVar45 < iVar22) {
            iVar22 = iVar22 - uVar45;
            if (iVar22 < 0) {
              bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 );
              if (bVar21) {
                pcVar10 = (code *)swi(3);
                iVar22 = (*pcVar10)();
                return iVar22;
              }
            }
            else if (iVar22 == 0) goto LAB_14ac2026c;
            _Dst = (void *)((longlong)(int)uVar45 +
                           (pFVar8->AllocatedMemory).AllocatorInstance._padding_);
            iVar25 = ((pFVar8->AllocatedMemory).ArrayNum - iVar22) - uVar45;
            if (iVar25 != 0) {
              memmove(_Dst,(void *)((longlong)iVar22 + (longlong)_Dst),(longlong)iVar25);
            }
            iVar22 = (pFVar8->AllocatedMemory).ArrayNum - iVar22;
            (pFVar8->AllocatedMemory).ArrayNum = iVar22;
            UE::Core::Private::
            ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>::ForAnyElementType>
                      (1,1,&(pFVar8->AllocatedMemory).AllocatorInstance,iVar22,
                       &(pFVar8->AllocatedMemory).ArrayMax);
          }
        }
LAB_14ac2026c:
        if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar10 = (code *)swi(3);
          iVar22 = (*pcVar10)();
          return iVar22;
        }
        local_190 = (FTextureUpdateContext *)
                    (((this->OperationData).Object)->AllocatedMemory).AllocatorInstance._padding_;
      }
    }
    pFVar18 = local_1a8;
    iVar22 = (int)local_1d8;
    pFVar44 = local_1e0.Data + (longlong)(int)local_1d8 * 4;
    FVar50.Data = local_1e0.Data;
    while( true ) {
      if ((int)local_1d8 != iVar22) {
        local_1eb[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1eb);
      }
      if (FVar50.Data == pFVar44) break;
      uVar45 = *(uint *)FVar50.Data;
      if ((pFVar18->Texture == (UTexture *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        iVar22 = (*pcVar10)();
        return iVar22;
      }
      TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
      ::FindChecked((TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
                     *)pFVar18->Texture,uVar45);
      local_1b8 = (FMutableImageOperationData *)(this->PrefetchRequest).Ptr;
      if ((this_00 == (FModel *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        iVar22 = (*pcVar10)();
        return iVar22;
      }
      uVar23 = UE::Mutable::Private::FModel::GetRomSize(this_00,uVar45);
      if (((int)uVar23 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        iVar22 = (*pcVar10)();
        return iVar22;
      }
      local_1a8 = local_190;
      uStack_19c = local_9c;
      uStack_1a0 = uVar23;
      if ((pFVar18->Texture == (UTexture *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        iVar22 = (*pcVar10)();
        return iVar22;
      }
      pFVar35 = TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
                ::FindChecked((TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
                               *)pFVar18->Texture,uVar45);
      local_b8._12_4_ = uStack_19c;
      local_b8.ArrayNum = uStack_1a0;
      local_b8.DataPtr = (uchar *)local_1a8;
      FMutableStreamRequest::AddBlock((FMutableStreamRequest *)local_1b8,pFVar35,Model,5,&local_b8);
      FVar50.Data = FVar50.Data + 4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b0);
    if (local_1e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data);
    }
  }
  FMutableStreamRequest::Stream((this->PrefetchRequest).Ptr);
  pTVar48 = (this->OperationData).SharedReferenceCount.ReferenceController;
  pFVar8 = (this->OperationData).Object;
  if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_01 == (FTaskBase *)0x0) {
    this_01 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_01,2,true);
    this_01->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FMutableTextureMipDataProvider::GetMips'::`70'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init(this_01,L"MutableImagePrefetchTask",Inherit,Inline,None);
    this_01[1]._padding_ = (longlong)pTVar48;
    this_01->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FMutableTextureMipDataProvider::GetMips'::`70'::<lambda_1>_>::_vftable_;
    pTVar48 = (TReferenceControllerBase<1> *)0x0;
    this_01[1]._padding_ = (longlong)pFVar8;
  }
  if (local_178 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::AddPrerequisites(this_01,local_178);
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
  if ((2 < (uint)this->_padding_) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(uint32)NextTickState <= (uint32)InState",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                          ,0xd1,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    iVar22 = (*pcVar10)();
    return iVar22;
  }
  this->_padding_ = 2;
  if (this_01 != (FTaskBase *)0x0) {
    LOCK();
    paVar3 = &this_01->RefCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  if (local_178 != (FTaskBase *)0x0) {
    LOCK();
    paVar3 = &local_178->RefCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if ((aVar5 == (atomic<unsigned_int>)0x1) && (local_178 != (FTaskBase *)0x0)) {
      (**(code **)local_178->_padding_)(local_178,1);
    }
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14ac20604:
  lVar43 = this->_padding_;
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_148.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.SubPathString.Data.AllocatorInstance.Data);
  }
  if (bVar51) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (int)lVar43;
}

// Init @ 14ac25ca0

void __thiscall
FMutableTextureMipDataProvider::Init
          (FMutableTextureMipDataProvider *this,FTextureUpdateContext *param_1,
          FTextureUpdateSyncOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((uint)this->_padding_ < 2) {
    this->_padding_ = 1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(uint32)NextTickState <= (uint32)InState",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                     ,0xd1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->_padding_ = 1;
  return;
}

// PollMips @ 14ac2b500

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMutableTextureMipDataProvider::PollMips
          (FMutableTextureMipDataProvider *this,FTextureUpdateSyncOptions *param_1)

{
  TSharedPtr<FMutableImageOperationData,1> *this_00;
  int iVar1;
  FImage *this_01;
  FMutableImageOperationData *pFVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uchar *_Src;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 local_res20 [8];
  int local_98;
  FSharedReferencer<1> local_80;
  TSharedPtr<FMutableImageOperationData,1> local_78;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId459,"Mutable_FMutableTextureMipDataProvider::PollMips",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
               ,0x1cb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId459);
  }
  this_00 = &this->OperationData;
  if (this->bRequestAborted != false) {
    bVar6 = false;
    local_78.Object = (FMutableImageOperationData *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (this_00 != &local_78) {
      this_00->Object = (FMutableImageOperationData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OperationData).SharedReferenceCount,&local_78.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if ((4 < (uint)this->_padding_) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(uint32)NextTickState <= (uint32)InState",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                           ,0xd1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    this->_padding_ = 4;
    goto LAB_14ac2bb04;
  }
  iVar11 = 0;
  if ((this_00->Object != (FMutableImageOperationData *)0x0) &&
     ((this_00->Object->Levels).ArrayNum != 0)) {
    if ((param_1->Counter->Counter != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SyncOptions.Counter->GetValue() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMipDataProvider.cpp"
                           ,0x1e4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((this_00->Object == (FMutableImageOperationData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_80.ReferenceController =
         (this_00->Object->Result).SharedReferenceCount.ReferenceController;
    this_01 = (this_00->Object->Result).Object;
    if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_80.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98 = 0;
    if (this_01 != (FImage *)0x0) {
      local_98 = UE::Mutable::Private::FImage::GetLODCount(this_01);
      if ((this_00->Object == (FMutableImageOperationData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = this_00->Object;
      if (((pFVar2->Levels).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar10 = (pFVar2->Levels).AllocatorInstance.Data;
      if ((this_01 == (FImage *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar7 = UE::Mutable::Private::FImage::GetSizeX(this_01);
      if ((uint)uVar7 == *(uint *)(pFVar10 + 0xc)) {
        if ((this_00->Object == (FMutableImageOperationData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = this_00->Object;
        if (((pFVar2->Levels).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar10 = (pFVar2->Levels).AllocatorInstance.Data;
        if ((this_01 == (FImage *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar7 = UE::Mutable::Private::FImage::GetSizeY(this_01);
        if ((uint)uVar7 == *(uint *)(pFVar10 + 0x10)) goto LAB_14ac2b856;
      }
      TSharedPtr<FMutableImageOperationData,1>::operator=(this_00,(FNullTag *)0x0);
      if ((4 < (uint)this->_padding_) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)NextTickState <= (uint32)InState",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                             ,0xd1,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      this->_padding_ = 4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.ReferenceController);
      bVar6 = false;
      goto LAB_14ac2bb04;
    }
LAB_14ac2b856:
    if ((this_00->Object == (FMutableImageOperationData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = this_00->Object;
    iVar1 = (pFVar2->Levels).ArrayNum;
    pFVar10 = (pFVar2->Levels).AllocatorInstance.Data;
    pFVar12 = pFVar10 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((pFVar2->Levels).ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FMutableMipUpdateLevel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar10 == pFVar12) break;
      _Dst = *(void **)pFVar10;
      if (iVar11 < local_98) {
        if ((this_01 == (FImage *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar8 = UE::Mutable::Private::FImage::GetLODDataSize(this_01,iVar11);
        if ((*(int *)(pFVar10 + 0x14) == 0) || (iVar8 == *(int *)(pFVar10 + 0x14))) {
          if ((this_01 == (FImage *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          _Src = UE::Mutable::Private::FImage::GetMipData(this_01,iVar11);
          memcpy(_Dst,_Src,(longlong)iVar8);
          iVar11 = iVar11 + 1;
          pFVar10 = pFVar10 + 0x20;
        }
        else {
          if (2 < (byte)LogMutable._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          }
          memset(_Dst,0,(longlong)*(int *)(pFVar10 + 0x14));
          iVar11 = iVar11 + 1;
          pFVar10 = pFVar10 + 0x20;
        }
      }
      else {
        if (2 < (byte)LogMutable._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
        }
        memset(_Dst,0,(longlong)*(int *)(pFVar10 + 0x14));
        iVar11 = iVar11 + 1;
        pFVar10 = pFVar10 + 0x20;
      }
    }
    local_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80,&local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    if (((this->OperationData).Object == (FMutableImageOperationData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->OperationData).Object;
    pTVar9 = &pFVar2->Result;
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar9 != (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)&local_58) {
      pTVar9->Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar2->Result).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
  }
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->OperationData != (TSharedPtr<FMutableImageOperationData,1> *)&local_48) {
    (this->OperationData).Object = (FMutableImageOperationData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OperationData).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  if ((5 < (uint)this->_padding_) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)NextTickState <= (uint32)InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                         ,0xd1,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  *(undefined4 *)&this->_padding_ = 5;
  bVar6 = true;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
LAB_14ac2bb04:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// PrintWarningAndAdvanceToCleanup @ 14ac2be80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMutableTextureMipDataProvider::PrintWarningAndAdvanceToCleanup
          (FMutableTextureMipDataProvider *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (2 < (byte)LogMutable._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  if (4 < (uint)this->_padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)NextTickState <= (uint32)InState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->_padding_ = 4;
  return;
}

