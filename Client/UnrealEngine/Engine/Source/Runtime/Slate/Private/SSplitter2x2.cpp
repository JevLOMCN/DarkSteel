// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 23

// SSplitter2x2 @ 1428bae20

SSplitter2x2 * __thiscall SSplitter2x2::SSplitter2x2(SSplitter2x2 *this)

{
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SSplitter2x2__6B_;
  (this->Children)._padding_ = (longlong)this;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  ::FName::FName((FName *)&(this->Children)._padding_,"Children");
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SSplitter2x2____6B_;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  this->Style = (FSplitterStyle *)0x0;
  return this;
}

// ArrangeChildrenForLayout @ 1428d6440

TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> * __thiscall
SSplitter2x2::ArrangeChildrenForLayout
          (SSplitter2x2 *this,
          TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGeometry *param_1)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *pTVar12;
  TVector2<double> *pTVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float local_res8;
  float fStackX_c;
  
  if (((this->Children).Children.ArrayNum != 4) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Children.Num() == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SSplitter.cpp"
                         ,0x380,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar12;
  }
  uVar16 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar10 = (this->Children).Children.ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (uVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar10,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  fVar2 = this->SplitterHandleSize;
  dVar8 = 0.0;
  iVar11 = (this->Children).Children.ArrayNum;
  dVar7 = 0.0;
  local_res8 = SUB84(param_1->Size,0);
  fStackX_c = SUB84(param_1->Size,4);
  uVar17 = uVar16;
  if (0 < iVar11) {
    do {
      uVar15 = (uint)uVar16;
      uVar10 = 0;
      if ((int)uVar15 < iVar11) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar12;
      }
      pTVar13 = TAttribute<UE::Math::TVector2<double>_>::Get
                          ((TAttribute<UE::Math::TVector2<double>_> *)
                           (*(longlong *)((this->Children).Children.AllocatorInstance.Data + uVar17)
                           + 0x20));
      iVar11 = __return_storage_ptr__->ArrayNum;
      dVar5 = (double)(local_res8 - fVar2) * (pTVar13->field0_0x0)._s_0.X;
      dVar6 = (double)(fStackX_c - fVar2) * (pTVar13->field0_0x0)._s_0.Y;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x414,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      lVar14 = (longlong)iVar11;
      *(undefined4 *)(pFVar3 + lVar14 * 0x14) = 0x3f800000;
      *(ulonglong *)(pFVar3 + lVar14 * 0x14 + 4) = CONCAT44((float)dVar7,(float)dVar8);
      *(ulonglong *)(pFVar3 + lVar14 * 0x14 + 0xc) = CONCAT44((float)dVar6,(float)dVar5);
      if (uVar15 == 1) {
        dVar7 = 0.0;
        dVar8 = dVar8 + dVar5 + (double)this->SplitterHandleSize;
      }
      else {
        dVar7 = dVar7 + dVar6 + (double)this->SplitterHandleSize;
      }
      iVar11 = (this->Children).Children.ArrayNum;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar17 = uVar17 + 8;
    } while ((int)(uVar15 + 1) < iVar11);
  }
  return __return_storage_ptr__;
}

// CalculateResizingAxis @ 1428da220

EResizingAxis __thiscall
SSplitter2x2::CalculateResizingAxis(SSplitter2x2 *this,FGeometry *param_1,TVector2<double> *param_2)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  EResizingAxis EVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float local_res20;
  float fStackX_24;
  float local_40;
  float fStack_3c;
  TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> local_30;
  
  EVar6 = None;
  ArrangeChildrenForLayout(this,&local_30,param_1);
  uVar9 = 1;
  bVar3 = true;
  if (1 < local_30.ArrayNum) {
    lVar10 = 0x14;
    iVar8 = local_30.ArrayNum;
    do {
      uVar7 = 0;
      if ((int)(uVar9 - 1) < iVar8) {
        uVar7 = -uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar8 = local_30.ArrayNum, bVar5)) {
        pcVar2 = (code *)swi(3);
        EVar6 = (*pcVar2)();
        return EVar6;
      }
      FVar4.Data = local_30.AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar8 = local_30.ArrayNum, bVar5)) {
        pcVar2 = (code *)swi(3);
        EVar6 = (*pcVar2)();
        return EVar6;
      }
      local_res20 = (float)*(undefined8 *)(FVar4.Data + lVar10 + -8);
      fVar11 = *(float *)(FVar4.Data + lVar10 + -0x14) * local_res20;
      fStackX_24 = (float)((ulonglong)*(undefined8 *)(FVar4.Data + lVar10 + -8) >> 0x20);
      fVar12 = *(float *)(FVar4.Data + lVar10 + -0x14) * fStackX_24;
      local_res20 = (float)*(undefined8 *)(FVar4.Data + lVar10 + -0x10);
      fStackX_24 = (float)((ulonglong)*(undefined8 *)(FVar4.Data + lVar10 + -0x10) >> 0x20);
      dVar1 = (param_2->field0_0x0)._s_0.X;
      local_40 = (float)*(undefined8 *)(local_30.AllocatorInstance.Data + lVar10 + 4);
      fStack_3c = (float)((ulonglong)*(undefined8 *)(local_30.AllocatorInstance.Data + lVar10 + 4)
                         >> 0x20);
      if ((dVar1 <= (double)(local_res20 + fVar11)) || ((double)local_40 <= dVar1)) {
        dVar1 = (param_2->field0_0x0)._s_0.Y;
        if ((dVar1 <= (double)(fStackX_24 + fVar12)) || ((double)fStack_3c <= dVar1)) {
          bVar3 = false;
        }
        else {
          EVar6 = UpDownMask;
        }
      }
      else {
        EVar6 = LeftRightMask;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x14;
    } while ((int)uVar9 < iVar8);
    if (!bVar3) goto LAB_1428da41c;
  }
  EVar6 = CrossMask;
LAB_1428da41c:
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return EVar6;
}

