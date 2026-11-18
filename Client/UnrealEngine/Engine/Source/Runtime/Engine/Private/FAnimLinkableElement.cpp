// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// ~FAnimLinkableElement @ 1473d9d60

void __thiscall FAnimLinkableElement::~FAnimLinkableElement(FAnimLinkableElement *this)

{
  this->_padding_ = (longlong)&___7FAnimLinkableElement__6B_;
  return;
}

// FAnimLinkableElement @ 147433600

FAnimLinkableElement * __thiscall
FAnimLinkableElement::FAnimLinkableElement(FAnimLinkableElement *this,FAnimLinkableElement *param_1)

{
  UAnimMontage *pUVar1;
  UAnimSequenceBase *pUVar2;
  
  this->_padding_ = (longlong)&___7FAnimLinkableElement__6B_;
  pUVar1 = (param_1->LinkedMontage).field0_0x0.DebugPtr;
  (this->LinkedMontage).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->SlotIndex = param_1->SlotIndex;
  this->SegmentIndex = param_1->SegmentIndex;
  (this->LinkMethod).Value = (param_1->LinkMethod).Value;
  (this->CachedLinkMethod).Value = (param_1->CachedLinkMethod).Value;
  this->SegmentBeginTime = param_1->SegmentBeginTime;
  this->SegmentLength = param_1->SegmentLength;
  this->LinkValue = param_1->LinkValue;
  pUVar2 = (param_1->LinkedSequence).field0_0x0.DebugPtr;
  (this->LinkedSequence).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UAnimSequenceBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// StaticStruct @ 147499010

UScriptStruct * __cdecl FAnimLinkableElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimLinkableElement.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimLinkableElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimLinkableElement,(UObject *)pUVar1,
                         L"AnimLinkableElement");
  }
  return Z_Registration_Info_UScriptStruct_FAnimLinkableElement.OuterSingleton;
}

// SetTime @ 147499190

void __thiscall FAnimLinkableElement::SetTime(FAnimLinkableElement *this,float param_1,Type param_2)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = (this->CachedLinkMethod).Value;
  if (bVar1 != param_2) {
    if (bVar1 != Absolute) {
      if (bVar1 == 1) {
        if (param_2 == Absolute) {
          this->LinkValue = param_1 - this->SegmentBeginTime;
          return;
        }
        if (param_2 != Proportional) {
          return;
        }
        this->LinkValue = param_1 * this->SegmentLength;
        return;
      }
      if (bVar1 != 2) {
        return;
      }
      if (param_2 == Absolute) {
        fVar2 = this->SegmentLength;
        if (fVar2 == 0.0) {
          this->LinkValue = 0.0;
          return;
        }
        param_1 = param_1 - this->SegmentBeginTime;
      }
      else {
        if (param_2 != Relative) {
          return;
        }
        fVar2 = this->SegmentLength;
        if (fVar2 == 0.0) {
          this->LinkValue = 0.0;
          return;
        }
      }
      this->LinkValue = param_1 / fVar2;
      return;
    }
    if ((param_2 != Relative) && (param_2 != Proportional)) {
      return;
    }
    param_1 = param_1 * this->SegmentLength + this->SegmentBeginTime;
  }
  this->LinkValue = param_1;
  return;
}

// operator= @ 1474b5df0

FAnimLinkableElement * __thiscall
FAnimLinkableElement::operator=(FAnimLinkableElement *this,FAnimLinkableElement *param_1)

{
  UAnimMontage *pUVar1;
  UAnimSequenceBase *pUVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->LinkedMontage).field0_0x0.DebugPtr, pUVar1 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->LinkedMontage).field0_0x0 = (param_1->LinkedMontage).field0_0x0;
  this->SlotIndex = param_1->SlotIndex;
  this->SegmentIndex = param_1->SegmentIndex;
  (this->LinkMethod).Value = (param_1->LinkMethod).Value;
  (this->CachedLinkMethod).Value = (param_1->CachedLinkMethod).Value;
  this->SegmentBeginTime = param_1->SegmentBeginTime;
  this->SegmentLength = param_1->SegmentLength;
  this->LinkValue = param_1->LinkValue;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->LinkedSequence).field0_0x0.DebugPtr, pUVar2 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->LinkedSequence).field0_0x0 = (param_1->LinkedSequence).field0_0x0;
  return this;
}

// ChangeLinkMethod @ 1474c4330

