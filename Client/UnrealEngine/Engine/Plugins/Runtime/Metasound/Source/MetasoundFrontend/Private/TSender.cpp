// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 89

// PushLiteral @ 14ad6f430

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
PushLiteral(TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
            *this,FLiteral *param_1)

{
  bool bVar1;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TLiteralTraits<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          ::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  ();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pTVar2 = TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14ad6f520

long64 __thiscall
Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
GetPayloadID(TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
             *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14ad751c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::ESharedStateBehaviorType,1> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::ESharedStateBehaviorType,1> *)
                    CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14ad75290

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14ad77f10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>::PushLiteral
          (TSender<Metasound::Frontend::FAnalyzerAddress> *this,FLiteral *param_1)

{
  bool bVar1;
  FAnalyzerAddress *pFVar2;
  FString local_78;
  FAnalyzerAddress local_68;
  
  bVar1 = TLiteralTraits<Metasound::Frontend::FAnalyzerAddress>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_78,param_1);
        GetMetasoundDataTypeString<Metasound::Frontend::FAnalyzerAddress>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pFVar2 = TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::Frontend::FAnalyzerAddress>_>
           ::CreateExplicitArgs(&local_68,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pFVar2);
  return bVar1;
}

// GetPayloadID @ 14ad78000

long64 __thiscall
Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>::GetPayloadID
          (TSender<Metasound::Frontend::FAnalyzerAddress> *this)

{
  return this->PayloadID;
}

// TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad956b0

TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *this
          ,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                      ();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ =
       (longlong)
       &
       ___7__TSender_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr =
       (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad958d0

TSender<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TSender<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::Frontend::FAnalyzerAddress> @ 14ad95ab0

TSender<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>::
TSender<Metasound::Frontend::FAnalyzerAddress>
          (TSender<Metasound::Frontend::FAnalyzerAddress> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  FName *pFVar10;
  
  pFVar10 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar10;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ = (longlong)&___7__TSender_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (0x58,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar9 * 0x58,0,
         (longlong)(int)uVar3 * 0x58);
  (this->Payload).Ptr = (FAnalyzerAddress *)0x0;
  this->PayloadID = 0;
  fVar7 = (param_1->OperatorSettings).TargetBlockRate;
  fVar8 = (param_1->OperatorSettings).ActualBlockRate;
  iVar9 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar7;
  (this->Params).OperatorSettings.ActualBlockRate = fVar8;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar9;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (0x58,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar9 * 0x58,0,
         (longlong)(int)uVar3 * 0x58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// Push @ 14adca4f0

bool __thiscall Metasound::TSender<float>::Push(TSender<float> *this,float *param_1)

{
  TUniquePtr<float,TDefaultDelete<float>_> *pTVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  long64 lVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  undefined8 local_28 [4];
  
  iVar2 = (this->SenderBuffer).ReadCounter.Counter;
  iVar3 = (this->SenderBuffer).WriteCounter.Counter;
  uVar10 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    uVar10 = uVar10 + (this->SenderBuffer).Capacity;
  }
  if (~uVar10 + (this->SenderBuffer).Capacity != 0) {
    uVar10 = (this->SenderBuffer).WriteCounter.Counter;
    *(float *)((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar10 * 4) =
         *param_1;
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar10 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar2 = (this->SenderBuffer).ReadCounter.Counter;
  iVar3 = (this->SenderBuffer).WriteCounter.Counter;
  uVar10 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    uVar10 = uVar10 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar10) {
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    lVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    pfVar9 = (this->Payload).Ptr;
    pTVar1 = &this->Payload;
    this->PayloadID = lVar8;
    if (pfVar9 == (float *)0x0) {
      fVar11 = Audio::TCircularAudioBuffer<float,16>::Pop(&this->SenderBuffer);
      pfVar9 = ::operator_new(4);
      if (pfVar9 == (float *)0x0) {
        pfVar9 = (float *)0x0;
      }
      else {
        *pfVar9 = fVar11;
      }
      if (pTVar1 != (TUniquePtr<float,TDefaultDelete<float>_> *)local_28) {
        pfVar4 = pTVar1->Ptr;
        pTVar1->Ptr = pfVar9;
        pfVar9 = (float *)0x0;
        ::operator_delete(pfVar4,4);
      }
      ::operator_delete(pfVar9,4);
    }
    else {
      fVar11 = Audio::TCircularAudioBuffer<float,16>::Pop(&this->SenderBuffer);
      *pTVar1->Ptr = fVar11;
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014adca64f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
    return (bool)uVar7;
  }
  return true;
}

// Push @ 14adca670

bool __thiscall
Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::Push
          (TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *this
          ,TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (~uVar4 + (this->SenderBuffer).Capacity != 0) {
    uVar4 = (this->SenderBuffer).WriteCounter.Counter;
    TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
               ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10
               ),param_1);
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar4 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar4) {
    bVar3 = PushToDataChannel(this);
    return bVar3;
  }
  return true;
}

// Push @ 14adca700

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::Push
          (void *this,TEnum<Metasound::ESharedStateBehaviorType,1> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::ESharedStateBehaviorType,1> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(ESharedStateBehaviorType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,16>
              ::Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,16>
              ::Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014adca864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14adca880

bool __thiscall
Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>::Push
          (TSender<Metasound::Frontend::FAnalyzerAddress> *this,FAnalyzerAddress *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar6 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar6 = uVar6 + (this->SenderBuffer).Capacity;
  }
  if (~uVar6 + (this->SenderBuffer).Capacity != 0) {
    pFVar3 = (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
    uVar6 = (this->SenderBuffer).WriteCounter.Counter;
    lVar7 = (ulonglong)uVar6 * 0x58;
    *(ulong64 *)(pFVar3 + lVar7 + 8) = param_1->InstanceID;
    uVar4 = *(undefined8 *)&(param_1->NodeID).C;
    *(undefined8 *)(pFVar3 + lVar7 + 0x10) = *(undefined8 *)&param_1->NodeID;
    *(undefined8 *)(pFVar3 + lVar7 + 0x10 + 8) = uVar4;
    *(FName *)(pFVar3 + lVar7 + 0x20) = param_1->OutputName;
    *(FName *)(pFVar3 + lVar7 + 0x28) = param_1->DataType;
    *(FName *)(pFVar3 + lVar7 + 0x30) = param_1->AnalyzerName;
    uVar4 = *(undefined8 *)&(param_1->AnalyzerInstanceID).C;
    *(undefined8 *)(pFVar3 + lVar7 + 0x38) = *(undefined8 *)&param_1->AnalyzerInstanceID;
    *(undefined8 *)(pFVar3 + lVar7 + 0x38 + 8) = uVar4;
    *(FName *)(pFVar3 + lVar7 + 0x48) = param_1->AnalyzerMemberName;
    pFVar3[lVar7 + 0x50] = (FScriptContainerElement)param_1->UseDataTransmissionCenter;
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar6 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar6 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar6 = uVar6 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar6) {
    bVar5 = PushToDataChannel(this);
    return bVar5;
  }
  return true;
}

// Push @ 14adca940

bool __thiscall
Metasound::TSender<Metasound::FTime>::Push(TSender<Metasound::FTime> *this,FTime *param_1)

{
  TUniquePtr<Metasound::FTime,TDefaultDelete<Metasound::FTime>_> *pTVar1;
  int iVar2;
  int iVar3;
  FTime *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  long64 lVar8;
  FTime FVar9;
  FTime *pFVar10;
  uint uVar11;
  undefined8 local_28 [2];
  
  iVar2 = (this->SenderBuffer).ReadCounter.Counter;
  iVar3 = (this->SenderBuffer).WriteCounter.Counter;
  uVar11 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    uVar11 = uVar11 + (this->SenderBuffer).Capacity;
  }
  if (~uVar11 + (this->SenderBuffer).Capacity != 0) {
    uVar11 = (this->SenderBuffer).WriteCounter.Counter;
    *(double *)((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar11 * 8)
         = param_1->Time;
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar11 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar2 = (this->SenderBuffer).ReadCounter.Counter;
  iVar3 = (this->SenderBuffer).WriteCounter.Counter;
  uVar11 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    uVar11 = uVar11 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar11) {
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    lVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    pFVar10 = (this->Payload).Ptr;
    pTVar1 = &this->Payload;
    this->PayloadID = lVar8;
    if (pFVar10 == (FTime *)0x0) {
      FVar9 = Audio::TCircularAudioBuffer<Metasound::FTime,16>::Pop(&this->SenderBuffer);
      pFVar10 = ::operator_new(8);
      if (pFVar10 == (FTime *)0x0) {
        pFVar10 = (FTime *)0x0;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        pFVar10->Time = *FVar9.Time;
      }
      if (pTVar1 != (TUniquePtr<Metasound::FTime,TDefaultDelete<Metasound::FTime>_> *)local_28) {
        pFVar4 = pTVar1->Ptr;
        pTVar1->Ptr = pFVar10;
        pFVar10 = (FTime *)0x0;
        ::operator_delete(pFVar4,8);
      }
      ::operator_delete(pFVar10,8);
    }
    else {
      FVar9 = Audio::TCircularAudioBuffer<Metasound::FTime,16>::Pop(&this->SenderBuffer);
                    /* WARNING: Load size is inaccurate */
      pTVar1->Ptr->Time = *FVar9.Time;
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014adcaaa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
    return (bool)uVar7;
  }
  return true;
}

// PushToDataChannel @ 14adcaba0

bool __thiscall
Metasound::TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
PushToDataChannel(TSender<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                  *this)

{
  TUniquePtr<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong local_38;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_30;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_20;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pTVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pTVar9 == (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = Audio::
             TCircularAudioBuffer<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,16>
             ::Pop(&this->SenderBuffer,&local_30);
    pTVar8 = ::operator_new(0x10);
    pTVar9 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar8 != (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0)
    {
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar8->ArrayNum = pTVar7->ArrayNum;
      pTVar8->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      pTVar9 = pTVar8;
    }
    if (pTVar1 == (TUniquePtr<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                   *)&local_38) {
      if (pTVar9 != (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar9,0x10);
      }
    }
    else {
      pTVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar9;
      if (pTVar7 != (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar7,0x10);
      }
    }
  }
  else {
    pTVar7 = Audio::
             TCircularAudioBuffer<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,16>
             ::Pop(&this->SenderBuffer,&local_20);
    pTVar9 = pTVar1->Ptr;
    local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    if (pTVar9 != pTVar7) {
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar9->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = pTVar7->ArrayNum;
      pTVar9->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    }
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014adcad3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14adcad50

bool __thiscall
Metasound::TSender<Metasound::Frontend::FAnalyzerAddress>::PushToDataChannel
          (TSender<Metasound::Frontend::FAnalyzerAddress> *this)

{
  TUniquePtr<Metasound::Frontend::FAnalyzerAddress,TDefaultDelete<Metasound::Frontend::FAnalyzerAddress>_>
  *pTVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  long64 lVar8;
  FAnalyzerAddress *pFVar9;
  FAnalyzerAddress *pFVar10;
  longlong local_c8;
  FAnalyzerAddress local_c0;
  FAnalyzerAddress local_68;
  
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  lVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pFVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar8;
  if (pFVar9 == (FAnalyzerAddress *)0x0) {
    pFVar9 = Audio::TCircularAudioBuffer<Metasound::Frontend::FAnalyzerAddress,16>::Pop
                       (&this->SenderBuffer,&local_c0);
    pFVar10 = ::operator_new(0x58);
    if (pFVar10 == (FAnalyzerAddress *)0x0) {
      pFVar10 = (FAnalyzerAddress *)0x0;
    }
    else {
      pFVar10->_padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
      pFVar10->InstanceID = pFVar9->InstanceID;
      uVar3 = (pFVar9->NodeID).B;
      uVar4 = (pFVar9->NodeID).C;
      uVar5 = (pFVar9->NodeID).D;
      (pFVar10->NodeID).A = (pFVar9->NodeID).A;
      (pFVar10->NodeID).B = uVar3;
      (pFVar10->NodeID).C = uVar4;
      (pFVar10->NodeID).D = uVar5;
      pFVar10->OutputName = pFVar9->OutputName;
      pFVar10->DataType = pFVar9->DataType;
      pFVar10->AnalyzerName = pFVar9->AnalyzerName;
      uVar3 = (pFVar9->AnalyzerInstanceID).B;
      uVar4 = (pFVar9->AnalyzerInstanceID).C;
      uVar5 = (pFVar9->AnalyzerInstanceID).D;
      (pFVar10->AnalyzerInstanceID).A = (pFVar9->AnalyzerInstanceID).A;
      (pFVar10->AnalyzerInstanceID).B = uVar3;
      (pFVar10->AnalyzerInstanceID).C = uVar4;
      (pFVar10->AnalyzerInstanceID).D = uVar5;
      pFVar10->AnalyzerMemberName = pFVar9->AnalyzerMemberName;
      pFVar10->UseDataTransmissionCenter = pFVar9->UseDataTransmissionCenter;
    }
    if (pTVar1 == (TUniquePtr<Metasound::Frontend::FAnalyzerAddress,TDefaultDelete<Metasound::Frontend::FAnalyzerAddress>_>
                   *)&local_c8) {
      if (pFVar10 != (FAnalyzerAddress *)0x0) {
        (**(code **)pFVar10->_padding_)(pFVar10,1);
      }
    }
    else {
      pFVar9 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar10;
      if (pFVar9 != (FAnalyzerAddress *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,1);
      }
    }
  }
  else {
    pFVar10 = Audio::TCircularAudioBuffer<Metasound::Frontend::FAnalyzerAddress,16>::Pop
                        (&this->SenderBuffer,&local_68);
    pFVar9 = pTVar1->Ptr;
    pFVar9->InstanceID = pFVar10->InstanceID;
    uVar3 = (pFVar10->NodeID).B;
    uVar4 = (pFVar10->NodeID).C;
    uVar5 = (pFVar10->NodeID).D;
    (pFVar9->NodeID).A = (pFVar10->NodeID).A;
    (pFVar9->NodeID).B = uVar3;
    (pFVar9->NodeID).C = uVar4;
    (pFVar9->NodeID).D = uVar5;
    pFVar9->OutputName = pFVar10->OutputName;
    pFVar9->DataType = pFVar10->DataType;
    pFVar9->AnalyzerName = pFVar10->AnalyzerName;
    uVar3 = (pFVar10->AnalyzerInstanceID).B;
    uVar4 = (pFVar10->AnalyzerInstanceID).C;
    uVar5 = (pFVar10->AnalyzerInstanceID).D;
    (pFVar9->AnalyzerInstanceID).A = (pFVar10->AnalyzerInstanceID).A;
    (pFVar9->AnalyzerInstanceID).B = uVar3;
    (pFVar9->AnalyzerInstanceID).C = uVar4;
    (pFVar9->AnalyzerInstanceID).D = uVar5;
    pFVar9->AnalyzerMemberName = pFVar10->AnalyzerMemberName;
    pFVar9->UseDataTransmissionCenter = pFVar10->UseDataTransmissionCenter;
  }
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014adcaf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar7;
}

// PushToDataChannel @ 14adcaf10

bool __thiscall
Metasound::TSender<Metasound::FAudioBuffer>::PushToDataChannel
          (TSender<Metasound::FAudioBuffer> *this)

{
  TUniquePtr<Metasound::FAudioBuffer,TDefaultDelete<Metasound::FAudioBuffer>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  FAudioBuffer *pFVar7;
  FAudioBuffer *pFVar8;
  FAudioBuffer *pFVar9;
  longlong local_48;
  FAudioBuffer local_40;
  FAudioBuffer local_28;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pFVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pFVar9 == (FAudioBuffer *)0x0) {
    pFVar7 = Audio::TCircularAudioBuffer<Metasound::FAudioBuffer,16>::Pop
                       (&this->SenderBuffer,&local_40);
    pFVar8 = ::operator_new(0x18);
    pFVar9 = (FAudioBuffer *)0x0;
    if (pFVar8 != (FAudioBuffer *)0x0) {
      (pFVar8->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->Buffer).AllocatorInstance.Data = (pFVar7->Buffer).AllocatorInstance.Data;
      (pFVar7->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->Buffer).ArrayNum = (pFVar7->Buffer).ArrayNum;
      (pFVar8->Buffer).ArrayMax = (pFVar7->Buffer).ArrayMax;
      (pFVar7->Buffer).ArrayNum = 0;
      (pFVar7->Buffer).ArrayMax = 0;
      pFVar8->InitialNum = pFVar7->InitialNum;
      pFVar9 = pFVar8;
    }
    local_28.Buffer.AllocatorInstance.Data = local_40.Buffer.AllocatorInstance.Data;
    if (pTVar1 == (TUniquePtr<Metasound::FAudioBuffer,TDefaultDelete<Metasound::FAudioBuffer>_> *)
                  &local_48) {
      if (pFVar9 == (FAudioBuffer *)0x0) goto LAB_14adcb061;
      pFVar2 = (pFVar9->Buffer).AllocatorInstance.Data;
      pFVar7 = pFVar9;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    else {
      pFVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar9;
      if (pFVar7 == (FAudioBuffer *)0x0) goto LAB_14adcb061;
      pFVar2 = (pFVar7->Buffer).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    ::operator_delete(pFVar7,0x18);
    local_28.Buffer.AllocatorInstance.Data = local_40.Buffer.AllocatorInstance.Data;
  }
  else {
    pFVar7 = Audio::TCircularAudioBuffer<Metasound::FAudioBuffer,16>::Pop
                       (&this->SenderBuffer,&local_28);
    pFVar9 = pTVar1->Ptr;
    if (pFVar9 != pFVar7) {
      pFVar2 = (pFVar9->Buffer).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar9->Buffer).AllocatorInstance.Data = (pFVar7->Buffer).AllocatorInstance.Data;
      (pFVar7->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar9->Buffer).ArrayNum = (pFVar7->Buffer).ArrayNum;
      (pFVar9->Buffer).ArrayMax = (pFVar7->Buffer).ArrayMax;
      (pFVar7->Buffer).ArrayNum = 0;
      (pFVar7->Buffer).ArrayMax = 0;
    }
    pFVar9->InitialNum = pFVar7->InitialNum;
  }
LAB_14adcb061:
  if (local_28.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Buffer.AllocatorInstance.Data);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014adcb0b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushLiteral @ 14ae967b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1)

{
  bool bVar1;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TLiteralTraits<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::IsParsable(param_1)
  ;
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pTVar2 = TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14ae96900

long64 __thiscall
Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14ae9b5c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Metasound::TSender<float>::PushLiteral(TSender<float> *this,FLiteral *param_1)

{
  bool bVar1;
  float local_res18 [4];
  FString local_18;
  
  bVar1 = TLiteralTraits<float>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<float>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<float>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  local_res18[0] =
       TDataLiteralFactory<float,Metasound::DataFactoryPrivate::TDataTypeCreator<float>_>::
       CreateExplicitArgs(&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,local_res18);
  return bVar1;
}

// GetPayloadID @ 14ae9b710

long64 __thiscall Metasound::TSender<float>::GetPayloadID(TSender<float> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14ae9e0f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
PushLiteral(TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *this,
           FLiteral *param_1)

{
  bool bVar1;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TLiteralTraits<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
          IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                  ();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pTVar2 = TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pTVar2);
  DestructItems<FMetasoundParameterStorageWrapper,int>
            ((FMetasoundParameterStorageWrapper *)local_18.AllocatorInstance.Data,local_18.ArrayNum)
  ;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14ae9e2f0

long64 __thiscall
Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetPayloadID(TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aea2310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Metasound::TSender<int>::PushLiteral(TSender<int> *this,FLiteral *param_1)

{
  bool bVar1;
  int local_res18 [4];
  FString local_18;
  
  bVar1 = TLiteralTraits<int>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<int>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<int>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  local_res18[0] =
       TDataLiteralFactory<int,Metasound::DataFactoryPrivate::TDataTypeCreator<int>_>::
       CreateExplicitArgs(&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,local_res18);
  return bVar1;
}

// GetPayloadID @ 14aea2920

long64 __thiscall Metasound::TSender<int>::GetPayloadID(TSender<int> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aea9fc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1)

{
  bool bVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TLiteralTraits<TArray<FString,TSizedDefaultAllocator<32>_>_>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<TArray<FString,TSizedDefaultAllocator<32>_>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pTVar2 = TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14aeaa320

long64 __thiscall
Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aeb0860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Metasound::TSender<bool>::PushLiteral(TSender<bool> *this,FLiteral *param_1)

{
  bool bVar1;
  bool local_res18 [16];
  FString local_18;
  
  bVar1 = TLiteralTraits<bool>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<bool>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<bool>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  local_res18[0] =
       TDataLiteralFactory<bool,Metasound::DataFactoryPrivate::TDataTypeCreator<bool>_>::
       CreateExplicitArgs(&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,local_res18);
  return bVar1;
}

// GetPayloadID @ 14aeb0990

long64 __thiscall Metasound::TSender<bool>::GetPayloadID(TSender<bool> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aeb1140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::FAudioBuffer>::PushLiteral
          (TSender<Metasound::FAudioBuffer> *this,FLiteral *param_1)

{
  bool bVar1;
  FAudioBuffer *pFVar2;
  FAudioBuffer local_28;
  
  bVar1 = TLiteralTraits<Metasound::FAudioBuffer>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_28,param_1);
        GetMetasoundDataTypeString<Metasound::FAudioBuffer>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::FAudioBuffer>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_28.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Buffer.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pFVar2 = TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FAudioBuffer>_>
           ::CreateExplicitArgs(&local_28,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pFVar2);
  if (local_28.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Buffer.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14aeb12e0

long64 __thiscall
Metasound::TSender<Metasound::FAudioBuffer>::GetPayloadID(TSender<Metasound::FAudioBuffer> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aebadf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1)

{
  bool bVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TLiteralTraits<TArray<float,TSizedDefaultAllocator<32>_>_>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<TArray<float,TSizedDefaultAllocator<32>_>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pTVar2 = TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14aebb040

long64 __thiscall
Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aebdc80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<FMetasoundParameterStorageWrapper>::PushLiteral
          (TSender<FMetasoundParameterStorageWrapper> *this,FLiteral *param_1)

{
  bool bVar1;
  FMetasoundParameterStorageWrapper *pFVar2;
  undefined1 local_18 [16];
  
  bVar1 = TLiteralTraits<FMetasoundParameterStorageWrapper>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)local_18,param_1);
        GetMetasoundDataTypeString<FMetasoundParameterStorageWrapper>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<FMetasoundParameterStorageWrapper>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_18._0_8_);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pFVar2 = TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::DataFactoryPrivate::TDataTypeCreator<FMetasoundParameterStorageWrapper>_>
           ::CreateExplicitArgs
                     ((FMetasoundParameterStorageWrapper *)local_18,&(this->Params).OperatorSettings
                      ,param_1);
  bVar1 = Push(this,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  return bVar1;
}

// GetPayloadID @ 14aebde10

long64 __thiscall
Metasound::TSender<FMetasoundParameterStorageWrapper>::GetPayloadID
          (TSender<FMetasoundParameterStorageWrapper> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aebefe0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::FSendAddress>::PushLiteral
          (TSender<Metasound::FSendAddress> *this,FLiteral *param_1)

{
  bool bVar1;
  FSendAddress *pFVar2;
  FSendAddress local_28;
  
  bVar1 = TLiteralTraits<Metasound::FSendAddress>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_28,param_1);
        GetMetasoundDataTypeString<Metasound::FSendAddress>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::FSendAddress>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if ((void *)local_28._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_28._padding_);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pFVar2 = TDataLiteralFactory<Metasound::FSendAddress,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FSendAddress>_>
           ::CreateExplicitArgs(&local_28,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pFVar2);
  return bVar1;
}

// GetPayloadID @ 14aebf0b0

long64 __thiscall
Metasound::TSender<Metasound::FSendAddress>::GetPayloadID(TSender<Metasound::FSendAddress> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aecc6a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1)

{
  bool bVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TLiteralTraits<TArray<int,TSizedDefaultAllocator<32>_>_>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<TArray<int,TSizedDefaultAllocator<32>_>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pTVar2 = TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14aecc7d0

long64 __thiscall
Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aecde90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::FTime>::PushLiteral(TSender<Metasound::FTime> *this,FLiteral *param_1)

{
  bool bVar1;
  FTime FVar2;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::FTime>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::FTime>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::FTime>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  FVar2 = TDataLiteralFactory<Metasound::FTime,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTime>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)&this->Params);
  bVar1 = Push(this,(FTime *)FVar2.Time);
  return bVar1;
}

// GetPayloadID @ 14aece000

long64 __thiscall
Metasound::TSender<Metasound::FTime>::GetPayloadID(TSender<Metasound::FTime> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aedaad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::FTrigger>::PushLiteral
          (TSender<Metasound::FTrigger> *this,FLiteral *param_1)

{
  bool bVar1;
  FTrigger *pFVar2;
  FTrigger local_28;
  
  bVar1 = TLiteralTraits<Metasound::FTrigger>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_28,param_1);
        GetMetasoundDataTypeString<Metasound::FTrigger>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::FTrigger>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_28.TriggeredFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.TriggeredFrames.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pFVar2 = TDataLiteralFactory<Metasound::FTrigger,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTrigger>_>
           ::CreateExplicitArgs(&local_28,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pFVar2);
  if (local_28.TriggeredFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.TriggeredFrames.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14aedae00

long64 __thiscall
Metasound::TSender<Metasound::FTrigger>::GetPayloadID(TSender<Metasound::FTrigger> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aedff20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FLiteral *param_1)

{
  bool bVar1;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TLiteralTraits<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pTVar2 = TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14aee0010

long64 __thiscall
Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aee0240

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FLiteral *param_1)

{
  bool bVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TLiteralTraits<TArray<bool,TSizedDefaultAllocator<32>_>_>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<TArray<bool,TSizedDefaultAllocator<32>_>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pTVar2 = TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14aee0330

long64 __thiscall
Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14aee62e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Metasound::TSender<FString>::PushLiteral(TSender<FString> *this,FLiteral *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  bVar1 = TLiteralTraits<FString>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<FString>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<FString>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pFVar2 = TDataLiteralFactory<FString,Metasound::DataFactoryPrivate::TDataTypeCreator<FString>_>::
           CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14aee6460

long64 __thiscall Metasound::TSender<FString>::GetPayloadID(TSender<FString> *this)

{
  return this->PayloadID;
}

// TSender<int> @ 14af32790

TSender<int> * __thiscall
Metasound::TSender<int>::TSender<int>
          (TSender<int> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  FName *pFVar10;
  
  pFVar10 = GetMetasoundDataTypeName<int>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar10;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ = (longlong)&___7__TSender_H_Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar9 * 4,0,
         (longlong)(int)uVar3 << 2);
  (this->Payload).Ptr = (int *)0x0;
  this->PayloadID = 0;
  fVar7 = (param_1->OperatorSettings).TargetBlockRate;
  fVar8 = (param_1->OperatorSettings).ActualBlockRate;
  iVar9 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar7;
  (this->Params).OperatorSettings.ActualBlockRate = fVar8;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar9;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar9 * 4,0,
         (longlong)(int)uVar3 << 2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<float> @ 14af32970

TSender<float> * __thiscall
Metasound::TSender<float>::TSender<float>
          (TSender<float> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  FName *pFVar10;
  
  pFVar10 = GetMetasoundDataTypeName<float>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar10;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ = (longlong)&___7__TSender_M_Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar9 * 4,0,
         (longlong)(int)uVar3 << 2);
  (this->Payload).Ptr = (float *)0x0;
  this->PayloadID = 0;
  fVar7 = (param_1->OperatorSettings).TargetBlockRate;
  fVar8 = (param_1->OperatorSettings).ActualBlockRate;
  iVar9 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar7;
  (this->Params).OperatorSettings.ActualBlockRate = fVar8;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar9;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar9 * 4,0,
         (longlong)(int)uVar3 << 2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af32b50

TSender<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>::
TSender<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ =
       (longlong)&___7__TSender_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af32d70

TSender<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>::
TSender<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ =
       (longlong)&___7__TSender_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af32f90

TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                      ();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ =
       (longlong)
       &
       ___7__TSender_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af331b0

TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>()
  ;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ =
       (longlong)
       &
       ___7__TSender_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af333d0

TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ =
       (longlong)
       &___7__TSender_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af335f0

TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ =
       (longlong)
       &___7__TSender_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af33810

TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ =
       (longlong)&___7__TSender_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pTVar7 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::FAudioBuffer> @ 14af33a30

TSender<Metasound::FAudioBuffer> * __thiscall
Metasound::TSender<Metasound::FAudioBuffer>::TSender<Metasound::FAudioBuffer>
          (TSender<Metasound::FAudioBuffer> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  FAudioBuffer *pFVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ = (longlong)&___7__TSender_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pFVar7 = (FAudioBuffer *)(this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<Metasound::FAudioBuffer,int>(pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::FAudioBuffer,int>(pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x18,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x18,0,
         (longlong)(int)uVar3 * 0x18);
  (this->Payload).Ptr = (FAudioBuffer *)0x0;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pFVar7 = (FAudioBuffer *)(this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<Metasound::FAudioBuffer,int>(pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::FAudioBuffer,int>(pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x18,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x18,0,
         (longlong)(int)uVar3 * 0x18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<FMetasoundParameterStorageWrapper> @ 14af33c50

TSender<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::TSender<FMetasoundParameterStorageWrapper>::TSender<FMetasoundParameterStorageWrapper>
          (TSender<FMetasoundParameterStorageWrapper> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ = (longlong)&___7__TSender_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pFVar7 = (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (FMetasoundParameterStorageWrapper *)0x0;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pFVar7 = (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::FSendAddress> @ 14af33e70

TSender<Metasound::FSendAddress> * __thiscall
Metasound::TSender<Metasound::FSendAddress>::TSender<Metasound::FSendAddress>
          (TSender<Metasound::FSendAddress> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  FName *pFVar10;
  
  pFVar10 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar10;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ = (longlong)&___7__TSender_VFSendAddress_Metasound___Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (0x20,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar9 * 0x20,0,
         (longlong)(int)uVar3 << 5);
  (this->Payload).Ptr = (FSendAddress *)0x0;
  this->PayloadID = 0;
  fVar7 = (param_1->OperatorSettings).TargetBlockRate;
  fVar8 = (param_1->OperatorSettings).ActualBlockRate;
  iVar9 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar7;
  (this->Params).OperatorSettings.ActualBlockRate = fVar8;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar9;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (0x20,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar9 * 0x20,0,
         (longlong)(int)uVar3 << 5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<FString> @ 14af34060

TSender<FString> * __thiscall
Metasound::TSender<FString>::TSender<FString>
          (TSender<FString> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<FString>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ = (longlong)&___7__TSender_VFString___Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pFVar7 = (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<FString,int>((FString *)pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (FString *)0x0;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pFVar7 = (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<FString,int>((FString *)pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::FTime> @ 14af34280

TSender<Metasound::FTime> * __thiscall
Metasound::TSender<Metasound::FTime>::TSender<Metasound::FTime>
          (TSender<Metasound::FTime> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  FName *pFVar10;
  
  pFVar10 = GetMetasoundDataTypeName<Metasound::FTime>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar10;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ = (longlong)&___7__TSender_VFTime_Metasound___Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (8,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar9 * 8,0,
         (longlong)(int)uVar3 << 3);
  (this->Payload).Ptr = (FTime *)0x0;
  this->PayloadID = 0;
  fVar7 = (param_1->OperatorSettings).TargetBlockRate;
  fVar8 = (param_1->OperatorSettings).ActualBlockRate;
  iVar9 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar7;
  (this->Params).OperatorSettings.ActualBlockRate = fVar8;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar9;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (8,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar9 * 8,0,
         (longlong)(int)uVar3 << 3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::FTrigger> @ 14af34460

TSender<Metasound::FTrigger> * __thiscall
Metasound::TSender<Metasound::FTrigger>::TSender<Metasound::FTrigger>
          (TSender<Metasound::FTrigger> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  FTrigger *pFVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar11;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ = (longlong)&___7__TSender_VFTrigger_Metasound___Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pFVar7 = (FTrigger *)(this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<Metasound::FTrigger,int>(pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::FTrigger,int>(pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x20,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x20,0,
         (longlong)(int)uVar3 << 5);
  (this->Payload).Ptr = (FTrigger *)0x0;
  this->PayloadID = 0;
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar10 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar8;
  (this->Params).OperatorSettings.ActualBlockRate = fVar9;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar10;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  pFVar7 = (FTrigger *)(this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<Metasound::FTrigger,int>(pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::FTrigger,int>(pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x20,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x20,0,
         (longlong)(int)uVar3 << 5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<bool> @ 14af34680

TSender<bool> * __thiscall
Metasound::TSender<bool>::TSender<bool>
          (TSender<bool> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  FName *pFVar10;
  
  pFVar10 = GetMetasoundDataTypeName<bool>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar10;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)&___7ISender_Metasound__6B_;
    this->_padding_ = (longlong)pIVar5;
    this->_padding_ = (longlong)pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->bMessageDataTypeError = true;
  this->_padding_ = (longlong)&___7__TSender__N_Metasound__6B_;
  piVar1 = &(this->SenderBuffer).InternalBuffer.ArrayNum;
  (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SenderBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->SenderBuffer).ReadCounter.Counter = 0;
  (this->SenderBuffer).WriteCounter.Counter = 0;
  (this->SenderBuffer).Capacity = 1;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (1,1,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + iVar9,0,(longlong)(int)uVar3);
  (this->Payload).Ptr = (bool *)0x0;
  this->PayloadID = 0;
  fVar7 = (param_1->OperatorSettings).TargetBlockRate;
  fVar8 = (param_1->OperatorSettings).ActualBlockRate;
  iVar9 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->Params).OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->Params).OperatorSettings.TargetBlockRate = fVar7;
  (this->Params).OperatorSettings.ActualBlockRate = fVar8;
  (this->Params).OperatorSettings.NumFramesPerBlock = iVar9;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  this->NumElementsToDelayBy = 0;
  (this->Params).DelayTimeInSeconds = param_1->DelayTimeInSeconds;
  (this->SenderBuffer).Capacity = 3;
  LOCK();
  (this->SenderBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->SenderBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar9 = *piVar2;
  *piVar1 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (1,1,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + iVar9,0,(longlong)(int)uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// Push @ 14afb2a20

bool __thiscall Metasound::TSender<int>::Push(TSender<int> *this,int *param_1)

{
  TUniquePtr<int,TDefaultDelete<int>_> *pTVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  long64 lVar8;
  int *piVar9;
  uint uVar10;
  undefined8 local_18 [2];
  
  iVar7 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar10 = iVar2 - iVar7;
  if (iVar2 < iVar7) {
    uVar10 = uVar10 + (this->SenderBuffer).Capacity;
  }
  if (~uVar10 + (this->SenderBuffer).Capacity != 0) {
    uVar10 = (this->SenderBuffer).WriteCounter.Counter;
    *(int *)((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar10 * 4) =
         *param_1;
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar10 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar7 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar10 = iVar2 - iVar7;
  if (iVar2 < iVar7) {
    uVar10 = uVar10 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar10) {
    if (this->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    lVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    piVar9 = (this->Payload).Ptr;
    pTVar1 = &this->Payload;
    this->PayloadID = lVar8;
    if (piVar9 == (int *)0x0) {
      iVar7 = Audio::TCircularAudioBuffer<int,16>::Pop(&this->SenderBuffer);
      piVar9 = ::operator_new(4);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        *piVar9 = iVar7;
      }
      if (pTVar1 != (TUniquePtr<int,TDefaultDelete<int>_> *)local_18) {
        piVar3 = pTVar1->Ptr;
        pTVar1->Ptr = piVar9;
        piVar9 = (int *)0x0;
        ::operator_delete(piVar3,4);
      }
      ::operator_delete(piVar9,4);
    }
    else {
      iVar7 = Audio::TCircularAudioBuffer<int,16>::Pop(&this->SenderBuffer);
      *pTVar1->Ptr = iVar7;
    }
    if (this->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014afb2b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
    return (bool)uVar6;
  }
  return true;
}

// Push @ 14afb2ba0

bool __thiscall
Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>::Push
          (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (~uVar4 + (this->SenderBuffer).Capacity != 0) {
    uVar4 = (this->SenderBuffer).WriteCounter.Counter;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10
               ),param_1);
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar4 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar4) {
    bVar3 = PushToDataChannel(this);
    return bVar3;
  }
  return true;
}

// Push @ 14afb2c30

bool __thiscall
Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>::Push
          (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (~uVar4 + (this->SenderBuffer).Capacity != 0) {
    uVar4 = (this->SenderBuffer).WriteCounter.Counter;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)
               ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10
               ),param_1);
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar4 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar4) {
    bVar3 = PushToDataChannel(this);
    return bVar3;
  }
  return true;
}

// Push @ 14afb2cc0

bool __thiscall
Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::Push
          (TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (~uVar4 + (this->SenderBuffer).Capacity != 0) {
    uVar4 = (this->SenderBuffer).WriteCounter.Counter;
    TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)
               ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10
               ),param_1);
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar4 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar4) {
    bVar3 = PushToDataChannel(this);
    return bVar3;
  }
  return true;
}

// Push @ 14afb2d50

bool __thiscall
Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Push
          (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (~uVar4 + (this->SenderBuffer).Capacity != 0) {
    uVar4 = (this->SenderBuffer).WriteCounter.Counter;
    TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)
               ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10
               ),param_1);
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar4 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar4) {
    bVar3 = PushToDataChannel(this);
    return bVar3;
  }
  return true;
}

// Push @ 14afb2de0

bool __thiscall
Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>::Push
          (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (~uVar4 + (this->SenderBuffer).Capacity != 0) {
    uVar4 = (this->SenderBuffer).WriteCounter.Counter;
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)
               ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10
               ),param_1);
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar4 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar4) {
    bVar3 = PushToDataChannel(this);
    return bVar3;
  }
  return true;
}

// Push @ 14afb2e70

bool __thiscall
Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Push
          (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (~uVar4 + (this->SenderBuffer).Capacity != 0) {
    uVar4 = (this->SenderBuffer).WriteCounter.Counter;
    TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)
               ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10
               ),param_1);
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar4 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar4) {
    bVar3 = PushToDataChannel(this);
    return bVar3;
  }
  return true;
}

// Push @ 14afb2f00

bool __thiscall
Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>::Push
          (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (~uVar4 + (this->SenderBuffer).Capacity != 0) {
    uVar4 = (this->SenderBuffer).WriteCounter.Counter;
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<bool,TSizedDefaultAllocator<32>_> *)
               ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10
               ),param_1);
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar4 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar4) {
    bVar3 = PushToDataChannel(this);
    return bVar3;
  }
  return true;
}

// Push @ 14afb2f90

bool __thiscall
Metasound::TSender<Metasound::FAudioBuffer>::Push
          (TSender<Metasound::FAudioBuffer> *this,FAudioBuffer *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (~uVar4 + (this->SenderBuffer).Capacity != 0) {
    uVar4 = (this->SenderBuffer).WriteCounter.Counter;
    FAudioBuffer::operator=
              ((FAudioBuffer *)
               ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x18
               ),param_1);
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar4 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar4) {
    bVar3 = PushToDataChannel(this);
    return bVar3;
  }
  return true;
}

// Push @ 14afb3020

bool __thiscall
Metasound::TSender<FMetasoundParameterStorageWrapper>::Push
          (TSender<FMetasoundParameterStorageWrapper> *this,
          FMetasoundParameterStorageWrapper *param_1)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMetasoundParameterPackStorage *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar7 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar7 = uVar7 + (this->SenderBuffer).Capacity;
  }
  if (~uVar7 + (this->SenderBuffer).Capacity != 0) {
    uVar7 = (this->SenderBuffer).WriteCounter.Counter;
    pTVar3 = (param_1->ParameterStoragePtr).SharedReferenceCount.ReferenceController;
    pFVar8 = (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar7 * 0x10;
    pFVar4 = (param_1->ParameterStoragePtr).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    *(FMetasoundParameterPackStorage **)pFVar8 = pFVar4;
    *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar7 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar7 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar7 = uVar7 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar7) {
    bVar6 = PushToDataChannel(this);
    return bVar6;
  }
  return true;
}

// Push @ 14afb30d0

bool __thiscall
Metasound::TSender<Metasound::FSendAddress>::Push
          (TSender<Metasound::FSendAddress> *this,FSendAddress *param_1)

{
  TUniquePtr<Metasound::FSendAddress,TDefaultDelete<Metasound::FSendAddress>_> *pTVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  long64 lVar8;
  FSendAddress *pFVar9;
  FSendAddress *pFVar10;
  uint uVar11;
  longlong local_58;
  FSendAddress local_50;
  FSendAddress local_30;
  
  iVar2 = (this->SenderBuffer).ReadCounter.Counter;
  iVar3 = (this->SenderBuffer).WriteCounter.Counter;
  uVar11 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    uVar11 = uVar11 + (this->SenderBuffer).Capacity;
  }
  if (~uVar11 + (this->SenderBuffer).Capacity != 0) {
    pFVar4 = (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
    uVar11 = (this->SenderBuffer).WriteCounter.Counter;
    *(FName *)(pFVar4 + (ulonglong)uVar11 * 0x20 + 8) = param_1->ChannelName;
    *(FName *)(pFVar4 + (ulonglong)uVar11 * 0x20 + 0x10) = param_1->DataType;
    *(ulong64 *)(pFVar4 + (ulonglong)uVar11 * 0x20 + 0x18) = param_1->InstanceID;
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar11 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar2 = (this->SenderBuffer).ReadCounter.Counter;
  iVar3 = (this->SenderBuffer).WriteCounter.Counter;
  uVar11 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    uVar11 = uVar11 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar11) {
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    lVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    pFVar9 = (this->Payload).Ptr;
    pTVar1 = &this->Payload;
    this->PayloadID = lVar8;
    if (pFVar9 == (FSendAddress *)0x0) {
      pFVar9 = Audio::TCircularAudioBuffer<Metasound::FSendAddress,16>::Pop
                         (&this->SenderBuffer,&local_50);
      pFVar10 = ::operator_new(0x20);
      if (pFVar10 == (FSendAddress *)0x0) {
        pFVar10 = (FSendAddress *)0x0;
      }
      else {
        pFVar10->_padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
        pFVar10->ChannelName = pFVar9->ChannelName;
        pFVar10->DataType = pFVar9->DataType;
        pFVar10->InstanceID = pFVar9->InstanceID;
      }
      if (pTVar1 == (TUniquePtr<Metasound::FSendAddress,TDefaultDelete<Metasound::FSendAddress>_> *)
                    &local_58) {
        if (pFVar10 != (FSendAddress *)0x0) {
          (**(code **)pFVar10->_padding_)(pFVar10,1);
        }
      }
      else {
        pFVar9 = pTVar1->Ptr;
        pTVar1->Ptr = pFVar10;
        if (pFVar9 != (FSendAddress *)0x0) {
          (**(code **)pFVar9->_padding_)(pFVar9,1);
        }
      }
    }
    else {
      pFVar10 = Audio::TCircularAudioBuffer<Metasound::FSendAddress,16>::Pop
                          (&this->SenderBuffer,&local_30);
      pFVar9 = pTVar1->Ptr;
      pFVar9->ChannelName = pFVar10->ChannelName;
      pFVar9->DataType = pFVar10->DataType;
      pFVar9->InstanceID = pFVar10->InstanceID;
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014afb328f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
    return (bool)uVar7;
  }
  return true;
}

// Push @ 14afb32b0

bool __thiscall Metasound::TSender<FString>::Push(TSender<FString> *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (~uVar4 + (this->SenderBuffer).Capacity != 0) {
    uVar4 = (this->SenderBuffer).WriteCounter.Counter;
    ::FString::operator=
              ((FString *)
               ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10
               ),param_1);
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar4 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar4) {
    bVar3 = PushToDataChannel(this);
    return bVar3;
  }
  return true;
}

// Push @ 14afb3340

bool __thiscall
Metasound::TSender<Metasound::FTrigger>::Push(TSender<Metasound::FTrigger> *this,FTrigger *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (~uVar4 + (this->SenderBuffer).Capacity != 0) {
    uVar4 = (this->SenderBuffer).WriteCounter.Counter;
    this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)
              ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x20)
    ;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(this_00,&param_1->TriggeredFrames);
    *(bool *)&this_00[1].AllocatorInstance.Data = param_1->bHasAdvanced;
    *(bool *)((longlong)&this_00[1].AllocatorInstance.Data + 1) = param_1->bTriggeredFromInit;
    *(bool *)((longlong)&this_00[1].AllocatorInstance.Data + 2) = param_1->bHasTrigger;
    *(int *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = param_1->NumFramesPerBlock;
    this_00[1].ArrayNum = param_1->SampleRate;
    this_00[1].ArrayMax = param_1->LastTriggerIndexInBlock;
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar4 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar1 = (this->SenderBuffer).ReadCounter.Counter;
  iVar2 = (this->SenderBuffer).WriteCounter.Counter;
  uVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar4 = uVar4 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar4) {
    bVar3 = PushToDataChannel(this);
    return bVar3;
  }
  return true;
}

// Push @ 14afb3410

bool __thiscall Metasound::TSender<bool>::Push(TSender<bool> *this,bool *param_1)

{
  TUniquePtr<bool,TDefaultDelete<bool>_> *pTVar1;
  int iVar2;
  int iVar3;
  bool *pbVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  long64 lVar8;
  bool *pbVar9;
  uint uVar10;
  undefined8 local_18 [2];
  
  iVar2 = (this->SenderBuffer).ReadCounter.Counter;
  iVar3 = (this->SenderBuffer).WriteCounter.Counter;
  uVar10 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    uVar10 = uVar10 + (this->SenderBuffer).Capacity;
  }
  if (~uVar10 + (this->SenderBuffer).Capacity != 0) {
    uVar10 = (this->SenderBuffer).WriteCounter.Counter;
    (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data[uVar10] =
         (FScriptContainerElement)*param_1;
    LOCK();
    (this->SenderBuffer).WriteCounter.Counter = (uVar10 + 1) % (this->SenderBuffer).Capacity;
    UNLOCK();
  }
  iVar2 = (this->SenderBuffer).ReadCounter.Counter;
  iVar3 = (this->SenderBuffer).WriteCounter.Counter;
  uVar10 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    uVar10 = uVar10 + (this->SenderBuffer).Capacity;
  }
  if (this->NumElementsToDelayBy <= uVar10) {
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    lVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    pbVar9 = (this->Payload).Ptr;
    pTVar1 = &this->Payload;
    this->PayloadID = lVar8;
    if (pbVar9 == (bool *)0x0) {
      bVar6 = Audio::TCircularAudioBuffer<bool,16>::Pop(&this->SenderBuffer);
      pbVar9 = ::operator_new(1);
      if (pbVar9 == (bool *)0x0) {
        pbVar9 = (bool *)0x0;
      }
      else {
        *pbVar9 = bVar6;
      }
      if (pTVar1 != (TUniquePtr<bool,TDefaultDelete<bool>_> *)local_18) {
        pbVar4 = pTVar1->Ptr;
        pTVar1->Ptr = pbVar9;
        pbVar9 = (bool *)0x0;
        ::operator_delete(pbVar4,1);
      }
      ::operator_delete(pbVar9,1);
    }
    else {
      bVar6 = Audio::TCircularAudioBuffer<bool,16>::Pop(&this->SenderBuffer);
      *pTVar1->Ptr = bVar6;
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014afb356e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
    return (bool)uVar7;
  }
  return true;
}

// PushToDataChannel @ 14afb3700

bool __thiscall
Metasound::TSender<TArray<int,TSizedDefaultAllocator<32>_>_>::PushToDataChannel
          (TSender<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_30;
  TArray<int,TSizedDefaultAllocator<32>_> local_20;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pTVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pTVar9 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = Audio::TCircularAudioBuffer<TArray<int,TSizedDefaultAllocator<32>_>,16>::Pop
                       (&this->SenderBuffer,&local_30);
    pTVar8 = ::operator_new(0x10);
    pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar8->ArrayNum = pTVar7->ArrayNum;
      pTVar8->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      pTVar9 = pTVar8;
    }
    if (pTVar1 == (TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                   *)&local_38) {
      if (pTVar9 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar9,0x10);
      }
    }
    else {
      pTVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar9;
      if (pTVar7 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar7,0x10);
      }
    }
  }
  else {
    pTVar7 = Audio::TCircularAudioBuffer<TArray<int,TSizedDefaultAllocator<32>_>,16>::Pop
                       (&this->SenderBuffer,&local_20);
    pTVar9 = pTVar1->Ptr;
    local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    if (pTVar9 != pTVar7) {
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar9->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = pTVar7->ArrayNum;
      pTVar9->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    }
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014afb389b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14afb38b0

bool __thiscall
Metasound::TSender<TArray<float,TSizedDefaultAllocator<32>_>_>::PushToDataChannel
          (TSender<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  TUniquePtr<TArray<float,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<float,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong local_38;
  TArray<float,TSizedDefaultAllocator<32>_> local_30;
  TArray<float,TSizedDefaultAllocator<32>_> local_20;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pTVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pTVar9 == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = Audio::TCircularAudioBuffer<TArray<float,TSizedDefaultAllocator<32>_>,16>::Pop
                       (&this->SenderBuffer,&local_30);
    pTVar8 = ::operator_new(0x10);
    pTVar9 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar8 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar8->ArrayNum = pTVar7->ArrayNum;
      pTVar8->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      pTVar9 = pTVar8;
    }
    if (pTVar1 == (TUniquePtr<TArray<float,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                   *)&local_38) {
      if (pTVar9 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar9,0x10);
      }
    }
    else {
      pTVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar9;
      if (pTVar7 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar7,0x10);
      }
    }
  }
  else {
    pTVar7 = Audio::TCircularAudioBuffer<TArray<float,TSizedDefaultAllocator<32>_>,16>::Pop
                       (&this->SenderBuffer,&local_20);
    pTVar9 = pTVar1->Ptr;
    local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    if (pTVar9 != pTVar7) {
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar9->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = pTVar7->ArrayNum;
      pTVar9->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    }
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014afb3a4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14afb3a60

bool __thiscall
Metasound::TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
PushToDataChannel(TSender<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                  *this)

{
  TUniquePtr<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong local_38;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_30;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_20;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pTVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pTVar9 != (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = Audio::
             TCircularAudioBuffer<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,16>
             ::Pop(&this->SenderBuffer,&local_20);
    pTVar9 = pTVar1->Ptr;
    if (pTVar9 != pTVar7) {
      DestructItems<FMetasoundParameterStorageWrapper,int>
                ((FMetasoundParameterStorageWrapper *)(pTVar9->AllocatorInstance).Data,
                 pTVar9->ArrayNum);
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar9->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = pTVar7->ArrayNum;
      pTVar9->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
    }
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)local_20.AllocatorInstance.Data,
               local_20.ArrayNum);
    local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    goto LAB_14afb3bd4;
  }
  pTVar7 = Audio::
           TCircularAudioBuffer<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,16>
           ::Pop(&this->SenderBuffer,&local_30);
  pTVar8 = ::operator_new(0x10);
  pTVar9 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0;
  if (pTVar8 != (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar8->ArrayNum = pTVar7->ArrayNum;
    pTVar8->ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
    pTVar9 = pTVar8;
  }
  if (pTVar1 == (TUniquePtr<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                 *)&local_38) {
    if (pTVar9 != (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
      DestructItems<FMetasoundParameterStorageWrapper,int>
                ((FMetasoundParameterStorageWrapper *)(pTVar9->AllocatorInstance).Data,
                 pTVar9->ArrayNum);
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      pTVar7 = pTVar9;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      goto LAB_14afb3b5a;
    }
  }
  else {
    pTVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar9;
    if (pTVar7 != (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)0x0) {
      DestructItems<FMetasoundParameterStorageWrapper,int>
                ((FMetasoundParameterStorageWrapper *)(pTVar7->AllocatorInstance).Data,
                 pTVar7->ArrayNum);
      pFVar2 = (pTVar7->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
LAB_14afb3b5a:
      ::operator_delete(pTVar7,0x10);
    }
  }
  DestructItems<FMetasoundParameterStorageWrapper,int>
            ((FMetasoundParameterStorageWrapper *)local_30.AllocatorInstance.Data,local_30.ArrayNum)
  ;
LAB_14afb3bd4:
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014afb3c29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14afb3c40

bool __thiscall
Metasound::TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::PushToDataChannel
          (TSender<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  TUniquePtr<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong local_38;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_30;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_20;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pTVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pTVar9 == (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = Audio::
             TCircularAudioBuffer<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,16>::
             Pop(&this->SenderBuffer,&local_30);
    pTVar8 = ::operator_new(0x10);
    pTVar9 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar8 != (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar8->ArrayNum = pTVar7->ArrayNum;
      pTVar8->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      pTVar9 = pTVar8;
    }
    if (pTVar1 == (TUniquePtr<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                   *)&local_38) {
      if (pTVar9 != (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar9,0x10);
      }
    }
    else {
      pTVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar9;
      if (pTVar7 != (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar7,0x10);
      }
    }
  }
  else {
    pTVar7 = Audio::
             TCircularAudioBuffer<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,16>::
             Pop(&this->SenderBuffer,&local_20);
    pTVar9 = pTVar1->Ptr;
    local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    if (pTVar9 != pTVar7) {
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar9->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = pTVar7->ArrayNum;
      pTVar9->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    }
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014afb3ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14afb3df0

bool __thiscall
Metasound::TSender<TArray<FString,TSizedDefaultAllocator<32>_>_>::PushToDataChannel
          (TSender<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  TUniquePtr<TArray<FString,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_30;
  TArray<FString,TSizedDefaultAllocator<32>_> local_20;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pTVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pTVar9 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = Audio::TCircularAudioBuffer<TArray<FString,TSizedDefaultAllocator<32>_>,16>::Pop
                       (&this->SenderBuffer,&local_20);
    pTVar9 = pTVar1->Ptr;
    if (pTVar9 != pTVar7) {
      DestructItems<FString,int>((FString *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar9->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = pTVar7->ArrayNum;
      pTVar9->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
    }
    DestructItems<FString,int>((FString *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
    local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    goto LAB_14afb3f64;
  }
  pTVar7 = Audio::TCircularAudioBuffer<TArray<FString,TSizedDefaultAllocator<32>_>,16>::Pop
                     (&this->SenderBuffer,&local_30);
  pTVar8 = ::operator_new(0x10);
  pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
  if (pTVar8 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar8->ArrayNum = pTVar7->ArrayNum;
    pTVar8->ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
    pTVar9 = pTVar8;
  }
  if (pTVar1 == (TUniquePtr<TArray<FString,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                 *)&local_38) {
    if (pTVar9 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      DestructItems<FString,int>((FString *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      pTVar7 = pTVar9;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      goto LAB_14afb3eea;
    }
  }
  else {
    pTVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar9;
    if (pTVar7 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      DestructItems<FString,int>((FString *)(pTVar7->AllocatorInstance).Data,pTVar7->ArrayNum);
      pFVar2 = (pTVar7->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
LAB_14afb3eea:
      ::operator_delete(pTVar7,0x10);
    }
  }
  DestructItems<FString,int>((FString *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
LAB_14afb3f64:
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014afb3fb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14afb3fd0

bool __thiscall
Metasound::TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::PushToDataChannel
          (TSender<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  TUniquePtr<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong local_38;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_30;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_20;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pTVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pTVar9 == (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = Audio::TCircularAudioBuffer<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,16>::
             Pop(&this->SenderBuffer,&local_30);
    pTVar8 = ::operator_new(0x10);
    pTVar9 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar8 != (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar8->ArrayNum = pTVar7->ArrayNum;
      pTVar8->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      pTVar9 = pTVar8;
    }
    if (pTVar1 == (TUniquePtr<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                   *)&local_38) {
      if (pTVar9 != (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar9,0x10);
      }
    }
    else {
      pTVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar9;
      if (pTVar7 != (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar7,0x10);
      }
    }
  }
  else {
    pTVar7 = Audio::TCircularAudioBuffer<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,16>::
             Pop(&this->SenderBuffer,&local_20);
    pTVar9 = pTVar1->Ptr;
    local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    if (pTVar9 != pTVar7) {
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar9->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = pTVar7->ArrayNum;
      pTVar9->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    }
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014afb416b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14afb4180

bool __thiscall
Metasound::TSender<TArray<bool,TSizedDefaultAllocator<32>_>_>::PushToDataChannel
          (TSender<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  TUniquePtr<TArray<bool,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong local_38;
  TArray<bool,TSizedDefaultAllocator<32>_> local_30;
  TArray<bool,TSizedDefaultAllocator<32>_> local_20;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pTVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pTVar9 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = Audio::TCircularAudioBuffer<TArray<bool,TSizedDefaultAllocator<32>_>,16>::Pop
                       (&this->SenderBuffer,&local_30);
    pTVar8 = ::operator_new(0x10);
    pTVar9 = (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar8 != (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar8->ArrayNum = pTVar7->ArrayNum;
      pTVar8->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      pTVar9 = pTVar8;
    }
    if (pTVar1 == (TUniquePtr<TArray<bool,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                   *)&local_38) {
      if (pTVar9 != (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar9,0x10);
      }
    }
    else {
      pTVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar9;
      if (pTVar7 != (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar7,0x10);
      }
    }
  }
  else {
    pTVar7 = Audio::TCircularAudioBuffer<TArray<bool,TSizedDefaultAllocator<32>_>,16>::Pop
                       (&this->SenderBuffer,&local_20);
    pTVar9 = pTVar1->Ptr;
    local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    if (pTVar9 != pTVar7) {
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar9->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = pTVar7->ArrayNum;
      pTVar9->ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    }
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014afb431b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14afb4330

bool __thiscall
Metasound::TSender<FMetasoundParameterStorageWrapper>::PushToDataChannel
          (TSender<FMetasoundParameterStorageWrapper> *this)

{
  TUniquePtr<FMetasoundParameterStorageWrapper,TDefaultDelete<FMetasoundParameterStorageWrapper>_>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMetasoundParameterPackStorage *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  long64 lVar7;
  FMetasoundParameterStorageWrapper *pFVar8;
  FMetasoundParameterStorageWrapper *pFVar9;
  longlong local_48;
  FMetasoundParameterStorageWrapper local_40;
  FMetasoundParameterPackStorage *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  FMetasoundParameterStorageWrapper local_20;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pFVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar7;
  if (pFVar9 != (FMetasoundParameterStorageWrapper *)0x0) {
    pFVar8 = Audio::TCircularAudioBuffer<FMetasoundParameterStorageWrapper,16>::Pop
                       (&this->SenderBuffer,&local_20);
    pFVar9 = pTVar1->Ptr;
    pTVar2 = (pFVar8->ParameterStoragePtr).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar8->ParameterStoragePtr).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30 = (pFVar9->ParameterStoragePtr).Object;
    pTStack_28 = (pFVar9->ParameterStoragePtr).SharedReferenceCount.ReferenceController;
    (pFVar9->ParameterStoragePtr).Object = pFVar3;
    (pFVar9->ParameterStoragePtr).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ParameterStoragePtr.SharedReferenceCount.ReferenceController);
    goto LAB_14afb4469;
  }
  pFVar8 = Audio::TCircularAudioBuffer<FMetasoundParameterStorageWrapper,16>::Pop
                     (&this->SenderBuffer,&local_40);
  pFVar9 = ::operator_new(0x10);
  if (pFVar9 == (FMetasoundParameterStorageWrapper *)0x0) {
    pFVar9 = (FMetasoundParameterStorageWrapper *)0x0;
  }
  else {
    (pFVar9->ParameterStoragePtr).Object = (pFVar8->ParameterStoragePtr).Object;
    pTVar2 = (pFVar8->ParameterStoragePtr).SharedReferenceCount.ReferenceController;
    (pFVar9->ParameterStoragePtr).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (pTVar1 == (TUniquePtr<FMetasoundParameterStorageWrapper,TDefaultDelete<FMetasoundParameterStorageWrapper>_>
                 *)&local_48) {
    if (pFVar9 != (FMetasoundParameterStorageWrapper *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->ParameterStoragePtr).SharedReferenceCount.ReferenceController);
      goto LAB_14afb4407;
    }
  }
  else {
    pFVar8 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9;
    if (pFVar8 != (FMetasoundParameterStorageWrapper *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar8->ParameterStoragePtr).SharedReferenceCount.ReferenceController);
      pFVar9 = pFVar8;
LAB_14afb4407:
      ::operator_delete(pFVar9,0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ParameterStoragePtr.SharedReferenceCount.ReferenceController);
LAB_14afb4469:
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014afb44ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar6;
}

// PushToDataChannel @ 14afb44c0

bool __thiscall Metasound::TSender<FString>::PushToDataChannel(TSender<FString> *this)

{
  TUniquePtr<FString,TDefaultDelete<FString>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  FString *pFVar7;
  FString *pFVar8;
  FString *pFVar9;
  longlong local_38;
  FString local_30;
  FString local_20;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pFVar9 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pFVar9 == (FString *)0x0) {
    pFVar7 = Audio::TCircularAudioBuffer<FString,16>::Pop(&this->SenderBuffer,&local_30);
    pFVar8 = ::operator_new(0x10);
    pFVar9 = (FString *)0x0;
    if (pFVar8 != (FString *)0x0) {
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->Data).ArrayNum = (pFVar7->Data).ArrayNum;
      (pFVar8->Data).ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      pFVar9 = pFVar8;
    }
    if (pTVar1 == (TUniquePtr<FString,TDefaultDelete<FString>_> *)&local_38) {
      if (pFVar9 != (FString *)0x0) {
        pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar9,0x10);
      }
    }
    else {
      pFVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar9;
      if (pFVar7 != (FString *)0x0) {
        pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar7,0x10);
      }
    }
  }
  else {
    pFVar7 = Audio::TCircularAudioBuffer<FString,16>::Pop(&this->SenderBuffer,&local_20);
    pFVar9 = pTVar1->Ptr;
    local_30.Data.AllocatorInstance.Data = local_20.Data.AllocatorInstance.Data;
    if (pFVar9 != pFVar7) {
      pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar9->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar9->Data).ArrayNum = (pFVar7->Data).ArrayNum;
      (pFVar9->Data).ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      local_30.Data.AllocatorInstance.Data = local_20.Data.AllocatorInstance.Data;
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014afb465b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14afb4670

bool __thiscall
Metasound::TSender<Metasound::FTrigger>::PushToDataChannel(TSender<Metasound::FTrigger> *this)

{
  TUniquePtr<Metasound::FTrigger,TDefaultDelete<Metasound::FTrigger>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  FTrigger *pFVar7;
  FTrigger *pFVar8;
  undefined8 local_58;
  FTrigger local_50;
  FTrigger local_30;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pFVar7 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pFVar7 == (FTrigger *)0x0) {
    pFVar7 = Audio::TCircularAudioBuffer<Metasound::FTrigger,16>::Pop(&this->SenderBuffer,&local_50)
    ;
    pFVar8 = ::operator_new(0x20);
    if (pFVar8 != (FTrigger *)0x0) {
      (pFVar8->TriggeredFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->TriggeredFrames).AllocatorInstance.Data =
           (pFVar7->TriggeredFrames).AllocatorInstance.Data;
      (pFVar7->TriggeredFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->TriggeredFrames).ArrayNum = (pFVar7->TriggeredFrames).ArrayNum;
      (pFVar8->TriggeredFrames).ArrayMax = (pFVar7->TriggeredFrames).ArrayMax;
      (pFVar7->TriggeredFrames).ArrayNum = 0;
      (pFVar7->TriggeredFrames).ArrayMax = 0;
      pFVar8->bHasAdvanced = pFVar7->bHasAdvanced;
      pFVar8->bTriggeredFromInit = pFVar7->bTriggeredFromInit;
      pFVar8->bHasTrigger = pFVar7->bHasTrigger;
      pFVar8->NumFramesPerBlock = pFVar7->NumFramesPerBlock;
      pFVar8->SampleRate = pFVar7->SampleRate;
      pFVar8->LastTriggerIndexInBlock = pFVar7->LastTriggerIndexInBlock;
    }
    local_30.TriggeredFrames.AllocatorInstance.Data =
         local_50.TriggeredFrames.AllocatorInstance.Data;
    if (pTVar1 == (TUniquePtr<Metasound::FTrigger,TDefaultDelete<Metasound::FTrigger>_> *)&local_58)
    {
      if (pFVar8 == (FTrigger *)0x0) goto LAB_14afb47c7;
      pFVar2 = (pFVar8->TriggeredFrames).AllocatorInstance.Data;
      pFVar7 = pFVar8;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    else {
      pFVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar8;
      if (pFVar7 == (FTrigger *)0x0) goto LAB_14afb47c7;
      pFVar2 = (pFVar7->TriggeredFrames).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    ::operator_delete(pFVar7,0x20);
    local_30.TriggeredFrames.AllocatorInstance.Data =
         local_50.TriggeredFrames.AllocatorInstance.Data;
  }
  else {
    pFVar7 = Audio::TCircularAudioBuffer<Metasound::FTrigger,16>::Pop(&this->SenderBuffer,&local_30)
    ;
    FTrigger::operator=(pTVar1->Ptr,pFVar7);
  }
LAB_14afb47c7:
  if (local_30.TriggeredFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.TriggeredFrames.AllocatorInstance.Data);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014afb4815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

