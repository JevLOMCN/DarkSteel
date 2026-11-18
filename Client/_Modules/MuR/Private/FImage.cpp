// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 36

// Clone @ 14a99c2f0

TSharedPtr<UE::Mutable::Private::FImage,1> * __thiscall
UE::Mutable::Private::FImage::Clone
          (FImage *this,TSharedPtr<UE::Mutable::Private::FImage,1> *__return_storage_ptr__)

{
  uchar uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar7;
  bool bVar8;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl_UE::Mutable::Private::FImage::Clone(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl_UE::Mutable::Private::FImage::Clone(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl_UE::Mutable::Private::FImage::Clone(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl_UE::Mutable::Private::FImage::Clone(void)const___ptr64'
                    ::__l2::LLMScope_Name145,L"MutableRuntime");
    _Init_thread_footer(&`public:_class_TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl_UE::Mutable::Private::FImage::Clone(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_class_TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl_UE::Mutable::Private::FImage::Clone(void)const___ptr64'
             ::__l2::LLMScope_Name145,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_class_TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl_UE::Mutable::Private::FImage::Clone(void)const___ptr64'
              ::__l2::LLMScope_Name145,true);
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_class_TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl_UE::Mutable::Private::FImage::Clone(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId146,"Mutable_ImageClone",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\Image.h"
               ,0x92);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_class_TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl_UE::Mutable::Private::FImage::Clone(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId146);
  }
  pTVar6 = ::operator_new(0x70);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FImage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFImage_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    FImage((FImage *)(pTVar6 + 1));
    if (((FImage *)(pTVar6 + 1) == (FImage *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
      return pTVar7;
    }
    __return_storage_ptr__->Object = (FImage *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  uVar1 = this->Flags;
  if ((__return_storage_ptr__->Object == (FImage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
    return pTVar7;
  }
  __return_storage_ptr__->Object->Flags = uVar1;
  uVar2 = this->RelevancyMinY;
  if ((__return_storage_ptr__->Object == (FImage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
    return pTVar7;
  }
  __return_storage_ptr__->Object->RelevancyMinY = uVar2;
  uVar2 = this->RelevancyMaxY;
  if ((__return_storage_ptr__->Object == (FImage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
    return pTVar7;
  }
  __return_storage_ptr__->Object->RelevancyMaxY = uVar2;
  if ((__return_storage_ptr__->Object == (FImage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
    return pTVar7;
  }
  FImageDataStorage::operator=(&__return_storage_ptr__->Object->DataStorage,&this->DataStorage);
  uVar3 = this->ReferenceID;
  if ((__return_storage_ptr__->Object == (FImage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
    return pTVar7;
  }
  __return_storage_ptr__->Object->ReferenceID = uVar3;
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// FImage @ 14aa92a20

FImage * __thiscall
UE::Mutable::Private::FImage::FImage
          (FImage *this,uint param_1,uint param_2,uint param_3,EImageFormat param_4,
          EInitializationType param_5)

{
  FImageDataStorage *pFVar1;
  bool bVar2;
  TIntVector2<unsigned_short>_u_0 local_38;
  EImageFormat local_34;
  undefined1 local_33;
  FLLMScope local_30 [2];
  FMemScope local_28 [2];
  
  this->Flags = '\0';
  this->_padding_ = (longlong)&___7FImage_Private_Mutable_UE__6B_;
  this->RelevancyMinY = 0;
  this->RelevancyMaxY = 0;
  (this->Texture).Object = (UObject *)0x0;
  this->ReferenceID = 0;
  (this->DataStorage).Buffers.AllocatorInstance.SecondaryData =
       (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
        )0x0;
  (this->DataStorage).Buffers.ArrayNum = 0;
  *(undefined8 *)&(this->DataStorage).Buffers.ArrayMax = 1;
  (this->DataStorage).ImageFormat = None;
  (this->DataStorage).NumLODs = '\0';
  (this->DataStorage).CompactedTailOffsets.Elements[0] = 0;
  (this->DataStorage).CompactedTailOffsets.Elements[1] = 0;
  (this->DataStorage).CompactedTailOffsets.Elements[2] = 0;
  pFVar1 = &this->DataStorage;
  (pFVar1->CompactedTailOffsets).Elements[3] = 0;
  (pFVar1->CompactedTailOffsets).Elements[4] = 0;
  (pFVar1->CompactedTailOffsets).Elements[5] = 0;
  (pFVar1->CompactedTailOffsets).Elements[6] = 0;
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId27,"Mutable_NewImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
               ,0x1b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId27);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name28,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_30,LLMScope_Name28,false,None,Default,true);
  FMemScope::FMemScope(local_28,&LLMScope_Name28,true);
  local_34 = param_4;
  local_38._s_0.X = (ushort)param_1;
  local_38._s_0.Y = (ushort)param_2;
  local_33 = (char)param_3;
  FImageDataStorage::Init(&this->DataStorage,(FImageDesc *)&local_38._s_0,param_5);
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_30);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this;
}

// FImage @ 14aa92bd0

FImage * __thiscall UE::Mutable::Private::FImage::FImage(FImage *this)

{
  FImageDataStorage *pFVar1;
  
  this->Flags = '\0';
  this->_padding_ = (longlong)&___7FImage_Private_Mutable_UE__6B_;
  this->RelevancyMinY = 0;
  this->RelevancyMaxY = 0;
  (this->Texture).Object = (UObject *)0x0;
  this->ReferenceID = 0;
  (this->DataStorage).Buffers.AllocatorInstance.SecondaryData =
       (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
        )0x0;
  (this->DataStorage).Buffers.ArrayNum = 0;
  *(undefined8 *)&(this->DataStorage).Buffers.ArrayMax = 1;
  (this->DataStorage).ImageFormat = None;
  (this->DataStorage).NumLODs = '\0';
  (this->DataStorage).CompactedTailOffsets.Elements[0] = 0;
  (this->DataStorage).CompactedTailOffsets.Elements[1] = 0;
  (this->DataStorage).CompactedTailOffsets.Elements[2] = 0;
  pFVar1 = &this->DataStorage;
  (pFVar1->CompactedTailOffsets).Elements[3] = 0;
  (pFVar1->CompactedTailOffsets).Elements[4] = 0;
  (pFVar1->CompactedTailOffsets).Elements[5] = 0;
  (pFVar1->CompactedTailOffsets).Elements[6] = 0;
  return this;
}

// CalculateDataSize @ 14aabb940

int __cdecl
UE::Mutable::Private::FImage::CalculateDataSize
          (int param_1,int param_2,int param_3,EImageFormat param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar3 = 0;
  if (ASTC_10x10_RG_LDR < param_4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("format < EImageFormat::Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageTypes.cpp"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar4 = iVar3;
  if (s_imageFormatData[param_4].BytesPerBlock != 0) {
    if (param_3 < 1) {
      param_3 = 1;
    }
    iVar4 = 0;
    if (0 < param_3) {
      uVar6 = (ulonglong)(uint)param_3;
      do {
        iVar4 = (s_imageFormatData[param_4].PixelsPerBlockY - 1) + param_2;
        iVar5 = (s_imageFormatData[param_4].PixelsPerBlockX - 1) + param_1;
        param_1 = (param_1 + 1) / 2;
        param_2 = (param_2 + 1) / 2;
        iVar3 = iVar3 + (iVar4 / (int)(uint)s_imageFormatData[param_4].PixelsPerBlockY) *
                        (iVar5 / (int)(uint)s_imageFormatData[param_4].PixelsPerBlockX) *
                        (uint)s_imageFormatData[param_4].BytesPerBlock;
        uVar6 = uVar6 - 1;
        iVar4 = iVar3;
      } while (uVar6 != 0);
    }
  }
  return iVar4;
}

// CalculateMipSize @ 14aabba30

TIntVector2<int> __thiscall UE::Mutable::Private::FImage::CalculateMipSize(FImage *this,int param_1)

{
  int iVar1;
  undefined4 in_register_00000014;
  TIntVector2<int>_u_0 TVar2;
  int in_R8D;
  uint local_res8;
  uint uStackX_c;
  
  TVar2._s_0.Y = in_register_00000014;
  TVar2._s_0.X = param_1;
  iVar1 = 0;
  local_res8 = (uint)(this->DataStorage).ImageSize.field0_0x0._s_0.X;
  uStackX_c = (uint)(this->DataStorage).ImageSize.field0_0x0._s_0.Y;
  if (0 < in_R8D + 1) {
    do {
      if (iVar1 == in_R8D) {
        *(ulonglong *)TVar2 = CONCAT44(uStackX_c,local_res8);
        return (TIntVector2<int>)TVar2;
      }
      iVar1 = iVar1 + 1;
      local_res8 = (int)(local_res8 + 1) / 2;
      uStackX_c = (int)(uStackX_c + 1) / 2;
    } while (iVar1 < in_R8D + 1);
  }
  *(undefined8 *)TVar2 = 0;
  return (TIntVector2<int>)TVar2;
}

// CopyMove @ 14aac2960

void __thiscall UE::Mutable::Private::FImage::CopyMove(FImage *this,FImage *param_1)

{
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar1;
  FImageDataStorage *_Dst;
  bool bVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Mutable::Private::FImage::CopyMove(UE::Mutable::Private::FImage*___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Mutable::Private::FImage::CopyMove(UE::Mutable::Private::FImage*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Mutable::Private::FImage::CopyMove(UE::Mutable::Private::FImage*___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Mutable::Private::FImage::CopyMove(UE::Mutable::Private::FImage*___ptr64)___ptr64'
                    ::__l2::LLMScope_Name179,L"MutableRuntime");
    _Init_thread_footer(&`public:_void___cdecl_UE::Mutable::Private::FImage::CopyMove(UE::Mutable::Private::FImage*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Mutable::Private::FImage::CopyMove(UE::Mutable::Private::FImage*___ptr64)___ptr64'
             ::__l2::LLMScope_Name179,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_UE::Mutable::Private::FImage::CopyMove(UE::Mutable::Private::FImage*___ptr64)___ptr64'
              ::__l2::LLMScope_Name179,true);
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Mutable::Private::FImage::CopyMove(UE::Mutable::Private::FImage*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId180,"Mutable_CopyMove",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\Image.h"
               ,0xb4);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Mutable::Private::FImage::CopyMove(UE::Mutable::Private::FImage*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId180);
  }
  if (param_1 != this) {
    this->Flags = param_1->Flags;
    this->RelevancyMinY = param_1->RelevancyMinY;
    this->RelevancyMaxY = param_1->RelevancyMaxY;
    this->ReferenceID = param_1->ReferenceID;
    _Dst = &this->DataStorage;
    if (_Dst != &param_1->DataStorage) {
      FVar1 = (this->DataStorage).Buffers.AllocatorInstance.SecondaryData;
      if (FVar1 == (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )0x0) {
        FVar1 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                 )_Dst;
      }
      DestructItems<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,int>
                ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                  *)FVar1,(this->DataStorage).Buffers.ArrayNum);
      if ((param_1->DataStorage).Buffers.AllocatorInstance.SecondaryData ==
          (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )0x0) {
        memmove(_Dst,&param_1->DataStorage,0x18);
      }
      FVar1 = (this->DataStorage).Buffers.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )0x0) {
        FMemory::Free((void *)FVar1);
      }
      (this->DataStorage).Buffers.AllocatorInstance.SecondaryData =
           (param_1->DataStorage).Buffers.AllocatorInstance.SecondaryData;
      (param_1->DataStorage).Buffers.AllocatorInstance.SecondaryData =
           (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
            )0x0;
      (this->DataStorage).Buffers.ArrayNum = (param_1->DataStorage).Buffers.ArrayNum;
      (this->DataStorage).Buffers.ArrayMax = (param_1->DataStorage).Buffers.ArrayMax;
      (param_1->DataStorage).Buffers.ArrayNum = 0;
      (param_1->DataStorage).Buffers.ArrayMax = 1;
    }
    (this->DataStorage).ImageSize.field0_0x0 = (param_1->DataStorage).ImageSize.field0_0x0;
    (this->DataStorage).ImageFormat = (param_1->DataStorage).ImageFormat;
    (this->DataStorage).NumLODs = (param_1->DataStorage).NumLODs;
    *(undefined8 *)(this->DataStorage).CompactedTailOffsets.Elements =
         *(undefined8 *)(param_1->DataStorage).CompactedTailOffsets.Elements;
    *(undefined4 *)((this->DataStorage).CompactedTailOffsets.Elements + 4) =
         *(undefined4 *)((param_1->DataStorage).CompactedTailOffsets.Elements + 4);
    (this->DataStorage).CompactedTailOffsets.Elements[6] =
         (param_1->DataStorage).CompactedTailOffsets.Elements[6];
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CreateAsReference @ 14aac2c00

