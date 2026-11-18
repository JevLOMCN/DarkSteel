// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 11

// StaticClass @ 146bd3b70

UClass * __cdecl UVideoCaptureProtocol::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVideoCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"VideoCaptureProtocol",
               &Z_Registration_Info_UClass_UVideoCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUVideoCaptureProtocol,0x80,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UVideoCaptureProtocol>,
               InternalVTableHelperCtorCaller<UVideoCaptureProtocol>,local_res8,
               UFrameGrabberProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVideoCaptureProtocol.InnerSingleton;
}

// UVideoCaptureProtocol @ 146bd8fb0

UVideoCaptureProtocol * __thiscall
UVideoCaptureProtocol::UVideoCaptureProtocol(UVideoCaptureProtocol *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UVideoCaptureProtocol__6B_;
  (this->AVIWriters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AVIWriters).ArrayNum = 0;
  (this->AVIWriters).ArrayMax = 0;
  return this;
}

// ~UVideoCaptureProtocol @ 146bd9990

void __thiscall UVideoCaptureProtocol::~UVideoCaptureProtocol(UVideoCaptureProtocol *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVideoCaptureProtocol__6B_;
  DestructItems<TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter>_>,int>
            ((TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter>_> *)
             (this->AVIWriters).AllocatorInstance.Data,(this->AVIWriters).ArrayNum);
  pFVar1 = (this->AVIWriters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UFrameGrabberProtocol__6B_;
  TDefaultDelete<FFrameGrabber>::operator()
            ((TDefaultDelete<FFrameGrabber> *)&this->_padding_,(FFrameGrabber *)this->_padding_);
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CanWriteToFileImpl @ 146bdbd30

bool __thiscall
UVideoCaptureProtocol::CanWriteToFileImpl(UVideoCaptureProtocol *this,wchar_t *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  IFileManager *pIVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [16];
  
  if (!param_2) {
    pFVar7 = (this->AVIWriters).AllocatorInstance.Data;
    iVar2 = (this->AVIWriters).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->AVIWriters).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter>_>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar7 == pFVar1) {
        pIVar4 = IFileManager::Get();
        lVar5 = (**(code **)((longlong)*pIVar4 + 0x110))(pIVar4,param_1);
        return lVar5 == -1;
      }
      if (*(int *)(*(longlong *)pFVar7 + 0x20) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)(*(longlong *)pFVar7 + 0x18);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar6,param_1);
      if (iVar3 == 0) break;
      pFVar7 = pFVar7 + 8;
    }
  }
  return true;
}

