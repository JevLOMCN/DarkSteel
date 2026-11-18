// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 13

// StaticClass @ 146bd0710

UClass * __cdecl UFrameGrabberProtocol::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFrameGrabberProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"FrameGrabberProtocol",
               &Z_Registration_Info_UClass_UFrameGrabberProtocol.InnerSingleton,
               StaticRegisterNativesUFrameGrabberProtocol,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UFrameGrabberProtocol>,
               InternalVTableHelperCtorCaller<UFrameGrabberProtocol>,local_res8,
               UMovieSceneImageCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFrameGrabberProtocol.InnerSingleton;
}

// UFrameGrabberProtocol @ 146bd83d0

UFrameGrabberProtocol * __thiscall
UFrameGrabberProtocol::UFrameGrabberProtocol(UFrameGrabberProtocol *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UFrameGrabberProtocol__6B_;
  (this->FrameGrabber).Ptr = (FFrameGrabber *)0x0;
  return this;
}

// ~UFrameGrabberProtocol @ 146bd9480

void __thiscall UFrameGrabberProtocol::~UFrameGrabberProtocol(UFrameGrabberProtocol *this)

{
  this->_padding_ = (longlong)&___7UFrameGrabberProtocol__6B_;
  TDefaultDelete<FFrameGrabber>::operator()
            ((TDefaultDelete<FFrameGrabber> *)&this->FrameGrabber,(this->FrameGrabber).Ptr);
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginFinalizeImpl @ 146bdb860

void __thiscall UFrameGrabberProtocol::BeginFinalizeImpl(UFrameGrabberProtocol *this)

{
  FFrameGrabber *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->FrameGrabber).Ptr;
  if (pFVar1->State == Active) {
    pFVar1->State = PendingShutdown;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7379574295015456464>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\FrameGrabber.cpp"
                       ,0x130,"State == EFrameGrabberState::Active");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// CaptureFrameImpl @ 146bdbf80

void __thiscall
UFrameGrabberProtocol::CaptureFrameImpl(UFrameGrabberProtocol *this,FFrameMetrics *param_1)

{
  FFrameGrabber *this_00;
  TSharedPtr<IFramePayload,1> *pTVar1;
  undefined1 local_18 [16];
  
  this_00 = (this->FrameGrabber).Ptr;
  if (this_00 != (FFrameGrabber *)0x0) {
    pTVar1 = (TSharedPtr<IFramePayload,1> *)
             (**(code **)(this->_padding_ + 0x328))(this,local_18,param_1);
    FFrameGrabber::CaptureThisFrame(this_00,pTVar1);
  }
  return;
}

// FinalizeImpl @ 146bddf10

void __thiscall UFrameGrabberProtocol::FinalizeImpl(UFrameGrabberProtocol *this)

{
  TUniquePtr<FFrameGrabber,TDefaultDelete<FFrameGrabber>_> *this_00;
  FFrameGrabber *pFVar1;
  
  this_00 = &this->FrameGrabber;
  pFVar1 = (this->FrameGrabber).Ptr;
  if (pFVar1 != (FFrameGrabber *)0x0) {
    FFrameGrabber::Shutdown(pFVar1);
    pFVar1 = this_00->Ptr;
    if (pFVar1 != (FFrameGrabber *)0x0) {
      this_00->Ptr = (FFrameGrabber *)0x0;
      TDefaultDelete<FFrameGrabber>::operator()((TDefaultDelete<FFrameGrabber> *)this_00,pFVar1);
      return;
    }
  }
  return;
}

// GetFramePayload @ 146be0060

TSharedPtr<IFramePayload,1> * __thiscall
UFrameGrabberProtocol::GetFramePayload
          (UFrameGrabberProtocol *this,TSharedPtr<IFramePayload,1> *__return_storage_ptr__,
          FFrameMetrics *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Public\\Protocols\\FrameGrabberProtocol.h"
             ,0x36,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (IFramePayload *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146be04e0

UClass * __cdecl UFrameGrabberProtocol::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFrameGrabberProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"FrameGrabberProtocol",
               &Z_Registration_Info_UClass_UFrameGrabberProtocol.InnerSingleton,
               StaticRegisterNativesUFrameGrabberProtocol,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UFrameGrabberProtocol>,
               InternalVTableHelperCtorCaller<UFrameGrabberProtocol>,local_res8,
               UMovieSceneImageCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFrameGrabberProtocol.InnerSingleton;
}

// HasFinishedProcessingImpl @ 146be1610

bool __thiscall UFrameGrabberProtocol::HasFinishedProcessingImpl(UFrameGrabberProtocol *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FFrameGrabber *pFVar1;
  
  pFVar1 = (this->FrameGrabber).Ptr;
  if (pFVar1 != (FFrameGrabber *)0x0) {
    lpCriticalSection = &pFVar1->CapturedFramesMutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((pFVar1->OutstandingFrameCount).Counter == 0) && ((pFVar1->CapturedFrames).ArrayNum == 0))
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return false;
}

// ProcessFrame @ 146be5250

void __thiscall
UFrameGrabberProtocol::ProcessFrame(UFrameGrabberProtocol *this,FCapturedFrameData *param_1)

{
  FScriptContainerElement *pFVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Public\\Protocols\\FrameGrabberProtocol.h"
             ,0x3d,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Payload).SharedReferenceCount.ReferenceController);
  pFVar1 = (param_1->ColorBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// SetupImpl @ 146be7d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall UFrameGrabberProtocol::SetupImpl(UFrameGrabberProtocol *this)

{
  TUniquePtr<FFrameGrabber,TDefaultDelete<FFrameGrabber>_> *this_00;
  EPixelFormat EVar1;
  uint uVar2;
  TIntPoint<int> TVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FFrameGrabber *pFVar7;
  TSharedRef<FSceneViewport,1> *pTVar8;
  FFrameGrabber *pFVar9;
  TSharedRef<FSceneViewport,1> local_28;
  
  this_00 = &this->FrameGrabber;
  pFVar7 = ::operator_new(0x88);
  pFVar9 = (FFrameGrabber *)0x0;
  if (pFVar7 != (FFrameGrabber *)0x0) {
    uVar2 = this->RingBufferSize;
    EVar1 = this->DesiredPixelFormat;
    if ((char)this->_padding_ == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    TVar3.field0_0x0 = (TIntPoint<int>_u_0)this->_padding_;
    if ((char)this->_padding_ == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pTVar8 = TSharedPtr<FSceneViewport,1>::ToSharedRef
                       ((TSharedPtr<FSceneViewport,1> *)&this->_padding_,&local_28);
    pFVar9 = FFrameGrabber::FFrameGrabber(pFVar7,pTVar8,TVar3,EVar1,uVar2);
  }
  pFVar7 = this_00->Ptr;
  if (pFVar7 != pFVar9) {
    this_00->Ptr = pFVar9;
    TDefaultDelete<FFrameGrabber>::operator()((TDefaultDelete<FFrameGrabber> *)this_00,pFVar7);
  }
  FFrameGrabber::StartCapturingFrames(this_00->Ptr);
  return true;
}

// StaticRegisterNativesUFrameGrabberProtocol @ 146be8cd0

void __cdecl UFrameGrabberProtocol::StaticRegisterNativesUFrameGrabberProtocol(void)

{
  return;
}

// TickImpl @ 146be9200

void __thiscall UFrameGrabberProtocol::TickImpl(UFrameGrabberProtocol *this)

{
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar1;
  FFrameGrabber *this_00;
  code *pcVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  TArray<FCapturedFrameData,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  this_00 = (this->FrameGrabber).Ptr;
  if (this_00 != (FFrameGrabber *)0x0) {
    FFrameGrabber::GetCapturedFrames(this_00,&local_48);
    lVar3 = (longlong)local_48.ArrayNum;
    for (pFVar4 = local_48.AllocatorInstance.Data + 0xc;
        pTVar1 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(pFVar4 + -0xc),
        pTVar1 != (TArray<FColor,TSizedDefaultAllocator<32>_> *)
                  (local_48.AllocatorInstance.Data + lVar3 * 0x28); pFVar4 = pFVar4 + 0x28) {
      pcVar2 = *(code **)(this->_padding_ + 0x330);
      local_38 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_30 = *(int *)(pFVar4 + -4);
      local_2c = *(int *)pFVar4;
      *(undefined8 *)(pFVar4 + -4) = 0;
      local_28 = *(undefined8 *)(pFVar4 + 4);
      local_20 = *(undefined8 *)(pFVar4 + 0xc);
      local_18 = *(undefined8 *)(pFVar4 + 0x14);
      *(undefined8 *)(pFVar4 + 0x14) = 0;
      *(undefined8 *)(pFVar4 + 0xc) = 0;
      (*pcVar2)(this,&local_38);
    }
    DestructItems<FCapturedFrameData,int>
              ((FCapturedFrameData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FCapturedFrameData *)local_48.AllocatorInstance.Data != (FCapturedFrameData *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