void __thiscall FAnimLinkableElement::ChangeLinkMethod(FAnimLinkableElement *this,Type param_1)

{
  uchar uVar1;
  
  if ((this->LinkMethod).Value == param_1) {
    return;
  }
  (this->LinkMethod).Value = (uchar)param_1;
  uVar1 = (this->CachedLinkMethod).Value;
  if (uVar1 != '\0') {
    if (uVar1 == '\0') {
      OnChanged(this,__real_bf800000);
      return;
    }
    if (uVar1 == '\x01') {
      OnChanged(this,this->LinkValue + this->SegmentBeginTime);
      return;
    }
    if (uVar1 == '\x02') {
      OnChanged(this,this->LinkValue * this->SegmentLength + this->SegmentBeginTime);
      return;
    }
  }
  OnChanged(this,this->LinkValue);
  return;
}

// ChangeSlotIndex @ 1474c43a0

void __thiscall FAnimLinkableElement::ChangeSlotIndex(FAnimLinkableElement *this,int param_1)

{
  uchar uVar1;
  UAnimMontage *pUVar2;
  
  pUVar2 = (this->LinkedMontage).field0_0x0.DebugPtr;
  if (pUVar2 == (UAnimMontage *)0x0) {
    return;
  }
  uVar1 = (this->CachedLinkMethod).Value;
  if (uVar1 != '\0') {
    if (uVar1 == '\0') {
      Link(this,(UAnimSequenceBase *)pUVar2,__real_bf800000,param_1);
      return;
    }
    if (uVar1 == '\x01') {
      Link(this,(UAnimSequenceBase *)pUVar2,this->LinkValue + this->SegmentBeginTime,param_1);
      return;
    }
    if (uVar1 == '\x02') {
      Link(this,(UAnimSequenceBase *)pUVar2,
           this->LinkValue * this->SegmentLength + this->SegmentBeginTime,param_1);
      return;
    }
  }
  Link(this,(UAnimSequenceBase *)pUVar2,this->LinkValue,param_1);
  return;
}

// Clear @ 1474c4490

void __thiscall FAnimLinkableElement::Clear(FAnimLinkableElement *this)

{
  uchar uVar1;
  float fVar2;
  
  if ((this->LinkMethod).Value == '\0') goto LAB_1474c44ed;
  (this->LinkMethod).Value = '\0';
  uVar1 = (this->CachedLinkMethod).Value;
  if (uVar1 == '\0') {
LAB_1474c44e0:
    fVar2 = this->LinkValue;
  }
  else {
    fVar2 = __real_bf800000;
    if (uVar1 != '\0') {
      if (uVar1 == '\x01') {
        fVar2 = this->LinkValue + this->SegmentBeginTime;
      }
      else {
        if (uVar1 != '\x02') goto LAB_1474c44e0;
        fVar2 = this->LinkValue * this->SegmentLength + this->SegmentBeginTime;
      }
    }
  }
  OnChanged(this,fVar2);
LAB_1474c44ed:
  (this->LinkedSequence).field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
  this->SegmentBeginTime = -1.0;
  this->SegmentLength = -1.0;
  this->SegmentIndex = -1;
  return;
}

// ConditionalRelink @ 1474c4f90

bool __thiscall FAnimLinkableElement::ConditionalRelink(FAnimLinkableElement *this)

{
  uchar uVar1;
  UAnimMontage *pUVar2;
  UAnimSequenceBase *pUVar3;
  bool bVar4;
  float fVar5;
  
  pUVar2 = (this->LinkedMontage).field0_0x0.DebugPtr;
  bVar4 = false;
  if ((pUVar2 != (UAnimMontage *)0x0) &&
     ((this->SlotIndex < 0 || ((pUVar2->SlotAnimTracks).ArrayNum <= this->SlotIndex)))) {
    bVar4 = true;
    this->SlotIndex = 0;
  }
  uVar1 = (this->CachedLinkMethod).Value;
  if (uVar1 != '\0') {
    fVar5 = __real_bf800000;
    if (uVar1 == '\0') goto LAB_1474c4ffc;
    if (uVar1 == '\x01') {
      fVar5 = this->LinkValue + this->SegmentBeginTime;
      goto LAB_1474c4ffc;
    }
    if (uVar1 == '\x02') {
      fVar5 = this->LinkValue * this->SegmentLength + this->SegmentBeginTime;
      goto LAB_1474c4ffc;
    }
  }
  fVar5 = this->LinkValue;
LAB_1474c4ffc:
  if ((fVar5 < this->SegmentBeginTime) || (this->SegmentBeginTime + this->SegmentLength < fVar5)) {
    bVar4 = true;
  }
  else if (bVar4 == false) {
    return false;
  }
  if (pUVar2 == (UAnimMontage *)0x0) {
    pUVar3 = (this->LinkedSequence).field0_0x0.DebugPtr;
    if (pUVar3 != (UAnimSequenceBase *)0x0) {
      Link(this,pUVar3,fVar5,0);
    }
    return bVar4;
  }
  Link(this,(UAnimSequenceBase *)pUVar2,fVar5,this->SlotIndex);
  return bVar4;
}