// ConditionallyCreateWriter @ 146bdc620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UVideoCaptureProtocol::ConditionallyCreateWriter(UVideoCaptureProtocol *this)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  FAVIWriter *pFVar11;
  uint uVar12;
  float local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FString local_a8;
  undefined8 local_98;
  undefined8 local_90;
  FString local_88;
  FAVIWriterOptions local_78;
  
  local_98 = 0;
  local_90 = 0;
  (**(code **)(this->_padding_ + 800))(this,&local_a8,&local_98,Extension,0);
  iVar5 = (this->AVIWriters).ArrayNum;
  if (iVar5 != 0) {
    uVar4 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar4 = ~(iVar5 - 1U) >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar8 = *(longlong *)
             ((this->AVIWriters).AllocatorInstance.Data +
             (longlong)(this->AVIWriters).ArrayNum * 8 + -8);
    iVar5 = *(int *)(lVar8 + 0x20);
    if (local_a8.Data.ArrayNum == iVar5) {
      if (local_a8.Data.ArrayNum < 2) goto LAB_146bdc9bd;
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_a8.Data.AllocatorInstance.Data,*(wchar_t **)(lVar8 + 0x18)
                        );
      bVar3 = iVar5 == 0;
    }
    else {
      bVar3 = local_a8.Data.ArrayNum + iVar5 == 1;
    }
    if (bVar3) goto LAB_146bdc9bd;
  }
  UMovieSceneCaptureProtocolBase::EnsureFileWritableImpl
            ((UMovieSceneCaptureProtocolBase *)this,&local_a8);
  pTVar6 = &FPaths::VideoCaptureDir(&local_88)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_78,pTVar6,
             0xd - (uint)(pTVar6->ArrayNum != 0));
  ::FString::PathAppend(&local_78.OutputFilename,L"Capture.avi",0xb);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_78.CaptureFramerateNumerator = 0x1e;
  local_78.CaptureFramerateDenominator = 1;
  local_78.CompressionQuality.bIsSet = false;
  local_78.CodecName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CodecName.Data.ArrayNum = 0;
  local_78.CodecName.Data.ArrayMax = 0;
  local_78.bSynchronizeFrames = false;
  local_78.Width = 0;
  local_78.Height = 0;
  if (local_78.OutputFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.OutputFilename.Data.AllocatorInstance.Data);
  }
  local_78.OutputFilename.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  local_78.OutputFilename.Data.ArrayNum = local_a8.Data.ArrayNum;
  local_78.OutputFilename.Data.ArrayMax = local_a8.Data.ArrayMax;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar7 = (int *)(**(code **)(*(longlong *)this->_padding_ + 0x10))
                            ((longlong *)this->_padding_,local_res10);
  local_78.CaptureFramerateNumerator = *piVar7;
  lVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x10))
                    ((longlong *)this->_padding_,local_res18);
  local_78.CaptureFramerateDenominator = *(int *)(lVar8 + 4);
  plVar9 = (longlong *)(**(code **)(*(longlong *)this->_padding_ + 0x18))();
  local_78.bSynchronizeFrames = (bool)(**(code **)(*plVar9 + 0x18))(plVar9);
  if (((char)this->_padding_ == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_78.Width = (uint)this->_padding_;
  if (((char)this->_padding_ == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_78.Height = *(uint *)((longlong)&this->_padding_ + 4);
  if (this->bUseCompression != false) {
    local_78.CompressionQuality.TypedValue = this->CompressionQuality * __real_3c23d70a;
    local_78.CompressionQuality.bIsSet = true;
    local_res8[0] = 100.0;
    pwVar10 = FCommandLine::Get();
    bVar3 = FParse::Value(pwVar10,L"-MovieQuality=",local_res8);
    fVar2 = __real_3f800000;
    if (bVar3) {
      local_78.CompressionQuality.TypedValue = local_res8[0];
      if (__real_42c80000 <= local_res8[0]) {
        local_78.CompressionQuality.TypedValue = __real_42c80000;
      }
      if (local_78.CompressionQuality.TypedValue <= __real_3f800000) {
        local_78.CompressionQuality.TypedValue = __real_3f800000;
      }
      local_78.CompressionQuality.TypedValue =
           local_78.CompressionQuality.TypedValue * __real_3c23d70a;
    }
    else if ((local_78.CompressionQuality.bIsSet == false) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (fVar2 <= local_78.CompressionQuality.TypedValue) {
      local_78.CompressionQuality.TypedValue = fVar2;
    }
    local_78.CompressionQuality.bIsSet = true;
    if (local_78.CompressionQuality.TypedValue <= 0.0) {
      local_78.CompressionQuality.TypedValue = 0.0;
    }
  }
  pFVar11 = FAVIWriter::CreateInstance(&local_78);
  piVar7 = &(this->AVIWriters).ArrayMax;
  iVar5 = (this->AVIWriters).ArrayNum;
  if (iVar5 == *piVar7) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->AVIWriters).AllocatorInstance,piVar7);
  }
  (this->AVIWriters).ArrayNum = iVar5 + 1;
  *(FAVIWriter **)((this->AVIWriters).AllocatorInstance.Data + (longlong)iVar5 * 8) = pFVar11;
  iVar5 = (this->AVIWriters).ArrayNum;
  uVar12 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar12 < iVar5) {
    uVar4 = ~uVar12 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(**(longlong **)
                 ((this->AVIWriters).AllocatorInstance.Data +
                 (longlong)(this->AVIWriters).ArrayNum * 8 + -8) + 8))();
  if (local_78.CodecName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.CodecName.Data.AllocatorInstance.Data);
  }
  if (local_78.OutputFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.OutputFilename.Data.AllocatorInstance.Data);
  }
