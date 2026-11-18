// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 16

// StaticClass @ 146bd09e0

UClass * __cdecl UImageSequenceProtocol::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol",
               &Z_Registration_Info_UClass_UImageSequenceProtocol.InnerSingleton,
               StaticRegisterNativesUImageSequenceProtocol,0xd8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol>,local_res8,
               UFrameGrabberProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol.InnerSingleton;
}

// UImageSequenceProtocol @ 146bd8410

UImageSequenceProtocol * __thiscall
UImageSequenceProtocol::UImageSequenceProtocol(UImageSequenceProtocol *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UImageSequenceProtocol__6B_;
  *(undefined8 *)&this->StringFormatMap = 0;
  *(undefined8 *)&(this->StringFormatMap).field_0x8 = 0;
  *(undefined8 *)&(this->StringFormatMap).field_0x20 = 0;
  *(undefined4 *)&(this->StringFormatMap).field_0x28 = 0;
  *(undefined4 *)&(this->StringFormatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringFormatMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StringFormatMap).field_0x34 = 0;
  *(undefined8 *)&(this->StringFormatMap).field_0x40 = 0;
  *(undefined4 *)&(this->StringFormatMap).field_0x48 = 0;
  *(undefined8 *)&this->FinalizeFence = 0;
  *(undefined8 *)&(this->FinalizeFence).field_0x8 = 0;
  return this;
}

// UImageSequenceProtocol @ 146bd8490

UImageSequenceProtocol * __thiscall
UImageSequenceProtocol::UImageSequenceProtocol
          (UImageSequenceProtocol *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->StringFormatMap = 0;
  *(undefined8 *)&(this->StringFormatMap).field_0x8 = 0;
  *(undefined8 *)&(this->StringFormatMap).field_0x20 = 0;
  this->_padding_ = (longlong)&___7UImageSequenceProtocol__6B_;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 3;
  *(undefined4 *)&(this->StringFormatMap).field_0x28 = 0;
  *(undefined4 *)&(this->StringFormatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringFormatMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StringFormatMap).field_0x34 = 0;
  *(undefined8 *)&(this->StringFormatMap).field_0x40 = 0;
  *(undefined4 *)&(this->StringFormatMap).field_0x48 = 0;
  *(undefined8 *)&this->FinalizeFence = 0;
  *(undefined8 *)&(this->FinalizeFence).field_0x8 = 0;
  this->Format = BMP;
  this->ImageWriteQueue = (IImageWriteQueue *)0x0;
  return this;
}

// ~UImageSequenceProtocol @ 146bd94d0

void __thiscall UImageSequenceProtocol::~UImageSequenceProtocol(UImageSequenceProtocol *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UImageSequenceProtocol__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FinalizeFence).field_0x8);
  *(undefined4 *)&(this->StringFormatMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StringFormatMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StringFormatMap);
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

// AddFormatMappingsImpl @ 146bdb260

void __thiscall
UImageSequenceProtocol::AddFormatMappingsImpl
          (UImageSequenceProtocol *this,
          TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          *param_1)

{
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_res10;
  FString *local_48;
  FStringFormatArg *local_40;
  FString local_38;
  FStringFormatArg local_28;
  
  FStringFormatArg::FStringFormatArg(&local_28,L"");
  ::FString::FString(&local_38,L"quality");
  local_48 = &local_38;
  local_40 = &local_28;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)param_1,&local_res10,(bool *)&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  return;
}

