// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 14

// ~FAnalyticsTracer @ 143133b20

void __thiscall FAnalyticsTracer::~FAnalyticsTracer(FAnalyticsTracer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FAnalyticsTracer__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  *(undefined4 *)&(this->RegionNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegionNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegionNames);
  *(undefined4 *)&(this->SpanHeirarchy).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SpanHeirarchy).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpanHeirarchy);
  DestructItems<TSharedPtr<IAnalyticsSpan,1>,int>
            ((TSharedPtr<IAnalyticsSpan,1> *)(this->ActiveSpanStack).AllocatorInstance.Data,
             (this->ActiveSpanStack).ArrayNum);
  pFVar2 = (this->ActiveSpanStack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionSpan).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalyticsProvider).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IAnalyticsTracer__6B_;
  return;
}

// BeginRegion @ 1431358b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnalyticsTracer::BeginRegion(FAnalyticsTracer *this,TSharedPtr<IAnalyticsSpan,1> *param_1)

{
  FName *pFVar1;
  FGuid *pFVar2;
  undefined1 auStack_9c8 [32];
  undefined1 local_9a8;
  undefined1 local_9a7;
  undefined1 local_9a6 [2];
  uint local_9a4;
  FName local_9a0;
  int local_998;
  int local_994;
  int local_990;
  IAnalyticsSpan *local_988;
  IAnalyticsSpan *local_980;
  IAnalyticsSpan *local_978;
  FString *local_970;
  FScriptContainerElement *local_968;
  FString *local_960;
  FScriptContainerElement *local_958;
  IAnalyticsSpan *local_950;
  FString *local_948;
  FScriptContainerElement *local_940;
  TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *local_938;
  FName *local_930;
  FScriptContainerElement *local_928;
  FScriptContainerElement *local_920;
  FScriptContainerElement *local_918;
  FScriptContainerElement *local_910;
  wchar_t *local_908;
  FScriptContainerElement *local_900;
  wchar_t *local_8f8;
  FScriptContainerElement *local_8f0;
  FScriptContainerElement *local_8e8;
  FScriptContainerElement *local_8e0;
  FScriptContainerElement *local_8d8;
  code *local_8d0;
  TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *local_8c8;
  FScriptContainerElement *local_8c0;
  FScriptContainerElement *local_8b8;
  FScriptContainerElement *local_8b0;
  FScriptContainerElement *local_8a8;
  FName local_8a0;
  FString local_898;
  FString local_888;
  FString local_878;
  undefined1 local_868 [16];
  TStringBuilderWithBuffer<wchar_t,1035> local_858;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_9c8;
  local_988 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
  pFVar1 = (FName *)(**(code **)((longlong)*local_988 + 0x30))(local_988);
  local_9a0 = *pFVar1;
  local_9a4 = 0;
  while( true ) {
    local_938 = &this->RegionNames;
    pFVar2 = TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
             ::Find((TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
                     *)local_938,local_9a0);
    if (pFVar2 == (FGuid *)0x0) break;
    local_980 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
    pFVar1 = (FName *)(**(code **)((longlong)*local_980 + 0x30))(local_980);
    FNameBuilder::FNameBuilder((FNameBuilder *)&local_858,*pFVar1);
    local_9a4 = local_9a4 + 1;
    local_978 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
    local_930 = (FName *)(**(code **)((longlong)*local_978 + 0x30))(local_978);
    local_970 = ::FName::ToString(local_930,&local_888);
    local_998 = (local_970->Data).ArrayNum;
    if (local_998 == 0) {
      local_968 = (FScriptContainerElement *)
                  `FString::operator*'::__l2::<lambda_1>::operator()(&local_9a8);
    }
    else {
      local_968 = (local_970->Data).AllocatorInstance.Data;
      local_928 = local_968;
      local_920 = local_968;
      local_918 = local_968;
    }
    local_910 = local_968;
    local_900 = local_968;
    local_908 = L"%s%d";
    local_8f8 = L"%s%d";
    local_960 = ::FString::Printf<wchar_t_const_*,unsigned_int>
                          (&local_898,
                           (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,unsigned_int>)
                           0x1508cde38,(wchar_t *)local_968,local_9a4);
    local_994 = (local_960->Data).ArrayNum;
    if (local_994 == 0) {
      local_958 = (FScriptContainerElement *)
                  `FString::operator*'::__l2::<lambda_1>::operator()(&local_9a7);
    }
    else {
      local_958 = (local_960->Data).AllocatorInstance.Data;
      local_8f0 = local_958;
      local_8e8 = local_958;
      local_8e0 = local_958;
    }
    local_8d8 = local_958;
    pFVar1 = ::FName::FName(&local_8a0,(wchar_t *)local_958);
    local_9a0 = *pFVar1;
    ::FString::~FString(&local_898);
    ::FString::~FString(&local_888);
    TStringBuilderWithBuffer<wchar_t,1035>::~TStringBuilderWithBuffer<wchar_t,1035>(&local_858);
  }
  local_8c8 = &this->RegionNames;
  local_950 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
  local_8d0 = *(code **)((longlong)*local_950 + 0x68);
  pFVar2 = (FGuid *)(*local_8d0)(local_950,local_868);
  TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>::
  Emplace<FName_&,FGuid>
            ((TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
              *)local_8c8,&local_9a0,pFVar2);
  local_948 = ::FName::ToString(&local_9a0,&local_878);
  local_990 = (local_948->Data).ArrayNum;
  if (local_990 == 0) {
    local_940 = (FScriptContainerElement *)
                `FString::operator*'::__l2::<lambda_1>::operator()(local_9a6);
  }
  else {
    local_940 = (local_948->Data).AllocatorInstance.Data;
    local_8c0 = local_940;
    local_8b8 = local_940;
    local_8b0 = local_940;
  }
  local_8a8 = local_940;
  FMiscTrace::OutputBeginRegion((wchar_t *)local_940,(wchar_t *)0x0);
  ::FString::~FString(&local_878);
  TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(param_1);
  return;
}

// EndRegion @ 143137f80

void __thiscall
FAnalyticsTracer::EndRegion(FAnalyticsTracer *this,TSharedPtr<IAnalyticsSpan,1> *param_1)

{
  FName FVar1;
  bool bVar2;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar3;
  longlong lVar4;
  TRangedForConstIterator *pTVar5;
  undefined1 *puVar6;
  TBaseIterator<1> *pTVar7;
  undefined1 local_1f1;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  int local_1d4;
  int local_1b8;
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *local_1a8;
  IAnalyticsSpan *local_1a0;
  TBaseIterator<1> *local_198;
  TBaseIterator<1> *local_190;
  FString *local_188;
  FScriptContainerElement *local_180;
  TSparseSetElement<TTuple<FName,FGuid>_> *local_178;
  TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *local_170;
  TBaseIterator<1> *local_168;
  code *local_160;
  TSparseSetElement<TTuple<FName,FGuid>_> *local_150;
  TSparseSetElement<TTuple<FName,FGuid>_> *local_148;
  TSparseSetElement<TTuple<FName,FGuid>_> *local_140;
  FGuid *local_138;
  undefined1 *local_130;
  TSparseSetElement<TTuple<FName,FGuid>_> *local_120;
  TSparseSetElement<TTuple<FName,FGuid>_> *local_118;
  TSparseSetElement<TTuple<FName,FGuid>_> *local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *local_e8;
  FString local_e0;
  TBaseIterator<1> local_d0;
  undefined1 local_a8 [16];
  undefined1 local_98 [40];
  TRangedForConstIterator local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  local_1b0 = (TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->RegionNames;
  local_170 = (TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *)
              local_1b0;
  pTVar3 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_40,
                      (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegionNames).field_0x10);
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::TRangedForConstIterator::TRangedForConstIterator(&local_70,local_1b0,pTVar3);
  pTVar5 = &local_70;
  puVar6 = local_98;
  for (lVar4 = 0x28; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = (char)pTVar5->_padding_;
    pTVar5 = (TRangedForConstIterator *)((longlong)&pTVar5->_padding_ + 1);
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_98;
  pTVar7 = &local_d0;
  for (lVar4 = 0x28; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&pTVar7->Array = *puVar6;
    puVar6 = puVar6 + 1;
    pTVar7 = (TBaseIterator<1> *)((longlong)&pTVar7->Array + 1);
  }
  while( true ) {
    local_1a8 = &local_d0.BitArrayIt;
    local_1d4 = (local_d0.BitArrayIt.Array)->NumBits;
    local_1f0 = (uint)(local_d0.BitArrayIt.CurrentBitIndex < local_1d4);
    bVar2 = local_d0.BitArrayIt.CurrentBitIndex >= local_1d4;
    local_1ec = (uint)bVar2;
    bVar2 = !bVar2;
    local_1e8 = (uint)bVar2;
    bVar2 = !bVar2;
    local_1e4 = (uint)bVar2;
    bVar2 = !bVar2;
    local_1e0 = (uint)bVar2;
    bVar2 = !bVar2;
    local_1dc = (uint)bVar2;
    bVar2 = !bVar2;
    local_1d8 = (uint)bVar2;
    if (!bVar2) {
      TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(param_1);
      return;
    }
    local_1a0 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
    local_160 = *(code **)((longlong)*local_1a0 + 0x68);
    local_138 = (FGuid *)(*local_160)(local_1a0,local_a8);
    local_198 = &local_d0;
    local_150 = TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::operator[](local_d0.Array,local_d0.BitArrayIt.CurrentBitIndex);
    local_130 = &local_150->field_0x8;
    local_148 = local_150;
    local_140 = local_150;
    bVar2 = ::operator==((FGuid *)local_130,local_138);
    if (bVar2) break;
    local_168 = &local_d0;
    TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TBaseIterator<1>::operator++(local_168);
  }
  local_190 = &local_d0;
  local_178 = TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::operator[](local_d0.Array,local_d0.BitArrayIt.CurrentBitIndex);
  local_120 = local_178;
  local_118 = local_178;
  local_110 = local_178;
  local_188 = ::FName::ToString((FName *)local_178,&local_e0);
  local_1b8 = (local_188->Data).ArrayNum;
  if (local_1b8 == 0) {
    local_180 = (FScriptContainerElement *)
                `FString::operator*'::__l2::<lambda_1>::operator()(&local_1f1);
  }
  else {
    local_180 = (local_188->Data).AllocatorInstance.Data;
    local_108 = local_180;
    local_100 = local_180;
    local_f8 = local_180;
  }
  local_f0 = local_180;
  FMiscTrace::OutputEndRegion((wchar_t *)local_180);
  ::FString::~FString(&local_e0);
  local_e8 = &this->RegionNames;
  FVar1.ComparisonIndex.Value = *(uint *)&local_178->field_0x0;
  FVar1.Number = *(uint *)&local_178->field_0x4;
  TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>::Remove
            ((TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
              *)local_e8,FVar1);
  TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(param_1);
  return;
}