// ComputeDesiredSize @ 1428e1b10

TVector2<double> * __thiscall
SSplitter2x2::ComputeDesiredSize
          (SSplitter2x2 *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 100.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 100.0;
  return __return_storage_ptr__;
}

// Construct @ 142906800

void __thiscall SSplitter2x2::Construct(SSplitter2x2 *this,FArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlotBase *pFVar3;
  undefined1 local_1a8 [48];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_178;
  ForAnyElementType FStack_170;
  ulonglong local_168;
  undefined1 local_160 [48];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  ForAnyElementType FStack_128;
  ulonglong local_120;
  undefined1 local_118 [48];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  ForAnyElementType FStack_e0;
  ulonglong local_d8;
  undefined1 local_d0 [48];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  ulonglong local_90;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  
  pFVar3 = ::operator_new(0x50);
  if (pFVar3 == (FSlotBase *)0x0) {
    local_1a8._16_8_ = (TReferenceControllerBase<1> *)0x0;
    local_1a8._0_8_ = (FSlotBase *)0x0;
    local_1a8._8_8_ = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FSlotBase::FSlotBase(pFVar3,&(param_1->_TopLeft).Widget);
    pFVar3->_padding_ = (longlong)&___7FSlot_SSplitter2x2__6B_;
    pFVar3[1]._padding_ = 0x3fe0000000000000;
    pFVar3[1].Owner = (FChildren *)0x3fe0000000000000;
    *(undefined1 *)&pFVar3[1].Widget.Object = 1;
    pFVar3[2].Owner = (FChildren *)0x0;
    pFVar3[1].Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar3[2]._padding_ = 0;
    local_1a8._8_8_ = 0;
    local_1a8._16_8_ = (TReferenceControllerBase<1> *)0x0;
    local_1a8._0_8_ = pFVar3;
  }
  local_1a8[0x28] = false;
  local_168 = 0;
  local_1a8._24_8_ = 0.0;
  local_1a8._32_8_ = 0.0;
  local_178.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_170.Data = (FScriptContainerElement *)0x0;
  TPanelChildren<SSplitter2x2::FSlot>::AddSlot(&this->Children,(FSlotArguments *)local_1a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_178,(FWriteAccessScope *)&local_88);
  if (((int)local_168 != 0) && (FStack_170.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_170.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_170,0,0,0x10);
    local_168 = local_168 & 0xffffffff00000000;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_170.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_178.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a8._16_8_);
  if ((FSlotBase *)local_1a8._0_8_ != (FSlotBase *)0x0) {
    (**(code **)*(longlong *)local_1a8._0_8_)(local_1a8._0_8_,1);
  }
  pFVar3 = ::operator_new(0x50);
  if (pFVar3 == (FSlotBase *)0x0) {
    local_160._16_8_ = (TReferenceControllerBase<1> *)0x0;
    local_160._0_8_ = (FSlotBase *)0x0;
    local_160._8_8_ = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FSlotBase::FSlotBase(pFVar3,&(param_1->_BottomLeft).Widget);
    pFVar3->_padding_ = (longlong)&___7FSlot_SSplitter2x2__6B_;
    pFVar3[1]._padding_ = 0x3fe0000000000000;
    pFVar3[1].Owner = (FChildren *)0x3fe0000000000000;
    *(undefined1 *)&pFVar3[1].Widget.Object = 1;
    pFVar3[2].Owner = (FChildren *)0x0;
    pFVar3[1].Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar3[2]._padding_ = 0;
    local_160._8_8_ = 0;
    local_160._16_8_ = (TReferenceControllerBase<1> *)0x0;
    local_160._0_8_ = pFVar3;
  }
  local_160[0x28] = false;
  local_120 = 0;
  local_160._24_8_ = 0.0;
  local_160._32_8_ = 0.0;
  local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_128.Data = (FScriptContainerElement *)0x0;
  TPanelChildren<SSplitter2x2::FSlot>::AddSlot(&this->Children,(FSlotArguments *)local_160);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_70);
  if (((int)local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_128.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
    local_120 = local_120 & 0xffffffff00000000;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (FStack_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_128.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_160._16_8_);
  if ((FSlotBase *)local_160._0_8_ != (FSlotBase *)0x0) {
    (**(code **)*(longlong *)local_160._0_8_)(local_160._0_8_,1);
  }
  pFVar3 = ::operator_new(0x50);
  if (pFVar3 == (FSlotBase *)0x0) {
    local_118._16_8_ = (TReferenceControllerBase<1> *)0x0;
    local_118._0_8_ = (FSlotBase *)0x0;
    local_118._8_8_ = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FSlotBase::FSlotBase(pFVar3,&(param_1->_TopRight).Widget);
    pFVar3->_padding_ = (longlong)&___7FSlot_SSplitter2x2__6B_;
    pFVar3[1]._padding_ = 0x3fe0000000000000;
    pFVar3[1].Owner = (FChildren *)0x3fe0000000000000;
    *(undefined1 *)&pFVar3[1].Widget.Object = 1;
    pFVar3[2].Owner = (FChildren *)0x0;
    pFVar3[1].Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar3[2]._padding_ = 0;
    local_118._8_8_ = 0;
    local_118._16_8_ = (TReferenceControllerBase<1> *)0x0;
    local_118._0_8_ = pFVar3;
  }
  local_118[0x28] = false;
  local_d8 = 0;
  local_118._24_8_ = 0.0;
  local_118._32_8_ = 0.0;
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e0.Data = (FScriptContainerElement *)0x0;
  TPanelChildren<SSplitter2x2::FSlot>::AddSlot(&this->Children,(FSlotArguments *)local_118);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e8,(FWriteAccessScope *)&local_58);
  if (((int)local_d8 != 0) && (FStack_e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e0,0,0,0x10);
    local_d8 = local_d8 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_118._16_8_);
  if ((FSlotBase *)local_118._0_8_ != (FSlotBase *)0x0) {
    (**(code **)*(longlong *)local_118._0_8_)(local_118._0_8_,1);
  }
  pFVar3 = ::operator_new(0x50);
  if (pFVar3 == (FSlotBase *)0x0) {
    local_d0._16_8_ = (TReferenceControllerBase<1> *)0x0;
    local_d0._0_8_ = (FSlotBase *)0x0;
    local_d0._8_8_ = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FSlotBase::FSlotBase(pFVar3,&(param_1->_BottomRight).Widget);
    pFVar3->_padding_ = (longlong)&___7FSlot_SSplitter2x2__6B_;
    pFVar3[1]._padding_ = 0x3fe0000000000000;
    pFVar3[1].Owner = (FChildren *)0x3fe0000000000000;
    *(undefined1 *)&pFVar3[1].Widget.Object = 1;
    pFVar3[2].Owner = (FChildren *)0x0;
    pFVar3[1].Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar3[2]._padding_ = 0;
    local_d0._8_8_ = 0;
    local_d0._16_8_ = (TReferenceControllerBase<1> *)0x0;
    local_d0._0_8_ = pFVar3;
  }
  local_d0[0x28] = false;
  local_90 = 0;
  local_d0._24_8_ = 0.0;
  local_d0._32_8_ = 0.0;
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  TPanelChildren<SSplitter2x2::FSlot>::AddSlot(&this->Children,(FSlotArguments *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)&local_40);
  if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_d0._16_8_);
  if ((FSlotBase *)local_d0._0_8_ != (FSlotBase *)0x0) {
    (**(code **)*(longlong *)local_d0._0_8_)(local_d0._0_8_,1);
  }
  this->Style = param_1->_Style;
  this->SplitterHandleSize = 5.0;
  this->MinSplitterChildLength = 20.0;
  this->ResizingAxisMask = None;
  this->bIsResizing = false;
  return;
}

