// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 6

// Call @ 146bdbbd0

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
UE::Core::Private::Function::TFunctionRefCaller<FCallPixelHandler_GameThread,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  UUserDefinedCaptureProtocol *this;
  FFrameMetrics FStack_18;
  
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
  this = (UUserDefinedCaptureProtocol *)
         FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x70));
  if (this != (UUserDefinedCaptureProtocol *)0x0) {
    FStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x60);
    FStack_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x68);
    UUserDefinedCaptureProtocol::OnPixelsReceivedImpl
              (this,param_1,(FCapturedPixelsID *)((longlong)param_1 + 0x10),&FStack_18);
  }
  return;
}

// Call @ 146bdbbe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFrameGrabber::CaptureThisFrame'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)param_1;
  puVar1 = (undefined8 *)((longlong)param_1 + 8);
  if ((*(undefined8 **)(lVar2 + 0x68) <= puVar1) &&
     (puVar1 < *(undefined8 **)(lVar2 + 0x68) + (longlong)*(int *)(lVar2 + 0x74) * 2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar2 + 0x70);
  if (iVar5 == *(int *)(lVar2 + 0x74)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar2 + 0x68),(int *)(lVar2 + 0x74));
  }
  *(int *)(lVar2 + 0x70) = iVar5 + 1;
  puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar2 + 0x68));
  *puVar6 = *puVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x10);
  puVar6[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Call @ 146bdbbf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::__l2::<lambda_1>,void,FColor_*,int,int>
::Call(void *param_1,FColor **param_2,int *param_3,int *param_4)

{
  FFrameGrabber::OnFrameReady
            (*(FFrameGrabber **)param_1,*(int *)((longlong)param_1 + 8),*param_2,*param_3,*param_4);
  return;
}

// Call @ 146bdbc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FViewportSurfaceReader::Resize'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIResource *this;
  TRefCountPtr<FRHITexture> TVar1;
  FRHITexture *pFVar2;
  undefined1 auStack_1d8 [32];
  undefined1 auStack_1b8 [24];
  longlong lStack_1a0;
  longlong lStack_198;
  undefined4 uStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  undefined2 uStack_178;
  undefined1 uStack_176;
  undefined1 uStack_175;
  undefined2 uStack_174;
  wchar_t *pwStack_168;
  ERHIAccess EStack_160;
  ERHITextureInitAction EStack_15c;
  FResourceBulkDataInterface *pFStack_158;
  FName FStack_150;
  FName FStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  FRHITextureDesc FStack_128;
  FResourceBulkDataInterface *pFStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  FName FStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  FRHITextureDesc FStack_a8;
  FResourceBulkDataInterface *pFStack_58;
  uint uStack_50;
  uint uStack_4c;
  FName FStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  uStack_17c = 0x10001;
  auStack_1b8._16_8_ = 0;
  lStack_198 = 0;
  lStack_1a0 = 1;
  iStack_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  EStack_15c = BulkData;
  uStack_190 = 0;
  pFStack_158 = (FResourceBulkDataInterface *)0x1514197d0;
  auStack_1b8._0_4_ = *(undefined4 *)param_1;
  auStack_1b8._4_4_ = *(undefined4 *)((longlong)param_1 + 4);
  uStack_184 = *(undefined8 *)param_1;
  uStack_188 = 0;
  uStack_178 = 0x101;
  uStack_176 = 0;
  uStack_175 = *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x30);
  uStack_174 = 0xff00;
  pwStack_168 = (wchar_t *)0x0;
  EStack_160 = None;
  FStack_150.ComparisonIndex.Value = 0;
  FStack_150.Number = 0;
  FStack_148.ComparisonIndex.Value = 0;
  FStack_148.Number = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  FRHITextureDesc::FRHITextureDesc(&FStack_128,(FRHITextureDesc *)(auStack_1b8 + 0x10));
  pFStack_d8 = pFStack_158;
  uStack_d0 = FStack_150.ComparisonIndex.Value;
  uStack_cc = FStack_150.Number;
  FStack_c8 = FStack_148;
  uStack_c0 = uStack_140;
  uStack_b8 = uStack_138;
  if (pwStack_168 != (wchar_t *)0x0) {
    FMemory::Free(pwStack_168);
  }
  FStack_128.Flags = CPUReadback;
  FRHITextureDesc::FRHITextureDesc(&FStack_a8,&FStack_128);
  pFStack_58 = pFStack_d8;
  uStack_50 = uStack_d0;
  uStack_4c = uStack_cc;
  FStack_48 = FStack_c8;
  uStack_40 = uStack_c0;
  uStack_38 = uStack_b8;
  if (FStack_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FStack_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  TVar1 = FRHICommandListBase::CreateTexture
                    ((FRHICommandListBase *)param_2,(FRHITextureCreateDesc *)auStack_1b8);
  pFVar2 = (FRHITexture *)(*(longlong *)((longlong)param_1 + 8) + 0x10);
  if (pFVar2 != TVar1.Reference) {
    this = (FRHIResource *)pFVar2->_padding_;
    pFVar2->_padding_ = (TVar1.Reference)->_padding_;
    (TVar1.Reference)->_padding_ = 0;
    if (this != (FRHIResource *)0x0) {
      FRHIResource::Release(this);
    }
  }
  if ((FRHIResource *)CONCAT44(auStack_1b8._4_4_,auStack_1b8._0_4_) != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)CONCAT44(auStack_1b8._4_4_,auStack_1b8._0_4_));
  }
  if (FStack_a8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FStack_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// Call @ 146bdbc30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UUserDefinedCaptureProtocol::ResolveBuffer'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
::Call(void *param_1,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_2)

{
  FImagePixelData *pFVar1;
  FCapturedPixels local_18;
  
  pFVar1 = param_2->Ptr;
  param_2->Ptr = (FImagePixelData *)0x0;
  local_18.ImageData.Object = pFVar1;
  local_18.ImageData.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.ImageData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    (local_18.ImageData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)0x1;
    (local_18.ImageData.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFImagePixelData__U__DefaultDeleter_UFImagePixelData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.ImageData.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)0x1;
    local_18.ImageData.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  FCallPixelHandler_GameThread::Dispatch
            (param_1,(FFrameMetrics *)((longlong)param_1 + 0x50),&local_18,
             (TWeakObjectPtr<UUserDefinedCaptureProtocol,FWeakObjectPtr>)
             *(FWeakObjectPtr *)((longlong)param_1 + 0x60));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.ImageData.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 146bdbcb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UUserDefinedImageCaptureProtocol::WriteImageToDisk'::__l25::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(param_1);
  if (pUVar1 != (UObject *)0x0) {
    LOCK();
    *(int *)&pUVar1[2].field_0x18 = *(int *)&pUVar1[2].field_0x18 + -1;
    UNLOCK();
  }
  return;
}