// BeginFinalizeImpl @ 146bdb8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UImageSequenceProtocol::BeginFinalizeImpl(UImageSequenceProtocol *this)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  longlong local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_20 = (longlong *)0x0;
  puVar1 = (undefined8 *)
           (**(code **)((longlong)*this->ImageWriteQueue + 0x10))
                     (this->ImageWriteQueue,local_58,local_48);
  if (&this->FinalizeFence != (TFuture<void> *)puVar1) {
    *(undefined8 *)&this->FinalizeFence = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->FinalizeFence).field_0x8,
               (FSharedReferencer<1> *)(puVar1 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  if (local_48[0] != 0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// FinalizeImpl @ 146bddf50

void __thiscall UImageSequenceProtocol::FinalizeImpl(UImageSequenceProtocol *this)

{
  longlong *plVar1;
  FFrameGrabber *pFVar2;
  code *pcVar3;
  FFeedbackContext *pFVar4;
  char cVar5;
  bool bVar6;
  FText *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  LARGE_INTEGER local_res8;
  FText local_a8;
  FText local_98;
  FSlowTask local_88;
  
  if (*(longlong *)&this->FinalizeFence != 0) {
    QueryPerformanceCounter(&local_res8);
    pFVar4 = GWarn;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"ImageSequenceProtocol",L"Finalizing",
                        L"Finalizing write operations...");
    FSlowTask::FSlowTask(&local_88,0.0,pFVar7,true,pFVar4);
    FSlowTask::Initialize(&local_88);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    FSlowTask::MakeDialogDelayed(&local_88,__real_3dcccccd,true,true);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = __real_415312d020000000;
    auVar10 = roundpd(auVar10,auVar10,1);
    cVar5 = (**(code **)(GWarn->_padding_ + 0x60))();
    while (cVar5 == '\0') {
      if (*(longlong *)&this->FinalizeFence != 0) {
        plVar1 = *(longlong **)(*(longlong *)&this->FinalizeFence + 0x60);
        if (((longlong)auVar10._0_8_ < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("WaitTime.GetTicks() >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\Event.h"
                               ,0x58,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = (longlong)auVar10._0_8_ / 10000;
        uVar8 = 0xffffffff;
        if ((longlong)uVar9 < 0xffffffff) {
          uVar8 = uVar9;
        }
        uVar9 = 0;
        if (0 < (longlong)uVar8) {
          uVar9 = uVar8 & 0xffffffff;
        }
        cVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar9,0);
        if (cVar5 != '\0') break;
      }
      pFVar7 = FText::FText(&local_98);
      FSlowTask::EnterProgressFrame(&local_88,0.0,pFVar7);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      cVar5 = (**(code **)(GWarn->_padding_ + 0x60))();
    }
    FSlowTask::Destroy(&local_88);
    if (local_88.FrameMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.FrameMessage.TextData.Reference + 0x10))();
    }
    if (local_88.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.DefaultMessage.TextData.Reference + 0x10))();
    }
  }
  plVar1 = &this->_padding_;
  if ((FFrameGrabber *)this->_padding_ != (FFrameGrabber *)0x0) {
    FFrameGrabber::Shutdown((FFrameGrabber *)this->_padding_);
    pFVar2 = (FFrameGrabber *)*plVar1;
    if (pFVar2 != (FFrameGrabber *)0x0) {
      *plVar1 = 0;
      TDefaultDelete<FFrameGrabber>::operator()((TDefaultDelete<FFrameGrabber> *)plVar1,pFVar2);
    }
  }
  return;
}

// GetCompressionQuality @ 146bdffc0

int __thiscall UImageSequenceProtocol::GetCompressionQuality(UImageSequenceProtocol *this)

{
  return 0;
}

// GetFramePayload @ 146be00a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedPtr<IFramePayload,1> * __thiscall
UImageSequenceProtocol::GetFramePayload
          (UImageSequenceProtocol *this,TSharedPtr<IFramePayload,1> *__return_storage_ptr__,
          FFrameMetrics *param_1)

