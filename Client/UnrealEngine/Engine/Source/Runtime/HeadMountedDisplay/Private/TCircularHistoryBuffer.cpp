// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 14

// TCircularHistoryBuffer<UE::Math::TVector<double>_> @ 14594df60

TCircularHistoryBuffer<UE::Math::TVector<double>_> * __thiscall
TCircularHistoryBuffer<UE::Math::TVector<double>_>::
TCircularHistoryBuffer<UE::Math::TVector<double>_>
          (TCircularHistoryBuffer<UE::Math::TVector<double>_> *this,
          TCircularHistoryBuffer<UE::Math::TVector<double>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Elements).ArrayMax;
  iVar2 = (param_1->Elements).ArrayNum;
  _Src = (param_1->Elements).AllocatorInstance.Data;
  (this->Elements).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Elements).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x18);
  }
  this->Head = param_1->Head;
  this->bIsFull = param_1->bIsFull;
  return this;
}

// TCircularHistoryBuffer<UE::Math::TVector<double>_> @ 14594e000

TCircularHistoryBuffer<UE::Math::TVector<double>_> * __thiscall
TCircularHistoryBuffer<UE::Math::TVector<double>_>::
TCircularHistoryBuffer<UE::Math::TVector<double>_>
          (TCircularHistoryBuffer<UE::Math::TVector<double>_> *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(this->Elements).ArrayNum;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Elements).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  this->Head = 0;
  this->bIsFull = false;
  if (param_1 != 0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_1,(ForAnyElementType *)this,piVar1,piVar2);
    this->bIsFull = false;
  }
  return this;
}

// TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> @ 14594e060

TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> * __thiscall
TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::
TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>
          (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(this->Elements).ArrayNum;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Elements).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  this->Head = 0;
  this->bIsFull = false;
  if (param_1 != 0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,param_1,(ForAnyElementType *)this,piVar1,piVar2);
    this->bIsFull = false;
  }
  return this;
}

// operator[] @ 14594ed40

FPoseSample * __thiscall
TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::operator[]
          (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FPoseSample *pFVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = this->Head;
  if (param_1 < uVar5) {
    uVar5 = ~param_1 + uVar5;
  }
  else if (this->bIsFull == false) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uVar5 - 1) + ((this->Elements).ArrayNum - param_1);
  }
  uVar4 = 0;
  if ((int)uVar5 < (this->Elements).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPoseSample *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FPoseSample *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x38);
}

// Add @ 14594f720

TVector<double> * __thiscall
TCircularHistoryBuffer<UE::Math::TVector<double>_>::Add
          (TCircularHistoryBuffer<UE::Math::TVector<double>_> *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  TVector<double> *pTVar11;
  uint uVar12;
  
  uVar3 = this->Head;
  uVar6 = *(undefined4 *)&param_1->field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  uVar12 = 0;
  if ((int)uVar3 < (this->Elements).ArrayNum) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TVector<double> *)(*pcVar5)();
    return pTVar11;
  }
  pFVar4 = (this->Elements).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(int)uVar3 * 0x18;
  *(undefined4 *)pFVar1 = uVar6;
  *(undefined4 *)(pFVar1 + 4) = uVar7;
  *(undefined4 *)(pFVar1 + 8) = uVar8;
  *(undefined4 *)(pFVar1 + 0xc) = uVar9;
  *(double *)(pFVar4 + (longlong)(int)uVar3 * 0x18 + 0x10) = dVar2;
  uVar3 = this->Head;
  uVar12 = 0;
  if ((int)uVar3 < (this->Elements).ArrayNum) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TVector<double> *)(*pcVar5)();
    return pTVar11;
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  uVar12 = (this->Head + 1) % (uint)(this->Elements).ArrayNum;
  this->Head = uVar12;
  this->bIsFull = (bool)(this->bIsFull | uVar12 == 0);
  return (TVector<double> *)(pFVar1 + (longlong)(int)uVar3 * 0x18);
}

// Add @ 14594f830

