// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 35

// Construct<FMovieSceneMediaSectionTemplate> @ 14ea62750

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneMediaSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneMediaSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x70));
  *(undefined1 *)((longlong)param_1 + 0x198) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  return;
}

// ConstructForTests<FMovieSceneMediaSectionTemplate> @ 14ea62760

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneMediaSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneMediaSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x70));
  *(undefined1 *)((longlong)param_1 + 0x198) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  return;
}

// Destruct<FMovieSceneMediaSectionTemplate> @ 14ea62770

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneMediaSectionTemplate>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x70));
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Copy<FMovieSceneMediaSectionTemplate> @ 14ea627a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneMediaSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    FMovieSceneMediaSectionParams::operator=
              ((FMovieSceneMediaSectionParams *)((longlong)param_1 + 0x20),
               (FMovieSceneMediaSectionParams *)((longlong)param_2 + 0x20));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x1a0) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x1a0));
    }
    puVar1 = (undefined8 *)((longlong)param_2 + 0x1a0);
    param_2 = (void *)((longlong)param_2 + 0x1a8);
    *(undefined8 *)((longlong)param_1 + 0x1a0) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x1a8);
  }
  return true;
}

// Construct<FMovieSceneMediaSectionParams> @ 14ea62860

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneMediaSectionParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x50));
  *(undefined1 *)((longlong)param_1 + 0x178) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3e4ccccd;
  return;
}

// ConstructForTests<FMovieSceneMediaSectionParams> @ 14ea628c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneMediaSectionParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x50));
  *(undefined1 *)((longlong)param_1 + 0x178) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3e4ccccd;
  return;
}

// Destruct<FMovieSceneMediaSectionParams> @ 14ea62920

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneMediaSectionParams>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x50));
  return;
}

// Copy<FMovieSceneMediaSectionParams> @ 14ea62930

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneMediaSectionParams>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar3[1] = puVar1[1];
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(puVar1 + 5);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[6] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[6]);
      }
      puVar3[6] = puVar1[6];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[7] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[7]);
      }
      puVar3[7] = puVar1[7];
      *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(puVar1 + 8);
      *(undefined4 *)((longlong)puVar3 + 0x44) = *(undefined4 *)((longlong)puVar1 + 0x44);
      *(undefined1 *)(puVar3 + 9) = *(undefined1 *)(puVar1 + 9);
      *(undefined4 *)((longlong)puVar3 + 0x4c) = *(undefined4 *)((longlong)puVar1 + 0x4c);
      FMovieSceneFloatChannel::operator=
                ((FMovieSceneFloatChannel *)(puVar3 + 10),(FMovieSceneFloatChannel *)(puVar1 + 10));
      puVar3[0x2f] = puVar1[0x2f];
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0x30;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneMediaPlayerPropertySectionTemplate> @ 14ea62b70

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneMediaPlayerPropertySectionTemplate>(void *param_1)

{
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate(param_1);
  *(undefined ***)param_1 = &___7FMovieSceneMediaPlayerPropertySectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  return;
}

// ConstructForTests<FMovieSceneMediaPlayerPropertySectionTemplate> @ 14ea62ba0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneMediaPlayerPropertySectionTemplate>
          (void *param_1)

{
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate(param_1);
  *(undefined ***)param_1 = &___7FMovieSceneMediaPlayerPropertySectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  return;
}

// Destruct<FMovieSceneMediaPlayerPropertySectionTemplate> @ 14ea62bd0

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneMediaPlayerPropertySectionTemplate>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMovieScenePropertySectionTemplate__6B_;
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Copy<FMovieSceneMediaPlayerPropertySectionTemplate> @ 14ea63bc0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneMediaPlayerPropertySectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  void *pvVar3;
  void *pvVar4;
  
  if (param_3 != 0) {
    pvVar3 = param_2;
    pvVar4 = param_1;
    do {
      *(undefined1 *)((longlong)pvVar4 + 8) = *(undefined1 *)((longlong)pvVar3 + 8);
      *(undefined1 *)((longlong)pvVar4 + 0x10) = *(undefined1 *)((longlong)pvVar3 + 0x10);
      *(undefined8 *)((longlong)pvVar4 + 0x14) = *(undefined8 *)((longlong)pvVar3 + 0x14);
      *(undefined8 *)((longlong)pvVar4 + 0x20) = *(undefined8 *)((longlong)pvVar3 + 0x20);
      if (pvVar4 != (void *)(((longlong)param_2 - (longlong)param_1) + (longlong)pvVar4)) {
        iVar2 = *(int *)((longlong)pvVar3 + 0x30);
        piVar1 = (int *)((longlong)pvVar4 + 0x34);
        _Src = *(void **)((longlong)pvVar3 + 0x28);
        *(int *)((longlong)pvVar4 + 0x30) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar2,*piVar1,(ForAnyElementType *)((longlong)pvVar4 + 0x28),iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(((ForAnyElementType *)((longlong)pvVar4 + 0x28))->Data,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar3 + 0x38) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar3 + 0x38));
      }
      *(undefined8 *)((longlong)pvVar4 + 0x38) = *(undefined8 *)((longlong)pvVar3 + 0x38);
      *(undefined4 *)((longlong)pvVar4 + 0x40) = *(undefined4 *)((longlong)pvVar3 + 0x40);
      *(undefined1 *)((longlong)pvVar4 + 0x44) = *(undefined1 *)((longlong)pvVar3 + 0x44);
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0x48);
      pvVar4 = (void *)((longlong)pvVar4 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FMovieSceneMediaData,FMovieSceneMediaData_*_&> @ 14ea656f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMovieSceneMediaData * __cdecl
UE::Core::Private::DereferenceIfNecessary<FMovieSceneMediaData,FMovieSceneMediaData_*_&>
          (FMovieSceneMediaData **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FMovieSceneMediaPlayerStore,FMovieSceneMediaPlayerStore_*_&> @ 14ea65710

FMovieSceneMediaPlayerStore * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FMovieSceneMediaPlayerStore,FMovieSceneMediaPlayerStore_*_&>
          (FMovieSceneMediaPlayerStore **param_1)

{
  return *param_1;
}

// AdjustPlaybackTimeRange @ 14ea68cc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TRange<FTimespan> * __cdecl
UE::MovieSceneMediaPlayerUtils::AdjustPlaybackTimeRange
          (TRange<FTimespan> *__return_storage_ptr__,TRange<FTimespan> *param_1,
          UMediaPlayer *param_2,FTimespan *param_3)

{
  TRangeBound<FTimespan> *pTVar1;
  uchar uVar2;
  code *pcVar3;
  long64 lVar4;
  long64 lVar5;
  undefined7 uVar6;
  TEnumAsByte<ERangeBoundTypes::Type> TVar7;
  undefined7 uVar8;
  bool bVar9;
  TRange<FTimespan> *pTVar10;
  TRangeBound<FTimespan> *pTVar11;
  FTimespan *pFVar12;
  FTimespan *pFVar13;
  longlong lVar14;
  longlong lVar15;
  TRange<FTimespan> local_b8;
  TEnumAsByte<ERangeBoundTypes::Type> local_98;
  undefined7 uStack_97;
  longlong lStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  longlong lStack_80;
  uint7 uStack_77;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint7 uStack_57;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TRange<FTimespan> local_38;
  
  bVar9 = UMediaPlayer::SupportsPlaybackTimeRange(param_2);
  if ((!bVar9) || (bVar9 = TRange<FTimespan>::IsEmpty(param_1), bVar9)) {
    uVar6 = *(undefined7 *)&(param_1->LowerBound).field_0x1;
    lVar4 = (param_1->LowerBound).Value.Ticks;
    TVar7.Value = (param_1->UpperBound).Type.Value;
    uVar8 = *(undefined7 *)&(param_1->UpperBound).field_0x1;
    lVar5 = (param_1->UpperBound).Value.Ticks;
    (__return_storage_ptr__->LowerBound).Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)(param_1->LowerBound).Type.Value;
    *(undefined7 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar6;
    (__return_storage_ptr__->LowerBound).Value.Ticks = lVar4;
    (__return_storage_ptr__->UpperBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)TVar7.Value;
    *(undefined7 *)&(__return_storage_ptr__->UpperBound).field_0x1 = uVar8;
    (__return_storage_ptr__->UpperBound).Value.Ticks = lVar5;
    return __return_storage_ptr__;
  }
  UMediaPlayer::GetPlaybackTimeRange(param_2,&local_b8,Absolute);
  lVar15 = (longlong)((double)param_3->Ticks * __real_3fe0000000000000);
  if ((local_b8.UpperBound.Type.Value == '\x02') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TRange<FTimespan> *)(*pcVar3)();
    return pTVar10;
  }
  lVar14 = CONCAT44(local_b8.UpperBound.Value.Ticks._4_4_,
                    (undefined4)local_b8.UpperBound.Value.Ticks) + lVar15;
  local_98.Value = '\x01';
  lStack_90 = lVar14;
  if ((local_b8.LowerBound.Type.Value == '\x02') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TRange<FTimespan> *)(*pcVar3)();
    return pTVar10;
  }
  uVar2 = (param_1->LowerBound).Type.Value;
  lStack_80 = local_b8.LowerBound.Value.Ticks - lVar15;
  local_88 = 1;
  local_38.UpperBound.Type.Value = local_98.Value;
  local_38.UpperBound._1_7_ = uStack_97;
  local_38.UpperBound.Value.Ticks = lStack_90;
  local_38.LowerBound.Type.Value = '\x01';
  local_38.LowerBound._1_7_ = uStack_87;
  local_38.LowerBound.Value.Ticks = lStack_80;
  if (uVar2 != '\x02') {
    if ((param_1->LowerBound).Value.Ticks < lStack_80) {
      pTVar10 = param_1;
      if (uVar2 != '\x01') goto LAB_14ea68dd9;
    }
    else {
      pTVar10 = &local_38;
    }
    if ((pTVar10->LowerBound).Value.Ticks == lStack_80) {
      uVar2 = (param_1->UpperBound).Type.Value;
      pTVar1 = &param_1->UpperBound;
      if (uVar2 == '\x02') {
LAB_14ea68e38:
        pTVar11 = pTVar1;
        if (uVar2 != '\x01') goto LAB_14ea68dd9;
      }
      else {
        lVar15 = (param_1->UpperBound).Value.Ticks;
        if (lVar15 < lVar14) {
          pTVar11 = &local_38.UpperBound;
        }
        else {
          if (lVar14 < lVar15) goto LAB_14ea68e38;
          pTVar11 = &local_38.UpperBound;
        }
      }
      if ((pTVar11->Value).Ticks == lVar14) {
        bVar9 = TRange<FTimespan>::IsEmpty(param_1);
        if (bVar9) {
          local_68 = local_68 & 0xffffff00;
          uStack_60 = 0;
          uStack_5c = 0;
          *(ulonglong *)&__return_storage_ptr__->LowerBound = (ulonglong)uStack_77 << 8;
          (__return_storage_ptr__->LowerBound).Value.Ticks = 0;
          local_b8.UpperBound._0_4_ = local_68;
          local_b8.UpperBound._4_4_ = uStack_64;
          local_b8.UpperBound.Value.Ticks._0_4_ = uStack_60;
          local_b8.UpperBound.Value.Ticks._4_4_ = uStack_5c;
          goto LAB_14ea68de5;
        }
        if ((local_b8.LowerBound.Type.Value == '\x02') || (local_b8.UpperBound.Type.Value == '\x02')
           ) {
LAB_14ea68f3e:
          uVar2 = (pTVar1->Type).Value;
          if (uVar2 == '\x02') {
            pTVar11 = &local_b8.UpperBound;
          }
          else {
            pTVar11 = pTVar1;
            if (local_b8.UpperBound.Type.Value != '\x02') {
              lVar15 = (param_1->UpperBound).Value.Ticks;
              if (CONCAT44(local_b8.UpperBound.Value.Ticks._4_4_,
                           (undefined4)local_b8.UpperBound.Value.Ticks) <= lVar15) {
                if (CONCAT44(local_b8.UpperBound.Value.Ticks._4_4_,
                             (undefined4)local_b8.UpperBound.Value.Ticks) < lVar15) {
                  pTVar11 = &local_b8.UpperBound;
                }
                else {
                  pTVar11 = &local_b8.UpperBound;
                  if (uVar2 == '\0') {
                    pTVar11 = pTVar1;
                  }
                }
              }
            }
          }
          uVar2 = (param_1->LowerBound).Type.Value;
          if (uVar2 != '\x02') {
            pTVar10 = param_1;
            if ((local_b8.LowerBound.Type.Value == '\x02') ||
               (lVar15 = (param_1->LowerBound).Value.Ticks, local_b8.LowerBound.Value.Ticks < lVar15
               )) goto LAB_14ea68fa0;
            if (local_b8.LowerBound.Value.Ticks <= lVar15) {
              pTVar10 = &local_b8;
              if (uVar2 == '\0') {
                pTVar10 = param_1;
              }
              goto LAB_14ea68fa0;
            }
          }
          pTVar10 = &local_b8;
LAB_14ea68fa0:
          uVar6 = *(undefined7 *)&(pTVar10->LowerBound).field_0x1;
          lVar4 = (pTVar10->LowerBound).Value.Ticks;
          (__return_storage_ptr__->LowerBound).Type =
               (TEnumAsByte<ERangeBoundTypes::Type>)(pTVar10->LowerBound).Type.Value;
          *(undefined7 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar6;
          (__return_storage_ptr__->LowerBound).Value.Ticks = lVar4;
          uVar6 = *(undefined7 *)&pTVar11->field_0x1;
          lVar4 = (pTVar11->Value).Ticks;
          (__return_storage_ptr__->UpperBound).Type =
               (TEnumAsByte<ERangeBoundTypes::Type>)(pTVar11->Type).Value;
          *(undefined7 *)&(__return_storage_ptr__->UpperBound).field_0x1 = uVar6;
          (__return_storage_ptr__->UpperBound).Value.Ticks = lVar4;
          return __return_storage_ptr__;
        }
        if ((local_b8.LowerBound.Type.Value == '\x02') &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TRange<FTimespan> *)(*pcVar3)();
          return pTVar10;
        }
        if ((local_b8.UpperBound.Type.Value == '\x02') &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TRange<FTimespan> *)(*pcVar3)();
          return pTVar10;
        }
        if (local_b8.LowerBound.Value.Ticks <=
            CONCAT44(local_b8.UpperBound.Value.Ticks._4_4_,
                     (undefined4)local_b8.UpperBound.Value.Ticks)) {
          pFVar12 = TRangeBound<FTimespan>::GetValue(&local_b8.LowerBound);
          pFVar13 = TRangeBound<FTimespan>::GetValue(&local_b8.UpperBound);
          if ((pFVar12->Ticks != pFVar13->Ticks) ||
             ((local_b8.LowerBound.Type.Value != '\0' && (local_b8.UpperBound.Type.Value != '\0'))))
          goto LAB_14ea68f3e;
        }
        local_48 = local_48 & 0xffffff00;
        uStack_40 = 0;
        uStack_3c = 0;
        *(ulonglong *)&__return_storage_ptr__->LowerBound = (ulonglong)uStack_57 << 8;
        (__return_storage_ptr__->LowerBound).Value.Ticks = 0;
        local_b8.UpperBound._0_4_ = local_48;
        local_b8.UpperBound._4_4_ = uStack_44;
        local_b8.UpperBound.Value.Ticks._0_4_ = uStack_40;
        local_b8.UpperBound.Value.Ticks._4_4_ = uStack_3c;
        goto LAB_14ea68de5;
      }
    }
  }
