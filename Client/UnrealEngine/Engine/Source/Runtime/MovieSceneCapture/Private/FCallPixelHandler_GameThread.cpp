// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 3

// FCallPixelHandler_GameThread @ 146bd7180

FCallPixelHandler_GameThread * __thiscall
FCallPixelHandler_GameThread::FCallPixelHandler_GameThread
          (FCallPixelHandler_GameThread *this,FCallPixelHandler_GameThread *param_1)

{
  FCapturedPixelsID *pFVar1;
  FCapturedPixelsID *pFVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  pFVar1 = &this->StreamID;
  (this->Pixels).ImageData.Object = (param_1->Pixels).ImageData.Object;
  pFVar2 = &param_1->StreamID;
  (this->Pixels).ImageData.SharedReferenceCount.ReferenceController =
       (param_1->Pixels).ImageData.SharedReferenceCount.ReferenceController;
  (param_1->Pixels).ImageData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Pixels).ImageData.Object = (FImagePixelData *)0x0;
  *(undefined8 *)&pFVar1->Identifiers = 0;
  *(undefined8 *)&(this->StreamID).Identifiers.field_0x8 = 0;
  *(undefined8 *)&(this->StreamID).Identifiers.field_0x20 = 0;
  *(undefined4 *)&(this->StreamID).Identifiers.field_0x28 = 0;
  *(undefined4 *)&(this->StreamID).Identifiers.field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamID).Identifiers.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamID).Identifiers.field_0x34 = 0;
  *(undefined8 *)&(this->StreamID).Identifiers.field_0x40 = 0;
  *(undefined4 *)&(this->StreamID).Identifiers.field_0x48 = 0;
  if (pFVar1 != pFVar2) {
    *(undefined8 *)&pFVar1->Identifiers = *(undefined8 *)&pFVar2->Identifiers;
    *(undefined8 *)&pFVar2->Identifiers = 0;
    _Dst = &(this->StreamID).Identifiers.field_0x10;
    *(undefined4 *)&(this->StreamID).Identifiers.field_0x8 =
         *(undefined4 *)&(param_1->StreamID).Identifiers.field_0x8;
    _Src = &(param_1->StreamID).Identifiers.field_0x10;
    *(undefined4 *)&(this->StreamID).Identifiers.field_0xc =
         *(undefined4 *)&(param_1->StreamID).Identifiers.field_0xc;
    *(undefined8 *)&(param_1->StreamID).Identifiers.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->StreamID).Identifiers.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->StreamID).Identifiers.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->StreamID).Identifiers.field_0x20 =
           *(undefined8 *)&(param_1->StreamID).Identifiers.field_0x20;
      *(undefined8 *)&(param_1->StreamID).Identifiers.field_0x20 = 0;
      *(undefined4 *)&(this->StreamID).Identifiers.field_0x28 =
           *(undefined4 *)&(param_1->StreamID).Identifiers.field_0x28;
      *(undefined4 *)&(this->StreamID).Identifiers.field_0x2c =
           *(undefined4 *)&(param_1->StreamID).Identifiers.field_0x2c;
      *(undefined8 *)&(param_1->StreamID).Identifiers.field_0x28 = 0;
    }
    *(undefined4 *)&(this->StreamID).Identifiers.field_0x30 =
         *(undefined4 *)&(param_1->StreamID).Identifiers.field_0x30;
    *(undefined4 *)&(this->StreamID).Identifiers.field_0x34 =
         *(undefined4 *)&(param_1->StreamID).Identifiers.field_0x34;
    *(undefined4 *)&(param_1->StreamID).Identifiers.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->StreamID).Identifiers.field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->StreamID).Identifiers.field_0x40 == 0) {
    *(undefined4 *)&(this->StreamID).Identifiers.field_0x38 =
         *(undefined4 *)&(param_1->StreamID).Identifiers.field_0x38;
  }
  pvVar3 = *(void **)&(this->StreamID).Identifiers.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->StreamID).Identifiers.field_0x40 =
       *(undefined8 *)&(param_1->StreamID).Identifiers.field_0x40;
  *(undefined8 *)&(param_1->StreamID).Identifiers.field_0x40 = 0;
  *(undefined4 *)&(this->StreamID).Identifiers.field_0x48 =
       *(undefined4 *)&(param_1->StreamID).Identifiers.field_0x48;
  *(undefined4 *)&(param_1->StreamID).Identifiers.field_0x48 = 0;
  fVar4 = (param_1->FrameMetrics).FrameDelta;
  iVar5 = (param_1->FrameMetrics).FrameNumber;
  iVar6 = (param_1->FrameMetrics).NumDroppedFrames;
  (this->FrameMetrics).TotalElapsedTime = (param_1->FrameMetrics).TotalElapsedTime;
  (this->FrameMetrics).FrameDelta = fVar4;
  (this->FrameMetrics).FrameNumber = iVar5;
  (this->FrameMetrics).NumDroppedFrames = iVar6;
  (this->WeakProtocol).WeakPtr = (param_1->WeakProtocol).WeakPtr;
  return this;
}