LAB_146bdc9bd:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// FinalizeImpl @ 146bde330

void __thiscall UVideoCaptureProtocol::FinalizeImpl(UVideoCaptureProtocol *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FFrameGrabber *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->AVIWriters).AllocatorInstance.Data;
  iVar3 = (this->AVIWriters).ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AVIWriters).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    if (*(int *)(*(longlong *)pFVar5 + 8) != 0) {
      (**(code **)(**(longlong **)pFVar5 + 0x10))();
    }
    pFVar5 = pFVar5 + 8;
  }
  DestructItems<TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter>_>,int>
            ((TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter>_> *)
             (this->AVIWriters).AllocatorInstance.Data,(this->AVIWriters).ArrayNum);
  piVar1 = &(this->AVIWriters).ArrayMax;
  (this->AVIWriters).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AVIWriters).AllocatorInstance,0,piVar1);
  }
  if ((FFrameGrabber *)this->_padding_ != (FFrameGrabber *)0x0) {
    FFrameGrabber::Shutdown((FFrameGrabber *)this->_padding_);
    pFVar4 = (FFrameGrabber *)this->_padding_;
    if (pFVar4 != (FFrameGrabber *)0x0) {
      this->_padding_ = 0;
      TDefaultDelete<FFrameGrabber>::operator()
                ((TDefaultDelete<FFrameGrabber> *)&this->_padding_,pFVar4);
    }
  }
  return;
}

// GetFramePayload @ 146be0260

TSharedPtr<IFramePayload,1> * __thiscall
UVideoCaptureProtocol::GetFramePayload
          (UVideoCaptureProtocol *this,TSharedPtr<IFramePayload,1> *__return_storage_ptr__,
          FFrameMetrics *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  FVideoFrameData *pFVar4;
  TRawPtrProxy<FVideoFrameData> local_res8;
  TSharedRef<FVideoFrameData,1> local_18;
  
  ConditionallyCreateWriter(this);
  pFVar4 = ::operator_new(0x20);
  local_res8.Object = (FVideoFrameData *)0x0;
  if (pFVar4 != (FVideoFrameData *)0x0) {
    (pFVar4->Metrics).TotalElapsedTime = 0.0;
    (pFVar4->Metrics).FrameDelta = 0.0;
    pFVar4->_padding_ = (longlong)&___7FVideoFrameData__6B_;
    (pFVar4->Metrics).FrameNumber = 0;
    (pFVar4->Metrics).NumDroppedFrames = 0;
    local_res8.Object = pFVar4;
  }
  TSharedRef<FVideoFrameData,1>::TSharedRef<FVideoFrameData,1><FVideoFrameData>
            (&local_18,&local_res8);
  fVar1 = param_1->FrameDelta;
  iVar2 = param_1->FrameNumber;
  iVar3 = param_1->NumDroppedFrames;
  ((local_18.Object)->Metrics).TotalElapsedTime = param_1->TotalElapsedTime;
  ((local_18.Object)->Metrics).FrameDelta = fVar1;
  ((local_18.Object)->Metrics).FrameNumber = iVar2;
  ((local_18.Object)->Metrics).NumDroppedFrames = iVar3;
  (local_18.Object)->WriterIndex = (this->AVIWriters).ArrayNum + -1;
  __return_storage_ptr__->Object = (IFramePayload *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146be1170

UClass * __cdecl UVideoCaptureProtocol::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVideoCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"VideoCaptureProtocol",
               &Z_Registration_Info_UClass_UVideoCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUVideoCaptureProtocol,0x80,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UVideoCaptureProtocol>,
               InternalVTableHelperCtorCaller<UVideoCaptureProtocol>,local_res8,
               UFrameGrabberProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVideoCaptureProtocol.InnerSingleton;
}

// ProcessFrame @ 146be54b0

void __thiscall
UVideoCaptureProtocol::ProcessFrame(UVideoCaptureProtocol *this,FCapturedFrameData *param_1)

{
  IFramePayload *pIVar1;
  longlong *plVar2;
  FAVIWriter *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_28;
  
  pIVar1 = (param_1->Payload).Object;
  uVar7 = *(uint *)(pIVar1 + 3);
  if (-1 < (int)uVar7) {
    uVar6 = 0;
    if ((int)uVar7 < (this->AVIWriters).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
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
    plVar2 = *(longlong **)((this->AVIWriters).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined4 *)&pIVar1[2].field_0x4);
    uVar6 = 0;
    if ((int)uVar7 < (this->AVIWriters).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
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
    this_00 = *(FAVIWriter **)((this->AVIWriters).AllocatorInstance.Data + (longlong)(int)uVar7 * 8)
    ;
    local_28.AllocatorInstance.Data = (param_1->ColorBuffer).AllocatorInstance.Data;
    (param_1->ColorBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = (param_1->ColorBuffer).ArrayNum;
    local_28.ArrayMax = (param_1->ColorBuffer).ArrayMax;
    (param_1->ColorBuffer).ArrayNum = 0;
    (param_1->ColorBuffer).ArrayMax = 0;
    FAVIWriter::Update(this_00,(double)*(float *)(pIVar1 + 1),&local_28);
    uVar7 = 0;
    if (0 < *(int *)(pIVar1 + 3)) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->AVIWriters).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->AVIWriters).AllocatorInstance.Data;
        if (*(int *)(*(longlong *)(pFVar3 + lVar8) + 8) != 0) {
          (**(code **)(**(longlong **)(pFVar3 + lVar8) + 0x10))();
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < *(int *)(pIVar1 + 3));
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Payload).SharedReferenceCount.ReferenceController);
  pFVar3 = (param_1->ColorBuffer).AllocatorInstance.Data;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar3);
  return;
}