LAB_14ea68dd9:
  *(ulonglong *)&__return_storage_ptr__->LowerBound =
       CONCAT71(local_b8.LowerBound._1_7_,local_b8.LowerBound.Type.Value);
  (__return_storage_ptr__->LowerBound).Value.Ticks = local_b8.LowerBound.Value.Ticks;
LAB_14ea68de5:
  *(undefined4 *)&__return_storage_ptr__->UpperBound = local_b8.UpperBound._0_4_;
  *(undefined4 *)&(__return_storage_ptr__->UpperBound).field_0x4 = local_b8.UpperBound._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->UpperBound).Value.Ticks =
       (undefined4)local_b8.UpperBound.Value.Ticks;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->UpperBound).Value.Ticks + 4) =
       local_b8.UpperBound.Value.Ticks._4_4_;
  return __return_storage_ptr__;
}

// CalculateSectionPlaybackTimeRange @ 14ea690a0

/* WARNING: Removing unreachable block (ram,0x00014ea69335) */
/* WARNING: Removing unreachable block (ram,0x00014ea6935a) */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TRange<FTimespan> * __cdecl
UE::MediaSectionBaseMediaUtils::CalculateSectionPlaybackTimeRange
          (TRange<FTimespan> *__return_storage_ptr__,FMovieSceneMediaSectionParams *param_1,
          UMovieSceneMediaSection *param_2,FFrameRate *param_3)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  TEnumAsByte<ERangeBoundTypes::Type> TVar4;
  undefined3 uVar5;
  bool bVar6;
  FFrameNumber FVar7;
  uint uVar8;
  ulonglong uVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  TRange<FTimespan> *pTVar12;
  FFrameNumber *pFVar13;
  longlong lVar14;
  char cVar15;
  TRangeBound<FFrameNumber> *pTVar16;
  TRangeBound<FFrameNumber> TVar17;
  longlong lVar18;
  FFrameNumber FStackX_c;
  undefined4 local_res10;
  undefined4 local_res18;
  uint local_res20;
  TRangeBound<FFrameNumber> local_b8;
  TRangeBound<FFrameNumber> local_b0;
  TRangeBound<FFrameNumber> local_a8;
  TRangeBound<FFrameNumber> TStack_a0;
  uint local_98;
  undefined4 uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  int iStack_74;
  undefined8 local_70;
  undefined7 uStack_67;
  undefined7 uStack_57;
  
  lVar14 = param_2->_padding_;
  uVar2 = param_2->_padding_;
  if ((char)lVar14 == '\0') {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    lVar14 = CONCAT44((int)((ulonglong)lVar14 >> 0x20) + 1,local_res10);
  }
  uVar9 = uVar2;
  if ((char)uVar2 == '\x01') {
    local_70._4_4_ = (int)(uVar2 >> 0x20);
    uVar9 = CONCAT44(local_70._4_4_ + 1,local_res18) & 0xffffffffffffff00;
  }
  local_b8._0_4_ = SUB84(lVar14,0);
  local_b8.Value.Value = (int)((ulonglong)lVar14 >> 0x20);
  local_b0._0_4_ = SUB84(uVar9,0);
  local_b0.Value.Value = (int)(uVar9 >> 0x20);
  local_70 = uVar2;
  pUVar10 = Z_Construct_UClass_UMovieSceneTrack_NoRegister();
  pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar10);
  lVar14 = 0;
  if (pUVar11 != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar11,pUVar10);
    if (pUVar11 != (UObject *)0x0) {
      TVar4.Value = pUVar11[7].field_0x18;
      uVar5 = *(undefined3 *)&pUVar11[7].field_0x19;
      iVar1 = *(int *)&pUVar11[7].field_0x1c;
      local_a8._0_4_ = *(uint *)&pUVar11[7].field_0x10;
      local_a8.Value.Value = *(int *)&pUVar11[7].field_0x14;
      TStack_a0.Type.Value = TVar4.Value;
      TStack_a0._1_3_ = uVar5;
      TStack_a0.Value.Value = iVar1;
      cVar15 = (char)*(uint *)&pUVar11[7].field_0x10;
      if (cVar15 == '\x02') {
LAB_14ea691fa:
        TVar4.Value = TStack_a0.Type.Value;
      }
      else if (TVar4.Value != '\x02') {
        if ((cVar15 == '\x02') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TRange<FTimespan> *)(*pcVar3)();
          return pTVar12;
        }
        if (local_a8.Value.Value <= iVar1) {
          pFVar13 = TRangeBound<FFrameNumber>::GetValue(&TStack_a0);
          iVar1 = pFVar13->Value;
          pFVar13 = TRangeBound<FFrameNumber>::GetValue(&local_a8);
          if (pFVar13->Value != iVar1) goto LAB_14ea691fa;
          if ((local_a8.Type.Value != '\0') &&
             (TVar4.Value = TStack_a0.Type.Value, TVar4.Value != '\0')) goto LAB_14ea691fe;
        }
        local_res20 = local_res20 & 0xffffff00;
        TVar17.Type.Value = '\0';
        TVar17._1_3_ = 0;
        TVar17.Value.Value = 0;
        local_98 = local_98 & 0xffffff00;
        uStack_94 = 0;
        local_b8._0_4_ = local_98;
        local_b8.Value.Value = 0;
        local_b0._0_4_ = local_res20;
        local_b0.Value.Value = 0;
        goto LAB_14ea6931f;
      }