// GetSegmentAtCurrentTime @ 1474df260

FAnimSegment * __thiscall FAnimLinkableElement::GetSegmentAtCurrentTime(FAnimLinkableElement *this)

{
  FScriptContainerElement *this_00;
  uchar uVar1;
  uint uVar2;
  UAnimMontage *pUVar3;
  code *pcVar4;
  bool bVar5;
  FAnimSegment *pFVar6;
  uint uVar7;
  
  pUVar3 = (this->LinkedMontage).field0_0x0.DebugPtr;
  if (pUVar3 == (UAnimMontage *)0x0) {
    return (FAnimSegment *)0x0;
  }
  uVar2 = this->SlotIndex;
  uVar7 = 0;
  if ((int)uVar2 < (pUVar3->SlotAnimTracks).ArrayNum) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FAnimSegment *)(*pcVar4)();
      return pFVar6;
    }
  }
  uVar1 = (this->CachedLinkMethod).Value;
  this_00 = (pUVar3->SlotAnimTracks).AllocatorInstance.Data + ((longlong)(int)uVar2 * 3 + 1) * 8;
  if (uVar1 != '\0') {
    if (uVar1 == '\0') {
      pFVar6 = FAnimTrack::GetSegmentAtTime((FAnimTrack *)this_00,__real_bf800000);
      return pFVar6;
    }
    if (uVar1 == '\x01') {
      pFVar6 = FAnimTrack::GetSegmentAtTime
                         ((FAnimTrack *)this_00,this->LinkValue + this->SegmentBeginTime);
      return pFVar6;
    }
    if (uVar1 == '\x02') {
      pFVar6 = FAnimTrack::GetSegmentAtTime
                         ((FAnimTrack *)this_00,
                          this->LinkValue * this->SegmentLength + this->SegmentBeginTime);
      return pFVar6;
    }
  }
  pFVar6 = FAnimTrack::GetSegmentAtTime((FAnimTrack *)this_00,this->LinkValue);
  return pFVar6;
}

// GetTime @ 1474e0200

float __thiscall FAnimLinkableElement::GetTime(FAnimLinkableElement *this,Type param_1)

{
  byte bVar1;
  
  bVar1 = (this->CachedLinkMethod).Value;
  if (bVar1 != param_1) {
    if (bVar1 == Absolute) {
      if (param_1 == Relative) {
        return this->LinkValue - this->SegmentBeginTime;
      }
      if (param_1 == Proportional) {
        return (this->LinkValue - this->SegmentBeginTime) / this->SegmentLength;
      }
    }
    else if (bVar1 == 1) {
      if (param_1 == Absolute) {
        return this->LinkValue + this->SegmentBeginTime;
      }
      if (param_1 == Proportional) {
        return this->LinkValue / this->SegmentLength;
      }
    }
    else {
      if (bVar1 != 2) goto LAB_1474e0290;
      if (param_1 == Absolute) {
        return this->LinkValue * this->SegmentLength + this->SegmentBeginTime;
      }
      if (param_1 == Relative) {
        return this->LinkValue * this->SegmentLength;
      }
    }
    return __real_bf800000;
  }
LAB_1474e0290:
  return this->LinkValue;
}

// GetTimeFromAbsolute @ 1474e02a0

float __thiscall FAnimLinkableElement::GetTimeFromAbsolute(FAnimLinkableElement *this,Type param_1)

{
  if (param_1 == Relative) {
    return this->LinkValue - this->SegmentBeginTime;
  }
  if (param_1 != Proportional) {
    return __real_bf800000;
  }
  return (this->LinkValue - this->SegmentBeginTime) / this->SegmentLength;
}

