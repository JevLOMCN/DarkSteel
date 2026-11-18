// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 21

// FComposedSampleTrack<UE::Math::TTransform<float>_> @ 14a3b4590

FComposedSampleTrack<UE::Math::TTransform<float>_> * __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::
FComposedSampleTrack<UE::Math::TTransform<float>_>
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSampleTrackBase *pFVar6;
  FComposedSampleTrack<UE::Math::TTransform<float>_> *pFVar7;
  longlong lVar8;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  undefined4 uStack_c;
  
  this->_padding_ = -1;
  this->_padding_ = 0;
  plVar2 = &this->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = -1;
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FComposedSampleTrack_U__TTransform_M_Math_UE____6B_;
  *plVar2 = 0;
  *piVar1 = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->ChildTrackIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildTrackIndices).ArrayNum = 0;
  (this->ChildTrackIndices).ArrayMax = 0;
  (this->ChildTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildTracks).ArrayNum = 0;
  (this->ChildTracks).ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 1;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,1,(ForAnyElementType *)plVar2,(int *)&this->_padding_,piVar1);
  DefaultConstructItems<UE::Math::TTransform<float>,int>
            ((void *)(*plVar2 + (longlong)iVar5 * 0x30),1);
  if (*(int *)((longlong)&this->_padding_ + 4) == -1) {
    lVar8 = *plVar2;
    iVar5 = (int)this->_padding_;
    uStack_3c = uStack_c;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FComposedSampleTrack<UE::Math::TTransform<float>_> *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    pFVar6 = FSampleTrackBase::GetReferencedTrack((FSampleTrackBase *)this);
    if (pFVar6 == (FSampleTrackBase *)0x0) {
      lVar8 = 0;
      iVar5 = 0;
    }
    else if (*(int *)((longlong)&this->_padding_ + 4) < 1) {
      lVar8 = 0;
      iVar5 = 0;
      uStack_3c = uStack_2c;
    }
    else {
      iVar5 = (int)this->_padding_;
      if (((iVar5 < 0) || ((int)pFVar6[1]._padding_ <= iVar5)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencedTrack->ValuesStorage.IsValidIndex(ReferencedValuesRange.Get<0>())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                             ,0x25d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FComposedSampleTrack<UE::Math::TTransform<float>_> *)(*pcVar3)();
        return pFVar7;
      }
      iVar5 = (int)this->_padding_ + -1 + *(int *)((longlong)&this->_padding_ + 4);
      if (((iVar5 < 0) || ((int)pFVar6[1]._padding_ <= iVar5)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencedTrack->ValuesStorage.IsValidIndex(ReferencedValuesRange.Get<0>() + ReferencedValuesRange.Get<1>() - 1)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                             ,0x25e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FComposedSampleTrack<UE::Math::TTransform<float>_> *)(*pcVar3)();
        return pFVar7;
      }
      iVar5 = *(int *)((longlong)&this->_padding_ + 4);
      lVar8 = (longlong)(int)this->_padding_ * 0x30 + pFVar6[1]._padding_;
      uStack_3c = uStack_1c;
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FComposedSampleTrack<UE::Math::TTransform<float>_> *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  this->_padding_ = lVar8;
  *(int *)&this->_padding_ = iVar5;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_3c;
  return this;
}

// ~FComposedSampleTrack<UE::Math::TTransform<float>_> @ 14a3ba1a0

void __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::
~FComposedSampleTrack<UE::Math::TTransform<float>_>
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FComposedSampleTrack_U__TTransform_M_Math_UE____6B_;
  DestructItems<TSharedPtr<FSampleTrackBase,1>,int>
            ((TSharedPtr<FSampleTrackBase,1> *)(this->ChildTracks).AllocatorInstance.Data,
             (this->ChildTracks).ArrayNum);
  pFVar1 = (this->ChildTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildTrackIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__FSampleTrackShared_U__TTransform_M_Math_UE___Internal_ControlRig_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// AddAtlas @ 14a3c9ed0

bool __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::AddAtlas
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,bool param_1,float param_2)

{
  return false;
}

// AddSample @ 14a3e03e0

void __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::AddSample
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,TTransform<float> *param_1,
          float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float local_34;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (*(int *)((longlong)&this->_padding_ + 4) != -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FSampleTrackBase::IsReferenced()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\ComposedSampleTrack.cpp"
                       ,0x40,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->ChildTracks).ArrayNum != 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildTracks.Num() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\ComposedSampleTrack.cpp"
                       ,0x41,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->ChildTracks).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar1 = *(longlong **)(this->ChildTracks).AllocatorInstance.Data;
  if ((this->ChildTracks).ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar2 = *(longlong **)((this->ChildTracks).AllocatorInstance.Data + 0x10);
  if ((this->ChildTracks).ArrayNum < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48 = (param_1->Translation).m128_f32[0];
  fStack_44 = (param_1->Translation).m128_f32[1];
  local_40 = (param_1->Translation).m128_f32[2];
  plVar3 = *(longlong **)((this->ChildTracks).AllocatorInstance.Data + 0x20);
  (**(code **)(*plVar1 + 0xd8))(plVar1,&local_48,param_2);
  local_28 = (param_1->Rotation).m128_f32[0];
  fStack_24 = (param_1->Rotation).m128_f32[1];
  fStack_20 = (param_1->Rotation).m128_f32[2];
  fStack_1c = (param_1->Rotation).m128_f32[3];
  (**(code **)(*plVar2 + 0xd8))(plVar2,&local_28,param_2);
  local_3c = (param_1->Scale3D).m128_f32[0];
  fStack_38 = (param_1->Scale3D).m128_f32[1];
  local_34 = (param_1->Scale3D).m128_f32[2];
  (**(code **)(*plVar3 + 0xd8))(plVar3,&local_3c,param_2);
  return;
}

// ConvertToComplete @ 14a3f5930

bool __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::ConvertToComplete
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,bool param_1)

