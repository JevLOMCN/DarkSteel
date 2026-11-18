// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 13

// ~FSQHitBuffer<ChaosInterface::FOverlapHit> @ 1441a0d90

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::
~FSQHitBuffer<ChaosInterface::FOverlapHit>(FSQHitBuffer<ChaosInterface::FOverlapHit> *this)

{
  ForElementType<ChaosInterface::FOverlapHit> FVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__FSQHitBuffer_UFOverlapHit_ChaosInterface___ChaosInterface__6B_;
  FVar1 = (this->Hits).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// ~FSQHitBuffer<ChaosInterface::FRaycastHit> @ 1441a0dc0

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>::
~FSQHitBuffer<ChaosInterface::FRaycastHit>(FSQHitBuffer<ChaosInterface::FRaycastHit> *this)

{
  ForElementType<ChaosInterface::FRaycastHit> FVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__FSQHitBuffer_UFRaycastHit_ChaosInterface___ChaosInterface__6B_;
  FVar1 = (this->Hits).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// ~FSQHitBuffer<ChaosInterface::FSweepHit> @ 1441a0df0

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>::~FSQHitBuffer<ChaosInterface::FSweepHit>
          (FSQHitBuffer<ChaosInterface::FSweepHit> *this)

{
  ForElementType<ChaosInterface::FSweepHit> FVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__FSQHitBuffer_UFSweepHit_ChaosInterface___ChaosInterface__6B_;
  FVar1 = (this->Hits).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<ChaosInterface::FSweepHit>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// AddTouchingHit @ 1441a6800

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::AddTouchingHit
          (FSQHitBuffer<ChaosInterface::FOverlapHit> *this,FOverlapHit *param_1)

{
  TArray<ChaosInterface::FOverlapHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  bool bVar21;
  int iVar22;
  longlong lVar23;
  ForElementType<ChaosInterface::FOverlapHit> FVar24;
  
  FVar24 = (this->Hits).AllocatorInstance.SecondaryData;
  pTVar1 = &this->Hits;
  if (FVar24 == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
    FVar24 = (ForElementType<ChaosInterface::FOverlapHit>)pTVar1;
  }
  if (((ulonglong)FVar24 <= param_1) &&
     (param_1 < (FOverlapHit *)((longlong)(this->Hits).ArrayMax * 0x38 + (longlong)FVar24))) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar22 = (this->Hits).ArrayNum;
  piVar2 = &(this->Hits).ArrayMax;
  if (iVar22 == *piVar2) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FOverlapHit>_>
                       (0x838,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Hits).ArrayNum = iVar22 + 1;
  FVar24 = (this->Hits).AllocatorInstance.SecondaryData;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  if (FVar24 == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
    FVar24 = (ForElementType<ChaosInterface::FOverlapHit>)pTVar1;
  }
  lVar23 = (longlong)iVar22 * 0x38;
  *(undefined8 *)((longlong)FVar24 + lVar23) = *(undefined8 *)param_1;
  ((undefined8 *)((longlong)FVar24 + lVar23))[1] = uVar5;
  uVar6 = param_1->field_0x11;
  uVar7 = param_1->field_0x12;
  uVar8 = param_1->field_0x13;
  uVar9 = param_1->field_0x14;
  uVar10 = param_1->field_0x15;
  uVar11 = param_1->field_0x16;
  uVar12 = param_1->field_0x17;
  uVar13 = param_1->field_0x18;
  uVar14 = param_1->field_0x19;
  uVar15 = param_1->field_0x1a;
  uVar16 = param_1->field_0x1b;
  uVar17 = param_1->field_0x1c;
  uVar18 = param_1->field_0x1d;
  uVar19 = param_1->field_0x1e;
  uVar20 = param_1->field_0x1f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x10) + lVar23;
  puVar3[0] = param_1->field_0x10;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x21;
  uVar7 = param_1->field_0x22;
  uVar8 = param_1->field_0x23;
  uVar9 = param_1->field_0x24;
  uVar10 = param_1->field_0x25;
  uVar11 = param_1->field_0x26;
  uVar12 = param_1->field_0x27;
  uVar13 = param_1->field_0x28;
  uVar14 = param_1->field_0x29;
  uVar15 = param_1->field_0x2a;
  uVar16 = param_1->field_0x2b;
  uVar17 = param_1->field_0x2c;
  uVar18 = param_1->field_0x2d;
  uVar19 = param_1->field_0x2e;
  uVar20 = param_1->field_0x2f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x20) + lVar23;
  puVar3[0] = param_1->field_0x20;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x31;
  uVar7 = param_1->field_0x32;
  uVar8 = param_1->field_0x33;
  uVar9 = param_1->field_0x34;
  uVar10 = param_1->field_0x35;
  uVar11 = param_1->field_0x36;
  uVar12 = param_1->field_0x37;
  puVar3 = (uchar *)((longlong)FVar24 + 0x30) + lVar23;
  puVar3[0] = param_1->field_0x30;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  return;
}

// AddTouchingHit @ 1441a6900

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>::AddTouchingHit
          (FSQHitBuffer<ChaosInterface::FRaycastHit> *this,FRaycastHit *param_1)

{
  TArray<ChaosInterface::FRaycastHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ForElementType<ChaosInterface::FRaycastHit> FVar9;
  
  FVar9 = (this->Hits).AllocatorInstance.SecondaryData;
  pTVar1 = &this->Hits;
  if (FVar9 == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
    FVar9 = (ForElementType<ChaosInterface::FRaycastHit>)pTVar1;
  }
  if (((ulonglong)FVar9 <= param_1) &&
     (param_1 < (FRaycastHit *)((longlong)(this->Hits).ArrayMax * 0x80 + (longlong)FVar9))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = (this->Hits).ArrayNum;
  piVar2 = &(this->Hits).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FRaycastHit>_>
                      (0x880,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Hits).ArrayNum = iVar7 + 1;
  FVar9 = (this->Hits).AllocatorInstance.SecondaryData;
  lVar4 = param_1->_padding_;
  if (FVar9 == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
    FVar9 = (ForElementType<ChaosInterface::FRaycastHit>)pTVar1;
  }
  lVar8 = (longlong)iVar7 * 0x80;
  *(longlong *)((longlong)FVar9 + lVar8) = param_1->_padding_;
  ((longlong *)((longlong)FVar9 + lVar8))[1] = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x10) + lVar8) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 + 8) = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x20) + lVar8) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x20) + lVar8 + 8) = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x30) + lVar8) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x30) + lVar8 + 8) = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x40) + lVar8) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x40) + lVar8 + 8) = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x50) + lVar8) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x50) + lVar8 + 8) = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x60) + lVar8) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x60) + lVar8 + 8) = lVar4;
  uVar5 = *(undefined8 *)&param_1->U;
  *(longlong *)((uchar *)((longlong)FVar9 + 0x70) + lVar8) = param_1->_padding_;
  *(undefined8 *)((uchar *)((longlong)FVar9 + 0x70) + lVar8 + 8) = uVar5;
  return;
}