// operator() @ 146bda010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FCallPixelHandler_GameThread::operator()(FCallPixelHandler_GameThread *this)

{
  code *pcVar1;
  bool bVar2;
  UUserDefinedCaptureProtocol *this_00;
  FFrameMetrics local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\UserDefinedCaptureProtocol.cpp"
                       ,0x36,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (UUserDefinedCaptureProtocol *)FWeakObjectPtr::Get(&(this->WeakProtocol).WeakPtr);
  if (this_00 != (UUserDefinedCaptureProtocol *)0x0) {
    local_18.TotalElapsedTime = (this->FrameMetrics).TotalElapsedTime;
    local_18.FrameDelta = (this->FrameMetrics).FrameDelta;
    local_18.FrameNumber = (this->FrameMetrics).FrameNumber;
    local_18.NumDroppedFrames = (this->FrameMetrics).NumDroppedFrames;
    UUserDefinedCaptureProtocol::OnPixelsReceivedImpl
              (this_00,&this->Pixels,&this->StreamID,&local_18);
  }
  return;
}

// Dispatch @ 146bdd250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FCallPixelHandler_GameThread::Dispatch
          (FCapturedPixelsID *param_1,FFrameMetrics *param_2,FCapturedPixels *param_3,
          TWeakObjectPtr<UUserDefinedCaptureProtocol,FWeakObjectPtr> param_4)

{
  FCallPixelHandler_GameThread *this;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  UUserDefinedCaptureProtocol *this_00;
  undefined1 auStackY_128 [32];
  FFrameMetrics local_f8;
  code *local_e8 [5];
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  FFrameMetrics local_48;
  FWeakObjectPtr local_38 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_a8._8_8_ = (param_3->ImageData).SharedReferenceCount.ReferenceController;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._0_8_ = (param_3->ImageData).Object;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_48.TotalElapsedTime = 0.0;
  local_48.FrameDelta = 0.0;
  local_48.FrameNumber = 0;
  local_48.NumDroppedFrames = 0;
  local_38[0].ObjectIndex = 0;
  local_38[0].ObjectSerialNumber = 0;
  if ((TReferenceControllerBase<1> *)local_a8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_a8._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_a8._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = 0;
  uStack_b0 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_48.TotalElapsedTime = param_2->TotalElapsedTime;
  local_48.FrameDelta = param_2->FrameDelta;
  local_48.FrameNumber = param_2->FrameNumber;
  local_48.NumDroppedFrames = param_2->NumDroppedFrames;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)local_98,
            (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)param_1);
  local_38[0] = param_4.WeakPtr;
  bVar3 = IsInGameThread();
  if (bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\UserDefinedCaptureProtocol.cpp"
                         ,0x36,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (UUserDefinedCaptureProtocol *)FWeakObjectPtr::Get(local_38);
    if (this_00 != (UUserDefinedCaptureProtocol *)0x0) {
      local_f8.TotalElapsedTime = local_48.TotalElapsedTime;
      local_f8.FrameDelta = local_48.FrameDelta;
      local_f8.FrameNumber = local_48.FrameNumber;
      local_f8.NumDroppedFrames = local_48.NumDroppedFrames;
      UUserDefinedCaptureProtocol::OnPixelsReceivedImpl
                (this_00,(FCapturedPixels *)local_a8,(FCapturedPixelsID *)local_98,&local_f8);
    }
  }
  else {
    local_e8[0] = (code *)0x0;
    local_c0 = FMemory::Malloc(0x80,8);
    this = (FCallPixelHandler_GameThread *)(local_c0 + 1);
    *local_c0 = &
                ___7__TFunction_OwnedObject_UFCallPixelHandler_GameThread___00_00_Function_Private_Core_UE__6B_
    ;
    FCallPixelHandler_GameThread(this,(FCallPixelHandler_GameThread *)local_a8);
    if (this != (FCallPixelHandler_GameThread *)0x0) {
      local_e8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<FCallPixelHandler_GameThread,void>::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_e8);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar2 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._8_8_);
  return;
}