FPoseSample * __thiscall
TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::Add
          (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *this,FPoseSample *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  FPoseSample *pFVar15;
  longlong lVar16;
  uint uVar17;
  
  uVar3 = this->Head;
  dVar10 = (param_1->Position).field0_0x0._s_0.Z;
  dVar11 = (param_1->Orientation).Pitch;
  uVar6 = *(undefined4 *)&(param_1->Position).field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&(param_1->Position).field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&(param_1->Position).field0_0x0 + 0xc);
  dVar12 = (param_1->Orientation).Yaw;
  dVar13 = (param_1->Orientation).Roll;
  dVar2 = param_1->TimeStamp;
  uVar17 = 0;
  if ((int)uVar3 < (this->Elements).ArrayNum) {
    uVar17 = ~uVar3 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    pFVar15 = (FPoseSample *)(*pcVar5)();
    return pFVar15;
  }
  pFVar4 = (this->Elements).AllocatorInstance.Data;
  lVar16 = (longlong)(int)uVar3 * 0x38;
  pFVar1 = pFVar4 + lVar16;
  *(undefined4 *)pFVar1 = uVar6;
  *(undefined4 *)(pFVar1 + 4) = uVar7;
  *(undefined4 *)(pFVar1 + 8) = uVar8;
  *(undefined4 *)(pFVar1 + 0xc) = uVar9;
  *(double *)(pFVar4 + lVar16 + 0x10) = dVar10;
  *(double *)(pFVar4 + lVar16 + 0x10 + 8) = dVar11;
  *(double *)(pFVar4 + lVar16 + 0x20) = dVar12;
  *(double *)(pFVar4 + lVar16 + 0x20 + 8) = dVar13;
  *(double *)(pFVar4 + lVar16 + 0x30) = dVar2;
  uVar3 = this->Head;
  uVar17 = 0;
  if ((int)uVar3 < (this->Elements).ArrayNum) {
    uVar17 = ~uVar3 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    pFVar15 = (FPoseSample *)(*pcVar5)();
    return pFVar15;
  }
  uVar17 = (this->Head + 1) % (uint)(this->Elements).ArrayNum;
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  this->Head = uVar17;
  this->bIsFull = (bool)(this->bIsFull | uVar17 == 0);
  return (FPoseSample *)(pFVar1 + (longlong)(int)uVar3 * 0x38);
}

// Realign @ 145954ba0