{
  return false;
}

// ConvertToSampled @ 14a3fc3e0

bool __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::ConvertToSampled
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,bool param_1,float param_2)

{
  return false;
}

// Empty @ 14a403d50

void __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::Empty
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  FSampleTrackBase::Empty((FSampleTrackBase *)this);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TTransform<float>_>::UpdateValueArrayView
            ((FSampleTrackShared<UE::Math::TTransform<float>_> *)this);
  iVar2 = (this->ChildTracks).ArrayNum;
  pFVar5 = (this->ChildTracks).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->ChildTracks).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(longlong *)pFVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar5 + 0x38))();
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// GetChildTrackNameSuffix @ 14a412290

FString * __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::GetChildTrackNameSuffix
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,FString *__return_storage_ptr__,
          int param_1)

{
  if (param_1 == 0) {
    ::FString::FString(__return_storage_ptr__,L"Location");
    return __return_storage_ptr__;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      ::FString::FString(__return_storage_ptr__,L"Child");
      return __return_storage_ptr__;
    }
    ::FString::FString(__return_storage_ptr__,L"Scale");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Rotation");
  return __return_storage_ptr__;
}

// GetChildTrackTypes @ 14a412310

TArray<FSampleTrackBase::ETrackType,TSizedDefaultAllocator<32>_> * __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::GetChildTrackTypes
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,
          TArray<FSampleTrackBase::ETrackType,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined2 local_res10;
  undefined1 local_res12;
  
  local_res10 = 0x807;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 3;
  local_res12 = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,3,0,&__return_storage_ptr__->AllocatorInstance,3,&__return_storage_ptr__->ArrayMax)
  ;
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,&local_res10,3);
  return __return_storage_ptr__;
}

// GetChildTracks @ 14a412380

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::GetChildTracks
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this)

{
  return &this->ChildTrackIndices;
}

// GetValueAtTimeIndex @ 14a41ad10