// GetTimeFromProportional @ 1474e0330

float __thiscall
FAnimLinkableElement::GetTimeFromProportional(FAnimLinkableElement *this,Type param_1)

{
  if (param_1 == Absolute) {
    return this->LinkValue * this->SegmentLength + this->SegmentBeginTime;
  }
  if (param_1 != Relative) {
    return __real_bf800000;
  }
  return this->LinkValue * this->SegmentLength;
}

// GetTimeFromRelative @ 1474e0370

float __thiscall FAnimLinkableElement::GetTimeFromRelative(FAnimLinkableElement *this,Type param_1)

{
  if (param_1 == Absolute) {
    return this->LinkValue + this->SegmentBeginTime;
  }
  if (param_1 != Proportional) {
    return __real_bf800000;
  }
  return this->LinkValue / this->SegmentLength;
}

// Link @ 1474eb450

void __thiscall
FAnimLinkableElement::Link
          (FAnimLinkableElement *this,UAnimSequenceBase *param_1,float param_2,int param_3)

{
  longlong lVar1;
  uchar uVar2;
  int iVar3;
  UAnimSequenceBase *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  uint uVar9;
  FAnimSegment *this_00;
  float fVar10;
  float fVar11;
  
  if (param_1 != (UAnimSequenceBase *)0x0) {
    pUVar8 = UAnimMontage::StaticClass();
    iVar3 = (int)pUVar8->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar8->_padding_)) {
      fVar11 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
      if (0.0 < fVar11) {
        (this->LinkedMontage).field0_0x0.DebugPtr = (UAnimMontage *)0x0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        (this->LinkedSequence).field0_0x0.DebugPtr = param_1;
        this->SegmentIndex = 0;
        this->SegmentBeginTime = 0.0;
        fVar11 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
        this->SegmentLength = fVar11;
        (**(code **)(this->_padding_ + 8))(this,param_2,0);
      }
    }
    else if (0 < (int)param_1[2]._padding_) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->LinkedMontage).field0_0x0.DebugPtr = (UAnimMontage *)param_1;
      this->SlotIndex = param_3;
      uVar7 = 0;
      if (param_3 < (int)param_1[2]._padding_) {
        uVar7 = (uint)~param_3 >> 0x1f;
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
      lVar1 = param_1[2]._padding_ + (longlong)param_3 * 0x18;
      uVar7 = FAnimTrack::GetSegmentIndexAtTime((FAnimTrack *)(lVar1 + 8),param_2);
      this->SegmentIndex = uVar7;
      if (uVar7 == 0xffffffff) {
        (this->LinkedSequence).field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
        this->SegmentBeginTime = -1.0;
        this->SegmentLength = -1.0;
        this->LinkMethod = '\0';
        this->CachedLinkMethod = '\0';
        this->LinkValue = param_2;
      }
      else {
        uVar9 = 0;
        if ((int)uVar7 < *(int *)(lVar1 + 0x10)) {
          uVar9 = ~uVar7 >> 0x1f;
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
        this_00 = (FAnimSegment *)((longlong)(int)uVar7 * 0x20 + *(longlong *)(lVar1 + 8));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 = (this_00->AnimReference).field0_0x0.DebugPtr,
           pUVar4 != (UAnimSequenceBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        fVar11 = this_00->StartPos;
        (this->LinkedSequence).field0_0x0.DebugPtr =
             (UAnimSequenceBase *)(this_00->AnimReference).field0_0x0;
        this->SegmentBeginTime = fVar11;
        fVar10 = FAnimSegment::GetLength(this_00);
        this->SegmentLength = fVar10;
        uVar2 = (this->CachedLinkMethod).Value;
        if (uVar2 != '\0') {
          if (uVar2 == '\x01') {
            param_2 = param_2 - fVar11;
          }
          else {
            if (uVar2 != '\x02') {
              return;
            }
            if (fVar10 == 0.0) {
              param_2 = 0.0;
            }
            else {
              param_2 = (param_2 - fVar11) / fVar10;
            }
          }
        }
        this->LinkValue = param_2;
      }
    }
  }
  return;
}

// LinkMontage @ 1474eb6b0

void __thiscall
FAnimLinkableElement::LinkMontage
          (FAnimLinkableElement *this,UAnimMontage *param_1,float param_2,int param_3)