// AddTouchingHit @ 1441a6a20

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>::AddTouchingHit
          (FSQHitBuffer<ChaosInterface::FSweepHit> *this,FSweepHit *param_1)

{
  TArray<ChaosInterface::FSweepHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  bool bVar21;
  int iVar22;
  longlong lVar23;
  ForElementType<ChaosInterface::FSweepHit> FVar24;
  
  FVar24 = (this->Hits).AllocatorInstance.SecondaryData;
  pTVar1 = &this->Hits;
  if (FVar24 == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
    FVar24 = (ForElementType<ChaosInterface::FSweepHit>)pTVar1;
  }
  if (((ulonglong)FVar24 <= param_1) &&
     (param_1 < (FSweepHit *)((longlong)(this->Hits).ArrayMax * 0x78 + (longlong)FVar24))) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar22 = (this->Hits).ArrayNum;
  piVar2 = &(this->Hits).ArrayMax;
  if (iVar22 == *piVar2) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FSweepHit>_>
                       (0x878,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Hits).ArrayNum = iVar22 + 1;
  FVar24 = (this->Hits).AllocatorInstance.SecondaryData;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  if (FVar24 == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
    FVar24 = (ForElementType<ChaosInterface::FSweepHit>)pTVar1;
  }
  lVar23 = (longlong)iVar22 * 0x78;
  *(undefined8 *)((longlong)FVar24 + lVar23) = *(undefined8 *)param_1;
  ((undefined8 *)((longlong)FVar24 + lVar23))[1] = uVar5;
  uVar6 = param_1->field_0x11;
  uVar7 = param_1->field_0x12;
  uVar8 = param_1->field_0x13;
  uVar9 = param_1->field_0x14;
  uVar10 = param_1->field_0x15;
  uVar11 = param_1->field_0x16;
  uVar12 = param_1->field_0x17;
  uVar13 = param_1->field_0x18;
  uVar14 = param_1->field_0x19;
  uVar15 = param_1->field_0x1a;
  uVar16 = param_1->field_0x1b;
  uVar17 = param_1->field_0x1c;
  uVar18 = param_1->field_0x1d;
  uVar19 = param_1->field_0x1e;
  uVar20 = param_1->field_0x1f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x10) + lVar23;
  puVar3[0] = param_1->field_0x10;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x21;
  uVar7 = param_1->field_0x22;
  uVar8 = param_1->field_0x23;
  uVar9 = param_1->field_0x24;
  uVar10 = param_1->field_0x25;
  uVar11 = param_1->field_0x26;
  uVar12 = param_1->field_0x27;
  uVar13 = param_1->field_0x28;
  uVar14 = param_1->field_0x29;
  uVar15 = param_1->field_0x2a;
  uVar16 = param_1->field_0x2b;
  uVar17 = param_1->field_0x2c;
  uVar18 = param_1->field_0x2d;
  uVar19 = param_1->field_0x2e;
  uVar20 = param_1->field_0x2f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x20) + lVar23;
  puVar3[0] = param_1->field_0x20;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x31;
  uVar7 = param_1->field_0x32;
  uVar8 = param_1->field_0x33;
  uVar9 = param_1->field_0x34;
  uVar10 = param_1->field_0x35;
  uVar11 = param_1->field_0x36;
  uVar12 = param_1->field_0x37;
  uVar13 = param_1->field_0x38;
  uVar14 = param_1->field_0x39;
  uVar15 = param_1->field_0x3a;
  uVar16 = param_1->field_0x3b;
  uVar17 = param_1->field_0x3c;
  uVar18 = param_1->field_0x3d;
  uVar19 = param_1->field_0x3e;
  uVar20 = param_1->field_0x3f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x30) + lVar23;
  puVar3[0] = param_1->field_0x30;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x41;
  uVar7 = param_1->field_0x42;
  uVar8 = param_1->field_0x43;
  uVar9 = param_1->field_0x44;
  uVar10 = param_1->field_0x45;
  uVar11 = param_1->field_0x46;
  uVar12 = param_1->field_0x47;
  uVar13 = param_1->field_0x48;
  uVar14 = param_1->field_0x49;
  uVar15 = param_1->field_0x4a;
  uVar16 = param_1->field_0x4b;
  uVar17 = param_1->field_0x4c;
  uVar18 = param_1->field_0x4d;
  uVar19 = param_1->field_0x4e;
  uVar20 = param_1->field_0x4f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x40) + lVar23;
  puVar3[0] = param_1->field_0x40;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x51;
  uVar7 = param_1->field_0x52;
  uVar8 = param_1->field_0x53;
  uVar9 = param_1->field_0x54;
  uVar10 = param_1->field_0x55;
  uVar11 = param_1->field_0x56;
  uVar12 = param_1->field_0x57;
  uVar13 = param_1->field_0x58;
  uVar14 = param_1->field_0x59;
  uVar15 = param_1->field_0x5a;
  uVar16 = param_1->field_0x5b;
  uVar17 = param_1->field_0x5c;
  uVar18 = param_1->field_0x5d;
  uVar19 = param_1->field_0x5e;
  uVar20 = param_1->field_0x5f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x50) + lVar23;
  puVar3[0] = param_1->field_0x50;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x61;
  uVar7 = param_1->field_0x62;
  uVar8 = param_1->field_0x63;
  uVar9 = param_1->field_0x64;
  uVar10 = param_1->field_0x65;
  uVar11 = param_1->field_0x66;
  uVar12 = param_1->field_0x67;
  uVar13 = param_1->field_0x68;
  uVar14 = param_1->field_0x69;
  uVar15 = param_1->field_0x6a;
  uVar16 = param_1->field_0x6b;
  uVar17 = param_1->field_0x6c;
  uVar18 = param_1->field_0x6d;
  uVar19 = param_1->field_0x6e;
  uVar20 = param_1->field_0x6f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x60) + lVar23;
  puVar3[0] = param_1->field_0x60;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x71;
  uVar7 = param_1->field_0x72;
  uVar8 = param_1->field_0x73;
  uVar9 = param_1->field_0x74;
  uVar10 = param_1->field_0x75;
  uVar11 = param_1->field_0x76;
  uVar12 = param_1->field_0x77;
  puVar3 = (uchar *)((longlong)FVar24 + 0x70) + lVar23;
  puVar3[0] = param_1->field_0x70;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  return;
}

