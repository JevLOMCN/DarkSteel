// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 43

// PushLiteral @ 14b2c5740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          ::IsParsable(param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                  ();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> *)
                    CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b2c58b0

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b2c66b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FLiteral *param_1)

{
  bool bVar1;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TLiteralTraits<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pTVar2 = TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pTVar2);
  DestructItems<Metasound::FWaveAsset,int>
            ((FWaveAsset *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14b2c6840

long64 __thiscall
Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14b2cc3b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
PushLiteral(void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          ::IsParsable(param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                  ();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> *)
                    CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b2cc4a0

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b2cf010

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FLiteral *param_1)

{
  bool bVar1;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TLiteralTraits<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>()
        ;
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pTVar2 = TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pTVar2);
  DestructItems<Metasound::FAudioBusAsset,int>
            ((FAudioBusAsset *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14b2cf470

long64 __thiscall
Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetPayloadID
          (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14b2d8cb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::FWaveTableBankAsset>::PushLiteral
          (TSender<Metasound::FWaveTableBankAsset> *this,FLiteral *param_1)

{
  bool bVar1;
  FWaveTableBankAsset *pFVar2;
  undefined1 local_18 [16];
  
  bVar1 = TLiteralTraits<Metasound::FWaveTableBankAsset>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)local_18,param_1);
        GetMetasoundDataTypeString<Metasound::FWaveTableBankAsset>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::FWaveTableBankAsset>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_18._0_8_);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pFVar2 = TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FWaveTableBankAsset>_>
           ::CreateExplicitArgs
                     ((FWaveTableBankAsset *)local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  return bVar1;
}

// GetPayloadID @ 14b2d8df0

long64 __thiscall
Metasound::TSender<Metasound::FWaveTableBankAsset>::GetPayloadID
          (TSender<Metasound::FWaveTableBankAsset> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14b2e0840

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<WaveTable::FWaveTable>::PushLiteral
          (TSender<WaveTable::FWaveTable> *this,FLiteral *param_1)

{
  bool bVar1;
  FWaveTable *pFVar2;
  FWaveTable local_28;
  
  bVar1 = TLiteralTraits<WaveTable::FWaveTable>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_28,param_1);
        GetMetasoundDataTypeString<WaveTable::FWaveTable>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<WaveTable::FWaveTable>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_28.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Samples.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pFVar2 = TDataLiteralFactory<WaveTable::FWaveTable,Metasound::DataFactoryPrivate::TDataTypeCreator<WaveTable::FWaveTable>_>
           ::CreateExplicitArgs(&local_28,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pFVar2);
  if (local_28.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Samples.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14b2e0d70

long64 __thiscall
Metasound::TSender<WaveTable::FWaveTable>::GetPayloadID(TSender<WaveTable::FWaveTable> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14b2ead10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::FWaveAsset>::PushLiteral
          (TSender<Metasound::FWaveAsset> *this,FLiteral *param_1)

{
  bool bVar1;
  FWaveAsset *pFVar2;
  undefined1 local_18 [16];
  
  bVar1 = TLiteralTraits<Metasound::FWaveAsset>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)local_18,param_1);
        GetMetasoundDataTypeString<Metasound::FWaveAsset>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::FWaveAsset>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_18._0_8_);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pFVar2 = TDataLiteralFactory<Metasound::FWaveAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FWaveAsset>_>
           ::CreateExplicitArgs((FWaveAsset *)local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  return bVar1;
}

// GetPayloadID @ 14b2eae30

long64 __thiscall
Metasound::TSender<Metasound::FWaveAsset>::GetPayloadID(TSender<Metasound::FWaveAsset> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14b2f26a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::FAudioBusAsset>::PushLiteral
          (TSender<Metasound::FAudioBusAsset> *this,FLiteral *param_1)

{
  bool bVar1;
  FAudioBusAsset *pFVar2;
  FAudioBusAsset local_18;
  
  bVar1 = TLiteralTraits<Metasound::FAudioBusAsset>::IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::FAudioBusAsset>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::FAudioBusAsset>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AudioBusProxy.Object != (FAudioBusProxy *)0x0) {
          FMemory::Free(local_18.AudioBusProxy.Object);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pFVar2 = TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FAudioBusAsset>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.AudioBusProxy.SharedReferenceCount.ReferenceController);
  return bVar1;
}

// GetPayloadID @ 14b2f2990

long64 __thiscall
Metasound::TSender<Metasound::FAudioBusAsset>::GetPayloadID
          (TSender<Metasound::FAudioBusAsset> *this)

{
  return this->PayloadID;
}

// PushLiteral @ 14b2fb440

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::PushLiteral
          (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
          FLiteral *param_1)

{
  bool bVar1;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = TLiteralTraits<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
          IsParsable(param_1);
  if (!bVar1) {
    if (this->bMessageDataTypeError != false) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString((FString *)&local_18,param_1);
        GetMetasoundDataTypeString<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                  ();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      this->bMessageDataTypeError = false;
    }
    return false;
  }
  pTVar2 = TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs(&local_18,&(this->Params).OperatorSettings,param_1);
  bVar1 = Push(this,pTVar2);
  DestructItems<Metasound::FWaveTableBankAsset,int>
            ((FWaveTableBankAsset *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadID @ 14b2fb5c0

long64 __thiscall
Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetPayloadID(TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  return this->PayloadID;
}

// TSender<WaveTable::FWaveTable> @ 14b3410c0

TSender<WaveTable::FWaveTable> * __thiscall
Metasound::TSender<WaveTable::FWaveTable>::TSender<WaveTable::FWaveTable>
          (TSender<WaveTable::FWaveTable> *this,FSenderInitParams *param_1,
          TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  FWaveTable *pFVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
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
  this->_padding_ = (longlong)&___7__TSender_UFWaveTable_WaveTable___Metasound__6B_;
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
  pFVar7 = (FWaveTable *)(this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<WaveTable::FWaveTable,int>(pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<WaveTable::FWaveTable,int>(pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x18,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x18,0,
         (longlong)(int)uVar3 * 0x18);
  (this->Payload).Ptr = (FWaveTable *)0x0;
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
  pFVar7 = (FWaveTable *)(this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<WaveTable::FWaveTable,int>(pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<WaveTable::FWaveTable,int>(pFVar7,*piVar1);
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

// TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b3412e0

TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
       ___7__TSender_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
  pTVar7 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1)
    ;
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1)
    ;
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar7 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1)
    ;
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1)
    ;
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

// TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b341500

TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
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
       ___7__TSender_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
  pTVar7 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar7 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,int>(pTVar7,*piVar1);
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

// TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b341720

TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
          FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FName *pFVar11;
  
  pFVar11 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
       ___7__TSender_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
  pTVar7 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar7 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)
           (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data;
  if (*piVar2 < 0) {
    DestructItems<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,int>
              (pTVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,int>
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

// TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b341940

TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
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
       &
       ___7__TSender_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
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

// TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b341b20

TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
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
       &
       ___7__TSender_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
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

// TSender<Metasound::FAudioBusAsset> @ 14b341d00

TSender<Metasound::FAudioBusAsset> * __thiscall
Metasound::TSender<Metasound::FAudioBusAsset>::TSender<Metasound::FAudioBusAsset>
          (TSender<Metasound::FAudioBusAsset> *this,FSenderInitParams *param_1,
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
  
  pFVar11 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
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
  this->_padding_ = (longlong)&___7__TSender_VFAudioBusAsset_Metasound___Metasound__6B_;
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
    DestructItems<Metasound::FAudioBusAsset,int>((FAudioBusAsset *)pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::FAudioBusAsset,int>((FAudioBusAsset *)pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (FAudioBusAsset *)0x0;
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
    DestructItems<Metasound::FAudioBusAsset,int>((FAudioBusAsset *)pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::FAudioBusAsset,int>((FAudioBusAsset *)pFVar7,*piVar1);
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

// TSender<Metasound::FWaveAsset> @ 14b341f20

TSender<Metasound::FWaveAsset> * __thiscall
Metasound::TSender<Metasound::FWaveAsset>::TSender<Metasound::FWaveAsset>
          (TSender<Metasound::FWaveAsset> *this,FSenderInitParams *param_1,
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
  
  pFVar11 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
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
  this->_padding_ = (longlong)&___7__TSender_VFWaveAsset_Metasound___Metasound__6B_;
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
    DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (FWaveAsset *)0x0;
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
    DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)pFVar7,*piVar1);
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

// TSender<Metasound::FWaveTableBankAsset> @ 14b342140

TSender<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::TSender<Metasound::FWaveTableBankAsset>::TSender<Metasound::FWaveTableBankAsset>
          (TSender<Metasound::FWaveTableBankAsset> *this,FSenderInitParams *param_1,
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
  
  pFVar11 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
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
  this->_padding_ = (longlong)&___7__TSender_VFWaveTableBankAsset_Metasound___Metasound__6B_;
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
    DestructItems<Metasound::FWaveTableBankAsset,int>((FWaveTableBankAsset *)pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::FWaveTableBankAsset,int>((FWaveTableBankAsset *)pFVar7,*piVar1);
    *piVar1 = 0;
  }
  uVar3 = (this->SenderBuffer).Capacity;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (0x10,8,uVar3,(ForAnyElementType *)&this->SenderBuffer,piVar1,piVar2);
  memset((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
         (longlong)(int)uVar3 << 4);
  (this->Payload).Ptr = (FWaveTableBankAsset *)0x0;
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
    DestructItems<Metasound::FWaveTableBankAsset,int>((FWaveTableBankAsset *)pFVar7,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->SenderBuffer,0,piVar2);
    }
  }
  else {
    DestructItems<Metasound::FWaveTableBankAsset,int>((FWaveTableBankAsset *)pFVar7,*piVar1);
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

// Push @ 14b3cde50

bool __thiscall
Metasound::TSender<WaveTable::FWaveTable>::Push
          (TSender<WaveTable::FWaveTable> *this,FWaveTable *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
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
    this_00 = (TArray<float,TSizedDefaultAllocator<32>_> *)
              ((this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar4 * 0x18)
    ;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=(this_00,&param_1->Samples);
    *(float *)&this_00[1].AllocatorInstance.Data = param_1->FinalValue;
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

// Push @ 14b3cdf00

bool __thiscall
Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Push
          (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *param_1)

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
    TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)
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

// Push @ 14b3cdf90

bool __thiscall
Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Push
          (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *param_1)

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
    TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)
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

// Push @ 14b3ce020

bool __thiscall
Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Push
          (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
          TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *param_1)

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
    TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)
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

// Push @ 14b3ce0b0

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::Push
          (void *this,TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> TVar6;
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
    *(EInterpolationMode *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
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
              TCircularAudioBuffer<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,16>
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
              TCircularAudioBuffer<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,16>
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
                    /* WARNING: Could not recover jumptable at 0x00014b3ce214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b3ce230

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::Push
          (void *this,TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> TVar6;
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
    *(ESingleSampleMode *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
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
              TCircularAudioBuffer<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,16>
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
              TCircularAudioBuffer<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,16>
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
                    /* WARNING: Could not recover jumptable at 0x00014b3ce394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b3ce3b0

bool __thiscall
Metasound::TSender<Metasound::FAudioBusAsset>::Push
          (TSender<Metasound::FAudioBusAsset> *this,FAudioBusAsset *param_1)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FAudioBusProxy *pFVar4;
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
    pTVar3 = (param_1->AudioBusProxy).SharedReferenceCount.ReferenceController;
    pFVar8 = (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar7 * 0x10;
    pFVar4 = (param_1->AudioBusProxy).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    *(FAudioBusProxy **)pFVar8 = pFVar4;
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

// Push @ 14b3ce460

bool __thiscall
Metasound::TSender<Metasound::FWaveAsset>::Push
          (TSender<Metasound::FWaveAsset> *this,FWaveAsset *param_1)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSoundWaveProxy *pFVar4;
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
    pTVar3 = (param_1->SoundWaveProxy).SharedReferenceCount.ReferenceController;
    pFVar8 = (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar7 * 0x10;
    pFVar4 = (param_1->SoundWaveProxy).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    *(FSoundWaveProxy **)pFVar8 = pFVar4;
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

// Push @ 14b3ce510

bool __thiscall
Metasound::TSender<Metasound::FWaveTableBankAsset>::Push
          (TSender<Metasound::FWaveTableBankAsset> *this,FWaveTableBankAsset *param_1)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWaveTableBankAssetProxy *pFVar4;
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
    pTVar3 = (param_1->Proxy).SharedReferenceCount.ReferenceController;
    pFVar8 = (this->SenderBuffer).InternalBuffer.AllocatorInstance.Data + (ulonglong)uVar7 * 0x10;
    pFVar4 = (param_1->Proxy).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    *(FWaveTableBankAssetProxy **)pFVar8 = pFVar4;
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

// PushToDataChannel @ 14b3ce8a0

bool __thiscall
Metasound::TSender<WaveTable::FWaveTable>::PushToDataChannel(TSender<WaveTable::FWaveTable> *this)

{
  TUniquePtr<WaveTable::FWaveTable,TDefaultDelete<WaveTable::FWaveTable>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  FWaveTable *pFVar7;
  FWaveTable *pFVar8;
  FWaveTable *pFVar9;
  longlong local_48;
  FWaveTable local_40;
  FWaveTable local_28;
  
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
  if (pFVar9 == (FWaveTable *)0x0) {
    pFVar7 = Audio::TCircularAudioBuffer<WaveTable::FWaveTable,16>::Pop
                       (&this->SenderBuffer,&local_40);
    pFVar8 = ::operator_new(0x18);
    pFVar9 = (FWaveTable *)0x0;
    if (pFVar8 != (FWaveTable *)0x0) {
      (pFVar8->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->Samples).AllocatorInstance.Data = (pFVar7->Samples).AllocatorInstance.Data;
      (pFVar7->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->Samples).ArrayNum = (pFVar7->Samples).ArrayNum;
      (pFVar8->Samples).ArrayMax = (pFVar7->Samples).ArrayMax;
      (pFVar7->Samples).ArrayNum = 0;
      (pFVar7->Samples).ArrayMax = 0;
      pFVar8->FinalValue = pFVar7->FinalValue;
      pFVar9 = pFVar8;
    }
    local_28.Samples.AllocatorInstance.Data = local_40.Samples.AllocatorInstance.Data;
    if (pTVar1 == (TUniquePtr<WaveTable::FWaveTable,TDefaultDelete<WaveTable::FWaveTable>_> *)
                  &local_48) {
      if (pFVar9 == (FWaveTable *)0x0) goto LAB_14b3ce9f1;
      pFVar2 = (pFVar9->Samples).AllocatorInstance.Data;
      pFVar7 = pFVar9;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    else {
      pFVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar9;
      if (pFVar7 == (FWaveTable *)0x0) goto LAB_14b3ce9f1;
      pFVar2 = (pFVar7->Samples).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    ::operator_delete(pFVar7,0x18);
    local_28.Samples.AllocatorInstance.Data = local_40.Samples.AllocatorInstance.Data;
  }
  else {
    pFVar7 = Audio::TCircularAudioBuffer<WaveTable::FWaveTable,16>::Pop
                       (&this->SenderBuffer,&local_28);
    pFVar9 = pTVar1->Ptr;
    if (pFVar9 != pFVar7) {
      pFVar2 = (pFVar9->Samples).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar9->Samples).AllocatorInstance.Data = (pFVar7->Samples).AllocatorInstance.Data;
      (pFVar7->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar9->Samples).ArrayNum = (pFVar7->Samples).ArrayNum;
      (pFVar9->Samples).ArrayMax = (pFVar7->Samples).ArrayMax;
      (pFVar7->Samples).ArrayNum = 0;
      (pFVar7->Samples).ArrayMax = 0;
    }
    pFVar9->FinalValue = pFVar7->FinalValue;
  }
LAB_14b3ce9f1:
  if (local_28.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Samples.AllocatorInstance.Data);
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
                    /* WARNING: Could not recover jumptable at 0x00014b3cea41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14b3cea50

bool __thiscall
Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
PushToDataChannel(TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TUniquePtr<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong local_38;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_30;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_20;
  
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
  if (pTVar9 != (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = Audio::
             TCircularAudioBuffer<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,16>
             ::Pop(&this->SenderBuffer,&local_20);
    pTVar9 = pTVar1->Ptr;
    if (pTVar9 != pTVar7) {
      DestructItems<Metasound::FAudioBusAsset,int>
                ((FAudioBusAsset *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
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
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
    local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    goto LAB_14b3cebc4;
  }
  pTVar7 = Audio::
           TCircularAudioBuffer<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,16>::
           Pop(&this->SenderBuffer,&local_30);
  pTVar8 = ::operator_new(0x10);
  pTVar9 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0;
  if (pTVar8 != (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar8->ArrayNum = pTVar7->ArrayNum;
    pTVar8->ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
    pTVar9 = pTVar8;
  }
  if (pTVar1 == (TUniquePtr<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                 *)&local_38) {
    if (pTVar9 != (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      DestructItems<Metasound::FAudioBusAsset,int>
                ((FAudioBusAsset *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      pTVar7 = pTVar9;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      goto LAB_14b3ceb4a;
    }
  }
  else {
    pTVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar9;
    if (pTVar7 != (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      DestructItems<Metasound::FAudioBusAsset,int>
                ((FAudioBusAsset *)(pTVar7->AllocatorInstance).Data,pTVar7->ArrayNum);
      pFVar2 = (pTVar7->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
LAB_14b3ceb4a:
      ::operator_delete(pTVar7,0x10);
    }
  }
  DestructItems<Metasound::FAudioBusAsset,int>
            ((FAudioBusAsset *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
LAB_14b3cebc4:
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
                    /* WARNING: Could not recover jumptable at 0x00014b3cec19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14b3cec30

bool __thiscall
Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::PushToDataChannel
          (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TUniquePtr<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong local_38;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_30;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_20;
  
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
  if (pTVar9 != (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = Audio::
             TCircularAudioBuffer<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,16>::Pop
                       (&this->SenderBuffer,&local_20);
    pTVar9 = pTVar1->Ptr;
    if (pTVar9 != pTVar7) {
      DestructItems<Metasound::FWaveAsset,int>
                ((FWaveAsset *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
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
    DestructItems<Metasound::FWaveAsset,int>
              ((FWaveAsset *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
    local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    goto LAB_14b3ceda4;
  }
  pTVar7 = Audio::TCircularAudioBuffer<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,16>
           ::Pop(&this->SenderBuffer,&local_30);
  pTVar8 = ::operator_new(0x10);
  pTVar9 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0;
  if (pTVar8 != (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar8->ArrayNum = pTVar7->ArrayNum;
    pTVar8->ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
    pTVar9 = pTVar8;
  }
  if (pTVar1 == (TUniquePtr<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                 *)&local_38) {
    if (pTVar9 != (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      DestructItems<Metasound::FWaveAsset,int>
                ((FWaveAsset *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      pTVar7 = pTVar9;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      goto LAB_14b3ced2a;
    }
  }
  else {
    pTVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar9;
    if (pTVar7 != (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      DestructItems<Metasound::FWaveAsset,int>
                ((FWaveAsset *)(pTVar7->AllocatorInstance).Data,pTVar7->ArrayNum);
      pFVar2 = (pTVar7->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
LAB_14b3ced2a:
      ::operator_delete(pTVar7,0x10);
    }
  }
  DestructItems<Metasound::FWaveAsset,int>
            ((FWaveAsset *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
LAB_14b3ceda4:
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
                    /* WARNING: Could not recover jumptable at 0x00014b3cedf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14b3cee10

bool __thiscall
Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
PushToDataChannel(TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this
                 )

{
  TUniquePtr<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong local_38;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_30;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_20;
  
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
  if (pTVar9 != (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = Audio::
             TCircularAudioBuffer<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,16>
             ::Pop(&this->SenderBuffer,&local_20);
    pTVar9 = pTVar1->Ptr;
    if (pTVar9 != pTVar7) {
      DestructItems<Metasound::FWaveTableBankAsset,int>
                ((FWaveTableBankAsset *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
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
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
    local_30.AllocatorInstance.Data = local_20.AllocatorInstance.Data;
    goto LAB_14b3cef84;
  }
  pTVar7 = Audio::
           TCircularAudioBuffer<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,16>
           ::Pop(&this->SenderBuffer,&local_30);
  pTVar8 = ::operator_new(0x10);
  pTVar9 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0;
  if (pTVar8 != (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar8->ArrayNum = pTVar7->ArrayNum;
    pTVar8->ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
    pTVar9 = pTVar8;
  }
  if (pTVar1 == (TUniquePtr<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                 *)&local_38) {
    if (pTVar9 != (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      DestructItems<Metasound::FWaveTableBankAsset,int>
                ((FWaveTableBankAsset *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      pTVar7 = pTVar9;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      goto LAB_14b3cef0a;
    }
  }
  else {
    pTVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar9;
    if (pTVar7 != (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      DestructItems<Metasound::FWaveTableBankAsset,int>
                ((FWaveTableBankAsset *)(pTVar7->AllocatorInstance).Data,pTVar7->ArrayNum);
      pFVar2 = (pTVar7->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
LAB_14b3cef0a:
      ::operator_delete(pTVar7,0x10);
    }
  }
  DestructItems<Metasound::FWaveTableBankAsset,int>
            ((FWaveTableBankAsset *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
LAB_14b3cef84:
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
                    /* WARNING: Could not recover jumptable at 0x00014b3cefd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

// PushToDataChannel @ 14b3ceff0

bool __thiscall
Metasound::TSender<Metasound::FAudioBusAsset>::PushToDataChannel
          (TSender<Metasound::FAudioBusAsset> *this)

{
  TUniquePtr<Metasound::FAudioBusAsset,TDefaultDelete<Metasound::FAudioBusAsset>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FAudioBusProxy *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  long64 lVar7;
  FAudioBusAsset *pFVar8;
  FAudioBusAsset *pFVar9;
  longlong local_48;
  FAudioBusAsset local_40;
  FAudioBusProxy *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  FAudioBusAsset local_20;
  
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
  if (pFVar9 != (FAudioBusAsset *)0x0) {
    pFVar8 = Audio::TCircularAudioBuffer<Metasound::FAudioBusAsset,16>::Pop
                       (&this->SenderBuffer,&local_20);
    pFVar9 = pTVar1->Ptr;
    pTVar2 = (pFVar8->AudioBusProxy).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar8->AudioBusProxy).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30 = (pFVar9->AudioBusProxy).Object;
    pTStack_28 = (pFVar9->AudioBusProxy).SharedReferenceCount.ReferenceController;
    (pFVar9->AudioBusProxy).Object = pFVar3;
    (pFVar9->AudioBusProxy).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.AudioBusProxy.SharedReferenceCount.ReferenceController);
    goto LAB_14b3cf129;
  }
  pFVar8 = Audio::TCircularAudioBuffer<Metasound::FAudioBusAsset,16>::Pop
                     (&this->SenderBuffer,&local_40);
  pFVar9 = ::operator_new(0x10);
  if (pFVar9 == (FAudioBusAsset *)0x0) {
    pFVar9 = (FAudioBusAsset *)0x0;
  }
  else {
    (pFVar9->AudioBusProxy).Object = (pFVar8->AudioBusProxy).Object;
    pTVar2 = (pFVar8->AudioBusProxy).SharedReferenceCount.ReferenceController;
    (pFVar9->AudioBusProxy).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (pTVar1 == (TUniquePtr<Metasound::FAudioBusAsset,TDefaultDelete<Metasound::FAudioBusAsset>_> *)
                &local_48) {
    if (pFVar9 != (FAudioBusAsset *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->AudioBusProxy).SharedReferenceCount.ReferenceController);
      goto LAB_14b3cf0c7;
    }
  }
  else {
    pFVar8 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9;
    if (pFVar8 != (FAudioBusAsset *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar8->AudioBusProxy).SharedReferenceCount.ReferenceController);
      pFVar9 = pFVar8;
LAB_14b3cf0c7:
      ::operator_delete(pFVar9,0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.AudioBusProxy.SharedReferenceCount.ReferenceController);
LAB_14b3cf129:
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
                    /* WARNING: Could not recover jumptable at 0x00014b3cf16d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar6;
}

// PushToDataChannel @ 14b3cf180

bool __thiscall
Metasound::TSender<Metasound::FWaveAsset>::PushToDataChannel(TSender<Metasound::FWaveAsset> *this)

{
  TUniquePtr<Metasound::FWaveAsset,TDefaultDelete<Metasound::FWaveAsset>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSoundWaveProxy *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  long64 lVar7;
  FWaveAsset *pFVar8;
  FWaveAsset *pFVar9;
  longlong local_48;
  FWaveAsset local_40;
  FSoundWaveProxy *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  FWaveAsset local_20;
  
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
  if (pFVar9 != (FWaveAsset *)0x0) {
    pFVar8 = Audio::TCircularAudioBuffer<Metasound::FWaveAsset,16>::Pop
                       (&this->SenderBuffer,&local_20);
    pFVar9 = pTVar1->Ptr;
    pTVar2 = (pFVar8->SoundWaveProxy).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar8->SoundWaveProxy).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30 = (pFVar9->SoundWaveProxy).Object;
    pTStack_28 = (pFVar9->SoundWaveProxy).SharedReferenceCount.ReferenceController;
    (pFVar9->SoundWaveProxy).Object = pFVar3;
    (pFVar9->SoundWaveProxy).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.SoundWaveProxy.SharedReferenceCount.ReferenceController);
    goto LAB_14b3cf2b9;
  }
  pFVar8 = Audio::TCircularAudioBuffer<Metasound::FWaveAsset,16>::Pop(&this->SenderBuffer,&local_40)
  ;
  pFVar9 = ::operator_new(0x10);
  if (pFVar9 == (FWaveAsset *)0x0) {
    pFVar9 = (FWaveAsset *)0x0;
  }
  else {
    (pFVar9->SoundWaveProxy).Object = (pFVar8->SoundWaveProxy).Object;
    pTVar2 = (pFVar8->SoundWaveProxy).SharedReferenceCount.ReferenceController;
    (pFVar9->SoundWaveProxy).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (pTVar1 == (TUniquePtr<Metasound::FWaveAsset,TDefaultDelete<Metasound::FWaveAsset>_> *)
                &local_48) {
    if (pFVar9 != (FWaveAsset *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->SoundWaveProxy).SharedReferenceCount.ReferenceController);
      goto LAB_14b3cf257;
    }
  }
  else {
    pFVar8 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9;
    if (pFVar8 != (FWaveAsset *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar8->SoundWaveProxy).SharedReferenceCount.ReferenceController);
      pFVar9 = pFVar8;
LAB_14b3cf257:
      ::operator_delete(pFVar9,0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SoundWaveProxy.SharedReferenceCount.ReferenceController);
LAB_14b3cf2b9:
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
                    /* WARNING: Could not recover jumptable at 0x00014b3cf2fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar6;
}

// PushToDataChannel @ 14b3cf310

bool __thiscall
Metasound::TSender<Metasound::FWaveTableBankAsset>::PushToDataChannel
          (TSender<Metasound::FWaveTableBankAsset> *this)

{
  TUniquePtr<Metasound::FWaveTableBankAsset,TDefaultDelete<Metasound::FWaveTableBankAsset>_> *pTVar1
  ;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  FWaveTableBankAsset *pFVar7;
  FWaveTableBankAsset *pFVar8;
  longlong local_38;
  FWaveTableBankAsset local_30;
  FWaveTableBankAsset local_20;
  
  if (this->_padding_ == 0) {
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
  lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  pFVar8 = (this->Payload).Ptr;
  pTVar1 = &this->Payload;
  this->PayloadID = lVar6;
  if (pFVar8 != (FWaveTableBankAsset *)0x0) {
    pFVar7 = Audio::TCircularAudioBuffer<Metasound::FWaveTableBankAsset,16>::Pop
                       (&this->SenderBuffer,&local_20);
    pFVar8 = pTVar1->Ptr;
    if (pFVar8 != pFVar7) {
      (pFVar8->Proxy).Object = (pFVar7->Proxy).Object;
      (pFVar7->Proxy).Object = (FWaveTableBankAssetProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar8->Proxy).SharedReferenceCount,&(pFVar7->Proxy).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.Proxy.SharedReferenceCount.ReferenceController);
    goto LAB_14b3cf433;
  }
  pFVar7 = Audio::TCircularAudioBuffer<Metasound::FWaveTableBankAsset,16>::Pop
                     (&this->SenderBuffer,&local_30);
  pFVar8 = ::operator_new(0x10);
  if (pFVar8 == (FWaveTableBankAsset *)0x0) {
    pFVar8 = (FWaveTableBankAsset *)0x0;
  }
  else {
    (pFVar8->Proxy).Object = (pFVar7->Proxy).Object;
    pTVar2 = (pFVar7->Proxy).SharedReferenceCount.ReferenceController;
    (pFVar8->Proxy).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (pTVar1 == (TUniquePtr<Metasound::FWaveTableBankAsset,TDefaultDelete<Metasound::FWaveTableBankAsset>_>
                 *)&local_38) {
    if (pFVar8 != (FWaveTableBankAsset *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar8->Proxy).SharedReferenceCount.ReferenceController);
      goto LAB_14b3cf3e4;
    }
  }
  else {
    pFVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar8;
    if (pFVar7 != (FWaveTableBankAsset *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar7->Proxy).SharedReferenceCount.ReferenceController);
      pFVar8 = pFVar7;
LAB_14b3cf3e4:
      ::operator_delete(pFVar8,0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.Proxy.SharedReferenceCount.ReferenceController);
LAB_14b3cf433:
  if (this->_padding_ == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014b3cf479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,this);
  return (bool)uVar5;
}

