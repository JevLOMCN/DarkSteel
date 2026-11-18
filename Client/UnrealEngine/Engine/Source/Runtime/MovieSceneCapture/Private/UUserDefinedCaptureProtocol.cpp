// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 43

// StaticClass @ 146bd2320

UClass * __cdecl UUserDefinedCaptureProtocol::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"UserDefinedCaptureProtocol",
               &Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUUserDefinedCaptureProtocol,0xd8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UUserDefinedCaptureProtocol>,
               InternalVTableHelperCtorCaller<UUserDefinedCaptureProtocol>,local_res8,
               UMovieSceneImageCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.InnerSingleton;
}

// UUserDefinedCaptureProtocol @ 146bd8e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UUserDefinedCaptureProtocol * __thiscall
UUserDefinedCaptureProtocol::UUserDefinedCaptureProtocol
          (UUserDefinedCaptureProtocol *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  this->_padding_ = (longlong)&___7UUserDefinedCaptureProtocol__6B_;
  (this->FinalPixelsFrameGrabber).Ptr = (FFrameGrabber *)0x0;
  this->NumOutstandingOperations = (TAtomic<int>)0x0;
  (this->CachedFrameMetrics).TotalElapsedTime = 0.0;
  (this->CachedFrameMetrics).FrameDelta = 0.0;
  (this->CachedFrameMetrics).FrameNumber = 0;
  (this->CachedFrameMetrics).NumDroppedFrames = 0;
  *(undefined8 *)&(this->FinalPixelsID).Identifiers = 0;
  *(undefined8 *)&(this->FinalPixelsID).Identifiers.field_0x8 = 0;
  *(undefined8 *)&(this->FinalPixelsID).Identifiers.field_0x20 = 0;
  *(undefined4 *)&(this->FinalPixelsID).Identifiers.field_0x28 = 0;
  *(undefined4 *)&(this->FinalPixelsID).Identifiers.field_0x2c = 0x80;
  *(undefined4 *)&(this->FinalPixelsID).Identifiers.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FinalPixelsID).Identifiers.field_0x34 = 0;
  *(undefined8 *)&(this->FinalPixelsID).Identifiers.field_0x40 = 0;
  *(undefined4 *)&(this->FinalPixelsID).Identifiers.field_0x48 = 0;
  return this;
}

// UUserDefinedCaptureProtocol @ 146bd8ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UUserDefinedCaptureProtocol * __thiscall
UUserDefinedCaptureProtocol::UUserDefinedCaptureProtocol
          (UUserDefinedCaptureProtocol *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UUserDefinedCaptureProtocol__6B_;
  (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  (this->FinalPixelsFrameGrabber).Ptr = (FFrameGrabber *)0x0;
  this->NumOutstandingOperations = (TAtomic<int>)0x0;
  (this->CachedFrameMetrics).TotalElapsedTime = 0.0;
  (this->CachedFrameMetrics).FrameDelta = 0.0;
  (this->CachedFrameMetrics).FrameNumber = 0;
  (this->CachedFrameMetrics).NumDroppedFrames = 0;
  *(undefined8 *)&(this->FinalPixelsID).Identifiers = 0;
  *(undefined8 *)&(this->FinalPixelsID).Identifiers.field_0x8 = 0;
  *(undefined8 *)&(this->FinalPixelsID).Identifiers.field_0x20 = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)&(this->FinalPixelsID).Identifiers.field_0x28 = 0;
  *(undefined4 *)&(this->FinalPixelsID).Identifiers.field_0x2c = 0x80;
  *(undefined4 *)&(this->FinalPixelsID).Identifiers.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FinalPixelsID).Identifiers.field_0x34 = 0;
  *(undefined8 *)&(this->FinalPixelsID).Identifiers.field_0x40 = 0;
  *(undefined4 *)&(this->FinalPixelsID).Identifiers.field_0x48 = 0;
  this->CurrentStreamID = (FCapturedPixelsID *)0x0;
  return this;
}