// DecFlushCount @ 1441ab6e0

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::DecFlushCount
          (FSQHitBuffer<ChaosInterface::FOverlapHit> *this)

{
  int *piVar1;
  TArray<ChaosInterface::FOverlapHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  FOverlapHit *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  bool bVar22;
  int iVar23;
  longlong lVar24;
  ForElementType<ChaosInterface::FOverlapHit> FVar25;
  
  piVar1 = &this->AcceleratorDepth;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    pTVar2 = &this->Hits;
    pFVar3 = &this->CurrentBlockingHit;
    if (this->bHasBlockingHit != false) {
      FVar25 = (this->Hits).AllocatorInstance.SecondaryData;
      if (FVar25 == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
        FVar25 = (ForElementType<ChaosInterface::FOverlapHit>)pTVar2;
      }
      if ((((ulonglong)FVar25 <= pFVar3) &&
          (pFVar3 < (undefined1 *)((longlong)(this->Hits).ArrayMax * 0x38 + (longlong)FVar25))) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar23 = (this->Hits).ArrayNum;
      piVar1 = &(this->Hits).ArrayMax;
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FOverlapHit>_>
                           (0x838,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->Hits).ArrayNum = iVar23 + 1;
      FVar25 = (this->Hits).AllocatorInstance.SecondaryData;
      uVar6 = *(undefined8 *)&(this->CurrentBlockingHit).field_0x8;
      if (FVar25 == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
        FVar25 = (ForElementType<ChaosInterface::FOverlapHit>)pTVar2;
      }
      lVar24 = (longlong)iVar23 * 0x38;
      *(undefined8 *)((longlong)FVar25 + lVar24) = *(undefined8 *)pFVar3;
      ((undefined8 *)((longlong)FVar25 + lVar24))[1] = uVar6;
      uVar7 = (this->CurrentBlockingHit).field_0x11;
      uVar8 = (this->CurrentBlockingHit).field_0x12;
      uVar9 = (this->CurrentBlockingHit).field_0x13;
      uVar10 = (this->CurrentBlockingHit).field_0x14;
      uVar11 = (this->CurrentBlockingHit).field_0x15;
      uVar12 = (this->CurrentBlockingHit).field_0x16;
      uVar13 = (this->CurrentBlockingHit).field_0x17;
      uVar14 = (this->CurrentBlockingHit).field_0x18;
      uVar15 = (this->CurrentBlockingHit).field_0x19;
      uVar16 = (this->CurrentBlockingHit).field_0x1a;
      uVar17 = (this->CurrentBlockingHit).field_0x1b;
      uVar18 = (this->CurrentBlockingHit).field_0x1c;
      uVar19 = (this->CurrentBlockingHit).field_0x1d;
      uVar20 = (this->CurrentBlockingHit).field_0x1e;
      uVar21 = (this->CurrentBlockingHit).field_0x1f;
      puVar4 = (uchar *)((longlong)FVar25 + 0x10) + lVar24;
      puVar4[0] = (this->CurrentBlockingHit).field_0x10;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar4[4] = uVar10;
      puVar4[5] = uVar11;
      puVar4[6] = uVar12;
      puVar4[7] = uVar13;
      puVar4[8] = uVar14;
      puVar4[9] = uVar15;
      puVar4[10] = uVar16;
      puVar4[0xb] = uVar17;
      puVar4[0xc] = uVar18;
      puVar4[0xd] = uVar19;
      puVar4[0xe] = uVar20;
      puVar4[0xf] = uVar21;
      uVar7 = (this->CurrentBlockingHit).field_0x21;
      uVar8 = (this->CurrentBlockingHit).field_0x22;
      uVar9 = (this->CurrentBlockingHit).field_0x23;
      uVar10 = (this->CurrentBlockingHit).field_0x24;
      uVar11 = (this->CurrentBlockingHit).field_0x25;
      uVar12 = (this->CurrentBlockingHit).field_0x26;
      uVar13 = (this->CurrentBlockingHit).field_0x27;
      uVar14 = (this->CurrentBlockingHit).field_0x28;
      uVar15 = (this->CurrentBlockingHit).field_0x29;
      uVar16 = (this->CurrentBlockingHit).field_0x2a;
      uVar17 = (this->CurrentBlockingHit).field_0x2b;
      uVar18 = (this->CurrentBlockingHit).field_0x2c;
      uVar19 = (this->CurrentBlockingHit).field_0x2d;
      uVar20 = (this->CurrentBlockingHit).field_0x2e;
      uVar21 = (this->CurrentBlockingHit).field_0x2f;
      puVar4 = (uchar *)((longlong)FVar25 + 0x20) + lVar24;
      puVar4[0] = (this->CurrentBlockingHit).field_0x20;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar4[4] = uVar10;
      puVar4[5] = uVar11;
      puVar4[6] = uVar12;
      puVar4[7] = uVar13;
      puVar4[8] = uVar14;
      puVar4[9] = uVar15;
      puVar4[10] = uVar16;
      puVar4[0xb] = uVar17;
      puVar4[0xc] = uVar18;
      puVar4[0xd] = uVar19;
      puVar4[0xe] = uVar20;
      puVar4[0xf] = uVar21;
      uVar7 = (this->CurrentBlockingHit).field_0x31;
      uVar8 = (this->CurrentBlockingHit).field_0x32;
      uVar9 = (this->CurrentBlockingHit).field_0x33;
      uVar10 = (this->CurrentBlockingHit).field_0x34;
      uVar11 = (this->CurrentBlockingHit).field_0x35;
      uVar12 = (this->CurrentBlockingHit).field_0x36;
      uVar13 = (this->CurrentBlockingHit).field_0x37;
      puVar4 = (uchar *)((longlong)FVar25 + 0x30) + lVar24;
      puVar4[0] = (this->CurrentBlockingHit).field_0x30;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar4[4] = uVar10;
      puVar4[5] = uVar11;
      puVar4[6] = uVar12;
      puVar4[7] = uVar13;
    }
  }
  return;
}