// EndSession @ 143138420

/* WARNING: Removing unreachable block (ram,0x0001431385b8) */

void __thiscall FAnalyticsTracer::EndSession(FAnalyticsTracer *this)

{
  code *pcVar1;
  bool bVar2;
  TNotNull<UE::FWindowsRecursiveMutex_*> *pTVar3;
  TSharedPtr<IAnalyticsSpan,1> *pTVar4;
  TSharedPtr<IAnalyticsProvider,1> *pTVar5;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_e0;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_d0;
  FWindowsRecursiveMutex *local_c0;
  TNotNull<UE::FWindowsRecursiveMutex_*> *local_b8;
  TSharedPtr<IAnalyticsSpan,1> *local_b0;
  TSharedPtr<IAnalyticsSpan,1> *local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  TSharedPtr<IAnalyticsSpan,1> *local_90;
  TSharedPtr<IAnalyticsSpan,1> *local_88;
  TSharedPtr<IAnalyticsSpan,1> *local_80;
  TSharedPtr<IAnalyticsSpan,1> *local_78;
  TSharedPtr<IAnalyticsSpan,1> *local_70;
  code *local_68;
  TArray<TSharedPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *local_60;
  FScopeLock local_58;
  TNotNull<UE::FWindowsRecursiveMutex_*> local_50;
  TSharedPtr<IAnalyticsSpan,1> local_48;
  TSharedPtr<IAnalyticsProvider,1> local_38;
  TSharedPtr<IAnalyticsSpan,1> local_28;
  TSharedPtr<IAnalyticsSpan,1> local_18;
  
  local_b8 = &local_50;
  local_c0 = &this->CriticalSection;
  pTVar3 = TNotNull<UE::FWindowsRecursiveMutex_*>::
           TNotNull<UE::FWindowsRecursiveMutex_*><UE::FWindowsRecursiveMutex_*>(local_b8,&local_c0);
  FScopeLock::FScopeLock(&local_58,pTVar3->Val);
  local_a0 = *(code **)(this->_padding_ + 0x28);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_e0.AllocatorInstance)
  ;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_e0.AllocatorInstance);
  local_b0 = &local_28;
  local_a8 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(local_b0,&this->SessionSpan)
  ;
  (*local_a0)(this,local_a8,&local_e0);
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::
  ~TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>(&local_e0);
  pTVar4 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(&local_48,(FNullTag *)0x0);
  TSharedPtr<IAnalyticsSpan,1>::operator=(&this->SessionSpan,pTVar4);
  TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(&local_48);
  do {
    if ((this->ActiveSpanStack).ArrayNum == 0) {
      local_60 = &this->ActiveSpanStack;
      TArray<TSharedPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>::Reset(local_60,0);
      pTVar5 = TSharedPtr<IAnalyticsProvider,1>::TSharedPtr<IAnalyticsProvider,1>
                         (&local_38,(FNullTag *)0x0);
      TSharedPtr<IAnalyticsProvider,1>::operator=(&this->AnalyticsProvider,pTVar5);
      TSharedPtr<IAnalyticsProvider,1>::~TSharedPtr<IAnalyticsProvider,1>(&local_38);
      FScopeLock::~FScopeLock(&local_58);
      return;
    }
    local_68 = *(code **)(this->_padding_ + 0x28);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_d0.AllocatorInstance);
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_d0.AllocatorInstance);
    local_78 = &local_18;
    if ((this->ActiveSpanStack).ArrayNum < 1) {
      local_98 = 0;
      local_94 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_90 = (TSharedPtr<IAnalyticsSpan,1> *)(this->ActiveSpanStack).AllocatorInstance.Data;
    local_88 = local_90;
    local_80 = local_90;
    local_70 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(local_78,local_90);
    (*local_68)(this,local_70,&local_d0);
    TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::
    ~TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>(&local_d0);
  } while( true );
}