TSharedPtr<UE::Mutable::Private::FImage,1> * __cdecl
UE::Mutable::Private::FImage::CreateAsReference
          (TSharedPtr<UE::Mutable::Private::FImage,1> *__return_storage_ptr__,uint param_1,
          FImageDesc *param_2,bool param_3)

{
  int *piVar1;
  byte bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FImage *pFVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<UE::Mutable::Private::FImage,1> *pTVar7;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar8;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar9;
  TSharedRef<UE::Mutable::Private::FImage,1> local_18;
  
  pTVar7 = MakeShared<UE::Mutable::Private::FImage,1>(&local_18);
  __return_storage_ptr__->Object = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (__return_storage_ptr__->Object == (FImage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object->ReferenceID = param_1;
  if (__return_storage_ptr__->Object == (FImage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar4 = __return_storage_ptr__->Object;
  FVar9 = (pFVar4->DataStorage).Buffers.AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    FVar9 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )&pFVar4->DataStorage;
  }
  DestructItems<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,int>
            ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
              *)FVar9,(pFVar4->DataStorage).Buffers.ArrayNum);
  piVar1 = &(pFVar4->DataStorage).Buffers.ArrayMax;
  (pFVar4->DataStorage).Buffers.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>_>
              (0x18,8,0,(ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                         *)&pFVar4->DataStorage,0,piVar1);
  }
  (pFVar4->DataStorage).CompactedTailOffsets.Elements[0] = 0xffff;
  (pFVar4->DataStorage).ImageSize.field0_0x0 = (param_2->m_size).field0_0x0;
  (pFVar4->DataStorage).ImageFormat = param_2->m_format;
  (pFVar4->DataStorage).NumLODs = param_2->m_lods;
  if (__return_storage_ptr__->Object == (FImage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object->Flags = '\x10';
  if (param_3) {
    if (__return_storage_ptr__->Object == (FImage *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    bVar2 = __return_storage_ptr__->Object->Flags;
    if (__return_storage_ptr__->Object == (FImage *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    __return_storage_ptr__->Object->Flags = bVar2 | 0x20;
  }
  return __return_storage_ptr__;
}

// GetDataSize @ 14aaccca0

int __thiscall UE::Mutable::Private::FImage::GetDataSize(FImage *this)

{
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar6;
  undefined1 local_res8 [8];
  
  FVar6 = (this->DataStorage).Buffers.AllocatorInstance.SecondaryData;
  iVar4 = (this->DataStorage).Buffers.ArrayNum;
  uVar5 = 0;
  if (FVar6 == (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    FVar6 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )&this->DataStorage;
  }
  FVar1 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )((longlong)FVar6 + (longlong)iVar4 * 0x18);
  while( true ) {
    if ((this->DataStorage).Buffers.ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar1) break;
    uVar5 = uVar5 + (longlong)*(int *)((longlong)FVar6 + 0x14);
    FVar6 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )((longlong)FVar6 + 0x18);
  }
  if (0x7ffffffe < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result < TNumericLimits<int32>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x241,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return (int)uVar5;
}

// GetFormat @ 14aacd690

EImageFormat __thiscall UE::Mutable::Private::FImage::GetFormat(FImage *this)

{
  return (this->DataStorage).ImageFormat;
}

// GetLODCount @ 14aaceb40

int __thiscall UE::Mutable::Private::FImage::GetLODCount(FImage *this)

{
  uint uVar1;
  
  uVar1 = (uint)(this->DataStorage).NumLODs;
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

// GetLODData @ 14aacec30

uchar * __thiscall UE::Mutable::Private::FImage::GetLODData(FImage *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  FImageDataStorage::GetLOD(&this->DataStorage,&local_18,param_1);
  if (local_18.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  return local_18.DataPtr;
}

// GetLODData @ 14aacec90

uchar * __thiscall UE::Mutable::Private::FImage::GetLODData(FImage *this,int param_1)

{
  TArrayView<unsigned_char_const_,int> *pTVar1;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pTVar1 = FImageDataStorage::GetLOD(&this->DataStorage,&local_18,param_1);
  return pTVar1->DataPtr;
}

// GetLODDataSize @ 14aacecc0

int __thiscall UE::Mutable::Private::FImage::GetLODDataSize(FImage *this,int param_1)

{
  TArrayView<unsigned_char_const_,int> *pTVar1;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pTVar1 = FImageDataStorage::GetLOD(&this->DataStorage,&local_18,param_1);
  return pTVar1->ArrayNum;
}

// GetMipData @ 14aacf810

uchar * __thiscall UE::Mutable::Private::FImage::GetMipData(FImage *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  FImageDataStorage::GetLOD(&this->DataStorage,&local_18,param_1);
  if (local_18.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  return local_18.DataPtr;
}

// GetMipData @ 14aacf870

uchar * __thiscall UE::Mutable::Private::FImage::GetMipData(FImage *this,int param_1)

{
  TArrayView<unsigned_char_const_,int> *pTVar1;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pTVar1 = FImageDataStorage::GetLOD(&this->DataStorage,&local_18,param_1);
  return pTVar1->DataPtr;
}

// GetMipmapCount @ 14aacf8a0

int __cdecl UE::Mutable::Private::FImage::GetMipmapCount(int param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((0 < param_1) && (0 < param_2)) {
    if (param_2 < param_1) {
      param_2 = param_1;
    }
    uVar1 = (ulonglong)(param_2 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    return (int)lVar2 + 1;
  }
  return 0;
}

// GetMipsDataSize @ 14aacf8d0

int __thiscall UE::Mutable::Private::FImage::GetMipsDataSize(FImage *this)

{
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar6;
  undefined1 local_res8 [8];
  
  FVar6 = (this->DataStorage).Buffers.AllocatorInstance.SecondaryData;
  iVar4 = (this->DataStorage).Buffers.ArrayNum;
  uVar5 = 0;
  if (FVar6 == (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    FVar6 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )&this->DataStorage;
  }
  FVar1 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )((longlong)FVar6 + (longlong)iVar4 * 0x18);
  while( true ) {
    if ((this->DataStorage).Buffers.ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar1) break;
    uVar5 = uVar5 + (longlong)*(int *)((longlong)FVar6 + 0x10);
    FVar6 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )((longlong)FVar6 + 0x18);
  }
  if (0x7ffffffe < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result < TNumericLimits<int32>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x24d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return (int)uVar5;
}

// GetNonBlackRect @ 14aacf980

void __thiscall
UE::Mutable::Private::FImage::GetNonBlackRect
          (FImage *this,box<UE::Math::TIntVector2<unsigned_short>_> *param_1)

{
  EImageFormat EVar1;
  TIntVector2<unsigned_short>_u_0_s_0 TVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  short sVar18;
  uint uVar19;
  TArrayView<unsigned_char_const_,int> TStack_58;
  
  TVar2 = (this->DataStorage).ImageSize.field0_0x0._s_0;
  uVar6 = 0;
  (param_1->min).field0_0x0 = (TIntVector2<unsigned_short>_u_0)0x0;
  uVar11 = TVar2.X;
  (param_1->size).field0_0x0._s_0.X = uVar11;
  uVar15 = TVar2.Y;
  (param_1->size).field0_0x0._s_0.Y = uVar15;
  if ((uVar11 != 0) && (uVar15 != 0)) {
    EVar1 = (this->DataStorage).ImageFormat;
    uVar8 = 0;
    uVar12 = uVar15 - 1;
    uVar19 = (int)TVar2 - 1;
    sVar18 = (short)uVar19;
    bVar4 = true;
    FImageDataStorage::GetLOD(&this->DataStorage,&TStack_58,0);
    uVar14 = 0;
    if (uVar15 != 0) {
      do {
        uVar16 = 0;
        uVar13 = uVar12;
        uVar7 = uVar6;
        uVar17 = uVar8;
        if (uVar11 != 0) {
          do {
            if (EVar1 == RGB_UByte) {
              lVar10 = (longlong)(int)(((uint)uVar14 * ((uint)TVar2 & 0xffff) + (uint)uVar16) * 3);
              iVar9 = -(uint)*(ushort *)(TStack_58.DataPtr + lVar10);
              if (iVar9 == 0) {
                iVar9 = -(uint)TStack_58.DataPtr[lVar10 + 2];
              }
              bVar5 = iVar9 == 0;
LAB_14aacfb33:
              uVar12 = uVar13;
              uVar6 = uVar7;
              uVar8 = uVar17;
              if (!bVar5) goto LAB_14aacfa99;
            }
            else {
              if (EVar1 == RGBA_UByte) {
LAB_14aacfada:
                bVar5 = *(int *)(TStack_58.DataPtr +
                                (int)(((uint)uVar16 + (uint)uVar14 * ((uint)TVar2 & 0xffff)) * 4))
                        == 0;
                goto LAB_14aacfb33;
              }
              if (EVar1 == L_UByte) {
                bVar5 = TStack_58.DataPtr
                        [(int)((uint)uVar16 + (uint)uVar14 * ((uint)TVar2 & 0xffff))] == '\0';
                goto LAB_14aacfb33;
              }
              if (EVar1 == BGRA_UByte) goto LAB_14aacfada;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
                                 ,0x24e,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
LAB_14aacfa99:
              uVar12 = uVar14;
              uVar6 = uVar16;
              uVar8 = uVar14;
              if (bVar4) {
                bVar4 = false;
                uVar19 = (uint)uVar16;
              }
              else {
                if (uVar7 < uVar16) {
                  uVar6 = uVar7;
                }
                uVar7 = uVar16;
                if (uVar16 < (ushort)uVar19) {
                  uVar7 = (ushort)uVar19;
                }
                uVar19 = (uint)uVar7;
                if (uVar17 < uVar14) {
                  uVar8 = uVar17;
                }
                if (uVar14 < uVar13) {
                  uVar12 = uVar13;
                }
              }
            }
            uVar16 = uVar16 + 1;
            uVar13 = uVar12;
            uVar7 = uVar6;
            uVar17 = uVar8;
          } while (uVar16 < uVar11);
        }
        sVar18 = (short)uVar19;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar15);
    }
    (param_1->min).field0_0x0._s_0.X = uVar6;
    (param_1->min).field0_0x0._s_0.Y = uVar8;
    (param_1->size).field0_0x0._s_0.X = (sVar18 - uVar6) + 1;
    (param_1->size).field0_0x0._s_0.Y = (uVar12 - uVar8) + 1;
  }
  return;
}

// GetNonBlackRect_Reference @ 14aacf990

void __thiscall
UE::Mutable::Private::FImage::GetNonBlackRect_Reference
          (FImage *this,box<UE::Math::TIntVector2<unsigned_short>_> *param_1)

{
  EImageFormat EVar1;
  TIntVector2<unsigned_short>_u_0_s_0 TVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  short sVar18;
  uint uVar19;
  TArrayView<unsigned_char_const_,int> local_58;
  
  TVar2 = (this->DataStorage).ImageSize.field0_0x0._s_0;
  uVar6 = 0;
  (param_1->min).field0_0x0 = (TIntVector2<unsigned_short>_u_0)0x0;
  uVar11 = TVar2.X;
  (param_1->size).field0_0x0._s_0.X = uVar11;
  uVar15 = TVar2.Y;
  (param_1->size).field0_0x0._s_0.Y = uVar15;
  if ((uVar11 != 0) && (uVar15 != 0)) {
    EVar1 = (this->DataStorage).ImageFormat;
    uVar8 = 0;
    uVar12 = uVar15 - 1;
    uVar19 = (int)TVar2 - 1;
    sVar18 = (short)uVar19;
    bVar4 = true;
    FImageDataStorage::GetLOD(&this->DataStorage,&local_58,0);
    uVar14 = 0;
    if (uVar15 != 0) {
      do {
        uVar16 = 0;
        uVar13 = uVar12;
        uVar7 = uVar6;
        uVar17 = uVar8;
        if (uVar11 != 0) {
          do {
            if (EVar1 == RGB_UByte) {
              lVar10 = (longlong)(int)(((uint)uVar14 * ((uint)TVar2 & 0xffff) + (uint)uVar16) * 3);
              iVar9 = -(uint)*(ushort *)(local_58.DataPtr + lVar10);
              if (iVar9 == 0) {
                iVar9 = -(uint)local_58.DataPtr[lVar10 + 2];
              }
              bVar5 = iVar9 == 0;
LAB_14aacfb33:
              uVar12 = uVar13;
              uVar6 = uVar7;
              uVar8 = uVar17;
              if (!bVar5) goto LAB_14aacfa99;
            }
            else {
              if (EVar1 == RGBA_UByte) {
LAB_14aacfada:
                bVar5 = *(int *)(local_58.DataPtr +
                                (int)(((uint)uVar16 + (uint)uVar14 * ((uint)TVar2 & 0xffff)) * 4))
                        == 0;
                goto LAB_14aacfb33;
              }
              if (EVar1 == L_UByte) {
                bVar5 = local_58.DataPtr
                        [(int)((uint)uVar16 + (uint)uVar14 * ((uint)TVar2 & 0xffff))] == '\0';
                goto LAB_14aacfb33;
              }
              if (EVar1 == BGRA_UByte) goto LAB_14aacfada;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
                                 ,0x24e,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
LAB_14aacfa99:
              uVar12 = uVar14;
              uVar6 = uVar16;
              uVar8 = uVar14;
              if (bVar4) {
                bVar4 = false;
                uVar19 = (uint)uVar16;
              }
              else {
                if (uVar7 < uVar16) {
                  uVar6 = uVar7;
                }
                uVar7 = uVar16;
                if (uVar16 < (ushort)uVar19) {
                  uVar7 = (ushort)uVar19;
                }
                uVar19 = (uint)uVar7;
                if (uVar17 < uVar14) {
                  uVar8 = uVar17;
                }
                if (uVar14 < uVar13) {
                  uVar12 = uVar13;
                }
              }
            }
            uVar16 = uVar16 + 1;
            uVar13 = uVar12;
            uVar7 = uVar6;
            uVar17 = uVar8;
          } while (uVar16 < uVar11);
        }
        sVar18 = (short)uVar19;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar15);
    }
    (param_1->min).field0_0x0._s_0.X = uVar6;
    (param_1->min).field0_0x0._s_0.Y = uVar8;
    (param_1->size).field0_0x0._s_0.X = (sVar18 - uVar6) + 1;
    (param_1->size).field0_0x0._s_0.Y = (uVar12 - uVar8) + 1;
  }
  return;
}

// GetReferencedTexture @ 14aad11a0

uint __thiscall UE::Mutable::Private::FImage::GetReferencedTexture(FImage *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->Flags & 0x10) != 0) {
    return this->ReferenceID;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8821259237050024164>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
                     ,0xe4,"IsReference()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return this->ReferenceID;
}

// GetSize @ 14aad23d0

TIntVector2<unsigned_short> * __thiscall UE::Mutable::Private::FImage::GetSize(FImage *this)

{
  return &(this->DataStorage).ImageSize;
}

// GetSizeX @ 14aad23e0

ushort __thiscall UE::Mutable::Private::FImage::GetSizeX(FImage *this)

{
  return (this->DataStorage).ImageSize.field0_0x0._s_0.X;
}

// GetSizeY @ 14aad23f0

ushort __thiscall UE::Mutable::Private::FImage::GetSizeY(FImage *this)

{
  return (this->DataStorage).ImageSize.field0_0x0._s_0.Y;
}

// Init @ 14aad7f00

void __thiscall
UE::Mutable::Private::FImage::Init
          (FImage *this,uint param_1,uint param_2,uint param_3,EImageFormat param_4,
          EInitializationType param_5)

{
  bool bVar1;
  TIntVector2<unsigned_short>_u_0 local_res8;
  EImageFormat local_resc;
  undefined1 local_resd;
  FLLMScope local_res10 [2];
  FMemScope local_28 [2];
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId27,"Mutable_NewImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
               ,0x1b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId27);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name28,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name28,false,None,Default,true);
  FMemScope::FMemScope(local_28,&LLMScope_Name28,true);
  local_resc = param_4;
  local_res8._s_0.X = (ushort)param_1;
  local_res8._s_0.Y = (ushort)param_2;
  local_resd = (char)param_3;
  FImageDataStorage::Init(&this->DataStorage,(FImageDesc *)&local_res8._s_0,param_5);
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res10);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitToBlack @ 14aad8610

void __thiscall UE::Mutable::Private::FImage::InitToBlack(FImage *this)

{
  TIntVector2<unsigned_short>_u_0 local_res8;
  EImageFormat local_resc;
  uchar local_resd;
  
  local_res8 = (this->DataStorage).ImageSize.field0_0x0;
  local_resc = (this->DataStorage).ImageFormat;
  local_resd = (this->DataStorage).NumLODs;
  FImageDataStorage::Init(&this->DataStorage,(FImageDesc *)&local_res8._s_0,Black);
  this->Flags = '\0';
  this->RelevancyMinY = 0;
  this->RelevancyMaxY = 0;
  return;
}

// IsForceLoad @ 14aad8a00

bool __thiscall UE::Mutable::Private::FImage::IsForceLoad(FImage *this)

{
  return (bool)(this->Flags >> 5 & 1);
}

// IsFullAlpha @ 14aad8a20

bool __thiscall UE::Mutable::Private::FImage::IsFullAlpha(FImage *this)

{
  EImageFormat EVar1;
  int iVar2;
  longlong lVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  FImageDataStorage::GetLOD(&this->DataStorage,&local_18,0);
  if ((local_18.ArrayNum != 0) && (EVar1 = (this->DataStorage).ImageFormat, EVar1 != RGB_UByte)) {
    if ((EVar1 != RGBA_UByte) && (EVar1 != BGRA_UByte)) {
      return false;
    }
    iVar2 = (int)(local_18.ArrayNum + (local_18.ArrayNum >> 0x1f & 3U)) >> 2;
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        if (local_18.DataPtr[lVar3 * 4 + 3] != 0xff) {
          return false;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  return true;
}

// IsPlainColour @ 14aad8bc0

bool __thiscall UE::Mutable::Private::FImage::IsPlainColour(FImage *this,TVector4<float> *param_1)

{
  EImageFormat EVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TArrayView<unsigned_char_const_,int> local_18;
  
  FImageDataStorage::GetLOD(&this->DataStorage,&local_18,0);
  fVar10 = __real_3b808081;
  if (local_18.ArrayNum == 0) {
    return true;
  }
  EVar1 = (this->DataStorage).ImageFormat;
  if (EVar1 == RGB_UByte) {
    local_18.ArrayNum = local_18.ArrayNum / 3;
    iVar8 = 0;
    if (0 < local_18.ArrayNum) {
      iVar7 = 0;
      do {
        if ((*(short *)local_18.DataPtr != *(short *)(local_18.DataPtr + iVar7)) ||
           (local_18.DataPtr[2] != local_18.DataPtr[(longlong)iVar7 + 2])) break;
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 3;
      } while (iVar8 < local_18.ArrayNum);
    }
    fVar11 = (float)local_18.DataPtr[1] * __real_3b808081;
    fVar10 = (float)local_18.DataPtr[2] * __real_3b808081;
    (param_1->field0_0x0)._s_0.X = (float)*local_18.DataPtr * __real_3b808081;
    (param_1->field0_0x0)._s_0.Y = fVar11;
    (param_1->field0_0x0)._s_0.Z = fVar10;
    (param_1->field0_0x0)._s_0.W = 1.0;
    return local_18.ArrayNum <= iVar8;
  }
  if (EVar1 != RGBA_UByte) {
    if (EVar1 == L_UByte) {
      iVar8 = 0;
      if (0 < local_18.ArrayNum) {
        do {
          if (*local_18.DataPtr != local_18.DataPtr[iVar8]) break;
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_18.ArrayNum);
      }
      fVar10 = (float)*local_18.DataPtr * __real_3b808081;
      (param_1->field0_0x0)._s_0.X = fVar10;
      (param_1->field0_0x0)._s_0.Y = fVar10;
      (param_1->field0_0x0)._s_0.Z = fVar10;
      (param_1->field0_0x0)._s_0.W = 1.0;
      return local_18.ArrayNum <= iVar8;
    }
    if (EVar1 != BGRA_UByte) {
      return false;
    }
  }
  iVar9 = 0;
  iVar7 = (int)(local_18.ArrayNum + (local_18.ArrayNum >> 0x1f & 3U)) >> 2;
  iVar8 = iVar9;
  if (0 < iVar7) {
    do {
      if (*(int *)local_18.DataPtr != *(int *)(local_18.DataPtr + iVar8)) break;
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar9 < iVar7);
  }
  bVar3 = iVar7 <= iVar9;
  if (EVar1 == RGBA_UByte) {
    bVar2 = local_18.DataPtr[3];
    fVar12 = (float)local_18.DataPtr[1] * __real_3b808081;
    fVar11 = (float)local_18.DataPtr[2] * __real_3b808081;
    (param_1->field0_0x0)._s_0.X = (float)*local_18.DataPtr * __real_3b808081;
    (param_1->field0_0x0)._s_0.Y = fVar12;
    (param_1->field0_0x0)._s_0.Z = fVar11;
    (param_1->field0_0x0)._s_0.W = (float)bVar2 * fVar10;
    return bVar3;
  }
  if (EVar1 != BGRA_UByte) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
                       ,0x1cd,L"");
    if (!bVar5) {
      return bVar3;
    }
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  bVar2 = local_18.DataPtr[3];
  fVar12 = (float)local_18.DataPtr[1] * __real_3b808081;
  fVar11 = (float)*local_18.DataPtr * __real_3b808081;
  (param_1->field0_0x0)._s_0.X = (float)local_18.DataPtr[2] * __real_3b808081;
  (param_1->field0_0x0)._s_0.Y = fVar12;
  (param_1->field0_0x0)._s_0.Z = fVar11;
  (param_1->field0_0x0)._s_0.W = (float)bVar2 * fVar10;
  return bVar3;
}

// IsReference @ 14aad8e90

bool __thiscall UE::Mutable::Private::FImage::IsReference(FImage *this)

{
  return (bool)(this->Flags >> 4 & 1);
}

// ReduceLODs @ 14aae6230

void __thiscall UE::Mutable::Private::FImage::ReduceLODs(FImage *this,int param_1)

{
  FImageDataStorage::DropLODs(&this->DataStorage,param_1);
  return;
}

// ReduceLODsTo @ 14aae6240

void __thiscall UE::Mutable::Private::FImage::ReduceLODsTo(FImage *this,int param_1)

{
  FImageDataStorage::SetNumLODs(&this->DataStorage,param_1,NotInitialized);
  return;
}

// Sample @ 14aaf3710

/* WARNING: Type propagation algorithm not settling */

TVector4<float> * __thiscall
UE::Mutable::Private::FImage::Sample
          (FImage *this,TVector4<float> *__return_storage_ptr__,TVector2<float> param_1)

{
  EImageFormat EVar1;
  EImageFormat EVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TVector4<float> *pTVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uchar *puVar16;
  float fVar17;
  float local_res18;
  float fStackX_1c;
  TArrayView<unsigned_char_const_,int> local_58 [2];
  
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  uVar10 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  if ((this->DataStorage).ImageSize.field0_0x0._s_0.X == 0) {
    return __return_storage_ptr__;
  }
  if ((this->DataStorage).ImageSize.field0_0x0._s_0.Y == 0) {
    return __return_storage_ptr__;
  }
  EVar1 = (this->DataStorage).ImageFormat;
  if ((ASTC_10x10_RG_LDR < EVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("format < EImageFormat::Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageTypes.cpp"
                         ,0x3f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TVector4<float> *)(*pcVar4)();
    return pTVar9;
  }
  uVar12 = *(uint *)(this->DataStorage).ImageSize.field0_0x0.XY;
  EVar2 = (this->DataStorage).ImageFormat;
  uVar8 = (uVar12 & 0xffff) - 1;
  local_res18 = param_1.field0_0x0._0_4_;
  uVar6 = (uint)((float)(uVar12 & 0xffff) * local_res18);
  if ((int)uVar8 < (int)uVar6) {
    uVar6 = uVar8;
  }
  if ((int)uVar6 < 0) {
    uVar6 = uVar10;
  }
  uVar13 = (uint)s_imageFormatData[EVar1].PixelsPerBlockX;
  iVar11 = (int)uVar6 % (int)uVar13;
  uVar8 = (uVar12 >> 0x10) - 1;
  fStackX_1c = param_1.field0_0x0._4_4_;
  uVar7 = (uint)((float)(uVar12 >> 0x10) * fStackX_1c);
  if ((int)uVar8 < (int)uVar7) {
    uVar7 = uVar8;
  }
  if ((int)uVar7 < 0) {
    uVar7 = uVar10;
  }
  iVar14 = (int)uVar7 % (int)(uint)s_imageFormatData[EVar1].PixelsPerBlockY;
  iVar15 = ((int)(((uVar12 & 0xffff) - 1) + uVar13) /
           (int)(uint)s_imageFormatData[EVar1].PixelsPerBlockX) *
           ((int)uVar7 / (int)(uint)s_imageFormatData[EVar1].PixelsPerBlockY) +
           (int)uVar6 / (int)uVar13;
  FImageDataStorage::GetLOD(&this->DataStorage,local_58,0);
  uVar8 = 0;
  if (EVar2 == RGB_UByte) {
    uVar6 = iVar15 * (uint)s_imageFormatData[EVar1].BytesPerBlock +
            ((uint)s_imageFormatData[EVar1].PixelsPerBlockX * iVar14 + iVar11) * 3;
    uVar12 = uVar8;
    if ((int)uVar6 < local_58[0].ArrayNum) {
      uVar12 = ~uVar6 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TVector4<float> *)(*pcVar4)();
      return pTVar9;
    }
    fVar17 = __real_3b808081;
    uVar12 = uVar6 + 1;
    if ((int)uVar12 < local_58[0].ArrayNum) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (float)local_58[0].DataPtr[(int)uVar6] * __real_3b808081;
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TVector4<float> *)(*pcVar4)();
      return pTVar9;
    }
    uVar6 = uVar6 + 2;
    if ((int)uVar6 < local_58[0].ArrayNum) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)local_58[0].DataPtr[(int)uVar12] * fVar17;
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TVector4<float> *)(*pcVar4)();
      return pTVar9;
    }
    bVar3 = local_58[0].DataPtr[(int)uVar6];
LAB_14aaf3e31:
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)bVar3 * fVar17;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  }
  else {
    if (EVar2 == RGBA_UByte) {
      uVar6 = (uint)s_imageFormatData[EVar1].BytesPerBlock * iVar15 +
              ((uint)s_imageFormatData[EVar1].PixelsPerBlockX * iVar14 + iVar11) * 4;
      uVar12 = uVar8;
      if ((int)uVar6 < local_58[0].ArrayNum) {
        uVar12 = ~uVar6 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector4<float> *)(*pcVar4)();
        return pTVar9;
      }
      fVar17 = __real_3b808081;
      uVar7 = uVar6 + 1;
      uVar12 = uVar8;
      if ((int)uVar7 < local_58[0].ArrayNum) {
        uVar12 = ~uVar7 >> 0x1f;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (float)local_58[0].DataPtr[(int)uVar6] * __real_3b808081;
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector4<float> *)(*pcVar4)();
        return pTVar9;
      }
      uVar12 = uVar6 + 2;
      if ((int)uVar12 < local_58[0].ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)local_58[0].DataPtr[(int)uVar7] * fVar17;
      puVar16 = local_58[0].DataPtr;
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector4<float> *)(*pcVar4)();
        return pTVar9;
      }
    }
    else {
      if (EVar2 != BGRA_UByte) {
        if (EVar2 != L_UByte) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
                             ,0x17a,L"");
          if (!bVar5) {
            return __return_storage_ptr__;
          }
          pcVar4 = (code *)swi(3);
          pTVar9 = (TVector4<float> *)(*pcVar4)();
          return pTVar9;
        }
        uVar6 = iVar11 + (uint)s_imageFormatData[EVar1].BytesPerBlock * iVar15 +
                (uint)s_imageFormatData[EVar1].PixelsPerBlockX * iVar14;
        uVar7 = ~uVar6 >> 0x1f;
        uVar12 = uVar8;
        if ((int)uVar6 < local_58[0].ArrayNum) {
          uVar12 = uVar7;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TVector4<float> *)(*pcVar4)();
          return pTVar9;
        }
        fVar17 = __real_3b808081;
        if ((int)uVar6 < local_58[0].ArrayNum) {
          uVar8 = uVar7;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             (float)local_58[0].DataPtr[(int)uVar6] * __real_3b808081;
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TVector4<float> *)(*pcVar4)();
          return pTVar9;
        }
        if ((int)uVar6 < local_58[0].ArrayNum) {
          uVar10 = uVar7;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.Y =
             (float)local_58[0].DataPtr[(int)uVar6] * fVar17;
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TVector4<float> *)(*pcVar4)();
          return pTVar9;
        }
        bVar3 = local_58[0].DataPtr[(int)uVar6];
        goto LAB_14aaf3e31;
      }
      uVar12 = (uint)s_imageFormatData[EVar1].BytesPerBlock * iVar15 +
               ((uint)s_imageFormatData[EVar1].PixelsPerBlockX * iVar14 + iVar11) * 4;
      uVar7 = uVar12 + 2;
      uVar6 = uVar8;
      if ((int)uVar7 < local_58[0].ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector4<float> *)(*pcVar4)();
        return pTVar9;
      }
      fVar17 = __real_3b808081;
      uVar13 = uVar12 + 1;
      uVar6 = uVar8;
      if ((int)uVar13 < local_58[0].ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (float)local_58[0].DataPtr[(int)uVar7] * __real_3b808081;
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector4<float> *)(*pcVar4)();
        return pTVar9;
      }
      if ((int)uVar12 < local_58[0].ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)local_58[0].DataPtr[(int)uVar13] * fVar17
      ;
      puVar16 = local_58[0].DataPtr;
      uVar6 = uVar12;
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector4<float> *)(*pcVar4)();
        return pTVar9;
      }
    }
    uVar6 = uVar6 + 3;
    if ((int)uVar6 < local_58[0].ArrayNum) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)puVar16[(int)uVar12] * fVar17;
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TVector4<float> *)(*pcVar4)();
      return pTVar9;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.W = (float)puVar16[(int)uVar6] * fVar17;
  }
  return __return_storage_ptr__;
}