// DecFlushCount @ 1441ab7f0

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::DecFlushCount
          (FSQHitBuffer<ChaosInterface::FPTOverlapHit> *this)

{
  int *piVar1;
  TArray<ChaosInterface::FPTOverlapHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  FPTOverlapHit *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  bool bVar22;
  int iVar23;
  longlong lVar24;
  ForElementType<ChaosInterface::FPTOverlapHit> FVar25;
  
  piVar1 = &this->AcceleratorDepth;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    pTVar2 = &this->Hits;
    pFVar3 = &this->CurrentBlockingHit;
    if (this->bHasBlockingHit != false) {
      FVar25 = (this->Hits).AllocatorInstance.SecondaryData;
      if (FVar25 == (ForElementType<ChaosInterface::FPTOverlapHit>)0x0) {
        FVar25 = (ForElementType<ChaosInterface::FPTOverlapHit>)pTVar2;
      }
      if ((((ulonglong)FVar25 <= pFVar3) &&
          (pFVar3 < (undefined1 *)((longlong)(this->Hits).ArrayMax * 0x38 + (longlong)FVar25))) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar23 = (this->Hits).ArrayNum;
      piVar1 = &(this->Hits).ArrayMax;
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTOverlapHit>_>
                           (0x838,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->Hits).ArrayNum = iVar23 + 1;
      FVar25 = (this->Hits).AllocatorInstance.SecondaryData;
      uVar6 = *(undefined8 *)&(this->CurrentBlockingHit).field_0x8;
      if (FVar25 == (ForElementType<ChaosInterface::FPTOverlapHit>)0x0) {
        FVar25 = (ForElementType<ChaosInterface::FPTOverlapHit>)pTVar2;
      }
      lVar24 = (longlong)iVar23 * 0x38;
      *(undefined8 *)((longlong)FVar25 + lVar24) = *(undefined8 *)pFVar3;
      ((undefined8 *)((longlong)FVar25 + lVar24))[1] = uVar6;
      uVar7 = (this->CurrentBlockingHit).field_0x11;
      uVar8 = (this->CurrentBlockingHit).field_0x12;
      uVar9 = (this->CurrentBlockingHit).field_0x13;
      uVar10 = (this->CurrentBlockingHit).field_0x14;
      uVar11 = (this->CurrentBlockingHit).field_0x15;
      uVar12 = (this->CurrentBlockingHit).field_0x16;
      uVar13 = (this->CurrentBlockingHit).field_0x17;
      uVar14 = (this->CurrentBlockingHit).field_0x18;
      uVar15 = (this->CurrentBlockingHit).field_0x19;
      uVar16 = (this->CurrentBlockingHit).field_0x1a;
      uVar17 = (this->CurrentBlockingHit).field_0x1b;
      uVar18 = (this->CurrentBlockingHit).field_0x1c;
      uVar19 = (this->CurrentBlockingHit).field_0x1d;
      uVar20 = (this->CurrentBlockingHit).field_0x1e;
      uVar21 = (this->CurrentBlockingHit).field_0x1f;
      puVar4 = (uchar *)((longlong)FVar25 + 0x10) + lVar24;
      puVar4[0] = (this->CurrentBlockingHit).field_0x10;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar4[4] = uVar10;
      puVar4[5] = uVar11;
      puVar4[6] = uVar12;
      puVar4[7] = uVar13;
      puVar4[8] = uVar14;
      puVar4[9] = uVar15;
      puVar4[10] = uVar16;
      puVar4[0xb] = uVar17;
      puVar4[0xc] = uVar18;
      puVar4[0xd] = uVar19;
      puVar4[0xe] = uVar20;
      puVar4[0xf] = uVar21;
      uVar7 = (this->CurrentBlockingHit).field_0x21;
      uVar8 = (this->CurrentBlockingHit).field_0x22;
      uVar9 = (this->CurrentBlockingHit).field_0x23;
      uVar10 = (this->CurrentBlockingHit).field_0x24;
      uVar11 = (this->CurrentBlockingHit).field_0x25;
      uVar12 = (this->CurrentBlockingHit).field_0x26;
      uVar13 = (this->CurrentBlockingHit).field_0x27;
      uVar14 = (this->CurrentBlockingHit).field_0x28;
      uVar15 = (this->CurrentBlockingHit).field_0x29;
      uVar16 = (this->CurrentBlockingHit).field_0x2a;
      uVar17 = (this->CurrentBlockingHit).field_0x2b;
      uVar18 = (this->CurrentBlockingHit).field_0x2c;
      uVar19 = (this->CurrentBlockingHit).field_0x2d;
      uVar20 = (this->CurrentBlockingHit).field_0x2e;
      uVar21 = (this->CurrentBlockingHit).field_0x2f;
      puVar4 = (uchar *)((longlong)FVar25 + 0x20) + lVar24;
      puVar4[0] = (this->CurrentBlockingHit).field_0x20;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar4[4] = uVar10;
      puVar4[5] = uVar11;
      puVar4[6] = uVar12;
      puVar4[7] = uVar13;
      puVar4[8] = uVar14;
      puVar4[9] = uVar15;
      puVar4[10] = uVar16;
      puVar4[0xb] = uVar17;
      puVar4[0xc] = uVar18;
      puVar4[0xd] = uVar19;
      puVar4[0xe] = uVar20;
      puVar4[0xf] = uVar21;
      uVar7 = (this->CurrentBlockingHit).field_0x31;
      uVar8 = (this->CurrentBlockingHit).field_0x32;
      uVar9 = (this->CurrentBlockingHit).field_0x33;
      uVar10 = (this->CurrentBlockingHit).field_0x34;
      uVar11 = (this->CurrentBlockingHit).field_0x35;
      uVar12 = (this->CurrentBlockingHit).field_0x36;
      uVar13 = (this->CurrentBlockingHit).field_0x37;
      puVar4 = (uchar *)((longlong)FVar25 + 0x30) + lVar24;
      puVar4[0] = (this->CurrentBlockingHit).field_0x30;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar4[4] = uVar10;
      puVar4[5] = uVar11;
      puVar4[6] = uVar12;
      puVar4[7] = uVar13;
    }
  }
  return;
}