void __thiscall
TCircularHistoryBuffer<UE::Math::TVector<double>_>::Realign
          (TCircularHistoryBuffer<UE::Math::TVector<double>_> *this)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType local_18;
  int local_10 [2];
  
  if (this->bIsFull != false) {
    iVar1 = (this->Elements).ArrayNum;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10[0] = 0;
    local_10[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,this->Head,&local_18,local_10,local_10 + 1);
    _Src = (this->Elements).AllocatorInstance.Data;
    memcpy(local_18.Data,_Src,(ulonglong)this->Head * 0x18);
    uVar2 = this->Head;
    _Size = (ulonglong)uVar2 * 0x18;
    memcpy(_Src,_Src + _Size,_Size);
    memcpy(_Src + (ulonglong)(iVar1 - uVar2) * 0x18,local_18.Data,(longlong)local_10[0] * 0x18);
    this->Head = 0;
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// Realign @ 145954c90

void __thiscall
TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::Realign
          (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *this)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  size_t _Size;
  ForAnyElementType local_18;
  int local_10 [2];
  
  if (this->bIsFull != false) {
    iVar1 = (this->Elements).ArrayNum;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10[0] = 0;
    local_10[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,this->Head,&local_18,local_10,local_10 + 1);
    _Src = (this->Elements).AllocatorInstance.Data;
    memcpy(local_18.Data,_Src,(ulonglong)this->Head * 0x38);
    uVar2 = this->Head;
    _Size = (ulonglong)uVar2 * 0x38;
    memcpy(_Src,_Src + _Size,_Size);
    memcpy(_Src + (ulonglong)(iVar1 - uVar2) * 0x38,local_18.Data,(longlong)local_10[0] * 0x38);
    this->Head = 0;
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// Resize @ 145956920

void __thiscall
TCircularHistoryBuffer<UE::Math::TVector<double>_>::Resize
          (TCircularHistoryBuffer<UE::Math::TVector<double>_> *this,uint param_1)

{
  int *piVar1;
  size_t _Size;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType local_28;
  int local_20 [2];
  
  uVar2 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayNum;
  if (uVar2 < param_1) {
    if (this->bIsFull != false) {
      if (this->Head != 0) {
        local_28.Data = (FScriptContainerElement *)0x0;
        local_20[0] = 0;
        local_20[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,this->Head,&local_28,local_20,local_20 + 1);
        _Src = (this->Elements).AllocatorInstance.Data;
        memcpy(local_28.Data,_Src,(ulonglong)this->Head * 0x18);
        uVar3 = this->Head;
        _Size = (ulonglong)uVar3 * 0x18;
        memcpy(_Src,_Src + _Size,_Size);
        memcpy(_Src + (ulonglong)(uVar2 - uVar3) * 0x18,local_28.Data,(longlong)local_20[0] * 0x18);
        this->Head = 0;
        if (local_28.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data);
        }
      }
      this->Head = *piVar1;
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_1 - uVar2,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    this->bIsFull = false;
    return;
  }
  if (param_1 < uVar2) {
    ResizeShrink(this,uVar2 - param_1);
  }
  return;
}

// Resize @ 145956a80

void __thiscall
TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::Resize
          (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *_Src;
  size_t _Size;
  ForAnyElementType local_28;
  int local_20 [2];
  
  uVar2 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayNum;
  if (uVar2 < param_1) {
    if (this->bIsFull != false) {
      if (this->Head != 0) {
        local_28.Data = (FScriptContainerElement *)0x0;
        local_20[0] = 0;
        local_20[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,this->Head,&local_28,local_20,local_20 + 1);
        _Src = (this->Elements).AllocatorInstance.Data;
        memcpy(local_28.Data,_Src,(ulonglong)this->Head * 0x38);
        uVar3 = this->Head;
        _Size = (ulonglong)uVar3 * 0x38;
        memcpy(_Src,_Src + _Size,_Size);
        memcpy(_Src + (ulonglong)(uVar2 - uVar3) * 0x38,local_28.Data,(longlong)local_20[0] * 0x38);
        this->Head = 0;
        if (local_28.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data);
        }
      }
      this->Head = *piVar1;
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,param_1 - uVar2,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    this->bIsFull = false;
    return;
  }
  if (param_1 < uVar2) {
    ResizeShrink(this,uVar2 - param_1);
  }
  return;
}

// ResizeGrow @ 145956bc0

void __thiscall
TCircularHistoryBuffer<UE::Math::TVector<double>_>::ResizeGrow
          (TCircularHistoryBuffer<UE::Math::TVector<double>_> *this,uint param_1)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType local_28;
  int local_20 [2];
  
  if (this->bIsFull != false) {
    if (this->Head != 0) {
      iVar1 = (this->Elements).ArrayNum;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20[0] = 0;
      local_20[1] = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,this->Head,&local_28,local_20,local_20 + 1);
      _Src = (this->Elements).AllocatorInstance.Data;
      memcpy(local_28.Data,_Src,(ulonglong)this->Head * 0x18);
      uVar2 = this->Head;
      _Size = (ulonglong)uVar2 * 0x18;
      memcpy(_Src,_Src + _Size,_Size);
      memcpy(_Src + (ulonglong)(iVar1 - uVar2) * 0x18,local_28.Data,(longlong)local_20[0] * 0x18);
      this->Head = 0;
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
    }
    this->Head = (this->Elements).ArrayNum;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_1,(ForAnyElementType *)this,&(this->Elements).ArrayNum,
             &(this->Elements).ArrayMax);
  this->bIsFull = false;
  return;
}

// ResizeGrow @ 145956cf0

void __thiscall
TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::ResizeGrow
          (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  size_t _Size;
  ForAnyElementType local_28;
  int local_20 [2];
  
  if (this->bIsFull != false) {
    if (this->Head != 0) {
      iVar1 = (this->Elements).ArrayNum;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20[0] = 0;
      local_20[1] = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,this->Head,&local_28,local_20,local_20 + 1);
      _Src = (this->Elements).AllocatorInstance.Data;
      memcpy(local_28.Data,_Src,(ulonglong)this->Head * 0x38);
      uVar2 = this->Head;
      _Size = (ulonglong)uVar2 * 0x38;
      memcpy(_Src,_Src + _Size,_Size);
      memcpy(_Src + (ulonglong)(iVar1 - uVar2) * 0x38,local_28.Data,(longlong)local_20[0] * 0x38);
      this->Head = 0;
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
    }
    this->Head = (this->Elements).ArrayNum;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,param_1,(ForAnyElementType *)this,&(this->Elements).ArrayNum,
             &(this->Elements).ArrayMax);
  this->bIsFull = false;
  return;
}

// ResizeShrink @ 145956e10

