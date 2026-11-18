// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// FFontFaceData @ 142472640

FFontFaceData * __thiscall
FFontFaceData::FFontFaceData
          (FFontFaceData *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = param_1->ArrayNum;
  (this->Data).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->PreprocessedFontGeometries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreprocessedFontGeometries).ArrayNum = 0;
  (this->PreprocessedFontGeometries).ArrayMax = 0;
  TrackMemoryUsage(this);
  return this;
}

// FFontFaceData @ 142472690

FFontFaceData * __thiscall FFontFaceData::FFontFaceData(FFontFaceData *this)

{
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  (this->PreprocessedFontGeometries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreprocessedFontGeometries).ArrayNum = 0;
  (this->PreprocessedFontGeometries).ArrayMax = 0;
  return this;
}

// ~FFontFaceData @ 142478eb0

void __thiscall FFontFaceData::~FFontFaceData(FFontFaceData *this)

{
  FScriptContainerElement *pFVar1;
  
  UntrackMemoryUsage(this);
  DestructItems<UE::Slate::FPreprocessedFontGeometry,int>
            ((FPreprocessedFontGeometry *)(this->PreprocessedFontGeometries).AllocatorInstance.Data,
             (this->PreprocessedFontGeometries).ArrayNum);
  pFVar1 = (this->PreprocessedFontGeometries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetAllocatedSize @ 14248ab30

ulong64 __thiscall FFontFaceData::GetAllocatedSize(FFontFaceData *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PreprocessedFontGeometries).ArrayNum;
  pFVar3 = (this->PreprocessedFontGeometries).AllocatorInstance.Data;
  uVar4 = (longlong)(this->PreprocessedFontGeometries).ArrayMax * 0x78 +
          (longlong)(this->Data).ArrayMax;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->PreprocessedFontGeometries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Slate::FPreprocessedFontGeometry_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    if (*(uint *)(pFVar3 + 0x50) < 2) {
      lVar2 = 0;
    }
    else {
      lVar2 = (longlong)(int)*(uint *)(pFVar3 + 0x50) << 2;
    }
    uVar4 = uVar4 + (longlong)*(int *)(pFVar3 + 100) +
                    (ulonglong)((*(int *)(pFVar3 + 0x34) + 0x1fU >> 5) << 2) + lVar2 +
                    ((longlong)*(int *)(pFVar3 + 0x74) + (longlong)*(int *)(pFVar3 + 0x14) * 0x12) *
                    2;
    pFVar3 = pFVar3 + 0x78;
  }
  return uVar4;
}

// MakeFontFaceData @ 14249c0f0