// InsertHit @ 1441b0ec0

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::InsertHit
          (FSQHitBuffer<ChaosInterface::FPTOverlapHit> *this,FPTOverlapHit *param_1,bool param_2)

{
  TArray<ChaosInterface::FPTOverlapHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  bool bVar21;
  int iVar22;
  longlong lVar23;
  ForElementType<ChaosInterface::FPTOverlapHit> FVar24;
  
  if (param_2) {
    uVar5 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)&this->CurrentBlockingHit = *(undefined8 *)param_1;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x8 = uVar5;
    uVar5 = *(undefined8 *)&param_1->field_0x18;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x10 = *(undefined8 *)&param_1->field_0x10;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x18 = uVar5;
    uVar5 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x20 = *(undefined8 *)&param_1->field_0x20;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x28 = uVar5;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x30 = *(undefined8 *)&param_1->field_0x30;
    this->bHasBlockingHit = true;
    return;
  }
  FVar24 = (this->Hits).AllocatorInstance.SecondaryData;
  pTVar1 = &this->Hits;
  if (FVar24 == (ForElementType<ChaosInterface::FPTOverlapHit>)0x0) {
    FVar24 = (ForElementType<ChaosInterface::FPTOverlapHit>)pTVar1;
  }
  if (((ulonglong)FVar24 <= param_1) &&
     (param_1 < (FPTOverlapHit *)((longlong)(this->Hits).ArrayMax * 0x38 + (longlong)FVar24))) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar22 = (this->Hits).ArrayNum;
  piVar2 = &(this->Hits).ArrayMax;
  if (iVar22 == *piVar2) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTOverlapHit>_>
                       (0x838,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Hits).ArrayNum = iVar22 + 1;
  FVar24 = (this->Hits).AllocatorInstance.SecondaryData;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  if (FVar24 == (ForElementType<ChaosInterface::FPTOverlapHit>)0x0) {
    FVar24 = (ForElementType<ChaosInterface::FPTOverlapHit>)pTVar1;
  }
  lVar23 = (longlong)iVar22 * 0x38;
  *(undefined8 *)((longlong)FVar24 + lVar23) = *(undefined8 *)param_1;
  ((undefined8 *)((longlong)FVar24 + lVar23))[1] = uVar5;
  uVar6 = param_1->field_0x11;
  uVar7 = param_1->field_0x12;
  uVar8 = param_1->field_0x13;
  uVar9 = param_1->field_0x14;
  uVar10 = param_1->field_0x15;
  uVar11 = param_1->field_0x16;
  uVar12 = param_1->field_0x17;
  uVar13 = param_1->field_0x18;
  uVar14 = param_1->field_0x19;
  uVar15 = param_1->field_0x1a;
  uVar16 = param_1->field_0x1b;
  uVar17 = param_1->field_0x1c;
  uVar18 = param_1->field_0x1d;
  uVar19 = param_1->field_0x1e;
  uVar20 = param_1->field_0x1f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x10) + lVar23;
  puVar3[0] = param_1->field_0x10;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x21;
  uVar7 = param_1->field_0x22;
  uVar8 = param_1->field_0x23;
  uVar9 = param_1->field_0x24;
  uVar10 = param_1->field_0x25;
  uVar11 = param_1->field_0x26;
  uVar12 = param_1->field_0x27;
  uVar13 = param_1->field_0x28;
  uVar14 = param_1->field_0x29;
  uVar15 = param_1->field_0x2a;
  uVar16 = param_1->field_0x2b;
  uVar17 = param_1->field_0x2c;
  uVar18 = param_1->field_0x2d;
  uVar19 = param_1->field_0x2e;
  uVar20 = param_1->field_0x2f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x20) + lVar23;
  puVar3[0] = param_1->field_0x20;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x31;
  uVar7 = param_1->field_0x32;
  uVar8 = param_1->field_0x33;
  uVar9 = param_1->field_0x34;
  uVar10 = param_1->field_0x35;
  uVar11 = param_1->field_0x36;
  uVar12 = param_1->field_0x37;
  puVar3 = (uchar *)((longlong)FVar24 + 0x30) + lVar23;
  puVar3[0] = param_1->field_0x30;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  return;
}