TTransform<float> * __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::GetValueAtTimeIndex
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,
          TTransform<float> *__return_storage_ptr__,int param_1,FSampleTrackIndex *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  __m128 _Var7;
  __m128 _Var8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  TTransform<float> *pTVar13;
  undefined1 (*pauVar14) [12];
  float *pfVar15;
  undefined1 local_48 [12];
  undefined1 local_3c [20];
  undefined1 local_28 [16];
  
  if ((this->ChildTracks).ArrayNum != 3) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ChildTracks.Num() == 3",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\ComposedSampleTrack.cpp"
                        ,0x2f,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TTransform<float> *)(*pcVar6)();
      return pTVar13;
    }
  }
  if ((this->ChildTracks).ArrayNum < 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TTransform<float> *)(*pcVar6)();
      return pTVar13;
    }
  }
  plVar1 = *(longlong **)(this->ChildTracks).AllocatorInstance.Data;
  if ((this->ChildTracks).ArrayNum < 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TTransform<float> *)(*pcVar6)();
      return pTVar13;
    }
  }
  plVar2 = *(longlong **)((this->ChildTracks).AllocatorInstance.Data + 0x10);
  if ((this->ChildTracks).ArrayNum < 3) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TTransform<float> *)(*pcVar6)();
      return pTVar13;
    }
  }
  _Var7 = UE::Math::TTransform<float>::Identity.Translation;
  pFVar3 = (this->ChildTracks).AllocatorInstance.Data;
  __return_storage_ptr__->Rotation = UE::Math::TTransform<float>::Identity.Rotation;
  _Var8 = UE::Math::TTransform<float>::Identity.Scale3D;
  plVar4 = *(longlong **)(pFVar3 + 0x20);
  lVar5 = *plVar1;
  __return_storage_ptr__->Translation = _Var7;
  __return_storage_ptr__->Scale3D = _Var8;
  pauVar14 = (undefined1 (*) [12])(**(code **)(lVar5 + 200))(plVar1,local_48,param_1,param_2);
  lVar5 = *plVar2;
  _Var7.m128_f32[3] = 0.0;
  _Var7._0_12_ = *pauVar14;
  __return_storage_ptr__->Translation = _Var7;
  pfVar15 = (float *)(**(code **)(lVar5 + 200))(plVar2,local_28,param_1,param_2);
  fVar9 = pfVar15[1];
  fVar10 = pfVar15[2];
  fVar11 = pfVar15[3];
  lVar5 = *plVar4;
  (__return_storage_ptr__->Rotation).m128_f32[0] = *pfVar15;
  (__return_storage_ptr__->Rotation).m128_f32[1] = fVar9;
  (__return_storage_ptr__->Rotation).m128_f32[2] = fVar10;
  (__return_storage_ptr__->Rotation).m128_f32[3] = fVar11;
  pauVar14 = (undefined1 (*) [12])(**(code **)(lVar5 + 200))(plVar4,local_3c,param_1,param_2);
  _Var8.m128_f32[3] = 0.0;
  _Var8._0_12_ = *pauVar14;
  __return_storage_ptr__->Scale3D = _Var8;
  return __return_storage_ptr__;
}

// IsComposed @ 14a425380

bool __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::IsComposed
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this)

{
  return true;
}

// IsIdentical @ 14a4256e0

bool __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::IsIdentical
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,FSampleTrackBase *param_1,
          float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  bVar5 = UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TTransform<float>_>::IsIdentical
                    ((FSampleTrackShared<UE::Math::TTransform<float>_> *)this,param_1,
                     __real_38d1b717);
  if ((bVar5) &&
     (iVar1 = (this->ChildTracks).ArrayNum, iVar1 == *(int *)&param_1[1].ReferencedAtlasRange)) {
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar9 < (this->ChildTracks).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar2 = (this->ChildTracks).AllocatorInstance.Data;
        if (*(longlong *)(pFVar2 + lVar10) == 0) {
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
        plVar3 = *(longlong **)(pFVar2 + lVar10);
        pcVar4 = *(code **)(*plVar3 + 0x18);
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&param_1[1].ReferencedAtlasRange) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        cVar7 = (*pcVar4)(plVar3,*(undefined8 *)
                                  ((longlong)param_1[1].ReferencedTimeIndicesRange + lVar10),param_2
                         );
        if (cVar7 == '\0') goto LAB_14a425851;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < (this->ChildTracks).ArrayNum);
    }
    bVar5 = true;
  }
  else {
LAB_14a425851:
    bVar5 = false;
  }
  return bVar5;
}

// LocalizeValues @ 14a429450

bool __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::LocalizeValues
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this)

{
  return false;
}

// RemoveAtlas @ 14a43e640

bool __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::RemoveAtlas
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this)

{
  return false;
}

// RemoveObsoleteTimes @ 14a442f30

int __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::RemoveObsoleteTimes
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,int param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  return 0;
}

// Reserve @ 14a44e2e0

