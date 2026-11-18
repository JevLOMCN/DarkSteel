// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// RemoveAndCopyValue @ 14693b2d0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
TMap<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
::RemoveAndCopyValue
          (TMap<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>_>
           *this,TObjectKey<UWidget> *param_1,FSlotInfo *param_2)

{
  atomic<int> *paVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  
  iVar7 = (param_1->ObjectKey).ObjectIndex;
  uVar8 = (param_1->ObjectKey).ObjectSerialNumber;
  uVar21 = iVar7 - uVar8 ^ uVar8 >> 0xd;
  uVar16 = (-0x61c88647 - uVar21) - uVar8 ^ uVar21 << 8;
  uVar22 = (uVar8 - uVar21) - uVar16 ^ uVar16 >> 0xd;
  uVar21 = (uVar21 - uVar22) - uVar16 ^ uVar22 >> 0xc;
  uVar16 = (uVar16 - uVar21) - uVar22 ^ uVar21 << 0x10;
  uVar22 = (uVar22 - uVar16) - uVar21 ^ uVar16 >> 5;
  uVar21 = (uVar21 - uVar22) - uVar16 ^ uVar22 >> 3;
  uVar16 = (uVar16 - uVar21) - uVar22 ^ uVar21 << 10;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar17 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar17 = &this->field_0x38;
    }
    iVar20 = *(int *)(puVar17 +
                     (ulonglong)
                     (*(int *)&this->field_0x48 - 1U & ((uVar22 - uVar16) - uVar21 ^ uVar16 >> 0xf))
                     * 4);
    if (iVar20 != -1) {
      lVar9 = *(longlong *)this;
      do {
        lVar19 = (longlong)iVar20 * 0x78;
        if ((*(int *)(lVar19 + lVar9) == iVar7) && (*(uint *)(lVar19 + 4 + lVar9) == uVar8)) {
          if (iVar20 == -1) {
            return false;
          }
          pdVar2 = (double *)(lVar19 + 8 + lVar9);
          dVar14 = pdVar2[1];
          puVar18 = (undefined8 *)(lVar9 + 0x58 + lVar19);
          (param_2->Slot).Anchors.Minimum.field0_0x0._s_0.X = *pdVar2;
          (param_2->Slot).Anchors.Minimum.field0_0x0._s_0.Y = dVar14;
          pdVar2 = (double *)(lVar19 + 0x18 + lVar9);
          dVar14 = pdVar2[1];
          (param_2->Slot).Anchors.Maximum.field0_0x0._s_0.X = *pdVar2;
          (param_2->Slot).Anchors.Maximum.field0_0x0._s_0.Y = dVar14;
          puVar3 = (undefined8 *)(lVar19 + 0x28 + lVar9);
          uVar6 = *puVar3;
          uVar15 = puVar3[1];
          (param_2->Slot).Offsets.Left = (float)(int)uVar6;
          (param_2->Slot).Offsets.Top = (float)(int)((ulonglong)uVar6 >> 0x20);
          (param_2->Slot).Offsets.Right = (float)(int)uVar15;
          (param_2->Slot).Offsets.Bottom = (float)(int)((ulonglong)uVar15 >> 0x20);
          puVar4 = (undefined4 *)(lVar19 + 0x38 + lVar9);
          uVar11 = puVar4[1];
          uVar12 = puVar4[2];
          uVar13 = puVar4[3];
          *(undefined4 *)&(param_2->Slot).Alignment.field0_0x0 = *puVar4;
          *(undefined4 *)((longlong)&(param_2->Slot).Alignment.field0_0x0 + 4) = uVar11;
          *(undefined4 *)((longlong)&(param_2->Slot).Alignment.field0_0x0 + 8) = uVar12;
          *(undefined4 *)((longlong)&(param_2->Slot).Alignment.field0_0x0 + 0xc) = uVar13;
          uVar6 = *(undefined8 *)(lVar19 + 0x48 + lVar9);
          (param_2->Slot).ZOrder = (int)uVar6;
          (param_2->Slot).bAutoRemoveOnWorldRemoved = (bool)(char)((ulonglong)uVar6 >> 0x20);
          *(int3 *)&(param_2->Slot).field_0x45 = (int3)((ulonglong)uVar6 >> 0x28);
          (param_2->LocalPlayer).WeakPtr = *(FWeakObjectPtr *)(lVar19 + 0x50 + lVar9);
          if (&param_2->FullScreenWidget != (TWeakPtr<SConstraintCanvas,1> *)puVar18) {
            (param_2->FullScreenWidget).Object = (SConstraintCanvas *)*puVar18;
            *puVar18 = 0;
            pTVar10 = (param_2->FullScreenWidget).WeakReferenceCount.ReferenceController;
            (param_2->FullScreenWidget).WeakReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar18[1];
            puVar18[1] = 0;
            if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &pTVar10->WeakReferenceCount;
              aVar5 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar5 == (atomic<int>)0x1) {
                (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
              }
            }
          }
          param_2->FullScreenWidgetSlot = *(FSlot **)(lVar19 + 0x68 + lVar9);
          TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo>,TDefaultMapHashableKeyFuncs<TObjectKey<UWidget>,UGameViewportSubsystem::FSlotInfo,0>,FDefaultSetAllocator>
                           *)this,iVar20);
          return true;
        }
        iVar20 = *(int *)(lVar19 + 0x70 + lVar9);
      } while (iVar20 != -1);
    }
  }
  return false;
}