// InsertHit @ 1441b0ff0

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>::InsertHit
          (FSQHitBuffer<ChaosInterface::FPTRaycastHit> *this,FPTRaycastHit *param_1,bool param_2)

{
  TArray<ChaosInterface::FPTRaycastHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<ChaosInterface::FPTRaycastHit> FVar11;
  
  if (param_2) {
    lVar4 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar4;
    lVar4 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar4;
    lVar4 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar4;
    lVar4 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar4;
    lVar4 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar4;
    lVar4 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar4;
    lVar4 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar4;
    lVar4 = param_1->_padding_;
    fVar6 = param_1->U;
    fVar7 = param_1->V;
    this->bHasBlockingHit = true;
    (this->CurrentBlockingHit)._padding_ = lVar4;
    (this->CurrentBlockingHit).U = fVar6;
    (this->CurrentBlockingHit).V = fVar7;
    return;
  }
  FVar11 = (this->Hits).AllocatorInstance.SecondaryData;
  pTVar1 = &this->Hits;
  if (FVar11 == (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
    FVar11 = (ForElementType<ChaosInterface::FPTRaycastHit>)pTVar1;
  }
  if (((ulonglong)FVar11 <= param_1) &&
     (param_1 < (FPTRaycastHit *)((longlong)(this->Hits).ArrayMax * 0x80 + (longlong)FVar11))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar9 = (this->Hits).ArrayNum;
  piVar2 = &(this->Hits).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTRaycastHit>_>
                      (0x880,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Hits).ArrayNum = iVar9 + 1;
  FVar11 = (this->Hits).AllocatorInstance.SecondaryData;
  lVar4 = param_1->_padding_;
  if (FVar11 == (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
    FVar11 = (ForElementType<ChaosInterface::FPTRaycastHit>)pTVar1;
  }
  lVar10 = (longlong)iVar9 * 0x80;
  *(longlong *)((longlong)FVar11 + lVar10) = param_1->_padding_;
  ((longlong *)((longlong)FVar11 + lVar10))[1] = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x10) + lVar10) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x10) + lVar10 + 8) = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x20) + lVar10) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x20) + lVar10 + 8) = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x30) + lVar10) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x30) + lVar10 + 8) = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x40) + lVar10) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x40) + lVar10 + 8) = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x50) + lVar10) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x50) + lVar10 + 8) = lVar4;
  lVar4 = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x60) + lVar10) = param_1->_padding_;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x60) + lVar10 + 8) = lVar4;
  uVar5 = *(undefined8 *)&param_1->U;
  *(longlong *)((uchar *)((longlong)FVar11 + 0x70) + lVar10) = param_1->_padding_;
  *(undefined8 *)((uchar *)((longlong)FVar11 + 0x70) + lVar10 + 8) = uVar5;
  return;
}