// ~UUserDefinedCaptureProtocol @ 146bd98f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UUserDefinedCaptureProtocol::~UUserDefinedCaptureProtocol(UUserDefinedCaptureProtocol *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UUserDefinedCaptureProtocol__6B_;
  *(undefined4 *)&(this->FinalPixelsID).Identifiers.field_0x48 = 0;
  pvVar1 = *(void **)&(this->FinalPixelsID).Identifiers.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FinalPixelsID);
  TDefaultDelete<FFrameGrabber>::operator()
            ((TDefaultDelete<FFrameGrabber> *)&this->FinalPixelsFrameGrabber,
             (this->FinalPixelsFrameGrabber).Ptr);
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddFormatMappingsImpl @ 146bdb4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UUserDefinedCaptureProtocol::AddFormatMappingsImpl
          (UUserDefinedCaptureProtocol *this,
          TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          *param_1)

{
  undefined1 *puVar1;
  FName *this_00;
  ulonglong uVar2;
  int iVar3;
  FCapturedPixelsID *pFVar4;
  code *pcVar5;
  FCapturedPixelsID *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FString *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  undefined8 local_108;
  FCapturedPixelsID *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString *local_d0;
  FStringFormatArg *local_c8;
  FString *local_c0;
  FStringFormatArg *local_b8;
  FString local_b0;
  FString local_a0;
  FStringFormatArg local_90;
  FStringFormatArg local_70;
  FString local_50;
  
  pFVar4 = this->CurrentStreamID;
  if (pFVar4 != (FCapturedPixelsID *)0x0) {
    iVar3 = *(int *)&(pFVar4->Identifiers).field_0x28;
    iVar15 = 0;
    iVar17 = 0;
    uVar8 = 1;
    puVar1 = &(pFVar4->Identifiers).field_0x10;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar18 = *(uint **)&(pFVar4->Identifiers).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar1;
      }
      uVar14 = *puVar18;
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar15;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar15 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_146bdb570;
        uVar14 = puVar18[lVar11 + 1];
      }
      uVar8 = -uVar14 & uVar14;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar9 = iVar17 + -1 + (int)lVar11;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_146bdb570:
    uVar14 = *(uint *)&(pFVar4->Identifiers).field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_f8._padding_ = CONCAT44(uVar8,iVar15);
    TStack_f8.CurrentBitIndex = iVar9;
    TStack_f8.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar14 >> 5;
    TStack_f8._28_4_ = iVar9;
    TStack_f8.BaseBitIndex = iVar17;
    uStack_d8 = CONCAT44(uStack_11c,
                         *(int *)&(pFVar4->Identifiers).field_0x8 -
                         *(int *)&(pFVar4->Identifiers).field_0x34);
    local_100 = pFVar4;
    TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = *(uint *)&(pFVar4->Identifiers).field_0x28;
    if (uVar14 != uVar8) {
      puVar16 = *(undefined1 **)&(pFVar4->Identifiers).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar15;
        uVar13 = uVar13 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_146bdb690;
        uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar14 = (int)lVar11 + -1 + uVar13;
      if ((int)uVar8 < (int)uVar14) {
        uVar14 = uVar8;
      }
    }
LAB_146bdb690:
    while( true ) {
      pFVar6 = local_100;
      if (*(int *)&(local_100->Identifiers).field_0x8 - *(int *)&(local_100->Identifiers).field_0x34
          != (int)uStack_d8) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_f8.CurrentBitIndex == uVar14) &&
          (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == pFVar4)
         ) break;
      this_00 = (FName *)(*(longlong *)&pFVar6->Identifiers +
                         (longlong)TStack_f8.CurrentBitIndex * 0x18);
      if (this_00[1] == (FName)0x0) {
        local_118._8_8_ = (FStringFormatArg *)0x0;
        local_108 = 0;
        FStringFormatArg::FStringFormatArg(&local_90,(FString *)(local_118 + 8));
        local_d0 = ::FName::ToString(this_00,&local_b0);
        local_c8 = &local_90;
        TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
                  ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                    *)param_1,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)&stack0x00000020,
                   (bool *)&local_d0);
        FVar12.Data = local_90.StringValue.Data.AllocatorInstance.Data;
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          FVar12.Data = local_90.StringValue.Data.AllocatorInstance.Data;
        }
      }
      else {
        pFVar10 = ::FName::ToString(this_00 + 1,&local_50);
        FStringFormatArg::FStringFormatArg(&local_70,pFVar10);
        local_c0 = ::FName::ToString(this_00,&local_a0);
        local_b8 = &local_70;
        TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
                  ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                    *)param_1,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_118,
                   (bool *)&local_c0);
        FVar12.Data = local_70.StringValue.Data.AllocatorInstance.Data;
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          FVar12.Data = local_70.StringValue.Data.AllocatorInstance.Data;
        }
      }
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    }
  }
  return;
}