LAB_14ea691fe:
      FVar7.Value = local_b0.Value.Value;
      if ((local_b8.Type.Value != '\x02') && (local_b0.Type.Value != '\x02')) {
        if ((local_b8.Type.Value == '\x02') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TRange<FTimespan> *)(*pcVar3)();
          return pTVar12;
        }
        if (local_b8.Value.Value <= FVar7.Value) {
          pFVar13 = TRangeBound<FFrameNumber>::GetValue(&local_b0);
          iVar1 = pFVar13->Value;
          pFVar13 = TRangeBound<FFrameNumber>::GetValue(&local_b8);
          if ((pFVar13->Value != iVar1) ||
             ((local_b8.Type.Value != '\0' && (local_b0.Type.Value != '\0')))) {
            TVar4.Value = TStack_a0.Type.Value;
            goto LAB_14ea6926c;
          }
        }
        local_90 = local_90 & 0xffffff00;
        uStack_8c = 0;
        TVar17.Type.Value = '\0';
        TVar17._1_3_ = 0;
        TVar17.Value.Value = 0;
        local_88 = local_88 & 0xffffff00;
        uStack_84 = 0;
        local_b8._0_4_ = local_88;
        local_b8.Value.Value = 0;
        local_b0._0_4_ = local_90;
        local_b0.Value.Value = 0;
        goto LAB_14ea6931f;
      }
LAB_14ea6926c:
      if (TVar4.Value == '\x02') {
        pTVar16 = &local_b0;
      }
      else if (local_b0.Type.Value == '\x02') {
        pTVar16 = &TStack_a0;
      }
      else if (TStack_a0.Value.Value < local_b0.Value.Value) {
        pTVar16 = &TStack_a0;
      }
      else if (local_b0.Value.Value < TStack_a0.Value.Value) {
        pTVar16 = &local_b0;
      }
      else {
        pTVar16 = &TStack_a0;
        if (TVar4.Value != '\0') {
          pTVar16 = &local_b0;
        }
      }
      if (local_a8.Type.Value != '\x02') {
        if ((char)local_b8._0_4_ == '\x02') {
          TVar17 = *pTVar16;
          local_b0._0_4_ = TVar17._0_4_;
          local_b0.Value = TVar17.Value.Value;
          local_b8._0_4_ = local_a8._0_4_;
          local_b8.Value.Value = local_a8.Value.Value;
          goto LAB_14ea6931f;
        }
        if (local_b8.Value.Value < local_a8.Value.Value) {
          TVar17 = *pTVar16;
          local_b0._0_4_ = TVar17._0_4_;
          local_b0.Value = TVar17.Value.Value;
          local_b8._0_4_ = local_a8._0_4_;
          local_b8.Value.Value = local_a8.Value.Value;
          goto LAB_14ea6931f;
        }
        if ((local_b8.Value.Value <= local_a8.Value.Value) && (local_a8.Type.Value == '\0')) {
          local_b8._0_4_ = local_a8._0_4_;
          local_b8.Value.Value = local_a8.Value.Value;
        }
      }
      TVar17 = *pTVar16;
      local_b0._0_4_ = TVar17._0_4_;
      local_b0.Value = TVar17.Value.Value;
      goto LAB_14ea6931f;
    }
  }
  TVar17.Value.Value = local_b0.Value.Value;
  TVar17.Type.Value = local_b0.Type.Value;
  TVar17._1_3_ = local_b0._1_3_;
LAB_14ea6931f:
  uVar8 = local_b8._0_4_;
  FVar7.Value = local_b8.Value.Value;
  if (local_b8.Type.Value == '\0') {
    FVar7.Value = local_b8.Value.Value + 1;
    local_80 = CONCAT31(local_80._1_3_,1);
    uVar8 = local_80;
    iStack_7c = FVar7.Value;
  }
  if (TVar17.Type.Value.Value == '\0') {
    FStackX_c = TVar17.Value.Value;
    iStack_74 = FStackX_c.Value + -1;
    local_78 = CONCAT31(local_78._1_3_,1);
    TVar17.Value.Value = iStack_74;
    TVar17._0_4_ = local_78;
  }
  if (((char)uVar8 == '\x02') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar12 = (TRange<FTimespan> *)(*pcVar3)();
    return pTVar12;
  }
  iVar1 = param_3->Numerator;
  lVar18 = lVar14;
  if (iVar1 != 0) {
    lVar18 = ((longlong)
              ((FVar7.Value - (param_1->SectionStartFrame).Value) +
              (param_1->StartFrameOffset).Value) * (longlong)param_3->Denominator * 10000000 + -1 +
             (longlong)iVar1) / (longlong)iVar1;
  }
  if ((TVar17.Type.Value.Value == '\x02') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar12 = (TRange<FTimespan> *)(*pcVar3)();
    return pTVar12;
  }
  iVar1 = param_3->Numerator;
  if (iVar1 != 0) {
    FStackX_c = TVar17.Value.Value;
    lVar14 = ((longlong)
              (((param_1->StartFrameOffset).Value - (param_1->SectionStartFrame).Value) +
              FStackX_c.Value) * (longlong)param_3->Denominator * 10000000 + -1 + (longlong)iVar1) /
             (longlong)iVar1;
  }
  *(ulonglong *)&__return_storage_ptr__->UpperBound = CONCAT71(uStack_57,1);
  (__return_storage_ptr__->UpperBound).Value.Ticks = lVar14;
  *(ulonglong *)&__return_storage_ptr__->LowerBound = CONCAT71(uStack_67,1);
  (__return_storage_ptr__->LowerBound).Value.Ticks = lVar18;
  return __return_storage_ptr__;
}

// ClampTimeToPlaybackRange @ 14ea69490

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __cdecl
UE::MovieSceneMediaPlayerUtils::ClampTimeToPlaybackRange
          (FTimespan *param_1,UMediaPlayer *param_2,FMovieSceneMediaPlaybackParams *param_3)

{
  code *pcVar1;
  bool bVar2;
  FTimespan FVar3;
  longlong lVar4;
  longlong lVar5;
  char *in_R9;
  double dVar6;
  longlong local_48;
  TRange<FTimespan> local_40;
  
  UMediaPlayer::GetDuration((UMediaPlayer *)param_3);
  lVar4 = param_2->_padding_;
  if (local_48 == 0) {
    param_1->Ticks = lVar4;
  }
  else {
    if (*in_R9 != '\0') {
      lVar4 = lVar4 % local_48;
    }
    dVar6 = (double)*(longlong *)(in_R9 + 0x28) * __real_3fe0000000000000;
    bVar2 = TRange<FTimespan>::IsEmpty((TRange<FTimespan> *)(in_R9 + 8));
    if ((bVar2) ||
       (bVar2 = UMediaPlayer::SupportsPlaybackTimeRange((UMediaPlayer *)param_3), !bVar2)) {
      lVar5 = local_48 - (longlong)dVar6;
      if (lVar4 < lVar5) {
        lVar5 = lVar4;
      }
      local_40.LowerBound.Value.Ticks = 0;
      if (0 < lVar5) {
        local_40.LowerBound.Value.Ticks = lVar5;
      }
    }
    else {
      AdjustPlaybackTimeRange
                (&local_40,(TRange<FTimespan> *)(in_R9 + 8),(UMediaPlayer *)param_3,
                 (FTimespan *)(in_R9 + 0x28));
      if ((local_40.UpperBound.Type.Value == '\x02') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar3.Ticks = (*pcVar1)();
        return (FTimespan)FVar3.Ticks;
      }
      lVar5 = local_40.UpperBound.Value.Ticks - (longlong)dVar6;
      if ((local_40.LowerBound.Type.Value == '\x02') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar3.Ticks = (*pcVar1)();
        return (FTimespan)FVar3.Ticks;
      }
      if (lVar4 < lVar5) {
        lVar5 = lVar4;
      }
      if (local_40.LowerBound.Value.Ticks < lVar5) {
        local_40.LowerBound.Value.Ticks = lVar5;
      }
    }
    param_1->Ticks = (long64)local_40.LowerBound.Value;
  }
  return (FTimespan)(long64)param_1;
}