// InsertHit @ 1441b1160

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>::InsertHit
          (FSQHitBuffer<ChaosInterface::FPTSweepHit> *this,FPTSweepHit *param_1,bool param_2)

{
  TArray<ChaosInterface::FPTSweepHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  bool bVar21;
  int iVar22;
  longlong lVar23;
  ForElementType<ChaosInterface::FPTSweepHit> FVar24;
  
  if (param_2) {
    uVar5 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)&this->CurrentBlockingHit = *(undefined8 *)param_1;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x8 = uVar5;
    uVar5 = *(undefined8 *)&param_1->field_0x18;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x10 = *(undefined8 *)&param_1->field_0x10;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x18 = uVar5;
    uVar5 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x20 = *(undefined8 *)&param_1->field_0x20;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x28 = uVar5;
    uVar5 = *(undefined8 *)&param_1->field_0x38;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x30 = *(undefined8 *)&param_1->field_0x30;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x38 = uVar5;
    uVar5 = *(undefined8 *)&param_1->field_0x48;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x40 = *(undefined8 *)&param_1->field_0x40;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x48 = uVar5;
    uVar5 = *(undefined8 *)&param_1->field_0x58;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x50 = *(undefined8 *)&param_1->field_0x50;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x58 = uVar5;
    uVar5 = *(undefined8 *)&param_1->field_0x68;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x60 = *(undefined8 *)&param_1->field_0x60;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x68 = uVar5;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x70 = *(undefined8 *)&param_1->field_0x70;
    this->bHasBlockingHit = true;
    return;
  }
  FVar24 = (this->Hits).AllocatorInstance.SecondaryData;
  pTVar1 = &this->Hits;
  if (FVar24 == (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
    FVar24 = (ForElementType<ChaosInterface::FPTSweepHit>)pTVar1;
  }
  if (((ulonglong)FVar24 <= param_1) &&
     (param_1 < (FPTSweepHit *)((longlong)(this->Hits).ArrayMax * 0x78 + (longlong)FVar24))) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar22 = (this->Hits).ArrayNum;
  piVar2 = &(this->Hits).ArrayMax;
  if (iVar22 == *piVar2) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTSweepHit>_>
                       (0x878,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Hits).ArrayNum = iVar22 + 1;
  FVar24 = (this->Hits).AllocatorInstance.SecondaryData;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  if (FVar24 == (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
    FVar24 = (ForElementType<ChaosInterface::FPTSweepHit>)pTVar1;
  }
  lVar23 = (longlong)iVar22 * 0x78;
  *(undefined8 *)((longlong)FVar24 + lVar23) = *(undefined8 *)param_1;
  ((undefined8 *)((longlong)FVar24 + lVar23))[1] = uVar5;
  uVar6 = param_1->field_0x11;
  uVar7 = param_1->field_0x12;
  uVar8 = param_1->field_0x13;
  uVar9 = param_1->field_0x14;
  uVar10 = param_1->field_0x15;
  uVar11 = param_1->field_0x16;
  uVar12 = param_1->field_0x17;
  uVar13 = param_1->field_0x18;
  uVar14 = param_1->field_0x19;
  uVar15 = param_1->field_0x1a;
  uVar16 = param_1->field_0x1b;
  uVar17 = param_1->field_0x1c;
  uVar18 = param_1->field_0x1d;
  uVar19 = param_1->field_0x1e;
  uVar20 = param_1->field_0x1f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x10) + lVar23;
  puVar3[0] = param_1->field_0x10;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x21;
  uVar7 = param_1->field_0x22;
  uVar8 = param_1->field_0x23;
  uVar9 = param_1->field_0x24;
  uVar10 = param_1->field_0x25;
  uVar11 = param_1->field_0x26;
  uVar12 = param_1->field_0x27;
  uVar13 = param_1->field_0x28;
  uVar14 = param_1->field_0x29;
  uVar15 = param_1->field_0x2a;
  uVar16 = param_1->field_0x2b;
  uVar17 = param_1->field_0x2c;
  uVar18 = param_1->field_0x2d;
  uVar19 = param_1->field_0x2e;
  uVar20 = param_1->field_0x2f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x20) + lVar23;
  puVar3[0] = param_1->field_0x20;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x31;
  uVar7 = param_1->field_0x32;
  uVar8 = param_1->field_0x33;
  uVar9 = param_1->field_0x34;
  uVar10 = param_1->field_0x35;
  uVar11 = param_1->field_0x36;
  uVar12 = param_1->field_0x37;
  uVar13 = param_1->field_0x38;
  uVar14 = param_1->field_0x39;
  uVar15 = param_1->field_0x3a;
  uVar16 = param_1->field_0x3b;
  uVar17 = param_1->field_0x3c;
  uVar18 = param_1->field_0x3d;
  uVar19 = param_1->field_0x3e;
  uVar20 = param_1->field_0x3f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x30) + lVar23;
  puVar3[0] = param_1->field_0x30;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x41;
  uVar7 = param_1->field_0x42;
  uVar8 = param_1->field_0x43;
  uVar9 = param_1->field_0x44;
  uVar10 = param_1->field_0x45;
  uVar11 = param_1->field_0x46;
  uVar12 = param_1->field_0x47;
  uVar13 = param_1->field_0x48;
  uVar14 = param_1->field_0x49;
  uVar15 = param_1->field_0x4a;
  uVar16 = param_1->field_0x4b;
  uVar17 = param_1->field_0x4c;
  uVar18 = param_1->field_0x4d;
  uVar19 = param_1->field_0x4e;
  uVar20 = param_1->field_0x4f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x40) + lVar23;
  puVar3[0] = param_1->field_0x40;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x51;
  uVar7 = param_1->field_0x52;
  uVar8 = param_1->field_0x53;
  uVar9 = param_1->field_0x54;
  uVar10 = param_1->field_0x55;
  uVar11 = param_1->field_0x56;
  uVar12 = param_1->field_0x57;
  uVar13 = param_1->field_0x58;
  uVar14 = param_1->field_0x59;
  uVar15 = param_1->field_0x5a;
  uVar16 = param_1->field_0x5b;
  uVar17 = param_1->field_0x5c;
  uVar18 = param_1->field_0x5d;
  uVar19 = param_1->field_0x5e;
  uVar20 = param_1->field_0x5f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x50) + lVar23;
  puVar3[0] = param_1->field_0x50;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x61;
  uVar7 = param_1->field_0x62;
  uVar8 = param_1->field_0x63;
  uVar9 = param_1->field_0x64;
  uVar10 = param_1->field_0x65;
  uVar11 = param_1->field_0x66;
  uVar12 = param_1->field_0x67;
  uVar13 = param_1->field_0x68;
  uVar14 = param_1->field_0x69;
  uVar15 = param_1->field_0x6a;
  uVar16 = param_1->field_0x6b;
  uVar17 = param_1->field_0x6c;
  uVar18 = param_1->field_0x6d;
  uVar19 = param_1->field_0x6e;
  uVar20 = param_1->field_0x6f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x60) + lVar23;
  puVar3[0] = param_1->field_0x60;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x71;
  uVar7 = param_1->field_0x72;
  uVar8 = param_1->field_0x73;
  uVar9 = param_1->field_0x74;
  uVar10 = param_1->field_0x75;
  uVar11 = param_1->field_0x76;
  uVar12 = param_1->field_0x77;
  puVar3 = (uchar *)((longlong)FVar24 + 0x70) + lVar23;
  puVar3[0] = param_1->field_0x70;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  return;
}

