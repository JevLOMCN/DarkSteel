// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4ae360

UClass * __cdecl UDS_InputData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputData",
               &Z_Registration_Info_UClass_UDS_InputData.InnerSingleton,
               StaticRegisterNativesUDS_InputData,0x108,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InputData>,InternalVTableHelperCtorCaller<UDS_InputData>,
               local_res8,UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputData.InnerSingleton;
}

// UDS_InputData @ 14b4b29a0

UDS_InputData * __thiscall UDS_InputData::UDS_InputData(UDS_InputData *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InputData__6B_;
  *(undefined8 *)&this->ActiveInputDelegate = 0;
  *(undefined8 *)&(this->ActiveInputDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveInputDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangedInputLockDelegate = 0;
  *(undefined8 *)&(this->OnChangedInputLockDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedInputLockDelegate).field_0x10 = 0;
  this->bIsInputLock = false;
  this->bIsActiveInput = false;
  *(undefined8 *)&(this->ActiveInputDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedInputLockDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_InputData @ 14b4b3a50

void __thiscall UDS_InputData::~UDS_InputData(UDS_InputData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_InputData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedInputLockDelegate).field_0x8,
             *(int *)&(this->OnChangedInputLockDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangedInputLockDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedInputLockDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ActiveInputDelegate).field_0x8,*(int *)&(this->ActiveInputDelegate).field_0x10
            );
  pvVar1 = *(void **)&(this->ActiveInputDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ActiveInputDelegate);
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7c00

UClass * __cdecl UDS_InputData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputData",
               &Z_Registration_Info_UClass_UDS_InputData.InnerSingleton,
               StaticRegisterNativesUDS_InputData,0x108,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InputData>,InternalVTableHelperCtorCaller<UDS_InputData>,
               local_res8,UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputData.InnerSingleton;
}

// StaticRegisterNativesUDS_InputData @ 14b4b8670

void __cdecl UDS_InputData::StaticRegisterNativesUDS_InputData(void)

{
  return;
}

// Reset @ 14ba67e80

void __thiscall UDS_InputData::Reset(UDS_InputData *this)

{
  TVector2<double> TVar1;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ActiveInputDelegate,
             (FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ActiveInputDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnChangedInputLockDelegate,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnChangedInputLockDelegate
            );
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TVar1.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this->bIsInputLock = false;
  this->bIsActiveInput = false;
  (this->InputAxis).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return;
}

// SetIsActiveInput @ 14bb8ad00

void __thiscall UDS_InputData::SetIsActiveInput(UDS_InputData *this,bool param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  this->bIsActiveInput = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ActiveInputDelegate,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->ActiveInputDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->ActiveInputDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->ActiveInputDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->ActiveInputDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->ActiveInputDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ActiveInputDelegate,
               false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

