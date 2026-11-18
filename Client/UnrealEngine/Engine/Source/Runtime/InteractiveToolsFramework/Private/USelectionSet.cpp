// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 1496ccb10

UClass * __cdecl USelectionSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USelectionSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SelectionSet",
               &Z_Registration_Info_UClass_USelectionSet.InnerSingleton,
               StaticRegisterNativesUSelectionSet,0x48,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USelectionSet>,
               InternalVTableHelperCtorCaller<USelectionSet>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USelectionSet.InnerSingleton;
}

// USelectionSet @ 1496d3d70

USelectionSet * __thiscall USelectionSet::USelectionSet(USelectionSet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USelectionSet__6B_;
  *(undefined8 *)&this->OnModified = 0;
  *(undefined8 *)&(this->OnModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnModified).field_0x10 = 0;
  *(undefined8 *)&(this->OnModified).field_0x18 = 2;
  return this;
}

// USelectionSet @ 1496d3db0

USelectionSet * __thiscall
USelectionSet::USelectionSet(USelectionSet *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USelectionSet__6B_;
  *(undefined8 *)&this->OnModified = 0;
  *(undefined8 *)&(this->OnModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnModified).field_0x10 = 0;
  *(undefined8 *)&(this->OnModified).field_0x18 = 2;
  return this;
}

// ~USelectionSet @ 1496d4b00

void __thiscall USelectionSet::~USelectionSet(USelectionSet *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7USelectionSet__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnModified).field_0x8,
             *(int *)&(this->OnModified).field_0x10);
  pvVar1 = *(void **)&(this->OnModified).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnModified);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1496dde90

UClass * __cdecl USelectionSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USelectionSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SelectionSet",
               &Z_Registration_Info_UClass_USelectionSet.InnerSingleton,
               StaticRegisterNativesUSelectionSet,0x48,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USelectionSet>,
               InternalVTableHelperCtorCaller<USelectionSet>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USelectionSet.InnerSingleton;
}

// NotifySelectionSetModified @ 1496e2960

void __thiscall USelectionSet::NotifySelectionSetModified(USelectionSet *this)

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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnModified,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnModified).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnModified).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnModified).field_0x10) {
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
      lVar2 = *(longlong *)&(this->OnModified).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnModified).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnModified,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// StaticRegisterNativesUSelectionSet @ 1496e67a0

void __cdecl USelectionSet::StaticRegisterNativesUSelectionSet(void)

{
  return;
}