void __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::Reserve
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [8];
  
  FSampleTrackBase::Reserve((FSampleTrackBase *)this,param_1,param_2);
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (*piVar1 < param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,param_2,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,piVar1);
  }
  UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TTransform<float>_>::UpdateValueArrayView
            ((FSampleTrackShared<UE::Math::TTransform<float>_> *)this);
  iVar2 = (this->ChildTracks).ArrayNum;
  pFVar5 = (this->ChildTracks).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->ChildTracks).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar5 == pFVar6) break;
    if (*(longlong *)pFVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar5 + 0x20))
              (*(longlong **)pFVar5,param_1,(ulonglong)(uint)param_2);
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// Serialize @ 14a455c60

void __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::Serialize
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_);
  UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TTransform<float>_>::UpdateValueArrayView
            ((FSampleTrackShared<UE::Math::TTransform<float>_> *)this);
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&this->ChildTrackIndices);
  if ((param_1->field_0x28 & 1) != 0) {
    (**(code **)(this->_padding_ + 0x88))(this,&this->ChildTrackIndices);
  }
  return;
}

// SetChildTracks @ 14a458f80

void __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::SetChildTracks
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FSampleTrackBase,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  uint uVar5;
  TSharedPtr<FSampleTrackBase,1> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  undefined8 local_48;
  longlong local_40;
  
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ChildTrackIndices,param_1);
  if (this->_padding_ == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("FSampleTrackBase::Container",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\ComposedSampleTrack.h"
                       ,0x87,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar2 = &this->ChildTracks;
  piVar1 = &(this->ChildTracks).ArrayMax;
  pTVar6 = (TSharedPtr<FSampleTrackBase,1> *)(pTVar2->AllocatorInstance).Data;
  iVar11 = (this->ChildTracks).ArrayNum;
  if ((this->ChildTracks).ArrayMax < 0) {
    DestructItems<TSharedPtr<FSampleTrackBase,1>,int>(pTVar6,iVar11);
    (this->ChildTracks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FSampleTrackBase,1>,int>(pTVar6,iVar11);
    (this->ChildTracks).ArrayNum = 0;
  }
  uVar4 = (this->ChildTrackIndices).ArrayNum;
  uVar12 = (ulonglong)(int)uVar4;
  pFVar15 = (this->ChildTrackIndices).AllocatorInstance.Data;
  pFVar3 = pFVar15 + uVar12 * 4;
  while( true ) {
    if ((this->ChildTrackIndices).ArrayNum != (int)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar3) break;
    uVar5 = *(uint *)pFVar15;
    lVar7 = this->_padding_;
    uVar10 = 0;
    if ((int)uVar5 < *(int *)(lVar7 + 0x68)) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    puVar13 = (undefined8 *)((longlong)(int)uVar5 * 0x10 + *(longlong *)(lVar7 + 0x60));
    local_48 = *puVar13;
    local_40 = puVar13[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    pFVar14 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar14 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar14 + (longlong)*piVar1 * 0x10)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar11 = (this->ChildTracks).ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ChildTracks).ArrayNum = iVar11 + 1;
    pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    *(undefined8 *)pFVar14 = local_48;
    *(longlong *)(pFVar14 + 8) = local_40;
    local_40 = 0;
    local_48 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar12 = (ulonglong)uVar4;
    pFVar15 = pFVar15 + 4;
  }
  return;
}

// Shrink @ 14a45b510

void __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::Shrink
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  FSampleTrackBase::Shrink((FSampleTrackBase *)this);
  iVar2 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (*piVar1 != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,iVar2,(ForAnyElementType *)&this->_padding_,iVar2,piVar1);
  }
  UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TTransform<float>_>::UpdateValueArrayView
            ((FSampleTrackShared<UE::Math::TTransform<float>_> *)this);
  iVar2 = (this->ChildTracks).ArrayNum;
  pFVar5 = (this->ChildTracks).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->ChildTracks).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(longlong *)pFVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar5 + 0x30))();
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// UpdateChildTracks @ 14a45f0f0

void __thiscall
FComposedSampleTrack<UE::Math::TTransform<float>_>::UpdateChildTracks
          (FComposedSampleTrack<UE::Math::TTransform<float>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a45f0fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x88))(this,&this->ChildTrackIndices);
  return;
}