// Serialise @ 14aaf3f40

void __thiscall UE::Mutable::Private::FImage::Serialise(FImage *this,FOutputArchive *param_1)

{
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar1;
  int iVar2;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar3;
  TStaticArray<unsigned_short,7,4294967295> *pTVar4;
  longlong lVar5;
  byte local_res8 [8];
  uint local_res10 [2];
  
  Private::operator<<(param_1,(ushort *)&(this->DataStorage).ImageSize);
  Private::operator<<(param_1,&(this->DataStorage).ImageSize.field0_0x0._s_0.Y);
  local_res10[0] = (uint)(this->DataStorage).ImageFormat;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res10,4);
  Private::operator<<(param_1,&(this->DataStorage).NumLODs);
  local_res10[0] = (this->DataStorage).Buffers.ArrayNum;
  Private::operator<<(param_1,(int *)local_res10);
  FVar3 = (this->DataStorage).Buffers.AllocatorInstance.SecondaryData;
  iVar2 = (this->DataStorage).Buffers.ArrayNum;
  if (FVar3 == (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    FVar3 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )&this->DataStorage;
  }
  FVar1 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )((longlong)FVar3 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->DataStorage).Buffers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar3 == FVar1) break;
    local_res10[0] = *(uint *)((longlong)FVar3 + 0x10);
    Private::operator<<(param_1,local_res10);
    if (local_res10[0] != 0) {
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,*(undefined8 *)FVar3,local_res10[0]);
    }
    FVar3 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )((longlong)FVar3 + 0x18);
  }
  lVar5 = 7;
  local_res10[0] = 7;
  Private::operator<<(param_1,(int *)local_res10);
  pTVar4 = &(this->DataStorage).CompactedTailOffsets;
  do {
    Private::operator<<(param_1,pTVar4->Elements);
    pTVar4 = (TStaticArray<unsigned_short,7,4294967295> *)(pTVar4->Elements + 1);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_res8[0] = this->Flags & 0xf7;
  Private::operator<<(param_1,local_res8);
  return;
}