// BeginFinalizeImpl @ 146bdbb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::BeginFinalizeImpl(UUserDefinedCaptureProtocol *this)

{
  FFrameGrabber *this_00;
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  this_00 = (this->FinalPixelsFrameGrabber).Ptr;
  if (((this_00 != (FFrameGrabber *)0x0) && ((char)this->_padding_ == '\x02')) &&
     (this_00->State == Active)) {
    FFrameGrabber::StopCapturingFrames(this_00);
  }
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnBeginFinalize);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146bdbb6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// CaptureFrameImpl @ 146bdbfd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UUserDefinedCaptureProtocol::CaptureFrameImpl
          (UUserDefinedCaptureProtocol *this,FFrameMetrics *param_1)

{
  FFrameGrabber *pFVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  UFunction *pUVar8;
  TSharedPtr<IFramePayload,1> local_18;
  
  fVar3 = param_1->FrameDelta;
  iVar4 = param_1->FrameNumber;
  iVar5 = param_1->NumDroppedFrames;
  pFVar1 = (this->FinalPixelsFrameGrabber).Ptr;
  (this->CachedFrameMetrics).TotalElapsedTime = param_1->TotalElapsedTime;
  (this->CachedFrameMetrics).FrameDelta = fVar3;
  (this->CachedFrameMetrics).FrameNumber = iVar4;
  (this->CachedFrameMetrics).NumDroppedFrames = iVar5;
  if ((pFVar1 != (FFrameGrabber *)0x0) && (pFVar1->State == Active)) {
    LOCK();
    this->NumOutstandingOperations = (TAtomic<int>)((int)this->NumOutstandingOperations + 1);
    UNLOCK();
    pFVar1 = (this->FinalPixelsFrameGrabber).Ptr;
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      local_18.Object = (IFramePayload *)___xmm_00000000000000000000000000000010;
      local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFCaptureProtocolFrameData___00_SharedPointerInternals__6B_
      ;
      pTVar7[1]._padding_ = (longlong)&___7FCaptureProtocolFrameData__6B_;
      fVar3 = (this->CachedFrameMetrics).FrameDelta;
      lVar2 = *(longlong *)&(this->CachedFrameMetrics).FrameNumber;
      pTVar7[1].SharedReferenceCount = (atomic<int>)(this->CachedFrameMetrics).TotalElapsedTime;
      pTVar7[1].WeakReferenceCount = (atomic<int>)fVar3;
      pTVar7[2]._padding_ = lVar2;
      if (pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      local_18.Object = (IFramePayload *)(pTVar7 + 1);
      local_18.SharedReferenceCount.ReferenceController = pTVar7;
    }
    FFrameGrabber::CaptureThisFrame(pFVar1,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  pUVar8 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnCaptureFrame);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146bdc0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar8,0,UNRECOVERED_JUMPTABLE);
  return;
}

// FinalizeImpl @ 146bde2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::FinalizeImpl(UUserDefinedCaptureProtocol *this)

{
  FFrameGrabber *pFVar1;
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar2;
  
  pFVar1 = (this->FinalPixelsFrameGrabber).Ptr;
  if (pFVar1 != (FFrameGrabber *)0x0) {
    FFrameGrabber::Shutdown(pFVar1);
    pFVar1 = (this->FinalPixelsFrameGrabber).Ptr;
    if (pFVar1 != (FFrameGrabber *)0x0) {
      (this->FinalPixelsFrameGrabber).Ptr = (FFrameGrabber *)0x0;
      TDefaultDelete<FFrameGrabber>::operator()
                ((TDefaultDelete<FFrameGrabber> *)&this->FinalPixelsFrameGrabber,pFVar1);
    }
  }
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnFinalize)
  ;
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146bde321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar2,0,UNRECOVERED_JUMPTABLE);
  return;
}

// GenerateFilename @ 146bdf310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UUserDefinedCaptureProtocol::GenerateFilename
          (UUserDefinedCaptureProtocol *this,FString *__return_storage_ptr__,FFrameMetrics *param_1)