// InsertHit @ 1441b12d0

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>::InsertHit
          (FSQHitBuffer<ChaosInterface::FRaycastHit> *this,FRaycastHit *param_1,bool param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  if (param_2) {
    lVar1 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar1;
    lVar1 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar1;
    lVar1 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar1;
    lVar1 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar1;
    lVar1 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar1;
    lVar1 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar1;
    lVar1 = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = param_1->_padding_;
    (this->CurrentBlockingHit)._padding_ = lVar1;
    lVar1 = param_1->_padding_;
    fVar2 = param_1->U;
    fVar3 = param_1->V;
    this->bHasBlockingHit = true;
    (this->CurrentBlockingHit)._padding_ = lVar1;
    (this->CurrentBlockingHit).U = fVar2;
    (this->CurrentBlockingHit).V = fVar3;
    return;
  }
  AddTouchingHit(this,param_1);
  return;
}

// InsertHit @ 1441b1330

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>::InsertHit
          (FSQHitBuffer<ChaosInterface::FSweepHit> *this,FSweepHit *param_1,bool param_2)

{
  undefined8 uVar1;
  
  if (param_2) {
    uVar1 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)&this->CurrentBlockingHit = *(undefined8 *)param_1;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x18;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x10 = *(undefined8 *)&param_1->field_0x10;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x18 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x20 = *(undefined8 *)&param_1->field_0x20;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x28 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x38;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x30 = *(undefined8 *)&param_1->field_0x30;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x38 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x48;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x40 = *(undefined8 *)&param_1->field_0x40;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x48 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x58;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x50 = *(undefined8 *)&param_1->field_0x50;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x58 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x68;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x60 = *(undefined8 *)&param_1->field_0x60;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x68 = uVar1;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x70 = *(undefined8 *)&param_1->field_0x70;
    this->bHasBlockingHit = true;
    return;
  }
  AddTouchingHit(this,param_1);
  return;
}

