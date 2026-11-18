// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 14

// FModulatorHandle @ 14452f7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FModulatorHandle * __thiscall
Audio::FModulatorHandle::FModulatorHandle(FModulatorHandle *this,FModulatorHandle *param_1)

{
  atomic<int> *paVar1;
  TWeakPtr<IAudioModulationManager,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FModulationParameter *pFVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8 [2];
  undefined1 local_c8 [80];
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FModulationParameter::FModulationParameter(&this->Parameter,&param_1->Parameter);
  pTVar2 = &param_1->Modulation;
  this->HandleId = param_1->HandleId;
  this->ModulatorTypeId = param_1->ModulatorTypeId;
  this->ModulatorId = param_1->ModulatorId;
  (this->Modulation).Object = pTVar2->Object;
  pTVar4 = (param_1->Modulation).WeakReferenceCount.ReferenceController;
  (this->Modulation).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = FModulationParameter::FModulationParameter((FModulationParameter *)local_c8);
  FModulationParameter::operator=(&param_1->Parameter,pFVar5);
  if (local_48 != 0) {
    plVar6 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar6 = local_20;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_78 != 0) {
    plVar6 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar6 = local_50;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_c8._32_8_ != 0) {
    plVar6 = (longlong *)(local_c8 + 0x30);
    if ((longlong *)local_c8._72_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_c8._72_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  param_1->HandleId = 0xffffffff;
  param_1->ModulatorTypeId = 0xffffffff;
  param_1->ModulatorId = 0xffffffff;
  if (pTVar2 != (TWeakPtr<IAudioModulationManager,1> *)local_d8) {
    pTVar4 = (param_1->Modulation).WeakReferenceCount.ReferenceController;
    pTVar2->Object = (IAudioModulationManager *)0x0;
    (param_1->Modulation).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  return this;
}

// FModulatorHandle @ 14452f950

FModulatorHandle * __thiscall
Audio::FModulatorHandle::FModulatorHandle(FModulatorHandle *this,FModulationParameter *param_1)

{
  uint uVar1;
  
  FModulationParameter::FModulationParameter(&this->Parameter,param_1);
  LOCK();
  UNLOCK();
  uVar1 = (int)ModulationPrivate::NextHandleId + 1;
  ModulationPrivate::NextHandleId = (atomic<unsigned_int>)((int)ModulationPrivate::NextHandleId + 1)
  ;
  this->ModulatorTypeId = 0xffffffff;
  this->ModulatorId = 0xffffffff;
  this->HandleId = uVar1;
  (this->Modulation).Object = (IAudioModulationManager *)0x0;
  (this->Modulation).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// FModulatorHandle @ 14452f9a0

FModulatorHandle * __thiscall
Audio::FModulatorHandle::FModulatorHandle
          (FModulatorHandle *this,IAudioModulationManager *param_1,IModulatorSettings *param_2,
          FModulationParameter *param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  IAudioModulationManager *pIVar5;
  FModulatorHandle *pFVar6;
  IAudioModulationManager *pIVar7;
  IAudioModulationManager *pIVar8;
  IAudioModulationManager *pIVar9;
  bool bVar10;
  
  FModulationParameter::FModulationParameter(&this->Parameter,param_3);
  LOCK();
  UNLOCK();
  uVar3 = (int)ModulationPrivate::NextHandleId + 1;
  ModulationPrivate::NextHandleId = (atomic<unsigned_int>)((int)ModulationPrivate::NextHandleId + 1)
  ;
  this->ModulatorTypeId = 0xffffffff;
  this->ModulatorId = 0xffffffff;
  pIVar9 = (IAudioModulationManager *)0x0;
  this->HandleId = uVar3;
  pIVar5 = *(IAudioModulationManager **)&param_1->field_0x10;
  pIVar7 = pIVar5;
  pIVar8 = pIVar9;
  if (pIVar5 != (IAudioModulationManager *)0x0) {
    iVar2 = *(int *)&pIVar5->field_0x8;
    do {
      pIVar7 = pIVar9;
      pIVar8 = (IAudioModulationManager *)0x0;
      if (iVar2 == 0) goto LAB_14452fa25;
      LOCK();
      iVar4 = *(int *)&pIVar5->field_0x8;
      bVar10 = iVar2 == iVar4;
      if (bVar10) {
        *(int *)&pIVar5->field_0x8 = iVar2 + 1;
        iVar4 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar4;
    } while (!bVar10);
    pIVar7 = pIVar5;
    pIVar8 = *(IAudioModulationManager **)&param_1->field_0x8;
  }
LAB_14452fa25:
  pIVar5 = (IAudioModulationManager *)&pIVar8->field_0x8;
  if (pIVar8 == (IAudioModulationManager *)0x0) {
    pIVar5 = pIVar9;
  }
  if ((pIVar5 != (IAudioModulationManager *)&param_1->field_0x8) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FModulatorHandle *)(*pcVar1)();
    return pFVar6;
  }
  if (pIVar8 == (IAudioModulationManager *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FModulatorHandle *)(*pcVar1)();
      return pFVar6;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FModulatorHandle *)(*pcVar1)();
      return pFVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (this->Modulation).Object = pIVar8;
  (this->Modulation).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pIVar7;
  if (pIVar7 != (IAudioModulationManager *)0x0) {
    LOCK();
    *(int *)&pIVar7->field_0xc = *(int *)&pIVar7->field_0xc + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar7);
  uVar3 = (**(code **)((longlong)*param_2 + 0x20))(param_2,this->HandleId,param_1);
  this->ModulatorTypeId = uVar3;
  if (uVar3 != 0xffffffff) {
    uVar3 = (**(code **)((longlong)*param_2 + 0x10))(param_2);
    this->ModulatorId = uVar3;
  }
  return this;
}

// FModulatorHandle @ 14452fb30

FModulatorHandle * __thiscall
Audio::FModulatorHandle::FModulatorHandle(FModulatorHandle *this,FModulatorHandle *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  IAudioModulationManager *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  uint uVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  FModulationParameter::FModulationParameter(&this->Parameter);
  this->HandleId = 0xffffffff;
  this->ModulatorTypeId = 0xffffffff;
  this->ModulatorId = 0xffffffff;
  (this->Modulation).Object = (IAudioModulationManager *)0x0;
  (this->Modulation).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  LOCK();
  UNLOCK();
  uVar6 = (int)ModulationPrivate::NextHandleId + 1;
  ModulationPrivate::NextHandleId = (atomic<unsigned_int>)((int)ModulationPrivate::NextHandleId + 1)
  ;
  this->HandleId = uVar6;
  pTVar3 = (param_1->Modulation).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14452fbb1;
      LOCK();
      aVar7 = pTVar3->SharedReferenceCount;
      bVar9 = aVar2 == aVar7;
      if (bVar9) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar9);
    pIVar4 = (param_1->Modulation).Object;
    pTVar8 = pTVar3;
    if (pIVar4 != (IAudioModulationManager *)0x0) {
      (**(code **)(*(longlong *)pIVar4 + 0x40))(pIVar4,this->HandleId,param_1->ModulatorId);
      FModulationParameter::operator=(&this->Parameter,&param_1->Parameter);
      this->ModulatorId = param_1->ModulatorId;
      this->ModulatorTypeId = param_1->ModulatorTypeId;
      pTVar8 = (param_1->Modulation).WeakReferenceCount.ReferenceController;
      pIVar4 = (param_1->Modulation).Object;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = (this->Modulation).WeakReferenceCount.ReferenceController;
      (this->Modulation).Object = pIVar4;
      (this->Modulation).WeakReferenceCount.ReferenceController = pTVar8;
      pTVar8 = pTVar3;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
  }
LAB_14452fbb1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return this;
}

// ~FModulatorHandle @ 1445307f0

void __thiscall Audio::FModulatorHandle::~FModulatorHandle(FModulatorHandle *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IAudioModulationManager *pIVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->Modulation).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_144530820;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pIVar3 = (this->Modulation).Object;
    if (pIVar3 != (IAudioModulationManager *)0x0) {
      (**(code **)(*(longlong *)pIVar3 + 0x58))(pIVar3,this);
    }
  }
LAB_144530820:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = (this->Modulation).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FModulationParameter::~FModulationParameter(&this->Parameter);
  return;
}

// operator= @ 144531240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FModulatorHandle * __thiscall
Audio::FModulatorHandle::operator=(FModulatorHandle *this,FModulatorHandle *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IAudioModulationManager *pIVar3;
  FWeakReferencer<1> *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> aVar6;
  FModulationParameter *pFVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8 [2];
  undefined1 local_d8 [80];
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (this->HandleId != 0xffffffff) {
    pTVar9 = (this->Modulation).WeakReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar9->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1445312a4;
        }
        LOCK();
        aVar6 = pTVar9->SharedReferenceCount;
        bVar10 = aVar2 == aVar6;
        if (bVar10) {
          pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar6;
      } while (!bVar10);
      pIVar3 = (this->Modulation).Object;
      if (pIVar3 != (IAudioModulationManager *)0x0) {
        (**(code **)(*(longlong *)pIVar3 + 0x58))(pIVar3,this);
      }
    }
LAB_1445312a4:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  FModulationParameter::operator=(&this->Parameter,&param_1->Parameter);
  this->HandleId = param_1->HandleId;
  this->ModulatorId = param_1->ModulatorId;
  this->ModulatorTypeId = param_1->ModulatorTypeId;
  pTVar9 = (param_1->Modulation).WeakReferenceCount.ReferenceController;
  pIVar3 = (param_1->Modulation).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_f8 = *(undefined4 *)&(this->Modulation).Object;
  uStack_f4 = *(undefined4 *)((longlong)&(this->Modulation).Object + 4);
  pFVar4 = &(this->Modulation).WeakReferenceCount;
  uStack_f0 = *(undefined4 *)&pFVar4->ReferenceController;
  uStack_ec = *(undefined4 *)
               ((longlong)&(this->Modulation).WeakReferenceCount.ReferenceController + 4);
  pTVar5 = pFVar4->ReferenceController;
  (this->Modulation).Object = pIVar3;
  (this->Modulation).WeakReferenceCount.ReferenceController = pTVar9;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pFVar7 = FModulationParameter::FModulationParameter((FModulationParameter *)local_d8);
  FModulationParameter::operator=(&param_1->Parameter,pFVar7);
  if (local_58 != 0) {
    plVar8 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar8 = local_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar8 = local_60;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_d8._32_8_ != 0) {
    plVar8 = (longlong *)(local_d8 + 0x30);
    if ((longlong *)local_d8._72_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_d8._72_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  param_1->HandleId = 0xffffffff;
  param_1->ModulatorTypeId = 0xffffffff;
  param_1->ModulatorId = 0xffffffff;
  if (&param_1->Modulation != (TWeakPtr<IAudioModulationManager,1> *)local_e8) {
    pTVar9 = (param_1->Modulation).WeakReferenceCount.ReferenceController;
    (param_1->Modulation).Object = (IAudioModulationManager *)0x0;
    (param_1->Modulation).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  return this;
}

// operator= @ 144531460

FModulatorHandle * __thiscall
Audio::FModulatorHandle::operator=(FModulatorHandle *this,FModulatorHandle *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  uint uVar6;
  IAudioModulationManager *pIVar7;
  IAudioModulationManager *pIVar8;
  IAudioModulationManager *pIVar9;
  undefined8 in_R9;
  bool bVar10;
  undefined4 uVar11;
  undefined8 local_18 [2];
  
  FModulationParameter::operator=(&this->Parameter,&param_1->Parameter);
  pIVar9 = (IAudioModulationManager *)(param_1->Modulation).WeakReferenceCount.ReferenceController;
  pIVar7 = (IAudioModulationManager *)0x0;
  if (pIVar9 != (IAudioModulationManager *)0x0) {
    aVar2 = *(atomic<int> *)&pIVar9->field_0x8;
    do {
      pIVar8 = pIVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1445314b8;
      LOCK();
      aVar5 = *(atomic<int> *)&pIVar9->field_0x8;
      bVar10 = aVar2 == aVar5;
      if (bVar10) {
        *(atomic<int> *)&pIVar9->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar10);
    pIVar7 = (param_1->Modulation).Object;
  }
  pIVar8 = pIVar9;
  if (pIVar7 == (IAudioModulationManager *)0x0) {
LAB_1445314b8:
    this->HandleId = 0xffffffff;
    this->ModulatorTypeId = 0xffffffff;
    this->ModulatorId = 0xffffffff;
    pIVar9 = pIVar8;
    if (&this->Modulation != (TWeakPtr<IAudioModulationManager,1> *)local_18) {
      pTVar3 = (this->Modulation).WeakReferenceCount.ReferenceController;
      (this->Modulation).Object = (IAudioModulationManager *)0x0;
      (this->Modulation).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
    }
  }
  else {
    LOCK();
    UNLOCK();
    uVar6 = (int)ModulationPrivate::NextHandleId + 1;
    ModulationPrivate::NextHandleId =
         (atomic<unsigned_int>)((int)ModulationPrivate::NextHandleId + 1);
    this->HandleId = uVar6;
    this->ModulatorId = param_1->ModulatorId;
    this->ModulatorTypeId = param_1->ModulatorTypeId;
    pTVar3 = (param_1->Modulation).WeakReferenceCount.ReferenceController;
    pIVar8 = (param_1->Modulation).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar11 = *(undefined4 *)&(this->Modulation).Object;
    pTVar4 = (this->Modulation).WeakReferenceCount.ReferenceController;
    (this->Modulation).Object = pIVar8;
    (this->Modulation).WeakReferenceCount.ReferenceController = pTVar3;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    if (this->ModulatorId != 0xffffffff) {
      (**(code **)(*(longlong *)&pIVar7->field_0x0 + 0x40))
                (pIVar7,this->HandleId,this->ModulatorId,in_R9,uVar11);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar9);
  return this;
}

// GetHandleId @ 144534760

uint __thiscall Audio::FModulatorHandle::GetHandleId(FModulatorHandle *this)

{
  return this->HandleId;
}

// GetModulatorId @ 144534960

uint __thiscall Audio::FModulatorHandle::GetModulatorId(FModulatorHandle *this)

{
  return this->ModulatorId;
}

// GetParameter @ 144534a60

FModulationParameter * __thiscall Audio::FModulatorHandle::GetParameter(FModulatorHandle *this)

{
  return &this->Parameter;
}

// GetTypeId @ 144535890

uint __thiscall Audio::FModulatorHandle::GetTypeId(FModulatorHandle *this)

{
  return this->ModulatorTypeId;
}

// GetValue @ 144535930

bool __thiscall Audio::FModulatorHandle::GetValue(FModulatorHandle *this,float *param_1)

{
  IAudioModulationManager *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  if ((this->ModulatorId == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioModulation.cpp"
                         ,0x175,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pTVar7 = (this->Modulation).WeakReferenceCount.ReferenceController;
  *param_1 = 1.0;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1445359a0;
      }
      LOCK();
      aVar6 = pTVar7->SharedReferenceCount;
      bVar4 = aVar3 == aVar6;
      if (bVar4) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar4);
    pIVar1 = (this->Modulation).Object;
    if (pIVar1 != (IAudioModulationManager *)0x0) {
      uVar5 = (**(code **)(*(longlong *)pIVar1 + 0x48))(pIVar1,this,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return (bool)uVar5;
    }
  }
LAB_1445359a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return false;
}

// GetValueThreadSafe @ 144535a00

bool __thiscall Audio::FModulatorHandle::GetValueThreadSafe(FModulatorHandle *this,float *param_1)

{
  IAudioModulationManager *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  if ((this->ModulatorId == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioModulation.cpp"
                         ,0x183,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pTVar7 = (this->Modulation).WeakReferenceCount.ReferenceController;
  *param_1 = 1.0;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_144535a70;
      }
      LOCK();
      aVar6 = pTVar7->SharedReferenceCount;
      bVar4 = aVar3 == aVar6;
      if (bVar4) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar4);
    pIVar1 = (this->Modulation).Object;
    if (pIVar1 != (IAudioModulationManager *)0x0) {
      uVar5 = (**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1,this,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return (bool)uVar5;
    }
  }
LAB_144535a70:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return false;
}

// IsValid @ 144535bf0

bool __thiscall Audio::FModulatorHandle::IsValid(FModulatorHandle *this)

{
  return this->ModulatorId != 0xffffffff;
}