// FindMediaPlayerProxyInterfaceObject @ 14ea6b770

UObject * __cdecl
UE::MediaSectionBaseMediaUtils::FindMediaPlayerProxyInterfaceObject
          (FMovieSceneEvaluationOperand *param_1,IMovieScenePlayer *param_2)

{
  FName FVar1;
  UClass *this;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FWeakObjectPtr *pFVar7;
  UObject *local_res8 [2];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_38;
  
  if ((((param_1->ObjectBindingID).D != 0 || (param_1->ObjectBindingID).C != 0) ||
      (param_1->ObjectBindingID).B != 0) || (param_1->ObjectBindingID).A != 0) {
    pFVar3 = ::FName::FName(&local_res20,"MediaAssets");
    FVar1 = *pFVar3;
    this_00 = FModuleManager::Get();
    pIVar4 = FModuleManager::LoadModule(this_00,FVar1,None);
    if (pIVar4 != (IModuleInterface *)0x0) {
      IMovieScenePlayer::FindBoundObjects
                (param_2,&local_38,&param_1->ObjectBindingID,&param_1->SequenceID);
      for (pFVar7 = &(local_38.DataPtr)->WeakPtr;
          pFVar7 != &local_38.DataPtr[local_38.ArrayNum].WeakPtr; pFVar7 = pFVar7 + 1) {
        local_res18 = *pFVar7;
        pUVar5 = FWeakObjectPtr::Get(&local_res18);
        if (pUVar5 != (UObject *)0x0) {
          local_res8[0] = (UObject *)0x0;
          (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,pUVar5,local_res8);
          if ((local_res8[0] != (UObject *)0x0) &&
             (this = *(UClass **)&local_res8[0]->field_0x10, this != (UClass *)0x0)) {
            pUVar6 = Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
            bVar2 = UClass::ImplementsInterface(this,pUVar6);
            if (bVar2) {
              return local_res8[0];
            }
          }
        }
      }
    }
  }
  return (UObject *)0x0;
}

// FrameNumberToTimespan @ 14ea6b880

FTimespan __cdecl
UE::MediaSectionBaseMediaUtils::FrameNumberToTimespan(FFrameNumber *param_1,FFrameRate *param_2)

{
  int iVar1;
  int *in_R8;
  
  iVar1 = *in_R8;
  if (iVar1 != 0) {
    *(longlong *)param_1 =
         ((longlong)in_R8[1] * (longlong)param_2->Numerator * 10000000 + -1 + (longlong)iVar1) /
         (longlong)iVar1;
    return (FTimespan)(long64)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (FTimespan)(long64)param_1;
}

// GetAlignedFrame @ 14ea6b8c0

FFrameNumber __cdecl
UE::MediaSectionBaseMediaUtils::GetAlignedFrame
          (FFrameNumber *param_1,FFrameRate *param_2,FFrameRate *param_3)

{
  FFrameRate FVar1;
  longlong in_R9;
  uint local_res18 [4];
  
  if ((param_3->Numerator != 0) && (*(int *)(in_R9 + 4) != 0)) {
    local_res18[0] = param_2->Numerator;
    local_res18[1] = 0;
    FVar1.Denominator = 0;
    FVar1.Numerator = local_res18[0];
    ConvertFrameTime((FFrameTime)local_res18,FVar1,*param_3);
    param_1->Value = local_res18[0];
    return (FFrameNumber)(int)param_1;
  }
  param_1->Value = 0;
  return (FFrameNumber)(int)param_1;
}

// GetAlignedFrameRate @ 14ea6b920

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FFrameRate __cdecl
UE::MediaSectionBaseMediaUtils::GetAlignedFrameRate
          (FMovieSceneContext *param_1,UMovieSceneMediaSection *param_2,
          FPersistentEvaluationData *param_3)

{
  UMediaPlayer *this;
  float fVar1;
  int iVar2;
  int iVar3;
  FMovieSceneMediaData *pFVar4;
  FPersistentEvaluationData *in_R9;
  float fVar5;
  float fVar6;
  
  if ((param_3 != (FPersistentEvaluationData *)0x0) &&
     (*(char *)((longlong)&param_3[7].Player + 4) != '\0')) {
    param_1->_padding_ = (longlong)param_3[7].EntityData;
    return (FFrameRate)param_1;
  }
  pFVar4 = FPersistentEvaluationData::Find<FMovieSceneMediaData>(in_R9,&in_R9->SectionKey);
  if ((pFVar4 != (FMovieSceneMediaData *)0x0) &&
     (this = pFVar4->MediaPlayer, this != (UMediaPlayer *)0x0)) {
    iVar2 = UMediaPlayer::GetSelectedTrack(this,Video);
    iVar3 = UMediaPlayer::GetTrackFormat(this,Video,iVar2);
    fVar5 = UMediaPlayer::GetVideoTrackFrameRate(this,iVar2,iVar3);
    if (0.0 < fVar5) {
      fVar6 = (float)truncf(fVar5);
      fVar1 = __real_bf000000;
      if (__real_38d1b717 < fVar5 - fVar6) {
        *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x3e9;
        *(int *)&param_1->_padding_ = ((int)ROUND(fVar1 - (fVar5 + fVar5)) >> 1) * -1000;
        return (FFrameRate)param_1;
      }
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
      *(int *)&param_1->_padding_ = (int)(longlong)fVar5;
      return (FFrameRate)param_1;
    }
  }
  param_1->_padding_ = param_2->_padding_;
  return (FFrameRate)param_1;
}

// GetCurrentCacheSettingsFromPlayer @ 14ea6ba70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMediaSourceCacheSettings __cdecl
UE::MediaSectionBaseMediaUtils::GetCurrentCacheSettingsFromPlayer(UMediaPlayer *param_1)

{
  int iVar1;
  FMediaPlayerFacade *pFVar2;
  FName FVar3;
  code *pcVar4;
  double dVar5;
  FMediaSourceCacheSettings FVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  TSharedRef<FMediaPlayerFacade,1> *pTVar10;
  FName *pFVar11;
  FMediaSourceCacheSettings FVar12;
  FVariant *pFVar13;
  ForElementType<FSetElementId> FVar14;
  undefined7 uVar16;
  char *pcVar15;
  uint local_res8 [2];
  float local_res10 [2];
  uint local_res18;
  float fStackX_1c;
  double local_res20;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  EMediaPlayerOptionTrackSelectMode local_308;
  long64 local_300;
  EMediaPlayerOptionSeekTimeType local_2f8;
  EMediaPlayerOptionBooleanOverride local_2f7;
  EMediaPlayerOptionBooleanOverride local_2f6;
  undefined1 local_2f0 [32];
  void *local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [8];
  ForElementType<FSetElementId> local_2b0;
  int local_2a8;
  char local_2a0;
  FVariant local_298;
  FVariant local_280;
  FMemoryReader local_268;
  FMemoryReader local_1b8;
  FMemoryReader local_108;
  TSharedRef<FMediaPlayerFacade,1> local_58 [2];
  
  local_res18 = local_res18 & 0xffffff00;
  fStackX_1c = 0.2;
  if (param_1 == (UMediaPlayer *)0x0) {
    FVar12.TimeToLookAhead = 0.2;
    FVar12._0_4_ = local_res18;
    return FVar12;
  }
  pTVar10 = UMediaPlayer::GetPlayerFacade(param_1,local_58);
  pFVar2 = pTVar10->Object;
  local_2a0 = (pFVar2->ActivePlayerOptions).bIsSet;
  if ((bool)local_2a0 != false) {
    ::FString::FString(&local_348,&(pFVar2->ActivePlayerOptions).TypedValue.TracksByLanguage.Video);
    ::FString::FString(&local_338,&(pFVar2->ActivePlayerOptions).TypedValue.TracksByLanguage.Audio);
    ::FString::FString(&local_328,
                       &(pFVar2->ActivePlayerOptions).TypedValue.TracksByLanguage.Subtitle);
    ::FString::FString(&local_318,&(pFVar2->ActivePlayerOptions).TypedValue.TracksByLanguage.Caption
                      );
    local_308 = (pFVar2->ActivePlayerOptions).TypedValue.TrackSelection;
    local_300 = (pFVar2->ActivePlayerOptions).TypedValue.SeekTime.Ticks;
    local_2f8 = (pFVar2->ActivePlayerOptions).TypedValue.SeekTimeType;
    local_2f7 = (pFVar2->ActivePlayerOptions).TypedValue.PlayOnOpen;
    local_2f6 = (pFVar2->ActivePlayerOptions).TypedValue.Loop;
    local_2f0._0_8_ = (FScriptContainerElement *)0x0;
    local_2f0._8_8_ = 0;
    local_2d0 = (void *)0x0;
    local_2c8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_2c0 = _UNK_150631d98;
    local_2b0 = (ForElementType<FSetElementId>)0x0;
    local_2a8 = 0;
    TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                 *)local_2f0,
                (TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                 *)&(pFVar2->ActivePlayerOptions).TypedValue.InternalCustomOptions);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58[0].SharedReferenceCount.ReferenceController);
  if (local_2a0 != '\0') {
    pFVar11 = MediaPlayerOptionValues::ImgMediaSmartCacheEnabled();
    FVar3 = *pFVar11;
    uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if (local_2f0._8_4_ != uStack_2c0._4_4_) {
      FVar14 = (ForElementType<FSetElementId>)local_2b8;
      if (local_2b0 != (ForElementType<FSetElementId>)0x0) {
        FVar14 = local_2b0;
      }
      for (iVar1 = *(int *)((longlong)FVar14 +
                           (ulonglong)(local_2a8 - 1U & FVar3.Number + uVar9) * 4); iVar1 != -1;
          iVar1 = *(int *)(local_2f0._0_8_ + (longlong)iVar1 * 0x28 + 0x20)) {
        if (*(FName *)(local_2f0._0_8_ + (longlong)iVar1 * 0x28) == FVar3) {
          if ((local_2a0 == '\0') &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            FVar12 = (FMediaSourceCacheSettings)(*pcVar4)();
            return FVar12;
          }
          pFVar11 = MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead();
          FVar3 = *pFVar11;
          uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
          if (local_2f0._8_4_ != uStack_2c0._4_4_) {
            FVar14 = (ForElementType<FSetElementId>)local_2b8;
            if (local_2b0 != (ForElementType<FSetElementId>)0x0) {
              FVar14 = local_2b0;
            }
            iVar1 = *(int *)((longlong)FVar14 +
                            (ulonglong)(local_2a8 - 1U & FVar3.Number + uVar9) * 4);
            goto joined_r0x00014ea6bc7d;
          }
          break;
        }
      }
    }
LAB_14ea6c136:
    if (local_2a0 != '\0') {
      local_2a8 = 0;
      if (local_2b0 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2b0);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_2f0,0,local_2f0._8_4_);
      iVar1 = SUB84(local_2f0._8_8_,4);
      local_2f0._8_8_ = local_2f0._8_8_ & 0xffffffff00000000;
      if (iVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)local_2f0,0,(int *)(local_2f0 + 0xc));
      }
      uVar9 = local_2c8._4_4_;
      uStack_2c0 = 0xffffffff;
      local_2c8 = (ulonglong)local_2c8._4_4_ << 0x20;
      if (0x80 < uVar9) {
        local_2c8 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_2f0 + 0x10),0);
      }
      if (local_2d0 != (void *)0x0) {
        FMemory::Free(local_2d0);
      }
      if ((FScriptContainerElement *)local_2f0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_2f0._0_8_);
      }
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
      }
    }
  }
  FVar6.TimeToLookAhead = fStackX_1c;
  FVar6._0_4_ = local_res18;
  return FVar6;