{
  FString local_18;
  
  if (this->_padding_ == 0) {
    FFrame::KismetExecutionMessage
              (L"Capture protocol is not currently set up to generate filenames.",Error,(FName)0x0);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UMovieSceneCaptureProtocolBase::GenerateFilenameImpl
            ((UMovieSceneCaptureProtocolBase *)this,&local_18,param_1,L"",(FString *)0x0);
  UMovieSceneCaptureProtocolBase::EnsureFileWritableImpl
            ((UMovieSceneCaptureProtocolBase *)this,&local_18);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146be0ff0

UClass * __cdecl UUserDefinedCaptureProtocol::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"UserDefinedCaptureProtocol",
               &Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUUserDefinedCaptureProtocol,0xd8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UUserDefinedCaptureProtocol>,
               InternalVTableHelperCtorCaller<UUserDefinedCaptureProtocol>,local_res8,
               UMovieSceneImageCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.InnerSingleton;
}

// GetWorld @ 146be1560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UUserDefinedCaptureProtocol::GetWorld(UUserDefinedCaptureProtocol *this)

{
  return (this->World).field0_0x0.DebugPtr;
}

// HasFinishedProcessingImpl @ 146be1730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UUserDefinedCaptureProtocol::HasFinishedProcessingImpl(UUserDefinedCaptureProtocol *this)

{
  FFrameGrabber *this_00;
  bool bVar1;
  undefined1 uVar2;
  UFunction *this_01;
  UClass *pUVar3;
  char local_res8 [8];
  
  if (this->NumOutstandingOperations != (TAtomic<int>)0x0) {
    return false;
  }
  this_00 = (this->FinalPixelsFrameGrabber).Ptr;
  if ((this_00 != (FFrameGrabber *)0x0) &&
     (bVar1 = FFrameGrabber::HasOutstandingFrames(this_00), bVar1)) {
    return false;
  }
  this_01 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnCanFinalize);
  pUVar3 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar3->ClassFlags & CLASS_Native) != CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x000146be17b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(this->_padding_ + 0x330))(this);
    return (bool)uVar2;
  }
  local_res8[0] = '\0';
  (**(code **)(this->_padding_ + 0x260))(this,this_01,local_res8);
  return local_res8[0] != '\0';
}

// OnBeginFinalize @ 146be3820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::OnBeginFinalize(UUserDefinedCaptureProtocol *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnBeginFinalize);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146be384d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnCanFinalize @ 146be3860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UUserDefinedCaptureProtocol::OnCanFinalize(UUserDefinedCaptureProtocol *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnCanFinalize);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000146be38c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x330))(this);
  return (bool)uVar1;
}

// OnCanFinalize_Implementation @ 146be38e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UUserDefinedCaptureProtocol::OnCanFinalize_Implementation(UUserDefinedCaptureProtocol *this)

{
  return true;
}

// OnCaptureFrame @ 146be38f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::OnCaptureFrame(UUserDefinedCaptureProtocol *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnCaptureFrame);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146be391d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnFinalize @ 146be3940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::OnFinalize(UUserDefinedCaptureProtocol *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnFinalize)
  ;
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146be396d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnPauseCapture @ 146be41f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::OnPauseCapture(UUserDefinedCaptureProtocol *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnPauseCapture);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146be421d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnPixelsReceived @ 146be4230

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