{
  uchar uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UAnimSequenceBase *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  uint uVar9;
  FAnimSegment *this_00;
  float fVar10;
  float fVar11;
  
  if (param_1 != (UAnimMontage *)0x0) {
    pUVar8 = UAnimMontage::StaticClass();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar8->_padding_)) {
      fVar11 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
      if (0.0 < fVar11) {
        (this->LinkedMontage).field0_0x0.DebugPtr = (UAnimMontage *)0x0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        (this->LinkedSequence).field0_0x0.DebugPtr = (UAnimSequenceBase *)param_1;
        this->SegmentIndex = 0;
        this->SegmentBeginTime = 0.0;
        fVar11 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
        this->SegmentLength = fVar11;
        (**(code **)(this->_padding_ + 8))(this,param_2,0);
      }
    }
    else if (0 < (param_1->SlotAnimTracks).ArrayNum) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->LinkedMontage).field0_0x0.DebugPtr = param_1;
      this->SlotIndex = param_3;
      uVar7 = 0;
      if (param_3 < (param_1->SlotAnimTracks).ArrayNum) {
        uVar7 = (uint)~param_3 >> 0x1f;
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
      pFVar3 = (param_1->SlotAnimTracks).AllocatorInstance.Data;
      uVar7 = FAnimTrack::GetSegmentIndexAtTime
                        ((FAnimTrack *)(pFVar3 + (longlong)param_3 * 0x18 + 8),param_2);
      this->SegmentIndex = uVar7;
      if (uVar7 == 0xffffffff) {
        (this->LinkedSequence).field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
        this->SegmentBeginTime = -1.0;
        this->SegmentLength = -1.0;
        this->LinkMethod = '\0';
        this->CachedLinkMethod = '\0';
        this->LinkValue = param_2;
      }
      else {
        uVar9 = 0;
        if ((int)uVar7 < *(int *)(pFVar3 + (longlong)param_3 * 0x18 + 0x10)) {
          uVar9 = ~uVar7 >> 0x1f;
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
        this_00 = (FAnimSegment *)
                  ((longlong)(int)uVar7 * 0x20 +
                  *(longlong *)(pFVar3 + (longlong)param_3 * 0x18 + 8));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 = (this_00->AnimReference).field0_0x0.DebugPtr,
           pUVar4 != (UAnimSequenceBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        fVar11 = this_00->StartPos;
        (this->LinkedSequence).field0_0x0.DebugPtr =
             (UAnimSequenceBase *)(this_00->AnimReference).field0_0x0;
        this->SegmentBeginTime = fVar11;
        fVar10 = FAnimSegment::GetLength(this_00);
        this->SegmentLength = fVar10;
        uVar1 = (this->CachedLinkMethod).Value;
        if (uVar1 != '\0') {
          if (uVar1 == '\x01') {
            param_2 = param_2 - fVar11;
          }
          else {
            if (uVar1 != '\x02') {
              return;
            }
            if (fVar10 == 0.0) {
              param_2 = 0.0;
            }
            else {
              param_2 = (param_2 - fVar11) / fVar10;
            }
          }
        }
        this->LinkValue = param_2;
      }
    }
  }
  return;
}

// LinkSequence @ 1474eb6c0

void __thiscall
FAnimLinkableElement::LinkSequence
          (FAnimLinkableElement *this,UAnimSequenceBase *param_1,float param_2)

{
  Link(this,param_1,param_2,0);
  return;
}

// OnChanged @ 1474eef50

void __thiscall FAnimLinkableElement::OnChanged(FAnimLinkableElement *this,float param_1)