// Serialise @ 14aaf4070

void __cdecl UE::Mutable::Private::FImage::Serialise(FImage *param_1,FOutputArchive *param_2)

{
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar1;
  int iVar2;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar3;
  TStaticArray<unsigned_short,7,4294967295> *pTVar4;
  longlong lVar5;
  byte local_res8 [8];
  uint local_res10 [2];
  
  Private::operator<<(param_2,(ushort *)&(param_1->DataStorage).ImageSize);
  Private::operator<<(param_2,&(param_1->DataStorage).ImageSize.field0_0x0._s_0.Y);
  local_res10[0] = (uint)(param_1->DataStorage).ImageFormat;
  (**(code **)((longlong)*param_2->Stream + 8))(param_2->Stream,local_res10,4);
  Private::operator<<(param_2,&(param_1->DataStorage).NumLODs);
  local_res10[0] = (param_1->DataStorage).Buffers.ArrayNum;
  Private::operator<<(param_2,(int *)local_res10);
  FVar3 = (param_1->DataStorage).Buffers.AllocatorInstance.SecondaryData;
  iVar2 = (param_1->DataStorage).Buffers.ArrayNum;
  if (FVar3 == (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    FVar3 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )&param_1->DataStorage;
  }
  FVar1 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )((longlong)FVar3 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((param_1->DataStorage).Buffers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar3 == FVar1) break;
    local_res10[0] = *(uint *)((longlong)FVar3 + 0x10);
    Private::operator<<(param_2,local_res10);
    if (local_res10[0] != 0) {
      (**(code **)((longlong)*param_2->Stream + 8))
                (param_2->Stream,*(undefined8 *)FVar3,local_res10[0]);
    }
    FVar3 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )((longlong)FVar3 + 0x18);
  }
  lVar5 = 7;
  local_res10[0] = 7;
  Private::operator<<(param_2,(int *)local_res10);
  pTVar4 = &(param_1->DataStorage).CompactedTailOffsets;
  do {
    Private::operator<<(param_2,pTVar4->Elements);
    pTVar4 = (TStaticArray<unsigned_short,7,4294967295> *)(pTVar4->Elements + 1);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_res8[0] = param_1->Flags & 0xf7;
  Private::operator<<(param_2,local_res8);
  return;
}

// StaticUnserialise @ 14aafa1f0

TSharedPtr<UE::Mutable::Private::FImage,1> * __cdecl
UE::Mutable::Private::FImage::StaticUnserialise
          (TSharedPtr<UE::Mutable::Private::FImage,1> *__return_storage_ptr__,FInputArchive *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FImage *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<UE::Mutable::Private::FImage,1> *pTVar5;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  TSharedRef<UE::Mutable::Private::FImage,1> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name86,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name86,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name86,true);
  pTVar5 = MakeShared<UE::Mutable::Private::FImage,1>(&local_18);
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (__return_storage_ptr__->Object == (FImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  FImageDataStorage::Unserialise(&pFVar2->DataStorage,param_1);
  Private::operator>>(param_1,&pFVar2->Flags);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Unserialise @ 14aafcc50

void __thiscall UE::Mutable::Private::FImage::Unserialise(FImage *this,FInputArchive *param_1)

{
  FImageDataStorage::Unserialise(&this->DataStorage,param_1);
  Private::operator>>(param_1,&this->Flags);
  return;
}