void __thiscall
UUserDefinedCaptureProtocol::OnPixelsReceived
          (UUserDefinedCaptureProtocol *this,FCapturedPixels *param_1,FCapturedPixelsID *param_2,
          FFrameMetrics *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pTVar1 = (param_1->ImageData).SharedReferenceCount.ReferenceController;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)local_98,
            (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)param_2);
  local_48._0_4_ = param_3->TotalElapsedTime;
  local_48._4_4_ = param_3->FrameDelta;
  uStack_40._0_4_ = param_3->FrameNumber;
  uStack_40._4_4_ = param_3->NumDroppedFrames;
  UObject::FindFunctionChecked((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnPixelsReceived);
  (**(code **)(this->_padding_ + 0x260))(this);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// OnPixelsReceivedImpl @ 146be43b0

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

void __thiscall
UUserDefinedCaptureProtocol::OnPixelsReceivedImpl
          (UUserDefinedCaptureProtocol *this,FCapturedPixels *param_1,FCapturedPixelsID *param_2,
          FFrameMetrics *param_3)

{
  FImagePixelData *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStackY_f8 [32];
  longlong local_c8;
  longlong local_c0;
  FImagePixelData *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  LOCK();
  this->NumOutstandingOperations = (TAtomic<int>)((int)this->NumOutstandingOperations + -1);
  UNLOCK();
  if ((param_1->ImageData).Object == (FImagePixelData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->ImageData).Object;
  local_c8 = 0;
  local_c0 = 0;
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,&local_c8,&local_c0);
  if ((local_c8 != 0) &&
     (local_c0 ==
      (ulonglong)(pFVar1->BitDepth >> 3) * (ulonglong)pFVar1->NumChannels *
      (longlong)(pFVar1->Size).field0_0x0._s_0.Y * (longlong)(pFVar1->Size).field0_0x0._s_0.X)) {
    pTStack_b0 = (param_1->ImageData).SharedReferenceCount.ReferenceController;
    local_b8 = (param_1->ImageData).Object;
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_8_ = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (ForElementType<FSetElementId>)0x0;
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (pTStack_b0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_b0->SharedReferenceCount = (atomic<int>)((int)pTStack_b0->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)local_a8,
              (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)param_2);
    local_58._0_4_ = param_3->TotalElapsedTime;
    local_58._4_4_ = param_3->FrameDelta;
    uStack_50._0_4_ = param_3->FrameNumber;
    uStack_50._4_4_ = param_3->NumDroppedFrames;
    UObject::FindFunctionChecked((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnPixelsReceived);
    (**(code **)(this->_padding_ + 0x260))(this);
    local_60 = 0;
    if (local_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68);
    }
    iVar3 = SUB84(local_a8._8_8_,4);
    local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
    }
    local_78 = 0xffffffff;
    local_74 = 0;
    local_80 = 0;
    if (0x80 < local_7c) {
      local_7c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  }
  return;
}

// OnPreTick @ 146be4770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::OnPreTick(UUserDefinedCaptureProtocol *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnPreTick);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146be479d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnSetup @ 146be49e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UUserDefinedCaptureProtocol::OnSetup(UUserDefinedCaptureProtocol *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnSetup);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000146be4a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x328))(this);
  return (bool)uVar1;
}

// OnSetup_Implementation @ 146be4a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UUserDefinedCaptureProtocol::OnSetup_Implementation(UUserDefinedCaptureProtocol *this)

{
  return true;
}

// OnStartCapture @ 146be4a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::OnStartCapture(UUserDefinedCaptureProtocol *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnStartCapture);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146be4a9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnTick @ 146be4d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::OnTick(UUserDefinedCaptureProtocol *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnTick);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146be4d5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnWarmUp @ 146be4d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::OnWarmUp(UUserDefinedCaptureProtocol *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnWarmUp);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146be4d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// PreTickImpl @ 146be5210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::PreTickImpl(UUserDefinedCaptureProtocol *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnPreTick);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146be523d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ReportOutstandingWork @ 146be5810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UUserDefinedCaptureProtocol::ReportOutstandingWork(UUserDefinedCaptureProtocol *this,int param_1)

{
  LOCK();
  this->NumOutstandingOperations = (TAtomic<int>)((int)this->NumOutstandingOperations + param_1);
  UNLOCK();
  return;
}

// ResolveBuffer @ 146be5a00

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

void __thiscall
UUserDefinedCaptureProtocol::ResolveBuffer
          (UUserDefinedCaptureProtocol *this,UTexture *param_1,FCapturedPixelsID *param_2)