// GetBottomLeftContent @ 14293c360

TSharedRef<SWidget,1> * __thiscall
SSplitter2x2::GetBottomLeftContent(SSplitter2x2 *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  
  if ((this->Children).Children.ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  lVar1 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetBottomRightContent @ 14293c3f0

TSharedRef<SWidget,1> * __thiscall
SSplitter2x2::GetBottomRightContent
          (SSplitter2x2 *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  
  if ((this->Children).Children.ArrayNum < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  lVar1 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + 0x18);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildren @ 14293e570

FChildren * __thiscall SSplitter2x2::GetChildren(SSplitter2x2 *this)

{
  return (FChildren *)&this->Children;
}

// GetSplitterPercentages @ 142949520

void __thiscall
SSplitter2x2::GetSplitterPercentages
          (SSplitter2x2 *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TVector2<double> *pTVar6;
  double local_18;
  double dStack_10;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4,&param_1->AllocatorInstance,0,piVar1);
  }
  if ((this->Children).Children.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = TAttribute<UE::Math::TVector2<double>_>::Get
                     ((TAttribute<UE::Math::TVector2<double>_> *)
                      (*(longlong *)(this->Children).Children.AllocatorInstance.Data + 0x20));
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_18 = (pTVar6->field0_0x0)._s_0.X;
  dStack_10 = (pTVar6->field0_0x0)._s_0.Y;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)*piVar1 * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,piVar1);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(double *)pFVar2 = local_18;
  *(double *)(pFVar2 + 8) = dStack_10;
  if ((this->Children).Children.ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = TAttribute<UE::Math::TVector2<double>_>::Get
                     ((TAttribute<UE::Math::TVector2<double>_> *)
                      (*(longlong *)((this->Children).Children.AllocatorInstance.Data + 8) + 0x20));
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_18 = (pTVar6->field0_0x0)._s_0.X;
  dStack_10 = (pTVar6->field0_0x0)._s_0.Y;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)*piVar1 * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,piVar1);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(double *)pFVar2 = local_18;
  *(double *)(pFVar2 + 8) = dStack_10;
  if ((this->Children).Children.ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = TAttribute<UE::Math::TVector2<double>_>::Get
                     ((TAttribute<UE::Math::TVector2<double>_> *)
                      (*(longlong *)((this->Children).Children.AllocatorInstance.Data + 0x10) + 0x20
                      ));
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_18 = (pTVar6->field0_0x0)._s_0.X;
  dStack_10 = (pTVar6->field0_0x0)._s_0.Y;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)*piVar1 * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,piVar1);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(double *)pFVar2 = local_18;
  *(double *)(pFVar2 + 8) = dStack_10;
  if ((this->Children).Children.ArrayNum < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = TAttribute<UE::Math::TVector2<double>_>::Get
                     ((TAttribute<UE::Math::TVector2<double>_> *)
                      (*(longlong *)((this->Children).Children.AllocatorInstance.Data + 0x18) + 0x20
                      ));
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_18 = (pTVar6->field0_0x0)._s_0.X;
  dStack_10 = (pTVar6->field0_0x0)._s_0.Y;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)*piVar1 * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,piVar1);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(double *)pFVar2 = local_18;
  *(double *)(pFVar2 + 8) = dStack_10;
  return;
}

// GetTopLeftContent @ 14294a2a0