// SetupImpl @ 146be8460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall UVideoCaptureProtocol::SetupImpl(UVideoCaptureProtocol *this)

{
  longlong *this_00;
  uint uVar1;
  TIntPoint<int> TVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  FFrameGrabber *pFVar7;
  TSharedRef<FSceneViewport,1> *pTVar8;
  FFrameGrabber *pFVar9;
  TSharedRef<FSceneViewport,1> TStack_28;
  
  this_00 = &this->_padding_;
  pFVar7 = ::operator_new(0x88);
  pFVar9 = (FFrameGrabber *)0x0;
  if (pFVar7 != (FFrameGrabber *)0x0) {
    uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
    lVar4 = this->_padding_;
    if ((char)this->_padding_ == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    TVar2.field0_0x0 = (TIntPoint<int>_u_0)this->_padding_;
    if ((char)this->_padding_ == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pTVar8 = TSharedPtr<FSceneViewport,1>::ToSharedRef
                       ((TSharedPtr<FSceneViewport,1> *)&this->_padding_,&TStack_28);
    pFVar9 = FFrameGrabber::FFrameGrabber(pFVar7,pTVar8,TVar2,(EPixelFormat)lVar4,uVar1);
  }
  pFVar7 = (FFrameGrabber *)*this_00;
  if (pFVar7 != pFVar9) {
    *this_00 = (longlong)pFVar9;
    TDefaultDelete<FFrameGrabber>::operator()((TDefaultDelete<FFrameGrabber> *)this_00,pFVar7);
  }
  FFrameGrabber::StartCapturingFrames((FFrameGrabber *)*this_00);
  return true;
}

// StaticRegisterNativesUVideoCaptureProtocol @ 146be8ed0

void __cdecl UVideoCaptureProtocol::StaticRegisterNativesUVideoCaptureProtocol(void)

{
  return;
}