// EndSpan @ 143138750

bool __thiscall
FAnalyticsTracer::EndSpan
          (FAnalyticsTracer *this,TSharedPtr<IAnalyticsSpan,1> *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  TNotNull<UE::FWindowsRecursiveMutex_*> *pTVar2;
  TSharedPtr<IAnalyticsSpan,1> *pTVar3;
  FWindowsRecursiveMutex *local_40;
  TNotNull<UE::FWindowsRecursiveMutex_*> *local_38;
  TSharedPtr<IAnalyticsSpan,1> *local_30;
  FScopeLock local_28;
  TNotNull<UE::FWindowsRecursiveMutex_*> local_20;
  TSharedPtr<IAnalyticsSpan,1> local_18;
  
  local_38 = &local_20;
  local_40 = &this->CriticalSection;
  pTVar2 = TNotNull<UE::FWindowsRecursiveMutex_*>::
           TNotNull<UE::FWindowsRecursiveMutex_*><UE::FWindowsRecursiveMutex_*>(local_38,&local_40);
  FScopeLock::FScopeLock(&local_28,pTVar2->Val);
  local_30 = &local_18;
  pTVar3 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(local_30,param_1);
  bVar1 = EndSpanInternal(this,pTVar3,param_2);
  FScopeLock::~FScopeLock(&local_28);
  TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(param_1);
  return bVar1;
}

