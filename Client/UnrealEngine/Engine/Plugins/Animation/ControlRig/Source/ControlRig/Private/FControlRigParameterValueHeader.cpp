// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 29

// FControlRigParameterValueHeader @ 14a3b6210

FControlRigParameterValueHeader * __thiscall
UE::MovieScene::FControlRigParameterValueHeader::FControlRigParameterValueHeader
          (FControlRigParameterValueHeader *this,FControlRigParameterValueHeader *param_1)

{
  undefined1 uVar1;
  
  this->Data = param_1->Data;
  this->Capacity = param_1->Capacity;
  this->NumElements = param_1->NumElements;
  this->field_0xc = this->field_0xc ^ (param_1->Alignment ^ this->Alignment) & 0x7f;
  this->field_0xc = (param_1->Alignment ^ param_1->Alignment) & 0x7f ^ param_1->field_0xc;
  this->Type = param_1->Type;
  param_1->Data = (uchar *)0x0;
  param_1->Capacity = 0;
  param_1->NumElements = 0;
  param_1->Alignment = '\0';
  param_1->bStableIndices = '\0';
  return this;
}

// FControlRigParameterValueHeader @ 14a3b6270

FControlRigParameterValueHeader * __thiscall
UE::MovieScene::FControlRigParameterValueHeader::FControlRigParameterValueHeader
          (FControlRigParameterValueHeader *this,FControlRigParameterValueHeader *param_1)

{
  ushort uVar1;
  uchar *_Src;
  undefined1 uVar2;
  ulong64 uVar3;
  uchar *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  this->Data = (uchar *)0x0;
  this->Capacity = 0;
  this->NumElements = 0;
  this->field_0xc = this->field_0xc ^ (param_1->Alignment ^ this->Alignment) & 0x7f;
  this->field_0xc = (param_1->Alignment ^ param_1->Alignment) & 0x7f ^ param_1->field_0xc;
  this->Type = param_1->Type;
  uVar1 = param_1->Capacity;
  uVar3 = GetParameterSize(this);
  uVar4 = (ulonglong)uVar1 + 7;
  uVar6 = (ulonglong)this->Capacity;
  _Src = this->Data;
  uVar5 = uVar4 & 0xfffffffffffffff8;
  uVar7 = 0;
  if (this->Alignment != 4) {
    uVar7 = this->Alignment;
  }
  if (uVar6 < uVar5) {
    _Dst = FMemory::Malloc((longlong)(int)(((int)uVar3 + 8) * (int)uVar5 + uVar7),4);
    this->Data = _Dst;
    if (this->NumElements != 0) {
      memcpy(_Dst,_Src,(ulonglong)this->NumElements << 3);
      uVar6 = this->Alignment;
      memcpy((void *)((ulonglong)(this->Data + uVar6 + (uVar4 & 0xfff8) * 8 + -1) & ~(uVar6 - 1)),
             (void *)((ulonglong)(_Src + (ulonglong)this->Capacity * 8 + -1 + uVar6) & ~(uVar6 - 1))
             ,this->NumElements * uVar3);
      FMemory::Free(_Src);
    }
    this->Capacity = (ushort)uVar5;
    uVar6 = uVar4 & 0xfff8;
  }
  uVar1 = param_1->NumElements;
  this->NumElements = uVar1;
  if (uVar1 != 0) {
    uVar4 = 0;
    if (this->Alignment != 4) {
      uVar4 = this->Alignment;
    }
    uVar3 = GetParameterSize(this);
    memcpy(this->Data,param_1->Data,(uVar3 + 8) * uVar6 + uVar4);
  }
  return this;
}

// FControlRigParameterValueHeader @ 14a3b6400

FControlRigParameterValueHeader * __thiscall
UE::MovieScene::FControlRigParameterValueHeader::FControlRigParameterValueHeader
          (FControlRigParameterValueHeader *this,EControlRigControlType param_1,
          EControlRigParameterBufferIndexStability param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  FControlRigParameterValueHeader *pFVar4;
  byte bVar5;
  
  bVar5 = 0;
  this->Type = param_1;
  this->Data = (uchar *)0x0;
  this->Capacity = 0;
  this->NumElements = 0;
  if (param_2 == Stable) {
    bVar5 = 0x80;
  }
  uVar1 = this->field_0xc;
  this->bStableIndices = bVar5 >> 7;
  switch(param_1) {
  case Space:
  case Parameter_Integer:
  case Parameter_Scalar:
  case Parameter_Vector:
    this->field_0xc = bVar5 | uVar1 & 4 | 4;
    return this;
  case Parameter_Bool:
  case Parameter_Enum:
    this->field_0xc = bVar5 | uVar1 & 1 | 1;
    return this;
  case Parameter_Transform:
    this->field_0xc = bVar5 | uVar1 & 8 | 8;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterBuffer.cpp"
                     ,0x65,L"");
  if (!bVar3) {
    return this;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FControlRigParameterValueHeader *)(*pcVar2)();
  return pFVar4;
}

// ~FControlRigParameterValueHeader @ 14a3bc8d0

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::~FControlRigParameterValueHeader
          (FControlRigParameterValueHeader *this)

{
  uchar *puVar1;
  FLowLevelMemTracker *this_00;
  
  puVar1 = this->Data;
  if (puVar1 == (uchar *)0x0) {
    return;
  }
  if (puVar1 != (uchar *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,puVar1);
  }
  return;
}

// operator= @ 14a3bd6b0

FControlRigParameterValueHeader * __thiscall
UE::MovieScene::FControlRigParameterValueHeader::operator=
          (FControlRigParameterValueHeader *this,FControlRigParameterValueHeader *param_1)

{
  undefined1 uVar1;
  
  if (this->Data != (uchar *)0x0) {
    FMemory::Free(this->Data);
  }
  this->Data = param_1->Data;
  this->Capacity = param_1->Capacity;
  this->NumElements = param_1->NumElements;
  this->field_0xc = this->field_0xc ^ (param_1->Alignment ^ this->Alignment) & 0x7f;
  this->field_0xc = (param_1->Alignment ^ param_1->Alignment) & 0x7f ^ param_1->field_0xc;
  this->Type = param_1->Type;
  param_1->Data = (uchar *)0x0;
  param_1->Capacity = 0;
  param_1->NumElements = 0;
  param_1->Alignment = '\0';
  param_1->bStableIndices = '\0';
  return this;
}

