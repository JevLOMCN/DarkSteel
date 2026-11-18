// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TakeMovieScene
// Functions: 9

// StaticClass @ 14d0b8fb0

UClass * __cdecl UMovieSceneTakeSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTakeSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TakeMovieScene",L"MovieSceneTakeSection",
               &Z_Registration_Info_UClass_UMovieSceneTakeSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneTakeSection,0x908,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneTakeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneTakeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTakeSection.InnerSingleton;
}

// UMovieSceneTakeSection @ 14d0b9940

UMovieSceneTakeSection * __thiscall
UMovieSceneTakeSection::UMovieSceneTakeSection(UMovieSceneTakeSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTakeSection__6B_;
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->HoursCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->MinutesCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->SecondsCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->FramesCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->SubFramesCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RateCurve);
  FMovieSceneStringChannel::FMovieSceneStringChannel(&this->Slate);
  return this;
}

// UMovieSceneTakeSection @ 14d0b99c0

UMovieSceneTakeSection * __thiscall
UMovieSceneTakeSection::UMovieSceneTakeSection
          (UMovieSceneTakeSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTakeSection__6B_;
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->HoursCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->MinutesCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->SecondsCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&this->FramesCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->SubFramesCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RateCurve);
  FMovieSceneStringChannel::FMovieSceneStringChannel(&this->Slate);
  *(undefined1 *)&this->_padding_ = 1;
  ReconstructChannelProxy(this);
  return this;
}

// ~UMovieSceneTakeSection @ 14d0b9c90

void __thiscall UMovieSceneTakeSection::~UMovieSceneTakeSection(UMovieSceneTakeSection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneTakeSection__6B_;
  FMovieSceneStringChannel::~FMovieSceneStringChannel(&this->Slate);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->RateCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->SubFramesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&this->FramesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&this->SecondsCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&this->MinutesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&this->HoursCurve);
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// Evaluate @ 14d0ba660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<UMovieSceneTakeSection::FSectionData> * __thiscall
UMovieSceneTakeSection::Evaluate
          (UMovieSceneTakeSection *this,
          TOptional<UMovieSceneTakeSection::FSectionData> *__return_storage_ptr__,FFrameTime param_1
          )