TSharedRef<SWidget,1> * __thiscall
SSplitter2x2::GetTopLeftContent(SSplitter2x2 *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  
  if ((this->Children).Children.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  lVar1 = *(longlong *)(this->Children).Children.AllocatorInstance.Data;
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetTopRightContent @ 14294a330

TSharedRef<SWidget,1> * __thiscall
SSplitter2x2::GetTopRightContent(SSplitter2x2 *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  
  if ((this->Children).Children.ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  lVar1 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + 0x10);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// OnArrangeChildren @ 1429609e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SSplitter2x2::OnArrangeChildren(SSplitter2x2 *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  FSlateLayoutTransform *pFVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStackY_e8 [32];
  FDeprecateVector2DParameter local_b8;
  TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> local_b0;
  FArrangedWidget local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  ArrangeChildrenForLayout(this,&local_b0,param_1);
  iVar4 = (this->Children).Children.ArrayNum;
  uVar7 = 0;
  if (0 < iVar4) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      uVar5 = ~uVar7 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar7 < iVar4) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = 0;
      if ((int)uVar7 < local_b0.ArrayNum) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (FSlateLayoutTransform *)(local_b0.AllocatorInstance.Data + lVar9);
      uVar3 = 0;
      if ((int)uVar7 < (this->Children).Children.ArrayNum) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_b8 = *(FDeprecateVector2DParameter *)(pFVar6 + 1);
      FGeometry::MakeChild
                (param_1,&local_98,
                 (TSharedRef<SWidget,1> *)
                 (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar8 * 8) + 0x10
                 ),&local_b8,pFVar6);
      FArrangedChildren::AddWidget(param_2,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.Widget.SharedReferenceCount.ReferenceController);
      iVar4 = (this->Children).Children.ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x14;
    } while ((int)uVar7 < iVar4);
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return;
}