// operator= @ 14a3bd730

FControlRigParameterValueHeader * __thiscall
UE::MovieScene::FControlRigParameterValueHeader::operator=
          (FControlRigParameterValueHeader *this,FControlRigParameterValueHeader *param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  uchar *_Src;
  undefined1 uVar3;
  ulong64 uVar4;
  uchar *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  puVar1 = &this->field_0xc;
  if (this->Data != (uchar *)0x0) {
    FMemory::Free(this->Data);
    this->Data = (uchar *)0x0;
    this->Capacity = 0;
    this->NumElements = 0;
    this->Alignment = '\0';
    this->bStableIndices = '\0';
  }
  *puVar1 = *puVar1 ^ (param_1->Alignment ^ this->Alignment) & 0x7f;
  *puVar1 = (param_1->Alignment ^ param_1->Alignment) & 0x7f ^ param_1->field_0xc;
  this->Type = param_1->Type;
  uVar2 = param_1->Capacity;
  uVar4 = GetParameterSize(this);
  uVar5 = (ulonglong)uVar2 + 7;
  uVar8 = (ulonglong)this->Capacity;
  uVar6 = uVar5 & 0xfffffffffffffff8;
  _Src = this->Data;
  uVar7 = 0;
  if (this->Alignment != 4) {
    uVar7 = this->Alignment;
  }
  if (uVar8 < uVar6) {
    _Dst = FMemory::Malloc((longlong)(int)(((int)uVar4 + 8) * (int)uVar6 + uVar7),4);
    this->Data = _Dst;
    if (this->NumElements != 0) {
      memcpy(_Dst,_Src,(ulonglong)this->NumElements << 3);
      uVar8 = this->Alignment;
      memcpy((void *)((ulonglong)(this->Data + uVar8 + (uVar5 & 0xfff8) * 8 + -1) & ~(uVar8 - 1)),
             (void *)((ulonglong)(_Src + (ulonglong)this->Capacity * 8 + -1 + uVar8) & ~(uVar8 - 1))
             ,this->NumElements * uVar4);
      FMemory::Free(_Src);
    }
    this->Capacity = (ushort)uVar6;
    uVar8 = uVar5 & 0xfff8;
  }
  uVar2 = param_1->NumElements;
  this->NumElements = uVar2;
  if (uVar2 != 0) {
    uVar5 = 0;
    if (this->Alignment != 4) {
      uVar5 = this->Alignment;
    }
    uVar4 = GetParameterSize(this);
    memcpy(this->Data,param_1->Data,(uVar4 + 8) * uVar8 + uVar5);
  }
  return this;
}

// Add @ 14a3c9b20

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Add
          (FControlRigParameterValueHeader *this,FName param_1,void *param_2)