{
  FString *pFVar1;
  EImageFormat EVar2;
  FScriptContainerElement *pFVar3;
  FImageFrameData *pFVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  TRawPtrProxy<FImageFrameData> local_res8;
  FString local_58;
  TSharedRef<FImageFrameData,1> local_48;
  void *local_38 [2];
  
  pFVar4 = ::operator_new(0x18);
  local_res8.Object = (FImageFrameData *)0x0;
  if (pFVar4 != (FImageFrameData *)0x0) {
    (pFVar4->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->_padding_ = (longlong)&___7FImageFrameData__6B_;
    (pFVar4->Filename).Data.ArrayNum = 0;
    (pFVar4->Filename).Data.ArrayMax = 0;
    local_res8.Object = pFVar4;
  }
  TSharedRef<FImageFrameData,1>::TSharedRef<FImageFrameData,1><FImageFrameData>
            (&local_48,&local_res8);
  EVar2 = this->Format;
  pwVar6 = L"";
  pwVar7 = L"";
  if (EVar2 == PNG) {
    pwVar7 = L".png";
  }
  else if (EVar2 == JPEG) {
    pwVar7 = L".jpg";
  }
  else if (EVar2 == BMP) {
    pwVar7 = L".bmp";
  }
  else if (EVar2 == EXR) {
    pwVar7 = L".exr";
  }
  puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 800))(this,local_38,param_1,pwVar7,0);
  pFVar1 = &(local_48.Object)->Filename;
  if (pFVar1 != (FString *)puVar5) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar5;
    *puVar5 = 0;
    ((local_48.Object)->Filename).Data.ArrayNum = *(int *)(puVar5 + 1);
    ((local_48.Object)->Filename).Data.ArrayMax = *(int *)((longlong)puVar5 + 0xc);
    puVar5[1] = 0;
  }
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  UMovieSceneCaptureProtocolBase::EnsureFileWritableImpl
            ((UMovieSceneCaptureProtocolBase *)this,pFVar1);
  if (((local_48.Object)->Filename).Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl(&local_58,pwVar6,&this->StringFormatMap);
  pFVar1 = &(local_48.Object)->Filename;
  if (pFVar1 != &local_58) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_48.Object)->Filename).Data.ArrayNum = local_58.Data.ArrayNum;
    ((local_48.Object)->Filename).Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  __return_storage_ptr__->Object = (IFramePayload *)local_48.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146be05a0

UClass * __cdecl UImageSequenceProtocol::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol",
               &Z_Registration_Info_UClass_UImageSequenceProtocol.InnerSingleton,
               StaticRegisterNativesUImageSequenceProtocol,0xd8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol>,local_res8,
               UFrameGrabberProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol.InnerSingleton;
}

// HasFinishedProcessingImpl @ 146be1680

bool __thiscall UImageSequenceProtocol::HasFinishedProcessingImpl(UImageSequenceProtocol *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x20);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    if ((*(int *)(lVar1 + 0x60) == 0) && (*(int *)(lVar1 + 0x18) == 0)) {
      LeaveCriticalSection(lpCriticalSection);
      if ((*(longlong *)&this->FinalizeFence != 0) &&
         (plVar2 = *(longlong **)(*(longlong *)&this->FinalizeFence + 0x60),
         cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,0,0), cVar3 == '\0')) {
        return false;
      }
      return true;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return false;
}

// OnLoadConfigImpl @ 146be3f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UImageSequenceProtocol::OnLoadConfigImpl
          (UImageSequenceProtocol *this,FMovieSceneCaptureSettings *param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  longlong lVar2;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->OutputFormat).Data.ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->OutputFormat).Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  iVar1 = ::FString::Find(&local_18,L"{frame}",7,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    iVar1 = ::FString::Find(&local_18,L"{shot_frame}",0xc,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      ::FString::AppendChars(&local_18,L".{frame}",8);
      iVar1 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar1 = 0;
      }
      ::FString::AssignRange
                (&param_1->OutputFormat,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
      if (3 < (byte)LogMovieSceneCapture._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneCapture);
      }
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnReleaseConfigImpl @ 146be48b0

void __thiscall
UImageSequenceProtocol::OnReleaseConfigImpl
          (UImageSequenceProtocol *this,FMovieSceneCaptureSettings *param_1)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  this_00 = &param_1->OutputFormat;
  pFVar2 = ::FString::Replace(this_00,&local_18,L".{frame}",L"",IgnoreCase);
  if (this_00 != pFVar2) {
    pFVar1 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_00->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->OutputFormat).Data.ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->OutputFormat).Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ProcessFrame @ 146be52a0

void __thiscall
UImageSequenceProtocol::ProcessFrame(UImageSequenceProtocol *this,FCapturedFrameData *param_1)