{
  uchar uVar1;
  UAnimMontage *pUVar2;
  FScriptContainerElement *pFVar3;
  UAnimSequenceBase *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FAnimSegment *this_00;
  float fVar10;
  
  pUVar2 = (this->LinkedMontage).field0_0x0.DebugPtr;
  if (pUVar2 == (UAnimMontage *)0x0) {
    return;
  }
  uVar8 = (pUVar2->SlotAnimTracks).ArrayNum - 1;
  if (this->SlotIndex < (int)uVar8) {
    uVar8 = this->SlotIndex;
  }
  uVar7 = 0;
  if (0 < (int)uVar8) {
    uVar7 = uVar8;
  }
  this->SlotIndex = uVar7;
  uVar1 = (this->CachedLinkMethod).Value;
  if (uVar1 == (this->LinkMethod).Value) goto LAB_1474ef058;
  if (uVar1 == '\0') {
    param_1 = this->LinkValue;
LAB_1474eefe0:
    if (param_1 == __real_bf800000) goto LAB_1474eefe5;
  }
  else {
    if (uVar1 == '\x01') {
      param_1 = this->LinkValue + this->SegmentBeginTime;
      goto LAB_1474eefe0;
    }
    param_1 = __real_bf800000;
    if (uVar1 == '\x02') {
      param_1 = this->LinkValue * this->SegmentLength + this->SegmentBeginTime;
      goto LAB_1474eefe0;
    }
LAB_1474eefe5:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AbsTime != -1.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimLinkableElement.cpp"
                       ,0x5a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = (this->LinkMethod).Value;
  (this->CachedLinkMethod).Value = uVar1;
  if (uVar1 == '\0') {
    this->LinkValue = param_1;
  }
  else if (uVar1 != '\0') {
    if (uVar1 == '\x01') {
      this->LinkValue = param_1 - this->SegmentBeginTime;
    }
    else if (uVar1 == '\x02') {
      fVar10 = 0.0;
      if (this->SegmentLength != 0.0) {
        fVar10 = (param_1 - this->SegmentBeginTime) / this->SegmentLength;
      }
      this->LinkValue = fVar10;
    }
  }
LAB_1474ef058:
  uVar8 = this->SlotIndex;
  pUVar2 = (this->LinkedMontage).field0_0x0.DebugPtr;
  uVar7 = 0;
  if ((int)uVar8 < (pUVar2->SlotAnimTracks).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
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
  pFVar3 = (pUVar2->SlotAnimTracks).AllocatorInstance.Data;
  uVar7 = FAnimTrack::GetSegmentIndexAtTime
                    ((FAnimTrack *)(pFVar3 + (longlong)(int)uVar8 * 0x18 + 8),param_1);
  this->SegmentIndex = uVar7;
  if (uVar7 == 0xffffffff) {
    if ((this->LinkedSequence).field0_0x0.DebugPtr == (UAnimSequenceBase *)0x0) {
      this->LinkValue = param_1;
      Clear(this);
    }
  }
  else {
    uVar9 = 0;
    if ((int)uVar7 < *(int *)(pFVar3 + (longlong)(int)uVar8 * 0x18 + 0x10)) {
      uVar9 = ~uVar7 >> 0x1f;
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
    this_00 = (FAnimSegment *)
              ((longlong)(int)uVar7 * 0x20 + *(longlong *)(pFVar3 + (longlong)(int)uVar8 * 0x18 + 8)
              );
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (this_00->AnimReference).field0_0x0.DebugPtr, pUVar4 != (UAnimSequenceBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->LinkedSequence).field0_0x0.DebugPtr =
         (UAnimSequenceBase *)(this_00->AnimReference).field0_0x0;
    this->SegmentBeginTime = this_00->StartPos;
    fVar10 = FAnimSegment::GetLength(this_00);
    this->SegmentLength = fVar10;
    (**(code **)(this->_padding_ + 8))(this,param_1,0);
  }
  return;
}

// RefreshSegmentOnLoad @ 1474f3400

void __thiscall FAnimLinkableElement::RefreshSegmentOnLoad(FAnimLinkableElement *this)

{
  uint uVar1;
  UAnimMontage *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  FAnimSegment *this_00;
  float fVar8;
  
  pUVar2 = (this->LinkedMontage).field0_0x0.DebugPtr;
  if ((pUVar2 != (UAnimMontage *)0x0) && (this->SegmentIndex != -1)) {
    uVar1 = this->SlotIndex;
    lVar7 = (longlong)(int)uVar1;
    if ((uVar1 != 0xffffffff) &&
       ((-1 < (int)uVar1 && ((int)uVar1 < (pUVar2->SlotAnimTracks).ArrayNum)))) {
      uVar6 = 0;
      if ((int)uVar1 < (pUVar2->SlotAnimTracks).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pUVar2->SlotAnimTracks).AllocatorInstance.Data;
      uVar1 = this->SegmentIndex;
      if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(pFVar3 + lVar7 * 0x18 + 0x10))) {
        uVar6 = 0;
        if ((int)uVar1 < *(int *)(pFVar3 + lVar7 * 0x18 + 0x10)) {
          uVar6 = ~uVar1 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (FAnimSegment *)
                  ((longlong)(int)uVar1 * 0x20 + *(longlong *)(pFVar3 + lVar7 * 0x18 + 8));
        if ((this_00->AnimReference).field0_0x0.DebugPtr ==
            (this->LinkedSequence).field0_0x0.DebugPtr) {
          if ((this->CachedLinkMethod).Value == '\x01') {
            fVar8 = FAnimSegment::GetLength(this_00);
            if (this->LinkValue <= fVar8) {
              fVar8 = this->LinkValue;
            }
            if (fVar8 <= 0.0) {
              fVar8 = 0.0;
            }
            this->LinkValue = fVar8;
          }
          this->SegmentBeginTime = this_00->StartPos;
          fVar8 = FAnimSegment::GetLength(this_00);
          this->SegmentLength = fVar8;
        }
      }
    }
  }
  return;
}

// SetTimeFromAbsolute @ 1474f9ca0

void __thiscall
FAnimLinkableElement::SetTimeFromAbsolute(FAnimLinkableElement *this,float param_1,Type param_2)

{
  if ((param_2 == Relative) || (param_2 == Proportional)) {
    this->LinkValue = param_1 * this->SegmentLength + this->SegmentBeginTime;
  }
  return;
}

// SetTimeFromProportional @ 1474f9cd0

void __thiscall
FAnimLinkableElement::SetTimeFromProportional(FAnimLinkableElement *this,float param_1,Type param_2)

{
  float fVar1;
  
  if (param_2 == Absolute) {
    fVar1 = this->SegmentLength;
    if (fVar1 != 0.0) {
      param_1 = param_1 - this->SegmentBeginTime;
      goto LAB_1474f9d02;
    }
  }
  else {
    if (param_2 != Relative) {
      return;
    }
    fVar1 = this->SegmentLength;
    if (fVar1 != 0.0) {
LAB_1474f9d02:
      this->LinkValue = param_1 / fVar1;
      return;
    }
  }
  this->LinkValue = 0.0;
  return;
}

// SetTimeFromRelative @ 1474f9d20

void __thiscall
FAnimLinkableElement::SetTimeFromRelative(FAnimLinkableElement *this,float param_1,Type param_2)

{
  if (param_2 == Absolute) {
    this->LinkValue = param_1 - this->SegmentBeginTime;
  }
  else if (param_2 == Proportional) {
    this->LinkValue = param_1 * this->SegmentLength;
    return;
  }
  return;
}

// SetTime_Internal @ 1474f9d50

void __thiscall
FAnimLinkableElement::SetTime_Internal(FAnimLinkableElement *this,float param_1,Type param_2)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = (this->CachedLinkMethod).Value;
  if (bVar1 != param_2) {
    if (bVar1 != Absolute) {
      if (bVar1 == 1) {
        if (param_2 == Absolute) {
          this->LinkValue = param_1 - this->SegmentBeginTime;
          return;
        }
        if (param_2 != Proportional) {
          return;
        }
        this->LinkValue = param_1 * this->SegmentLength;
        return;
      }
      if (bVar1 != 2) {
        return;
      }
      if (param_2 == Absolute) {
        fVar2 = this->SegmentLength;
        if (fVar2 == 0.0) {
          this->LinkValue = 0.0;
          return;
        }
        param_1 = param_1 - this->SegmentBeginTime;
      }
      else {
        if (param_2 != Relative) {
          return;
        }
        fVar2 = this->SegmentLength;
        if (fVar2 == 0.0) {
          this->LinkValue = 0.0;
          return;
        }
      }
      this->LinkValue = param_1 / fVar2;
      return;
    }
    if ((param_2 != Relative) && (param_2 != Proportional)) {
      return;
    }
    param_1 = param_1 * this->SegmentLength + this->SegmentBeginTime;
  }
  this->LinkValue = param_1;
  return;
}

// Update @ 1474fe1d0

/* WARNING: Removing unreachable block (ram,0x0001474fe398) */
/* WARNING: Removing unreachable block (ram,0x0001474fe38c) */
/* WARNING: Removing unreachable block (ram,0x0001474fe391) */
/* WARNING: Removing unreachable block (ram,0x0001474fe3ad) */

void __thiscall FAnimLinkableElement::Update(FAnimLinkableElement *this)

{
  UAnimSequenceBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uchar uVar6;
  UAnimMontage *pUVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FAnimSegment *this_00;
  int iVar10;
  float fVar11;
  float fVar12;
  
  pUVar7 = (this->LinkedMontage).field0_0x0.DebugPtr;
  if (pUVar7 == (UAnimMontage *)0x0) {
    return;
  }
  uVar4 = this->SlotIndex;
  lVar9 = (longlong)(int)uVar4;
  if ((int)uVar4 < 0) {
    return;
  }
  if ((pUVar7->SlotAnimTracks).ArrayNum <= (int)uVar4) {
    return;
  }
  uVar5 = 0;
  if ((int)uVar4 < (pUVar7->SlotAnimTracks).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = (this->CachedLinkMethod).Value;
  pFVar8 = (pUVar7->SlotAnimTracks).AllocatorInstance.Data;
  if (uVar6 == '\0') {
LAB_1474fe2a0:
    fVar12 = this->LinkValue;
  }
  else {
    fVar12 = __real_bf800000;
    if (uVar6 != '\0') {
      if (uVar6 == '\x01') {
        fVar12 = this->LinkValue + this->SegmentBeginTime;
      }
      else {
        if (uVar6 != '\x02') goto LAB_1474fe2a0;
        fVar12 = this->LinkValue * this->SegmentLength + this->SegmentBeginTime;
      }
    }
  }
  uVar4 = this->SegmentIndex;
  if (((uVar4 == 0xffffffff) || ((int)uVar4 < 0)) ||
     (*(int *)(pFVar8 + lVar9 * 0x18 + 0x10) <= (int)uVar4)) {
    pFVar8 = pFVar8 + lVar9 * 0x18 + 8;
    uVar4 = FAnimTrack::GetSegmentIndexAtTime((FAnimTrack *)pFVar8,fVar12);
    this->SegmentIndex = uVar4;
    if (uVar4 == 0xffffffff) {
      return;
    }
  }
  else {
    pFVar8 = pFVar8 + lVar9 * 0x18 + 8;
  }
  uVar5 = 0;
  if ((int)uVar4 < *(int *)&pFVar8[8].field_0x0) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (FAnimSegment *)
            ((((TArray<FAnimSegment,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->
             AllocatorInstance).Data + (longlong)(int)uVar4 * 0x20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this_00->AnimReference).field0_0x0.DebugPtr, pUVar1 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  fVar12 = this_00->StartPos;
  (this->LinkedSequence).field0_0x0.DebugPtr =
       (UAnimSequenceBase *)(this_00->AnimReference).field0_0x0;
  this->SegmentBeginTime = fVar12;
  fVar11 = FAnimSegment::GetLength(this_00);
  this->SegmentLength = fVar11;
  uVar6 = (this->CachedLinkMethod).Value;
  if ((uVar6 == '\x01') && (fVar11 + fVar12 < fVar12 + this->LinkValue)) {
    (**(code **)(this->_padding_ + 8))(this,1,0);
    uVar6 = (this->CachedLinkMethod).Value;
    fVar12 = this->SegmentBeginTime;
  }
  pUVar7 = (this->LinkedMontage).field0_0x0.DebugPtr;
  bVar3 = false;
  if ((pUVar7 != (UAnimMontage *)0x0) &&
     ((this->SlotIndex < 0 || ((pUVar7->SlotAnimTracks).ArrayNum <= this->SlotIndex)))) {
    bVar3 = true;
    this->SlotIndex = 0;
  }
  if (uVar6 != '\0') {
    if (uVar6 == '\x01') {
      fVar11 = fVar12 + this->LinkValue;
      goto LAB_1474fe420;
    }
    if (uVar6 == '\x02') {
      fVar11 = this->LinkValue * this->SegmentLength + fVar12;
      goto LAB_1474fe420;
    }
  }
  fVar11 = this->LinkValue;
LAB_1474fe420:
  if (((fVar11 < fVar12) || (fVar12 + this->SegmentLength < fVar11)) || (bVar3)) {
    if (pUVar7 == (UAnimMontage *)0x0) {
      pUVar7 = (UAnimMontage *)(this->LinkedSequence).field0_0x0.DebugPtr;
      if (pUVar7 == (UAnimMontage *)0x0) {
        return;
      }
      iVar10 = 0;
    }
    else {
      iVar10 = this->SlotIndex;
    }
    Link(this,(UAnimSequenceBase *)pUVar7,fVar11,iVar10);
  }
  return;
}