{
  int iVar1;
  ulong64 uVar2;
  ulong64 _Size;
  ulonglong uVar3;
  
  iVar1 = Add_GetIndex(this,param_1);
  if (this->Data == (uchar *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = this->Alignment;
    uVar3 = (ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar3) & -uVar3;
  }
  uVar2 = GetParameterSize(this);
  _Size = GetParameterSize(this);
  memcpy((void *)(uVar3 + uVar2 * (longlong)iVar1),param_2,_Size);
  return;
}

// Add_GetIndex @ 14a3e8b30

int __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Add_GetIndex
          (FControlRigParameterValueHeader *this,FName param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  uint uStackX_14;
  
  uVar7 = (uint)this->NumElements;
  if ((bool)this->bStableIndices) {
    InsertDefaulted(this,param_1,uVar7);
    return uVar7;
  }
  uVar8 = 0;
  if (this->NumElements == 0) {
    puVar10 = (uchar *)0x0;
    uVar9 = 0;
  }
  else {
    puVar10 = this->Data;
    uVar9 = uVar7;
    if (uVar7 != 0) {
      uStackX_14 = param_1.Number;
      uVar6 = uVar7;
      do {
        iVar4 = (uVar6 >> 1) + uVar8;
        iVar5 = *(int *)(puVar10 + (longlong)iVar4 * 8) - param_1.ComparisonIndex.Value;
        if (iVar5 == 0) {
          iVar5 = *(int *)(puVar10 + (longlong)iVar4 * 8 + 4) - uStackX_14;
        }
        if (iVar5 < 0) {
          uVar8 = iVar4 + (uVar6 & 1);
        }
        uVar2 = uVar6 >> 1;
        uVar6 = uVar6 >> 1;
      } while (uVar2 != 0);
    }
  }
  if ((int)uVar8 < (int)uVar7) {
    uVar7 = 0;
    if ((int)uVar8 < (int)uVar9) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    if (*(FName *)(puVar10 + (longlong)(int)uVar8 * 8) == param_1) {
      return uVar8;
    }
  }
  InsertDefaulted(this,param_1,uVar8);
  return uVar8;
}

// Add_GetPtr @ 14a3e8c60

void * __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Add_GetPtr
          (FControlRigParameterValueHeader *this,FName param_1)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  iVar1 = Add_GetIndex(this,param_1);
  if (this->Data == (uchar *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = this->Alignment;
    uVar3 = (ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar3) & -uVar3;
  }
  uVar2 = GetParameterSize(this);
  return (void *)(uVar2 * (longlong)iVar1 + uVar3);
}

// Apply @ 14a3ea920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Apply
          (FControlRigParameterValueHeader *this,UControlRig *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uchar *puVar7;
  uchar *puVar8;
  uint uVar9;
  uchar *puVar10;
  
  uVar1 = this->NumElements;
  puVar7 = (uchar *)0x0;
  puVar10 = puVar7;
  if (uVar1 != 0) {
    puVar10 = this->Data;
  }
  uVar9 = 0;
  if (uVar1 != 0) {
    uVar9 = (uint)uVar1;
  }
  puVar8 = puVar7;
  if (this->Data != (uchar *)0x0) {
    uVar5 = this->Alignment;
    puVar8 = (uchar *)((ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar5) & -uVar5
                      );
  }
  if (uVar1 != 0) {
    do {
      uVar6 = (uint)puVar7;
      uVar4 = 0;
      if ((int)uVar6 < (int)uVar9) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      Apply(this,param_1,*(FName *)(puVar10 + (longlong)(int)uVar6 * 8),uVar6,puVar8);
      puVar7 = (uchar *)(ulonglong)(uVar6 + 1);
    } while ((int)(uVar6 + 1) < (int)(uint)this->NumElements);
  }
  return;
}

// Apply @ 14a3eaa40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Apply
          (FControlRigParameterValueHeader *this,UControlRig *param_1,FName param_2,int param_3,
          void *param_4)

{
  bool *pbVar1;
  double *pdVar2;
  undefined4 *puVar3;
  ERigControlType EVar4;
  EEulerRotationOrder EVar5;
  URigHierarchy *pUVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FRigElementKey *pFVar14;
  longlong lVar15;
  FRigControlElement *pFVar16;
  TQuat<double> *pTVar17;
  uint uVar18;
  longlong lVar19;
  FRigPreferredEulerAngles *pFVar20;
  FName local_res18;
  TRotator<double> local_208;
  undefined1 local_1e8 [24];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 local_150;
  FRigControlModifiedContext local_148;
  double local_128;
  double dStack_120;
  double local_118;
  TRotator<double> TStack_110;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  TRotator<double> local_d8;
  TQuat<double> local_b8;
  TQuat<double> local_98 [4];
  
  lVar19 = (longlong)param_3;
  local_148.EventName.Number = 0;
  local_148.bConstraintUpdate = false;
  local_148.SetKey = Never;
  local_148.KeyMask = 0x1ff;
  local_148.LocalTime = 3.4028235e+38;
  local_148.EventName.ComparisonIndex.Value = 0;
  local_res18 = param_2;
  switch(this->Type) {
  case Space:
    pUVar6 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
    lVar15 = (**(code **)(param_1->_padding_ + 0x3c8))(param_1,&local_res18);
    if (pUVar6 == (URigHierarchy *)0x0) {
      return;
    }
    if (lVar15 == 0) {
      return;
    }
    local_b8.X = *(double *)(lVar15 + 0x10);
    local_b8.Y._0_4_ = *(undefined4 *)(lVar15 + 0x18);
    pdVar2 = (double *)((longlong)param_4 + lVar19 * 0x10);
    local_1e8._0_8_ = *pdVar2;
    local_1e8._8_8_ = pdVar2[1];
    uVar18 = *(uint *)pdVar2 & 0xff;
    if ((char)*(uint *)pdVar2 == '\0') {
      local_d8.Pitch = local_b8.X;
      local_d8.Yaw._0_4_ = local_b8.Y._0_4_;
      pFVar14 = URigHierarchy::GetDefaultParent
                          (pUVar6,(FRigElementKey *)&local_208,(FRigElementKey *)&local_d8);
    }
    else if (uVar18 == 1) {
      pFVar14 = URigHierarchy::GetWorldSpaceReferenceKey((FRigElementKey *)&local_d8);
    }
    else {
      if (uVar18 != 2) {
        return;
      }
      pFVar14 = (FRigElementKey *)(local_1e8 + 4);
    }
    UControlRig::SwitchToParent(param_1,(FRigElementKey *)&local_b8,pFVar14,false,true);
    return;
  case Parameter_Bool:
    uStack_1c8 = 0;
    local_1d0 = (ulonglong)*(byte *)(lVar19 + (longlong)param_4);
    break;
  case Parameter_Enum:
    uStack_1c8 = 0;
    local_1d0 = (ulonglong)*(byte *)(lVar19 + (longlong)param_4);
    break;
  case Parameter_Integer:
    uStack_1c8 = 0;
    local_1d0 = (ulonglong)*(uint *)((longlong)param_4 + lVar19 * 4);
    break;
  case Parameter_Scalar:
    uStack_1c8 = 0;
    local_1d0 = (ulonglong)*(uint *)((longlong)param_4 + lVar19 * 4);
    break;
  case Parameter_Vector:
    lVar15 = (**(code **)(param_1->_padding_ + 0x3c8))(param_1,&local_res18);
    pUVar6 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
    if (((pUVar6 != (URigHierarchy *)0x0) && (lVar15 != 0)) && (*(char *)(lVar15 + 0x231) == '\x06')
       ) {
      local_208.Roll = (double)*(float *)((longlong)param_4 + lVar19 * 0xc);
      local_208.Pitch = (double)*(float *)((longlong)param_4 + lVar19 * 0xc + 4);
      local_208.Yaw = (double)*(float *)((longlong)param_4 + lVar19 * 0xc + 8);
      local_1e8._0_8_ = local_208.Roll;
      local_1e8._8_8_ = local_208.Pitch;
      local_1e8._16_8_ = local_208.Yaw;
      if ((pUVar6->bUsePreferredEulerAngles == false) || (*(char *)(lVar15 + 0x3e1) == '\0')) {
        UE::Math::TRotator<double>::Quaternion(&local_208,&local_b8);
      }
      else {
        FRigPreferredEulerAngles::GetQuatFromRotator
                  ((FRigPreferredEulerAngles *)(lVar15 + 0x450),&local_b8,&local_208);
      }
      pFVar20 = (FRigPreferredEulerAngles *)(lVar15 + 0x450);
      UE::Math::TRotator<double>::TRotator<double>(&local_d8,&local_b8);
      if ((pUVar6->bUsePreferredEulerAngles == false) || (*(char *)(lVar15 + 0x3e1) == '\0')) {
        local_208.Pitch = (double)local_1e8._8_8_;
        local_208.Yaw = (double)local_1e8._16_8_;
        local_208.Roll = (double)local_1e8._0_8_;
        FRigPreferredEulerAngles::SetRotator
                  (pFVar20,(TRotator<double> *)&local_b8,&local_208,false,false);
      }
      else {
        EVar5 = *(EEulerRotationOrder *)(lVar15 + 0x3e0);
        FRigPreferredEulerAngles::SetRotationOrder(pFVar20,EVar5);
        FRigPreferredEulerAngles::SetAngles(pFVar20,(TVector<double> *)local_1e8,false,EVar5,false);
      }
      local_208.Pitch = local_d8.Pitch;
      local_208.Roll = local_d8.Roll;
      UControlRig::SetControlValue<UE::Math::TRotator<double>_>
                (param_1,&local_res18,&local_208,true,&local_148,false,false,false);
      return;
    }
    local_1d0 = *(ulonglong *)((longlong)param_4 + lVar19 * 0xc);
    uStack_1c8 = (ulonglong)*(uint *)((longlong)param_4 + lVar19 * 0xc + 8);
    break;
  case Parameter_Transform:
    pUVar6 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
    if (pUVar6 != (URigHierarchy *)0x0) {
      pdVar2 = (double *)((longlong)param_4 + lVar19 * 0x48);
      local_128 = *pdVar2;
      dStack_120 = pdVar2[1];
      pdVar2 = (double *)((longlong)param_4 + lVar19 * 0x48 + 0x10);
      local_118 = *pdVar2;
      TStack_110.Pitch = pdVar2[1];
      pdVar2 = (double *)((longlong)param_4 + lVar19 * 0x48 + 0x20);
      TStack_110.Yaw = *pdVar2;
      TStack_110.Roll = pdVar2[1];
      puVar3 = (undefined4 *)((longlong)param_4 + lVar19 * 0x48 + 0x30);
      local_f8 = *puVar3;
      uStack_f4 = puVar3[1];
      uStack_f0 = puVar3[2];
      uStack_ec = puVar3[3];
      local_e8 = *(double *)((longlong)param_4 + lVar19 * 0x48 + 0x40);
      pFVar16 = (FRigControlElement *)
                (**(code **)(param_1->_padding_ + 0x3c8))(param_1,&local_res18);
      if (pFVar16 != (FRigControlElement *)0x0) {
        EVar4 = (pFVar16->Settings).ControlType;
        if (EVar4 == Transform) {
          local_1e8._0_8_ = TStack_110.Roll;
          local_1e8._8_8_ = TStack_110.Pitch;
          local_1e8._16_8_ = TStack_110.Yaw;
          URigHierarchy::SetControlSpecifiedEulerAngle
                    (pUVar6,pFVar16,(TVector<double> *)local_1e8,false);
          pTVar17 = UE::Math::TRotator<double>::Quaternion(&TStack_110,local_98);
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_198 = 0;
          uStack_194 = 0;
          uStack_1a4 = 0;
          uStack_190 = 0;
          local_18c = 0;
          uStack_188 = 0;
          uStack_184 = 0;
          uStack_180 = 0;
          local_17c = 0;
          uStack_178 = 0;
          uStack_174 = 0;
          uStack_170 = 0;
          local_16c = 0;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_160 = 0;
          local_15c = 0;
          uStack_158 = 0;
          local_154 = 0;
          local_150 = 1;
          local_1d0 = CONCAT44((float)pTVar17->Y,(float)pTVar17->X);
          uStack_1c8 = CONCAT44((float)pTVar17->W,(float)pTVar17->Z);
          local_1c0 = CONCAT44((float)dStack_120,(float)local_128);
          uStack_1b8 = (ulonglong)(uint)(float)local_118;
          local_1b0 = (float)(double)CONCAT44(uStack_f4,local_f8);
          fStack_1ac = (float)(double)CONCAT44(uStack_ec,uStack_f0);
          fStack_1a8 = (float)local_e8;
          (**(code **)(param_1->_padding_ + 0x3f0))
                    (param_1,&local_res18,&local_1d0,1,&local_148,0,0,0);
        }
        else if (EVar4 == TransformNoScale) {
          pTVar17 = UE::Math::TRotator<double>::Quaternion(&TStack_110,local_98);
          dVar13 = local_118;
          dVar12 = dStack_120;
          dVar11 = local_128;
          dVar7 = pTVar17->X;
          dVar8 = pTVar17->Y;
          dVar9 = pTVar17->Z;
          dVar10 = pTVar17->W;
          local_1e8._0_8_ = TStack_110.Roll;
          local_1e8._8_8_ = TStack_110.Pitch;
          local_1e8._16_8_ = TStack_110.Yaw;
          URigHierarchy::SetControlSpecifiedEulerAngle
                    (pUVar6,pFVar16,(TVector<double> *)local_1e8,false);
          local_1b0 = 0.0;
          fStack_1ac = 0.0;
          fStack_1a8 = 0.0;
          uStack_1a4 = 0;
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_198 = 0;
          uStack_194 = 0;
          uStack_190 = 0;
          local_18c = 0;
          uStack_188 = 0;
          uStack_184 = 0;
          uStack_180 = 0;
          local_17c = 0;
          uStack_178 = 0;
          uStack_174 = 0;
          local_150 = 1;
          uStack_170 = 0;
          local_16c = 0;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_160 = 0;
          local_15c = 0;
          uStack_158 = 0;
          local_154 = 0;
          local_1d0 = CONCAT44((float)dVar8,(float)dVar7);
          uStack_1c8 = CONCAT44((float)dVar10,(float)dVar9);
          local_1c0 = CONCAT44((float)dVar12,(float)dVar11);
          uStack_1b8 = (ulonglong)(uint)(float)dVar13;
          (**(code **)(param_1->_padding_ + 0x3f0))
                    (param_1,&local_res18,&local_1d0,1,&local_148,0,0,0);
        }
        else if (EVar4 == EulerTransform) {
          pbVar1 = &(pFVar16->Settings).bUsePreferredRotationOrder;
          local_1e8._0_8_ = TStack_110.Roll;
          local_1e8._8_8_ = TStack_110.Pitch;
          local_1e8._16_8_ = TStack_110.Yaw;
          local_208.Pitch = TStack_110.Pitch;
          local_208.Yaw = TStack_110.Yaw;
          local_208.Roll = TStack_110.Roll;
          if ((pUVar6->bUsePreferredEulerAngles == false) || (*pbVar1 == false)) {
            UE::Math::TRotator<double>::Quaternion(&local_208,local_98);
          }
          else {
            FRigPreferredEulerAngles::GetQuatFromRotator
                      (&pFVar16->PreferredEulerAngles,local_98,&local_208);
          }
          pFVar20 = &pFVar16->PreferredEulerAngles;
          if ((pUVar6->bUsePreferredEulerAngles == false) || (*pbVar1 == false)) {
            local_208.Pitch = (double)local_1e8._8_8_;
            local_208.Yaw = (double)local_1e8._16_8_;
            local_208.Roll = (double)local_1e8._0_8_;
            FRigPreferredEulerAngles::SetRotator
                      (pFVar20,(TRotator<double> *)&local_b8,&local_208,false,false);
          }
          else {
            EVar5 = (pFVar16->Settings).PreferredRotationOrder;
            FRigPreferredEulerAngles::SetRotationOrder(pFVar20,EVar5);
            FRigPreferredEulerAngles::SetAngles
                      (pFVar20,(TVector<double> *)local_1e8,false,EVar5,false);
          }
          UE::Math::TRotator<double>::TRotator<double>(&local_d8,local_98);
          TStack_110.Pitch = local_d8.Pitch;
          fStack_1ac = 0.0;
          fStack_1a8 = 0.0;
          uStack_1a4 = 0;
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_198 = 0;
          uStack_194 = 0;
          uStack_190 = 0;
          local_15c = 0;
          uStack_158 = 0;
          local_18c = 0;
          uStack_188 = 0;
          uStack_184 = 0;
          uStack_180 = 0;
          local_154 = 0;
          local_17c = 0;
          uStack_178 = 0;
          uStack_174 = 0;
          uStack_170 = 0;
          local_16c = 0;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_160 = 0;
          local_150 = 1;
          local_1d0 = CONCAT44((float)(double)CONCAT44(local_d8.Yaw._4_4_,local_d8.Yaw._0_4_),
                               (float)local_d8.Pitch);
          uStack_1c8 = CONCAT44((float)local_128,(float)local_d8.Roll);
          local_1c0 = CONCAT44((float)local_118,(float)dStack_120);
          local_1b0 = (float)local_e8;
          TStack_110.Roll = local_d8.Roll;
          uStack_1b8 = CONCAT44((float)(double)CONCAT44(uStack_ec,uStack_f0),
                                (float)(double)CONCAT44(uStack_f4,local_f8));
          (**(code **)(param_1->_padding_ + 0x3f0))
                    (param_1,&local_res18,&local_1d0,1,&local_148,0,0,0);
          URigHierarchy::SetControlSpecifiedEulerAngle
                    (pUVar6,pFVar16,(TVector<double> *)local_1e8,false);
        }
      }
    }
  default:
    goto switchD_14a3eaaa3_default;
  }
  local_154 = 0;
  uStack_158 = 0;
  local_15c = 0;
  uStack_160 = 0;
  uStack_164 = 0;
  uStack_168 = 0;
  local_16c = 0;
  uStack_170 = 0;
  uStack_174 = 0;
  uStack_178 = 0;
  local_17c = 0;
  uStack_180 = 0;
  uStack_184 = 0;
  uStack_188 = 0;
  local_18c = 0;
  uStack_190 = 0;
  uStack_194 = 0;
  uStack_198 = 0;
  uStack_19c = 0;
  uStack_1a0 = 0;
  uStack_1a4 = 0;
  fStack_1a8 = 0.0;
  fStack_1ac = 0.0;
  local_1b0 = 0.0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  local_150 = 1;
  (**(code **)(param_1->_padding_ + 0x3f0))(param_1,&local_res18,&local_1d0,1,&local_148,0,0,0);
switchD_14a3eaaa3_default:
  return;
}

// ApplyAndRemove @ 14a3eb3e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::ApplyAndRemove
          (FControlRigParameterValueHeader *this,UControlRig *param_1,FName param_2)

{
  int iVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  iVar1 = Find(this,param_2);
  if (iVar1 != -1) {
    if (this->Data == (uchar *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      uVar3 = this->Alignment;
      pvVar2 = (void *)((ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar3) &
                       -uVar3);
    }
    Apply(this,param_1,param_2,iVar1,pvVar2);
    RemoveAt(this,iVar1);
  }
  return;
}

// Contains @ 14a3f5690

bool __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Contains
          (FControlRigParameterValueHeader *this,FName param_1)

{
  int iVar1;
  
  iVar1 = Find(this,param_1);
  return iVar1 != -1;
}

// Find @ 14a40a070

int __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Find
          (FControlRigParameterValueHeader *this,FName param_1)

{
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  uchar *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uStackX_14;
  
  puVar4 = (uchar *)0x0;
  uVar3 = 0;
  puVar1 = puVar4;
  if (this->NumElements != 0) {
    puVar1 = this->Data;
    uVar3 = (uint)this->NumElements;
  }
  if ((bool)this->bStableIndices) {
    puVar5 = puVar4;
    if (uVar3 != 0) {
      do {
        if (*(FName *)(puVar1 + (longlong)puVar5 * 8) == param_1) {
          return (int)puVar4;
        }
        puVar4 = (uchar *)(ulonglong)((int)puVar4 + 1);
        puVar5 = puVar5 + 1;
      } while ((longlong)puVar5 < (longlong)(ulonglong)uVar3);
      return -1;
    }
  }
  else if (uVar3 != 0) {
    uStackX_14 = param_1.Number;
    uVar2 = uVar3;
    do {
      uVar8 = uVar2 >> 1;
      iVar6 = uVar8 + (int)puVar4;
      iVar7 = *(int *)(puVar1 + (longlong)iVar6 * 8) - param_1.ComparisonIndex.Value;
      if (iVar7 == 0) {
        iVar7 = *(int *)(puVar1 + (longlong)iVar6 * 8 + 4) - uStackX_14;
      }
      if (iVar7 < 0) {
        puVar4 = (uchar *)(ulonglong)(iVar6 + (uVar2 & 1));
      }
      iVar6 = (int)puVar4;
      uVar2 = uVar8;
    } while (uVar8 != 0);
    if (iVar6 < (int)uVar3) {
      iVar7 = param_1.ComparisonIndex.Value.Value - *(int *)(puVar1 + (longlong)iVar6 * 8);
      if (iVar7 == 0) {
        iVar7 = uStackX_14 - *(int *)(puVar1 + (longlong)iVar6 * 8 + 4);
      }
      if (-1 < iVar7) {
        return iVar6;
      }
    }
  }
  return -1;
}

// GetMutableNames @ 14a4166e0

TArrayView<FName,int> * __thiscall
UE::MovieScene::FControlRigParameterValueHeader::GetMutableNames
          (FControlRigParameterValueHeader *this,TArrayView<FName,int> *__return_storage_ptr__)

{
  ushort uVar1;
  
  uVar1 = this->NumElements;
  if (uVar1 == 0) {
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FName *)this->Data;
  __return_storage_ptr__->ArrayNum = (uint)uVar1;
  return __return_storage_ptr__;
}

// GetNames @ 14a4167f0

TArrayView<FName_const_,int> * __thiscall
UE::MovieScene::FControlRigParameterValueHeader::GetNames
          (FControlRigParameterValueHeader *this,
          TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  ushort uVar1;
  
  uVar1 = this->NumElements;
  if (uVar1 == 0) {
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FName *)this->Data;
  __return_storage_ptr__->ArrayNum = (uint)uVar1;
  return __return_storage_ptr__;
}

// GetParameter @ 14a416a50

void * __thiscall
UE::MovieScene::FControlRigParameterValueHeader::GetParameter
          (FControlRigParameterValueHeader *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  
  if ((int)(uint)this->NumElements <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < NumElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterBuffer.cpp"
                       ,0xec,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (this->Data == (uchar *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = this->Alignment;
    uVar5 = (ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar5) & -uVar5;
  }
  uVar4 = GetParameterSize(this);
  return (void *)(uVar4 * (longlong)param_1 + uVar5);
}

// GetParameterBuffer @ 14a416af0

uchar * __cdecl
UE::MovieScene::FControlRigParameterValueHeader::GetParameterBuffer
          (uchar *param_1,ushort param_2,uchar param_3)

{
  return (uchar *)((ulonglong)(param_1 + (ulonglong)param_2 * 8 + -1 + (ulonglong)param_3) &
                  -(ulonglong)param_3);
}

// GetParameterBuffer @ 14a416b20

uchar * __thiscall
UE::MovieScene::FControlRigParameterValueHeader::GetParameterBuffer
          (FControlRigParameterValueHeader *this)

{
  ulonglong uVar1;
  
  if (this->Data != (uchar *)0x0) {
    uVar1 = this->Alignment;
    return (uchar *)((ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar1) & -uVar1);
  }
  return (uchar *)0x0;
}

// GetParameterSize @ 14a416b60

ulong64 __thiscall
UE::MovieScene::FControlRigParameterValueHeader::GetParameterSize
          (FControlRigParameterValueHeader *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  switch(this->Type) {
  case Space:
    return 0x10;
  case Parameter_Bool:
  case Parameter_Enum:
    return 1;
  case Parameter_Integer:
  case Parameter_Scalar:
    return 4;
  case Parameter_Vector:
    return 0xc;
  case Parameter_Transform:
    return 0x48;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterBuffer.cpp"
                     ,0x1d6,L"");
  if (!bVar2) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// GetType @ 14a41a640

EControlRigControlType __thiscall
UE::MovieScene::FControlRigParameterValueHeader::GetType(FControlRigParameterValueHeader *this)

{
  return this->Type;
}

// InsertDefaulted @ 14a423f30

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::InsertDefaulted
          (FControlRigParameterValueHeader *this,FName param_1,int param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  bool bVar7;
  ulong64 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  
  lVar9 = (longlong)param_2;
  Reserve(this,(ulonglong)this->NumElements + 1);
  if (((uint)this->Capacity < this->NumElements + 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Capacity >= NumElements+1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterBuffer.cpp"
                         ,0x18e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar3 = this->Data;
  uVar11 = this->Alignment;
  this->NumElements = this->NumElements + 1;
  iVar10 = ((uint)this->NumElements - param_2) + -1;
  uVar11 = (ulonglong)(puVar3 + uVar11 + (ulonglong)this->Capacity * 8 + -1) & -uVar11;
  if (0 < iVar10) {
    uVar8 = GetParameterSize(this);
    memmove(puVar3 + (longlong)(param_2 + 1) * 8,puVar3 + lVar9 * 8,(longlong)iVar10 * 8);
    memmove((void *)(uVar11 + (longlong)(param_2 + 1) * uVar8),(void *)(lVar9 * uVar8 + uVar11),
            (longlong)iVar10 * uVar8);
  }
  *(FName *)(puVar3 + lVar9 * 8) = param_1;
  uVar5 = FEulerTransform::Identity.Location.field0_0x0._s_0.Y;
  switch(this->Type) {
  case Space:
    puVar1 = (undefined8 *)(uVar11 + lVar9 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  case Parameter_Bool:
  case Parameter_Enum:
    *(undefined1 *)(lVar9 + uVar11) = 0;
    return;
  case Parameter_Integer:
  case Parameter_Scalar:
    *(undefined4 *)(uVar11 + lVar9 * 4) = 0;
    return;
  case Parameter_Vector:
    *(undefined8 *)(uVar11 + lVar9 * 0xc) = 0;
    *(undefined4 *)(uVar11 + 8 + lVar9 * 0xc) = 0;
    return;
  case Parameter_Transform:
    pdVar2 = (double *)(uVar11 + lVar9 * 0x48);
    *pdVar2 = FEulerTransform::Identity.Location.field0_0x0._s_0.X;
    pdVar2[1] = (double)uVar5;
    dVar6 = FEulerTransform::Identity.Rotation.Pitch;
    pdVar2 = (double *)(uVar11 + 0x10 + lVar9 * 0x48);
    *pdVar2 = FEulerTransform::Identity.Location.field0_0x0._s_0.Z;
    pdVar2[1] = dVar6;
    dVar6 = FEulerTransform::Identity.Rotation.Roll;
    pdVar2 = (double *)(uVar11 + 0x20 + lVar9 * 0x48);
    *pdVar2 = FEulerTransform::Identity.Rotation.Yaw;
    pdVar2[1] = dVar6;
    uVar5 = FEulerTransform::Identity.Scale.field0_0x0._s_0.Y;
    pdVar2 = (double *)(uVar11 + 0x30 + lVar9 * 0x48);
    *pdVar2 = FEulerTransform::Identity.Scale.field0_0x0._s_0.X;
    pdVar2[1] = (double)uVar5;
    *(double *)(uVar11 + 0x40 + lVar9 * 0x48) = FEulerTransform::Identity.Scale.field0_0x0._s_0.Z;
    return;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterBuffer.cpp"
                     ,0x1b9,L"");
  if (!bVar7) {
    return;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Num @ 14a42e870

int __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Num(FControlRigParameterValueHeader *this)

{
  return (int)this->NumElements;
}

// OptimizeForLookup @ 14a431950

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::OptimizeForLookup
          (FControlRigParameterValueHeader *this)

{
  if ((bool)this->bStableIndices) {
    this->Alignment = this->Alignment;
    this->bStableIndices = '\0';
    Resort(this);
    return;
  }
  return;
}

// Remove @ 14a43b9a0

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Remove
          (FControlRigParameterValueHeader *this,FName param_1)

{
  int iVar1;
  
  iVar1 = Find(this,param_1);
  if (iVar1 != -1) {
    RemoveAt(this,iVar1);
    return;
  }
  return;
}

// RemoveAt @ 14a43de10

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::RemoveAt
          (FControlRigParameterValueHeader *this,int param_1)

{
  ushort *puVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  int iVar6;
  ulonglong uVar7;
  
  puVar1 = &this->NumElements;
  if ((param_1 < 0) || ((int)(uint)*puVar1 <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < NumElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterBuffer.cpp"
                       ,0x17a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar2 = this->Data;
  uVar7 = this->Alignment;
  iVar6 = ((uint)*puVar1 - param_1) + -1;
  uVar7 = (ulonglong)(puVar2 + uVar7 + (ulonglong)this->Capacity * 8 + -1) & -uVar7;
  if (0 < iVar6) {
    uVar5 = GetParameterSize(this);
    memmove(puVar2 + (longlong)param_1 * 8,puVar2 + (longlong)(param_1 + 1) * 8,(longlong)iVar6 * 8)
    ;
    memmove((void *)(uVar7 + (longlong)param_1 * uVar5),
            (void *)(uVar7 + (longlong)(param_1 + 1) * uVar5),(longlong)iVar6 * uVar5);
  }
  *puVar1 = *puVar1 - 1;
  return;
}

// Reserve @ 14a44ee90

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Reserve
          (FControlRigParameterValueHeader *this,ulong64 param_1)

{
  uchar *_Src;
  ulong64 uVar1;
  uchar *_Dst;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = GetParameterSize(this);
  _Src = this->Data;
  uVar3 = param_1 + 7 & 0xfffffffffffffff8;
  uVar2 = 0;
  if (this->Alignment != 4) {
    uVar2 = this->Alignment;
  }
  if (this->Capacity < uVar3) {
    _Dst = FMemory::Malloc((longlong)(int)(((int)uVar1 + 8) * (int)uVar3 + uVar2),4);
    this->Data = _Dst;
    if (this->NumElements != 0) {
      memcpy(_Dst,_Src,(ulonglong)this->NumElements << 3);
      uVar4 = this->Alignment;
      memcpy((void *)((ulonglong)(this->Data + uVar4 + (param_1 + 7 & 0xfff8) * 8 + -1) &
                     ~(uVar4 - 1)),
             (void *)((ulonglong)(_Src + (ulonglong)this->Capacity * 8 + -1 + uVar4) & ~(uVar4 - 1))
             ,this->NumElements * uVar1);
      FMemory::Free(_Src);
    }
    this->Capacity = (ushort)uVar3;
  }
  return;
}

// Reset @ 14a44fdb0

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Reset(FControlRigParameterValueHeader *this)

{
  this->NumElements = 0;
  return;
}

// Resort @ 14a451840

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigParameterValueHeader::Resort(FControlRigParameterValueHeader *this)

{
  EControlRigControlType EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  FEulerTransform *pFVar6;
  TArrayView<FMovieSceneControlRigSpaceBaseKey,int> local_f8;
  FName *local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  TArrayView<FName,int> local_d8;
  TArrayView<bool,int> local_c8;
  TArrayView<FName,int> local_b8;
  TArrayView<unsigned_char,int> local_a8;
  TArrayView<FName,int> local_98;
  TArrayView<int,int> local_88;
  TArrayView<FName,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<FName,int> local_58;
  TArrayView<UE::Math::TVector<float>,int> local_48;
  TArrayView<FName,int> local_38;
  TArrayView<FEulerTransform,int> local_28;
  TArrayView<FName,int> local_18;
  
  if (((bool)this->bStableIndices) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bStableIndices == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterBuffer.cpp"
                         ,0x139,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = (FEulerTransform *)0x0;
  uVar4 = (uint)this->NumElements;
  if (this->NumElements == 0) {
    local_e8 = (FName *)0x0;
    uStack_e0 = 0;
  }
  else {
    local_e8 = (FName *)this->Data;
    uStack_e0 = uVar4;
  }
  EVar1 = this->Type;
  switch(EVar1) {
  case Space:
    if ((EVar1 != Space) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private::ControlRigTypeFromNativeType<T>() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Sequencer\\MovieSceneControlRigParameterBuffer.h"
                           ,0x79,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this->Data != (uchar *)0x0) {
      uVar5 = this->Alignment;
      pFVar6 = (FEulerTransform *)
               ((ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar5) & -uVar5);
    }
    local_d8._12_4_ = uStack_dc;
    local_d8.ArrayNum = uStack_e0;
    local_f8.ArrayNum = uVar4;
    local_d8.DataPtr = local_e8;
    local_f8.DataPtr = (FMovieSceneControlRigSpaceBaseKey *)pFVar6;
    SortParametersByName<FMovieSceneControlRigSpaceBaseKey>(&local_d8,&local_f8);
    break;
  case Parameter_Bool:
    if ((EVar1 != Parameter_Bool) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private::ControlRigTypeFromNativeType<T>() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Sequencer\\MovieSceneControlRigParameterBuffer.h"
                           ,0x79,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this->Data != (uchar *)0x0) {
      uVar5 = this->Alignment;
      pFVar6 = (FEulerTransform *)
               ((ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar5) & -uVar5);
    }
    local_b8._12_4_ = uStack_dc;
    local_b8.ArrayNum = uStack_e0;
    local_f8.ArrayNum = uVar4;
    local_c8.ArrayNum = uVar4;
    local_c8._12_4_ = local_f8._12_4_;
    local_b8.DataPtr = local_e8;
    local_f8.DataPtr = (FMovieSceneControlRigSpaceBaseKey *)pFVar6;
    local_c8.DataPtr = (bool *)pFVar6;
    SortParametersByName<bool>(&local_b8,&local_c8);
    break;
  case Parameter_Enum:
    if ((EVar1 != Parameter_Enum) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private::ControlRigTypeFromNativeType<T>() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Sequencer\\MovieSceneControlRigParameterBuffer.h"
                           ,0x79,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this->Data != (uchar *)0x0) {
      uVar5 = this->Alignment;
      pFVar6 = (FEulerTransform *)
               ((ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar5) & -uVar5);
    }
    local_98._12_4_ = uStack_dc;
    local_98.ArrayNum = uStack_e0;
    local_f8.ArrayNum = uVar4;
    local_a8.ArrayNum = uVar4;
    local_a8._12_4_ = local_f8._12_4_;
    local_98.DataPtr = local_e8;
    local_f8.DataPtr = (FMovieSceneControlRigSpaceBaseKey *)pFVar6;
    local_a8.DataPtr = (uchar *)pFVar6;
    SortParametersByName<unsigned_char>(&local_98,&local_a8);
    break;
  case Parameter_Integer:
    if ((EVar1 != Parameter_Integer) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private::ControlRigTypeFromNativeType<T>() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Sequencer\\MovieSceneControlRigParameterBuffer.h"
                           ,0x79,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this->Data != (uchar *)0x0) {
      uVar5 = this->Alignment;
      pFVar6 = (FEulerTransform *)
               ((ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar5) & -uVar5);
    }
    local_78._12_4_ = uStack_dc;
    local_78.ArrayNum = uStack_e0;
    local_f8.ArrayNum = uVar4;
    local_88.ArrayNum = uVar4;
    local_88._12_4_ = local_f8._12_4_;
    local_78.DataPtr = local_e8;
    local_f8.DataPtr = (FMovieSceneControlRigSpaceBaseKey *)pFVar6;
    local_88.DataPtr = (int *)pFVar6;
    SortParametersByName<int>(&local_78,&local_88);
    break;
  case Parameter_Scalar:
    if ((EVar1 != Parameter_Scalar) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private::ControlRigTypeFromNativeType<T>() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Sequencer\\MovieSceneControlRigParameterBuffer.h"
                           ,0x79,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this->Data != (uchar *)0x0) {
      uVar5 = this->Alignment;
      pFVar6 = (FEulerTransform *)
               ((ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar5) & -uVar5);
    }
    local_58._12_4_ = uStack_dc;
    local_58.ArrayNum = uStack_e0;
    local_f8.ArrayNum = uVar4;
    local_68.ArrayNum = uVar4;
    local_68._12_4_ = local_f8._12_4_;
    local_58.DataPtr = local_e8;
    local_f8.DataPtr = (FMovieSceneControlRigSpaceBaseKey *)pFVar6;
    local_68.DataPtr = (float *)pFVar6;
    SortParametersByName<float>(&local_58,&local_68);
    break;
  case Parameter_Vector:
    if ((EVar1 != Parameter_Vector) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private::ControlRigTypeFromNativeType<T>() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Sequencer\\MovieSceneControlRigParameterBuffer.h"
                           ,0x79,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this->Data != (uchar *)0x0) {
      uVar5 = this->Alignment;
      pFVar6 = (FEulerTransform *)
               ((ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar5) & -uVar5);
    }
    local_38._12_4_ = uStack_dc;
    local_38.ArrayNum = uStack_e0;
    local_f8.ArrayNum = uVar4;
    local_48.ArrayNum = uVar4;
    local_48._12_4_ = local_f8._12_4_;
    local_38.DataPtr = local_e8;
    local_f8.DataPtr = (FMovieSceneControlRigSpaceBaseKey *)pFVar6;
    local_48.DataPtr = (TVector<float> *)pFVar6;
    SortParametersByName<UE::Math::TVector<float>_>(&local_38,&local_48);
    break;
  case Parameter_Transform:
    if ((EVar1 != Parameter_Transform) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private::ControlRigTypeFromNativeType<T>() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Sequencer\\MovieSceneControlRigParameterBuffer.h"
                           ,0x79,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this->Data != (uchar *)0x0) {
      uVar5 = this->Alignment;
      pFVar6 = (FEulerTransform *)
               ((ulonglong)(this->Data + (ulonglong)this->Capacity * 8 + -1 + uVar5) & -uVar5);
    }
    local_18._12_4_ = uStack_dc;
    local_18.ArrayNum = uStack_e0;
    local_f8.ArrayNum = uVar4;
    local_28.ArrayNum = uVar4;
    local_28._12_4_ = local_f8._12_4_;
    local_18.DataPtr = local_e8;
    local_f8.DataPtr = (FMovieSceneControlRigSpaceBaseKey *)pFVar6;
    local_28.DataPtr = pFVar6;
    SortParametersByName<FEulerTransform>(&local_18,&local_28);
  }
  return;
}

