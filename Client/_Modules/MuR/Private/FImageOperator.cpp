// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 19

// FImageOperator @ 14a976720

FImageOperator * __thiscall
UE::Mutable::Private::FImageOperator::FImageOperator
          (FImageOperator *this,
          TFunction<TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl(int,int,int,UE::Mutable::Private::EImageFormat,UE::Mutable::Private::EInitializationType)>
          *param_1,TFunction<void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>_&)> *param_2,
          TFunction<TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl(UE::Mutable::Private::FImage_const_*)>
          *param_3,TFunction<void___cdecl(bool_&,int,UE::Mutable::Private::FImage_*,UE::Mutable::Private::FImage_const_*,int)>
                   *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)param_1;
  *(undefined8 *)&(this->CreateImage).field_0x28 = 0;
  *(longlong *)&this->CreateImage = lVar1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&(this->CreateImage).field_0x10);
  }
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->ReleaseImage = lVar1;
  *(undefined8 *)&(this->ReleaseImage).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  lVar1 = *(longlong *)param_3;
  *(longlong *)&this->CloneImage = lVar1;
  *(undefined8 *)&(this->CloneImage).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  lVar1 = *(longlong *)param_4;
  *(longlong *)&this->FormatImageOverride = lVar1;
  *(undefined8 *)&(this->FormatImageOverride).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar3 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar3 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)param_4 != 0) {
    plVar3 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// <lambda_invoker_cdecl> @ 14a9faff0

TSharedRef<UE::Mutable::Private::FImage,1> * __cdecl
`UE::Mutable::Private::FImageOperator::GetDefault'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (TSharedRef<UE::Mutable::Private::FImage,1> *__return_storage_ptr__,int param_1,
          int param_2,int param_3,EImageFormat param_4,EInitializationType param_5)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Mutable::Private::FImage,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FImage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFImage_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    UE::Mutable::Private::FImage::FImage
              ((FImage *)(pTVar3 + 1),param_1,param_2,param_3,param_4,param_5);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FImage *)(pTVar3 + 1);
    if ((FImage *)(pTVar3 + 1) == (FImage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Mutable::Private::FImage,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14a9fb3c0

void __cdecl
`UE::Mutable::Private::FImageOperator::GetDefault'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (TSharedPtr<UE::Mutable::Private::FImage,1> *param_1)

{
  TSharedPtr<UE::Mutable::Private::FImage,1> local_18;
  
  local_18.Object = (FImage *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_18) {
    param_1->Object = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// <lambda_invoker_cdecl> @ 14a9fb400

TSharedPtr<UE::Mutable::Private::FImage,1> * __cdecl
`UE::Mutable::Private::FImageOperator::GetDefault'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (TSharedPtr<UE::Mutable::Private::FImage,1> *__return_storage_ptr__,FImage *param_1)

{
  UE::Mutable::Private::FImage::Clone(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ~FImageOperator @ 14aa938b0

void __thiscall UE::Mutable::Private::FImageOperator::~FImageOperator(FImageOperator *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->FormatImageOverride != 0) {
    plVar1 = *(longlong **)&(this->FormatImageOverride).field_0x28;
    plVar2 = (longlong *)&(this->FormatImageOverride).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->CloneImage != 0) {
    plVar1 = *(longlong **)&(this->CloneImage).field_0x28;
    plVar2 = (longlong *)&(this->CloneImage).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ReleaseImage != 0) {
    plVar1 = *(longlong **)&(this->ReleaseImage).field_0x28;
    plVar2 = (longlong *)&(this->ReleaseImage).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->CreateImage != 0) {
    plVar1 = *(longlong **)&(this->CreateImage).field_0x28;
    plVar2 = (longlong *)&(this->CreateImage).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014aa93930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// ExtractMip @ 14aac7520

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

TSharedPtr<UE::Mutable::Private::FImage,1> * __thiscall
UE::Mutable::Private::FImageOperator::ExtractMip
          (FImageOperator *this,TSharedPtr<UE::Mutable::Private::FImage,1> *__return_storage_ptr__,
          FImage *param_1,int param_2)

{
  int *piVar1;
  EImageFormat EVar2;
  ushort uVar3;
  ushort uVar4;
  code *pcVar5;
  longlong *plVar6;
  uchar uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar13;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar14;
  TArrayView<unsigned_char_const_,int> *pTVar15;
  int iVar16;
  longlong *plVar17;
  FImage *pFVar18;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar19;
  bool bVar20;
  EImageFormat local_res20 [8];
  undefined1 local_1b8 [8];
  EImageFormat local_1b0 [8];
  FImage *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  FImage *local_198;
  TReferenceControllerBase<1> *local_190;
  FImage *local_188;
  FImageView local_180;
  FImageView local_168;
  undefined4 local_150 [2];
  undefined4 local_148 [2];
  uint local_140 [2];
  uint local_138 [2];
  undefined4 local_130 [2];
  undefined4 local_128 [2];
  uint local_120 [2];
  uint local_118 [2];
  uint local_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined2 uStack_104;
  undefined2 uStack_102;
  uchar *local_100;
  uint local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uchar *local_e8;
  uint local_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  uchar *local_d0;
  uint local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  uchar *local_b8;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  local_b0;
  TArrayView<unsigned_char_const_,int> local_a8;
  TArrayView<unsigned_char_const_,int> local_98;
  TArrayView<unsigned_char_const_,int> local_88;
  TArrayView<unsigned_char_const_,int> local_78;
  TArrayView<unsigned_char_const_,int> local_68;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char_const_,int> local_48;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId101,"Mutable_ExtractMip",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
               ,0x65);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId101);
  }
  if (param_2 == 0) {
    uVar7 = (param_1->DataStorage).NumLODs;
    if (uVar7 == '\0') {
      uVar7 = '\x01';
    }
    if (uVar7 == '\x01') {
      local_188 = param_1;
      Core::Private::Function::CheckCallable(*(void **)&this->CloneImage);
      pcVar5 = *(code **)&this->CloneImage;
      plVar6 = *(longlong **)&(this->CloneImage).field_0x28;
      plVar17 = (longlong *)&(this->CloneImage).field_0x10;
      if (plVar6 != (longlong *)0x0) {
        plVar17 = plVar6;
      }
      uVar12 = (**(code **)(*plVar17 + 8))();
      (*pcVar5)(__return_storage_ptr__,uVar12,&local_188);
      if (!bVar20) {
        return __return_storage_ptr__;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return __return_storage_ptr__;
    }
  }
  uVar10 = (uint)(param_1->DataStorage).ImageSize.field0_0x0._s_0.Y;
  uVar9 = (uint)(param_1->DataStorage).ImageSize.field0_0x0._s_0.X;
  iVar16 = 0;
  if (0 < param_2 + 1) {
    do {
      if (iVar16 == param_2) goto LAB_14aac7658;
      iVar16 = iVar16 + 1;
      uVar9 = (int)(uVar9 + 1) / 2;
      uVar10 = (int)(uVar10 + 1) / 2;
    } while (iVar16 < param_2 + 1);
  }
  uVar9 = 0;
  uVar10 = 0;
LAB_14aac7658:
  local_188 = (FImage *)&(this->CreateImage).field_0x10;
  EVar2 = (param_1->DataStorage).ImageFormat;
  uVar11 = (uint)(param_1->DataStorage).NumLODs;
  if (uVar11 == 0) {
    uVar11 = 1;
  }
  if (param_2 < (int)uVar11) {
    local_150[0] = 0;
    local_148[0] = 1;
    local_res20[0] = EVar2;
    local_140[0] = uVar10;
    local_138[0] = uVar9;
    Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
    pcVar5 = *(code **)&this->CreateImage;
    pFVar18 = local_188;
    if (*(FImage **)&local_188->ReferenceID != (FImage *)0x0) {
      pFVar18 = *(FImage **)&local_188->ReferenceID;
    }
    uVar12 = (**(code **)(pFVar18->_padding_ + 8))();
    (*pcVar5)(&local_1a8,uVar12,local_138,local_140,local_148,local_res20,local_150);
    uVar7 = param_1->Flags;
    if ((local_1a8 == (FImage *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar13;
    }
    local_1a8->Flags = uVar7;
    if ((local_1a8 == (FImage *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar13;
    }
    pFVar18 = local_1a8;
    FVar19 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
              )&local_1a8->DataStorage;
    if ((((local_1a8->DataStorage).Buffers.ArrayNum == 0) &&
        ((local_1a8->DataStorage).CompactedTailOffsets.Elements[0] == 0xffff)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsVoid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                           ,0x253,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar13;
    }
    FVar14 = (pFVar18->DataStorage).Buffers.AllocatorInstance.SecondaryData;
    piVar1 = &(pFVar18->DataStorage).Buffers.ArrayNum;
    iVar16 = *piVar1;
    if (FVar14 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                   )0x0) {
      FVar19 = FVar14;
    }
    FVar14 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
              )((longlong)FVar19 + (longlong)iVar16 * 0x18);
    local_b0 = FVar14;
    while( true ) {
      if (*piVar1 != iVar16) {
        local_1b8[0] = 0;
        `TCheckedPointerIterator<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_1b8);
        FVar14 = local_b0;
      }
      if (FVar19 == FVar14) break;
      if (*(int *)((longlong)FVar19 + 0x10) != 0) goto LAB_14aac784e;
      FVar19 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )((longlong)FVar19 + 0x18);
    }
    if ((local_1a8 == (FImage *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar13;
    }
    pFVar18 = local_1a8;
    pTVar15 = FImageDataStorage::GetLOD(&param_1->DataStorage,&local_68,param_2);
    FImageDataStorage::ResizeLOD(&pFVar18->DataStorage,0,pTVar15->ArrayNum,Default);
LAB_14aac784e:
    FImageDataStorage::GetLOD(&param_1->DataStorage,&local_98,param_2);
    if ((local_1a8 == (FImage *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar13;
    }
    FImageDataStorage::GetLOD(&local_1a8->DataStorage,&local_a8,0);
    if ((local_a8.ArrayNum < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar13;
    }
    if ((local_98.ArrayNum != local_a8.ArrayNum) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SrcView.Num() == DstView.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
                           ,0x7c,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar13;
    }
    memcpy(local_a8.DataPtr,local_98.DataPtr,(longlong)local_a8.ArrayNum);
    __return_storage_ptr__->Object = local_1a8;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_1a0;
    local_1a0 = (TReferenceControllerBase<1> *)0x0;
    local_1a8 = (FImage *)0x0;
    goto LAB_14aac7c78;
  }
  local_130[0] = 0;
  local_128[0] = 1;
  local_1b0[0] = EVar2;
  local_120[0] = uVar10;
  local_118[0] = uVar9;
  Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
  pcVar5 = *(code **)&this->CreateImage;
  pFVar18 = *(FImage **)&local_188->ReferenceID;
  if (*(FImage **)&local_188->ReferenceID == (FImage *)0x0) {
    pFVar18 = local_188;
  }
  uVar12 = (**(code **)(pFVar18->_padding_ + 8))();
  (*pcVar5)(&local_198,uVar12,local_118,local_120,local_128,local_1b0,local_130);
  EVar2 = (param_1->DataStorage).ImageFormat;
  local_168._padding_ = 0;
  local_168._padding_ = CONCAT26(local_168._padding_._6_2_,0x20100000000);
  local_168.RawData = (uchar *)0x0;
  local_180._padding_ = 0;
  local_180._padding_._0_4_ = 0;
  local_180._padding_._4_4_ = CONCAT22(local_180._padding_._6_2_,0x201);
  local_180.RawData = (uchar *)0x0;
  if (EVar2 == RGBA_UByte) {
LAB_14aac7ae8:
    local_e0 = (uint)(param_1->DataStorage).ImageSize.field0_0x0._s_0.X;
    uStack_dc = (uint)(param_1->DataStorage).ImageSize.field0_0x0._s_0.Y;
    uStack_d8 = 1;
    uStack_d4 = 1;
    pTVar15 = FImageDataStorage::GetLOD(&param_1->DataStorage,&local_48,0);
    local_168._padding_ = CONCAT44(uStack_dc,local_e0);
    local_168._padding_ = CONCAT26(uStack_d2,CONCAT24(uStack_d4,uStack_d8));
    local_168.RawData = pTVar15->DataPtr;
    local_d0 = local_168.RawData;
    if ((local_198 == (FImage *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar13;
    }
    uVar3 = (local_198->DataStorage).ImageSize.field0_0x0._s_0.Y;
    uVar4 = (local_198->DataStorage).ImageSize.field0_0x0._s_0.X;
    FImageDataStorage::GetLOD(&local_198->DataStorage,&local_78,0);
    if ((local_78.ArrayNum < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar13;
    }
    uVar9 = (uint)uVar4;
    uVar10 = (uint)uVar3;
    uStack_c0 = 1;
    iStack_bc = CONCAT22(iStack_bc._2_2_,1);
    local_b8 = local_78.DataPtr;
    local_180._padding_._4_4_ = iStack_bc;
    local_c8 = uVar9;
    uStack_c4 = uVar10;
LAB_14aac7bd7:
    local_180._padding_ = CONCAT44(uVar10,uVar9);
    local_180._padding_._0_4_ = 1;
    local_180.RawData = local_78.DataPtr;
  }
  else {
    if (EVar2 == L_UByte) {
      local_110 = (uint)(param_1->DataStorage).ImageSize.field0_0x0._s_0.X;
      uStack_10c = (uint)(param_1->DataStorage).ImageSize.field0_0x0._s_0.Y;
      uStack_108 = 1;
      uStack_104 = 0;
      pTVar15 = FImageDataStorage::GetLOD(&param_1->DataStorage,&local_58,0);
      local_168._padding_ = CONCAT44(uStack_10c,local_110);
      local_168._padding_ = CONCAT26(uStack_102,CONCAT24(uStack_104,uStack_108));
      local_168.RawData = pTVar15->DataPtr;
      local_100 = local_168.RawData;
      if ((local_198 == (FImage *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
        return pTVar13;
      }
      uVar3 = (local_198->DataStorage).ImageSize.field0_0x0._s_0.Y;
      uVar4 = (local_198->DataStorage).ImageSize.field0_0x0._s_0.X;
      FImageDataStorage::GetLOD(&local_198->DataStorage,&local_88,0);
      if ((local_88.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
        return pTVar13;
      }
      uVar9 = (uint)uVar4;
      uVar10 = (uint)uVar3;
      uStack_f0 = 1;
      uStack_ec = (uint)uStack_ec._2_2_ << 0x10;
      local_e8 = local_88.DataPtr;
      local_180._padding_._4_4_ = uStack_ec;
      local_78.DataPtr = local_88.DataPtr;
      local_f8 = uVar9;
      uStack_f4 = uVar10;
      goto LAB_14aac7bd7;
    }
    if (EVar2 == BGRA_UByte) goto LAB_14aac7ae8;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
                       ,0xa2,L"Image format not supported.");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  if ((local_168.RawData != (uchar *)0x0) && (local_180.RawData != (uchar *)0x0)) {
    if (CpuChannel->Enabled < 0) {
      FImageCore::ResizeImage(&local_168,&local_180,Bilinear);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId168,"Mutable_ImageResize",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
                 ,0xa8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId168);
      FImageCore::ResizeImage(&local_168,&local_180,Bilinear);
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  __return_storage_ptr__->Object = local_198;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_190;
  local_190 = (TReferenceControllerBase<1> *)0x0;
  local_198 = (FImage *)0x0;
LAB_14aac7c78:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// FillColor @ 14aac7cc0

void __thiscall
UE::Mutable::Private::FImageOperator::FillColor
          (FImageOperator *this,FImage *param_1,TVector4<float> *param_2)

{
  EImageFormat EVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FImageFormatData *pFVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uchar *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  uchar *puVar17;
  longlong *plVar18;
  FImageDataStorage *pFVar19;
  ulonglong uVar20;
  size_t sVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 local_res10 [8];
  TVector4<float> *local_res18;
  undefined4 local_res20 [2];
  undefined4 local_130 [2];
  uint local_128 [2];
  uint local_120 [2];
  undefined4 local_118;
  FImageDataStorage *local_110;
  longlong *local_108;
  FImage *local_100;
  TReferenceControllerBase<1> *local_f8;
  TArrayView<unsigned_char_const_,int> local_f0;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_e0;
  longlong local_d0;
  undefined8 local_c8;
  TArrayView<unsigned_char_const_,int> local_c0;
  TArrayView<unsigned_char_const_,int> local_b0;
  TArrayView<unsigned_char_const_,int> local_a0;
  TArrayView<unsigned_char_const_,int> local_90;
  TArrayView<unsigned_char_const_,int> local_80 [4];
  
  EVar1 = (param_1->DataStorage).ImageFormat;
  local_res18 = param_2;
  if (EVar1 == RGB_UByte) {
    iVar5 = FImageDataStorage::GetNumBatchesLODRange
                      (&param_1->DataStorage,0x4000,3,0,(uint)(param_1->DataStorage).NumLODs);
    fVar24 = __real_437f0000;
    iVar23 = 0;
    if (iVar5 < 1) {
      return;
    }
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,local_80,iVar23,0x4000,3,0,
                 (uint)(param_1->DataStorage).NumLODs);
      iVar6 = local_80[0].ArrayNum;
      puVar17 = local_80[0].DataPtr;
      if ((local_80[0].ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar25 = (param_2->field0_0x0)._s_0.X * fVar24;
      fVar26 = (param_2->field0_0x0)._s_0.Y * fVar24;
      if (fVar24 <= fVar25) {
        fVar25 = fVar24;
      }
      if (fVar24 <= fVar26) {
        fVar26 = fVar24;
      }
      uVar22 = iVar6 / 3;
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      fVar27 = (param_2->field0_0x0)._s_0.Z * fVar24;
      if (fVar24 <= fVar27) {
        fVar27 = fVar24;
      }
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      uVar15 = (uint)(longlong)fVar25;
      uVar7 = ((uint)(longlong)fVar27 << 8 | (uint)(longlong)fVar26) << 8 | uVar15;
      local_118 = uVar7;
      if (uVar7 == 0) {
        memset(puVar17,0,(longlong)(int)(uVar22 * 3));
      }
      else if (uVar15 == (uint)(longlong)fVar26 && uVar15 == (uint)(longlong)fVar27) {
        memset(puVar17,uVar15 & 0xff,(longlong)(int)(uVar22 * 3));
      }
      else {
        iVar6 = (int)uVar22 >> 1;
        uVar16 = (ulonglong)uVar7 << 0x18 | (ulonglong)uVar7;
        lVar13 = (longlong)iVar6;
        if (0 < iVar6) {
          local_c8._4_2_ = (undefined2)(uVar7 >> 8);
          puVar11 = puVar17;
          do {
            *(int *)puVar11 = (int)uVar16;
            *(undefined2 *)(puVar11 + 4) = local_c8._4_2_;
            puVar11 = puVar11 + 6;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        local_c8 = uVar16;
        if ((uVar22 & 1) != 0) {
          local_118._2_1_ = (uchar)(uVar7 >> 0x10);
          *(short *)(puVar17 + iVar6 * 6) = (short)uVar7;
          puVar17[(longlong)(iVar6 * 6) + 2] = local_118._2_1_;
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < iVar5);
    return;
  }
  if (EVar1 != RGBA_UByte) {
    if (EVar1 == L_UByte) {
      pFVar19 = &param_1->DataStorage;
      iVar5 = FImageDataStorage::GetNumBatchesLODRange
                        (pFVar19,0x4000,1,0,(uint)(param_1->DataStorage).NumLODs);
      fVar24 = (param_2->field0_0x0)._s_0.X * __real_437f0000;
      iVar23 = 0;
      if (__real_437f0000 <= fVar24) {
        fVar24 = __real_437f0000;
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      if (iVar5 < 1) {
        return;
      }
      if ((uint)(longlong)fVar24 != 0) {
        while( true ) {
          FImageDataStorage::GetBatchLODRange
                    (pFVar19,&local_f0,iVar23,0x4000,1,0,(uint)(param_1->DataStorage).NumLODs);
          puVar17 = local_f0.DataPtr;
          sVar21 = (size_t)local_f0.ArrayNum;
          if ((local_f0.ArrayNum < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar4)) break;
          memset(puVar17,(uint)(longlong)fVar24 & 0xff,sVar21);
          iVar23 = iVar23 + 1;
          if (iVar5 <= iVar23) {
            return;
          }
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      while( true ) {
        FImageDataStorage::GetBatchLODRange
                  (pFVar19,&local_f0,iVar23,0x4000,1,0,(uint)(param_1->DataStorage).NumLODs);
        puVar17 = local_f0.DataPtr;
        sVar21 = (size_t)local_f0.ArrayNum;
        if ((local_f0.ArrayNum < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) break;
        memset(puVar17,0,sVar21);
        iVar23 = iVar23 + 1;
        if (iVar5 <= iVar23) {
          return;
        }
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (EVar1 != BGRA_UByte) {
      pFVar8 = GetImageFormatData(EVar1);
      uVar16 = 0;
      local_res10[0] = 2;
      local_res20[0] = 0;
      local_130[0] = 1;
      local_128[0] = (uint)pFVar8->PixelsPerBlockY;
      local_120[0] = (uint)pFVar8->PixelsPerBlockX;
      Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
      plVar18 = *(longlong **)&(this->CreateImage).field_0x28;
      pcVar3 = *(code **)&this->CreateImage;
      plVar12 = (longlong *)&(this->CreateImage).field_0x10;
      if (plVar18 != (longlong *)0x0) {
        plVar12 = plVar18;
      }
      uVar9 = (**(code **)(*plVar12 + 8))();
      (*pcVar3)(&local_100,uVar9,local_120,local_128,local_130,local_res10,local_res20);
      fVar24 = (param_2->field0_0x0)._s_0.W * __real_437f0000;
      if (__real_437f0000 <= fVar24) {
        fVar24 = __real_437f0000;
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      fVar25 = (param_2->field0_0x0)._s_0.Z * __real_437f0000;
      if (__real_437f0000 <= fVar25) {
        fVar25 = __real_437f0000;
      }
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      fVar26 = (param_2->field0_0x0)._s_0.Y * __real_437f0000;
      if (__real_437f0000 <= fVar26) {
        fVar26 = __real_437f0000;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      fVar27 = (param_2->field0_0x0)._s_0.X * __real_437f0000;
      if (__real_437f0000 <= fVar27) {
        fVar27 = __real_437f0000;
      }
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      if ((local_100 == (FImage *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FImageDataStorage::GetLOD(&local_100->DataStorage,&local_c0,0);
      if ((local_c0.ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar13 = (ulonglong)pFVar8->PixelsPerBlockX * (ulonglong)pFVar8->PixelsPerBlockY;
      uVar10 = uVar16;
      if (lVar13 != 0) {
        do {
          *(uint *)(local_c0.DataPtr + uVar10 * 4) =
               (((int)(longlong)fVar24 << 8 | (uint)(longlong)fVar25) << 8 | (uint)(longlong)fVar26)
               << 8 | (uint)(longlong)fVar27;
          uVar10 = uVar10 + 1;
        } while ((longlong)uVar10 < lVar13);
      }
      ImagePixelFormat(this,&local_e0,0,local_100,EVar1,-1);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar12 = *(longlong **)&(this->ReleaseImage).field_0x28;
      plVar18 = (longlong *)&(this->ReleaseImage).field_0x10;
      pcVar3 = *(code **)&this->ReleaseImage;
      plVar14 = plVar18;
      if (plVar12 != (longlong *)0x0) {
        plVar14 = plVar12;
      }
      local_108 = plVar18;
      uVar9 = (**(code **)(*plVar14 + 8))();
      (*pcVar3)(uVar9,&local_100);
      if ((local_e0.Object == (FImage *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FImageDataStorage::GetLOD(&(local_e0.Object)->DataStorage,&local_b0,0);
      if ((local_b0.ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = pFVar8->BytesPerBlock;
      if ((local_b0.ArrayNum != (uint)uVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlockView.Num() == ElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
                             ,0x3b2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar19 = &param_1->DataStorage;
      local_110 = pFVar19;
      iVar5 = FImageDataStorage::GetNumBatchesLODRange
                        (pFVar19,0x4000,(uint)uVar2,0,(uint)(param_1->DataStorage).NumLODs);
      if (0 < iVar5) {
        do {
          uVar22 = (uint)uVar2;
          FImageDataStorage::GetBatchLODRange
                    (pFVar19,&local_a0,(int)uVar16,0x4000,uVar22,0,(uint)pFVar19->NumLODs);
          iVar23 = local_a0.ArrayNum;
          puVar17 = local_a0.DataPtr;
          if ((local_a0.ArrayNum < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar10 = (longlong)iVar23 / (longlong)(int)uVar22;
          uVar20 = uVar10 & 0xffffffff;
          if ((iVar23 % (int)uVar22 != 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("DataView.Num() % ElemSizeInBytes == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Image.cpp"
                                 ,0x3ba,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < (int)uVar10) {
            do {
              memcpy(puVar17,local_b0.DataPtr,(ulonglong)uVar2);
              puVar17 = puVar17 + uVar2;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          uVar22 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar22;
          plVar18 = local_108;
          pFVar19 = local_110;
        } while ((int)uVar22 < iVar5);
      }
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      pcVar3 = *(code **)&this->ReleaseImage;
      if ((longlong *)plVar18[3] != (longlong *)0x0) {
        plVar18 = (longlong *)plVar18[3];
      }
      uVar9 = (**(code **)(*plVar18 + 8))(plVar18);
      (*pcVar3)(uVar9,&local_e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f8);
      return;
    }
  }
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x4000,4,0,(uint)(param_1->DataStorage).NumLODs);
  fVar24 = (param_2->field0_0x0)._s_0.X * __real_437f0000;
  fVar25 = (local_res18->field0_0x0)._s_0.Z * __real_437f0000;
  if (__real_437f0000 <= fVar24) {
    fVar24 = __real_437f0000;
  }
  if (__real_437f0000 <= fVar25) {
    fVar25 = __real_437f0000;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  fVar26 = (local_res18->field0_0x0)._s_0.Y * __real_437f0000;
  local_110 = (FImageDataStorage *)(longlong)fVar25;
  if (__real_437f0000 <= fVar26) {
    fVar26 = __real_437f0000;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  local_d0 = (longlong)fVar26;
  fVar25 = (local_res18->field0_0x0)._s_0.W * __real_437f0000;
  if (__real_437f0000 <= fVar25) {
    fVar25 = __real_437f0000;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  local_108 = (longlong *)(longlong)fVar25;
  uVar22 = (int)local_108 << 8;
  uVar15 = (uint)(longlong)fVar24;
  if (EVar1 == RGBA_UByte) {
    uVar22 = ((uVar22 | (uint)local_110) << 8 | (uint)local_d0) << 8 | uVar15;
  }
  else {
    uVar22 = ((uVar22 | uVar15) << 8 | (uint)local_d0) << 8 | (uint)local_110;
  }
  iVar23 = 0;
  if (0 < iVar5) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_90,iVar23,0x4000,4,0,
                 (uint)(param_1->DataStorage).NumLODs);
      iVar6 = local_90.ArrayNum;
      puVar17 = local_90.DataPtr;
      if ((local_90.ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = iVar6 + (iVar6 >> 0x1f & 3U);
      uVar7 = iVar6 >> 2;
      if (uVar22 == 0) {
        memset(puVar17,0,(longlong)(int)(uVar7 * 4));
      }
      else if (uVar15 == (uint)local_d0 && (uVar15 == (uint)local_108 && uVar15 == (uint)local_110))
      {
        memset(puVar17,uVar15 & 0xff,(longlong)(int)(uVar7 * 4));
      }
      else {
        iVar6 = iVar6 >> 3;
        lVar13 = (longlong)iVar6;
        puVar11 = puVar17;
        if (0 < iVar6) {
          for (; lVar13 != 0; lVar13 = lVar13 + -1) {
            *(ulonglong *)puVar11 = CONCAT44(uVar22,uVar22);
            puVar11 = puVar11 + 8;
          }
        }
        if ((uVar7 & 1) != 0) {
          *(uint *)(puVar17 + iVar6 * 8) = uVar22;
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < iVar5);
  }
  return;
}

// GetDefault @ 14aacd0b0

FImageOperator * __cdecl
UE::Mutable::Private::FImageOperator::GetDefault
          (FImageOperator *__return_storage_ptr__,
          TFunction<void___cdecl(bool_&,int,UE::Mutable::Private::FImage_*,UE::Mutable::Private::FImage_const_*,int)>
          *param_1)

{
  undefined8 *puVar1;
  code *local_c8 [2];
  undefined **local_b8;
  code *local_b0;
  undefined8 local_a0;
  code *local_98 [2];
  undefined **local_88;
  code *local_80;
  undefined8 local_70;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  TFunction<void___cdecl(bool_&,int,UE::Mutable::Private::FImage_*,UE::Mutable::Private::FImage_const_*,int)>
  local_38;
  
  local_38._0_8_ = *(undefined8 *)param_1;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,&local_38.field_0x10);
  }
  local_a0 = 0;
  local_b8 = &
             ___7__TFunction_OwnedObject_P6A_AV__TSharedPtr_VFImage_Private_Mutable_UE___00__PEBVFImage_Private_Mutable_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_70 = 0;
  local_b0 = `UE::Mutable::Private::FImageOperator::GetDefault'::__l2::<lambda_3>::
             <lambda_invoker_cdecl>;
  local_40 = 0;
  local_c8[0] = Core::Private::Function::
                TFunctionRefCaller<TSharedPtr<UE::Mutable::Private::FImage,1>_(__cdecl*)(UE::Mutable::Private::FImage_const_*),TSharedPtr<UE::Mutable::Private::FImage,1>,UE::Mutable::Private::FImage_const_*>
                ::Call;
  local_88 = &
             ___7__TFunction_OwnedObject_P6AXAEAV__TSharedPtr_VFImage_Private_Mutable_UE___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_80 = `UE::Mutable::Private::FImageOperator::GetDefault'::__l2::<lambda_2>::
             <lambda_invoker_cdecl>;
  local_98[0] = Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(TSharedPtr<UE::Mutable::Private::FImage,1>_&),void,TSharedPtr<UE::Mutable::Private::FImage,1>_&>
                ::Call;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AV__TSharedRef_VFImage_Private_Mutable_UE___00__HHHW4EImageFormat_Private_Mutable_UE__W4EInitializationType_345__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `UE::Mutable::Private::FImageOperator::GetDefault'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_68[0] = Core::Private::Function::
                TFunctionRefCaller<TSharedRef<UE::Mutable::Private::FImage,1>_(__cdecl*)(int,int,int,enum_UE::Mutable::Private::EImageFormat,enum_UE::Mutable::Private::EInitializationType),TSharedPtr<UE::Mutable::Private::FImage,1>,int,int,int,enum_UE::Mutable::Private::EImageFormat,enum_UE::Mutable::Private::EInitializationType>
                ::Call;
  FImageOperator(__return_storage_ptr__,
                 (TFunction<TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl(int,int,int,UE::Mutable::Private::EImageFormat,UE::Mutable::Private::EInitializationType)>
                  *)local_68,
                 (TFunction<void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>_&)> *)local_98,
                 (TFunction<TSharedPtr<UE::Mutable::Private::FImage,1>___cdecl(UE::Mutable::Private::FImage_const_*)>
                  *)local_c8,&local_38);
  return __return_storage_ptr__;
}

// ImageCompose @ 14aad7080

void __thiscall
UE::Mutable::Private::FImageOperator::ImageCompose
          (FImageOperator *this,FImage *param_1,FImage *param_2,
          box<UE::Math::TIntVector2<int>_> *param_3)

{
  EImageFormat EVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  code *pcVar8;
  uchar *puVar9;
  bool bVar10;
  EImageFormat EVar11;
  uint uVar12;
  undefined8 uVar13;
  uchar uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uchar *_Dst;
  uchar *_Src;
  int iVar17;
  longlong *plVar18;
  size_t _Size;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  uint local_res20;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_a0;
  FImageDataStorage *local_90;
  FImageDataStorage *local_88;
  TArrayView<unsigned_char_const_,int> local_80;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_70;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_60;
  TArrayView<unsigned_char_const_,int> local_50;
  
  if (((param_1 == (FImage *)0x0) || (param_2 == (FImage *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Base && Block",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
                          ,0xc,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_1 == param_2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Base != Block",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
                          ,0xd,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((((param_3->min).field0_0x0._s_0.X < 0) || ((param_3->min).field0_0x0._s_0.Y < 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Rect.min[0] >= 0 && Rect.min[1] >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
                          ,0xe,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((((param_3->size).field0_0x0._s_0.X < 0) || ((param_3->size).field0_0x0._s_0.Y < 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Rect.size[0] >= 0 && Rect.size[1] >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
                          ,0xf,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((int)(uint)(param_1->DataStorage).ImageSize.field0_0x0._s_0.X <
       (param_3->size).field0_0x0._s_0.X + (param_3->min).field0_0x0._s_0.X) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Rect.min[0] + Rect.size[0] <= Base->GetSizeX()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
                          ,0x10,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((int)(uint)(param_1->DataStorage).ImageSize.field0_0x0._s_0.Y <
       (param_3->min).field0_0x0._s_0.Y + (param_3->size).field0_0x0._s_0.Y) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Rect.min[1] + Rect.size[1] <= Base->GetSizeY()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
                          ,0x11,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((param_3->size).field0_0x0._s_0.X != (uint)(param_2->DataStorage).ImageSize.field0_0x0._s_0.X
      ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Rect.size[0] == Block->GetSizeX()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
                                ,0x12,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((param_3->size).field0_0x0._s_0.Y != (uint)(param_2->DataStorage).ImageSize.field0_0x0._s_0.Y
      ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Rect.size[1] == Block->GetSizeY()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
                                ,0x13,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_88 = &param_1->DataStorage;
  if (((param_1->DataStorage).ImageFormat != (param_2->DataStorage).ImageFormat) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Base->GetFormat() == Block->GetFormat()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
                          ,0x14,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  EVar1 = (param_1->DataStorage).ImageFormat;
  if ((ASTC_10x10_RG_LDR < EVar1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("format < EImageFormat::Count",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageTypes.cpp"
                          ,0x3f,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar24 = (param_3->min).field0_0x0._s_0.X;
  bVar2 = s_imageFormatData[EVar1].PixelsPerBlockX;
  if (iVar24 % (int)(uint)bVar2 == 0) {
    iVar17 = (param_3->min).field0_0x0._s_0.Y;
    bVar3 = s_imageFormatData[EVar1].PixelsPerBlockY;
    if (((iVar17 % (int)(uint)bVar3 == 0) &&
        (iVar5 = (param_3->size).field0_0x0._s_0.X, iVar5 % (int)(uint)bVar2 == 0)) &&
       (iVar6 = (param_3->size).field0_0x0._s_0.Y, iVar6 % (int)(uint)bVar3 == 0)) {
      uVar12 = (uint)bVar2;
      uVar23 = (longlong)(int)(((param_1->DataStorage).ImageSize.field0_0x0._s_0.X - 1) + uVar12) /
               (longlong)(int)uVar12;
      local_b4 = (uint)uVar23;
      uVar23 = uVar23 & 0xffffffff;
      local_res20 = iVar24 / (int)uVar12;
      uVar20 = (uint)bVar3;
      uVar16 = (longlong)iVar17 / (longlong)(int)uVar20;
      local_b0 = (uint)uVar16;
      uVar16 = uVar16 & 0xffffffff;
      uVar19 = (longlong)(int)(iVar5 + -1 + uVar12) / (longlong)(int)(uint)bVar2;
      local_ac = (uint)uVar19;
      uVar19 = uVar19 & 0xffffffff;
      uVar22 = (longlong)(int)(iVar6 + -1 + uVar20) / (longlong)(int)uVar20;
      local_b8 = (uint)uVar22;
      uVar22 = uVar22 & 0xffffffff;
      iVar24 = 0;
      uVar14 = (param_1->DataStorage).NumLODs;
      if (uVar14 == '\0') {
        uVar14 = '\x01';
      }
      if (uVar14 != '\0') {
        local_90 = &param_1->DataStorage;
        do {
          uVar12 = (uint)(param_2->DataStorage).NumLODs;
          if (uVar12 == 0) {
            uVar12 = 1;
          }
          if ((int)uVar12 <= iVar24) break;
          uVar4 = s_imageFormatData[EVar1].BytesPerBlock;
          iVar17 = ((uint)uVar23 & 0xffff) * (uint)uVar4;
          FImageDataStorage::GetLOD(local_90,&local_50,iVar24);
          puVar9 = local_50.DataPtr;
          lVar21 = (longlong)local_50.ArrayNum;
          if ((local_50.ArrayNum < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FImageDataStorage::GetLOD(&param_2->DataStorage,&local_80,iVar24);
          _Dst = puVar9 + (int)((local_res20 & 0xffff) *
                                (uint)s_imageFormatData[EVar1].BytesPerBlock +
                               ((uint)uVar16 & 0xffff) * iVar17);
          if ((short)uVar22 != 0) {
            _Size = (size_t)(int)(((uint)uVar19 & 0xffff) * (uint)uVar4);
            uVar23 = (ulonglong)(ushort)local_b8;
            _Src = local_80.DataPtr;
            do {
              if ((puVar9 + lVar21 < _Dst + _Size) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("BaseBuf + BlockRowSize <= BaseLODView.GetData() + BaseLODView.Num()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
                                      ,0x59,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((local_80.DataPtr + local_80.ArrayNum < _Src + _Size) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("BlockBuf + BlockRowSize <= BlockLODView.GetData() + BlockLODView.Num()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
                                      ,0x5a,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              memcpy(_Dst,_Src,_Size);
              _Dst = _Dst + iVar17;
              uVar23 = uVar23 - 1;
              _Src = _Src + _Size;
            } while (uVar23 != 0);
            uVar22 = (ulonglong)local_b8;
          }
          if (((((local_res20 & 1) != 0) || ((local_b0 & 1) != 0)) || ((local_ac & 1) != 0)) ||
             ((uVar22 & 1) != 0)) {
            iVar24 = iVar24 + 1;
            break;
          }
          local_res20 = (local_res20 & 0xffff) + 1 >> 1;
          iVar24 = iVar24 + 1;
          local_b4 = (local_b4 & 0xffff) + 1 >> 1;
          uVar23 = (ulonglong)local_b4;
          local_b0 = (local_b0 & 0xffff) + 1 >> 1;
          uVar16 = (ulonglong)local_b0;
          local_ac = (local_ac & 0xffff) + 1 >> 1;
          uVar19 = (ulonglong)local_ac;
          local_b8 = ((uint)uVar22 & 0xffff) + 1 >> 1;
          uVar22 = (ulonglong)local_b8;
          uVar12 = (uint)(param_1->DataStorage).NumLODs;
          if (uVar12 == 0) {
            uVar12 = 1;
          }
        } while (iVar24 < (int)uVar12);
      }
      FImageDataStorage::SetNumLODs(local_88,iVar24,NotInitialized);
      return;
    }
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId40,"Mutable_ImageCompose_SubBlock_Fix",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCompose.cpp"
               ,0x28);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId40);
  }
  EVar11 = GetUncompressedFormat(EVar1);
  ImagePixelFormat(this,&local_a0,0,param_1,EVar11,-1);
  ImagePixelFormat(this,&local_60,0,param_2,EVar11,-1);
  ImageCompose(this,local_a0.Object,local_60.Object,param_3);
  Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
  plVar7 = *(longlong **)&(this->ReleaseImage).field_0x28;
  plVar18 = (longlong *)&(this->ReleaseImage).field_0x10;
  pcVar8 = *(code **)&this->ReleaseImage;
  plVar15 = plVar18;
  if (plVar7 != (longlong *)0x0) {
    plVar15 = plVar7;
  }
  uVar13 = (**(code **)(*plVar15 + 8))();
  (*pcVar8)(uVar13,&local_60);
  ImagePixelFormat(this,&local_70,0,local_a0.Object,EVar1,-1);
  Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
  plVar7 = *(longlong **)&(this->ReleaseImage).field_0x28;
  pcVar8 = *(code **)&this->ReleaseImage;
  plVar15 = plVar18;
  if (plVar7 != (longlong *)0x0) {
    plVar15 = plVar7;
  }
  uVar13 = (**(code **)(*plVar15 + 8))();
  (*pcVar8)(uVar13,&local_a0);
  FImage::CopyMove(param_1,local_70.Object);
  Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
  plVar7 = *(longlong **)&(this->ReleaseImage).field_0x28;
  pcVar8 = *(code **)&this->ReleaseImage;
  if (plVar7 != (longlong *)0x0) {
    plVar18 = plVar7;
  }
  uVar13 = (**(code **)(*plVar18 + 8))(plVar18);
  (*pcVar8)(uVar13,&local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.SharedReferenceCount.ReferenceController);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ImageCrop @ 14aad7770

bool __thiscall
UE::Mutable::Private::FImageOperator::ImageCrop
          (FImageOperator *this,TSharedPtr<UE::Mutable::Private::FImage,1> *param_1,int param_2,
          FImage *param_3,box<UE::Math::TIntVector2<int>_> *param_4)

{
  EImageFormat EVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  FImage *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  EImageFormat EVar14;
  uint uVar15;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar16;
  undefined8 uVar17;
  TArrayView<unsigned_char_const_,int> *pTVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  uint uVar22;
  FImageFormatData *pFVar23;
  int iVar24;
  longlong *plVar25;
  uint uVar26;
  uint uVar27;
  bool local_res20 [8];
  EImageFormat local_f8 [8];
  EImageFormat local_f0;
  EImageFormat local_ef;
  FImage *local_e8;
  FSharedReferencer<1> local_e0;
  TIntVector2<unsigned_short>_u_0 local_d8;
  EImageFormat local_d4;
  uchar local_d3;
  undefined4 local_d0 [2];
  uint local_c8 [2];
  uint local_c0 [2];
  uint local_b8 [2];
  TSharedPtr<UE::Mutable::Private::FImage,1> local_b0;
  FImage *local_a0;
  FSharedReferencer<1> local_98;
  uchar *local_90;
  uchar *local_88;
  TArrayView<unsigned_char_const_,int> local_80;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_70;
  TArrayView<unsigned_char_const_,int> local_60 [2];
  
  if ((param_3 == (FImage *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBase",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCrop.cpp"
                          ,0xd,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  local_e8 = param_1->Object;
  local_e0.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_b0.Object = (FImage *)0x0;
  local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar1 = (param_3->DataStorage).ImageFormat;
  local_f0 = EVar1;
  EVar14 = GetUncompressedFormat(EVar1);
  iVar24 = 0;
  local_ef = EVar14;
  if (EVar1 != EVar14) {
    pTVar16 = ImagePixelFormat(this,&local_70,param_2,param_3,EVar14,-1);
    if (&local_b0 != pTVar16) {
      local_b0.Object = pTVar16->Object;
      pTVar16->Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_b0.SharedReferenceCount,&pTVar16->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    param_3 = local_b0.Object;
    if ((param_1->Object == (FImage *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    uVar22 = (uint)(param_1->Object->DataStorage).NumLODs;
    if (uVar22 == 0) {
      uVar22 = 1;
    }
    if ((param_1->Object == (FImage *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    uVar2 = (param_1->Object->DataStorage).ImageSize.field0_0x0._s_0.Y;
    if ((param_1->Object == (FImage *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    local_d0[0] = 0;
    local_b8[0] = (uint)(param_1->Object->DataStorage).ImageSize.field0_0x0._s_0.X;
    local_c0[0] = (uint)uVar2;
    local_f8[0] = EVar14;
    local_c8[0] = uVar22;
    Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
    plVar25 = *(longlong **)&(this->CreateImage).field_0x28;
    pcVar10 = *(code **)&this->CreateImage;
    plVar19 = (longlong *)&(this->CreateImage).field_0x10;
    if (plVar25 != (longlong *)0x0) {
      plVar19 = plVar25;
    }
    uVar17 = (**(code **)(*plVar19 + 8))();
    (*pcVar10)(&local_a0,uVar17,local_b8,local_c0,local_c8,local_f8,local_d0);
    local_e8 = local_a0;
    local_a0 = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e0,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.ReferenceController);
  }
  if (((int)(uint)(param_3->DataStorage).ImageSize.field0_0x0._s_0.X <
       (param_4->size).field0_0x0._s_0.X + (param_4->min).field0_0x0._s_0.X) ||
     ((int)(uint)(param_3->DataStorage).ImageSize.field0_0x0._s_0.Y <
      (param_4->size).field0_0x0._s_0.Y + (param_4->min).field0_0x0._s_0.Y)) {
    if ((local_e8 == (FImage *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    pFVar11 = local_e8;
    local_d8 = (local_e8->DataStorage).ImageSize.field0_0x0;
    local_d4 = (local_e8->DataStorage).ImageFormat;
    local_d3 = (local_e8->DataStorage).NumLODs;
    FImageDataStorage::Init(&local_e8->DataStorage,(FImageDesc *)&local_d8._s_0,Black);
    pFVar11->Flags = '\0';
    pFVar11->RelevancyMinY = 0;
    pFVar11->RelevancyMaxY = 0;
  }
  if ((ASTC_10x10_RG_LDR < EVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("format < EImageFormat::Count",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageTypes.cpp"
                          ,0x3f,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  pFVar23 = s_imageFormatData + EVar14;
  if (local_e8 == (FImage *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Cropped",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCrop.cpp"
                        ,0x27,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    if ((local_e8 == (FImage *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
  }
  if (((uint)(local_e8->DataStorage).ImageSize.field0_0x0._s_0.X !=
       (param_4->size).field0_0x0._s_0.X) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cropped->GetSizeX() == Rect.size[0]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCrop.cpp"
                          ,0x28,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  if ((local_e8 == (FImage *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  if (((uint)(local_e8->DataStorage).ImageSize.field0_0x0._s_0.Y !=
       (param_4->size).field0_0x0._s_0.Y) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cropped->GetSizeY() == Rect.size[1]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCrop.cpp"
                          ,0x29,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  iVar4 = (param_4->min).field0_0x0._s_0.X;
  if (((((iVar4 < 0) || (iVar5 = (param_4->min).field0_0x0._s_0.Y, iVar5 < 0)) ||
       (iVar6 = (param_4->size).field0_0x0._s_0.X, iVar6 < 0)) ||
      ((iVar7 = (param_4->size).field0_0x0._s_0.Y, iVar7 < 0 ||
       ((int)(uint)(param_3->DataStorage).ImageSize.field0_0x0._s_0.X < iVar4 + iVar6)))) ||
     ((int)(uint)(param_3->DataStorage).ImageSize.field0_0x0._s_0.Y < iVar5 + iVar7)) {
    bVar12 = false;
  }
  else {
    if ((pFVar23->PixelsPerBlockX != '\x01') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("finfo.PixelsPerBlockX == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCrop.cpp"
                            ,0x38,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    if ((s_imageFormatData[EVar14].PixelsPerBlockY != '\x01') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("finfo.PixelsPerBlockY == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCrop.cpp"
                            ,0x39,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    if (((param_4->min).field0_0x0._s_0.X % (int)(uint)pFVar23->PixelsPerBlockX != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Rect.min[0] % finfo.PixelsPerBlockX == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCrop.cpp"
                            ,0x3b,L"Rect must snap to blocks."), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    if (((param_4->min).field0_0x0._s_0.Y % (int)(uint)s_imageFormatData[EVar14].PixelsPerBlockY !=
         0) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Rect.min[1] % finfo.PixelsPerBlockY == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCrop.cpp"
                                    ,0x3c,L"Rect must snap to blocks."), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    if (((param_4->size).field0_0x0._s_0.X % (int)(uint)pFVar23->PixelsPerBlockX != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Rect.size[0] % finfo.PixelsPerBlockX == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCrop.cpp"
                            ,0x3d,L"Rect must snap to blocks."), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    if (((param_4->size).field0_0x0._s_0.Y % (int)(uint)s_imageFormatData[EVar14].PixelsPerBlockY !=
         0) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Rect.size[1] % finfo.PixelsPerBlockY == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCrop.cpp"
                                    ,0x3e,L"Rect must snap to blocks."), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    uVar2 = s_imageFormatData[EVar14].BytesPerBlock;
    pTVar18 = FImageDataStorage::GetLOD(&param_3->DataStorage,local_60,0);
    local_90 = pTVar18->DataPtr;
    if ((local_e8 == (FImage *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    FImageDataStorage::GetLOD(&local_e8->DataStorage,&local_80,0);
    local_88 = local_80.DataPtr;
    if ((local_80.ArrayNum < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    uVar22 = *(uint *)(param_3->DataStorage).ImageSize.field0_0x0.XY;
    uVar21 = uVar22 >> 0x10;
    if ((local_e8 == (FImage *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    uVar8 = (param_4->min).field0_0x0._s_0.Y;
    uVar9 = (param_4->min).field0_0x0._s_0.X;
    uVar27 = (param_4->size).field0_0x0._s_0.Y + uVar8;
    uVar26 = (param_4->size).field0_0x0._s_0.X + uVar9;
    uVar3 = (local_e8->DataStorage).ImageSize.field0_0x0._s_0.X;
    uVar15 = uVar22 & 0xffff;
    if ((int)uVar15 < (int)uVar9) {
      uVar9 = uVar15;
    }
    if ((int)uVar21 < (int)uVar8) {
      uVar8 = uVar21;
    }
    if ((int)uVar15 < (int)uVar26) {
      uVar26 = uVar15;
    }
    if ((int)uVar21 < (int)uVar27) {
      uVar27 = uVar21;
    }
    if (0 < (int)(uVar27 - uVar8)) {
      do {
        memcpy(local_88 + (uint)uVar3 * iVar24 * (uint)uVar2,
               local_90 + ((uVar8 + iVar24) * (uVar22 & 0xffff) + uVar9) * (uint)uVar2,
               (ulonglong)((uVar26 - uVar9) * (uint)uVar2));
        iVar24 = iVar24 + 1;
      } while (iVar24 < (int)(uVar27 - uVar8));
    }
    if (local_f0 != local_ef) {
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar19 = *(longlong **)&(this->ReleaseImage).field_0x28;
      plVar25 = (longlong *)&(this->ReleaseImage).field_0x10;
      pcVar10 = *(code **)&this->ReleaseImage;
      plVar20 = plVar25;
      if (plVar19 != (longlong *)0x0) {
        plVar20 = plVar19;
      }
      uVar17 = (**(code **)(*plVar20 + 8))();
      (*pcVar10)(uVar17,&local_b0);
      local_res20[0] = false;
      ImagePixelFormat(this,local_res20,param_2,param_1->Object,local_e8,-1);
      if ((local_res20[0] == false) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("bSuccess",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageCrop.cpp"
                              ,0x5d,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar19 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar10 = *(code **)&this->ReleaseImage;
      if (plVar19 != (longlong *)0x0) {
        plVar25 = plVar19;
      }
      uVar17 = (**(code **)(*plVar25 + 8))(plVar25);
      (*pcVar10)(uVar17,&local_e8);
    }
    bVar12 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  return bVar12;
}

// ImageMipmap @ 14ab29960

void __thiscall
UE::Mutable::Private::FImageOperator::ImageMipmap
          (FImageOperator *this,FScratchImageMipmap *param_1,int param_2,FImage *param_3,
          FImage *param_4,int param_5,int param_6,FMipmapGenerationSettings *param_7,bool param_8)

{
  FImage *pFVar1;
  FImage *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  EImageFormat EVar6;
  EImageFormat EVar7;
  bool bVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  FImageFormatData *pFVar12;
  int iVar13;
  bool local_68 [8];
  uint local_60;
  uint local_5c;
  TArrayView<unsigned_char,int> local_58;
  TArrayView<unsigned_char_const_,int> local_48;
  
  pFVar2 = param_4;
  if (((param_4->Flags & 4) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(BaseImage->Flags & FImage::IF_CANNOT_BE_SCALED)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                         ,0x26e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar6 = FImage::GetFormat(param_3);
  EVar7 = FImage::GetFormat(pFVar2);
  if ((EVar6 != EVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestImage->GetFormat() == BaseImage->GetFormat()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                         ,0x26f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar5 = param_8;
  iVar4 = param_5;
  iVar13 = 0;
  iVar11 = FImage::GetLODCount(param_3);
  if (bVar5 == false) {
    if ((iVar11 != param_6) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DestImage->GetLODCount() == NumLODs",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                           ,0x273,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = FImage::GetSizeX(param_3);
    uVar10 = FImage::GetSizeX(pFVar2);
    if ((uVar9 != uVar10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DestImage->GetSizeX() == BaseImage->GetSizeX()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                           ,0x274,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = FImage::GetSizeY(param_3);
    uVar10 = FImage::GetSizeY(pFVar2);
    if ((uVar9 != uVar10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DestImage->GetSizeY() == BaseImage->GetSizeY()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                           ,0x275,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_3 != pFVar2) && (-1 < iVar4)) {
      do {
        FImageDataStorage::GetLOD(&param_3->DataStorage,&local_58,iVar13);
        FImageDataStorage::GetLOD(&pFVar2->DataStorage,&local_48,iVar13);
        if ((local_58.ArrayNum != local_48.ArrayNum) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DestView.Num() == SrcView.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                               ,0x289,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        memcpy(local_58.DataPtr,local_48.DataPtr,(longlong)local_58.ArrayNum);
        iVar13 = iVar13 + 1;
      } while (iVar13 <= iVar4);
    }
  }
  else {
    iVar13 = FImage::GetLODCount(pFVar2);
    if ((iVar11 + iVar13 != param_6) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DestImage->GetLODCount() + BaseImage->GetLODCount() == NumLODs",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                           ,0x279,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FImage::CalculateMipSize(pFVar2,(int)&local_60);
    uVar9 = FImage::GetSizeX(param_3);
    if (((local_60 != uVar9) || (uVar9 = FImage::GetSizeY(param_3), local_5c != uVar9)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("BaseNextMipSize.X == DestImage->GetSizeX() && BaseNextMipSize.Y == DestImage->GetSizeY()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                           ,0x27f,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar6 = FImage::GetFormat(pFVar2);
  pFVar12 = GetImageFormatData(EVar6);
  if ((pFVar12->PixelsPerBlockX < 2) || (EVar7 = GetUncompressedFormat(EVar6), EVar6 == EVar7)) {
    EVar7 = GetUncompressedFormat(EVar6);
  }
  else {
    EVar7 = GetUncompressedFormat(EVar6);
    if ((EVar6 == EVar7) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsBlockCompressedFormat || bIsCompressedFormat",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                           ,0x292,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (bEnableCompressedMipGenerationMemoryOptimizations != false) {
      if (((param_1->UncompressedMips).Object == (FImage *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar6 = FImage::GetFormat((param_1->UncompressedMips).Object);
      pFVar1 = (param_1->UncompressedMips).Object;
      iVar11 = FImage::GetLODCount(pFVar1);
      if (EVar6 == RGB_UByte) {
        GenerateMipmapsBlockCompressedLODRange<3>(iVar4,0,iVar11,pFVar2,pFVar1,param_7);
      }
      else if (EVar6 == RGBA_UByte) {
        GenerateMipmapsBlockCompressedLODRange<4>(iVar4,0,iVar11,pFVar2,pFVar1,param_7);
      }
      else if (EVar6 == L_UByte) {
        GenerateMipmapsBlockCompressedLODRange<1>(iVar4,0,iVar11,pFVar2,pFVar1,param_7);
      }
      else {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                           ,0x2b2,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_68[0] = false;
      iVar13 = 0;
      if (bVar5 == false) {
        iVar13 = iVar4 + 1;
      }
      ImagePixelFormat(this,local_68,param_2,param_3,pFVar1,iVar13,0,iVar11);
      if (local_68[0] != false) {
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bSuccess",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                         ,0x2ba,L"");
      if (!bVar5) {
        return;
      }
      goto code_r0x00014ab29f83;
    }
  }
  if (EVar6 == EVar7) {
    iVar11 = 0;
    if (bVar5 == false) {
      iVar11 = iVar4 + 1;
    }
    iVar13 = FImage::GetLODCount(param_3);
    EVar6 = FImage::GetFormat(pFVar2);
    if (EVar6 == RGB_UByte) {
      GenerateMipmapUint8LODRange<3>(iVar4,iVar11,iVar13,pFVar2,param_3,param_7);
    }
    else {
      if (EVar6 != RGBA_UByte) {
        if (EVar6 == L_UByte) {
          GenerateMipmapUint8LODRange<1>(iVar4,iVar11,iVar13,pFVar2,param_3,param_7);
          return;
        }
        if (EVar6 != BGRA_UByte) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                             ,0x2ed,L"Format not implemented in mipmap generation.");
          if (!bVar5) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      GenerateMipmapUint8LODRange<4>(iVar4,iVar11,iVar13,pFVar2,param_3,param_7);
    }
  }
  else {
    FImage::GetLODCount(param_3);
    param_4._0_1_ = '\0';
    ImagePixelFormat(this,(bool *)&param_4,param_2,(param_1->Uncompressed).Object,pFVar2,iVar4);
    if (((char)param_4 == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccess",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                           ,0x2c5,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((param_1->UncompressedMips).Object == (FImage *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (param_1->UncompressedMips).Object;
    if (((param_1->Uncompressed).Object == (FImage *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (param_1->Uncompressed).Object;
    iVar11 = FImage::GetLODCount(pFVar2);
    iVar13 = FImage::GetLODCount(pFVar1);
    ImageMipmap(this,param_1,param_2,(param_1->UncompressedMips).Object,
                (param_1->Uncompressed).Object,0,iVar11 + iVar13,param_7,true);
    param_4._0_1_ = '\0';
    if (((param_1->UncompressedMips).Object == (FImage *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar11 = FImage::GetLODCount((param_1->UncompressedMips).Object);
    ImagePixelFormat(this,(bool *)&param_4,param_2,param_3,(param_1->UncompressedMips).Object,
                     iVar4 + 1,0,iVar11);
    if (((char)param_4 == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccess",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                           ,0x2d3,L""), bVar5)) {
code_r0x00014ab29f83:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ImageMipmap @ 14ab2a070

void __thiscall
UE::Mutable::Private::FImageOperator::ImageMipmap
          (FImageOperator *this,int param_1,FImage *param_2,FImage *param_3,int param_4,int param_5,
          FMipmapGenerationSettings *param_6,bool param_7)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  FScratchImageMipmap local_48;
  
  local_48.Uncompressed.Object = (FImage *)0x0;
  local_48.Uncompressed.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_48.UncompressedMips.Object = (FImage *)0x0;
  local_48.UncompressedMips.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_48.CompressedMips.Object = (FImage *)0x0;
  local_48.CompressedMips.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ImageMipmap_PrepareScratch(this,param_2,param_4,param_5,&local_48);
  ImageMipmap(this,&local_48,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
  plVar1 = *(longlong **)&(this->ReleaseImage).field_0x28;
  plVar5 = (longlong *)&(this->ReleaseImage).field_0x10;
  pcVar2 = *(code **)&this->ReleaseImage;
  plVar4 = plVar5;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_48);
  Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
  plVar1 = *(longlong **)&(this->ReleaseImage).field_0x28;
  pcVar2 = *(code **)&this->ReleaseImage;
  plVar4 = plVar5;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_48.UncompressedMips);
  Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
  plVar1 = *(longlong **)&(this->ReleaseImage).field_0x28;
  pcVar2 = *(code **)&this->ReleaseImage;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar3,&local_48.CompressedMips);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.CompressedMips.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.UncompressedMips.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Uncompressed.SharedReferenceCount.ReferenceController);
  return;
}

// ImageMipmap_PrepareScratch @ 14ab2a320

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FImageOperator::ImageMipmap_PrepareScratch
          (FImageOperator *this,FImage *param_1,int param_2,int param_3,FScratchImageMipmap *param_4
          )

{
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  EImageFormat EVar5;
  EImageFormat EVar6;
  int iVar7;
  int iVar8;
  FImageFormatData *pFVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 local_res20 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined4 local_120 [2];
  undefined4 local_118 [2];
  uint local_110 [2];
  uint local_108 [2];
  undefined4 local_100 [2];
  int local_f8 [2];
  uint local_f0 [2];
  uint local_e8 [2];
  undefined4 local_e0 [2];
  undefined4 local_d8 [2];
  uint local_d0 [2];
  uint local_c8 [2];
  undefined4 local_c0 [2];
  int local_b8 [2];
  uint local_b0 [2];
  uint local_a8 [2];
  ushort local_a0 [2];
  ushort local_9c;
  ushort local_98 [2];
  ushort local_94;
  ushort local_90 [2];
  ushort local_8c;
  ushort local_88 [2];
  ushort local_84;
  int local_80;
  int local_7c;
  FScratchImageMipmap local_78;
  FImage *local_48;
  FSharedReferencer<1> local_40;
  
  iVar7 = FImage::GetLODCount(param_1);
  if ((iVar7 != param_3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestImage->GetLODCount() == LevelCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageMipmap.cpp"
                         ,0x219,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar5 = FImage::GetFormat(param_1);
  EVar6 = GetUncompressedFormat(EVar5);
  if (EVar5 != EVar6) {
    pFVar9 = GetImageFormatData(EVar5);
    if (pFVar9->PixelsPerBlockX < 2) {
      FImage::CalculateMipSize(param_1,(int)local_90);
      iVar7 = 0;
      local_d0[0] = (uint)local_8c;
      local_c8[0] = (uint)local_90[0];
      local_e0[0] = 0;
      local_130[0] = 3;
      local_d8[0] = 1;
      Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
      plVar2 = *(longlong **)&(this->CreateImage).field_0x28;
      pcVar3 = *(code **)&this->CreateImage;
      plVar11 = (longlong *)&(this->CreateImage).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar11 = plVar2;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar3)(&local_78.CompressedMips,uVar10,local_c8,local_d0,local_d8,local_130,local_e0);
      if (param_4 != (FScratchImageMipmap *)&local_78.CompressedMips) {
        (param_4->Uncompressed).Object = local_78.CompressedMips.Object;
        local_78.CompressedMips.Object = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_4->Uncompressed).SharedReferenceCount,
                   &local_78.CompressedMips.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.CompressedMips.SharedReferenceCount.ReferenceController);
      FImage::CalculateMipSize(param_1,(int)local_88);
      local_c0[0] = 0;
      local_128[0] = 3;
      local_b8[0] = (param_3 - param_2) + -1;
      if (local_b8[0] < 1) {
        local_b8[0] = 1;
      }
      local_b0[0] = (uint)local_84;
      local_a8[0] = (uint)local_88[0];
      Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
      plVar2 = *(longlong **)&(this->CreateImage).field_0x28;
      pcVar3 = *(code **)&this->CreateImage;
      plVar11 = (longlong *)&(this->CreateImage).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar11 = plVar2;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar3)(&local_48,uVar10,local_a8,local_b0,local_b8,local_128,local_c0);
      pTVar1 = &param_4->UncompressedMips;
      if (pTVar1 != (TSharedPtr<UE::Mutable::Private::FImage,1> *)&local_48) {
        pTVar1->Object = local_48;
        local_48 = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_4->UncompressedMips).SharedReferenceCount,&local_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.ReferenceController);
      if ((pTVar1->Object == (FImage *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = FImage::GetLODCount(pTVar1->Object);
      if (0 < iVar8) {
        do {
          if ((param_4->CompressedMips).Object == (FImage *)0x0) {
            return;
          }
          if (((param_4->Uncompressed).Object == (FImage *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FImage::CalculateMipSize((param_4->Uncompressed).Object,(int)&local_80);
          if (((param_4->CompressedMips).Object == (FImage *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FImageDataStorage::ResizeLOD
                    (&((param_4->CompressedMips).Object)->DataStorage,iVar7,local_7c * local_80,
                     Default);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar8);
      }
    }
    else {
      if (bEnableCompressedMipGenerationMemoryOptimizations == false) {
        FImage::CalculateMipSize(param_1,(int)local_a0);
        local_110[0] = (uint)local_9c;
        local_108[0] = (uint)local_a0[0];
        local_120[0] = 0;
        local_res20[0] = 2;
        local_118[0] = 1;
        Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
        plVar2 = *(longlong **)&(this->CreateImage).field_0x28;
        pcVar3 = *(code **)&this->CreateImage;
        plVar11 = (longlong *)&(this->CreateImage).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar11 = plVar2;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar3)(&local_78,uVar10,local_108,local_110,local_118,local_res20,local_120);
        if (param_4 != &local_78) {
          (param_4->Uncompressed).Object = local_78.Uncompressed.Object;
          local_78.Uncompressed.Object = (FImage *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(param_4->Uncompressed).SharedReferenceCount,
                     &local_78.Uncompressed.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.Uncompressed.SharedReferenceCount.ReferenceController);
      }
      FImage::CalculateMipSize(param_1,(int)local_98);
      local_100[0] = 0;
      local_138[0] = 2;
      local_f8[0] = (param_3 - param_2) + -1;
      if (local_f8[0] < 1) {
        local_f8[0] = 1;
      }
      local_f0[0] = (uint)local_94;
      local_e8[0] = (uint)local_98[0];
      Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
      plVar2 = *(longlong **)&(this->CreateImage).field_0x28;
      pcVar3 = *(code **)&this->CreateImage;
      plVar11 = (longlong *)&(this->CreateImage).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar11 = plVar2;
      }
      uVar10 = (**(code **)(*plVar11 + 8))(plVar11);
      (*pcVar3)(&local_78.UncompressedMips,uVar10,local_e8,local_f0,local_f8,local_138,local_100);
      if (&param_4->UncompressedMips != &local_78.UncompressedMips) {
        (param_4->UncompressedMips).Object = local_78.UncompressedMips.Object;
        local_78.UncompressedMips.Object = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_4->UncompressedMips).SharedReferenceCount,
                   &local_78.UncompressedMips.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.UncompressedMips.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// ImageMipmap_ReleaseScratch @ 14ab2a7c0

void __thiscall
UE::Mutable::Private::FImageOperator::ImageMipmap_ReleaseScratch
          (FImageOperator *this,FScratchImageMipmap *param_1)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
  plVar1 = *(longlong **)&(this->ReleaseImage).field_0x28;
  plVar4 = (longlong *)&(this->ReleaseImage).field_0x10;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ReleaseImage;
  plVar3 = plVar4;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*UNRECOVERED_JUMPTABLE)(uVar2,param_1);
  Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
  plVar1 = *(longlong **)&(this->ReleaseImage).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ReleaseImage;
  plVar3 = plVar4;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*UNRECOVERED_JUMPTABLE)(uVar2,&param_1->UncompressedMips);
  Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
  plVar1 = *(longlong **)&(this->ReleaseImage).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ReleaseImage;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00014ab2a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,&param_1->CompressedMips);
  return;
}

// ImagePixelFormat @ 14ab2a880

TSharedPtr<UE::Mutable::Private::FImage,1> * __thiscall
UE::Mutable::Private::FImageOperator::ImagePixelFormat
          (FImageOperator *this,TSharedPtr<UE::Mutable::Private::FImage,1> *__return_storage_ptr__,
          int param_1,FImage *param_2,EImageFormat param_3,int param_4)

{
  uchar uVar1;
  longlong *plVar2;
  code *pcVar3;
  EImageFormat EVar4;
  int iVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  TIntVector2<int> TVar9;
  undefined8 uVar10;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar11;
  ForAnyElementType FVar12;
  longlong *plVar13;
  bool bVar14;
  bool bVar15;
  bool local_res8 [8];
  int local_res10 [2];
  int local_res18;
  undefined4 local_res20 [2];
  uint local_78 [2];
  ulonglong local_70;
  undefined1 local_68 [8];
  FString local_60 [2];
  
  bVar14 = -1 < CpuChannel->Enabled;
  local_res18 = param_1;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId24,"Mutable_ImagePixelFormat",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
               ,0x18);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId24);
  }
  FImage::GetFormat(param_2);
  EVar4 = param_3;
  ::FString::PrintfImpl(local_60,L"From %d to %d");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_60[0].Data.ArrayNum != 0) {
    FVar12.Data = local_60[0].Data.AllocatorInstance.Data;
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar12.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
               ,0x19);
  }
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  iVar5 = param_4;
  if (param_4 == -1) {
    uVar7 = FImage::GetSizeX(param_2);
    local_70 = CONCAT44(local_70._4_4_,(uint)uVar7);
    uVar8 = FImage::GetSizeY(param_2);
    local_70 = (ulonglong)CONCAT24(uVar8,(uint)local_70);
    local_res10[0] = FImage::GetLODCount(param_2);
    local_78[0] = (uint)uVar7;
  }
  else {
    TVar9 = FImage::CalculateMipSize(param_2,(int)local_68);
    local_70 = *(ulonglong *)TVar9.field0_0x0;
    local_res10[0] = 1;
    local_78[0] = (uint)local_70;
  }
  local_res20[0] = (undefined4)(local_70 >> 0x20);
  param_4 = 0;
  param_3 = EVar4;
  Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
  plVar2 = *(longlong **)&(this->CreateImage).field_0x28;
  pcVar3 = *(code **)&this->CreateImage;
  plVar13 = (longlong *)&(this->CreateImage).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar13 = plVar2;
  }
  uVar10 = (**(code **)(*plVar13 + 8))();
  (*pcVar3)(__return_storage_ptr__,uVar10,local_78,local_res20,local_res10,&param_3,&param_4);
  uVar1 = param_2->Flags;
  if ((__return_storage_ptr__->Object == (FImage *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar3)();
    return pTVar11;
  }
  __return_storage_ptr__->Object->Flags = uVar1;
  uVar7 = FImage::GetSizeX(param_2);
  if ((uVar7 != 0) && (uVar7 = FImage::GetSizeY(param_2), uVar7 != 0)) {
    local_res8[0] = false;
    ImagePixelFormat(this,local_res8,local_res18,__return_storage_ptr__->Object,param_2,iVar5);
    if ((local_res8[0] == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccess",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                           ,0x34,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ImagePixelFormat @ 14ab2ab40

void __thiscall
UE::Mutable::Private::FImageOperator::ImagePixelFormat
          (FImageOperator *this,bool *param_1,int param_2,FImage *param_3,FImage *param_4,
          int param_5)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  int local_res8 [2];
  int local_48 [2];
  FImage *local_40;
  FImage *local_38 [2];
  
  if (*(longlong *)&this->FormatImageOverride != 0) {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId160,"Mutable_ImagePixelFormatOverride",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                 ,0xa0);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId160);
    }
    local_res8[0] = param_5;
    local_40 = param_4;
    local_48[0] = param_2;
    local_38[0] = param_3;
    Core::Private::Function::CheckCallable(*(void **)&this->FormatImageOverride);
    pcVar1 = *(code **)&this->FormatImageOverride;
    plVar2 = *(longlong **)&(this->FormatImageOverride).field_0x28;
    plVar5 = (longlong *)&(this->FormatImageOverride).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4,param_1,local_48,local_38,&local_40,local_res8);
    if (*param_1 != false) {
      if (!bVar7) {
        return;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  *param_1 = true;
  iVar6 = 0;
  if (param_5 == -1) {
    iVar3 = FImage::GetLODCount(param_4);
  }
  else {
    iVar3 = 1;
    iVar6 = param_5;
  }
  ImagePixelFormat(this,param_1,param_2,param_3,param_4,0,iVar6,iVar3);
  if ((*param_1 == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bOutSuccess",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0xaf,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ImagePixelFormat @ 14ab2acf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FImageOperator::ImagePixelFormat
          (FImageOperator *this,bool *param_1,int param_2,FImage *param_3,FImage *param_4,
          int param_5,int param_6,int param_7)

{
  uchar uVar1;
  TIntVector2<unsigned_short> TVar2;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar3;
  FImageDataStorage *this_00;
  bool bVar4;
  bool bVar5;
  EImageFormat EVar6;
  EImageFormat EVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  TIntVector2<int> TVar13;
  TIntVector2<int> TVar14;
  TIntVector2<unsigned_short> *pTVar15;
  TIntVector2<unsigned_short> *pTVar16;
  TIntVector2<unsigned_short>_u_0 *pTVar17;
  uchar *puVar18;
  uchar *puVar19;
  TArrayView<unsigned_char,int> *pTVar20;
  undefined8 uVar21;
  code *pcVar22;
  uint uVar23;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar24;
  longlong *plVar25;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  longlong lVar30;
  bool bVar31;
  longlong local_res10;
  <lambda_1> local_276;
  <lambda_2> local_275;
  <lambda_3> local_274;
  <lambda_4> local_273;
  <lambda_5> local_272;
  <lambda_6> local_271;
  <lambda_7> local_270;
  <lambda_8> local_26f;
  <lambda_9> local_26e;
  <lambda_10> local_26d;
  <lambda_11> local_26c;
  <lambda_12> local_26b;
  <lambda_14> local_26a;
  <lambda_15> local_269;
  <lambda_16> local_268;
  <lambda_17> local_267;
  <lambda_18> local_266;
  <lambda_19> local_265 [5];
  ulonglong local_260;
  uint local_258 [2];
  FImageDataStorage *local_250;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_248;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_238;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_228;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_218;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_208;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_1f8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_1e8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_1d8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_1c8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_1b8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_1a8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_198;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_188;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_178;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_168;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_158;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_148;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_138;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_128;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_118;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_108;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_f8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_e8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_d8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_c8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_b8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_a8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_98;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_88;
  TArrayView<unsigned_char,int> local_78;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  TArrayView<unsigned_char,int> local_58;
  
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"Mutable_ImagePixelFormatInPlace",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  local_260 = CONCAT44(local_260._4_4_,param_5 + param_7);
  iVar10 = FImage::GetLODCount(param_3);
  if ((iVar10 < param_5 + param_7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result->GetLODCount() >= ResultLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0xb7,L""), bVar4)) {
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  iVar10 = FImage::GetLODCount(param_4);
  if ((iVar10 < param_6 + param_7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Base->GetLODCount() >= BaseLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0xb8,L""), bVar4)) {
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  TVar13 = FImage::CalculateMipSize(param_4,(int)local_68);
  TVar14 = FImage::CalculateMipSize(param_3,(int)local_60);
  if (((*(int *)TVar13.field0_0x0 != *(int *)TVar14.field0_0x0) ||
      (*(int *)((longlong)TVar13.field0_0x0 + 4) != *(int *)((longlong)TVar14.field0_0x0 + 4))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Base->CalculateMipSize(BaseLODBegin) == Result->CalculateMipSize(ResultLODBegin)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0xb9,L""), bVar4)) {
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  iVar10 = FImage::GetLODCount(param_3);
  if (((iVar10 == param_7) && (param_6 == 0)) && (param_5 == 0)) {
    bVar4 = true;
    iVar10 = FImage::GetLODCount(param_4);
    if ((iVar10 < param_7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bFormatAllLODs || Base->GetLODCount() >= NumLODs",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                           ,0xbe,L""), bVar5)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
  }
  else {
    bVar4 = false;
  }
  *param_1 = true;
  EVar6 = FImage::GetFormat(param_3);
  EVar7 = FImage::GetFormat(param_4);
  if (EVar6 == EVar7) {
    iVar10 = FImage::GetLODCount(param_3);
    iVar11 = FImage::GetLODCount(param_4);
    if ((iVar10 == iVar11) && (iVar10 = FImage::GetLODCount(param_3), iVar10 == param_7)) {
      FImageDataStorage::operator=(&param_3->DataStorage,&param_4->DataStorage);
      goto LAB_14ab2d910;
    }
  }
  EVar6 = FImage::GetFormat(param_3);
  switch(EVar6) {
  case RGB_UByte:
    EVar6 = FImage::GetFormat(param_4);
    switch(EVar6) {
    case RGB_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l176::<lambda_9>_>
                (param_3,param_4,3,3,param_5,param_6,param_7,&local_26e);
      goto LAB_14ab2d910;
    case RGBA_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l177::<lambda_10>_>
                (param_3,param_4,3,4,param_5,param_6,param_7,&local_26d);
      goto LAB_14ab2d910;
    case L_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l175::<lambda_8>_>
                (param_3,param_4,3,1,param_5,param_6,param_7,&local_26f);
      goto LAB_14ab2d910;
    default:
      iVar10 = 0x2e4;
      goto LAB_14ab2c924;
    case RGB_UByteRLE:
      iVar10 = FImage::GetLODCount(param_3);
      iVar11 = FImage::GetLODCount(param_4);
      if ((iVar11 < iVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestImage->GetLODCount() <= BaseImage->GetLODCount()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageRLE.h"
                             ,0xeb,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      pTVar15 = FImage::GetSize(param_3);
      pTVar16 = FImage::GetSize(param_4);
      if ((((pTVar15->field0_0x0)._s_0.X != (pTVar16->field0_0x0)._s_0.X) ||
          ((pTVar15->field0_0x0)._s_0.Y != (pTVar16->field0_0x0)._s_0.Y)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestImage->GetSize() == BaseImage->GetSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageRLE.h"
                             ,0xec,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      uVar8 = FImage::GetSizeX(param_4);
      uVar12 = (uint)uVar8;
      uVar8 = FImage::GetSizeY(param_4);
      uVar23 = (uint)uVar8;
      iVar10 = FImage::GetLODCount(param_3);
      iVar11 = 0;
      if (0 < iVar10) {
        do {
          puVar18 = FImage::GetLODData(param_3,iVar11);
          puVar19 = FImage::GetLODData(param_4,iVar11);
          UncompressRLE_RGB(uVar12,uVar23,puVar19,puVar18);
          uVar12 = (int)(uVar12 + 1) / 2;
          if ((int)uVar12 < 1) {
            uVar12 = 1;
          }
          uVar23 = (int)(uVar23 + 1) / 2;
          if ((int)uVar23 < 1) {
            uVar23 = 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar10);
      }
      goto LAB_14ab2d910;
    case RGBA_UByteRLE:
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFormatAllLODs",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,599,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      ImagePixelFormat(this,&local_1d8,param_2,param_4,RGBA_UByte,-1);
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l180::<lambda_12>_>
                (param_3,local_1d8.Object,3,4,param_5,param_6,param_7,&local_26b);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar22 = *(code **)&this->ReleaseImage;
      plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar26 = plVar29;
      }
      uVar21 = (**(code **)(*plVar26 + 8))();
      (*pcVar22)(uVar21,&local_1d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.SharedReferenceCount.ReferenceController);
      goto LAB_14ab2d910;
    case BC1:
      pcVar22 = miro::BC1_to_RGB;
      break;
    case BC2:
      pcVar22 = miro::BC2_to_RGB;
      break;
    case BC3:
      pcVar22 = miro::BC3_to_RGB;
      break;
    case BC4:
      pcVar22 = miro::BC4_to_RGB;
      break;
    case BC5:
      pcVar22 = miro::BC5_to_RGB;
      break;
    case BGRA_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l178::<lambda_11>_>
                (param_3,param_4,3,4,param_5,param_6,param_7,&local_26c);
      goto LAB_14ab2d910;
    case ASTC_4x4_RGB_LDR:
      pcVar22 = miro::ASTC4x4RGBL_to_RGB;
      break;
    case ASTC_4x4_RGBA_LDR:
      pcVar22 = miro::ASTC4x4RGBAL_to_RGB;
      break;
    case ASTC_4x4_RG_LDR:
      pcVar22 = miro::ASTC4x4RGL_to_RGB;
      break;
    case ASTC_8x8_RGB_LDR:
      pcVar22 = miro::ASTC8x8RGBL_to_RGB;
      break;
    case ASTC_8x8_RGBA_LDR:
      pcVar22 = miro::ASTC8x8RGBAL_to_RGB;
      break;
    case ASTC_8x8_RG_LDR:
      pcVar22 = miro::ASTC8x8RGL_to_RGB;
      break;
    case ASTC_12x12_RGB_LDR:
      pcVar22 = miro::ASTC12x12RGBL_to_RGB;
      break;
    case ASTC_12x12_RGBA_LDR:
      pcVar22 = miro::ASTC12x12RGBAL_to_RGB;
      break;
    case ASTC_12x12_RG_LDR:
      pcVar22 = miro::ASTC12x12RGL_to_RGB;
      break;
    case ASTC_6x6_RGB_LDR:
      pcVar22 = miro::ASTC6x6RGBL_to_RGB;
      break;
    case ASTC_6x6_RGBA_LDR:
      pcVar22 = miro::ASTC6x6RGBAL_to_RGB;
      break;
    case ASTC_6x6_RG_LDR:
      pcVar22 = miro::ASTC6x6RGL_to_RGB;
      break;
    case ASTC_10x10_RGB_LDR:
      pcVar22 = miro::ASTC10x10RGBL_to_RGB;
      break;
    case ASTC_10x10_RGBA_LDR:
      pcVar22 = miro::ASTC10x10RGBAL_to_RGB;
      break;
    case ASTC_10x10_RG_LDR:
      pcVar22 = miro::ASTC10x10RGL_to_RGB;
    }
    goto LAB_14ab2b512;
  case RGBA_UByte:
    EVar6 = FImage::GetFormat(param_4);
    switch(EVar6) {
    case RGB_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l235::<lambda_15>_>
                (param_3,param_4,4,3,param_5,param_6,param_7,&local_269);
      goto LAB_14ab2d910;
    case RGBA_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l236::<lambda_16>_>
                (param_3,param_4,4,4,param_5,param_6,param_7,&local_268);
      goto LAB_14ab2d910;
    case L_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l234::<lambda_14>_>
                (param_3,param_4,4,1,param_5,param_6,param_7,&local_26a);
      goto LAB_14ab2d910;
    default:
      iVar10 = 1000;
      goto LAB_14ab2c924;
    case L_UByteRLE:
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFormatAllLODs",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x3d3,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      ImagePixelFormat(this,&local_1b8,param_2,param_4,L_UByte,-1);
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l266::<lambda_19>_>
                (param_3,local_1b8.Object,4,1,param_5,param_6,param_7,local_265);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar22 = *(code **)&this->ReleaseImage;
      plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar26 = plVar29;
      }
      uVar21 = (**(code **)(*plVar26 + 8))();
      (*pcVar22)(uVar21,&local_1b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
      goto LAB_14ab2d910;
    case RGB_UByteRLE:
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFormatAllLODs",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x3bf,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      ImagePixelFormat(this,&local_1c8,param_2,param_4,RGB_UByte,-1);
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l258::<lambda_18>_>
                (param_3,local_1c8.Object,4,3,param_5,param_6,param_7,&local_266);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar22 = *(code **)&this->ReleaseImage;
      plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar26 = plVar29;
      }
      uVar21 = (**(code **)(*plVar26 + 8))();
      (*pcVar22)(uVar21,&local_1c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
      goto LAB_14ab2d910;
    case RGBA_UByteRLE:
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFormatAllLODs",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x307,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      iVar10 = FImage::GetLODCount(param_3);
      iVar11 = FImage::GetLODCount(param_4);
      if ((iVar11 < iVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestImage->GetLODCount() <= BaseImage->GetLODCount()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageRLE.h"
                             ,0x11f,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      pTVar15 = FImage::GetSize(param_3);
      pTVar16 = FImage::GetSize(param_4);
      if ((((pTVar15->field0_0x0)._s_0.X != (pTVar16->field0_0x0)._s_0.X) ||
          ((pTVar15->field0_0x0)._s_0.Y != (pTVar16->field0_0x0)._s_0.Y)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestImage->GetSize() == BaseImage->GetSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageRLE.h"
                             ,0x120,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      uVar8 = FImage::GetSizeX(param_4);
      uVar12 = (uint)uVar8;
      uVar8 = FImage::GetSizeY(param_4);
      uVar23 = (uint)uVar8;
      iVar10 = FImage::GetLODCount(param_3);
      iVar11 = 0;
      if (0 < iVar10) {
        do {
          puVar18 = FImage::GetLODData(param_3,iVar11);
          puVar19 = FImage::GetLODData(param_4,iVar11);
          UncompressRLE_RGBA(uVar12,uVar23,puVar19,puVar18);
          uVar12 = (int)(uVar12 + 1) / 2;
          if ((int)uVar12 < 1) {
            uVar12 = 1;
          }
          uVar23 = (int)(uVar23 + 1) / 2;
          if ((int)uVar23 < 1) {
            uVar23 = 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar10);
      }
      goto LAB_14ab2d910;
    case BC1:
      pcVar22 = miro::BC1_to_RGBA;
      break;
    case BC2:
      pcVar22 = miro::BC2_to_RGBA;
      break;
    case BC3:
      pcVar22 = miro::BC3_to_RGBA;
      break;
    case BC4:
      pcVar22 = miro::BC4_to_RGBA;
      break;
    case BC5:
      pcVar22 = miro::BC5_to_RGBA;
      break;
    case BGRA_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l237::<lambda_17>_>
                (param_3,param_4,4,4,param_5,param_6,param_7,&local_267);
      goto LAB_14ab2d910;
    case ASTC_4x4_RGB_LDR:
      pcVar22 = miro::ASTC4x4RGBL_to_RGBA;
      break;
    case ASTC_4x4_RGBA_LDR:
      pcVar22 = miro::ASTC4x4RGBAL_to_RGBA;
      break;
    case ASTC_4x4_RG_LDR:
      pcVar22 = miro::ASTC4x4RGL_to_RGBA;
      break;
    case ASTC_8x8_RGB_LDR:
      pcVar22 = miro::ASTC8x8RGBL_to_RGBA;
      break;
    case ASTC_8x8_RGBA_LDR:
      pcVar22 = miro::ASTC8x8RGBAL_to_RGBA;
      break;
    case ASTC_8x8_RG_LDR:
      pcVar22 = miro::ASTC8x8RGL_to_RGBA;
      break;
    case ASTC_12x12_RGB_LDR:
      pcVar22 = miro::ASTC12x12RGBL_to_RGBA;
      break;
    case ASTC_12x12_RGBA_LDR:
      pcVar22 = miro::ASTC12x12RGBAL_to_RGBA;
      break;
    case ASTC_12x12_RG_LDR:
      pcVar22 = miro::ASTC12x12RGL_to_RGBA;
      break;
    case ASTC_6x6_RGB_LDR:
      pcVar22 = miro::ASTC6x6RGBL_to_RGBA;
      break;
    case ASTC_6x6_RGBA_LDR:
      pcVar22 = miro::ASTC6x6RGBAL_to_RGBA;
      break;
    case ASTC_6x6_RG_LDR:
      pcVar22 = miro::ASTC6x6RGL_to_RGBA;
      break;
    case ASTC_10x10_RGB_LDR:
      pcVar22 = miro::ASTC10x10RGBL_to_RGBA;
      break;
    case ASTC_10x10_RGBA_LDR:
      pcVar22 = miro::ASTC10x10RGBAL_to_RGBA;
      break;
    case ASTC_10x10_RG_LDR:
      pcVar22 = miro::ASTC10x10RGL_to_RGBA;
    }
LAB_14ab2b512:
    ImagePixelFormatInternal::
    BlockDecompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*)>
              (param_3,param_4,param_5,param_6,param_7,pcVar22);
    goto LAB_14ab2d910;
  case L_UByte:
    EVar6 = FImage::GetFormat(param_4);
    switch(EVar6) {
    case RGB_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l68::<lambda_2>_>
                (param_3,param_4,1,3,param_5,param_6,param_7,&local_275);
      break;
    case RGBA_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l70::<lambda_4>_>
                (param_3,param_4,1,4,param_5,param_6,param_7,&local_273);
      break;
    case L_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l41::<lambda_1>_>
                (param_3,param_4,1,1,param_5,param_6,param_7,&local_276);
      break;
    default:
      iVar10 = 0x164;
      goto LAB_14ab2c924;
    case L_UByteRLE:
      if (bVar4) {
        iVar10 = FImage::GetLODCount(param_3);
        iVar11 = FImage::GetLODCount(param_4);
        if ((iVar11 < iVar10) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("DestImage->GetLODCount() <= BaseImage->GetLODCount()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageRLE.h"
                               ,0x61,L""), bVar4)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        pTVar15 = FImage::GetSize(param_3);
        pTVar16 = FImage::GetSize(param_4);
        if ((((pTVar15->field0_0x0)._s_0.X != (pTVar16->field0_0x0)._s_0.X) ||
            ((pTVar15->field0_0x0)._s_0.Y != (pTVar16->field0_0x0)._s_0.Y)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("DestImage->GetSize() == BaseImage->GetSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageRLE.h"
                               ,0x62,L""), bVar4)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        uVar8 = FImage::GetSizeX(param_4);
        uVar12 = (uint)uVar8;
        uVar8 = FImage::GetSizeY(param_4);
        uVar23 = (uint)uVar8;
        iVar10 = FImage::GetLODCount(param_3);
        iVar11 = 0;
        if (0 < iVar10) {
          do {
            puVar18 = FImage::GetLODData(param_3,iVar11);
            puVar19 = FImage::GetLODData(param_4,iVar11);
            UncompressRLE_L(uVar12,uVar23,puVar19,puVar18);
            uVar12 = (int)(uVar12 + 1) / 2;
            if ((int)uVar12 < 1) {
              uVar12 = 1;
            }
            uVar23 = (int)(uVar23 + 1) / 2;
            if ((int)uVar23 < 1) {
              uVar23 = 1;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar10);
        }
      }
      else {
        if ((param_7 != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumLODs == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                               ,0xe6,L""), bVar4)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        pTVar17 = &FImage::GetSize(param_3)->field0_0x0;
        TVar2.field0_0x0 = *pTVar17;
        puVar18 = FImage::GetLODData(param_3,param_5);
        puVar19 = FImage::GetLODData(param_4,param_6);
        UncompressRLE_L((uint)TVar2.field0_0x0 & 0xffff,(uint)TVar2.field0_0x0 >> 0x10,puVar19,
                        puVar18);
      }
      break;
    case RGB_UByteRLE:
      ImagePixelFormat(this,&local_228,param_2,param_4,RGB_UByte,-1);
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l69::<lambda_3>_>
                (param_3,local_228.Object,1,3,param_5,param_6,param_7,&local_274);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar22 = *(code **)&this->ReleaseImage;
      plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar26 = plVar29;
      }
      uVar21 = (**(code **)(*plVar26 + 8))();
      (*pcVar22)(uVar21,&local_228);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_228.SharedReferenceCount.ReferenceController);
      break;
    case RGBA_UByteRLE:
      ImagePixelFormat(this,&local_218,param_2,param_4,RGBA_UByte,-1);
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l71::<lambda_5>_>
                (param_3,local_218.Object,1,4,param_5,param_6,param_7,&local_272);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar22 = *(code **)&this->ReleaseImage;
      plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar26 = plVar29;
      }
      uVar21 = (**(code **)(*plVar26 + 8))();
      (*pcVar22)(uVar21,&local_218);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
      break;
    case L_UBitRLE:
      if (bVar4) {
        iVar10 = FImage::GetLODCount(param_3);
        iVar11 = FImage::GetLODCount(param_4);
        if ((iVar11 < iVar10) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("DestImage->GetLODCount() <= BaseImage->GetLODCount()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageRLE.h"
                               ,0xb7,L""), bVar4)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        pTVar15 = FImage::GetSize(param_3);
        pTVar16 = FImage::GetSize(param_4);
        if ((((pTVar15->field0_0x0)._s_0.X != (pTVar16->field0_0x0)._s_0.X) ||
            ((pTVar15->field0_0x0)._s_0.Y != (pTVar16->field0_0x0)._s_0.Y)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("DestImage->GetSize() == BaseImage->GetSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageRLE.h"
                               ,0xb8,L""), bVar4)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        uVar8 = FImage::GetSizeX(param_4);
        uVar12 = (uint)uVar8;
        uVar8 = FImage::GetSizeY(param_4);
        uVar23 = (uint)uVar8;
        iVar10 = FImage::GetLODCount(param_3);
        iVar11 = 0;
        if (0 < iVar10) {
          do {
            puVar18 = FImage::GetLODData(param_3,iVar11);
            puVar19 = FImage::GetLODData(param_4,iVar11);
            UncompressRLE_L1(uVar12,uVar23,puVar19,puVar18);
            uVar12 = (int)(uVar12 + 1) / 2;
            if ((int)uVar12 < 1) {
              uVar12 = 1;
            }
            uVar23 = (int)(uVar23 + 1) / 2;
            if ((int)uVar23 < 1) {
              uVar23 = 1;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar10);
        }
      }
      else {
        if ((param_7 != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumLODs == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                               ,0xf4,L""), bVar4)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        pTVar17 = &FImage::GetSize(param_3)->field0_0x0;
        TVar2.field0_0x0 = *pTVar17;
        puVar18 = FImage::GetLODData(param_3,param_5);
        puVar19 = FImage::GetLODData(param_4,param_6);
        UncompressRLE_L1((uint)TVar2.field0_0x0 & 0xffff,(uint)TVar2.field0_0x0 >> 0x10,puVar19,
                         puVar18);
      }
      break;
    case BC1:
    case BC2:
    case BC3:
      ImagePixelFormat(this,&local_208,param_2,param_4,RGB_UByte,-1);
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l73::<lambda_7>_>
                (param_3,local_208.Object,1,3,param_5,param_6,param_7,&local_270);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar22 = *(code **)&this->ReleaseImage;
      plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar26 = plVar29;
      }
      uVar21 = (**(code **)(*plVar26 + 8))();
      (*pcVar22)(uVar21,&local_208);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.SharedReferenceCount.ReferenceController);
      break;
    case BC4:
      pcVar22 = miro::BC4_to_L;
      goto LAB_14ab2b512;
    case BGRA_UByte:
      ImagePixelFormatInternal::
      ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l72::<lambda_6>_>
                (param_3,param_4,1,4,param_5,param_6,param_7,&local_271);
    }
    goto LAB_14ab2d910;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                       ,0x651,L"");
    if (!bVar4) goto LAB_14ab2d910;
    goto code_r0x00014ab2d90f;
  case L_UByteRLE:
    EVar6 = FImage::GetFormat(param_4);
    if ((EVar6 != RGB_UByte) && (EVar6 != RGBA_UByte)) {
      if (EVar6 == L_UByte) {
        bVar4 = FImageDataStorage::IsEmpty(&param_3->DataStorage);
        uVar28 = 0;
        if (bVar4) {
          if (((param_4->DataStorage).Buffers.ArrayNum != (param_3->DataStorage).Buffers.ArrayNum)
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Base->DataStorage.Buffers.Num() == Result->DataStorage.Buffers.Num()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                                    ,0x175,L""), bVar4)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          uVar27 = uVar28;
          if (0 < (param_4->DataStorage).Buffers.ArrayNum) {
            do {
              uVar12 = (uint)uVar27;
              uVar23 = 0;
              if ((int)uVar12 < (param_4->DataStorage).Buffers.ArrayNum) {
                uVar23 = ~uVar12 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              FVar3 = (param_4->DataStorage).Buffers.AllocatorInstance.SecondaryData;
              FVar24 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                        )&param_4->DataStorage;
              if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                            )0x0) {
                FVar24 = FVar3;
              }
              local_260 = CONCAT44(local_260._4_4_,*(undefined4 *)(uVar28 + 0x10 + (longlong)FVar24)
                                  );
              uVar23 = 0;
              if ((int)uVar12 < (param_3->DataStorage).Buffers.ArrayNum) {
                uVar23 = ~uVar12 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              FVar3 = (param_3->DataStorage).Buffers.AllocatorInstance.SecondaryData;
              FVar24 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                        )&param_3->DataStorage;
              if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                            )0x0) {
                FVar24 = FVar3;
              }
              TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
              ::SetNumUninitialized
                        ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                          *)((longlong)FVar24 + (longlong)(int)uVar12 * 0x18),(int)local_260,Default
                        );
              uVar28 = uVar28 + 0x18;
              uVar27 = (ulonglong)(uVar12 + 1);
            } while ((int)(uVar12 + 1) < (param_4->DataStorage).Buffers.ArrayNum);
          }
          *(undefined8 *)(param_3->DataStorage).CompactedTailOffsets.Elements =
               *(undefined8 *)(param_4->DataStorage).CompactedTailOffsets.Elements;
          *(undefined4 *)((param_3->DataStorage).CompactedTailOffsets.Elements + 4) =
               *(undefined4 *)((param_4->DataStorage).CompactedTailOffsets.Elements + 4);
          (param_3->DataStorage).CompactedTailOffsets.Elements[6] =
               (param_4->DataStorage).CompactedTailOffsets.Elements[6];
        }
        uVar8 = FImage::GetSizeX(param_4);
        uVar9 = FImage::GetSizeY(param_4);
        if (0 < param_7) {
          iVar11 = param_6 - param_5;
          local_260 = (ulonglong)(uint)param_7;
          iVar10 = param_5;
          param_5 = (uint)uVar9;
          param_7 = (uint)uVar8;
          do {
            do {
              local_258[0] = 0;
              uVar23 = FImage::GetLODDataSize(param_3,iVar10);
              puVar18 = FImage::GetLODData(param_3,iVar10);
              puVar19 = FImage::GetLODData(param_4,iVar11 + iVar10);
              CompressRLE_L(local_258,param_7,param_5,puVar19,puVar18,uVar23);
              bVar4 = local_258[0] == 0;
              uVar23 = local_258[0];
              if (local_258[0] == 0) {
                pTVar20 = FImageDataStorage::GetLOD(&param_3->DataStorage,&local_58,iVar10);
                uVar23 = pTVar20->ArrayNum * 2;
                if ((int)uVar23 < 4) {
                  uVar23 = 4;
                }
              }
              FImageDataStorage::ResizeLOD(&param_3->DataStorage,iVar10,uVar23,Default);
            } while (bVar4);
            iVar10 = iVar10 + 1;
            param_7 = (param_7 + 1) / 2;
            param_5 = (param_5 + 1) / 2;
            local_260 = local_260 - 1;
          } while (local_260 != 0);
          local_260 = 0;
        }
        goto LAB_14ab2d910;
      }
      if (EVar6 != BGRA_UByte) {
        iVar10 = 0x1cb;
        goto LAB_14ab2c924;
      }
    }
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFormatAllLODs",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                           ,0x1a9,L""), bVar4)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    ImagePixelFormat(this,&local_1f8,param_2,param_4,L_UByte,-1);
    bVar4 = FImageDataStorage::IsEmpty(&param_3->DataStorage);
    if (bVar4) {
      if (((param_4->DataStorage).Buffers.ArrayNum != (param_3->DataStorage).Buffers.ArrayNum) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Base->DataStorage.Buffers.Num() == Result->DataStorage.Buffers.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x1b0,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      uVar23 = 0;
      if (0 < (param_4->DataStorage).Buffers.ArrayNum) {
        local_res10 = 0;
        do {
          uVar12 = 0;
          if ((int)uVar23 < (param_4->DataStorage).Buffers.ArrayNum) {
            uVar12 = ~uVar23 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          FVar3 = (param_4->DataStorage).Buffers.AllocatorInstance.SecondaryData;
          FVar24 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )&param_4->DataStorage;
          if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                        )0x0) {
            FVar24 = FVar3;
          }
          iVar10 = *(int *)(local_res10 + 0x10 + (longlong)FVar24);
          uVar12 = 0;
          if ((int)uVar23 < (param_3->DataStorage).Buffers.ArrayNum) {
            uVar12 = ~uVar23 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          FVar3 = (param_3->DataStorage).Buffers.AllocatorInstance.SecondaryData;
          FVar24 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )&param_3->DataStorage;
          if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                        )0x0) {
            FVar24 = FVar3;
          }
          TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
          ::SetNumUninitialized
                    ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                      *)((longlong)FVar24 + (longlong)(int)uVar23 * 0x18),iVar10,Default);
          local_res10 = local_res10 + 0x18;
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < (param_4->DataStorage).Buffers.ArrayNum);
      }
      *(undefined8 *)(param_3->DataStorage).CompactedTailOffsets.Elements =
           *(undefined8 *)(param_4->DataStorage).CompactedTailOffsets.Elements;
      *(undefined4 *)((param_3->DataStorage).CompactedTailOffsets.Elements + 4) =
           *(undefined4 *)((param_4->DataStorage).CompactedTailOffsets.Elements + 4);
      (param_3->DataStorage).CompactedTailOffsets.Elements[6] =
           (param_4->DataStorage).CompactedTailOffsets.Elements[6];
    }
    CompressRLE_L(local_1f8.Object,param_3);
    Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
    plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
    pcVar22 = *(code **)&this->ReleaseImage;
    plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
    if (plVar29 != (longlong *)0x0) {
      plVar26 = plVar29;
    }
    uVar21 = (**(code **)(*plVar26 + 8))();
    (*pcVar22)(uVar21,&local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
    goto LAB_14ab2d910;
  case RGB_UByteRLE:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFormatAllLODs",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x427,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      CompressRLE_RGB(param_4,param_3);
      goto LAB_14ab2d910;
    }
    if (EVar6 == RGBA_UByteRLE) {
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFormatAllLODs",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x432,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      ImagePixelFormat(this,&local_168,param_2,param_4,RGBA_UByte,-1);
      ImagePixelFormat(this,&local_178,param_2,local_168.Object,RGB_UByte,-1);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar26 = *(longlong **)&(this->ReleaseImage).field_0x28;
      plVar29 = (longlong *)&(this->ReleaseImage).field_0x10;
      pcVar22 = *(code **)&this->ReleaseImage;
      plVar25 = plVar29;
      if (plVar26 != (longlong *)0x0) {
        plVar25 = plVar26;
      }
      uVar21 = (**(code **)(*plVar25 + 8))();
      (*pcVar22)(uVar21,&local_168);
      CompressRLE_RGB(local_178.Object,param_3);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar26 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar22 = *(code **)&this->ReleaseImage;
      if (plVar26 != (longlong *)0x0) {
        plVar29 = plVar26;
      }
      uVar21 = (**(code **)(*plVar29 + 8))(plVar29);
      (*pcVar22)(uVar21,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      goto LAB_14ab2d910;
    }
    iVar10 = 0x440;
    goto LAB_14ab2c924;
  case RGBA_UByteRLE:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFormatAllLODs",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x3fc,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      ImagePixelFormat(this,&local_188,param_2,param_4,RGBA_UByte,-1);
      CompressRLE_RGBA(local_188.Object,param_3);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar22 = *(code **)&this->ReleaseImage;
      plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar26 = plVar29;
      }
      uVar21 = (**(code **)(*plVar26 + 8))();
      (*pcVar22)(uVar21,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
      goto LAB_14ab2d910;
    }
    if (EVar6 == RGBA_UByte) {
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFormatAllLODs",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x3f5,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      CompressRLE_RGBA(param_4,param_3);
      goto LAB_14ab2d910;
    }
    if (EVar6 == RGB_UByteRLE) {
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFormatAllLODs",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x40c,L""), bVar4)) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      ImagePixelFormat(this,&local_198,param_2,param_4,RGB_UByte,-1);
      ImagePixelFormat(this,&local_1a8,param_2,local_198.Object,RGBA_UByte,-1);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar26 = *(longlong **)&(this->ReleaseImage).field_0x28;
      plVar29 = (longlong *)&(this->ReleaseImage).field_0x10;
      pcVar22 = *(code **)&this->ReleaseImage;
      plVar25 = plVar29;
      if (plVar26 != (longlong *)0x0) {
        plVar25 = plVar26;
      }
      uVar21 = (**(code **)(*plVar25 + 8))();
      (*pcVar22)(uVar21,&local_198);
      CompressRLE_RGBA(local_1a8.Object,param_3);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar26 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar22 = *(code **)&this->ReleaseImage;
      if (plVar26 != (longlong *)0x0) {
        plVar29 = plVar26;
      }
      uVar21 = (**(code **)(*plVar29 + 8))(plVar29);
      (*pcVar22)(uVar21,&local_1a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      goto LAB_14ab2d910;
    }
    iVar10 = 0x419;
LAB_14ab2c924:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                       ,iVar10,L"");
    if (bVar4) {
code_r0x00014ab2d90f:
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    goto LAB_14ab2d910;
  case L_UBitRLE:
    EVar6 = FImage::GetFormat(param_4);
    if ((EVar6 != RGB_UByte) && (EVar6 != RGBA_UByte)) {
      if (EVar6 == L_UByte) {
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("bFormatAllLODs",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                               ,0x1d9,L""), bVar4)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        bVar4 = FImageDataStorage::IsEmpty(&param_3->DataStorage);
        if (bVar4) {
          if (((param_4->DataStorage).Buffers.ArrayNum != (param_3->DataStorage).Buffers.ArrayNum)
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Base->DataStorage.Buffers.Num() == Result->DataStorage.Buffers.Num()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                                    ,0x1df,L""), bVar4)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          uVar23 = 0;
          if (0 < (param_4->DataStorage).Buffers.ArrayNum) {
            lVar30 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar23 < (param_4->DataStorage).Buffers.ArrayNum) {
                uVar12 = ~uVar23 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              FVar3 = (param_4->DataStorage).Buffers.AllocatorInstance.SecondaryData;
              FVar24 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                        )&param_4->DataStorage;
              if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                            )0x0) {
                FVar24 = FVar3;
              }
              iVar10 = *(int *)((longlong)FVar24 + 0x10 + lVar30);
              uVar12 = 0;
              if ((int)uVar23 < (param_3->DataStorage).Buffers.ArrayNum) {
                uVar12 = ~uVar23 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              FVar3 = (param_3->DataStorage).Buffers.AllocatorInstance.SecondaryData;
              FVar24 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                        )&param_3->DataStorage;
              if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                            )0x0) {
                FVar24 = FVar3;
              }
              TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
              ::SetNumUninitialized
                        ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                          *)((longlong)FVar24 + (longlong)(int)uVar23 * 0x18),iVar10,Default);
              uVar23 = uVar23 + 1;
              lVar30 = lVar30 + 0x18;
            } while ((int)uVar23 < (param_4->DataStorage).Buffers.ArrayNum);
          }
          *(undefined8 *)(param_3->DataStorage).CompactedTailOffsets.Elements =
               *(undefined8 *)(param_4->DataStorage).CompactedTailOffsets.Elements;
          *(undefined4 *)((param_3->DataStorage).CompactedTailOffsets.Elements + 4) =
               *(undefined4 *)((param_4->DataStorage).CompactedTailOffsets.Elements + 4);
          (param_3->DataStorage).CompactedTailOffsets.Elements[6] =
               (param_4->DataStorage).CompactedTailOffsets.Elements[6];
        }
        CompressRLE_L1(param_4,param_3);
        goto LAB_14ab2d910;
      }
      if (EVar6 != BGRA_UByte) {
        iVar10 = 0x20d;
        goto LAB_14ab2c924;
      }
    }
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFormatAllLODs",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                           ,0x1fb,L""), bVar4)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    ImagePixelFormat(this,&local_1e8,param_2,param_4,L_UByte,-1);
    CompressRLE_L1(local_1e8.Object,param_3);
    Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
    plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
    pcVar22 = *(code **)&this->ReleaseImage;
    plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
    if (plVar29 != (longlong *)0x0) {
      plVar26 = plVar29;
    }
    uVar21 = (**(code **)(*plVar26 + 8))();
    (*pcVar22)(uVar21,&local_1e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.SharedReferenceCount.ReferenceController);
    goto LAB_14ab2d910;
  case BC1:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_BC1;
    }
    else {
      if (EVar6 != RGBA_UByte) {
        if (EVar6 == L_UByte) {
          ImagePixelFormat(this,&local_138,param_2,param_4,RGB_UByte,-1);
          ImagePixelFormatInternal::
          BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                    (param_3,local_138.Object,param_5,param_6,param_7,param_2,miro::RGB_to_BC1);
          Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
          plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
          pcVar22 = *(code **)&this->ReleaseImage;
          plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
          if (plVar29 != (longlong *)0x0) {
            plVar26 = plVar29;
          }
          uVar21 = (**(code **)(*plVar26 + 8))();
          (*pcVar22)(uVar21,&local_138);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_138.SharedReferenceCount.ReferenceController);
        }
        else if (EVar6 == BC3) {
          ImagePixelFormat(this,&local_148,param_2,param_4,RGBA_UByte,-1);
          ImagePixelFormatInternal::
          BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                    (param_3,local_148.Object,param_5,param_6,param_7,param_2,miro::RGBA_to_BC1);
          Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
          plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
          pcVar22 = *(code **)&this->ReleaseImage;
          plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
          if (plVar29 != (longlong *)0x0) {
            plVar26 = plVar29;
          }
          uVar21 = (**(code **)(*plVar26 + 8))();
          (*pcVar22)(uVar21,&local_148);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_148.SharedReferenceCount.ReferenceController);
        }
        else {
          if (4 < (byte)LogMutableCore._0_1_) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
          }
          ImagePixelFormat(this,&local_158,param_2,param_4,RGBA_UByte,-1);
          ImagePixelFormatInternal::
          BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                    (param_3,local_158.Object,param_5,param_6,param_7,param_2,miro::RGBA_to_BC1);
          Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
          plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
          pcVar22 = *(code **)&this->ReleaseImage;
          plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
          if (plVar29 != (longlong *)0x0) {
            plVar26 = plVar29;
          }
          uVar21 = (**(code **)(*plVar26 + 8))();
          (*pcVar22)(uVar21,&local_158);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_158.SharedReferenceCount.ReferenceController);
        }
        goto LAB_14ab2d910;
      }
      pcVar22 = miro::RGBA_to_BC1;
    }
    break;
  case BC2:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 != RGBA_UByte) {
      if (4 < (byte)LogMutableCore._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
      }
      ImagePixelFormat(this,&local_128,param_2,param_4,RGBA_UByte,-1);
      ImagePixelFormatInternal::
      BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                (param_3,local_128.Object,param_5,param_6,param_7,param_2,miro::RGBA_to_BC2);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar22 = *(code **)&this->ReleaseImage;
      plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar26 = plVar29;
      }
      uVar21 = (**(code **)(*plVar26 + 8))();
      (*pcVar22)(uVar21,&local_128);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.SharedReferenceCount.ReferenceController);
      goto LAB_14ab2d910;
    }
    pcVar22 = miro::RGBA_to_BC2;
    break;
  case BC3:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_BC3;
    }
    else if (EVar6 == RGBA_UByte) {
      pcVar22 = miro::RGBA_to_BC3;
    }
    else {
      if (EVar6 != BC1) {
        if (4 < (byte)LogMutableCore._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
        }
        ImagePixelFormat(this,&local_118,param_2,param_4,RGBA_UByte,-1);
        ImagePixelFormatInternal::
        BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                  (param_3,local_118.Object,param_5,param_6,param_7,param_2,miro::RGBA_to_BC3);
        Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
        plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
        pcVar22 = *(code **)&this->ReleaseImage;
        plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
        if (plVar29 != (longlong *)0x0) {
          plVar26 = plVar29;
        }
        uVar21 = (**(code **)(*plVar26 + 8))();
        (*pcVar22)(uVar21,&local_118);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.SharedReferenceCount.ReferenceController);
        goto LAB_14ab2d910;
      }
      if (-1 < CpuChannel->Enabled) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1188,"Mutable_BC1toBC3",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                   ,0x4a4);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1188);
        ImagePixelFormatInternal::
        BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                  (param_3,param_4,param_5,param_6,param_7,param_2,miro::BC1_to_BC3);
        FCpuProfilerTrace::OutputEndEvent();
        goto LAB_14ab2d910;
      }
      pcVar22 = miro::BC1_to_BC3;
    }
    break;
  case BC4:
    EVar6 = FImage::GetFormat(param_4);
    if (((EVar6 == RGB_UByte) || (EVar6 == RGBA_UByte)) || (EVar6 != L_UByte)) {
      ImagePixelFormat(this,&local_108,param_2,param_4,L_UByte,-1);
      ImagePixelFormatInternal::
      BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                (param_3,local_108.Object,param_5,param_6,param_7,param_2,miro::L_to_BC4);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar22 = *(code **)&this->ReleaseImage;
      plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar26 = plVar29;
      }
      uVar21 = (**(code **)(*plVar26 + 8))();
      (*pcVar22)(uVar21,&local_108);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
      goto LAB_14ab2d910;
    }
    pcVar22 = miro::L_to_BC4;
    break;
  case BC5:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_BC5;
    }
    else {
      if (EVar6 != RGBA_UByte) {
        if (4 < (byte)LogMutableCore._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
        }
        ImagePixelFormat(this,&local_f8,param_2,param_4,RGBA_UByte,-1);
        ImagePixelFormatInternal::
        BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                  (param_3,local_f8.Object,param_5,param_6,param_7,param_2,miro::RGBA_to_BC5);
        Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
        plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
        pcVar22 = *(code **)&this->ReleaseImage;
        plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
        if (plVar29 != (longlong *)0x0) {
          plVar26 = plVar29;
        }
        uVar21 = (**(code **)(*plVar26 + 8))();
        (*pcVar22)(uVar21,&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        goto LAB_14ab2d910;
      }
      pcVar22 = miro::RGBA_to_BC5;
    }
    break;
  case BGRA_UByte:
    local_250 = &param_3->DataStorage;
    (param_3->DataStorage).ImageFormat = RGBA_UByte;
    ImagePixelFormat(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if ((*param_1 == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bOutSuccess",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                           ,0x2ef,L""), bVar4)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    (param_3->DataStorage).ImageFormat = BGRA_UByte;
    iVar11 = FImage::GetLODCount(param_3);
    iVar10 = param_5 + param_7;
    if ((iVar11 < iVar10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                           ,0x5f,L""), bVar4)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    iVar11 = FImageDataStorage::GetNumBatchesLODRange(&param_3->DataStorage,0x8000,4,param_5,iVar10)
    ;
    this_00 = local_250;
    uVar28 = 0;
    if (0 < iVar11) {
      do {
        FImageDataStorage::GetBatchLODRange(this_00,&local_78,(int)uVar28,0x8000,4,param_5,iVar10);
        uVar23 = local_78.ArrayNum;
        iVar10 = (int)(uVar23 + ((int)uVar23 >> 0x1f & 3U)) >> 2;
        uVar23 = uVar23 & 0x80000003;
        if ((int)uVar23 < 0) {
          uVar23 = (uVar23 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar23 != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("DestView.Num() % DestElemSizeInBytes == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                               ,0x6c,L""), bVar4)) {
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        uVar27 = 0;
        if (0 < iVar10) {
          do {
            uVar1 = local_78.DataPtr[uVar27 * 4];
            local_78.DataPtr[uVar27 * 4] = local_78.DataPtr[uVar27 * 4 + 2];
            local_78.DataPtr[uVar27 * 4 + 2] = uVar1;
            uVar27 = uVar27 + 1;
          } while ((longlong)uVar27 < (longlong)iVar10);
        }
        uVar23 = (int)uVar28 + 1;
        uVar28 = (ulonglong)uVar23;
        iVar10 = (int)local_260;
      } while ((int)uVar23 < iVar11);
    }
    goto LAB_14ab2d910;
  case ASTC_4x4_RGB_LDR:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_ASTC4x4RGBL;
    }
    else if (EVar6 == RGBA_UByte) {
      pcVar22 = miro::RGBA_to_ASTC4x4RGBL;
    }
    else {
      if (EVar6 != L_UByte) {
        if (EVar6 != ASTC_4x4_RGBA_LDR) {
          if (4 < (byte)LogMutableCore._0_1_) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
          }
          ImagePixelFormat(this,&local_e8,param_2,param_4,RGBA_UByte,-1);
          ImagePixelFormatInternal::
          BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                    (param_3,local_e8.Object,param_5,param_6,param_7,param_2,
                     miro::RGBA_to_ASTC4x4RGBL);
          Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
          plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
          pcVar22 = *(code **)&this->ReleaseImage;
          plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
          if (plVar29 != (longlong *)0x0) {
            plVar26 = plVar29;
          }
          uVar21 = (**(code **)(*plVar26 + 8))();
          (*pcVar22)(uVar21,&local_e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.SharedReferenceCount.ReferenceController);
          goto LAB_14ab2d910;
        }
        goto LAB_14ab2d173;
      }
      pcVar22 = miro::L_to_ASTC4x4RGBL;
    }
    break;
  case ASTC_4x4_RGBA_LDR:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_ASTC4x4RGBAL;
    }
    else {
      if (EVar6 != RGBA_UByte) {
        if (EVar6 != ASTC_4x4_RGB_LDR) {
          if (4 < (byte)LogMutableCore._0_1_) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
          }
          ImagePixelFormat(this,&local_d8,param_2,param_4,RGBA_UByte,-1);
          ImagePixelFormatInternal::
          BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                    (param_3,local_d8.Object,param_5,param_6,param_7,param_2,
                     miro::RGBA_to_ASTC4x4RGBAL);
          Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
          plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
          pcVar22 = *(code **)&this->ReleaseImage;
          plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
          if (plVar29 != (longlong *)0x0) {
            plVar26 = plVar29;
          }
          uVar21 = (**(code **)(*plVar26 + 8))();
          (*pcVar22)(uVar21,&local_d8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
          goto LAB_14ab2d910;
        }
        pcVar22 = miro::ASTC4x4RGBL_to_ASTC4x4RGBAL;
        goto LAB_14ab2b512;
      }
      pcVar22 = miro::RGBA_to_ASTC4x4RGBAL;
    }
    break;
  case ASTC_4x4_RG_LDR:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_ASTC4x4RGL;
    }
    else {
      if (EVar6 != RGBA_UByte) {
        if (EVar6 != ASTC_4x4_RG_LDR) {
          if (4 < (byte)LogMutableCore._0_1_) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
          }
          ImagePixelFormat(this,&local_c8,param_2,param_4,RGBA_UByte,-1);
          ImagePixelFormatInternal::
          BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                    (param_3,local_c8.Object,param_5,param_6,param_7,param_2,
                     miro::RGBA_to_ASTC4x4RGL);
          Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
          plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
          pcVar22 = *(code **)&this->ReleaseImage;
          plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
          if (plVar29 != (longlong *)0x0) {
            plVar26 = plVar29;
          }
          uVar21 = (**(code **)(*plVar26 + 8))();
          (*pcVar22)(uVar21,&local_c8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c8.SharedReferenceCount.ReferenceController);
          goto LAB_14ab2d910;
        }
LAB_14ab2d173:
        pcVar22 = miro::ASTC4x4RGBAL_to_ASTC4x4RGBL;
        goto LAB_14ab2b512;
      }
      pcVar22 = miro::RGBA_to_ASTC4x4RGL;
    }
    break;
  case ASTC_8x8_RGB_LDR:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_ASTC8x8RGBL;
    }
    else {
      if (EVar6 != RGBA_UByte) {
        if (4 < (byte)LogMutableCore._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
        }
        ImagePixelFormat(this,&local_88,param_2,param_4,RGBA_UByte,-1);
        ImagePixelFormatInternal::
        BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                  (param_3,local_88.Object,param_5,param_6,param_7,param_2,miro::RGBA_to_ASTC8x8RGBL
                  );
        Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
        plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
        pcVar22 = *(code **)&this->ReleaseImage;
        plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
        if (plVar29 != (longlong *)0x0) {
          plVar26 = plVar29;
        }
        uVar21 = (**(code **)(*plVar26 + 8))();
        (*pcVar22)(uVar21,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        goto LAB_14ab2d910;
      }
      pcVar22 = miro::RGBA_to_ASTC8x8RGBL;
    }
    break;
  case ASTC_8x8_RGBA_LDR:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_ASTC8x8RGBAL;
    }
    else {
      if (EVar6 != RGBA_UByte) {
        if (4 < (byte)LogMutableCore._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
        }
        ImagePixelFormat(this,&local_248,param_2,param_4,RGBA_UByte,-1);
        ImagePixelFormatInternal::
        BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                  (param_3,local_248.Object,param_5,param_6,param_7,param_2,
                   miro::RGBA_to_ASTC8x8RGBAL);
        Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
        plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
        pcVar22 = *(code **)&this->ReleaseImage;
        plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
        if (plVar29 != (longlong *)0x0) {
          plVar26 = plVar29;
        }
        uVar21 = (**(code **)(*plVar26 + 8))();
        (*pcVar22)(uVar21,&local_248);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_248.SharedReferenceCount.ReferenceController);
        goto LAB_14ab2d910;
      }
      pcVar22 = miro::RGBA_to_ASTC8x8RGBAL;
    }
    break;
  case ASTC_8x8_RG_LDR:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_ASTC8x8RGL;
    }
    else {
      if (EVar6 != RGBA_UByte) {
        if (4 < (byte)LogMutableCore._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
        }
        ImagePixelFormat(this,&local_238,param_2,param_4,RGBA_UByte,-1);
        ImagePixelFormatInternal::
        BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                  (param_3,local_238.Object,param_5,param_6,param_7,param_2,miro::RGBA_to_ASTC8x8RGL
                  );
        Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
        plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
        pcVar22 = *(code **)&this->ReleaseImage;
        plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
        if (plVar29 != (longlong *)0x0) {
          plVar26 = plVar29;
        }
        uVar21 = (**(code **)(*plVar26 + 8))();
        (*pcVar22)(uVar21,&local_238);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_238.SharedReferenceCount.ReferenceController);
        goto LAB_14ab2d910;
      }
      pcVar22 = miro::RGBA_to_ASTC8x8RGL;
    }
    break;
  case ASTC_6x6_RGB_LDR:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_ASTC6x6RGBL;
    }
    else {
      if (EVar6 != RGBA_UByte) {
        if (4 < (byte)LogMutableCore._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
        }
        ImagePixelFormat(this,&local_b8,param_2,param_4,RGBA_UByte,-1);
        ImagePixelFormatInternal::
        BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                  (param_3,local_b8.Object,param_5,param_6,param_7,param_2,miro::RGBA_to_ASTC6x6RGBL
                  );
        Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
        plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
        pcVar22 = *(code **)&this->ReleaseImage;
        plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
        if (plVar29 != (longlong *)0x0) {
          plVar26 = plVar29;
        }
        uVar21 = (**(code **)(*plVar26 + 8))();
        (*pcVar22)(uVar21,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        goto LAB_14ab2d910;
      }
      pcVar22 = miro::RGBA_to_ASTC6x6RGBL;
    }
    break;
  case ASTC_6x6_RGBA_LDR:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_ASTC6x6RGBAL;
    }
    else {
      if (EVar6 != RGBA_UByte) {
        if (4 < (byte)LogMutableCore._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
        }
        ImagePixelFormat(this,&local_a8,param_2,param_4,RGBA_UByte,-1);
        ImagePixelFormatInternal::
        BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                  (param_3,local_a8.Object,param_5,param_6,param_7,param_2,
                   miro::RGBA_to_ASTC6x6RGBAL);
        Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
        plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
        pcVar22 = *(code **)&this->ReleaseImage;
        plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
        if (plVar29 != (longlong *)0x0) {
          plVar26 = plVar29;
        }
        uVar21 = (**(code **)(*plVar26 + 8))();
        (*pcVar22)(uVar21,&local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        goto LAB_14ab2d910;
      }
      pcVar22 = miro::RGBA_to_ASTC6x6RGBAL;
    }
    break;
  case ASTC_6x6_RG_LDR:
    EVar6 = FImage::GetFormat(param_4);
    if (EVar6 == RGB_UByte) {
      pcVar22 = miro::RGB_to_ASTC6x6RGL;
    }
    else {
      if (EVar6 != RGBA_UByte) {
        if (4 < (byte)LogMutableCore._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
        }
        ImagePixelFormat(this,&local_98,param_2,param_4,RGBA_UByte,-1);
        ImagePixelFormatInternal::
        BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
                  (param_3,local_98.Object,param_5,param_6,param_7,param_2,miro::RGBA_to_ASTC6x6RGL)
        ;
        Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
        plVar29 = *(longlong **)&(this->ReleaseImage).field_0x28;
        pcVar22 = *(code **)&this->ReleaseImage;
        plVar26 = (longlong *)&(this->ReleaseImage).field_0x10;
        if (plVar29 != (longlong *)0x0) {
          plVar26 = plVar29;
        }
        uVar21 = (**(code **)(*plVar26 + 8))();
        (*pcVar22)(uVar21,&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        goto LAB_14ab2d910;
      }
      pcVar22 = miro::RGBA_to_ASTC6x6RGL;
    }
  }
  ImagePixelFormatInternal::
  BlockCompressionLODRangeHelper<void_(__cdecl&)(unsigned_int,unsigned_int,unsigned_char_const_*,unsigned_char_*,int)>
            (param_3,param_4,param_5,param_6,param_7,param_2,pcVar22);
LAB_14ab2d910:
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ImageResizeLinear @ 14ab2fae0

void __thiscall
UE::Mutable::Private::FImageOperator::ImageResizeLinear
          (FImageOperator *this,FImage *param_1,int param_2,FImage *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  EImageFormat EVar7;
  EImageFormat EVar8;
  EImageFormat EVar9;
  bool bVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  undefined8 uVar16;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar17;
  uint uVar18;
  longlong *plVar19;
  FImage *pFVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  bool local_226;
  EImageFormat local_225;
  EImageFormat local_224;
  EImageFormat local_220 [8];
  EImageFormat local_218 [8];
  EImageFormat local_210 [8];
  EImageFormat local_208 [8];
  EImageFormat local_200 [8];
  ushort local_1f8;
  uint local_1f4;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_1e8;
  FImage *local_1d8;
  FSharedReferencer<1> local_1d0;
  ushort local_1c8;
  uint local_1c4;
  uint local_1c0;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_1b8;
  uint local_1a8 [2];
  undefined4 local_1a0 [2];
  undefined4 local_198 [2];
  uint local_190 [2];
  uint local_188 [2];
  undefined4 local_180 [2];
  undefined4 local_178 [2];
  uint local_170 [2];
  uint local_168 [2];
  undefined4 local_160 [2];
  undefined4 local_158 [2];
  uint local_150 [2];
  uint local_148 [2];
  undefined4 local_140 [2];
  undefined4 local_138 [2];
  uint local_130 [2];
  uint local_128 [2];
  undefined4 local_120 [2];
  undefined4 local_118 [2];
  uint local_110 [2];
  FImage *local_108;
  FSharedReferencer<1> FStack_100;
  FImage *local_f8;
  FSharedReferencer<1> local_f0;
  FImage *local_e8;
  FSharedReferencer<1> local_e0;
  FImage *local_d8;
  FSharedReferencer<1> local_d0;
  FImage *local_c8;
  FSharedReferencer<1> local_c0;
  FImage *local_b8;
  FSharedReferencer<1> local_b0;
  FImage *local_a8;
  FSharedReferencer<1> local_a0;
  FImage *local_98;
  undefined8 local_90;
  FSharedReferencer<1> local_88 [2];
  FImage *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_68;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_58 [2];
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1135,"Mutable_ImageResizeLinear",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageResize.cpp"
               ,0x46f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1135);
  }
  if (((param_3->Flags & 4) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(InBase->Flags & FImage::IF_CANNOT_BE_SCALED)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageResize.cpp"
                         ,0x471,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar11 = FImage::GetSizeY(param_3);
  local_1f8 = uVar11;
  uVar12 = FImage::GetSizeX(param_3);
  local_1c8 = uVar12;
  uVar13 = FImage::GetSizeY(param_1);
  uVar14 = FImage::GetSizeX(param_1);
  if (((uVar12 == uVar14) && (uVar11 == uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseSize != DestSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageResize.cpp"
                         ,0x477,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((uVar14 == 0) || (uVar13 == 0)) || ((uVar12 == 0 || (uVar11 == 0)))) goto LAB_14ab30584;
  local_1c4 = (uint)uVar11;
  if (((uVar12 < uVar14) || (uVar11 < uVar13)) ||
     (((uint)uVar14 + (uint)uVar14 <= (uint)uVar12 || ((uint)uVar13 + (uint)uVar13 <= local_1c4))))
  {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  local_1c0 = (uint)uVar13;
  local_1f4 = (uint)uVar14;
  EVar7 = FImage::GetFormat(param_3);
  EVar8 = GetUncompressedFormat(EVar7);
  EVar9 = FImage::GetFormat(param_3);
  bVar10 = IsBlockCompressedFormat(EVar9);
  if ((bVar6) &&
     (((EVar7 == EVar8 || (bVar10)) && (bEnableImageResizeMemoryOptimizations != false)))) {
    EVar7 = FImage::GetFormat(param_3);
    EVar7 = GetUncompressedFormat(EVar7);
    EVar8 = FImage::GetFormat(param_1);
    local_108 = (FImage *)0x0;
    FStack_100.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar20 = param_1;
    if (EVar8 != EVar7) {
      local_110[0] = local_1c0;
      local_1a8[0] = local_1f4;
      local_120[0] = 0;
      local_118[0] = 1;
      local_220[0] = EVar7;
      Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
      plVar3 = *(longlong **)&(this->CreateImage).field_0x28;
      pcVar4 = *(code **)&this->CreateImage;
      plVar19 = (longlong *)&(this->CreateImage).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar19 = plVar3;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar4)(&local_f8,uVar16,local_1a8,local_110,local_118,local_220,local_120);
      local_108 = local_f8;
      local_f8 = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_100,&local_f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f0.ReferenceController);
      pFVar20 = local_108;
    }
    if (bEnableVectorImplementationForSmallResizes == false) {
      Private::`anonymous_namespace'::ImageResizeLinearDownByLessThanTwo<0>(pFVar20,param_3);
    }
    else {
      Private::`anonymous_namespace'::ImageResizeLinearDownByLessThanTwo<1>(pFVar20,param_3);
    }
    if (EVar8 != EVar7) {
      local_226 = false;
      ImagePixelFormat(this,&local_226,param_2,param_1,pFVar20,-1);
      if ((local_226 == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("bSuccess",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageResize.cpp"
                             ,0x4a4,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar3 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar4 = *(code **)&this->ReleaseImage;
      plVar19 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar19 = plVar3;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar4)(uVar16,&local_108);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_100.ReferenceController);
  }
  else {
    local_1b8.Object = (FImage *)0x0;
    local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    EVar7 = FImage::GetFormat(param_3);
    local_224 = GetUncompressedFormat(EVar7);
    pFVar20 = param_3;
    if (EVar7 != local_224) {
      pTVar17 = ImagePixelFormat(this,&local_68,param_2,param_3,local_224,-1);
      if (&local_1b8 != pTVar17) {
        local_1b8.Object = pTVar17->Object;
        pTVar17->Object = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1b8.SharedReferenceCount,&pTVar17->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      pFVar20 = local_1b8.Object;
    }
    local_225 = FImage::GetFormat(pFVar20);
    local_1d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (local_1c8 < uVar14) {
      local_190[0] = local_1c4;
      local_188[0] = local_1f4;
      local_1a0[0] = 0;
      local_198[0] = 1;
      local_218[0] = local_225;
      Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
      plVar3 = *(longlong **)&(this->CreateImage).field_0x28;
      pcVar4 = *(code **)&this->CreateImage;
      plVar19 = (longlong *)&(this->CreateImage).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar19 = plVar3;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar4)(&local_e8,uVar16,local_188,local_190,local_198,local_218,local_1a0);
      local_1d8 = local_e8;
      local_e8 = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1d0,&local_e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.ReferenceController);
      ImageMagnifyX(local_1d8,pFVar20);
    }
    else if (uVar14 < local_1c8) {
      local_170[0] = local_1c4;
      local_180[0] = 0;
      local_178[0] = 1;
      local_210[0] = local_225;
      local_168[0] = (uint)uVar14;
      Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
      plVar3 = *(longlong **)&(this->CreateImage).field_0x28;
      pcVar4 = *(code **)&this->CreateImage;
      plVar19 = (longlong *)&(this->CreateImage).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar19 = plVar3;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar4)(&local_d8,uVar16,local_168,local_170,local_178,local_210,local_180);
      local_1d8 = local_d8;
      local_d8 = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1d0,&local_d0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d0.ReferenceController);
      ImageMinifyX(local_1d8,pFVar20);
    }
    else {
      local_98 = pFVar20;
      Core::Private::Function::CheckCallable(*(void **)&this->CloneImage);
      pcVar4 = *(code **)&this->CloneImage;
      plVar3 = *(longlong **)&(this->CloneImage).field_0x28;
      plVar19 = (longlong *)&(this->CloneImage).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar19 = plVar3;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar4)(&local_c8,uVar16,&local_98);
      local_1d8 = local_c8;
      local_c8 = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1d0,&local_c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.ReferenceController);
    }
    if (EVar7 == local_224) {
      if (local_1b8.Object != (FImage *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(SourceFormat == UncompressedFormat) || !BaseReformat",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageResize.cpp"
                           ,0x4cb,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_14ab300e7;
      }
    }
    else {
LAB_14ab300e7:
      if (local_1b8.Object != (FImage *)0x0) {
        if ((pFVar20 != local_1b8.Object) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Base == BaseReformat.Get()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageResize.cpp"
                               ,0x4ce,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
        plVar3 = *(longlong **)&(this->ReleaseImage).field_0x28;
        pcVar4 = *(code **)&this->ReleaseImage;
        plVar19 = (longlong *)&(this->ReleaseImage).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar19 = plVar3;
        }
        uVar16 = (**(code **)(*plVar19 + 8))();
        (*pcVar4)(uVar16,&local_1b8);
        FVar5.ReferenceController = local_1b8.SharedReferenceCount.ReferenceController;
        local_1b8.Object = (FImage *)0x0;
        if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          LOCK();
          paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(FVar5.ReferenceController)->_padding_)();
            LOCK();
            paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1)
              ;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
    }
    local_1e8.Object = (FImage *)0x0;
    local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (local_1f8 < uVar13) {
      local_150[0] = local_1c0;
      local_148[0] = local_1f4;
      local_208[0] = local_225;
      local_160[0] = 0;
      local_158[0] = 1;
      Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
      plVar3 = *(longlong **)&(this->CreateImage).field_0x28;
      pcVar4 = *(code **)&this->CreateImage;
      plVar19 = (longlong *)&(this->CreateImage).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar19 = plVar3;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar4)(&local_b8,uVar16,local_148,local_150,local_158,local_208,local_160);
      local_1e8.Object = local_b8;
      local_b8 = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_1e8.SharedReferenceCount,&local_b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.ReferenceController);
      ImageMagnifyY(local_1e8.Object,local_1d8);
LAB_14ab3030a:
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar3 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar4 = *(code **)&this->ReleaseImage;
      plVar19 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar19 = plVar3;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar4)(uVar16,&local_1d8);
    }
    else {
      if (uVar13 < local_1f8) {
        local_128[0] = local_1f4;
        local_130[0] = (uint)uVar13;
        local_200[0] = local_225;
        local_140[0] = 0;
        local_138[0] = 1;
        Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
        plVar3 = *(longlong **)&(this->CreateImage).field_0x28;
        pcVar4 = *(code **)&this->CreateImage;
        plVar19 = (longlong *)&(this->CreateImage).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar19 = plVar3;
        }
        uVar16 = (**(code **)(*plVar19 + 8))();
        (*pcVar4)(&local_a8,uVar16,local_128,local_130,local_138,local_200,local_140);
        local_1e8.Object = local_a8;
        local_a8 = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1e8.SharedReferenceCount,&local_a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0.ReferenceController);
        ImageMinifyY(local_1e8.Object,local_1d8);
        goto LAB_14ab3030a;
      }
      if (local_1d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1d0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_1d0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1e8.Object = local_1d8;
      local_1e8.SharedReferenceCount.ReferenceController = local_1d0.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    local_88[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1d8 = (FImage *)0x0;
    local_90 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1d0,local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88[0].ReferenceController);
    if (EVar7 != local_224) {
      local_78 = local_1e8.Object;
      pTStack_70 = local_1e8.SharedReferenceCount.ReferenceController;
      if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar17 = ImagePixelFormat(this,local_58,param_2,local_1e8.Object,EVar7,-1);
      if (&local_1e8 != pTVar17) {
        local_1e8.Object = pTVar17->Object;
        pTVar17->Object = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1e8.SharedReferenceCount,&pTVar17->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58[0].SharedReferenceCount.ReferenceController);
      Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
      plVar3 = *(longlong **)&(this->ReleaseImage).field_0x28;
      pcVar4 = *(code **)&this->ReleaseImage;
      plVar19 = (longlong *)&(this->ReleaseImage).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar19 = plVar3;
      }
      uVar16 = (**(code **)(*plVar19 + 8))();
      (*pcVar4)(uVar16,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_70);
    }
    FImage::CopyMove(param_1,local_1e8.Object);
    Core::Private::Function::CheckCallable(*(void **)&this->ReleaseImage);
    plVar3 = *(longlong **)&(this->ReleaseImage).field_0x28;
    pcVar4 = *(code **)&this->ReleaseImage;
    plVar19 = (longlong *)&(this->ReleaseImage).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar19 = plVar3;
    }
    uVar16 = (**(code **)(*plVar19 + 8))(plVar19);
    (*pcVar4)(uVar16,&local_1e8);
    FVar5.ReferenceController = local_1e8.SharedReferenceCount.ReferenceController;
    local_1e8.Object = (FImage *)0x0;
    if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(FVar5.ReferenceController)->_padding_)();
        LOCK();
        paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  if ((param_3->Flags & 8) != 0) {
    param_1->Flags = param_1->Flags | 8;
    uVar15 = (uint)local_1f8;
    auVar22 = ZEXT416((uint)((float)param_3->RelevancyMinY * ((float)uVar13 / (float)uVar15)));
    auVar22 = roundps(auVar22,auVar22,1);
    param_1->RelevancyMinY = (ushort)(int)auVar22._0_4_;
    uVar11 = FImage::GetSizeY(param_1);
    uVar18 = uVar11 - 1;
    auVar22 = ZEXT416((uint)((float)param_3->RelevancyMaxY * ((float)uVar13 / (float)uVar15)));
    auVar22 = roundps(auVar22,auVar22,2);
    if ((int)auVar22._0_4_ < (int)uVar18) {
      uVar18 = (int)auVar22._0_4_ & 0xffff;
    }
    param_1->RelevancyMaxY = (ushort)uVar18;
  }
LAB_14ab30584:
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ImageSwizzle @ 14ab305e0

TSharedPtr<UE::Mutable::Private::FImage,1> * __thiscall
UE::Mutable::Private::FImageOperator::ImageSwizzle
          (FImageOperator *this,TSharedPtr<UE::Mutable::Private::FImage,1> *__return_storage_ptr__,
          EImageFormat param_1,TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_2,
          uchar *param_3)

{
  TIntVector2<unsigned_short> TVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar5;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar6;
  TIntVector2<unsigned_short>_u_0 *pTVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  EImageFormat local_68 [8];
  undefined4 local_60 [2];
  int local_58 [2];
  uint local_50 [2];
  uint local_48 [2];
  FImage *local_40;
  TReferenceControllerBase<1> *local_38;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId199,"Mutable_ImageSwizzle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageSwizzle.cpp"
               ,199);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId199);
  }
  uVar9 = 0;
  pTVar5 = param_2;
  uVar12 = uVar9;
  do {
    iVar11 = (int)uVar12;
    if (pTVar5->Object != (FImage *)0x0) {
      if (iVar11 < 0) {
        __return_storage_ptr__->Object = (FImage *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar5 = param_2 + iVar11;
        if ((pTVar5->Object == (FImage *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar3)();
          return pTVar6;
        }
        pTVar7 = &FImage::GetSize(pTVar5->Object)->field0_0x0;
        TVar1.field0_0x0 = *pTVar7;
        if ((pTVar5->Object == (FImage *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar3)();
          return pTVar6;
        }
        local_60[0] = 1;
        local_68[0] = param_1;
        local_58[0] = FImage::GetLODCount(pTVar5->Object);
        local_48[0] = (uint)TVar1.field0_0x0 & 0xffff;
        local_50[0] = (uint)TVar1.field0_0x0 >> 0x10;
        Core::Private::Function::CheckCallable(*(void **)&this->CreateImage);
        plVar2 = *(longlong **)&(this->CreateImage).field_0x28;
        pcVar3 = *(code **)&this->CreateImage;
        plVar10 = (longlong *)&(this->CreateImage).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = plVar2;
        }
        uVar8 = (**(code **)(*plVar10 + 8))();
        (*pcVar3)(&local_40,uVar8,local_48,local_50,local_58,local_68,local_60);
        Private::ImageSwizzle(local_40,param_2,param_3);
        __return_storage_ptr__->Object = local_40;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_38;
        local_38 = (TReferenceControllerBase<1> *)0x0;
        local_40 = (FImage *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      goto LAB_14ab307d8;
    }
    uVar12 = (ulonglong)(iVar11 + 1);
    uVar9 = uVar9 + 1;
    pTVar5 = pTVar5 + 1;
  } while ((longlong)uVar9 < 4);
  __return_storage_ptr__->Object = (FImage *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14ab307d8:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