{
  int iVar1;
  bool bVar2;
  code **ppcVar3;
  undefined1 auStackY_128 [32];
  FWeakObjectPtr local_f8;
  UUserDefinedCaptureProtocol *local_f0;
  code *pcStack_e8;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  code *local_88;
  code *pcStack_80;
  FWeakObjectPtr local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (((char)this->_padding_ == '\x02') ||
     (*(char *)((longlong)&this->_padding_ + (ulonglong)((uint)GFrameCounter & 1) + 1) == '\x01')) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_f8.ObjectIndex = 0;
    local_f8.ObjectSerialNumber = 0;
    local_f0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_f0);
    local_f0 = *(UUserDefinedCaptureProtocol **)&this->CachedFrameMetrics;
    pcStack_e8 = *(code **)&(this->CachedFrameMetrics).FrameNumber;
    local_d8._0_8_ = (FScriptContainerElement *)0x0;
    local_d8._8_8_ = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_ac = 0x80;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = (ForElementType<FSetElementId>)0x0;
    local_90 = 0;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)local_d8,
              (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)param_2);
    local_78 = local_f8;
    local_88 = (code *)local_f0;
    pcStack_80 = pcStack_e8;
    local_68[0] = (code *)0x0;
    ppcVar3 = FMemory::Malloc(0x70,8);
    ppcVar3[1] = (code *)0x0;
    ppcVar3[2] = (code *)0x0;
    *ppcVar3 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`UUserDefinedCaptureProtocol::ResolveBuffer'::`2'::<lambda_1>,0,1>
                        ::_vftable_;
    ppcVar3[5] = (code *)0x0;
    *(undefined4 *)(ppcVar3 + 6) = 0;
    *(undefined4 *)((longlong)ppcVar3 + 0x34) = 0x80;
    *(undefined4 *)(ppcVar3 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)ppcVar3 + 0x3c) = 0;
    ppcVar3[9] = (code *)0x0;
    *(undefined4 *)(ppcVar3 + 10) = 0;
    local_40 = ppcVar3;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)(ppcVar3 + 1),
              (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)local_d8);
    ppcVar3[0xb] = local_88;
    ppcVar3[0xc] = pcStack_80;
    *(FWeakObjectPtr *)(ppcVar3 + 0xd) = local_78;
    if ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *
        )(ppcVar3 + 1) !=
        (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *
        )0x0) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UUserDefinedCaptureProtocol::ResolveBuffer'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
                    ::Call;
    }
    bVar2 = UImageWriteBlueprintLibrary::ResolvePixelData
                      (param_1,(TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
                                *)local_68);
    if (local_68[0] != (code *)0x0) {
      ppcVar3 = local_68 + 2;
      if (local_40 != (code **)0x0) {
        ppcVar3 = local_40;
      }
      (**(code **)(*ppcVar3 + 0x10))();
    }
    if (bVar2) {
      LOCK();
      this->NumOutstandingOperations = (TAtomic<int>)((int)this->NumOutstandingOperations + 1);
      UNLOCK();
    }
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    iVar1 = SUB84(local_d8._8_8_,4);
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
    }
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_b0 = 0;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
  }
  else {
    local_f8.ObjectIndex = 0;
    local_f8.ObjectSerialNumber = 0;
    FFrame::KismetExecutionMessage
              (L"Capture protocol is not currently capturing frames.",Error,(FName)0x0);
  }
  return;
}