{
  EImageFormat EVar1;
  FImagePixelData *pFVar2;
  IFramePayload *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FImageWriteTask *pFVar8;
  TImagePixelData<FColor> *this_00;
  FImageWriteTask *pFVar9;
  FImageWriteTask *this_01;
  ForAnyElementType FVar10;
  int iVar11;
  FImageWriteTask *local_res8;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TArray<FColor,TSizedDefaultAllocator<64>_> local_38;
  
  if (((param_1->ColorBuffer).ArrayNum <
       (param_1->BufferSize).field0_0x0._s_0.Y * (param_1->BufferSize).field0_0x0._s_0.X) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Frame.ColorBuffer.Num() >= Frame.BufferSize.X * Frame.BufferSize.Y",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\ImageSequenceProtocol.cpp"
                         ,0x7d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar8 = ::operator_new(0x80);
  pFVar9 = (FImageWriteTask *)0x0;
  this_01 = pFVar9;
  if (pFVar8 != (FImageWriteTask *)0x0) {
    (pFVar8->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined ***)pFVar8 = &___7FImageWriteTask__6B_;
    (pFVar8->Filename).Data.ArrayNum = 0;
    (pFVar8->Filename).Data.ArrayMax = 0;
    pFVar8->Format = BMP;
    pFVar8->CompressionQuality = 0;
    pFVar8->bOverwriteFile = true;
    *(undefined8 *)&pFVar8->OnCompleted = 0;
    *(undefined8 *)&(pFVar8->OnCompleted).field_0x28 = 0;
    (pFVar8->PixelData).Ptr = (FImagePixelData *)0x0;
    (pFVar8->PixelPreProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->PixelPreProcessors).ArrayNum = 0;
    (pFVar8->PixelPreProcessors).ArrayMax = 0;
    this_01 = pFVar8;
  }
  FVar10.Data = (param_1->ColorBuffer).AllocatorInstance.Data;
  (param_1->ColorBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = (long64)(param_1->ColorBuffer).ArrayNum;
  local_38.ArrayMax = (long64)(param_1->ColorBuffer).ArrayMax;
  (param_1->ColorBuffer).ArrayNum = 0;
  (param_1->ColorBuffer).ArrayMax = 0;
  local_38.AllocatorInstance.Data = FVar10.Data;
  this_00 = ::operator_new(0x40);
  if (this_00 != (TImagePixelData<FColor> *)0x0) {
    pFVar9 = (FImageWriteTask *)
             TImagePixelData<FColor>::TImagePixelData<FColor>
                       (this_00,&param_1->BufferSize,&local_38);
    FVar10.Data = local_38.AllocatorInstance.Data;
  }
  pFVar2 = (this_01->PixelData).Ptr;
  (this_01->PixelData).Ptr = (FImagePixelData *)pFVar9;
  if (pFVar2 != (FImagePixelData *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  if (this->Format == PNG) {
    FImageWriteTask::AddPreProcessorToSetAlphaOpaque(this_01);
  }
  EVar1 = this->Format;
  if ((((EVar1 == PNG) || (EVar1 == JPEG)) || (EVar1 == BMP)) || (EVar1 == EXR)) {
    this_01->Format = EVar1;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\ImageSequenceProtocol.cpp"
                       ,0x93,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (**(code **)(this->_padding_ + 0x338))(this);
  this_01->CompressionQuality = iVar7;
  pIVar3 = (param_1->Payload).Object;
  iVar7 = *(int *)(pIVar3 + 2);
  iVar11 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange(&this_01->Filename,(wchar_t *)pIVar3[1],iVar11);
  local_res8 = this_01;
  (**(code **)((longlong)*this->ImageWriteQueue + 8))(this->ImageWriteQueue,local_48,&local_res8,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (local_res8 != (FImageWriteTask *)0x0) {
    (*(code *)**(undefined8 **)local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Payload).SharedReferenceCount.ReferenceController);
  pFVar4 = (param_1->ColorBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// SetupImpl @ 146be7e70

bool __thiscall UImageSequenceProtocol::SetupImpl(UImageSequenceProtocol *this)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  IImageWriteQueue *pIVar5;
  FName local_res8;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  FModuleManager::Get();
  pFVar3 = ::FName::FName(&local_res8,"ImageWriteQueue");
  FVar1 = *pFVar3;
  this_00 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  pIVar5 = (IImageWriteQueue *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4);
  this->ImageWriteQueue = pIVar5;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->FinalizeFence != (TFuture<void> *)&local_18) {
    *(undefined8 *)&this->FinalizeFence = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->FinalizeFence).field_0x8,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  bVar2 = UFrameGrabberProtocol::SetupImpl((UFrameGrabberProtocol *)this);
  return bVar2;
}

// StaticRegisterNativesUImageSequenceProtocol @ 146be8ce0

void __cdecl UImageSequenceProtocol::StaticRegisterNativesUImageSequenceProtocol(void)

{
  return;
}