// OnCursorQuery @ 142962950

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SSplitter2x2::OnCursorQuery
          (SSplitter2x2 *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  EResizingAxis EVar1;
  EResizingAxis EVar2;
  TTransform2<float> *pTVar3;
  FGeometry *pFVar4;
  float local_38;
  float fStack_34;
  TVector2<double>_u_0 local_30;
  
  pTVar3 = Inverse<TTransform2<float>_>
                     ((TTransform2<float> *)&local_30._s_0,&param_1->AccumulatedRenderTransform);
  fStack_34 = SUB84(param_2->ScreenSpacePosition,4);
  local_38 = SUB84(param_2->ScreenSpacePosition,0);
  local_30._s_0.X =
       (double)(fStack_34 * (pTVar3->M).M[1][0] + local_38 * (pTVar3->M).M[0][0] +
               (pTVar3->Trans).field0_0x0._s_0.X);
  local_30._s_0.Y =
       (double)(local_38 * (pTVar3->M).M[0][1] + fStack_34 * (pTVar3->M).M[1][1] +
               (pTVar3->Trans).field0_0x0._s_0.Y);
  pFVar4 = SWidget::GetTickSpaceGeometry((SWidget *)this);
  EVar2 = CalculateResizingAxis(this,pFVar4,(TVector2<double> *)&local_30._s_0);
  if (((EVar2 & CrossMask) != None) || (EVar1 = this->ResizingAxisMask, (EVar1 & CrossMask) != None)
     ) {
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
    (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
    (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->MouseCursor = CardinalCross;
    return __return_storage_ptr__;
  }
  if (((EVar2 & LeftRightMask) == None) && ((EVar1 & LeftRightMask) == None)) {
    if (((EVar2 & UpDownMask) == None) && ((EVar1 & UpDownMask) == None)) {
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->MouseCursor = Default;
      return __return_storage_ptr__;
    }
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
    (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
    (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->MouseCursor = ResizeUpDown;
    return __return_storage_ptr__;
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = ResizeLeftRight;
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14296d050

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplitter2x2::OnMouseButtonDown
          (SSplitter2x2 *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  SWidget *pSVar3;
  EResizingAxis EVar4;
  TTransform2<float> *pTVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FReply *pFVar7;
  bool bVar8;
  float fVar9;
  undefined1 local_108 [8];
  FSharedReferencer<1> local_100;
  TVector2<double>_u_0 local_f8;
  FReply local_e0;
  
  FReply::FReply(__return_storage_ptr__,false);
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar8) {
    pTVar5 = Inverse<TTransform2<float>_>
                       ((TTransform2<float> *)&local_f8._s_0,&param_1->AccumulatedRenderTransform);
    local_108._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
    local_108._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
    fVar9 = (float)local_108._4_4_ * (pTVar5->M).M[1][0] +
            (float)local_108._0_4_ * (pTVar5->M).M[0][0] + (pTVar5->Trans).field0_0x0._s_0.X;
    local_108._4_4_ =
         (float)local_108._0_4_ * (pTVar5->M).M[0][1] + (float)local_108._4_4_ * (pTVar5->M).M[1][1]
         + (pTVar5->Trans).field0_0x0._s_0.Y;
    local_108._0_4_ = fVar9;
    local_f8._s_0.X = (double)fVar9;
    local_f8._s_0.Y = (double)(float)local_108._4_4_;
    EVar4 = CalculateResizingAxis(this,param_1,(TVector2<double> *)&local_f8._s_0);
    this->ResizingAxisMask = EVar4;
    if (EVar4 != None) {
      this->bIsResizing = true;
      FReply::FReply(&local_e0,true);
      pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                          (TSharedRef<SWidget,1> *)&local_f8._s_0);
      pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar6->Object;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_f8._s_0.Y);
      }
      else {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_f8._s_0.Y);
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108 = (undefined1  [8])pSVar3;
      local_100.ReferenceController = pTVar1;
      pFVar7 = FReply::CaptureMouse(&local_e0,(TSharedRef<SWidget,1> *)local_108);
      FReply::operator=(__return_storage_ptr__,pFVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FReply::~FReply(&local_e0);
    }
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14296fa80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplitter2x2::OnMouseButtonUp
          (SSplitter2x2 *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWeakReferencer<1> FVar5;
  FReply local_c8;
  
  FVar3 = (param_2->EffectingButton).KeyName;
  pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar3 == EKeys::LeftMouseButton.KeyName) && (this->bIsResizing == true)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    this->ResizingAxisMask = None;
    this->bIsResizing = false;
    FReply::FReply(&local_c8,true);
    FVar5.ReferenceController = local_c8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c8.MouseCaptor.Object = (SWidget *)0x0;
    local_c8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
      }
    }
    local_c8.bUseHighPrecisionMouse = 0;
    local_c8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseMove @ 142975b40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplitter2x2::OnMouseMove
          (SSplitter2x2 *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  TTransform2<float> *pTVar2;
  float fVar3;
  undefined1 local_48 [16];
  TVector2<double>_u_0 local_38 [2];
  
  pTVar2 = Inverse<TTransform2<float>_>
                     ((TTransform2<float> *)&local_38[0]._s_0,&param_1->AccumulatedRenderTransform);
  local_48._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
  local_48._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
  fVar3 = (float)local_48._4_4_ * (pTVar2->M).M[1][0] + (float)local_48._0_4_ * (pTVar2->M).M[0][0]
          + (pTVar2->Trans).field0_0x0._s_0.X;
  local_48._4_4_ =
       (float)local_48._0_4_ * (pTVar2->M).M[0][1] + (float)local_48._4_4_ * (pTVar2->M).M[1][1] +
       (pTVar2->Trans).field0_0x0._s_0.Y;
  local_48._0_4_ = fVar3;
  local_38[0]._0_8_ = (undefined8)fVar3;
  local_38[0]._8_8_ = (undefined8)(float)local_48._4_4_;
  if ((this->bIsResizing != false) && (bVar1 = SWidget::HasMouseCapture((SWidget *)this), bVar1)) {
    ArrangeChildrenForLayout
              (this,(TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)local_48,param_1);
    ResizeChildren(this,param_1,(TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)local_48,
                   (TVector2<double> *)&local_38[0]._s_0);
    FReply::FReply(__return_storage_ptr__,true);
    if ((FScriptContainerElement *)local_48._0_8_ == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free((void *)local_48._0_8_);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnPaint @ 142980760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSplitter2x2::OnPaint
          (SSplitter2x2 *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  undefined1 uVar1;
  ulonglong uVar2;
  FDeprecateSlateVector2D FVar3;
  ulonglong uVar4;
  code *pcVar5;
  EResizingAxis EVar6;
  bool bVar7;
  bool bVar8;
  ESlateDrawEffect EVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FGeometry *pFVar13;
  FSlateApplication *pFVar14;
  undefined8 *puVar15;
  TTransform2<float> *pTVar16;
  FLinearColor *pFVar17;
  ForElementType<FArrangedWidget> FVar18;
  FSlateBrush *pFVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float afVar25 [2];
  float afVar26 [2];
  undefined1 auStackY_398 [32];
  undefined8 local_348;
  float local_33c;
  float fStack_338;
  TVector2<float>_u_0 local_334;
  undefined8 local_32c;
  FLinearColor_u_0 local_318;
  FLinearColor_u_0 local_308;
  TVector2<float>_u_0_s_0 local_2f4;
  TVector2<float>_u_0_s_0 local_2e8;
  TVector2<double>_u_0 local_2e0;
  undefined1 local_2d0 [8];
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  TTransform2<float> local_2b8;
  TTransform2<float> local_2a0;
  TTransform2<float> local_288;
  TTransform2<float> local_270;
  TTransform2<float> local_258;
  TVector2<float>_u_0 local_240;
  float local_238;
  undefined8 local_234;
  undefined8 local_22c;
  float local_224 [2];
  float afStack_21c [2];
  TVector2<float>_u_0 local_214;
  byte local_20c;
  TVector2<float>_u_0 local_208;
  float local_200;
  undefined8 local_1fc;
  undefined8 local_1f4;
  float local_1ec [2];
  float afStack_1e4 [2];
  TVector2<float>_u_0 local_1dc;
  byte local_1d4;
  FArrangedChildren local_1d0;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_1d0.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_1d0.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_1d0.Array.ArrayNum = 0;
  local_1d0.bAllow3DWidgets = false;
  local_1d0.Array.ArrayMax = 4;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_1d0,false);
  uVar11 = SPanel::PaintArrangedChildren
                     ((SPanel *)this,param_1,&local_1d0,param_2,param_3,param_4,param_5,param_6,
                      param_7);
  pFVar13 = SWidget::GetTickSpaceGeometry((SWidget *)this);
  pFVar14 = FSlateApplication::Get();
  puVar15 = (undefined8 *)(**(code **)(*(longlong *)pFVar14 + 0x68))(pFVar14,local_2d0);
  pTVar16 = Inverse<TTransform2<float>_>(&local_258,&pFVar13->AccumulatedRenderTransform);
  fStack_338 = (float)((ulonglong)*puVar15 >> 0x20);
  local_33c = (float)*puVar15;
  local_2e0._s_0.X =
       (double)(fStack_338 * (pTVar16->M).M[1][0] + local_33c * (pTVar16->M).M[0][0] +
               (pTVar16->Trans).field0_0x0._s_0.X);
  local_2e0._s_0.Y =
       (double)(fStack_338 * (pTVar16->M).M[1][1] + local_33c * (pTVar16->M).M[0][1] +
               (pTVar16->Trans).field0_0x0._s_0.Y);
  pFVar13 = SWidget::GetTickSpaceGeometry((SWidget *)this);
  EVar6 = CalculateResizingAxis(this,pFVar13,(TVector2<double> *)&local_2e0._s_0);
  if ((local_1d0.Array.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    iVar12 = (*pcVar5)();
    return iVar12;
  }
  FVar18 = (ForElementType<FArrangedWidget>)&local_1d0.Array;
  if (local_1d0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar18 = local_1d0.Array.AllocatorInstance.SecondaryData;
  }
  local_348._4_4_ = (float)(*(ulonglong *)FVar18 >> 0x20);
  if ((local_1d0.Array.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    iVar12 = (*pcVar5)();
    return iVar12;
  }
  bVar7 = true;
  FVar18 = (ForElementType<FArrangedWidget>)&local_1d0.Array;
  if (local_1d0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar18 = local_1d0.Array.AllocatorInstance.SecondaryData;
  }
  uVar2 = *(ulonglong *)FVar18;
  bVar10 = true;
  if ((local_1d0.Array.ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    iVar12 = (*pcVar5)();
    return iVar12;
  }
  FVar3 = param_2->Size;
  FVar18 = (ForElementType<FArrangedWidget>)&local_1d0.Array;
  if (local_1d0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar18 = local_1d0.Array.AllocatorInstance.SecondaryData;
  }
  local_32c._4_4_ = (undefined4)(uVar2 >> 0x20);
  fVar20 = *(float *)((longlong)FVar18 + 0x60) - (float)local_32c._4_4_;
  if (((EVar6 & UpDownMask) == None) && ((this->ResizingAxisMask & UpDownMask) == None)) {
    pFVar19 = &this->Style->HandleNormalBrush;
  }
  else {
    pFVar19 = &this->Style->HandleHighlightBrush;
  }
  if ((pFVar19->TintColor).ColorUseRule == UseColor_ColorTable) {
    pFVar17 = FSlateColor::GetColorFromTable(&pFVar19->TintColor);
    local_2c8 = (pFVar17->field0_0x0)._s_0.R;
    fStack_2c4 = (pFVar17->field0_0x0)._s_0.G;
    fStack_2c0 = (pFVar17->field0_0x0)._s_0.B;
    fStack_2bc = (pFVar17->field0_0x0)._s_0.A;
  }
  else {
    local_2c8 = (pFVar19->TintColor).SpecifiedColor.field0_0x0._s_0.R;
    fStack_2c4 = (pFVar19->TintColor).SpecifiedColor.field0_0x0._s_0.G;
    fStack_2c0 = (pFVar19->TintColor).SpecifiedColor.field0_0x0._s_0.B;
    fStack_2bc = (pFVar19->TintColor).SpecifiedColor.field0_0x0._s_0.A;
  }
  afVar26 = _UNK_15076b188;
  afVar25 = ___xmm_3f80000000000000000000003f800000;
  local_318._s_0.R = local_2c8 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_318._s_0.G = fStack_2c4 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_318._s_0.B = fStack_2c0 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_318._s_0.A = fStack_2bc * (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  if ((!param_7) || (*(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar10 = false;
  }
  local_2f4 = (param_2->AbsolutePosition).field0_0x0._s_0;
  fVar21 = param_2->Scale;
  local_334 = (TVector2<float>_u_0)((ulonglong)(uint)local_348._4_4_ << 0x20);
  local_2b8.Trans.field0_0x0 = local_334;
  local_2b8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_2b8.M.M[0][1] = _UNK_15076b184;
  local_2b8.M.M[1][0] = _UNK_15076b188;
  local_2b8.M.M[1][1] = _UNK_15076b18c;
  local_32c._4_4_ = local_348._4_4_ * fVar21 + local_2f4.Y;
  local_32c._0_4_ = fVar21 * 0.0 + local_2f4.X;
  Concatenate<TTransform2<float>_>(&local_2a0,&local_2b8,&param_2->AccumulatedRenderTransform);
  local_240 = local_32c;
  local_20c = param_2->bHasRenderTransform * '\x02' | local_20c & 0xfc;
  EVar9 = DisabledEffect;
  if (bVar10) {
    EVar9 = None;
  }
  local_234 = 0;
  local_224[0] = local_2a0.M.M[0][0];
  local_224[1] = local_2a0.M.M[0][1];
  afStack_21c[0] = local_2a0.M.M[1][0];
  afStack_21c[1] = local_2a0.M.M[1][1];
  local_214 = local_2a0.Trans.field0_0x0;
  local_238 = fVar21;
  local_22c = CONCAT44(fVar20,FVar3._0_4_);
  FSlateDrawElement::MakeBox
            (param_4,uVar11,(FPaintGeometry *)&local_240._s_0,pFVar19,EVar9,
             (FLinearColor *)&local_318._s_0);
  if ((local_1d0.Array.ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     afVar25 = ___xmm_3f80000000000000000000003f800000, afVar26 = _UNK_15076b188, bVar10)) {
    pcVar5 = (code *)swi(3);
    iVar12 = (*pcVar5)();
    return iVar12;
  }
  FVar18 = (ForElementType<FArrangedWidget>)&local_1d0.Array;
  if (local_1d0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar18 = local_1d0.Array.AllocatorInstance.SecondaryData;
  }
  uVar2 = *(ulonglong *)FVar18;
  local_348._0_4_ = (float)uVar2;
  fVar20 = (float)local_348;
  local_348._4_4_ = SUB84(param_2->Size,4);
  local_334._s_0.Y = local_348._4_4_;
  if ((local_1d0.Array.ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     afVar25 = ___xmm_3f80000000000000000000003f800000, afVar26 = _UNK_15076b188, bVar10)) {
    pcVar5 = (code *)swi(3);
    iVar12 = (*pcVar5)();
    return iVar12;
  }
  FVar18 = (ForElementType<FArrangedWidget>)&local_1d0.Array;
  if (local_1d0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar18 = local_1d0.Array.AllocatorInstance.SecondaryData;
  }
  uVar4 = *(ulonglong *)FVar18;
  local_288.M.M[0] = afVar25;
  local_288.M.M[1] = afVar26;
  if ((local_1d0.Array.ArrayNum < 3) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_288.M.M[0] = ___xmm_3f80000000000000000000003f800000, local_288.M.M[1] = _UNK_15076b188,
     bVar10)) {
    pcVar5 = (code *)swi(3);
    iVar12 = (*pcVar5)();
    return iVar12;
  }
  FVar18 = (ForElementType<FArrangedWidget>)&local_1d0.Array;
  if (local_1d0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar18 = local_1d0.Array.AllocatorInstance.SecondaryData;
  }
  local_348._0_4_ = (float)uVar4;
  local_334._s_0.X =
       (((TVector2<float> *)((longlong)FVar18 + 0xa4))->field0_0x0)._s_0.X - (float)local_348;
  if (((EVar6 & LeftRightMask) == None) && ((this->ResizingAxisMask & LeftRightMask) == None)) {
    pFVar19 = &this->Style->HandleNormalBrush;
  }
  else {
    pFVar19 = &this->Style->HandleHighlightBrush;
  }
  if ((pFVar19->TintColor).ColorUseRule == UseColor_ColorTable) {
    pFVar17 = FSlateColor::GetColorFromTable(&pFVar19->TintColor);
    fVar21 = (pFVar17->field0_0x0)._s_0.R;
    fVar22 = (pFVar17->field0_0x0)._s_0.G;
    fVar23 = (pFVar17->field0_0x0)._s_0.B;
    fVar24 = (pFVar17->field0_0x0)._s_0.A;
    local_288.M.M[0] = ___xmm_3f80000000000000000000003f800000;
    local_288.M.M[1] = _UNK_15076b188;
  }
  else {
    fVar21 = (pFVar19->TintColor).SpecifiedColor.field0_0x0._s_0.R;
    fVar22 = (pFVar19->TintColor).SpecifiedColor.field0_0x0._s_0.G;
    fVar23 = (pFVar19->TintColor).SpecifiedColor.field0_0x0._s_0.B;
    fVar24 = (pFVar19->TintColor).SpecifiedColor.field0_0x0._s_0.A;
  }
  local_308._s_0.R = fVar21 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_308._s_0.G = fVar22 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_308._s_0.B = fVar23 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_308._s_0.A = fVar24 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  if ((!param_7) || (*(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar7 = false;
  }
  local_2e8 = (param_2->AbsolutePosition).field0_0x0._s_0;
  fVar21 = param_2->Scale;
  local_348 = (TVector2<float>_u_0)(uVar2 & 0xffffffff);
  local_288.Trans.field0_0x0 = local_348;
  local_32c._4_4_ = fVar21 * 0.0 + local_2e8.Y;
  local_32c._0_4_ = fVar20 * fVar21 + local_2e8.X;
  Concatenate<TTransform2<float>_>(&local_270,&local_288,&param_2->AccumulatedRenderTransform);
  local_208 = local_32c;
  local_1f4 = local_334;
  local_1d4 = param_2->bHasRenderTransform * '\x02' | local_1d4 & 0xfc;
  local_1fc = 0;
  local_1dc = local_270.Trans.field0_0x0;
  local_1ec[0] = local_270.M.M[0][0];
  local_1ec[1] = local_270.M.M[0][1];
  afStack_1e4[0] = local_270.M.M[1][0];
  afStack_1e4[1] = local_270.M.M[1][1];
  EVar9 = DisabledEffect;
  if (bVar7) {
    EVar9 = None;
  }
  local_200 = fVar21;
  FSlateDrawElement::MakeBox
            (param_4,uVar11,(FPaintGeometry *)&local_208._s_0,pFVar19,EVar9,
             (FLinearColor *)&local_308._s_0);
  FVar18 = (ForElementType<FArrangedWidget>)&local_1d0.Array;
  if (local_1d0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar18 = local_1d0.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar18,local_1d0.Array.ArrayNum);
  if (local_1d0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_1d0.Array.AllocatorInstance.SecondaryData);
  }
  return uVar11;
}

// ResizeChildren @ 14298b0c0

void __thiscall
SSplitter2x2::ResizeChildren
          (SSplitter2x2 *this,FGeometry *param_1,
          TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *param_2,TVector2<double> *param_3)

{
  float fVar1;
  EResizingAxis EVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  double dVar21;
  float fVar22;
  float local_res8;
  float fStackX_c;
  float local_res20;
  float fStackX_24;
  float local_f8;
  float fStack_f4;
  
  dVar21 = (double)this->SplitterHandleSize * __real_3fe0000000000000;
  if (param_2->ArrayNum < 4) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar22 = (float)dVar21;
  uVar3 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x40);
  local_res8 = (float)uVar3;
  fStackX_c = (float)((ulonglong)uVar3 >> 0x20);
  dVar21 = (param_3->field0_0x0)._s_0.X - (double)(local_res8 - fVar22);
  dVar17 = (param_3->field0_0x0)._s_0.Y - (double)(fStackX_c - fVar22);
  if (param_2->ArrayNum < 1) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  uVar3 = *(undefined8 *)(pFVar4 + 0xc);
  fVar22 = *(float *)pFVar4;
  local_res20 = (float)uVar3;
  fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
  if (param_2->ArrayNum < 2) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  uVar3 = *(undefined8 *)(pFVar4 + 0x20);
  fVar1 = *(float *)(pFVar4 + 0x14);
  local_f8 = (float)uVar3;
  fStack_f4 = (float)((ulonglong)uVar3 >> 0x20);
  dVar14 = (double)(fVar1 * local_f8);
  dVar16 = (double)(fVar1 * fStack_f4);
  if (param_2->ArrayNum < 3) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  uVar3 = *(undefined8 *)(pFVar4 + 0x34);
  fVar1 = *(float *)(pFVar4 + 0x28);
  local_f8 = (float)uVar3;
  fStack_f4 = (float)((ulonglong)uVar3 >> 0x20);
  dVar13 = (double)(fVar1 * local_f8);
  dVar18 = (double)(fVar1 * fStack_f4);
  if (param_2->ArrayNum < 4) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  uVar3 = *(undefined8 *)(pFVar4 + 0x48);
  fVar1 = *(float *)(pFVar4 + 0x3c);
  local_f8 = (float)uVar3;
  fStack_f4 = (float)((ulonglong)uVar3 >> 0x20);
  dVar10 = (double)(fVar1 * local_f8);
  dVar15 = (double)(fVar1 * fStack_f4);
  if ((this->Children).Children.ArrayNum < 1) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar5 = *(longlong *)(this->Children).Children.AllocatorInstance.Data;
  if ((this->Children).Children.ArrayNum < 2) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar6 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + 8);
  if ((this->Children).Children.ArrayNum < 3) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar7 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + 0x10);
  if ((this->Children).Children.ArrayNum < 4) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar8 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + 0x18);
  EVar2 = this->ResizingAxisMask;
  if (EVar2 == LeftRightMask) {
    dVar17 = 0.0;
    dVar10 = dVar10 - dVar21;
  }
  else {
    if (EVar2 == UpDownMask) {
      dVar21 = 0.0;
    }
    dVar10 = dVar10 - dVar21;
    dVar15 = dVar15 - dVar17;
    dVar16 = dVar16 - dVar17;
    dVar18 = dVar18 + dVar17;
    if (EVar2 == UpDownMask) {
      dVar14 = dVar14 - dVar21;
      dVar13 = dVar13 + dVar21;
      goto LAB_14298b559;
    }
  }
  dVar13 = dVar13 - dVar21;
  dVar14 = dVar14 + dVar21;
LAB_14298b559:
  dVar21 = (double)(fVar22 * local_res20) + dVar21;
  dVar17 = dVar17 + (double)(fVar22 * fStackX_24);
  dVar12 = (double)this->MinSplitterChildLength;
  if (dVar21 <= dVar12) {
    dVar21 = dVar12;
  }
  if (dVar15 <= dVar12) {
    dVar15 = dVar12;
  }
  if (dVar17 <= dVar12) {
    dVar17 = dVar12;
  }
  dVar19 = dVar12;
  if (dVar12 <= dVar10) {
    dVar19 = dVar10;
  }
  dVar10 = __real_3ff0000000000000 / (dVar19 + dVar21);
  dVar11 = __real_3ff0000000000000 / (dVar15 + dVar17);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar5 + 0x38));
  *(double *)(lVar5 + 0x20) = dVar10 * dVar21;
  *(double *)(lVar5 + 0x28) = dVar11 * dVar17;
  *(undefined1 *)(lVar5 + 0x30) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar7 + 0x38));
  if (dVar18 <= dVar12) {
    dVar18 = dVar12;
  }
  dVar21 = dVar12;
  if (dVar12 <= dVar13) {
    dVar21 = dVar13;
  }
  *(double *)(lVar7 + 0x20) = dVar21 * dVar10;
  *(double *)(lVar7 + 0x28) = dVar18 * dVar11;
  *(undefined1 *)(lVar7 + 0x30) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar6 + 0x38));
  dVar21 = dVar12;
  if (dVar12 <= dVar14) {
    dVar21 = dVar14;
  }
  if (dVar12 <= dVar16) {
    dVar12 = dVar16;
  }
  *(double *)(lVar6 + 0x20) = dVar21 * dVar10;
  *(double *)(lVar6 + 0x28) = dVar12 * dVar11;
  *(undefined1 *)(lVar6 + 0x30) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar8 + 0x38));
  *(double *)(lVar8 + 0x20) = dVar10 * dVar19;
  *(double *)(lVar8 + 0x28) = dVar11 * dVar15;
  *(undefined1 *)(lVar8 + 0x30) = 1;
  return;
}

