// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 16

// AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short> @ 146102170

FPlayerIndexPlaybackCapability * __thiscall
UE::MovieScene::FPlaybackCapabilities::
AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>
          (FPlaybackCapabilities *this,ushort *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPlayerIndexPlaybackCapability *pFVar3;
  byte local_res18;
  FPlaybackCapabilityPtr local_18;
  
  FPlayerIndexPlaybackCapability::GetPlaybackCapabilityID();
  FPlaybackCapabilitiesImpl::
  AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>
            ((FPlaybackCapabilitiesImpl *)this,&local_18,1 << (local_res18 & 0x1f),param_1);
  if (local_18.Ptr == (FPlayerIndexPlaybackCapability *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPlayerIndexPlaybackCapability *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (local_18.StorageMode != Inline) {
    if ((local_18.StorageMode == RawPointer) || (local_18.StorageMode == SharedPointer)) {
      return *(FPlayerIndexPlaybackCapability **)local_18.Ptr;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x44,L"Unexpected playback capability storage mode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPlayerIndexPlaybackCapability *)(*pcVar1)();
      return pFVar3;
    }
  }
  return local_18.Ptr;
}

// FPlaybackCapabilities @ 146181890

FPlaybackCapabilities * __thiscall
UE::MovieScene::FPlaybackCapabilities::FPlaybackCapabilities
          (FPlaybackCapabilities *this,FPlaybackCapabilities *param_1)

{
  *(undefined4 *)&this->field_0x8 = 0;
  *(undefined8 *)this = 0;
  this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined2 *)&this->field_0x8 = *(undefined2 *)&param_1->field_0x8;
  *(undefined2 *)&this->field_0xa = *(undefined2 *)&param_1->field_0xa;
  this->field_0xc = param_1->field_0xc;
  *(undefined4 *)&this->field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined2 *)&param_1->field_0xd = 0;
  param_1->field_0xf = 0;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)&param_1->field_0x8 = 0;
  param_1->field_0xc = 0;
  *(undefined8 *)&param_1->field_0x18 = 0;
  *(undefined8 *)&param_1->field_0x20 = 0;
  return this;
}

// ~FPlaybackCapabilities @ 1461857f0

void __thiscall
UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities(FPlaybackCapabilities *this)

{
  Destroy(this);
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
    return;
  }
  return;
}

// operator= @ 146186da0

FPlaybackCapabilities * __thiscall
UE::MovieScene::FPlaybackCapabilities::operator=
          (FPlaybackCapabilities *this,FPlaybackCapabilities *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPlaybackCapabilities *pFVar3;
  
  if (this == param_1) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2414214886746750997>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackCapabilities.cpp"
                       ,0x15,"this != &RHS");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPlaybackCapabilities *)(*pcVar1)();
      return pFVar3;
    }
  }
  else {
    Destroy(this);
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined2 *)&this->field_0x8 = *(undefined2 *)&param_1->field_0x8;
    *(undefined2 *)&this->field_0xa = *(undefined2 *)&param_1->field_0xa;
    this->field_0xc = param_1->field_0xc;
    *(undefined4 *)&this->field_0x10 = *(undefined4 *)&param_1->field_0x10;
    *(undefined2 *)&param_1->field_0xd = 0;
    param_1->field_0xf = 0;
    *(undefined8 *)&param_1->field_0x10 = 0;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    *(undefined8 *)&param_1->field_0x18 = 0;
    *(undefined8 *)&param_1->field_0x20 = 0;
  }
  return this;
}

// Destroy @ 14619cd70

void __thiscall UE::MovieScene::FPlaybackCapabilities::Destroy(FPlaybackCapabilities *this)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  if (((*(longlong *)this == 0) != (this->field_0xc == '\0')) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Memory == nullptr) == (Num == 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackCapabilities.cpp"
                         ,0x35,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)this;
  if (lVar3 != 0) {
    uVar10 = 0;
    bVar1 = this->field_0xc;
    if (bVar1 != 0) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < *(int *)&this->field_0x20) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)&this->field_0x18;
        if ((*(longlong *)(lVar4 + 8 + lVar9) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ThisHelpers.Destructor != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackCapabilities.cpp"
                               ,0x3e,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar2 = *(ushort *)(lVar3 + 8 + lVar9);
        if (uVar2 == 0xffff) {
          lVar8 = 0;
        }
        else {
          lVar8 = (ulonglong)uVar2 + *(longlong *)this;
        }
        (**(code **)(lVar4 + 8 + lVar9))(lVar8);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar10 < (int)(uint)bVar1);
    }
    FMemory::Free(*(void **)this);
  }
  return;
}

// InvalidateCachedData @ 1461ba3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPlaybackCapabilities::InvalidateCachedData
          (FPlaybackCapabilities *this,UMovieSceneEntitySystemLinker *param_1)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  bVar1 = this->field_0xc;
  uVar10 = 0;
  lVar3 = *(longlong *)this;
  if (bVar1 != 0) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&this->field_0x20) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&this->field_0x18;
      if ((*(longlong *)(lVar4 + lVar11) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ThisHelpers.InterfaceCast != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x314,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar2 = *(ushort *)(lVar11 + 8 + lVar3);
      if (uVar2 == 0xffff) {
        lVar9 = 0;
      }
      else {
        lVar9 = (ulonglong)uVar2 + *(longlong *)this;
      }
      plVar8 = (longlong *)(**(code **)(lVar4 + lVar11))(lVar9);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8,param_1);
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar10 < (int)(uint)bVar1);
  }
  return;
}