// SetupImpl @ 146be81e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UUserDefinedCaptureProtocol::SetupImpl(UUserDefinedCaptureProtocol *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  UWorld *pUVar5;
  TIntPoint<int> TVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  UWorld *pUVar10;
  FFrameGrabber *pFVar11;
  TSharedRef<FSceneViewport,1> *pTVar12;
  FFrameGrabber *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  int local_res10;
  TSharedRef<FSceneViewport,1> local_78;
  FScriptContainerElement *local_68;
  int *piStack_60;
  undefined8 local_58;
  FScriptContainerElement *local_50;
  int *piStack_48;
  int local_40;
  undefined4 uStack_3c;
  
  if (((char)this->_padding_ == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar13 = (FFrameGrabber *)0x0;
  plVar4 = *(longlong **)(this->_padding_ + 0x48);
  if (plVar4 == (longlong *)0x0) {
    pUVar10 = (UWorld *)0x0;
  }
  else {
    pUVar10 = (UWorld *)(**(code **)(*plVar4 + 0x30))();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
  }
  (this->World).field0_0x0.DebugPtr = pUVar10;
  local_res10 = UE::GetPlayInEditorID();
  pFVar14 = local_68;
  if ((this->World).field0_0x0.DebugPtr != (UWorld *)0x0) {
    pFVar14 = (GEngine->WorldList).Array.AllocatorInstance.Data;
    piVar1 = &(GEngine->WorldList).Array.ArrayNum;
    iVar3 = *piVar1;
    pFVar2 = pFVar14 + (longlong)iVar3 * 8;
    local_58 = CONCAT44(uStack_3c,iVar3);
    local_68 = pFVar14;
    piStack_60 = piVar1;
    local_50 = pFVar14;
    piStack_48 = piVar1;
    local_40 = iVar3;
    while( true ) {
      if (*piVar1 != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar14 == pFVar2) break;
      pUVar10 = (this->World).field0_0x0.DebugPtr;
      pUVar5 = *(UWorld **)(*(longlong *)pFVar14 + 0x2c0);
      if (pUVar10 == (UWorld *)0x0) {
        bVar8 = pUVar5 == (UWorld *)0x0;
      }
      else {
        bVar8 = pUVar10 == pUVar5;
      }
      if (bVar8) {
        UE::SetPlayInEditorID(*(int *)(*(longlong *)pFVar14 + 0x220));
      }
      pFVar14 = pFVar14 + 8;
    }
  }
  local_68 = pFVar14;
  iVar3 = local_res10;
  pFVar11 = ::operator_new(0x88);
  if (pFVar11 != (FFrameGrabber *)0x0) {
    if (((char)this->_padding_ == '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    TVar6.field0_0x0 = (TIntPoint<int>_u_0)this->_padding_;
    if (((char)this->_padding_ == '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pTVar12 = TSharedPtr<FSceneViewport,1>::ToSharedRef
                        ((TSharedPtr<FSceneViewport,1> *)&this->_padding_,&local_78);
    pFVar13 = FFrameGrabber::FFrameGrabber(pFVar11,pTVar12,TVar6,PF_B8G8R8A8,3);
  }
  pFVar11 = (this->FinalPixelsFrameGrabber).Ptr;
  if (pFVar11 != pFVar13) {
    (this->FinalPixelsFrameGrabber).Ptr = pFVar13;
    TDefaultDelete<FFrameGrabber>::operator()
              ((TDefaultDelete<FFrameGrabber> *)&this->FinalPixelsFrameGrabber,pFVar11);
  }
  bVar8 = OnSetup(this);
  UE::SetPlayInEditorID(iVar3);
  return bVar8;
}

// StartCaptureImpl @ 146be8ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UUserDefinedCaptureProtocol::StartCaptureImpl(UUserDefinedCaptureProtocol *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnStartCapture);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,0);
  return true;
}

// StartCapturingFinalPixels @ 146be8b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UUserDefinedCaptureProtocol::StartCapturingFinalPixels
          (UUserDefinedCaptureProtocol *this,FCapturedPixelsID *param_1)

{
  FFrameGrabber *pFVar1;
  
  pFVar1 = (this->FinalPixelsFrameGrabber).Ptr;
  if (((pFVar1 != (FFrameGrabber *)0x0) && ((char)this->_padding_ == '\x02')) &&
     (pFVar1->State != Active)) {
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)&this->FinalPixelsID,
              (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)param_1);
    FFrameGrabber::StartCapturingFrames((this->FinalPixelsFrameGrabber).Ptr);
    return;
  }
  return;
}

// StaticRegisterNativesUUserDefinedCaptureProtocol @ 146be8e50

void __cdecl UUserDefinedCaptureProtocol::StaticRegisterNativesUUserDefinedCaptureProtocol(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopCapturingFinalPixels @ 146be8ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UUserDefinedCaptureProtocol::StopCapturingFinalPixels(UUserDefinedCaptureProtocol *this)

{
  FFrameGrabber *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->FinalPixelsFrameGrabber).Ptr;
  if (((pFVar1 != (FFrameGrabber *)0x0) && ((char)this->_padding_ == '\x02')) &&
     (pFVar1->State == Active)) {
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
  return;
}

// TickImpl @ 146be9310

/* WARNING: Removing unreachable block (ram,0x000146be93ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::TickImpl(UUserDefinedCaptureProtocol *this)

{
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar2;
  FFrameGrabber *this_00;
  code *pcVar3;
  FImagePixelData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  UFunction *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FCapturedPixels local_88;
  TArray<FCapturedFrameData,TSizedDefaultAllocator<32>_> local_78;
  FFrameMetrics local_68;
  TArray<FColor,TSizedDefaultAllocator<64>_> local_58 [2];
  
  pUVar7 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnTick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar7,0);
  this_00 = (this->FinalPixelsFrameGrabber).Ptr;
  if (this_00 != (FFrameGrabber *)0x0) {
    FFrameGrabber::GetCapturedFrames(this_00,&local_78);
    pTVar5 = _UNK_150651568;
    pFVar4 = ___xmm_00000000000000000000000000000010;
    pFVar11 = local_78.AllocatorInstance.Data + 0xc;
    pTVar2 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x28);
    while( true ) {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      pTVar1 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(pFVar11 + -0xc);
      if (pTVar1 == pTVar2) break;
      FVar10.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_58[0].ArrayNum = (long64)*(int *)(pFVar11 + -4);
      local_58[0].ArrayMax = (long64)*(int *)pFVar11;
      *(undefined8 *)(pFVar11 + -4) = 0;
      local_58[0].AllocatorInstance.Data = FVar10.Data;
      pTVar8 = ::operator_new(0x50);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        local_88.ImageData.Object = pFVar4;
        local_88.ImageData.SharedReferenceCount.ReferenceController = pTVar5;
      }
      else {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TImagePixelData_UFColor_____00_SharedPointerInternals__6B_
        ;
        TImagePixelData<FColor>::TImagePixelData<FColor>
                  ((TImagePixelData<FColor> *)(pTVar8 + 1),(TIntPoint<int> *)(pFVar11 + 4),local_58)
        ;
        if (((FImagePixelData *)(pTVar8 + 1) == (FImagePixelData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        pTVar9 = pTVar8;
        FVar10.Data = local_58[0].AllocatorInstance.Data;
        local_88.ImageData.Object = (FImagePixelData *)(pTVar8 + 1);
        local_88.ImageData.SharedReferenceCount.ReferenceController = pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
      local_68._0_8_ = *(undefined8 *)(*(longlong *)(pFVar11 + 0xc) + 8);
      local_68._8_8_ = *(undefined8 *)(*(longlong *)(pFVar11 + 0xc) + 0x10);
      OnPixelsReceivedImpl(this,&local_88,&this->FinalPixelsID,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.ImageData.SharedReferenceCount.ReferenceController);
      pFVar11 = pFVar11 + 0x28;
    }
    DestructItems<FCapturedFrameData,int>
              ((FCapturedFrameData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if ((FCapturedFrameData *)local_78.AllocatorInstance.Data != (FCapturedFrameData *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return;
}

// WarmUpImpl @ 146be9d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserDefinedCaptureProtocol::WarmUpImpl(UUserDefinedCaptureProtocol *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserDefinedCaptureProtocol_OnWarmUp);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146be9d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// execGenerateFilename @ 146beb160

void __cdecl
UUserDefinedCaptureProtocol::execGenerateFilename(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  uchar local_28 [16];
  void *local_18 [2];
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x338))(param_1,local_18,puVar3);
  if (param_3 != puVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetCurrentFrameMetrics @ 146beb6c0

void __cdecl
UUserDefinedCaptureProtocol::execGetCurrentFrameMetrics
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[2].field_0x24;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x1c;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execOnCanFinalize @ 146beb7e0

void __cdecl
UUserDefinedCaptureProtocol::execOnCanFinalize(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x330))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execOnSetup @ 146beb820

void __cdecl
UUserDefinedCaptureProtocol::execOnSetup(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x328))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execResolveBuffer @ 146beb860

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
UUserDefinedCaptureProtocol::execResolveBuffer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FCapturedPixelsID *pFVar3;
  undefined1 auStackY_b8 [32];
  UTexture *local_88 [2];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88[0] = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pFVar3 = (FCapturedPixelsID *)local_78;
  if ((FCapturedPixelsID *)param_2->MostRecentPropertyAddress != (FCapturedPixelsID *)0x0) {
    pFVar3 = (FCapturedPixelsID *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ResolveBuffer((UUserDefinedCaptureProtocol *)param_1,local_88[0],pFVar3);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execStartCapturingFinalPixels @ 146bebcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UUserDefinedCaptureProtocol::execStartCapturingFinalPixels
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *pTVar3;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            *)local_78;
  if ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *)
      0x0) {
    pTVar3 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(longlong *)&param_1[2].field_0x10 != 0) && (*(char *)(param_1 + 2) == '\x02')) &&
     (*(int *)(*(longlong *)&param_1[2].field_0x10 + 0x7c) != 1)) {
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)&param_1[3].field_0x8,pTVar3);
    FFrameGrabber::StartCapturingFrames(*(FFrameGrabber **)&param_1[2].field_0x10);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execStopCapturingFinalPixels @ 146bebe40

void __cdecl
UUserDefinedCaptureProtocol::execStopCapturingFinalPixels
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[2].field_0x10;
  if (((lVar1 != 0) && (*(char *)(param_1 + 2) == '\x02')) && (*(int *)(lVar1 + 0x7c) == 1)) {
    if (*(int *)(lVar1 + 0x7c) == 1) {
      *(undefined4 *)(lVar1 + 0x7c) = 2;
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
  return;
}

