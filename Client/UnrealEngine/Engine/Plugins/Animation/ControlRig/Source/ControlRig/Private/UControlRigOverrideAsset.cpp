// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticClass @ 14a2021b0

UClass * __cdecl UControlRigOverrideAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigOverrideAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigOverrideAsset",
               &Z_Registration_Info_UClass_UControlRigOverrideAsset.InnerSingleton,
               StaticRegisterNativesUControlRigOverrideAsset,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigOverrideAsset>,
               InternalVTableHelperCtorCaller<UControlRigOverrideAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigOverrideAsset.InnerSingleton;
}

// UControlRigOverrideAsset @ 14a2229f0

UControlRigOverrideAsset * __thiscall
UControlRigOverrideAsset::UControlRigOverrideAsset
          (UControlRigOverrideAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigOverrideAsset__6B_;
  FControlRigOverrideContainer::FControlRigOverrideContainer(&this->Overrides);
  *(undefined8 *)&(this->OverrideChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OverrideChangedDelegate = 0;
  *(undefined8 *)&(this->OverrideChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OverrideChangedDelegate).field_0x10 = 0;
  return this;
}

// UControlRigOverrideAsset @ 14a222a50

UControlRigOverrideAsset * __thiscall
UControlRigOverrideAsset::UControlRigOverrideAsset
          (UControlRigOverrideAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigOverrideAsset__6B_;
  FControlRigOverrideContainer::FControlRigOverrideContainer(&this->Overrides);
  *(undefined8 *)&(this->OverrideChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OverrideChangedDelegate = 0;
  *(undefined8 *)&(this->OverrideChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OverrideChangedDelegate).field_0x10 = 0;
  return this;
}

// ~UControlRigOverrideAsset @ 14a226be0

void __thiscall UControlRigOverrideAsset::~UControlRigOverrideAsset(UControlRigOverrideAsset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UControlRigOverrideAsset__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OverrideChangedDelegate).field_0x8,
             *(int *)&(this->OverrideChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OverrideChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OverrideChangedDelegate);
  FControlRigOverrideContainer::~FControlRigOverrideContainer(&this->Overrides);
  UObject::~UObject((UObject *)this);
  return;
}

// BroadcastChanged @ 14a242510

void __thiscall UControlRigOverrideAsset::BroadcastChanged(UControlRigOverrideAsset *this)

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
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OverrideChangedDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OverrideChangedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OverrideChangedDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OverrideChangedDelegate).field_0x10) {
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
      lVar2 = *(longlong *)&(this->OverrideChangedDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OverrideChangedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OverrideChangedDelegate,
               false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// CreateOverrideAsset @ 14a24d570

UControlRigOverrideAsset * __cdecl UControlRigOverrideAsset::CreateOverrideAsset(FString *param_1)

{
  return (UControlRigOverrideAsset *)0x0;
}

// CreateOverrideAssetInDeveloperFolder @ 14a24d580

UControlRigOverrideAsset * __cdecl
UControlRigOverrideAsset::CreateOverrideAssetInDeveloperFolder(UObject *param_1)

{
  return (UControlRigOverrideAsset *)0x0;
}

// GetPrivateStaticClass @ 14a267d50

UClass * __cdecl UControlRigOverrideAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigOverrideAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigOverrideAsset",
               &Z_Registration_Info_UClass_UControlRigOverrideAsset.InnerSingleton,
               StaticRegisterNativesUControlRigOverrideAsset,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigOverrideAsset>,
               InternalVTableHelperCtorCaller<UControlRigOverrideAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigOverrideAsset.InnerSingleton;
}

// StaticRegisterNativesUControlRigOverrideAsset @ 14a298010

void __cdecl UControlRigOverrideAsset::StaticRegisterNativesUControlRigOverrideAsset(void)

{
  return;
}