// EndSpanInternal @ 1431387f0

bool __thiscall
FAnalyticsTracer::EndSpanInternal
          (FAnalyticsTracer *this,TSharedPtr<IAnalyticsSpan,1> *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  TSharedPtr<IAnalyticsSpan,1> *pTVar1;
  FGuid *pFVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_156 [6];
  uint local_150;
  TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *local_148;
  int local_140;
  IAnalyticsSpan *local_138;
  IAnalyticsSpan *local_130;
  TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *local_128;
  IAnalyticsSpan *local_120;
  TSharedPtr<IAnalyticsSpan,1> *local_118;
  IAnalyticsSpan *local_110;
  TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0> local_108;
  TSharedPtr<IAnalyticsSpan,1> *local_f0;
  TArray<TSharedPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *local_e8;
  code *local_e0;
  TMap<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_d8;
  TWeakPtr<IAnalyticsSpan,1> *local_d0;
  TWeakPtr<IAnalyticsSpan,1> *local_c8;
  TWeakPtr<IAnalyticsSpan,1> *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  TWeakPtr<IAnalyticsSpan,1> *local_a0;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *local_98;
  TSharedPtr<IAnalyticsSpan,1> *local_90;
  code *local_88;
  TMap<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_80;
  code *local_78;
  TWeakPtr<IAnalyticsSpan,1> local_70;
  TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0> local_60;
  TSharedPtr<IAnalyticsSpan,1> local_48;
  undefined1 local_38 [16];
  TSharedPtr<IAnalyticsSpan,1> local_28;
  undefined1 local_18 [16];
  
  if (param_1->Object != (IAnalyticsSpan *)0x0) {
    local_138 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
    local_78 = *(code **)((longlong)*local_138 + 0x18);
    (*local_78)(local_138,param_2);
    local_f0 = &local_48;
    pTVar1 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(local_f0,param_1);
    EndRegion(this,pTVar1);
    local_e8 = &this->ActiveSpanStack;
    TArray<TSharedPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>::Remove(local_e8,param_1);
    local_d8 = &this->SpanHeirarchy;
    local_130 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
    local_e0 = *(code **)((longlong)*local_130 + 0x68);
    pFVar2 = (FGuid *)(*local_e0)(local_130,local_38);
    local_128 = TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
                        *)local_d8,pFVar2);
    if (local_128 != (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)0x0) {
      local_d0 = (TWeakPtr<IAnalyticsSpan,1> *)(local_128->AllocatorInstance).Data;
      local_148 = local_128;
      local_c8 = local_d0;
      local_c0 = local_d0;
      TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0>::
      TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0>
                (&local_108,&local_128->ArrayNum,local_d0);
      local_b8 = (local_148->AllocatorInstance).Data;
      local_140 = local_148->ArrayNum;
      local_b0 = local_b8;
      local_a8 = local_b8;
      TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0>::
      TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0>
                (&local_60,&local_148->ArrayNum,
                 (TWeakPtr<IAnalyticsSpan,1> *)(local_b8 + (longlong)local_140 * 0x10));
      while( true ) {
        if (*local_108.CurrentNum != local_108.InitialNum) {
          puVar4 = local_156;
          for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          `TCheckedPointerIterator<TWeakPtr<IAnalyticsSpan,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_156);
        }
        local_156[1] = local_108.Ptr != local_60.Ptr;
        local_150 = (uint)(byte)local_156[1];
        if (!(bool)local_156[1]) break;
        local_a0 = local_108.Ptr;
        TWeakPtr<IAnalyticsSpan,1>::TWeakPtr<IAnalyticsSpan,1>(&local_70,local_108.Ptr);
        local_120 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
        local_98 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)
                   (**(code **)((longlong)*local_120 + 0x38))(local_120);
        local_118 = &local_28;
        TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1><IAnalyticsSpan>
                  (local_118,&local_70);
        local_90 = local_118;
        EndSpanInternal(this,local_118,local_98);
        SharedPointerInternals::FWeakReferencer<1>::~FWeakReferencer<1>
                  (&local_70.WeakReferenceCount);
        local_108.Ptr = local_108.Ptr + 1;
      }
    }
    local_80 = &this->SpanHeirarchy;
    local_110 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
    local_88 = *(code **)((longlong)*local_110 + 0x68);
    pFVar2 = (FGuid *)(*local_88)(local_110,local_18);
    TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
    ::Remove((TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
              *)local_80,pFVar2);
  }
  local_156[2] = 0;
  TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(param_1);
  return (bool)local_156[2];
}

// GetCurrentSpan @ 143139cc0

TSharedPtr<IAnalyticsSpan,1> * __thiscall
FAnalyticsTracer::GetCurrentSpan
          (FAnalyticsTracer *this,TSharedPtr<IAnalyticsSpan,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<IAnalyticsSpan,1> *pTVar6;
  TSharedPtr<IAnalyticsSpan,1> *local_80;
  TSharedPtr<IAnalyticsSpan,1> local_30;
  TSharedPtr<IAnalyticsSpan,1> local_20 [2];
  
  if ((this->ActiveSpanStack).ArrayNum == 0) {
    bVar3 = true;
    bVar2 = false;
    local_80 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(&local_30,(FNullTag *)0x0)
    ;
  }
  else {
    bVar3 = false;
    bVar2 = true;
    iVar5 = (this->ActiveSpanStack).ArrayNum + -1;
    if (iVar5 < 0 || (this->ActiveSpanStack).ArrayNum <= iVar5) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedPtr<IAnalyticsSpan,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    local_80 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>
                         (local_20,(TSharedPtr<IAnalyticsSpan,1> *)
                                   ((this->ActiveSpanStack).AllocatorInstance.Data +
                                   (longlong)((this->ActiveSpanStack).ArrayNum + -1) * 0x10));
  }
  TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(__return_storage_ptr__,local_80);
  if (bVar3) {
    TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(&local_30);
  }
  if (bVar2) {
    TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(local_20);
  }
  return __return_storage_ptr__;
}

// GetSessionSpan @ 14313a450

TSharedPtr<IAnalyticsSpan,1> * __thiscall
FAnalyticsTracer::GetSessionSpan
          (FAnalyticsTracer *this,TSharedPtr<IAnalyticsSpan,1> *__return_storage_ptr__)

{
  TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>
            (__return_storage_ptr__,&this->SessionSpan);
  return __return_storage_ptr__;
}

// GetSpan @ 14313a490

TSharedPtr<IAnalyticsSpan,1> * __thiscall
FAnalyticsTracer::GetSpan
          (FAnalyticsTracer *this,TSharedPtr<IAnalyticsSpan,1> *__return_storage_ptr__,FName param_1
          )

{
  TNotNull<UE::FWindowsRecursiveMutex_*> *pTVar1;
  FWindowsRecursiveMutex *local_28;
  TNotNull<UE::FWindowsRecursiveMutex_*> *local_20;
  FScopeLock local_18;
  TNotNull<UE::FWindowsRecursiveMutex_*> local_10 [2];
  
  local_20 = local_10;
  local_28 = &this->CriticalSection;
  pTVar1 = TNotNull<UE::FWindowsRecursiveMutex_*>::
           TNotNull<UE::FWindowsRecursiveMutex_*><UE::FWindowsRecursiveMutex_*>(local_20,&local_28);
  FScopeLock::FScopeLock(&local_18,pTVar1->Val);
  GetSpanInternal(this,__return_storage_ptr__,param_1);
  FScopeLock::~FScopeLock(&local_18);
  return __return_storage_ptr__;
}

// GetSpanInternal @ 14313a510

TSharedPtr<IAnalyticsSpan,1> * __thiscall
FAnalyticsTracer::GetSpanInternal
          (FAnalyticsTracer *this,TSharedPtr<IAnalyticsSpan,1> *__return_storage_ptr__,FName param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<IAnalyticsSpan,1> *pTVar3;
  longlong lVar4;
  undefined1 *puVar5;
  FName *pFVar6;
  longlong *plVar7;
  int local_b4;
  longlong local_98;
  longlong local_90;
  IAnalyticsSpan *local_88;
  TSharedPtr<IAnalyticsSpan,1> local_80;
  undefined4 local_70;
  undefined4 local_6c;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  TSharedPtr<IAnalyticsSpan,1> *local_58;
  undefined1 *local_50;
  FName local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  
  local_b4 = 0;
  do {
    if ((this->ActiveSpanStack).ArrayNum <= local_b4) {
      TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>
                (__return_storage_ptr__,(FNullTag *)0x0);
      return __return_storage_ptr__;
    }
    if (local_b4 < 0 || (this->ActiveSpanStack).ArrayNum <= local_b4) {
      local_70 = 0;
      local_6c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<IAnalyticsSpan,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
    local_68 = (this->ActiveSpanStack).AllocatorInstance.Data;
    local_58 = (TSharedPtr<IAnalyticsSpan,1> *)(local_68 + (longlong)local_b4 * 0x10);
    local_60 = local_68;
    TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(&local_80,local_58);
    if (local_80.Object != (IAnalyticsSpan *)0x0) {
      local_88 = TSharedPtr<IAnalyticsSpan,1>::operator->(&local_80);
      local_50 = (undefined1 *)(**(code **)((longlong)*local_88 + 0x30))(local_88);
      local_48 = param_1;
      local_98 = 0;
      puVar5 = local_50;
      plVar7 = &local_98;
      for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)plVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
      }
      local_30 = &local_98;
      local_40 = local_98;
      local_90 = 0;
      pFVar6 = &local_48;
      plVar7 = &local_90;
      for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(char *)plVar7 = (char)(pFVar6->ComparisonIndex).Value;
        pFVar6 = (FName *)((longlong)&(pFVar6->ComparisonIndex).Value + 1);
        plVar7 = (longlong *)((longlong)plVar7 + 1);
      }
      local_28 = &local_90;
      local_38 = local_90;
      if (local_40 == local_90) {
        TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(__return_storage_ptr__,&local_80)
        ;
        TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(&local_80);
        return __return_storage_ptr__;
      }
    }
    TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(&local_80);
    local_b4 = local_b4 + 1;
  } while( true );
}

// SetProvider @ 14313d390

void __thiscall
FAnalyticsTracer::SetProvider(FAnalyticsTracer *this,TSharedPtr<IAnalyticsProvider,1> *param_1)

{
  TSharedPtr<IAnalyticsProvider,1>::operator=(&this->AnalyticsProvider,param_1);
  TSharedPtr<IAnalyticsProvider,1>::~TSharedPtr<IAnalyticsProvider,1>(param_1);
  return;
}

// StartSession @ 14313d690

void __thiscall FAnalyticsTracer::StartSession(FAnalyticsTracer *this)

{
  FName *pFVar1;
  TSharedPtr<IAnalyticsSpan,1> *pTVar2;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<IAnalyticsSpan,1> *local_68;
  FName *local_60;
  FName local_58;
  TSharedPtr<IAnalyticsSpan,1> *local_50;
  FName local_48;
  code *local_40;
  FName local_38;
  TSharedPtr<IAnalyticsSpan,1> local_30;
  TSharedPtr<IAnalyticsSpan,1> local_20 [2];
  
  local_40 = *(code **)(this->_padding_ + 0x20);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_78.AllocatorInstance)
  ;
  local_78.ArrayNum = 0;
  local_78.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_78.AllocatorInstance);
  local_68 = local_20;
  local_50 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(local_68,(FNullTag *)0x0);
  local_60 = &local_38;
  pFVar1 = ::FName::FName(local_60,L"Session");
  local_58 = *pFVar1;
  local_48 = local_58;
  pTVar2 = (TSharedPtr<IAnalyticsSpan,1> *)(*local_40)(this,&local_30,local_58,local_50,&local_78);
  TSharedPtr<IAnalyticsSpan,1>::operator=(&this->SessionSpan,pTVar2);
  TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(&local_30);
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::
  ~TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>(&local_78);
  return;
}

// StartSpan @ 14313d780

TSharedPtr<IAnalyticsSpan,1> * __thiscall
FAnalyticsTracer::StartSpan
          (FAnalyticsTracer *this,TSharedPtr<IAnalyticsSpan,1> *__return_storage_ptr__,FName param_1
          ,TSharedPtr<IAnalyticsSpan,1> *param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  int iVar2;
  TNotNull<UE::FWindowsRecursiveMutex_*> *pTVar3;
  TSharedRef<FAnalyticsSpan,1> *pTVar4;
  IAnalyticsSpan *pIVar5;
  FGuid *pFVar6;
  TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  initializer_list<TWeakPtr<IAnalyticsSpan,1>_> *piVar8;
  TSharedPtr<IAnalyticsSpan,1> *pTVar9;
  longlong lVar10;
  initializer_list<TWeakPtr<IAnalyticsSpan,1>_> *piVar11;
  FName local_res18;
  TSharedPtr<IAnalyticsSpan,1> *local_res20;
  TSharedPtr<IAnalyticsSpan,1> *local_170;
  TSharedPtr<IAnalyticsSpan,1> local_168;
  TNotNull<UE::FWindowsRecursiveMutex_*> *local_158;
  code *local_150;
  TMap<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_148;
  code *local_140;
  FGuid *local_138;
  TMap<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_130;
  TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  TWeakPtr<IAnalyticsSpan,1> *local_110;
  code *local_108;
  TMap<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  TSharedPtr<IAnalyticsSpan,1> *local_f8;
  TSharedPtr<IAnalyticsSpan,1> *local_f0;
  FScopeLock local_e8;
  FWindowsRecursiveMutex *local_e0;
  TWeakPtr<IAnalyticsSpan,1> local_d8;
  undefined1 local_c8 [24];
  TNotNull<UE::FWindowsRecursiveMutex_*> local_b0;
  TSharedRef<FAnalyticsSpan,1> local_a8;
  initializer_list<TWeakPtr<IAnalyticsSpan,1>_> local_98;
  TSharedPtr<IAnalyticsSpan,1> local_88;
  TSharedPtr<IAnalyticsSpan,1> local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  initializer_list<TWeakPtr<IAnalyticsSpan,1>_> local_48;
  undefined1 local_38 [16];
  TSharedPtr<IAnalyticsSpan,1> local_28;
  
  local_158 = &local_b0;
  local_e0 = &this->CriticalSection;
  local_res18 = param_1;
  local_res20 = param_2;
  pTVar3 = TNotNull<UE::FWindowsRecursiveMutex_*>::
           TNotNull<UE::FWindowsRecursiveMutex_*><UE::FWindowsRecursiveMutex_*>(local_158,&local_e0)
  ;
  FScopeLock::FScopeLock(&local_e8,pTVar3->Val);
  pTVar4 = MakeShared<FAnalyticsSpan,1,FName_const_&>(&local_a8,&local_res18);
  TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1><FAnalyticsSpan>(&local_168,pTVar4);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_a8.SharedReferenceCount);
  if (local_res20->Object != (IAnalyticsSpan *)0x0) {
    local_148 = &this->SpanHeirarchy;
    pIVar5 = TSharedPtr<IAnalyticsSpan,1>::operator->(local_res20);
    local_150 = *(code **)((longlong)*pIVar5 + 0x68);
    pFVar6 = (FGuid *)(*local_150)(pIVar5,local_68);
    pTVar7 = TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
                     *)local_148,pFVar6);
    if (pTVar7 == (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)0x0) {
      local_100 = &this->SpanHeirarchy;
      TWeakPtr<IAnalyticsSpan,1>::TWeakPtr<IAnalyticsSpan,1><IAnalyticsSpan>(&local_d8,&local_168);
      piVar8 = std::initializer_list<TWeakPtr<IAnalyticsSpan,1>_>::
               initializer_list<TWeakPtr<IAnalyticsSpan,1>_>
                         (&local_48,&local_d8,(TWeakPtr<IAnalyticsSpan,1> *)local_c8);
      piVar11 = &local_98;
      for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *(undefined1 *)&piVar11->_First = *(undefined1 *)&piVar8->_First;
        piVar8 = (initializer_list<TWeakPtr<IAnalyticsSpan,1>_> *)((longlong)&piVar8->_First + 1);
        piVar11 = (initializer_list<TWeakPtr<IAnalyticsSpan,1>_> *)((longlong)&piVar11->_First + 1);
      }
      TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>::
      TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>
                ((TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)(local_c8 + 8),
                 &local_98);
      pIVar5 = TSharedPtr<IAnalyticsSpan,1>::operator->(local_res20);
      local_108 = *(code **)((longlong)*pIVar5 + 0x68);
      pFVar6 = (FGuid *)(*local_108)(pIVar5,local_38);
      TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
      ::Emplace<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_>
                ((TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
                  *)local_100,pFVar6,
                 (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)(local_c8 + 8));
      TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>
                ((TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)(local_c8 + 8));
      _vector_destructor_iterator_
                (&local_d8,0x10,1,TWeakPtr<IAnalyticsSpan,1>::~TWeakPtr<IAnalyticsSpan,1>);
    }
    else {
      local_130 = &this->SpanHeirarchy;
      pIVar5 = TSharedPtr<IAnalyticsSpan,1>::operator->(local_res20);
      local_140 = *(code **)((longlong)*pIVar5 + 0x68);
      local_138 = (FGuid *)(*local_140)(pIVar5,local_58);
      pTVar7 = TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked((TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
                              *)local_130,local_138);
      local_128 = pTVar7;
      if (pTVar7->ArrayNum == pTVar7->ArrayMax) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
        pTVar7->ArrayNum = iVar2;
      }
      iVar2 = pTVar7->ArrayNum;
      pTVar7->ArrayNum = pTVar7->ArrayNum + 1;
      local_120 = (pTVar7->AllocatorInstance).Data;
      local_118 = local_120 + (longlong)iVar2 * 0x10;
      local_110 = ::operator_new(0x10,local_118);
      TWeakPtr<IAnalyticsSpan,1>::TWeakPtr<IAnalyticsSpan,1><IAnalyticsSpan>(local_110,&local_168);
    }
  }
  local_f8 = &local_28;
  pTVar9 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(local_f8,&local_168);
  bVar1 = StartSpanInternal(this,pTVar9,param_3);
  if (!bVar1) {
    local_170 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>
                          (&local_88,(FNullTag *)0x0);
  }
  else {
    local_170 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(&local_78,&local_168);
  }
  local_f0 = local_170;
  TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(__return_storage_ptr__,local_170);
  if (!bVar1) {
    TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(&local_88);
  }
  else {
    TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(&local_78);
  }
  TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(&local_168);
  FScopeLock::~FScopeLock(&local_e8);
  TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(local_res20);
  return __return_storage_ptr__;
}

// StartSpanInternal @ 14313dbf0

bool __thiscall
FAnalyticsTracer::StartSpanInternal
          (FAnalyticsTracer *this,TSharedPtr<IAnalyticsSpan,1> *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  IAnalyticsSpan *pIVar7;
  IAnalyticsSpan *pIVar8;
  TSharedPtr<IAnalyticsProvider,1> *pTVar9;
  TSharedPtr<IAnalyticsSpan,1> *pTVar10;
  int local_120;
  TSharedPtr<IAnalyticsSpan,1> *local_108;
  TSharedPtr<IAnalyticsSpan,1> local_58;
  TSharedPtr<IAnalyticsSpan,1> local_48;
  TSharedPtr<IAnalyticsSpan,1> local_38;
  TSharedPtr<IAnalyticsProvider,1> local_28;
  TSharedPtr<IAnalyticsSpan,1> local_18;
  
  if ((this->ActiveSpanStack).ArrayNum == 0) {
    bVar3 = true;
    bVar2 = false;
    local_108 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>
                          (&local_48,(FNullTag *)0x0);
  }
  else {
    bVar3 = false;
    bVar2 = true;
    iVar6 = (this->ActiveSpanStack).ArrayNum + -1;
    if (iVar6 < 0 || (this->ActiveSpanStack).ArrayNum <= iVar6) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    local_108 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>
                          (&local_38,
                           (TSharedPtr<IAnalyticsSpan,1> *)
                           ((this->ActiveSpanStack).AllocatorInstance.Data +
                           (longlong)((this->ActiveSpanStack).ArrayNum + -1) * 0x10));
  }
  TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(&local_58,local_108);
  if (bVar3) {
    TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(&local_48);
  }
  if (bVar2) {
    TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(&local_38);
  }
  pIVar7 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
  pcVar1 = *(code **)((longlong)*pIVar7 + 0x40);
  if (local_58.Object == (IAnalyticsSpan *)0x0) {
    local_120 = 0;
  }
  else {
    pIVar8 = TSharedPtr<IAnalyticsSpan,1>::operator->(&local_58);
    local_120 = (**(code **)((longlong)*pIVar8 + 0x48))(pIVar8);
    local_120 = local_120 + 1;
  }
  (*pcVar1)(pIVar7,local_120);
  pIVar7 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
  pcVar1 = *(code **)((longlong)*pIVar7 + 8);
  pTVar9 = TSharedPtr<IAnalyticsProvider,1>::TSharedPtr<IAnalyticsProvider,1>
                     (&local_28,&this->AnalyticsProvider);
  (*pcVar1)(pIVar7,pTVar9);
  pIVar7 = TSharedPtr<IAnalyticsSpan,1>::operator->(param_1);
  (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7,param_2);
  pTVar10 = TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(&local_18,param_1);
  BeginRegion(this,pTVar10);
  if ((this->ActiveSpanStack).ArrayNum == (this->ActiveSpanStack).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ActiveSpanStack).AllocatorInstance,
                       &(this->ActiveSpanStack).ArrayMax);
    (this->ActiveSpanStack).ArrayNum = iVar6;
  }
  iVar6 = (this->ActiveSpanStack).ArrayNum;
  (this->ActiveSpanStack).ArrayNum = (this->ActiveSpanStack).ArrayNum + 1;
  pTVar10 = ::operator_new(0x10,(this->ActiveSpanStack).AllocatorInstance.Data +
                                (longlong)iVar6 * 0x10);
  TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>(pTVar10,param_1);
  TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(&local_58);
  TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(param_1);
  return true;
}