{
  int iVar1;
  double dVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FString *pFVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  float local_res8 [2];
  long64 local_res20;
  FString local_70;
  float local_60 [2];
  long64 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  FString local_38;
  FString local_28;
  
  local_res8[0] = 0.0;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_60[0] = 24.0;
  local_res20 = 0;
  bVar9 = FMovieSceneIntegerChannel::Evaluate(&this->HoursCurve,param_1,&local_res20);
  if (bVar9) {
    local_58 = 0;
    bVar9 = FMovieSceneIntegerChannel::Evaluate(&this->MinutesCurve,param_1,&local_58);
    if (bVar9) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar9 = FMovieSceneIntegerChannel::Evaluate(&this->SecondsCurve,param_1,(long64 *)&local_38);
      if (bVar9) {
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        bVar9 = FMovieSceneIntegerChannel::Evaluate(&this->FramesCurve,param_1,(long64 *)&local_28);
        if (((bVar9) &&
            (bVar9 = FMovieSceneFloatChannel::Evaluate(&this->SubFramesCurve,param_1,local_res8),
            bVar9)) &&
           (bVar9 = FMovieSceneFloatChannel::Evaluate(&this->RateCurve,param_1,local_60), bVar9)) {
          pFVar10 = FMovieSceneStringChannel::Evaluate(&this->Slate,param_1);
          dVar2 = (double)local_60[0] - ___real_403df853e2556b29;
          uVar13 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar14 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if (((__real_3e45798ee2308c3a <= (double)CONCAT44(uVar14,uVar13) &&
                (double)CONCAT44(uVar14,uVar13) != __real_3e45798ee2308c3a) &&
              (dVar2 = (double)local_60[0] - ___real_404df853e2556b29,
              uVar13 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
              uVar14 = (uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
              __real_3e45798ee2308c3a <= (double)CONCAT44(uVar14,uVar13) &&
              (double)CONCAT44(uVar14,uVar13) != __real_3e45798ee2308c3a)) ||
             (bVar9 = FTimecode::UseDropFormatTimecodeByDefaultWhenSupported(), !bVar9)) {
            uVar11 = 0;
          }
          else {
            uVar11 = 1;
          }
          fVar3 = local_res8[0];
          uVar4 = (undefined4)local_res20;
          local_50 = (undefined4)local_res20;
          uVar5 = (undefined4)local_58;
          uStack_4c = (undefined4)local_58;
          uVar7 = local_38.Data.AllocatorInstance.Data._0_4_;
          uStack_48 = local_38.Data.AllocatorInstance.Data._0_4_;
          uVar8 = local_28.Data.AllocatorInstance.Data._0_4_;
          uStack_44 = local_28.Data.AllocatorInstance.Data._0_4_;
          uVar6 = uStack_3c._1_3_;
          uStack_3c = CONCAT31(uStack_3c._1_3_,uVar11);
          bVar9 = pFVar10 == (FString *)0x0;
          if (bVar9) {
            pFVar10 = ::FString::FString(&local_28,L"");
          }
          else {
            pFVar10 = ::FString::FString(&local_38,pFVar10);
          }
          iVar1 = (pFVar10->Data).ArrayNum;
          iVar12 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar12 = 0;
          }
          ::FString::AssignRange(&local_70,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar12)
          ;
          if ((bVar9) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if ((!bVar9) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          (__return_storage_ptr__->TypedValue).Timecode.Hours = uVar4;
          (__return_storage_ptr__->TypedValue).Timecode.Minutes = uVar5;
          (__return_storage_ptr__->TypedValue).Timecode.Seconds = uVar7;
          (__return_storage_ptr__->TypedValue).Timecode.Frames = uVar8;
          (__return_storage_ptr__->TypedValue).Timecode.Subframe = fVar3;
          (__return_storage_ptr__->TypedValue).Timecode.bDropFrameFormat = (bool)uVar11;
          *(undefined3 *)&(__return_storage_ptr__->TypedValue).Timecode.field_0x15 = uVar6;
          (__return_storage_ptr__->TypedValue).Slate.Data.AllocatorInstance.Data =
               local_70.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->TypedValue).Slate.Data.ArrayNum = local_70.Data.ArrayNum;
          (__return_storage_ptr__->TypedValue).Slate.Data.ArrayMax = local_70.Data.ArrayMax;
          (__return_storage_ptr__->TypedValue).Rate = local_60[0];
          __return_storage_ptr__->bIsSet = true;
          return __return_storage_ptr__;
        }
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d0baa00

UClass * __cdecl UMovieSceneTakeSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTakeSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TakeMovieScene",L"MovieSceneTakeSection",
               &Z_Registration_Info_UClass_UMovieSceneTakeSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneTakeSection,0x908,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneTakeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneTakeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTakeSection.InnerSingleton;
}

// PostEditImport @ 14d0bacd0

void __thiscall UMovieSceneTakeSection::PostEditImport(UMovieSceneTakeSection *this)

{
  UMovieSceneSection::PostEditImport((UMovieSceneSection *)this);
  ReconstructChannelProxy(this);
  return;
}

// ReconstructChannelProxy @ 14d0bad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMovieSceneTakeSection::ReconstructChannelProxy(UMovieSceneTakeSection *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 auStackY_a8 [32];
  FLLMScope local_78 [2];
  FMemScope local_70;
  undefined8 local_68 [2];
  FMovieSceneChannelProxyData local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name108,L"Takes/MovieSceneTakeSection");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_78,LLMScope_Name108,false,None,Default,true);
  FMemScope::FMemScope(&local_70,&LLMScope_Name108,true);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  local_58.Entries.ArrayMax = 1;
  local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_58.Entries.ArrayNum = 0;
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneIntegerChannel>(&local_58,&this->HoursCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneIntegerChannel>(&local_58,&this->MinutesCurve)
  ;
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneIntegerChannel>(&local_58,&this->SecondsCurve)
  ;
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneIntegerChannel>(&local_58,&this->FramesCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,&this->SubFramesCurve)
  ;
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,&this->RateCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneStringChannel>(&local_58,&this->Slate);
  pTVar8 = ::operator_new(0x68);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = 0;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[3]._padding_ = 0;
    pTVar8[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
    if (local_58.Entries.AllocatorInstance.SecondaryData ==
        (ForElementType<FMovieSceneChannelEntry>)0x0) {
      memmove(pTVar8 + 4,&local_58,0x18);
    }
    if (*(void **)&pTVar8[5].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar8[5].SharedReferenceCount);
    }
    pTVar11 = pTVar8 + 1;
    *(ForElementType<FMovieSceneChannelEntry> *)&pTVar8[5].SharedReferenceCount =
         local_58.Entries.AllocatorInstance.SecondaryData;
    local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
    *(int *)&pTVar8[6]._padding_ = local_58.Entries.ArrayNum;
    *(int *)((longlong)&pTVar8[6]._padding_ + 4) = local_58.Entries.ArrayMax;
    local_58.Entries.ArrayNum = 0;
    local_58.Entries.ArrayMax = 1;
    pTVar10 = pTVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14d0baf5d;
    }
  }
  if (((pTVar11->_padding_ == 0) || (*(longlong *)&pTVar11->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar11->SharedReferenceCount + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar11->_padding_ = (longlong)pTVar11;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pTVar11->SharedReferenceCount;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14d0baf5d:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = pTVar10;
  if (&this->_padding_ != local_68) {
    this->_padding_ = (longlong)pTVar11;
    pTVar11 = (TReferenceControllerBase<1> *)this->_padding_;
    if (pTVar10 != pTVar11) {
      this->_padding_ = (longlong)pTVar10;
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar11->SharedReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)pTVar11->_padding_)(pTVar11);
          LOCK();
          paVar2 = &pTVar11->WeakReferenceCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FVar9 = (ForElementType<FMovieSceneChannelEntry>)&local_58;
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = local_58.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar9,local_58.Entries.ArrayNum);
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_58.Entries.AllocatorInstance.SecondaryData);
  }
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(local_78);
  return;
}

// StaticRegisterNativesUMovieSceneTakeSection @ 14d0bb7a0

void __cdecl UMovieSceneTakeSection::StaticRegisterNativesUMovieSceneTakeSection(void)

{
  return;
}