void __thiscall
TCircularHistoryBuffer<UE::Math::TVector<double>_>::ResizeShrink
          (TCircularHistoryBuffer<UE::Math::TVector<double>_> *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = this->Head;
  iVar3 = (this->Elements).ArrayNum;
  if (uVar7 < iVar3 - param_1) {
    uVar8 = 0;
    if ((int)(uVar7 + param_1) <= iVar3) {
      uVar8 = (~param_1 & ~uVar7) >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (param_1 != 0) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (&this->Elements,uVar7,param_1);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Elements).ArrayNum,
                 &(this->Elements).ArrayMax);
    }
  }
  else {
    uVar8 = iVar3 - uVar7;
    if (-1 < (int)(~uVar7 & ~uVar8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar8 != 0) {
      pFVar2 = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
      iVar6 = ((this->Elements).ArrayNum - uVar7) - uVar8;
      if (iVar6 != 0) {
        memmove(pFVar2,pFVar2 + (longlong)(int)uVar8 * 0x18,(longlong)iVar6 * 0x18);
      }
      piVar1 = &(this->Elements).ArrayNum;
      *piVar1 = *piVar1 - uVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Elements).ArrayNum,
                 &(this->Elements).ArrayMax);
    }
    uVar8 = this->Head - (iVar3 - param_1);
    uVar7 = 0;
    if ((int)uVar8 <= (this->Elements).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar8 != 0) {
      iVar3 = (this->Elements).ArrayNum;
      pFVar2 = (this->Elements).AllocatorInstance.Data;
      uVar7 = iVar3 - uVar8;
      if ((int)uVar8 < (int)uVar7) {
        uVar7 = uVar8;
      }
      if (uVar7 != 0) {
        memmove(pFVar2,pFVar2 + (longlong)(int)(iVar3 - uVar7) * 0x18,(longlong)(int)uVar7 * 0x18);
      }
      piVar1 = &(this->Elements).ArrayNum;
      *piVar1 = *piVar1 - uVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Elements).ArrayNum,
                 &(this->Elements).ArrayMax);
    }
    this->Head = 0;
    this->bIsFull = true;
  }
  return;
}

// ResizeShrink @ 145957040

void __thiscall
TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::ResizeShrink
          (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  uVar8 = this->Head;
  iVar2 = (this->Elements).ArrayNum;
  if (uVar8 < iVar2 - param_1) {
    uVar6 = 0;
    if ((int)(uVar8 + param_1) <= iVar2) {
      uVar6 = (~param_1 & ~uVar8) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (param_1 != 0) {
      iVar2 = (this->Elements).ArrayNum;
      pFVar7 = (this->Elements).AllocatorInstance.Data;
      uVar6 = (iVar2 - uVar8) - param_1;
      if ((int)param_1 < (int)uVar6) {
        uVar6 = param_1;
      }
      if (uVar6 != 0) {
        memmove(pFVar7 + (longlong)(int)uVar8 * 0x38,pFVar7 + (longlong)(int)(iVar2 - uVar6) * 0x38,
                (longlong)(int)uVar6 * 0x38);
      }
      piVar1 = &(this->Elements).ArrayNum;
      *piVar1 = *piVar1 - param_1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,(ForAnyElementType *)this,(this->Elements).ArrayNum,
                 &(this->Elements).ArrayMax);
    }
  }
  else {
    uVar6 = iVar2 - uVar8;
    if (-1 < (int)(~uVar8 & ~uVar6)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (uVar6 != 0) {
      pFVar7 = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x38;
      iVar5 = ((this->Elements).ArrayNum - uVar8) - uVar6;
      if (iVar5 != 0) {
        memmove(pFVar7,pFVar7 + (longlong)(int)uVar6 * 0x38,(longlong)iVar5 * 0x38);
      }
      piVar1 = &(this->Elements).ArrayNum;
      *piVar1 = *piVar1 - uVar6;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,(ForAnyElementType *)this,(this->Elements).ArrayNum,
                 &(this->Elements).ArrayMax);
    }
    uVar6 = this->Head - (iVar2 - param_1);
    uVar8 = 0;
    if ((int)uVar6 <= (this->Elements).ArrayNum) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (uVar6 != 0) {
      iVar2 = (this->Elements).ArrayNum;
      pFVar7 = (this->Elements).AllocatorInstance.Data;
      uVar8 = iVar2 - uVar6;
      if ((int)uVar6 < (int)uVar8) {
        uVar8 = uVar6;
      }
      if (uVar8 != 0) {
        memmove(pFVar7,pFVar7 + (longlong)(int)(iVar2 - uVar8) * 0x38,(longlong)(int)uVar8 * 0x38);
      }
      piVar1 = &(this->Elements).ArrayNum;
      *piVar1 = *piVar1 - uVar6;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,(ForAnyElementType *)this,(this->Elements).ArrayNum,
                 &(this->Elements).ArrayMax);
    }
    this->Head = 0;
    this->bIsFull = true;
  }
  return;
}