joined_r0x00014ea6bc7d:
  if (iVar1 == -1) goto LAB_14ea6c136;
  if (*(FName *)(local_2f0._0_8_ + (longlong)iVar1 * 0x28) == FVar3) {
    if (iVar1 != -1) {
      if ((local_2a0 == '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        FVar12 = (FMediaSourceCacheSettings)(*pcVar4)();
        return FVar12;
      }
      pFVar11 = MediaPlayerOptionValues::ImgMediaSmartCacheEnabled();
      pFVar13 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                ::FindChecked((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                               *)local_2f0,*pFVar11);
      FVariant::FVariant(&local_280,pFVar13);
      if ((local_2a0 == '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        FVar12 = (FMediaSourceCacheSettings)(*pcVar4)();
        return FVar12;
      }
      pFVar11 = MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead();
      pFVar13 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                ::FindChecked((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                               *)local_2f0,*pFVar11);
      FVariant::FVariant(&local_298,pFVar13);
      if ((local_280.Type == Bool) && ((local_298.Type - Double & 0xfffffffd) == 0)) {
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        local_268._padding_ = 0;
        FArchiveState::FArchiveState((FArchiveState *)&local_268);
        local_268.Bytes = &local_280.Value;
        local_268._padding_ = 0;
        local_268._padding_ = (longlong)&___7FMemoryReader__6B_;
        uVar16 = (undefined7)((ulonglong)pFVar13 >> 8);
        local_268.LimitSize = 0x7fffffffffffffff;
        FArchiveState::SetIsLoading((FArchiveState *)&local_268,true);
        (**(code **)(local_268._padding_ + 0x108))(&local_268,CONCAT71(uVar16,1));
        pcVar15 = (char *)(*(uint **)local_268._padding_ + 1);
        if (*(uint **)(local_268._padding_ + 8) < pcVar15) {
          local_res8[0]._0_1_ = false;
          bVar8 = local_res8[0]._0_1_;
          local_res8[0] = 0;
          pcVar15 = (char *)local_res8;
          if (*(code **)(local_268._padding_ + 0x188) == FMemoryReader::Serialize) {
            FMemoryReader::Serialize(&local_268,pcVar15,4);
          }
          else {
            (**(code **)(local_268._padding_ + 0x188))();
          }
          if (1 < local_res8[0]) {
            FArchiveState::SetError((FArchiveState *)&local_268);
          }
          uVar9 = local_res8[0];
          if ((local_268._padding_ & 1U) != 0) goto LAB_14ea6be8d;
        }
        else {
          uVar9 = **(uint **)local_268._padding_;
          *(char **)local_268._padding_ = pcVar15;
LAB_14ea6be8d:
          bVar8 = uVar9 != 0;
        }
        FArchive::~FArchive((FArchive *)&local_268);
        local_res18 = CONCAT31(local_res18._1_3_,bVar8);
        if (local_298.Type == Float) {
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          local_1b8._padding_ = 0;
          FArchiveState::FArchiveState((FArchiveState *)&local_1b8);
          local_1b8.Bytes = &local_298.Value;
          local_1b8._padding_ = 0;
          uVar16 = (undefined7)((ulonglong)pcVar15 >> 8);
          local_1b8._padding_ = (longlong)&___7FMemoryReader__6B_;
          local_1b8.LimitSize = 0x7fffffffffffffff;
          FArchiveState::SetIsLoading((FArchiveState *)&local_1b8,true);
          (**(code **)(local_1b8._padding_ + 0x108))(&local_1b8,CONCAT71(uVar16,1));
          if (*(float **)(local_1b8._padding_ + 8) < *(float **)local_1b8._padding_ + 1) {
            if ((local_1b8._padding_ & 0x10000U) == 0) {
              if (*(code **)(local_1b8._padding_ + 0x188) == FMemoryReader::Serialize) {
                FMemoryReader::Serialize(&local_1b8,local_res10,4);
              }
              else {
                (**(code **)(local_1b8._padding_ + 0x188))();
              }
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)&local_1b8,(uint *)local_res10);
            }
          }
          else {
            local_res10[0] = **(float **)local_1b8._padding_;
            *(longlong *)local_1b8._padding_ = *(longlong *)local_1b8._padding_ + 4;
          }
          fVar7 = local_res10[0];
          FArchive::~FArchive((FArchive *)&local_1b8);
          dVar5 = (double)fVar7;
        }
        else {
          if (local_298.Type != Double) {
            pcVar15 = 
            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                               ,0x164,L"");
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              FVar12 = (FMediaSourceCacheSettings)(*pcVar4)();
              return FVar12;
            }
          }
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          FArchiveState::FArchiveState((FArchiveState *)&local_108);
          local_108.Bytes = &local_298.Value;
          local_108._padding_ = 0;
          uVar16 = (undefined7)((ulonglong)pcVar15 >> 8);
          local_108._padding_ = (longlong)&___7FMemoryReader__6B_;
          local_108.LimitSize = 0x7fffffffffffffff;
          FArchiveState::SetIsLoading((FArchiveState *)&local_108,true);
          (**(code **)(local_108._padding_ + 0x108))(&local_108,CONCAT71(uVar16,1));
          if (*(double **)(local_108._padding_ + 8) < *(double **)local_108._padding_ + 1) {
            if ((local_108._padding_ & 0x10000U) == 0) {
              if (*(code **)(local_108._padding_ + 0x188) == FMemoryReader::Serialize) {
                FMemoryReader::Serialize(&local_108,&local_res20,8);
              }
              else {
                (**(code **)(local_108._padding_ + 0x188))();
              }
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)&local_108,(ulong64 *)&local_res20);
            }
          }
          else {
            local_res20 = **(double **)local_108._padding_;
            *(longlong *)local_108._padding_ = *(longlong *)local_108._padding_ + 8;
          }
          dVar5 = local_res20;
          FArchive::~FArchive((FArchive *)&local_108);
        }
        fStackX_1c = (float)dVar5;
      }
      if (local_298.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Value.AllocatorInstance.Data);
      }
      if (local_280.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Value.AllocatorInstance.Data);
      }
    }
    goto LAB_14ea6c136;
  }
  iVar1 = *(int *)(local_2f0._0_8_ + (longlong)iVar1 * 0x28 + 0x20);
  goto joined_r0x00014ea6bc7d;
}

// GetFrameDuration @ 14ea6c250

FTimespan __cdecl
UE::MediaSectionBaseMediaUtils::GetFrameDuration(FFrameNumber *param_1,FFrameRate *param_2)

{
  longlong lVar1;
  int *in_R8;
  longlong lVar2;
  
  lVar2 = (longlong)*in_R8;
  if (*in_R8 == 0) {
    lVar1 = 0;
    lVar2 = lVar1;
  }
  else {
    lVar1 = ((longlong)(param_2->Numerator + 1) * (longlong)in_R8[1] * 10000000 + -1 + lVar2) /
            lVar2;
    lVar2 = ((longlong)in_R8[1] * (longlong)param_2->Numerator * 10000000 + -1 + lVar2) / lVar2;
  }
  lVar2 = (lVar1 - lVar2) + -1;
  lVar1 = 1;
  if (1 < lVar2) {
    lVar1 = lVar2;
  }
  *(longlong *)param_1 = lVar1;
  return (FTimespan)(long64)param_1;
}

// GetRoundedAlignedFrameDuration @ 14ea6cca0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FTimespan __cdecl
UE::MediaSectionBaseMediaUtils::GetRoundedAlignedFrameDuration
          (FMovieSceneContext *param_1,UMovieSceneMediaSection *param_2,
          FPersistentEvaluationData *param_3)

