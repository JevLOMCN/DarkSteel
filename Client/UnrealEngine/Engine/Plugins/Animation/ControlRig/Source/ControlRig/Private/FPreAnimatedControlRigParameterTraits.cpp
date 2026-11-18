// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// CachePreAnimatedValue @ 14a3efac0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FPreAnimatedParameterKey * __thiscall
UE::MovieScene::FPreAnimatedControlRigParameterTraits::CachePreAnimatedValue
          (FPreAnimatedControlRigParameterTraits *this,
          FPreAnimatedParameterKey *__return_storage_ptr__,UControlRig *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FPreAnimatedParameterKey *pFVar3;
  FRigControlElement *pFVar4;
  atomic<int> *paVar5;
  FName local_res20;
  TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>
  local_18;
  
  local_res20 = param_2;
  if (param_1 == (UControlRig *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Rig",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                       ,0x2ed,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPreAnimatedParameterKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  GetBuffers(this,&local_18,param_1);
  pFVar4 = (FRigControlElement *)(**(code **)(param_1->_padding_ + 0x3c8))(param_1,&local_res20);
  if (pFVar4 != (FRigControlElement *)0x0) {
    if (local_18.Object == (FPreAnimatedBufferPairs *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPreAnimatedParameterKey *)(*pcVar1)();
        return pFVar3;
      }
    }
    FControlRigParameterValues::AddCurrentValue(&(local_18.Object)->Transient,param_1,pFVar4);
  }
  if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  (__return_storage_ptr__->Buffer).Object = local_18.Object;
  (__return_storage_ptr__->Buffer).SharedReferenceCount.ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  __return_storage_ptr__->ParameterName = local_res20;
  __return_storage_ptr__->bPersistent = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetBuffers @ 14a411600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1> *
__thiscall
UE::MovieScene::FPreAnimatedControlRigParameterTraits::GetBuffers
          (FPreAnimatedControlRigParameterTraits *this,
          TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>
          *__return_storage_ptr__,UControlRig *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FObjectKey FVar4;
  bool bVar5;
  atomic<int> aVar6;
  TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>
  *pTVar7;
  TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1> *pTVar8
  ;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  FPreAnimatedBufferPairs *pFVar15;
  uint uVar16;
  FObjectKey local_res8;
  FWeakObjectPtr local_res10;
  UControlRig *local_res18;
  TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>
  local_38;
  
  if ((param_1 == (UControlRig *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Rig",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                         ,0x2df,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>
              *)(*pcVar3)();
    return pTVar7;
  }
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  iVar12 = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  uVar11 = 0;
  if (param_1 != (UControlRig *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    local_res8.ObjectIndex = local_res10.ObjectIndex;
    local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
    FVar4 = local_res8;
    iVar12 = local_res10.ObjectIndex;
    local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
    uVar11 = local_res8.ObjectSerialNumber;
    local_res8 = FVar4;
  }
  uVar16 = iVar12 - uVar11 ^ uVar11 >> 0xd;
  uVar10 = (-0x61c88647 - uVar16) - uVar11 ^ uVar16 << 8;
  uVar13 = (uVar11 - uVar10) - uVar16 ^ uVar10 >> 0xd;
  uVar16 = (uVar16 - uVar13) - uVar10 ^ uVar13 >> 0xc;
  uVar11 = (uVar10 - uVar13) - uVar16 ^ uVar16 << 0x10;
  uVar10 = (uVar13 - uVar11) - uVar16 ^ uVar11 >> 5;
  uVar13 = (uVar16 - uVar10) - uVar11 ^ uVar10 >> 3;
  uVar11 = (uVar11 - uVar13) - uVar10 ^ uVar13 << 10;
  pTVar8 = TMapBase<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>,0>_>
           ::FindOrAddImpl<FObjectKey>
                     ((TMapBase<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>,0>_>
                       *)&this->PreAnimatedBuffers,(uVar10 - uVar11) - uVar13 ^ uVar11 >> 0xf,
                      &local_res8);
  __return_storage_ptr__->Object = (FPreAnimatedBufferPairs *)0x0;
  pTVar9 = (pTVar8->WeakReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar5 = aVar2 == aVar6;
      if (bVar5) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar5);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = pTVar8->Object;
  }
  if (__return_storage_ptr__->Object == (FPreAnimatedBufferPairs *)0x0) {
    pTVar9 = ::operator_new(0xf0);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      local_38.Object = ___xmm_00000000000000000000000000000010;
      pFVar15 = (FPreAnimatedBufferPairs *)&DAT_00000010;
      local_38.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFPreAnimatedBufferPairs_FPreAnimatedControlRigParameterTraits_MovieScene_UE___00_SharedPointerInternals__6B_
      ;
      memset(pTVar9 + 1,0,0xe0);
      FControlRigParameterValues::FControlRigParameterValues
                ((FControlRigParameterValues *)(pTVar9 + 1),Unstable);
      FControlRigParameterValues::FControlRigParameterValues
                ((FControlRigParameterValues *)(pTVar9 + 8),Unstable);
      pFVar15 = (FPreAnimatedBufferPairs *)(pTVar9 + 1);
      if ((pFVar15 == (FPreAnimatedBufferPairs *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>
                  *)(*pcVar3)();
        return pTVar7;
      }
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      local_38.SharedReferenceCount.ReferenceController = pTVar9;
      pTVar14 = pTVar9;
      local_38.Object = pFVar15;
    }
    if (__return_storage_ptr__ != &local_38) {
      __return_storage_ptr__->Object = pFVar15;
      local_38.Object = (FPreAnimatedBufferPairs *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    pTVar8->Object = __return_storage_ptr__->Object;
    pTVar14 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (pTVar14 != (pTVar8->WeakReferenceCount).ReferenceController) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar9 = (pTVar8->WeakReferenceCount).ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar9->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
        }
      }
      (pTVar8->WeakReferenceCount).ReferenceController = pTVar14;
    }
  }
  return __return_storage_ptr__;
}

// RestorePreAnimatedValue @ 14a452670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedControlRigParameterTraits::RestorePreAnimatedValue
          (FPreAnimatedControlRigParameterTraits *this,TTuple<FObjectKey,FName> *param_1,
          FPreAnimatedParameterKey *param_2,FRestoreStateParams *param_3)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UControlRig *pUVar5;
  UClass *pUVar6;
  FPreAnimatedBufferPairs *pFVar7;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = *(int *)param_1;
  local_res10.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar5 = (UControlRig *)FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 != (UControlRig *)0x0) {
    pUVar6 = Z_Construct_UClass_UControlRig_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      pFVar7 = (param_2->Buffer).Object;
      if (param_2->bPersistent == false) {
        if (pFVar7 == (FPreAnimatedBufferPairs *)0x0) {
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
        pFVar7 = (param_2->Buffer).Object;
      }
      else {
        if (pFVar7 == (FPreAnimatedBufferPairs *)0x0) {
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
        pFVar7 = (FPreAnimatedBufferPairs *)&((param_2->Buffer).Object)->Persistent;
      }
      FVar2.ComparisonIndex.Value = *(uint *)&param_1->field_0x8;
      FVar2.Number = *(uint *)&param_1->field_0xc;
      FControlRigParameterValues::ApplyAndRemove(&pFVar7->Transient,pUVar5,FVar2);
    }
  }
  return;
}