TSharedRef<FFontFaceData,1> * __cdecl
FFontFaceData::MakeFontFaceData
          (TSharedRef<FFontFaceData,1> *__return_storage_ptr__,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FFontFaceData *this;
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FFontFaceData,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FFontFaceData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    this = (FFontFaceData *)(pTVar3 + 1);
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFFontFaceData___00_SharedPointerInternals__6B_;
    (this->Data).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)param_1->ArrayNum;
    pTVar3[1].WeakReferenceCount = (atomic<int>)param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    TrackMemoryUsage(this);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FFontFaceData *)(pTVar3 + 1);
    if ((FFontFaceData *)(pTVar3 + 1) == (FFontFaceData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FFontFaceData,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeFontFaceData @ 14249c1d0

TSharedRef<FFontFaceData,1> * __cdecl
FFontFaceData::MakeFontFaceData(TSharedRef<FFontFaceData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FFontFaceData,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FFontFaceData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFFontFaceData___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FFontFaceData *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FFontFaceData *)(pTVar3 + 1) == (FFontFaceData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FFontFaceData,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// Serialize @ 1424a6e60

void __thiscall FFontFaceData::Serialize(FFontFaceData *this,FArchive *param_1)

{
  int *piVar1;
  FPreprocessedFontGeometry *pFVar2;
  int iVar3;
  bool bVar4;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    UntrackMemoryUsage(this);
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&this->Data);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar3 < 0xb4) {
    bVar4 = true;
    if ((param_1->field_0x28 & 1) == 0) goto LAB_1424a6f2a;
    pFVar2 = (FPreprocessedFontGeometry *)(this->PreprocessedFontGeometries).AllocatorInstance.Data;
    iVar3 = (this->PreprocessedFontGeometries).ArrayNum;
    piVar1 = &(this->PreprocessedFontGeometries).ArrayMax;
    if ((this->PreprocessedFontGeometries).ArrayMax < 0) {
      DestructItems<UE::Slate::FPreprocessedFontGeometry,int>(pFVar2,iVar3);
      (this->PreprocessedFontGeometries).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,0,&(this->PreprocessedFontGeometries).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<UE::Slate::FPreprocessedFontGeometry,int>(pFVar2,iVar3);
      (this->PreprocessedFontGeometries).ArrayNum = 0;
    }
  }
  else {
    TArrayPrivateFriend::Serialize<UE::Slate::FPreprocessedFontGeometry,TSizedDefaultAllocator<32>_>
              (param_1,&this->PreprocessedFontGeometries);
  }
  bVar4 = (param_1->field_0x28 & 1) == 0;
LAB_1424a6f2a:
  if (bVar4) {
    return;
  }
  TrackMemoryUsage(this);
  return;
}

// SetData @ 1424a7190

void __thiscall
FFontFaceData::SetData
          (FFontFaceData *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FPreprocessedFontGeometry *pFVar4;
  
  UntrackMemoryUsage(this);
  if (this != (FFontFaceData *)param_1) {
    pFVar3 = (this->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->Data).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Data).ArrayNum = param_1->ArrayNum;
    (this->Data).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  piVar1 = &(this->PreprocessedFontGeometries).ArrayMax;
  pFVar4 = (FPreprocessedFontGeometry *)(this->PreprocessedFontGeometries).AllocatorInstance.Data;
  iVar2 = (this->PreprocessedFontGeometries).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<UE::Slate::FPreprocessedFontGeometry,int>(pFVar4,iVar2);
    (this->PreprocessedFontGeometries).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,&(this->PreprocessedFontGeometries).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Slate::FPreprocessedFontGeometry,int>(pFVar4,iVar2);
    (this->PreprocessedFontGeometries).ArrayNum = 0;
  }
  TrackMemoryUsage(this);
  return;
}

// SetPreprocessedFontGeometries @ 1424a7380

void __thiscall
FFontFaceData::SetPreprocessedFontGeometries
          (FFontFaceData *this,
          TArray<UE::Slate::FPreprocessedFontGeometry,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Slate::FPreprocessedFontGeometry,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  UntrackMemoryUsage(this);
  pTVar1 = &this->PreprocessedFontGeometries;
  if (pTVar1 != param_1) {
    DestructItems<UE::Slate::FPreprocessedFontGeometry,int>
              ((FPreprocessedFontGeometry *)(pTVar1->AllocatorInstance).Data,
               (this->PreprocessedFontGeometries).ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PreprocessedFontGeometries).ArrayNum = param_1->ArrayNum;
    (this->PreprocessedFontGeometries).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  TrackMemoryUsage(this);
  return;
}

// TrackMemoryUsage @ 1424a87e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFontFaceData::TrackMemoryUsage(FFontFaceData *this)

{
  FName FVar1;
  uchar auVar2 [8];
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SlateRawFontDataMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res10;
  FStatMessage local_18;
  
  auVar2 = (uchar  [8])GetAllocatedSize(this);
  if (auVar2 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_SlateRawFontDataMemory;
    if (StatPtr_STAT_SlateRawFontDataMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateRawFontDataMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res10,"STAT_SlateRawFontDataMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_SlateRawFontDataMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateRawFontDataMemory,*pFVar3,
                         L"Resident Font Memory (TTF/OTF)","STATGROUP_SlateMemory",
                         "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res10 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_18.StatData.Pad = auVar2;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(&local_res10,(long64)auVar2);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UntrackMemoryUsage @ 1424ab780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFontFaceData::UntrackMemoryUsage(FFontFaceData *this)

{
  FName FVar1;
  uchar auVar2 [8];
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SlateRawFontDataMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res10;
  FStatMessage local_18;
  
  auVar2 = (uchar  [8])GetAllocatedSize(this);
  if (auVar2 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_SlateRawFontDataMemory;
    if (StatPtr_STAT_SlateRawFontDataMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateRawFontDataMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res10,"STAT_SlateRawFontDataMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_SlateRawFontDataMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateRawFontDataMemory,*pFVar3,
                         L"Resident Font Memory (TTF/OTF)","STATGROUP_SlateMemory",
                         "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res10 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_18.StatData.Pad = auVar2;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(&local_res10,-(longlong)auVar2);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