{
  FFrameRate FVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  FVar1 = GetAlignedFrameRate((FMovieSceneContext *)&stack0x00000008,param_2,param_3);
  if (*(int *)FVar1 != 0) {
    auVar2._0_8_ = (double)*(int *)FVar1;
    auVar2._8_8_ = 0;
    auVar3._0_8_ = ((double)*(int *)((longlong)FVar1 + 4) / auVar2._0_8_) * __real_416312d000000000
                   + __real_3fe0000000000000;
    auVar3._8_8_ = 0;
    auVar2 = roundpd(auVar2,auVar3,1);
    param_1->_padding_ = (longlong)auVar2._0_8_;
    return (FTimespan)(long64)param_1;
  }
  param_1->_padding_ = 1;
  return (FTimespan)(long64)param_1;
}

// GetRoundedFrameDuration @ 14ea6cd10

FTimespan __cdecl UE::MediaSectionBaseMediaUtils::GetRoundedFrameDuration(FFrameRate *param_1)

{
  int *in_RDX;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (*in_RDX != 0) {
    auVar1._0_8_ = (double)*in_RDX;
    auVar1._8_8_ = 0;
    auVar2._0_8_ = ((double)in_RDX[1] / auVar1._0_8_) * __real_416312d000000000 +
                   __real_3fe0000000000000;
    auVar2._8_8_ = 0;
    auVar1 = roundpd(auVar1,auVar2,1);
    *param_1 = (FFrameRate)(longlong)auVar1._0_8_;
    return (FTimespan)(long64)param_1;
  }
  param_1->Numerator = 1;
  param_1->Denominator = 0;
  return (FTimespan)(long64)param_1;
}

// IsPlayerClosed @ 14ea6d2c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __cdecl UE::MediaSectionBaseMediaUtils::IsPlayerClosed(UMediaPlayer *param_1)

{
  bool bVar1;
  FName FVar2;
  
  FVar2 = UMediaPlayer::GetPlayerName(param_1);
  if (*(longlong *)FVar2 != 0) {
    bVar1 = UMediaPlayer::IsClosed(param_1);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// IsVideoSampleAvailableForTime @ 14ea6d320

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __cdecl
UE::MediaSectionBaseMediaUtils::IsVideoSampleAvailableForTime
          (TSharedRef<FMediaPlayerFacade,1> *param_1,FTimespan *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FMediaTimeStamp *pFVar5;
  FMediaTimeStamp *pFVar6;
  FScriptContainerElement *pFVar7;
  FTimespan FVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  TRangeSet<FTimespan> local_98;
  TRange<FMediaTimeStamp> local_88;
  FScriptContainerElement local_58 [8];
  longlong local_50;
  FScriptContainerElement local_48 [8];
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined1 local_28;
  longlong local_20;
  undefined1 local_18;
  longlong local_10;
  
  FMediaPlayerFacade::GetLastProcessedVideoSampleTimeRange(param_1->Object,&local_88);
  if (local_88.LowerBound.Type.Value == '\x02') {
LAB_14ea6d43e:
    if (local_88.UpperBound.Type.Value == '\x02') goto LAB_14ea6d444;
  }
  else {
    if (local_88.UpperBound.Type.Value != '\x02') {
      if ((local_88.LowerBound.Type.Value == '\x02') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((local_88.UpperBound.Type.Value == '\x02') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (((((local_88.LowerBound.Value.SequenceIndex != local_88.UpperBound.Value.SequenceIndex) ||
            (local_88.LowerBound.Value.LoopIndex != local_88.UpperBound.Value.LoopIndex)) ||
           (local_88.LowerBound.Value.Time.Ticks != local_88.UpperBound.Value.Time.Ticks)) &&
          (local_88.UpperBound.Value.SequenceIndex <= local_88.LowerBound.Value.SequenceIndex)) &&
         ((local_88.LowerBound.Value.SequenceIndex != local_88.UpperBound.Value.SequenceIndex ||
          ((local_88.UpperBound.Value.LoopIndex <= local_88.LowerBound.Value.LoopIndex &&
           ((local_88.LowerBound.Value.LoopIndex != local_88.UpperBound.Value.LoopIndex ||
            (local_88.UpperBound.Value.Time.Ticks <= local_88.LowerBound.Value.Time.Ticks))))))))
      goto LAB_14ea6d4d6;
      pFVar5 = TRangeBound<FMediaTimeStamp>::GetValue(&local_88.LowerBound);
      pFVar6 = TRangeBound<FMediaTimeStamp>::GetValue(&local_88.UpperBound);
      if ((pFVar5->SequenceIndex == pFVar6->SequenceIndex) &&
         (((pFVar5->LoopIndex == pFVar6->LoopIndex && ((pFVar5->Time).Ticks == (pFVar6->Time).Ticks)
           ) && ((local_88.LowerBound.Type.Value == '\0' || (local_88.UpperBound.Type.Value == '\0')
                 ))))) goto LAB_14ea6d4d6;
      goto LAB_14ea6d43e;
    }
LAB_14ea6d444:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((local_88.LowerBound.Type.Value == '\x02') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_30 = param_2->Ticks;
  local_28 = 1;
  local_20 = local_88.LowerBound.Value.Time.Ticks;
  local_18 = 0;
  local_10 = local_88.UpperBound.Value.Time.Ticks;
  local_38 = 1;
  FVar8.Ticks = local_88.LowerBound.Value.Time.Ticks;
  if ((local_30 <= local_88.LowerBound.Value.Time.Ticks) &&
     (local_30 < local_88.LowerBound.Value.Time.Ticks)) {
    FVar8.Ticks = local_30;
  }
  if ((FVar8.Ticks == local_88.LowerBound.Value.Time.Ticks) &&
     (local_30 < local_88.UpperBound.Value.Time.Ticks)) {
    return true;
  }
LAB_14ea6d4d6:
  local_98.Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Ranges.ArrayNum = 0;
  local_98.Ranges.ArrayMax = 0;
  FMediaPlayerFacade::QueryCacheState(param_1->Object,Video,Loaded,&local_98);
  uVar9 = 0;
  FVar12.Data = local_98.Ranges.AllocatorInstance.Data;
  iVar11 = local_98.Ranges.ArrayNum;
  do {
    if (((int)uVar9 < 0) || (iVar11 <= (int)uVar9)) {
      bVar2 = false;
LAB_14ea6d5f5:
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
      return bVar2;
    }
    uVar4 = 0;
    if ((int)uVar9 < iVar11) {
      uVar4 = ~uVar9 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      FVar12.Data = local_98.Ranges.AllocatorInstance.Data;
      iVar11 = local_98.Ranges.ArrayNum;
    }
    local_50 = param_2->Ticks;
    local_58[0] = (FScriptContainerElement)0x1;
    pFVar10 = FVar12.Data + (longlong)(int)uVar9 * 0x20;
    if (*pFVar10 == (FScriptContainerElement)0x2) {
LAB_14ea6d5b2:
      pFVar7 = pFVar10 + 0x10;
      local_48[0] = (FScriptContainerElement)0x1;
      local_40 = local_50;
      if (pFVar10[0x10] != (FScriptContainerElement)0x2) {
        if (*(longlong *)(pFVar10 + 0x18) <= local_50) {
          if (*(longlong *)(pFVar10 + 0x18) < local_50) {
            pFVar7 = local_48;
          }
          if (pFVar10[0x10] != (FScriptContainerElement)0x1) goto LAB_14ea6d5e8;
        }
        if (*(longlong *)(pFVar7 + 8) !=
            *(longlong *)(FVar12.Data + (longlong)(int)uVar9 * 0x20 + 0x18)) goto LAB_14ea6d5e8;
      }
      bVar2 = true;
      goto LAB_14ea6d5f5;
    }
    pFVar7 = pFVar10;
    if (*(longlong *)(pFVar10 + 8) < local_50) {
LAB_14ea6d5a8:
      if (*(longlong *)(pFVar7 + 8) == *(longlong *)(pFVar10 + 8)) goto LAB_14ea6d5b2;
    }
    else {
      if (local_50 < *(longlong *)(pFVar10 + 8)) {
        pFVar7 = local_58;
      }
      if (*pFVar10 == (FScriptContainerElement)0x1) goto LAB_14ea6d5a8;
    }
LAB_14ea6d5e8:
    uVar9 = uVar9 + 1;
  } while( true );
}

// MakePlaybackParams @ 14ea6dfc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FMovieSceneMediaPlaybackParams * __cdecl
UE::MediaSectionBaseMediaUtils::MakePlaybackParams
          (FMovieSceneMediaPlaybackParams *__return_storage_ptr__,FMovieSceneContext *param_1,
          FMovieSceneMediaSectionParams *param_2,UMovieSceneMediaSection *param_3,FTimespan *param_4
          )

{
  code *pcVar1;
  long64 lVar2;
  undefined7 uVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  FMovieSceneMediaPlaybackParams *pFVar6;
  TRange<FTimespan> *pTVar7;
  FFrameRate local_res8;
  uint7 uStack_77;
  uint7 uStack_67;
  TRange<FTimespan> local_58;
  TRange<FTimespan> local_38;
  
  __return_storage_ptr__->bIsLooping = false;
  (__return_storage_ptr__->SectionTimeRange).LowerBound.Value.Ticks = 0;
  (__return_storage_ptr__->SectionTimeRange).UpperBound.Value.Ticks = 0;
  (__return_storage_ptr__->FrameDuration).Ticks = 0;
  (__return_storage_ptr__->SectionTimeRange).LowerBound.Type.Value = '\x02';
  (__return_storage_ptr__->SectionTimeRange).UpperBound.Type.Value = '\x02';
  pTVar4 = CVarUpdatePlaybackRange.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FMovieSceneMediaPlaybackParams *)(*pcVar1)();
        return pFVar6;
      }
    }
  }
  if (pTVar4->ShadowedValue[0] == false) {
    pTVar7 = &local_58;
    local_58.UpperBound._0_8_ = (ulonglong)uStack_67 << 8;
    local_58.UpperBound.Value.Ticks = 0;
    local_58.LowerBound._0_8_ = (ulonglong)uStack_77 << 8;
    local_58.LowerBound.Value.Ticks = 0;
  }
  else {
    local_res8 = (FFrameRate)param_1->_padding_;
    pTVar7 = CalculateSectionPlaybackTimeRange(&local_38,param_2,param_3,&local_res8);
  }
  uVar3 = *(undefined7 *)&(pTVar7->LowerBound).field_0x1;
  lVar2 = (pTVar7->LowerBound).Value.Ticks;
  (__return_storage_ptr__->SectionTimeRange).LowerBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(pTVar7->LowerBound).Type.Value;
  *(undefined7 *)&(__return_storage_ptr__->SectionTimeRange).LowerBound.field_0x1 = uVar3;
  (__return_storage_ptr__->SectionTimeRange).LowerBound.Value.Ticks = lVar2;
  uVar3 = *(undefined7 *)&(pTVar7->UpperBound).field_0x1;
  lVar2 = (pTVar7->UpperBound).Value.Ticks;
  (__return_storage_ptr__->SectionTimeRange).UpperBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(pTVar7->UpperBound).Type.Value;
  *(undefined7 *)&(__return_storage_ptr__->SectionTimeRange).UpperBound.field_0x1 = uVar3;
  (__return_storage_ptr__->SectionTimeRange).UpperBound.Value.Ticks = lVar2;
  (__return_storage_ptr__->FrameDuration).Ticks = param_4->Ticks;
  __return_storage_ptr__->bIsLooping = param_2->bLooping;
  return __return_storage_ptr__;
}

// SequencerFrameRangeToPlayerRange @ 14ea6f140

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TRange<FTimespan> * __cdecl
UE::MediaSectionBaseMediaUtils::SequencerFrameRangeToPlayerRange
          (TRange<FTimespan> *__return_storage_ptr__,FMovieSceneMediaSectionParams *param_1,
          FFrameRate *param_2,TRange<FFrameNumber> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TRange<FTimespan> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  undefined7 uStack_37;
  undefined7 uStack_27;
  
  if (((param_3->LowerBound).Type.Value == '\x02') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TRange<FTimespan> *)(*pcVar2)();
    return pTVar4;
  }
  iVar1 = param_2->Numerator;
  lVar5 = 0;
  lVar6 = lVar5;
  if (iVar1 != 0) {
    lVar6 = ((longlong)
             (((param_3->LowerBound).Value.Value - (param_1->SectionStartFrame).Value) +
             (param_1->StartFrameOffset).Value) * (longlong)param_2->Denominator * 10000000 + -1 +
            (longlong)iVar1) / (longlong)iVar1;
  }
  if (((param_3->UpperBound).Type.Value == '\x02') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TRange<FTimespan> *)(*pcVar2)();
    return pTVar4;
  }
  iVar1 = param_2->Numerator;
  if (iVar1 != 0) {
    lVar5 = ((longlong)
             (((param_3->UpperBound).Value.Value - (param_1->SectionStartFrame).Value) +
             (param_1->StartFrameOffset).Value) * (longlong)param_2->Denominator * 10000000 + -1 +
            (longlong)iVar1) / (longlong)iVar1;
  }
  *(ulonglong *)&__return_storage_ptr__->UpperBound = CONCAT71(uStack_27,1);
  (__return_storage_ptr__->UpperBound).Value.Ticks = lVar5;
  *(ulonglong *)&__return_storage_ptr__->LowerBound = CONCAT71(uStack_37,1);
  (__return_storage_ptr__->LowerBound).Value.Ticks = lVar6;
  return __return_storage_ptr__;
}

