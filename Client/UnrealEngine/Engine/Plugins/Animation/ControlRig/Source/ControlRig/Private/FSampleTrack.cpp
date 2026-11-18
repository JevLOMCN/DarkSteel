// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 131

// ~FSampleTrack<unsigned_int> @ 14a223510

void __thiscall
FSampleTrack<unsigned_int>::~FSampleTrack<unsigned_int>(FSampleTrack<unsigned_int> *this)

{
  *(undefined ***)this = &___7__FSampleTrackShared_I_Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14a223550

void __thiscall
FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_HV__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> @ 14a2235a0

void __thiscall
FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_UFRigElementKey__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<FName> @ 14a2235f0

void __thiscall FSampleTrack<FName>::~FSampleTrack<FName>(FSampleTrack<FName> *this)

{
  *(undefined ***)this = &___7__FSampleTrackShared_VFName___Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// AddSampleFromProperty @ 14a23cea0

void __thiscall
FSampleTrack<unsigned_int>::AddSampleFromProperty
          (FSampleTrack<unsigned_int> *this,FProperty *param_1,uchar *param_2)

{
  uint local_18 [4];
  
  if (local_18 != (uint *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<unsigned_int>::AddSample
            ((FSampleTrackShared<unsigned_int> *)this,local_18,__real_38d1b717);
  return;
}

// AddSampleFromProperty @ 14a23cf20

void __thiscall
FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FProperty *param_1,
          uchar *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<int,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<TArray<int,TSizedDefaultAllocator<32>_>_>::AddSample
            ((FSampleTrackShared<TArray<int,TSizedDefaultAllocator<32>_>_> *)this,&local_18,
             __real_38d1b717);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a23cfb0

void __thiscall
FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *this,
          FProperty *param_1,uchar *param_2)

{
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
  ::AddSample((FSampleTrackShared<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *)this,
              &local_18,__real_38d1b717);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a23d040

void __thiscall
FSampleTrack<FName>::AddSampleFromProperty
          (FSampleTrack<FName> *this,FProperty *param_1,uchar *param_2)

{
  FName local_18 [2];
  
  local_18[0].ComparisonIndex.Value = 0;
  local_18[0].Number = 0;
  if (local_18 != (FName *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<FName>::AddSample
            ((FSampleTrackShared<FName> *)this,local_18,__real_38d1b717);
  return;
}

// GetSampleForProperty @ 14a26a380

void __thiscall
FSampleTrack<unsigned_int>::GetSampleForProperty
          (FSampleTrack<unsigned_int> *this,int param_1,FSampleTrackIndex *param_2,
          FProperty *param_3,uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_18 [4];
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined4 *)(*pcVar1)(this,*piVar3);
  local_18[0] = *puVar4;
  if (param_4 != (uchar *)local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,local_18,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  return;
}

// GetSampleForProperty @ 14a26a460

void __thiscall
FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 << 2);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a26a5a0

void __thiscall
FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 * 0xc);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a26a6f0

void __thiscall
FSampleTrack<FName>::GetSampleForProperty
          (FSampleTrack<FName> *this,int param_1,FSampleTrackIndex *param_2,FProperty *param_3,
          uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 local_18 [2];
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18[0] = *puVar4;
  if (param_4 != (uchar *)local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,local_18,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  return;
}

// GetSizePerValue @ 14a26b740

int __thiscall FSampleTrack<unsigned_int>::GetSizePerValue(FSampleTrack<unsigned_int> *this)

{
  return 4;
}

// GetSizePerValue @ 14a26b750

int __thiscall
FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a26b760

int __thiscall
FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a26b770

int __thiscall FSampleTrack<FName>::GetSizePerValue(FSampleTrack<FName> *this)

{
  return 8;
}

// Serialize @ 14a28d770

void __thiscall
FSampleTrack<unsigned_int>::Serialize(FSampleTrack<unsigned_int> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<unsigned_int>::UpdateValueArrayView
            ((FSampleTrackShared<unsigned_int> *)this);
  return;
}

// Serialize @ 14a28d7b0

void __thiscall
FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     &this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<TArray<int,TSizedDefaultAllocator<32>_>_>::
  UpdateValueArrayView((FSampleTrackShared<TArray<int,TSizedDefaultAllocator<32>_>_> *)this);
  return;
}

// Serialize @ 14a28d7f0

void __thiscall
FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1
          )

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
  ::UpdateValueArrayView
            ((FSampleTrackShared<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *)this);
  return;
}

// Serialize @ 14a28d830

void __thiscall FSampleTrack<FName>::Serialize(FSampleTrack<FName> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FName,TSizedDefaultAllocator<32>_> *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<FName>::UpdateValueArrayView
            ((FSampleTrackShared<FName> *)this);
  return;
}

// FSampleTrack<float> @ 14a3b4800

FSampleTrack<float> * __thiscall FSampleTrack<float>::FSampleTrack<float>(FSampleTrack<float> *this)

{
  *(undefined8 *)&this->field_0x28 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x90 = 0;
  *(undefined4 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined4 *)&this->field_0xc0 = 0;
  *(undefined ***)this = &___7__FSampleTrack_M__6B_;
  *(undefined8 *)&this->field_0x30 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0x38 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0x40 = 0xffffffffffffffff;
  return this;
}

// ~FSampleTrack<int> @ 14a3ba220

void __thiscall FSampleTrack<int>::~FSampleTrack<int>(FSampleTrack<int> *this)

{
  *(undefined ***)this = &___7__FSampleTrackShared_H_Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<float> @ 14a3ba260

void __thiscall FSampleTrack<float>::~FSampleTrack<float>(FSampleTrack<float> *this)

{
  *(undefined ***)this = &___7__FSampleTrackShared_M_Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<UE::Math::TQuat<float>_> @ 14a3ba2a0

void __thiscall
FSampleTrack<UE::Math::TQuat<float>_>::~FSampleTrack<UE::Math::TQuat<float>_>
          (FSampleTrack<UE::Math::TQuat<float>_> *this)

{
  *(undefined ***)this = &___7__FSampleTrackShared_U__TQuat_M_Math_UE___Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<UE::Math::TTransform<float>_> @ 14a3ba2e0

void __thiscall
FSampleTrack<UE::Math::TTransform<float>_>::~FSampleTrack<UE::Math::TTransform<float>_>
          (FSampleTrack<UE::Math::TTransform<float>_> *this)

{
  *(undefined ***)this =
       &___7__FSampleTrackShared_U__TTransform_M_Math_UE___Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<UE::Math::TVector<float>_> @ 14a3ba320

void __thiscall
FSampleTrack<UE::Math::TVector<float>_>::~FSampleTrack<UE::Math::TVector<float>_>
          (FSampleTrack<UE::Math::TVector<float>_> *this)

{
  *(undefined ***)this =
       &___7__FSampleTrackShared_U__TVector_M_Math_UE___Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<FInstancedStruct> @ 14a3ba360

void __thiscall
FSampleTrack<FInstancedStruct>::~FSampleTrack<FInstancedStruct>
          (FSampleTrack<FInstancedStruct> *this)

{
  *(undefined ***)this = &___7__FSampleTrackShared_UFInstancedStruct___Internal_ControlRig_UE__6B_;
  DestructItems<FInstancedStruct,int>
            (*(FInstancedStruct **)&this->field_0xa8,*(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<FLinearColor> @ 14a3ba3b0

void __thiscall
FSampleTrack<FLinearColor>::~FSampleTrack<FLinearColor>(FSampleTrack<FLinearColor> *this)

{
  *(undefined ***)this = &___7__FSampleTrackShared_UFLinearColor___Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<FRigComponentKey> @ 14a3ba3f0

void __thiscall
FSampleTrack<FRigComponentKey>::~FSampleTrack<FRigComponentKey>
          (FSampleTrack<FRigComponentKey> *this)

{
  *(undefined ***)this = &___7__FSampleTrackShared_UFRigComponentKey___Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<FRigElementKey> @ 14a3ba430

void __thiscall
FSampleTrack<FRigElementKey>::~FSampleTrack<FRigElementKey>(FSampleTrack<FRigElementKey> *this)

{
  *(undefined ***)this = &___7__FSampleTrackShared_UFRigElementKey___Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14a3ba470

void __thiscall
FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_IV__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<unsigned_int,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14a3ba4c0

void __thiscall
FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_MV__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<float,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 14a3ba510

void __thiscall
FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_U__TQuat_M_Math_UE__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> @ 14a3ba560

void __thiscall
FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_U__TTransform_M_Math_UE__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14a3ba5b0

void __thiscall
FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> @ 14a3ba600

void __thiscall
FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_UFInstancedStruct__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14a3ba650

void __thiscall
FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> @ 14a3ba6a0

void __thiscall
FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_UFRigComponentKey__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14a3ba6f0

void __thiscall
FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_VFName__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<FName,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FName,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14a3ba740

void __thiscall
FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FString,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14a3ba790

void __thiscall
FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>::
~FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &
       ___7__FSampleTrackShared_V__TArray__NV__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<bool,TSizedDefaultAllocator<32>_> **)&this->field_0xa8,
             *(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<FString> @ 14a3ba7e0

void __thiscall FSampleTrack<FString>::~FSampleTrack<FString>(FSampleTrack<FString> *this)

{
  *(undefined ***)this = &___7__FSampleTrackShared_VFString___Internal_ControlRig_UE__6B_;
  DestructItems<FString,int>(*(FString **)&this->field_0xa8,*(int *)&this->field_0xb0);
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// ~FSampleTrack<bool> @ 14a3ba830

void __thiscall FSampleTrack<bool>::~FSampleTrack<bool>(FSampleTrack<bool> *this)

{
  *(undefined ***)this = &___7__FSampleTrackShared__N_Internal_ControlRig_UE__6B_;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FSampleTrackBase::~FSampleTrackBase((FSampleTrackBase *)this);
  return;
}

// AddSampleFromProperty @ 14a3e3860

void __thiscall
FSampleTrack<int>::AddSampleFromProperty(FSampleTrack<int> *this,FProperty *param_1,uchar *param_2)

{
  int local_18 [4];
  
  if (local_18 != (int *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<int>::AddSample
            ((FSampleTrackShared<int> *)this,local_18,__real_38d1b717);
  return;
}

// AddSampleFromProperty @ 14a3e38e0

void __thiscall
FSampleTrack<float>::AddSampleFromProperty
          (FSampleTrack<float> *this,FProperty *param_1,uchar *param_2)

{
  float local_18 [4];
  
  if (local_18 != (float *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<float>::AddSample
            ((FSampleTrackShared<float> *)this,local_18,__real_38d1b717);
  return;
}

// AddSampleFromProperty @ 14a3e3960

void __thiscall
FSampleTrack<UE::Math::TQuat<float>_>::AddSampleFromProperty
          (FSampleTrack<UE::Math::TQuat<float>_> *this,FProperty *param_1,uchar *param_2)

{
  TQuat<float> local_18;
  
  if (&local_18 != (TQuat<float> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TQuat<float>_>::AddSample
            ((FSampleTrackShared<UE::Math::TQuat<float>_> *)this,&local_18,__real_38d1b717);
  return;
}

// AddSampleFromProperty @ 14a3e39e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSampleTrack<UE::Math::TTransform<float>_>::AddSampleFromProperty
          (FSampleTrack<UE::Math::TTransform<float>_> *this,FProperty *param_1,uchar *param_2)

{
  undefined1 auStack_68 [32];
  __m128 local_48;
  __m128 local_38;
  __m128 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = GlobalVectorConstants::Float0001;
  local_28 = GlobalVectorConstants::Float1110;
  local_38 = GlobalVectorConstants::FloatZero;
  if (&local_48 != (__m128 *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_48,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_48,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TTransform<float>_>::AddSample
            ((FSampleTrackShared<UE::Math::TTransform<float>_> *)this,(TTransform<float> *)&local_48
             ,__real_38d1b717);
  return;
}

// AddSampleFromProperty @ 14a3e3aa0

void __thiscall
FSampleTrack<UE::Math::TVector<float>_>::AddSampleFromProperty
          (FSampleTrack<UE::Math::TVector<float>_> *this,FProperty *param_1,uchar *param_2)

{
  TVector<float> local_18;
  
  if (&local_18 != (TVector<float> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TVector<float>_>::AddSample
            ((FSampleTrackShared<UE::Math::TVector<float>_> *)this,&local_18,__real_38d1b717);
  return;
}

// AddSampleFromProperty @ 14a3e3b20

void __thiscall
FSampleTrack<FInstancedStruct>::AddSampleFromProperty
          (FSampleTrack<FInstancedStruct> *this,FProperty *param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  FInstancedStruct local_18;
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    param_1 = (FProperty *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[1]._padding_ == 0) {
    bVar2 = *(longlong *)&this->field_0x48 == 0;
  }
  else {
    bVar2 = param_1[1]._padding_ == *(longlong *)&this->field_0x48;
  }
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct == GetScriptStruct()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrack.cpp"
                         ,0x2d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FInstancedStruct::FInstancedStruct(&local_18,*(UScriptStruct **)&this->field_0x48);
  if (local_18.StructMemory != param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))
                (param_1,local_18.StructMemory,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(local_18.StructMemory,param_2,
             (longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  (**(code **)(*(longlong *)this + 0xd8))(this,&local_18,__real_38d1b717);
  FInstancedStruct::Reset(&local_18);
  return;
}

// AddSampleFromProperty @ 14a3e3c50

void __thiscall
FSampleTrack<FLinearColor>::AddSampleFromProperty
          (FSampleTrack<FLinearColor> *this,FProperty *param_1,uchar *param_2)

{
  FLinearColor local_18;
  
  if (&local_18 != (FLinearColor *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<FLinearColor>::AddSample
            ((FSampleTrackShared<FLinearColor> *)this,&local_18,__real_38d1b717);
  return;
}

// AddSampleFromProperty @ 14a3e3cd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FSampleTrack<FRigComponentKey>::AddSampleFromProperty
          (FSampleTrack<FRigComponentKey> *this,FProperty *param_1,uchar *param_2)

{
  FRigComponentKey local_28;
  
  local_28.ElementKey.Type = None;
  local_28.ElementKey.Name.ComparisonIndex.Value = 0;
  local_28.ElementKey.Name.Number = 0;
  local_28.Name.ComparisonIndex.Value = 0;
  local_28.Name.Number = 0;
  if (&local_28 != (FRigComponentKey *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_28,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_28,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<FRigComponentKey>::AddSample
            ((FSampleTrackShared<FRigComponentKey> *)this,&local_28,__real_38d1b717);
  return;
}

// AddSampleFromProperty @ 14a3e3d60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FSampleTrack<FRigElementKey>::AddSampleFromProperty
          (FSampleTrack<FRigElementKey> *this,FProperty *param_1,uchar *param_2)

{
  FRigElementKey local_18;
  
  local_18.Type = None;
  local_18.Name.ComparisonIndex.Value = 0;
  local_18.Name.Number = 0;
  if (&local_18 != (FRigElementKey *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<FRigElementKey>::AddSample
            ((FSampleTrackShared<FRigElementKey> *)this,&local_18,__real_38d1b717);
  return;
}

// AddSampleFromProperty @ 14a3e3de0

void __thiscall
FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this,FProperty *param_1,
          uchar *param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
  AddSample((FSampleTrackShared<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *)this,&local_18,
            __real_38d1b717);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a3e3e70

void __thiscall
FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FProperty *param_1,
          uchar *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<float,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<TArray<float,TSizedDefaultAllocator<32>_>_>::
  AddSample((FSampleTrackShared<TArray<float,TSizedDefaultAllocator<32>_>_> *)this,&local_18,
            __real_38d1b717);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a3e3f00

void __thiscall
FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this,
          FProperty *param_1,uchar *param_2)

{
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::
  FSampleTrackShared<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::AddSample
            ((FSampleTrackShared<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *)this
             ,&local_18,__real_38d1b717);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a3e3f90

void __thiscall
FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>::
AddSampleFromProperty
          (FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> *this,
          FProperty *param_1,uchar *param_2)

{
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::
  FSampleTrackShared<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>::AddSample
            ((FSampleTrackShared<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> *
             )this,&local_18,__real_38d1b717);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a3e4020

void __thiscall
FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this,
          FProperty *param_1,uchar *param_2)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::
  FSampleTrackShared<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::AddSample
            ((FSampleTrackShared<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
             this,&local_18,__real_38d1b717);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a3e40b0

void __thiscall
FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> *this,
          FProperty *param_1,uchar *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  FProperty *pFVar7;
  FInstancedStruct *this_00;
  uchar *puVar8;
  FProperty *pFVar9;
  int iVar10;
  FProperty *pFVar11;
  bool bVar12;
  ForAnyElementType local_48;
  undefined8 local_40;
  TObjectPtr<UScriptStruct_const_>_u_0 local_38;
  FProperty *local_30;
  
  pFVar11 = (FProperty *)0x0;
  if (((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) == 0))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x480,L"CastFieldChecked failed with 0x%016llx"), param_1 = pFVar11,
        bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = (FProperty *)param_1[1]._padding_;
  if (((pFVar9 == (FProperty *)0x0) || ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar9 = pFVar11,
     bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pFVar9[1]._padding_ == 0) {
    bVar12 = *(longlong *)&this->field_0x48 == 0;
  }
  else {
    bVar12 = pFVar9[1]._padding_ == *(longlong *)&this->field_0x48;
  }
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StructProperty->Struct == GetScriptStruct()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrack.cpp"
                          ,0x66,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar5 = param_1[1]._padding_;
  (**(code **)(*(longlong *)param_1[1]._padding_ + 0x168))();
  lVar3 = param_1[1]._padding_;
  iVar1 = *(int *)(lVar3 + 0x34);
  if ((iVar1 < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1177,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((lVar3 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InnerProperty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1178,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uVar2 = *(uint *)(param_2 + 8);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  pFVar7 = pFVar11;
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&local_48,0,(int *)((longlong)&local_40 + 4));
  }
  while( true ) {
    iVar10 = (int)pFVar7;
    if (*(int *)(param_2 + 8) <= iVar10) {
      (**(code **)(*(longlong *)this + 0xd8))(this,&local_48,__real_38d1b717);
      DestructItems<FInstancedStruct,int>((FInstancedStruct *)local_48.Data,(int)local_40);
      if ((TObjectPtr<UScriptStruct_const_>_u_0 *)local_48.Data !=
          (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
        FMemory::Free(local_48.Data);
      }
      return;
    }
    FInstancedStruct::FInstancedStruct
              ((FInstancedStruct *)&local_38.ObjectPtr,*(UScriptStruct **)&this->field_0x48);
    pFVar7 = pFVar11;
    if (*(int *)(param_2 + 8) != 0) {
      puVar8 = *(uchar **)param_2;
      if (((lVar5 & 1) != 0) && (((ulonglong)puVar8 & 1) != 0)) {
        puVar8 = param_2 + ((longlong)puVar8 >> 0x18);
      }
      pFVar7 = (FProperty *)(puVar8 + (longlong)iVar1 * (longlong)iVar10);
    }
    if (local_30 != pFVar7) {
      if (((uint)(int)pFVar9->PropertyFlags >> 0x1e & 1) == 0) {
        (**(code **)(pFVar9->_padding_ + 0xf0))(pFVar9,local_30,pFVar7,pFVar9->ArrayDim);
      }
      else {
        memcpy(local_30,pFVar7,(longlong)pFVar9->ElementSize * (longlong)pFVar9->ArrayDim);
      }
    }
    if (((local_48.Data <= &local_38) &&
        (&local_38 <
         (TObjectPtr<UScriptStruct_const_>_u_0 *)(local_48.Data + (longlong)local_40._4_4_ * 0x10)))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) break;
    iVar6 = (int)local_40;
    if ((int)local_40 == local_40._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_48,(int *)((longlong)&local_40 + 4));
    }
    local_40 = CONCAT44(local_40._4_4_,iVar6 + 1);
    this_00 = (FInstancedStruct *)(local_48.Data + (longlong)iVar6 * 0x10);
    (this_00->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    this_00->StructMemory = (uchar *)0x0;
    FInstancedStruct::InitializeAs(this_00,local_38.DebugPtr,(uchar *)local_30);
    FInstancedStruct::Reset((FInstancedStruct *)&local_38.ObjectPtr);
    pFVar7 = (FProperty *)(ulonglong)(iVar10 + 1);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// AddSampleFromProperty @ 14a3e4410

void __thiscall
FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,FProperty *param_1,
          uchar *param_2)

{
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
  AddSample((FSampleTrackShared<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)this,&local_18,
            __real_38d1b717);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a3e44a0

void __thiscall
FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> *this,
          FProperty *param_1,uchar *param_2)

{
  TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::
  FSampleTrackShared<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>::AddSample
            ((FSampleTrackShared<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> *)this,
             &local_18,__real_38d1b717);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a3e4530

void __thiscall
FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,FProperty *param_1,
          uchar *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<TArray<FName,TSizedDefaultAllocator<32>_>_>::
  AddSample((FSampleTrackShared<TArray<FName,TSizedDefaultAllocator<32>_>_> *)this,&local_18,
            __real_38d1b717);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a3e45c0

void __thiscall
FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FProperty *param_1,
          uchar *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<TArray<FString,TSizedDefaultAllocator<32>_>_>::
  AddSample((FSampleTrackShared<TArray<FString,TSizedDefaultAllocator<32>_>_> *)this,&local_18,
            __real_38d1b717);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a3e4660

void __thiscall
FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>::AddSampleFromProperty
          (FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FProperty *param_1,
          uchar *param_2)

{
  TArray<bool,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != (TArray<bool,TSizedDefaultAllocator<32>_> *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<TArray<bool,TSizedDefaultAllocator<32>_>_>::AddSample
            ((FSampleTrackShared<TArray<bool,TSizedDefaultAllocator<32>_>_> *)this,&local_18,
             __real_38d1b717);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a3e46f0

void __thiscall
FSampleTrack<FString>::AddSampleFromProperty
          (FSampleTrack<FString> *this,FProperty *param_1,uchar *param_2)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (&local_18 != (FString *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,&local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(&local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<FString>::AddSample
            ((FSampleTrackShared<FString> *)this,&local_18,__real_38d1b717);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddSampleFromProperty @ 14a3e4780

void __thiscall
FSampleTrack<bool>::AddSampleFromProperty
          (FSampleTrack<bool> *this,FProperty *param_1,uchar *param_2)

{
  bool local_18 [16];
  
  if (local_18 != (bool *)param_2) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,local_18,param_2,param_1->ArrayDim);
    }
    else {
      memcpy(local_18,param_2,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  UE::ControlRig::Internal::FSampleTrackShared<bool>::AddSample
            ((FSampleTrackShared<bool> *)this,local_18,__real_38d1b717);
  return;
}

// GetSampleForProperty @ 14a417970

void __thiscall
FSampleTrack<int>::GetSampleForProperty
          (FSampleTrack<int> *this,int param_1,FSampleTrackIndex *param_2,FProperty *param_3,
          uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_18 [4];
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined4 *)(*pcVar1)(this,*piVar3);
  local_18[0] = *puVar4;
  if (param_4 != (uchar *)local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,local_18,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  return;
}

// GetSampleForProperty @ 14a417a50

void __thiscall
FSampleTrack<float>::GetSampleForProperty
          (FSampleTrack<float> *this,int param_1,FSampleTrackIndex *param_2,FProperty *param_3,
          uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_18 [4];
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined4 *)(*pcVar1)(this,*piVar3);
  local_18[0] = *puVar4;
  if (param_4 != (uchar *)local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,local_18,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  return;
}

// GetSampleForProperty @ 14a417b30

void __thiscall
FSampleTrack<UE::Math::TQuat<float>_>::GetSampleForProperty
          (FSampleTrack<UE::Math::TQuat<float>_> *this,int param_1,FSampleTrackIndex *param_2,
          FProperty *param_3,uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined4 *)(*pcVar1)(this,*piVar3);
  local_18 = *puVar4;
  uStack_14 = puVar4[1];
  uStack_10 = puVar4[2];
  uStack_c = puVar4[3];
  if (param_4 != (uchar *)&local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  return;
}

// GetSampleForProperty @ 14a417c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSampleTrack<UE::Math::TTransform<float>_>::GetSampleForProperty
          (FSampleTrack<UE::Math::TTransform<float>_> *this,int param_1,FSampleTrackIndex *param_2,
          FProperty *param_3,uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_68 = *puVar4;
  uStack_60 = puVar4[1];
  local_58 = *(undefined4 *)(puVar4 + 2);
  uStack_54 = *(undefined4 *)((longlong)puVar4 + 0x14);
  uStack_50 = *(undefined4 *)(puVar4 + 3);
  uStack_4c = *(undefined4 *)((longlong)puVar4 + 0x1c);
  local_48 = *(undefined4 *)(puVar4 + 4);
  uStack_44 = *(undefined4 *)((longlong)puVar4 + 0x24);
  uStack_40 = *(undefined4 *)(puVar4 + 5);
  uStack_3c = *(undefined4 *)((longlong)puVar4 + 0x2c);
  if (param_4 != (uchar *)&local_68) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_68,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,&local_68,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  return;
}

// GetSampleForProperty @ 14a417d10

void __thiscall
FSampleTrack<UE::Math::TVector<float>_>::GetSampleForProperty
          (FSampleTrack<UE::Math::TVector<float>_> *this,int param_1,FSampleTrackIndex *param_2,
          FProperty *param_3,uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18 = *puVar4;
  local_10 = *(undefined4 *)(puVar4 + 1);
  if (param_4 != (uchar *)&local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  return;
}

// GetSampleForProperty @ 14a417df0

void __thiscall
FSampleTrack<FInstancedStruct>::GetSampleForProperty
          (FSampleTrack<FInstancedStruct> *this,int param_1,FSampleTrackIndex *param_2,
          FProperty *param_3,uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  FInstancedStruct local_18;
  
  if ((param_3 == (FProperty *)0x0) || ((*(uint *)(param_3->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    param_3 = (FProperty *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_3[1]._padding_ == 0) {
    bVar2 = *(longlong *)&this->field_0x48 == 0;
  }
  else {
    bVar2 = param_3[1]._padding_ == *(longlong *)&this->field_0x48;
  }
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct == GetScriptStruct()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrack.cpp"
                         ,0x37,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(*(longlong *)this + 200))(this,&local_18,param_1,param_2);
  if (param_4 != local_18.StructMemory) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))
                (param_3,param_4,local_18.StructMemory,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,local_18.StructMemory,
             (longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  FInstancedStruct::Reset(&local_18);
  return;
}

// GetSampleForProperty @ 14a417f20

void __thiscall
FSampleTrack<FLinearColor>::GetSampleForProperty
          (FSampleTrack<FLinearColor> *this,int param_1,FSampleTrackIndex *param_2,
          FProperty *param_3,uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined4 *)(*pcVar1)(this,*piVar3);
  local_18 = *puVar4;
  uStack_14 = puVar4[1];
  uStack_10 = puVar4[2];
  uStack_c = puVar4[3];
  if (param_4 != (uchar *)&local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  return;
}

// GetSampleForProperty @ 14a418000

void __thiscall
FSampleTrack<FRigComponentKey>::GetSampleForProperty
          (FSampleTrack<FRigComponentKey> *this,int param_1,FSampleTrackIndex *param_2,
          FProperty *param_3,uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined4 *)(*pcVar1)(this,*piVar3);
  local_28 = *puVar4;
  uStack_24 = puVar4[1];
  uStack_20 = puVar4[2];
  uStack_1c = puVar4[3];
  local_18 = puVar4[4];
  if (param_4 != (uchar *)&local_28) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_28,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,&local_28,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  return;
}

// GetSampleForProperty @ 14a4180e0

void __thiscall
FSampleTrack<FRigElementKey>::GetSampleForProperty
          (FSampleTrack<FRigElementKey> *this,int param_1,FSampleTrackIndex *param_2,
          FProperty *param_3,uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18 = *puVar4;
  local_10 = *(undefined4 *)(puVar4 + 1);
  if (param_4 != (uchar *)&local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  return;
}

// GetSampleForProperty @ 14a4181c0

void __thiscall
FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 << 2);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a418300

void __thiscall
FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 << 2);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a418440

void __thiscall
FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 << 4);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a418580

void __thiscall
FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 * 0x30);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a4186d0

void __thiscall
FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 * 0xc);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a418820

void __thiscall
FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  uchar *_Src;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uchar *puVar10;
  bool bVar11;
  FInstancedStruct *local_48;
  undefined8 local_40;
  FScriptArrayHelper local_38;
  
  if ((param_3 == (FProperty *)0x0) || ((*(uint *)(param_3->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    param_3 = (FProperty *)0x0;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar9 = (longlong *)param_3[1]._padding_;
  if ((plVar9 == (longlong *)0x0) || ((*(uint *)(plVar9[1] + 0x18) >> 0x14 & 1) == 0)) {
    plVar9 = (longlong *)0x0;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (plVar9[0xe] == 0) {
    bVar11 = *(longlong *)&this->field_0x48 == 0;
  }
  else {
    bVar11 = plVar9[0xe] == *(longlong *)&this->field_0x48;
  }
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StructProperty->Struct == GetScriptStruct()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrack.cpp"
                          ,0x78,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(*(longlong *)this + 200))(this,&local_48,param_1,param_2);
  EVar1 = (EArrayPropertyFlags)param_3[1]._padding_;
  local_38.ElementAlignment = (**(code **)(*(longlong *)param_3[1]._padding_ + 0x168))();
  local_38.InnerProperty = (FProperty *)param_3[1]._padding_;
  local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
  local_38.field1_0x8.HeapArray = (FScriptArray *)param_4;
  local_38.ArrayFlags = EVar1;
  if ((local_38.ElementSize < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1177,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((local_38.InnerProperty == (FProperty *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InnerProperty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1178,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)local_40;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((longlong)iVar5);
  }
  iVar2 = (local_38.field1_0x8.FreezableArray)->ArrayNum;
  if (iVar2 < iVar5) {
    FScriptArrayHelper::AddValues(&local_38,iVar5 - iVar2);
  }
  else if (iVar5 < iVar2) {
    FScriptArrayHelper::RemoveValues(&local_38,iVar5,iVar2 - iVar5);
  }
  uVar7 = 0;
  iVar5 = (int)local_40;
  if (0 < iVar5) {
    lVar8 = 0;
    uVar6 = local_40;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (int)uVar6) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar6 = local_40, bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      _Src = *(uchar **)((longlong)&local_48->StructMemory + lVar8);
      if ((local_38.field1_0x8.FreezableArray)->ArrayNum == 0) {
        puVar10 = (uchar *)0x0;
      }
      else {
        puVar10 = (uchar *)(local_38.field1_0x8.FreezableArray)->_padding_;
        if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) &&
           (((ulonglong)puVar10 & 1) != 0)) {
          puVar10 = &(local_38.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar10 >> 0x18);
        }
        puVar10 = puVar10 + (longlong)local_38.ElementSize * (longlong)(int)uVar7;
      }
      if (puVar10 != _Src) {
        if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar9 + 0xf0))(plVar9,puVar10,_Src,(int)plVar9[6]);
          uVar6 = local_40;
        }
        else {
          memcpy(puVar10,_Src,(longlong)*(int *)((longlong)plVar9 + 0x34) * (longlong)(int)plVar9[6]
                );
          uVar6 = local_40;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
      iVar5 = (int)uVar6;
    } while ((int)uVar7 < iVar5);
  }
  DestructItems<FInstancedStruct,int>(local_48,iVar5);
  if (local_48 != (FInstancedStruct *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// GetSampleForProperty @ 14a418b30

void __thiscall
FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 << 4);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a418c80

void __thiscall
FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 * 0x14);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a418dd0

void __thiscall
FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 << 3);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a418f20

void __thiscall
FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  int iVar1;
  FString *pFVar2;
  code *pcVar3;
  bool bVar4;
  int *piVar5;
  undefined8 *puVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar4 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar3 = *(code **)(*(longlong *)this + 0xd0);
  piVar5 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar6 = (undefined8 *)(*pcVar3)(this,*piVar5);
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(puVar6 + 1);
  pFVar2 = (FString *)*puVar6;
  local_10 = iVar1;
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_18,iVar1,&local_c);
    ConstructItems<FString,FString,int>(local_18.Data,pFVar2,iVar1);
  }
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  DestructItems<FString,int>((FString *)local_18.Data,local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// GetSampleForProperty @ 14a419070

void __thiscall
FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetSampleForProperty
          (FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          FSampleTrackIndex *param_2,FProperty *param_3,uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  size_t _Size;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  _Size = (size_t)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,_Size);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a4191b0

void __thiscall
FSampleTrack<FString>::GetSampleForProperty
          (FSampleTrack<FString> *this,int param_1,FSampleTrackIndex *param_2,FProperty *param_3,
          uchar *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (undefined8 *)(*pcVar1)(this,*piVar3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_10;
  _Src = (void *)*puVar4;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 * 2);
  }
  FVar5.Data = local_18.Data;
  if ((ForAnyElementType *)param_4 != &local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,&local_18,param_3->ArrayDim);
      FVar5.Data = local_18.Data;
    }
    else {
      memcpy(param_4,&local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// GetSampleForProperty @ 14a4192f0

void __thiscall
FSampleTrack<bool>::GetSampleForProperty
          (FSampleTrack<bool> *this,int param_1,FSampleTrackIndex *param_2,FProperty *param_3,
          uchar *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uchar *puVar4;
  uchar local_18 [16];
  
  bVar2 = FSampleTrackBase::GetSampleIndexForTimeIndex((FSampleTrackBase *)this,param_1,param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSampleIndexForTimeIndex(InTimeIndex, InOutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrack.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)this + 0xd0);
  piVar3 = FSampleTrackIndex::GetSample(param_2,*(int *)&this->field_0x28);
  puVar4 = (uchar *)(*pcVar1)(this,*piVar3);
  local_18[0] = *puVar4;
  if (param_4 != local_18) {
    if (((uint)(int)param_3->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_3->_padding_ + 0xf0))(param_3,param_4,local_18,param_3->ArrayDim);
    }
    else {
      memcpy(param_4,local_18,(longlong)param_3->ElementSize * (longlong)param_3->ArrayDim);
    }
  }
  return;
}

// GetSizePerValue @ 14a419810

int __thiscall FSampleTrack<int>::GetSizePerValue(FSampleTrack<int> *this)

{
  return 4;
}

// GetSizePerValue @ 14a419820

int __thiscall FSampleTrack<float>::GetSizePerValue(FSampleTrack<float> *this)

{
  return 4;
}

// GetSizePerValue @ 14a419830

int __thiscall
FSampleTrack<UE::Math::TQuat<float>_>::GetSizePerValue(FSampleTrack<UE::Math::TQuat<float>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a419840

int __thiscall
FSampleTrack<UE::Math::TTransform<float>_>::GetSizePerValue
          (FSampleTrack<UE::Math::TTransform<float>_> *this)

{
  return 0x30;
}

// GetSizePerValue @ 14a419850

int __thiscall
FSampleTrack<UE::Math::TVector<float>_>::GetSizePerValue
          (FSampleTrack<UE::Math::TVector<float>_> *this)

{
  return 0xc;
}

// GetSizePerValue @ 14a419860

int __thiscall FSampleTrack<FInstancedStruct>::GetSizePerValue(FSampleTrack<FInstancedStruct> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x48;
  if (lVar1 != 0) {
    return (*(int *)(lVar1 + 0x58) + -1 + (int)*(short *)(lVar1 + 0x5c) &
           -(int)*(short *)(lVar1 + 0x5c)) + 0x10;
  }
  return 0x10;
}

// GetSizePerValue @ 14a419890

int __thiscall FSampleTrack<FLinearColor>::GetSizePerValue(FSampleTrack<FLinearColor> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a4198a0

int __thiscall FSampleTrack<FRigComponentKey>::GetSizePerValue(FSampleTrack<FRigComponentKey> *this)

{
  return 0x14;
}

// GetSizePerValue @ 14a4198b0

int __thiscall FSampleTrack<FRigElementKey>::GetSizePerValue(FSampleTrack<FRigElementKey> *this)

{
  return 0xc;
}

// GetSizePerValue @ 14a4198c0

int __thiscall
FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a4198d0

int __thiscall
FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a4198e0

int __thiscall
FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a4198f0

int __thiscall
FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a419900

int __thiscall
FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a419910

int __thiscall
FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a419920

int __thiscall
FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a419930

int __thiscall
FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a419940

int __thiscall
FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a419950

int __thiscall
FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a419960

int __thiscall
FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetSizePerValue
          (FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a419970

int __thiscall FSampleTrack<FString>::GetSizePerValue(FSampleTrack<FString> *this)

{
  return 0x10;
}

// GetSizePerValue @ 14a419980

int __thiscall FSampleTrack<bool>::GetSizePerValue(FSampleTrack<bool> *this)

{
  return 1;
}

// Serialize @ 14a455cd0

void __thiscall FSampleTrack<int>::Serialize(FSampleTrack<int> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<int>::UpdateValueArrayView
            ((FSampleTrackShared<int> *)this);
  return;
}

// Serialize @ 14a455d10

void __thiscall FSampleTrack<float>::Serialize(FSampleTrack<float> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<float,TSizedDefaultAllocator<32>_> *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<float>::UpdateValueArrayView
            ((FSampleTrackShared<float> *)this);
  return;
}

// Serialize @ 14a455d50

void __thiscall
FSampleTrack<UE::Math::TQuat<float>_>::Serialize
          (FSampleTrack<UE::Math::TQuat<float>_> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)&this->field_0xa8
            );
  UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TQuat<float>_>::UpdateValueArrayView
            ((FSampleTrackShared<UE::Math::TQuat<float>_> *)this);
  return;
}

// Serialize @ 14a455d90

void __thiscall
FSampleTrack<UE::Math::TTransform<float>_>::Serialize
          (FSampleTrack<UE::Math::TTransform<float>_> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)
                     &this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TTransform<float>_>::UpdateValueArrayView
            ((FSampleTrackShared<UE::Math::TTransform<float>_> *)this);
  return;
}

// Serialize @ 14a455dd0

void __thiscall
FSampleTrack<UE::Math::TVector<float>_>::Serialize
          (FSampleTrack<UE::Math::TVector<float>_> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                     &this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TVector<float>_>::UpdateValueArrayView
            ((FSampleTrackShared<UE::Math::TVector<float>_> *)this);
  return;
}

// Serialize @ 14a455e10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSampleTrack<FInstancedStruct>::Serialize(FSampleTrack<FInstancedStruct> *this,FArchive *param_1)

{
  undefined1 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint local_res8 [2];
  
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  plVar1 = *(longlong **)&param_1->field_0x8;
  this_00 = &this->field_0xa8;
  local_res8[0] = *(uint *)&this->field_0xb0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if (*(int *)&this->field_0xb4 < 0) {
      DestructItems<FInstancedStruct,int>(*(FInstancedStruct **)this_00,*(int *)&this->field_0xb0);
      *(undefined4 *)&this->field_0xb0 = 0;
      if (*(int *)&this->field_0xb4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)&this->field_0xb4);
      }
    }
    else {
      DestructItems<FInstancedStruct,int>(*(FInstancedStruct **)this_00,*(int *)&this->field_0xb0);
      *(undefined4 *)&this->field_0xb0 = 0;
    }
    TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)this_00,local_res8[0],Default
              );
  }
  uVar5 = 0;
  if (0 < (int)local_res8[0]) {
    do {
      uVar4 = 0;
      if ((int)uVar5 < *(int *)&this->field_0xb0) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FInstancedStruct::Serialize
                ((FInstancedStruct *)((longlong)(int)uVar5 * 0x10 + *(longlong *)this_00),param_1,
                 (UStruct *)0x0,(void *)0x0);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)local_res8[0]);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    UE::ControlRig::Internal::FSampleTrackShared<FInstancedStruct>::UpdateValueArrayView
              ((FSampleTrackShared<FInstancedStruct> *)this);
  }
  return;
}

// Serialize @ 14a455f90

void __thiscall
FSampleTrack<FLinearColor>::Serialize(FSampleTrack<FLinearColor> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<FLinearColor,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<FLinearColor>::UpdateValueArrayView
            ((FSampleTrackShared<FLinearColor> *)this);
  return;
}

// Serialize @ 14a455fd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FSampleTrack<FRigComponentKey>::Serialize(FSampleTrack<FRigComponentKey> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<FRigComponentKey,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<FRigComponentKey>::UpdateValueArrayView
            ((FSampleTrackShared<FRigComponentKey> *)this);
  return;
}

// Serialize @ 14a456010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FSampleTrack<FRigElementKey>::Serialize(FSampleTrack<FRigElementKey> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<FRigElementKey,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<FRigElementKey>::UpdateValueArrayView
            ((FSampleTrackShared<FRigElementKey> *)this);
  return;
}

// Serialize @ 14a456050

void __thiscall
FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
  UpdateValueArrayView
            ((FSampleTrackShared<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *)this);
  return;
}

// Serialize @ 14a456090

void __thiscall
FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<TArray<float,TSizedDefaultAllocator<32>_>_>::
  UpdateValueArrayView((FSampleTrackShared<TArray<float,TSizedDefaultAllocator<32>_>_> *)this);
  return;
}

// Serialize @ 14a4560d0

void __thiscall
FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this,
          FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0xa8);
  UE::ControlRig::Internal::
  FSampleTrackShared<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
  UpdateValueArrayView
            ((FSampleTrackShared<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *)this
            );
  return;
}

// Serialize @ 14a456110

void __thiscall
FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> *this,
          FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0xa8);
  UE::ControlRig::Internal::
  FSampleTrackShared<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>::
  UpdateValueArrayView
            ((FSampleTrackShared<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> *
             )this);
  return;
}

// Serialize @ 14a456150

void __thiscall
FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this,
          FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0xa8);
  UE::ControlRig::Internal::
  FSampleTrackShared<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
  UpdateValueArrayView
            ((FSampleTrackShared<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
             this);
  return;
}

// Serialize @ 14a456190

void __thiscall
FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> *this,
          FArchive *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *this_00;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ForAnyElementType *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *this_01;
  longlong lVar15;
  uint local_res8 [2];
  uint local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = *(uint *)&this->field_0xb0;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this_00 = &this->field_0xa8;
    puVar1 = &this->field_0xb4;
    if (*(int *)&this->field_0xb4 < 0) {
      DestructItems<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,int>
                (*(TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> **)this_00,
                 *(int *)&this->field_0xb0);
      *(undefined4 *)&this->field_0xb0 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
    }
    else {
      DestructItems<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,int>
                (*(TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> **)this_00,
                 *(int *)&this->field_0xb0);
      *(undefined4 *)&this->field_0xb0 = 0;
    }
    uVar11 = local_res10[0];
    iVar8 = *(int *)&this->field_0xb0;
    if (iVar8 < (int)local_res10[0]) {
      iVar8 = local_res10[0] - iVar8;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar8,(ForAnyElementType *)this_00,(int *)&this->field_0xb0,
                         (int *)puVar1);
      memset((void *)((longlong)iVar7 * 0x10 + *(longlong *)this_00),0,(longlong)iVar8 << 4);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar8) {
        uVar9 = iVar8 - local_res10[0];
        if (((int)(uVar9 | local_res10[0]) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar9 != 0) {
          TArray<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
          RemoveAtImpl((TArray<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)this_00,uVar11,uVar9);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)this_00,*(int *)&this->field_0xb0,(int *)puVar1);
        }
      }
    }
  }
  uVar11 = 0;
  if (0 < (int)local_res10[0]) {
    local_res18 = 0;
    local_res20 = 0;
    do {
      lVar15 = local_res20;
      lVar13 = local_res18;
      uVar14 = ~uVar11 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&this->field_0xb0) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_res8[0] = *(uint *)(*(longlong *)&this->field_0xa8 + 8 + lVar15);
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res8);
        }
      }
      else {
        local_res8[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      if ((param_1->field_0x28 & 1) != 0) {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)&this->field_0xb0) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = (ForAnyElementType *)(*(longlong *)&this->field_0xa8 + lVar15);
        piVar2 = (int *)((longlong)&pFVar10[1].Data + 4);
        if (*(int *)((longlong)&pFVar10[1].Data + 4) < 0) {
          DestructItems<FInstancedStruct,int>
                    ((FInstancedStruct *)pFVar10->Data,*(int *)&pFVar10[1].Data);
          *(undefined4 *)&pFVar10[1].Data = 0;
          if (*piVar2 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,pFVar10,0,piVar2);
          }
        }
        else {
          DestructItems<FInstancedStruct,int>
                    ((FInstancedStruct *)pFVar10->Data,*(int *)&pFVar10[1].Data);
          *(undefined4 *)&pFVar10[1].Data = 0;
        }
        uVar9 = 0;
        if ((int)uVar11 < *(int *)&this->field_0xb0) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = local_res8[0];
        this_01 = (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)
                  (lVar15 + *(longlong *)&this->field_0xa8);
        iVar8 = this_01->ArrayNum;
        if (iVar8 < (int)local_res8[0]) {
          iVar8 = local_res8[0] - iVar8;
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,iVar8,(ForAnyElementType *)this_01,&this_01->ArrayNum,
                             &this_01->ArrayMax);
          DefaultConstructItems<FInstancedStruct,int>
                    ((this_01->AllocatorInstance).Data + (longlong)iVar7 * 0x10,iVar8);
          lVar13 = local_res18;
          lVar15 = local_res20;
        }
        else {
          if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
          }
          lVar13 = local_res18;
          lVar15 = local_res20;
          if ((int)local_res8[0] < iVar8) {
            uVar12 = iVar8 - local_res8[0];
            if (((int)(local_res8[0] | uVar12) < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar13 = local_res18;
            lVar15 = local_res20;
            if (uVar12 != 0) {
              TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (this_01,uVar9,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,(ForAnyElementType *)this_01,this_01->ArrayNum,&this_01->ArrayMax);
              lVar13 = local_res18;
              lVar15 = local_res20;
            }
          }
        }
      }
      uVar9 = 0;
      if (0 < (int)local_res8[0]) {
        do {
          uVar12 = 0;
          if ((int)uVar11 < *(int *)&this->field_0xb0) {
            uVar12 = uVar14;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar4 = *(longlong *)&this->field_0xa8;
          uVar12 = 0;
          if ((int)uVar9 < *(int *)(lVar4 + 8 + lVar15)) {
            uVar12 = ~uVar9 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FInstancedStruct::Serialize
                    ((FInstancedStruct *)
                     ((longlong)(int)uVar9 * 0x10 + *(longlong *)(lVar4 + lVar15)),param_1,
                     (UStruct *)0x0,(void *)0x0);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)local_res8[0]);
      }
      local_res18 = lVar13 + 1;
      local_res20 = lVar15 + 0x10;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_res10[0]);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    UE::ControlRig::Internal::
    FSampleTrackShared<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>::UpdateValueArrayView
              ((FSampleTrackShared<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> *)this);
  }
  return;
}

// Serialize @ 14a456740

void __thiscall
FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
  UpdateValueArrayView
            ((FSampleTrackShared<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)this);
  return;
}

// Serialize @ 14a456780

void __thiscall
FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> *this,
          FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0xa8);
  UE::ControlRig::Internal::
  FSampleTrackShared<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>::UpdateValueArrayView
            ((FSampleTrackShared<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> *)this);
  return;
}

// Serialize @ 14a4567c0

void __thiscall
FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<FName,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<FName,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<TArray<FName,TSizedDefaultAllocator<32>_>_>::
  UpdateValueArrayView((FSampleTrackShared<TArray<FName,TSizedDefaultAllocator<32>_>_> *)this);
  return;
}

// Serialize @ 14a456800

void __thiscall
FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<TArray<FString,TSizedDefaultAllocator<32>_>_>::
  UpdateValueArrayView((FSampleTrackShared<TArray<FString,TSizedDefaultAllocator<32>_>_> *)this);
  return;
}

// Serialize @ 14a456840

void __thiscall
FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>::Serialize
          (FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::
  Serialize<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
                     )&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<TArray<bool,TSizedDefaultAllocator<32>_>_>::
  UpdateValueArrayView((FSampleTrackShared<TArray<bool,TSizedDefaultAllocator<32>_>_> *)this);
  return;
}

// Serialize @ 14a456880

void __thiscall FSampleTrack<FString>::Serialize(FSampleTrack<FString> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FString,TSizedDefaultAllocator<32>_> *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<FString>::UpdateValueArrayView
            ((FSampleTrackShared<FString> *)this);
  return;
}

// Serialize @ 14a4568c0

void __thiscall FSampleTrack<bool>::Serialize(FSampleTrack<bool> *this,FArchive *param_1)

{
  FSampleTrackBase::Serialize((FSampleTrackBase *)this,param_1);
  TArrayPrivateFriend::Serialize<bool,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<bool,TSizedDefaultAllocator<32>_> *)&this->field_0xa8);
  UE::ControlRig::Internal::FSampleTrackShared<bool>::UpdateValueArrayView
            ((FSampleTrackShared<bool> *)this);
  return;
}