// OnSubInstanceCreated @ 1461c1120

void __thiscall
UE::MovieScene::FPlaybackCapabilities::OnSubInstanceCreated
          (FPlaybackCapabilities *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,FInstanceHandle param_2
          )

{
  byte bVar1;
  ushort uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedPlaybackState *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  FSharedPlaybackState *local_48;
  TReferenceControllerBase<1> *local_40;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = this->field_0xc;
  uVar12 = 0;
  lVar5 = *(longlong *)this;
  if (bVar1 != 0) {
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < *(int *)&this->field_0x20) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)&this->field_0x18;
      if ((*(longlong *)(lVar6 + lVar13) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ThisHelpers.InterfaceCast != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x314,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar2 = *(ushort *)(lVar5 + 8 + lVar13);
      if (uVar2 == 0xffff) {
        lVar11 = 0;
      }
      else {
        lVar11 = (ulonglong)uVar2 + *(longlong *)this;
      }
      plVar10 = (longlong *)(**(code **)(lVar6 + lVar13))(lVar11);
      if (plVar10 != (longlong *)0x0) {
        pcVar7 = *(code **)(*plVar10 + 0x10);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48 = pFVar4;
        local_40 = pTVar3;
        (*pcVar7)(plVar10,&local_48,param_2);
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x10;
    } while ((int)uVar12 < (int)(uint)bVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddCapabilityRaw<UE::MovieScene::Tests::FTestSimpleCapability> @ 14627c390

FTestSimpleCapability * __thiscall
UE::MovieScene::FPlaybackCapabilities::
AddCapabilityRaw<UE::MovieScene::Tests::FTestSimpleCapability>
          (FPlaybackCapabilities *this,FTestSimpleCapability *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTestSimpleCapability *pFVar3;
  FTestSimpleCapability *local_res10 [3];
  FPlaybackCapabilityPtr local_18;
  
  local_res10[0] = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                   FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPlaybackCapabilitiesImpl::
  AddCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*>
            ((FPlaybackCapabilitiesImpl *)this,&local_18,1 << (::StaticID._0_1_ & 0x1f),local_res10)
  ;
  if (local_18.Ptr == (FTestSimpleCapability *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTestSimpleCapability *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (local_18.StorageMode != Inline) {
    if ((local_18.StorageMode == RawPointer) || (local_18.StorageMode == SharedPointer)) {
      return *(FTestSimpleCapability **)local_18.Ptr;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x44,L"Unexpected playback capability storage mode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTestSimpleCapability *)(*pcVar1)();
      return pFVar3;
    }
  }
  return local_18.Ptr;
}

// AddCapabilityShared<UE::MovieScene::Tests::FTestInvalidatableCapability> @ 14627c4b0

FTestInvalidatableCapability * __thiscall
UE::MovieScene::FPlaybackCapabilities::
AddCapabilityShared<UE::MovieScene::Tests::FTestInvalidatableCapability>
          (FPlaybackCapabilities *this,
          TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTestInvalidatableCapability *pFVar3;
  FPlaybackCapabilityPtr local_28;
  TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestInvalidatableCapability>)
                   FPlaybackCapabilityID::Register(L"FTestInvalidatableCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPlaybackCapabilitiesImpl::
  AddCapability<TSharedPtr<UE::MovieScene::Tests::FTestInvalidatableCapability,1>,UE::MovieScene::Tests::FTestInvalidatableCapability,TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1>_>
            ((FPlaybackCapabilitiesImpl *)this,&local_28,1 << (::StaticID._0_1_ & 0x1f),&local_18);
  if (local_28.Ptr == (FTestInvalidatableCapability *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTestInvalidatableCapability *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (local_28.StorageMode != Inline) {
    if ((local_28.StorageMode == RawPointer) || (local_28.StorageMode == SharedPointer)) {
      local_28.Ptr = *(void **)local_28.Ptr;
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTestInvalidatableCapability *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return local_28.Ptr;
}

// FindCapability<UE::MovieScene::Tests::FTestCapabilityBase> @ 146280e00

FTestCapabilityBase * __thiscall
UE::MovieScene::FPlaybackCapabilities::FindCapability<UE::MovieScene::Tests::FTestCapabilityBase>
          (FPlaybackCapabilities *this)

{
  code *pcVar1;
  bool bVar2;
  FTestCapabilityBase *pFVar3;
  FPlaybackCapabilityPtr local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase>)
                   FPlaybackCapabilityID::Register(L"FTestCapabilityBase");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)this,&local_18,1 << (::StaticID._0_1_ & 0x1f));
  if (local_18.Ptr != (FTestCapabilityBase *)0x0) {
    if (local_18.StorageMode == Inline) {
      return local_18.Ptr;
    }
    if ((local_18.StorageMode == RawPointer) || (local_18.StorageMode == SharedPointer)) {
      return *(FTestCapabilityBase **)local_18.Ptr;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x30,L"Unexpected playback capability storage mode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTestCapabilityBase *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FTestCapabilityBase *)0x0;
}

// FindCapability<UE::MovieScene::Tests::FTestSimpleCapability> @ 146280ef0

FTestSimpleCapability * __thiscall
UE::MovieScene::FPlaybackCapabilities::FindCapability<UE::MovieScene::Tests::FTestSimpleCapability>
          (FPlaybackCapabilities *this)

{
  code *pcVar1;
  bool bVar2;
  FTestSimpleCapability *pFVar3;
  FPlaybackCapabilityPtr local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                   FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)this,&local_18,1 << (::StaticID._0_1_ & 0x1f));
  if (local_18.Ptr != (FTestSimpleCapability *)0x0) {
    if (local_18.StorageMode == Inline) {
      return local_18.Ptr;
    }
    if ((local_18.StorageMode == RawPointer) || (local_18.StorageMode == SharedPointer)) {
      return *(FTestSimpleCapability **)local_18.Ptr;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x30,L"Unexpected playback capability storage mode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTestSimpleCapability *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FTestSimpleCapability *)0x0;
}

// GetCapabilityChecked<UE::MovieScene::Tests::FTestSimpleCapability> @ 1462814b0

FTestSimpleCapability * __thiscall
UE::MovieScene::FPlaybackCapabilities::
GetCapabilityChecked<UE::MovieScene::Tests::FTestSimpleCapability>(FPlaybackCapabilities *this)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FTestSimpleCapability *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                   FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar6 = FPlaybackCapabilitiesImpl::GetCapabilityIndex
                    ((FPlaybackCapabilitiesImpl *)this,1 << (::StaticID._0_1_ & 0x1f));
  if (0xfe < uVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < 255",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x107,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTestSimpleCapability *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((byte)this->field_0xc <= (byte)uVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x21b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTestSimpleCapability *)(*pcVar4)();
      return pFVar7;
    }
  }
  lVar3 = *(longlong *)this;
  uVar9 = (ulonglong)(uVar6 & 0xff);
  uVar2 = *(ushort *)(lVar3 + 8 + uVar9 * 0x10);
  if (uVar2 == 0xffff) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar3 + (ulonglong)uVar2;
  }
  cVar1 = *(char *)(lVar3 + 0xe + uVar9 * 0x10);
  pFVar7 = (FTestSimpleCapability *)((ulonglong)*(byte *)(lVar3 + 0xd + uVar9 * 0x10) + lVar8);
  if (pFVar7 == (FTestSimpleCapability *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x3a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTestSimpleCapability *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (cVar1 != '\0') {
    if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      return *(FTestSimpleCapability **)pFVar7;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x44,L"Unexpected playback capability storage mode");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTestSimpleCapability *)(*pcVar4)();
      return pFVar7;
    }
  }
  return pFVar7;
}

// HasCapability<UE::MovieScene::Tests::FTestCapabilityBase> @ 146281e60

bool __thiscall
UE::MovieScene::FPlaybackCapabilities::HasCapability<UE::MovieScene::Tests::FTestCapabilityBase>
          (FPlaybackCapabilities *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestCapabilityBase>)
                   FPlaybackCapabilityID::Register(L"FTestCapabilityBase");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (*(uint *)&this->field_0x10 >> ((uint)::StaticID & 0x1f) & 1) != 0;
}

// HasCapability<UE::MovieScene::Tests::FTestInvalidatableCapability> @ 146281ee0

bool __thiscall
UE::MovieScene::FPlaybackCapabilities::
HasCapability<UE::MovieScene::Tests::FTestInvalidatableCapability>(FPlaybackCapabilities *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestInvalidatableCapability>)
                   FPlaybackCapabilityID::Register(L"FTestInvalidatableCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (*(uint *)&this->field_0x10 >> ((uint)::StaticID & 0x1f) & 1) != 0;
}

// HasCapability<UE::MovieScene::Tests::FTestOtherSimpleCapability> @ 146281f60

bool __thiscall
UE::MovieScene::FPlaybackCapabilities::
HasCapability<UE::MovieScene::Tests::FTestOtherSimpleCapability>(FPlaybackCapabilities *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestOtherSimpleCapability>)
                   FPlaybackCapabilityID::Register(L"FTestOtherSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (*(uint *)&this->field_0x10 >> ((uint)::StaticID & 0x1f) & 1) != 0;
}

// HasCapability<UE::MovieScene::Tests::FTestSimpleCapability> @ 146281fe0

bool __thiscall
UE::MovieScene::FPlaybackCapabilities::HasCapability<UE::MovieScene::Tests::FTestSimpleCapability>
          (FPlaybackCapabilities *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::Tests::FTestSimpleCapability>)
                   FPlaybackCapabilityID::Register(L"FTestSimpleCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (*(uint *)&this->field_0x10 >> ((uint)::StaticID & 0x1f) & 1) != 0;
}