// SequencerFrameToPlayerTime @ 14ea6f280

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FTimespan __cdecl
UE::MediaSectionBaseMediaUtils::SequencerFrameToPlayerTime
          (FMovieSceneMediaSectionParams *param_1,FFrameRate *param_2,FFrameNumber *param_3)

{
  int iVar1;
  int *in_R9;
  
  iVar1 = param_3->Value;
  if (iVar1 != 0) {
    (param_1->MediaSoundComponent).field0_0x0.DebugPtr =
         (UMediaSoundComponent *)
         (((longlong)((param_2[9].Denominator - param_2[8].Numerator) + *in_R9) *
           (longlong)param_3[1].Value * 10000000 + -1 + (longlong)iVar1) / (longlong)iVar1);
    return (FTimespan)(long64)param_1;
  }
  (param_1->MediaSoundComponent).field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  return (FTimespan)(long64)param_1;
}

// SetPlayerBlockOnTimeRange @ 14ea6f480

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UE::MediaSectionBaseMediaUtils::SetPlayerBlockOnTimeRange
          (UMediaPlayer *param_1,FTimespan *param_2,FMovieSceneMediaPlaybackParams *param_3)

{
  longlong lVar1;
  code *pcVar2;
  uchar uVar3;
  longlong lVar4;
  bool bVar5;
  uchar uVar6;
  char cVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  uchar local_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined8 local_58;
  longlong lStack_50;
  TRange<FTimespan> local_48;
  
  lVar10 = param_2->Ticks;
  lVar11 = (param_3->FrameDuration).Ticks + lVar10;
  bVar5 = UMediaPlayer::SupportsPlaybackTimeRange(param_1);
  if ((!bVar5) || (bVar5 = TRange<FTimespan>::IsEmpty(&param_3->SectionTimeRange), bVar5))
  goto LAB_14ea6f7ec;
  uVar3 = (param_3->SectionTimeRange).LowerBound.Type.Value;
  local_58 = *(undefined8 *)&(param_3->SectionTimeRange).UpperBound;
  lVar4 = (param_3->SectionTimeRange).UpperBound.Value.Ticks;
  lVar1 = (param_3->SectionTimeRange).LowerBound.Value.Ticks;
  local_68 = uVar3;
  uStack_67 = (param_3->SectionTimeRange).LowerBound.field_0x1;
  uStack_66 = (param_3->SectionTimeRange).LowerBound.field_0x2;
  uStack_65 = (param_3->SectionTimeRange).LowerBound.field_0x3;
  uStack_64 = (param_3->SectionTimeRange).LowerBound.field_0x4;
  uStack_63 = (param_3->SectionTimeRange).LowerBound.field_0x5;
  uStack_62 = (param_3->SectionTimeRange).LowerBound.field_0x6;
  uStack_61 = (param_3->SectionTimeRange).LowerBound.field_0x7;
  uStack_60 = (char)(param_3->SectionTimeRange).LowerBound.Value.Ticks;
  uStack_5f = *(undefined1 *)((longlong)&(param_3->SectionTimeRange).LowerBound.Value.Ticks + 1);
  uStack_5e = *(undefined1 *)((longlong)&(param_3->SectionTimeRange).LowerBound.Value.Ticks + 2);
  uStack_5d = *(undefined1 *)((longlong)&(param_3->SectionTimeRange).LowerBound.Value.Ticks + 3);
  uStack_5c = *(undefined1 *)((longlong)&(param_3->SectionTimeRange).LowerBound.Value.Ticks + 4);
  uStack_5b = *(undefined1 *)((longlong)&(param_3->SectionTimeRange).LowerBound.Value.Ticks + 5);
  uStack_5a = *(undefined1 *)((longlong)&(param_3->SectionTimeRange).LowerBound.Value.Ticks + 6);
  uStack_59 = *(undefined1 *)((longlong)&(param_3->SectionTimeRange).LowerBound.Value.Ticks + 7);
  local_a0 = lVar10;
  lStack_50 = lVar4;
  cVar8 = (char)local_58;
  if (uVar3 == '\x02') {
    uVar6 = '\x02';
    plVar9 = (longlong *)&uStack_60;
LAB_14ea6f53b:
    if (uVar6 == uVar3) goto LAB_14ea6f544;
  }
  else {
    if (lVar10 <= lVar1) {
      if ((lVar10 < lVar1) || (uVar3 != '\x01')) {
        plVar9 = &local_a0;
        uVar6 = '\x01';
      }
      else {
        uVar6 = '\x01';
        plVar9 = (longlong *)&uStack_60;
      }
      goto LAB_14ea6f53b;
    }
    plVar9 = (longlong *)&uStack_60;
    uVar6 = uVar3;
LAB_14ea6f544:
    if ((uVar6 == '\x02') || (*plVar9 == lVar1)) {
      local_98 = 1;
      local_90 = lVar10;
      cVar7 = cVar8;
      if (cVar8 == '\x02') {
        plVar9 = &lStack_50;
LAB_14ea6f5a3:
        if (cVar7 != cVar8) goto LAB_14ea6f677;
      }
      else {
        if (lVar4 <= lVar10) {
          if ((lVar4 < lVar10) || (cVar8 != '\x01')) {
            plVar9 = &local_90;
            cVar7 = '\x01';
          }
          else {
            plVar9 = &lStack_50;
          }
          goto LAB_14ea6f5a3;
        }
        plVar9 = &lStack_50;
      }
      if ((cVar7 == '\x02') || (*plVar9 == lVar4)) {
        if ((cVar8 == '\x02') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (lVar4 < lVar11) {
          if ((cVar8 == '\x02') &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar11 = lVar4 + -1;
          if ((cVar8 == '\x02') &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar10 = lVar4 - (param_3->FrameDuration).Ticks;
          goto LAB_14ea6f7ec;
        }
      }
    }
  }
LAB_14ea6f677:
  local_88 = 1;
  local_80 = lVar11;
  if (uVar3 == '\x02') {
    uVar6 = '\x02';
    plVar9 = (longlong *)&uStack_60;
LAB_14ea6f6b6:
    if (uVar6 != uVar3) goto LAB_14ea6f7ec;
  }
  else {
    if (lVar11 <= lVar1) {
      if ((lVar11 < lVar1) || (uVar3 != '\x01')) {
        plVar9 = &local_80;
        uVar6 = '\x01';
      }
      else {
        uVar6 = '\x01';
        plVar9 = (longlong *)&uStack_60;
      }
      goto LAB_14ea6f6b6;
    }
    plVar9 = (longlong *)&uStack_60;
    uVar6 = uVar3;
  }
  if ((uVar6 != '\x02') && (*plVar9 != lVar1)) goto LAB_14ea6f7ec;
  local_78 = 1;
  local_70 = lVar11;
  cVar7 = cVar8;
  if (cVar8 == '\x02') {
    plVar9 = &lStack_50;
LAB_14ea6f70b:
    bVar5 = cVar7 != cVar8;
    cVar8 = cVar7;
    if (bVar5) goto LAB_14ea6f7ec;
  }
  else {
    if (lVar4 <= lVar11) {
      if ((lVar4 < lVar11) || (cVar8 != '\x01')) {
        plVar9 = &local_70;
        cVar7 = '\x01';
      }
      else {
        plVar9 = &lStack_50;
      }
      goto LAB_14ea6f70b;
    }
    plVar9 = &lStack_50;
  }
  if ((cVar8 == '\x02') || (*plVar9 == lVar4)) {
    if ((uVar3 == '\x02') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (lVar10 < lVar1) {
      if ((uVar3 == '\x02') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar10 = lVar1 + 1;
      if ((uVar3 == '\x02') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar11 = (param_3->FrameDuration).Ticks + lVar1;
    }
  }
LAB_14ea6f7ec:
  local_48.LowerBound.Type.Value = '\x01';
  local_48.UpperBound.Type.Value = '\0';
  local_48.LowerBound.Value.Ticks = lVar10;
  local_48.UpperBound.Value.Ticks = lVar11;
  UMediaPlayer::SetBlockOnTimeRange(param_1,&local_48);
  return;
}

// SetPlayerPlaybackTimeRange @ 14ea6f820

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UE::MediaSectionBaseMediaUtils::SetPlayerPlaybackTimeRange
          (UMediaPlayer *param_1,FMovieSceneMediaPlaybackParams *param_2)

{
  TRange<FTimespan> local_28;
  
  MovieSceneMediaPlayerUtils::AdjustPlaybackTimeRange
            (&local_28,&param_2->SectionTimeRange,param_1,&param_2->FrameDuration);
  MovieSceneMediaPlayerUtils::SetPlayerPlaybackTimeRange(param_1,&local_28);
  return;
}

// SetPlayerPlaybackTimeRange @ 14ea6f860

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UE::MovieSceneMediaPlayerUtils::SetPlayerPlaybackTimeRange
          (UMediaPlayer *param_1,TRange<FTimespan> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FTimespan *pFVar3;
  FTimespan *pFVar4;
  TRange<FTimespan> local_48;
  TRange<FTimespan> local_28;
  
  bVar2 = UMediaPlayer::SupportsPlaybackTimeRange(param_1);
  if (!bVar2) {
    return;
  }
  UMediaPlayer::GetPlaybackTimeRange(param_1,&local_48,Current);
  bVar2 = TRange<FTimespan>::IsEmpty(param_2);
  if (bVar2) {
    UMediaPlayer::GetPlaybackTimeRange(param_1,&local_28,Absolute);
    if ((local_48.LowerBound.Type.Value != '\x02') && (local_48.UpperBound.Type.Value != '\x02')) {
      if ((local_48.LowerBound.Type.Value == '\x02') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_48.UpperBound.Type.Value == '\x02') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_48.LowerBound.Value.Ticks <= local_48.UpperBound.Value.Ticks) {
        pFVar3 = TRangeBound<FTimespan>::GetValue(&local_48.LowerBound);
        pFVar4 = TRangeBound<FTimespan>::GetValue(&local_48.UpperBound);
        if ((pFVar3->Ticks != pFVar4->Ticks) ||
           ((local_48.LowerBound.Type.Value != '\0' && (local_48.UpperBound.Type.Value != '\0'))))
        goto LAB_14ea6fb41;
      }
      if ((local_28.LowerBound.Type.Value != '\x02') && (local_28.UpperBound.Type.Value != '\x02'))
      {
        if ((local_28.LowerBound.Type.Value == '\x02') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((local_28.UpperBound.Type.Value == '\x02') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_28.UpperBound.Value.Ticks < local_28.LowerBound.Value.Ticks) {
          return;
        }
        pFVar3 = TRangeBound<FTimespan>::GetValue(&local_28.LowerBound);
        pFVar4 = TRangeBound<FTimespan>::GetValue(&local_28.UpperBound);
        if (pFVar3->Ticks == pFVar4->Ticks) {
          if (local_28.LowerBound.Type.Value == '\0') {
            return;
          }
          if (local_28.UpperBound.Type.Value == '\0') {
            return;
          }
        }
      }
    }
LAB_14ea6fb41:
    if ((local_48.LowerBound.Type.Value == local_28.LowerBound.Type.Value) &&
       (((local_48.LowerBound.Type.Value == '\x02' ||
         (local_48.LowerBound.Value.Ticks == local_28.LowerBound.Value.Ticks)) &&
        (local_48.UpperBound.Type.Value == local_28.UpperBound.Type.Value)))) {
      if (local_48.UpperBound.Type.Value == '\x02') {
        return;
      }
      if (local_48.UpperBound.Value.Ticks == local_28.UpperBound.Value.Ticks) {
        return;
      }
    }
    UMediaPlayer::SetPlaybackTimeRange(param_1,&local_28);
    return;
  }
  if ((local_48.LowerBound.Type.Value != '\x02') && (local_48.UpperBound.Type.Value != '\x02')) {
    if ((local_48.LowerBound.Type.Value == '\x02') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((local_48.UpperBound.Type.Value == '\x02') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_48.LowerBound.Value.Ticks <= local_48.UpperBound.Value.Ticks) {
      pFVar3 = TRangeBound<FTimespan>::GetValue(&local_48.LowerBound);
      pFVar4 = TRangeBound<FTimespan>::GetValue(&local_48.UpperBound);
      if ((pFVar3->Ticks != pFVar4->Ticks) ||
         ((local_48.LowerBound.Type.Value != '\0' && (local_48.UpperBound.Type.Value != '\0'))))
      goto LAB_14ea6f98c;
    }
    if (((param_2->LowerBound).Type.Value != '\x02') && ((param_2->UpperBound).Type.Value != '\x02')
       ) {
      if ((param_2->UpperBound).Value.Ticks < (param_2->LowerBound).Value.Ticks) {
        return;
      }
      pFVar3 = TRangeBound<FTimespan>::GetValue(&param_2->LowerBound);
      pFVar4 = TRangeBound<FTimespan>::GetValue(&param_2->UpperBound);
      if (pFVar3->Ticks == pFVar4->Ticks) {
        if ((param_2->LowerBound).Type.Value == '\0') {
          return;
        }
        if ((param_2->UpperBound).Type.Value == '\0') {
          return;
        }
      }
    }
  }
LAB_14ea6f98c:
  if ((local_48.LowerBound.Type.Value != (param_2->LowerBound).Type.Value) ||
     ((((local_48.LowerBound.Type.Value != '\x02' &&
        (local_48.LowerBound.Value.Ticks != (param_2->LowerBound).Value.Ticks)) ||
       (local_48.UpperBound.Type.Value != (param_2->UpperBound).Type.Value)) ||
      ((local_48.UpperBound.Type.Value != '\x02' &&
       (local_48.UpperBound.Value.Ticks != (param_2->UpperBound).Value.Ticks)))))) {
    UMediaPlayer::SetPlaybackTimeRange(param_1,param_2);
  }
  return;
}

// ShouldSeekForTime @ 14ea701b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __cdecl
UE::MediaSectionBaseMediaUtils::ShouldSeekForTime(UMediaPlayer *param_1,FTimespan *param_2)

{
  bool bVar1;
  TSharedRef<FMediaPlayerFacade,1> local_28;
  FMediaTimeStamp local_18;
  
  UMediaPlayer::GetPlayerFacade(param_1,&local_28);
  FMediaPlayerFacade::GetSeekTarget(local_28.Object,&local_18);
  if ((local_18.Time.Ticks != -0x8000000000000000) && (local_18.Time.Ticks == param_2->Ticks)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return false;
  }
  bVar1 = IsVideoSampleAvailableForTime(&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return !bVar1;
}

// ToAllInclusiveRange @ 14ea70580

TRange<FFrameNumber> * __cdecl
UE::MediaSectionBaseMediaUtils::ToAllInclusiveRange
          (TRange<FFrameNumber> *__return_storage_ptr__,TRange<FFrameNumber> *param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  undefined4 local_res8;
  FFrameNumber FStackX_14;
  
  TVar2 = param_1->LowerBound;
  TVar1 = param_1->UpperBound;
  if (TVar2.Type.Value.Value == '\0') {
    local_res8 = CONCAT31(local_res8._1_3_,1);
    TVar2.Value.Value = TVar2.Value.Value.Value + 1;
    TVar2._0_4_ = local_res8;
  }
  if (TVar1.Type.Value.Value == '\0') {
    FStackX_14 = TVar1.Value.Value;
    local_res8 = CONCAT31(local_res8._1_3_,1);
    TVar1.Value.Value = FStackX_14.Value + -1;
    TVar1._0_4_ = local_res8;
  }
  __return_storage_ptr__->UpperBound = TVar1;
  __return_storage_ptr__->LowerBound = TVar2;
  return __return_storage_ptr__;
}