// SetBottomLeftContent @ 14298eb30

void __thiscall
SSplitter2x2::SetBottomLeftContent(SSplitter2x2 *this,TSharedRef<SWidget,1> *param_1)

{
  FSlotBase *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  if ((this->Children).Children.ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *(FSlotBase **)((this->Children).Children.AllocatorInstance.Data + 8);
  FSlotBase::DetatchParentFromContent(this_00);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_00->Widget).SharedReferenceCount.ReferenceController;
  (this_00->Widget).Object = pSVar2;
  (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetBottomRightContent @ 14298ebe0

void __thiscall
SSplitter2x2::SetBottomRightContent(SSplitter2x2 *this,TSharedRef<SWidget,1> *param_1)

{
  FSlotBase *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  if ((this->Children).Children.ArrayNum < 4) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *(FSlotBase **)((this->Children).Children.AllocatorInstance.Data + 0x18);
  FSlotBase::DetatchParentFromContent(this_00);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_00->Widget).SharedReferenceCount.ReferenceController;
  (this_00->Widget).Object = pSVar2;
  (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSplitterPercentages @ 142999b30

void __thiscall
SSplitter2x2::SetSplitterPercentages
          (SSplitter2x2 *this,TArrayView<UE::Math::TVector2<double>,int> *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar9 = 0;
  iVar7 = 4;
  if (param_1->ArrayNum < 4) {
    iVar7 = param_1->ArrayNum;
  }
  if (0 < iVar7) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->Children).Children.ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar10 * 8);
      uVar8 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x38));
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
      puVar1 = (undefined8 *)((longlong)&param_1->DataPtr->field0_0x0 + lVar11);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      lVar11 = lVar11 + 0x10;
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined8 *)(lVar2 + 0x20) = uVar4;
      *(undefined8 *)(lVar2 + 0x28) = uVar5;
    } while (lVar10 < iVar7);
  }
  return;
}

// SetTopLeftContent @ 14299edf0

void __thiscall SSplitter2x2::SetTopLeftContent(SSplitter2x2 *this,TSharedRef<SWidget,1> *param_1)

{
  FSlotBase *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  if ((this->Children).Children.ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *(FSlotBase **)(this->Children).Children.AllocatorInstance.Data;
  FSlotBase::DetatchParentFromContent(this_00);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_00->Widget).SharedReferenceCount.ReferenceController;
  (this_00->Widget).Object = pSVar2;
  (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTopRightContent @ 14299eea0

void __thiscall SSplitter2x2::SetTopRightContent(SSplitter2x2 *this,TSharedRef<SWidget,1> *param_1)

{
  FSlotBase *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  if ((this->Children).Children.ArrayNum < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *(FSlotBase **)((this->Children).Children.AllocatorInstance.Data + 0x10);
  FSlotBase::DetatchParentFromContent(this_00);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_00->Widget).SharedReferenceCount.ReferenceController;
  (this_00->Widget).Object = pSVar2;
  (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

