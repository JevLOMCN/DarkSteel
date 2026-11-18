// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 52

// StaticClass @ 14a780630

UClass * __cdecl UCommonButtonGroupBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonButtonGroupBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonButtonGroupBase",
               &Z_Registration_Info_UClass_UCommonButtonGroupBase.InnerSingleton,
               StaticRegisterNativesUCommonButtonGroupBase,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonButtonGroupBase>,
               InternalVTableHelperCtorCaller<UCommonButtonGroupBase>,local_res8,
               UCommonWidgetGroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonButtonGroupBase.InnerSingleton;
}

// UCommonButtonGroupBase @ 14a7acde0

UCommonButtonGroupBase * __thiscall
UCommonButtonGroupBase::UCommonButtonGroupBase(UCommonButtonGroupBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SelectedButtonIndex = -1;
  this->HoveredButtonIndex = -1;
  this->_padding_ = (longlong)&___7UCommonButtonGroupBase__6B_;
  *(undefined8 *)&this->OnSelectedButtonBaseChanged = 0;
  *(undefined8 *)&(this->OnSelectedButtonBaseChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedButtonBaseChanged).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnSelectedButtonBaseChanged = 0;
  *(undefined8 *)&(this->NativeOnSelectedButtonBaseChanged).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnSelectedButtonBaseChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnHoveredButtonBaseChanged = 0;
  *(undefined8 *)&(this->OnHoveredButtonBaseChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnHoveredButtonBaseChanged).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnHoveredButtonBaseChanged = 0;
  *(undefined8 *)&(this->NativeOnHoveredButtonBaseChanged).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnHoveredButtonBaseChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseClicked).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnButtonBaseClicked = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseClicked).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDoubleClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnButtonBaseDoubleClicked = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionCleared = 0;
  *(undefined8 *)&(this->OnSelectionCleared).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionCleared).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnSelectionCleared = 0;
  *(undefined8 *)&(this->NativeOnSelectionCleared).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnSelectionCleared).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseLockClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseLockClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseLockClicked).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnButtonBaseLockClicked = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseLockClicked).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseLockClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseLockDoubleClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseLockDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseLockDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnButtonBaseLockDoubleClicked = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseLockDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseLockDoubleClicked).field_0x10 = 0;
  (this->Buttons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buttons).ArrayNum = 0;
  (this->Buttons).ArrayMax = 0;
  *(undefined8 *)&(this->NativeOnSelectedButtonBaseChanged).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnHoveredButtonBaseChanged).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnButtonBaseClicked).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnButtonBaseDoubleClicked).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnSelectionCleared).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnButtonBaseLockClicked).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnButtonBaseLockDoubleClicked).field_0x18 = 2;
  return this;
}

// UCommonButtonGroupBase @ 14a7acf80

UCommonButtonGroupBase * __thiscall
UCommonButtonGroupBase::UCommonButtonGroupBase(UCommonButtonGroupBase *this)

{
  UObject::UObject((UObject *)this);
  this->SelectedButtonIndex = -1;
  this->HoveredButtonIndex = -1;
  this->_padding_ = (longlong)&___7UCommonButtonGroupBase__6B_;
  *(undefined8 *)&this->OnSelectedButtonBaseChanged = 0;
  *(undefined8 *)&(this->OnSelectedButtonBaseChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedButtonBaseChanged).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnSelectedButtonBaseChanged = 0;
  *(undefined8 *)&(this->NativeOnSelectedButtonBaseChanged).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnSelectedButtonBaseChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnHoveredButtonBaseChanged = 0;
  *(undefined8 *)&(this->OnHoveredButtonBaseChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnHoveredButtonBaseChanged).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnHoveredButtonBaseChanged = 0;
  *(undefined8 *)&(this->NativeOnHoveredButtonBaseChanged).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnHoveredButtonBaseChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseClicked).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnButtonBaseClicked = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseClicked).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDoubleClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnButtonBaseDoubleClicked = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionCleared = 0;
  *(undefined8 *)&(this->OnSelectionCleared).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionCleared).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnSelectionCleared = 0;
  *(undefined8 *)&(this->NativeOnSelectionCleared).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnSelectionCleared).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseLockClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseLockClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseLockClicked).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnButtonBaseLockClicked = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseLockClicked).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseLockClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseLockDoubleClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseLockDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseLockDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->NativeOnButtonBaseLockDoubleClicked = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseLockDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->NativeOnButtonBaseLockDoubleClicked).field_0x10 = 0;
  this->bSelectionRequired = false;
  (this->Buttons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buttons).ArrayNum = 0;
  (this->Buttons).ArrayMax = 0;
  *(undefined8 *)&(this->NativeOnSelectedButtonBaseChanged).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnHoveredButtonBaseChanged).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnButtonBaseClicked).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnButtonBaseDoubleClicked).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnSelectionCleared).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnButtonBaseLockClicked).field_0x18 = 2;
  *(undefined8 *)&(this->NativeOnButtonBaseLockDoubleClicked).field_0x18 = 2;
  return this;
}

// ~UCommonButtonGroupBase @ 14a7b2710

void __thiscall UCommonButtonGroupBase::~UCommonButtonGroupBase(UCommonButtonGroupBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UCommonButtonGroupBase__6B_;
  pFVar1 = (this->Buttons).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NativeOnButtonBaseLockDoubleClicked).field_0x8,
             *(int *)&(this->NativeOnButtonBaseLockDoubleClicked).field_0x10);
  pvVar2 = *(void **)&(this->NativeOnButtonBaseLockDoubleClicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NativeOnButtonBaseLockDoubleClicked);
  pvVar2 = *(void **)&(this->OnButtonBaseLockDoubleClicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseLockDoubleClicked);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NativeOnButtonBaseLockClicked).field_0x8,
             *(int *)&(this->NativeOnButtonBaseLockClicked).field_0x10);
  pvVar2 = *(void **)&(this->NativeOnButtonBaseLockClicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NativeOnButtonBaseLockClicked);
  pvVar2 = *(void **)&(this->OnButtonBaseLockClicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseLockClicked);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NativeOnSelectionCleared).field_0x8,
             *(int *)&(this->NativeOnSelectionCleared).field_0x10);
  pvVar2 = *(void **)&(this->NativeOnSelectionCleared).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NativeOnSelectionCleared);
  pvVar2 = *(void **)&(this->OnSelectionCleared).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionCleared);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NativeOnButtonBaseDoubleClicked).field_0x8,
             *(int *)&(this->NativeOnButtonBaseDoubleClicked).field_0x10);
  pvVar2 = *(void **)&(this->NativeOnButtonBaseDoubleClicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NativeOnButtonBaseDoubleClicked);
  pvVar2 = *(void **)&(this->OnButtonBaseDoubleClicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseDoubleClicked);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NativeOnButtonBaseClicked).field_0x8,
             *(int *)&(this->NativeOnButtonBaseClicked).field_0x10);
  pvVar2 = *(void **)&(this->NativeOnButtonBaseClicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NativeOnButtonBaseClicked);
  pvVar2 = *(void **)&(this->OnButtonBaseClicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseClicked);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NativeOnHoveredButtonBaseChanged).field_0x8,
             *(int *)&(this->NativeOnHoveredButtonBaseChanged).field_0x10);
  pvVar2 = *(void **)&(this->NativeOnHoveredButtonBaseChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NativeOnHoveredButtonBaseChanged);
  pvVar2 = *(void **)&(this->OnHoveredButtonBaseChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoveredButtonBaseChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NativeOnSelectedButtonBaseChanged).field_0x8,
             *(int *)&(this->NativeOnSelectedButtonBaseChanged).field_0x10);
  pvVar2 = *(void **)&(this->NativeOnSelectedButtonBaseChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NativeOnSelectedButtonBaseChanged);
  pvVar2 = *(void **)&(this->OnSelectedButtonBaseChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedButtonBaseChanged);
  this->_padding_ = (longlong)&___7UCommonWidgetGroupBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DeselectAll @ 14a7d2e30

void __thiscall UCommonButtonGroupBase::DeselectAll(UCommonButtonGroupBase *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UCommonButtonBase *this_00;
  FWeakObjectPtr *this_01;
  undefined1 local_res8 [8];
  
  if (this->bSelectionRequired != false) {
    `UCommonButtonGroupBase::DeselectAll'::__l2::<lambda_1>::operator()(local_res8);
  }
  this_01 = (FWeakObjectPtr *)(this->Buttons).AllocatorInstance.Data;
  iVar2 = (this->Buttons).ArrayNum;
  pFVar1 = this_01 + iVar2;
  while( true ) {
    if ((this->Buttons).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UCommonButtonBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar1) break;
    bVar3 = FWeakObjectPtr::IsValid(this_01);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(this_01);
      if ((pUVar4[0x1f].field_0x9 & 1) != 0) {
        this_00 = (UCommonButtonBase *)FWeakObjectPtr::Get(this_01);
        UCommonButtonBase::SetSelectedInternal(this_00,false,true,true);
      }
    }
    this_01 = this_01 + 1;
  }
  if (this->SelectedButtonIndex != -1) {
    this->SelectedButtonIndex = -1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSelectionCleared,
               (void *)0x0);
  }
  return;
}

// FindButtonIndex @ 14a7dc0a0

int __thiscall
UCommonButtonGroupBase::FindButtonIndex(UCommonButtonGroupBase *this,UCommonButtonBase *param_1)

{
  int iVar1;
  FWeakObjectPtr *pFVar2;
  UCommonButtonBase *pUVar3;
  FWeakObjectPtr *this_00;
  
  pFVar2 = (FWeakObjectPtr *)(this->Buttons).AllocatorInstance.Data;
  iVar1 = (this->Buttons).ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + iVar1) {
      return -1;
    }
    pUVar3 = (UCommonButtonBase *)FWeakObjectPtr::Get(this_00);
    if (pUVar3 == param_1) break;
    this_00 = this_00 + 1;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// ForEach @ 14a7dddf0

void __thiscall
UCommonButtonGroupBase::ForEach
          (UCommonButtonGroupBase *this,TFunctionRef<void___cdecl(UCommonButtonBase_&,int)> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UObject *pUVar5;
  uint uVar6;
  uint local_res8 [2];
  
  iVar3 = (this->Buttons).ArrayNum;
  uVar6 = 0;
  if (0 < iVar3) {
    do {
      if ((-1 < (int)uVar6) && ((int)uVar6 < iVar3)) {
        uVar4 = 0;
        if ((int)uVar6 < (this->Buttons).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     ((this->Buttons).AllocatorInstance.Data +
                                     (longlong)(int)uVar6 * 8));
        if (pUVar5 != (UObject *)0x0) {
          local_res8[0] = uVar6;
          (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pUVar5,local_res8);
        }
      }
      iVar3 = (this->Buttons).ArrayNum;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar3);
  }
  return;
}

// GetButtonBaseAtIndex @ 14a7e0d80

UCommonButtonBase * __thiscall
UCommonButtonGroupBase::GetButtonBaseAtIndex(UCommonButtonGroupBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UCommonButtonBase *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Buttons).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Buttons).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UCommonButtonBase *)(*pcVar1)();
        return pUVar4;
      }
    }
    pUVar4 = (UCommonButtonBase *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((this->Buttons).AllocatorInstance.Data + (longlong)param_1 * 8));
    return pUVar4;
  }
  return (UCommonButtonBase *)0x0;
}

// GetButtonCount @ 14a7e0e20

int __thiscall UCommonButtonGroupBase::GetButtonCount(UCommonButtonGroupBase *this)

{
  return (this->Buttons).ArrayNum;
}

// GetHoveredButtonIndex @ 14a7e27b0

int __thiscall UCommonButtonGroupBase::GetHoveredButtonIndex(UCommonButtonGroupBase *this)

{
  return this->HoveredButtonIndex;
}

// GetPrivateStaticClass @ 14a7e5170

UClass * __cdecl UCommonButtonGroupBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonButtonGroupBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonButtonGroupBase",
               &Z_Registration_Info_UClass_UCommonButtonGroupBase.InnerSingleton,
               StaticRegisterNativesUCommonButtonGroupBase,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonButtonGroupBase>,
               InternalVTableHelperCtorCaller<UCommonButtonGroupBase>,local_res8,
               UCommonWidgetGroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonButtonGroupBase.InnerSingleton;
}

// GetSelectedButtonBase @ 14a7e76e0

UCommonButtonBase * __thiscall
UCommonButtonGroupBase::GetSelectedButtonBase(UCommonButtonGroupBase *this)

{
  UCommonButtonBase *pUVar1;
  
  pUVar1 = GetButtonBaseAtIndex(this,this->SelectedButtonIndex);
  return pUVar1;
}

// GetSelectedButtonIndex @ 14a7e7700

int __thiscall UCommonButtonGroupBase::GetSelectedButtonIndex(UCommonButtonGroupBase *this)

{
  return this->SelectedButtonIndex;
}

// GetSelectionRequired @ 14a7e7ba0

bool __thiscall UCommonButtonGroupBase::GetSelectionRequired(UCommonButtonGroupBase *this)

{
  return this->bSelectionRequired;
}

// GetWidgetType @ 14a7e99a0

TSubclassOf<UWidget> __thiscall UCommonButtonGroupBase::GetWidgetType(UCommonButtonGroupBase *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UCommonButtonBase::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UWidget>)in_RDX.field0_0x0;
}

// HasAnyButtons @ 14a7f0bf0

bool __thiscall UCommonButtonGroupBase::HasAnyButtons(UCommonButtonGroupBase *this)

{
  return 0 < (this->Buttons).ArrayNum;
}

// OnButtonBaseHovered @ 14a7fc350

void __thiscall
UCommonButtonGroupBase::OnButtonBaseHovered(UCommonButtonGroupBase *this,UCommonButtonBase *param_1)

{
  int iVar1;
  UCommonButtonBase *local_18;
  int local_10;
  
  iVar1 = FindButtonIndex(this,param_1);
  this->HoveredButtonIndex = iVar1;
  if (iVar1 != -1) {
    TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>
                *)&this->NativeOnHoveredButtonBaseChanged,param_1,iVar1);
    local_10 = this->HoveredButtonIndex;
    local_18 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnHoveredButtonBaseChanged,&local_18);
  }
  return;
}

// OnButtonBaseUnhovered @ 14a7fc3b0

void __thiscall
UCommonButtonGroupBase::OnButtonBaseUnhovered
          (UCommonButtonGroupBase *this,UCommonButtonBase *param_1)

{
  UCommonButtonBase *pUVar1;
  undefined8 local_18;
  int local_10;
  
  if (this->HoveredButtonIndex != -1) {
    pUVar1 = GetButtonBaseAtIndex(this,this->HoveredButtonIndex);
    if (pUVar1 == param_1) {
      this->HoveredButtonIndex = -1;
      TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>::
      Broadcast((TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>
                 *)&this->NativeOnHoveredButtonBaseChanged,(UCommonButtonBase *)0x0,-1);
      local_10 = this->HoveredButtonIndex;
      local_18 = 0;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnHoveredButtonBaseChanged,&local_18);
    }
  }
  return;
}

// OnHandleButtonBaseClicked @ 14a7fcd20

void __thiscall
UCommonButtonGroupBase::OnHandleButtonBaseClicked
          (UCommonButtonGroupBase *this,UCommonButtonBase *param_1)

{
  UCommonButtonBase *local_18;
  int local_10;
  
  local_10 = FindButtonIndex(this,param_1);
  if (local_10 != -1) {
    TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>
                *)&this->NativeOnButtonBaseClicked,param_1,local_10);
    local_18 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseClicked,
               &local_18);
  }
  return;
}

// OnHandleButtonBaseDoubleClicked @ 14a7fcd90

void __thiscall
UCommonButtonGroupBase::OnHandleButtonBaseDoubleClicked
          (UCommonButtonGroupBase *this,UCommonButtonBase *param_1)

{
  UCommonButtonBase *local_18;
  int local_10;
  
  local_10 = FindButtonIndex(this,param_1);
  if (local_10 != -1) {
    TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>
                *)&this->NativeOnButtonBaseDoubleClicked,param_1,local_10);
    local_18 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnButtonBaseDoubleClicked,&local_18);
  }
  return;
}

// OnHandleButtonBaseLockClicked @ 14a7fce00

void __thiscall
UCommonButtonGroupBase::OnHandleButtonBaseLockClicked
          (UCommonButtonGroupBase *this,UCommonButtonBase *param_1)

{
  UCommonButtonBase *local_18;
  int local_10;
  
  local_10 = FindButtonIndex(this,param_1);
  if (local_10 != -1) {
    TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>
                *)&this->NativeOnButtonBaseLockClicked,param_1,local_10);
    local_18 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnButtonBaseLockClicked,&local_18);
  }
  return;
}

// OnHandleButtonBaseLockDoubleClicked @ 14a7fce70

void __thiscall
UCommonButtonGroupBase::OnHandleButtonBaseLockDoubleClicked
          (UCommonButtonGroupBase *this,UCommonButtonBase *param_1)

{
  UCommonButtonBase *local_18;
  int local_10;
  
  local_10 = FindButtonIndex(this,param_1);
  if (local_10 != -1) {
    TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>
                *)&this->NativeOnButtonBaseLockDoubleClicked,param_1,local_10);
    local_18 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnButtonBaseLockDoubleClicked,&local_18);
  }
  return;
}

// OnRemoveAll @ 14a7fe560

void __thiscall UCommonButtonGroupBase::OnRemoveAll(UCommonButtonGroupBase *this)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  UObject *this_00;
  TSubclassOf<UWidget> TVar4;
  int iVar5;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  
  this->SelectedButtonIndex = -1;
  bVar1 = this->bSelectionRequired;
  this->bSelectionRequired = false;
  if (0 < (this->Buttons).ArrayNum) {
    do {
      if (((this->Buttons).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (this->Buttons).ArrayNum;
      local_res8 = *(FWeakObjectPtr *)
                    ((this->Buttons).AllocatorInstance.Data + (longlong)iVar5 * 8 + -8);
      iVar5 = iVar5 + -1;
      (this->Buttons).ArrayNum = iVar5;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&(this->Buttons).AllocatorInstance,iVar5,&(this->Buttons).ArrayMax);
      this_00 = FWeakObjectPtr::Get(&local_res8);
      if (this_00 != (UObject *)0x0) {
        TVar4.Class.field0_0x0 =
             (TObjectPtr<UClass>)(**(code **)(this->_padding_ + 0x2b0))(this,local_res10);
        bVar3 = UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>((UObjectBaseUtility *)this_00,TVar4);
        if (bVar3) {
          (**(code **)(this->_padding_ + 0x2c0))(this);
        }
      }
    } while (0 < (this->Buttons).ArrayNum);
  }
  this->bSelectionRequired = bVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSelectionCleared,
             (void *)0x0);
  return;
}

// OnSelectionStateChangedBase @ 14a7fe6d0

void __thiscall
UCommonButtonGroupBase::OnSelectionStateChangedBase
          (UCommonButtonGroupBase *this,UCommonButtonBase *param_1,bool param_2)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  UCommonButtonBase *this_00;
  UObject *pUVar3;
  int iVar4;
  FWeakObjectPtr *this_01;
  undefined1 local_res18 [8];
  UCommonButtonBase *local_18;
  int local_10;
  
  if (param_2) {
    iVar4 = 0;
    this->SelectedButtonIndex = -1;
    if (0 < (this->Buttons).ArrayNum) {
      do {
        this_00 = GetButtonBaseAtIndex(this,iVar4);
        if (this_00 != (UCommonButtonBase *)0x0) {
          if (this_00 == param_1) {
            this->SelectedButtonIndex = iVar4;
          }
          else if (this_00->bSelected != 0) {
            UCommonButtonBase::SetSelectedInternal(this_00,false,true,true);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (this->Buttons).ArrayNum);
    }
    TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UCommonButtonBase_*,int),FDefaultDelegateUserPolicy>
                *)&this->NativeOnSelectedButtonBaseChanged,param_1,this->SelectedButtonIndex);
    local_10 = this->SelectedButtonIndex;
    local_18 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnSelectedButtonBaseChanged,&local_18);
    return;
  }
  this_01 = (FWeakObjectPtr *)(this->Buttons).AllocatorInstance.Data;
  iVar4 = (this->Buttons).ArrayNum;
  pFVar1 = this_01 + iVar4;
  while( true ) {
    if ((this->Buttons).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TWeakObjectPtr<UCommonButtonBase,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res18);
    }
    if (this_01 == pFVar1) break;
    bVar2 = FWeakObjectPtr::IsValid(this_01);
    if ((bVar2) && (pUVar3 = FWeakObjectPtr::Get(this_01), (pUVar3[0x1f].field_0x9 & 1) != 0)) {
      return;
    }
    this_01 = this_01 + 1;
  }
  this->SelectedButtonIndex = -1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->NativeOnSelectionCleared);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSelectionCleared,
             (void *)0x0);
  return;
}

// OnWidgetAdded @ 14a7ffee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UCommonButtonGroupBase::OnWidgetAdded(UCommonButtonGroupBase *this,UWidget *param_1)

{
  char *pcVar1;
  int *piVar2;
  FWeakObjectPtr *this_00;
  code *pcVar3;
  UCommonButtonGroupBase *pUVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UCommonButtonGroupBase *pUVar8;
  UObject *this_01;
  UFunction *pUVar9;
  UCommonButtonGroupBase *pUVar10;
  UCommonButtonGroupBase *pUVar11;
  <lambda_1> local_res10 [8];
  undefined8 local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FWeakObjectPtr local_f0;
  FName local_e8;
  FName local_e0;
  UCommonButtonGroupBase *local_d8;
  FName *local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  UWidget *local_98;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_90;
  FDestructionSentinel local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  if (param_1 == (UWidget *)0x0) {
    return;
  }
  pUVar7 = UCommonButtonBase::StaticClass();
  iVar6 = (int)pUVar7->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar6) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
      != &pUVar7->_padding_) {
    return;
  }
  pUVar11 = (UCommonButtonGroupBase *)0x0;
  pUVar8 = (UCommonButtonGroupBase *)
           strstr("&UCommonButtonGroupBase::OnSelectionStateChangedBase","::");
  pUVar10 = pUVar11;
  while (pUVar4 = pUVar8, pUVar4 != (UCommonButtonGroupBase *)0x0) {
    pUVar8 = (UCommonButtonGroupBase *)strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
    pUVar10 = pUVar4;
  }
  pcVar1 = (char *)((longlong)&pUVar10->_padding_ + 2);
  if (((pUVar10 == (UCommonButtonGroupBase *)0x0) || (*pcVar1 == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_e0,pcVar1);
  if ((this == (UCommonButtonGroupBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4e4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f0.ObjectIndex = 0;
  local_f0.ObjectSerialNumber = 0;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_res20 = local_e0;
  local_d8 = this;
  if ((this == (UCommonButtonGroupBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), local_d8 = pUVar11, bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_d8 != (UCommonButtonGroupBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_d8);
  local_e8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_f8,&local_68);
  local_res18 = 0;
  if ((local_e8 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_f0), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    pUVar9 = UObject::FindFunction(this_01,local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (pUVar9 != (UFunction *)0x0) goto LAB_14a8000eb;
  }
  local_d0 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*,bool>::
  __Internal_BindDynamic<UCommonButtonGroupBase>'::__l2::<lambda_1>::operator()(&local_d0);
LAB_14a8000eb:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_f8,&local_50);
  local_90.Object = local_f0;
  local_90.FunctionName = local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1[3]._padding_,
             (FWriteAccessScope *)&local_80);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&param_1[3]._padding_,&local_90);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&param_1[3]._padding_,local_res10,Default);
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
  pUVar8 = (UCommonButtonGroupBase *)
           strstr("&UCommonButtonGroupBase::OnHandleButtonBaseClicked","::");
  pUVar10 = pUVar11;
  while (pUVar4 = pUVar8, pUVar4 != (UCommonButtonGroupBase *)0x0) {
    pUVar8 = (UCommonButtonGroupBase *)strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
    pUVar10 = pUVar4;
  }
  pcVar1 = (char *)((longlong)&pUVar10->_padding_ + 2);
  if (((pUVar10 == (UCommonButtonGroupBase *)0x0) || (*pcVar1 == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_c8,pcVar1);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*>::
  __Internal_AddUniqueDynamic<UCommonButtonGroupBase>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*> *)
             &param_1[3]._padding_,this,(pmf_f076cadd)0x14a7b7f34,local_c8);
  pUVar8 = (UCommonButtonGroupBase *)
           strstr("&UCommonButtonGroupBase::OnHandleButtonBaseDoubleClicked","::");
  pUVar10 = pUVar11;
  while (pUVar4 = pUVar8, pUVar4 != (UCommonButtonGroupBase *)0x0) {
    pUVar8 = (UCommonButtonGroupBase *)strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
    pUVar10 = pUVar4;
  }
  pcVar1 = (char *)((longlong)&pUVar10->_padding_ + 2);
  if (((pUVar10 == (UCommonButtonGroupBase *)0x0) || (*pcVar1 == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_c0,pcVar1);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*>::
  __Internal_AddUniqueDynamic<UCommonButtonGroupBase>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*> *)
             &param_1[3].bIsEnabledDelegate.field_0x8,this,(pmf_f076cadd)0x14a7b7f44,local_c0);
  pUVar8 = (UCommonButtonGroupBase *)strstr("&UCommonButtonGroupBase::OnButtonBaseHovered","::");
  pUVar10 = pUVar11;
  while (pUVar4 = pUVar8, pUVar4 != (UCommonButtonGroupBase *)0x0) {
    pUVar8 = (UCommonButtonGroupBase *)strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
    pUVar10 = pUVar4;
  }
  pcVar1 = (char *)((longlong)&pUVar10->_padding_ + 2);
  if (((pUVar10 == (UCommonButtonGroupBase *)0x0) || (*pcVar1 == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_b8,pcVar1);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*>::
  __Internal_AddUniqueDynamic<UCommonButtonGroupBase>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*> *)
             &param_1[3].ToolTipTextDelegate.field_0x8,this,(pmf_f076cadd)0x14a7b7f54,local_b8);
  pUVar8 = (UCommonButtonGroupBase *)strstr("&UCommonButtonGroupBase::OnButtonBaseUnhovered","::");
  pUVar10 = pUVar11;
  while (pUVar4 = pUVar8, pUVar4 != (UCommonButtonGroupBase *)0x0) {
    pUVar8 = (UCommonButtonGroupBase *)strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
    pUVar10 = pUVar4;
  }
  pcVar1 = (char *)((longlong)&pUVar10->_padding_ + 2);
  if (((pUVar10 == (UCommonButtonGroupBase *)0x0) || (*pcVar1 == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_b0,pcVar1);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*>::
  __Internal_AddUniqueDynamic<UCommonButtonGroupBase>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*> *)
             &param_1[3].ToolTipText.Flags,this,(pmf_f076cadd)0x14a7b7f64,local_b0);
  pUVar8 = (UCommonButtonGroupBase *)
           strstr("&UCommonButtonGroupBase::OnHandleButtonBaseLockClicked","::");
  pUVar10 = pUVar11;
  while (pUVar4 = pUVar8, pUVar4 != (UCommonButtonGroupBase *)0x0) {
    pUVar8 = (UCommonButtonGroupBase *)strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
    pUVar10 = pUVar4;
  }
  pcVar1 = (char *)((longlong)&pUVar10->_padding_ + 2);
  if (((pUVar10 == (UCommonButtonGroupBase *)0x0) || (*pcVar1 == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_a8,pcVar1);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*>::
  __Internal_AddUniqueDynamic<UCommonButtonGroupBase>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*> *)
             ((longlong)&param_1[3].RenderTransform.Translation.field0_0x0 + 8),this,
             (pmf_f076cadd)0x14a7b7f74,local_a8);
  pUVar10 = (UCommonButtonGroupBase *)
            strstr("&UCommonButtonGroupBase::OnHandleButtonBaseLockDoubleClicked","::");
  while (pUVar8 = pUVar10, pUVar8 != (UCommonButtonGroupBase *)0x0) {
    pUVar10 = (UCommonButtonGroupBase *)strstr((char *)((longlong)&pUVar8->_padding_ + 1),"::");
    pUVar11 = pUVar8;
  }
  pcVar1 = (char *)((longlong)&pUVar11->_padding_ + 2);
  if (((pUVar11 == (UCommonButtonGroupBase *)0x0) || (*pcVar1 == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_a0,pcVar1);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*>::
  __Internal_AddUniqueDynamic<UCommonButtonGroupBase>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*> *)
             &param_1[3].RenderTransform.Shear,this,(pmf_f076cadd)0x14a7b7f84,local_a0);
  iVar6 = (this->Buttons).ArrayNum;
  piVar2 = &(this->Buttons).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->Buttons).AllocatorInstance,piVar2);
  }
  (this->Buttons).ArrayNum = iVar6 + 1;
  this_00 = (FWeakObjectPtr *)((this->Buttons).AllocatorInstance.Data + (longlong)iVar6 * 8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00->ObjectIndex = 0;
  this_00->ObjectSerialNumber = 0;
  local_98 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_98);
  if (((this->bSelectionRequired != false) && ((this->Buttons).ArrayNum == 1)) &&
     ((param_1[2].NativeBindings.ArrayNum & 0x100) == 0)) {
    UCommonButtonBase::SetSelectedInternal((UCommonButtonBase *)param_1,true,false,true);
  }
  return;
}

// OnWidgetRemoved @ 14a801540

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonButtonGroupBase::OnWidgetRemoved(UCommonButtonGroupBase *this,UWidget *param_1)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  char *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  UClass *pUVar7;
  char *pcVar8;
  UCommonButtonBase *pUVar9;
  char *pcVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  uint local_res18 [2];
  int local_res20;
  FWeakObjectPtr local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  if (param_1 != (UWidget *)0x0) {
    pUVar7 = UCommonButtonBase::StaticClass();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar7->_padding_)) {
      iVar6 = FindButtonIndex(this,(UCommonButtonBase *)param_1);
      pcVar10 = (char *)0x0;
      local_res20 = iVar6;
      pcVar8 = strstr("&UCommonButtonGroupBase::OnSelectionStateChangedBase","::");
      pcVar14 = pcVar10;
      while (pcVar3 = pcVar8, pcVar3 != (char *)0x0) {
        pcVar8 = strstr(pcVar3 + 1,"::");
        pcVar14 = pcVar3;
      }
      if (((pcVar14 == (char *)0x0) || (pcVar14[2] == '0')) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FName::FName(&local_88,pcVar14 + 2);
      if ((this == (UCommonButtonGroupBase *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && InMethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                             ,0x500,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[3]._padding_,
                 (UObject *)this,local_88);
      pcVar8 = strstr("&UCommonButtonGroupBase::OnHandleButtonBaseClicked","::");
      pcVar14 = pcVar10;
      while (pcVar3 = pcVar8, pcVar3 != (char *)0x0) {
        pcVar8 = strstr(pcVar3 + 1,"::");
        pcVar14 = pcVar3;
      }
      if (((pcVar14 == (char *)0x0) || (pcVar14[2] == '0')) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FName::FName(&local_80,pcVar14 + 2);
      if ((this == (UCommonButtonGroupBase *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && InMethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                             ,0x500,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[3]._padding_,
                 (UObject *)this,local_80);
      pcVar8 = strstr("&UCommonButtonGroupBase::OnHandleButtonBaseDoubleClicked","::");
      pcVar14 = pcVar10;
      while (pcVar3 = pcVar8, pcVar3 != (char *)0x0) {
        pcVar8 = strstr(pcVar3 + 1,"::");
        pcVar14 = pcVar3;
      }
      if (((pcVar14 == (char *)0x0) || (pcVar14[2] == '0')) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FName::FName(&local_78,pcVar14 + 2);
      if ((this == (UCommonButtonGroupBase *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && InMethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                             ,0x500,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &param_1[3].bIsEnabledDelegate.field_0x8,(UObject *)this,local_78);
      pcVar8 = strstr("&UCommonButtonGroupBase::OnButtonBaseHovered","::");
      pcVar14 = pcVar10;
      while (pcVar3 = pcVar8, pcVar3 != (char *)0x0) {
        pcVar8 = strstr(pcVar3 + 1,"::");
        pcVar14 = pcVar3;
      }
      if (((pcVar14 == (char *)0x0) || (pcVar14[2] == '0')) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FName::FName(&local_70,pcVar14 + 2);
      if ((this == (UCommonButtonGroupBase *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && InMethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                             ,0x500,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &param_1[3].ToolTipTextDelegate.field_0x8,(UObject *)this,local_70);
      pcVar8 = strstr("&UCommonButtonGroupBase::OnButtonBaseUnhovered","::");
      pcVar14 = pcVar10;
      while (pcVar3 = pcVar8, pcVar3 != (char *)0x0) {
        pcVar8 = strstr(pcVar3 + 1,"::");
        pcVar14 = pcVar3;
      }
      if (((pcVar14 == (char *)0x0) || (pcVar14[2] == '0')) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FName::FName(&local_68,pcVar14 + 2);
      if ((this == (UCommonButtonGroupBase *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && InMethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                             ,0x500,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &param_1[3].ToolTipText.Flags,(UObject *)this,local_68);
      pcVar8 = strstr("&UCommonButtonGroupBase::OnHandleButtonBaseLockClicked","::");
      pcVar14 = pcVar10;
      while (pcVar3 = pcVar8, pcVar3 != (char *)0x0) {
        pcVar8 = strstr(pcVar3 + 1,"::");
        pcVar14 = pcVar3;
      }
      if (((pcVar14 == (char *)0x0) || (pcVar14[2] == '0')) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FName::FName(&local_60,pcVar14 + 2);
      if ((this == (UCommonButtonGroupBase *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && InMethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                             ,0x500,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 ((longlong)&param_1[3].RenderTransform.Translation.field0_0x0 + 8),(UObject *)this,
                 local_60);
      pcVar8 = strstr("&UCommonButtonGroupBase::OnHandleButtonBaseLockDoubleClicked","::");
      pcVar14 = pcVar10;
      while (pcVar3 = pcVar8, pcVar3 != (char *)0x0) {
        pcVar8 = strstr(pcVar3 + 1,"::");
        pcVar14 = pcVar3;
      }
      if (((pcVar14 == (char *)0x0) || (pcVar14[2] == '0')) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FName::FName(local_58,pcVar14 + 2);
      if ((this == (UCommonButtonGroupBase *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && InMethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                             ,0x500,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &param_1[3].RenderTransform.Shear,(UObject *)this,local_58[0]);
      iVar11 = (this->Buttons).ArrayNum;
      if (iVar11 != 0) {
        pFVar1 = (FWeakObjectPtr *)(this->Buttons).AllocatorInstance.Data;
        local_98 = *pFVar1;
        bVar4 = TWeakObjectPtr<UCommonButtonBase,FWeakObjectPtr>::UEOpEquals<UCommonButtonBase,bool>
                          ((TWeakObjectPtr<UCommonButtonBase,FWeakObjectPtr> *)&local_98,
                           (UCommonButtonBase *)param_1);
        pcVar14 = pcVar10;
        pcVar8 = pcVar10;
        if ((bVar4) || (bVar4 = FWeakObjectPtr::IsValid(&local_98), !bVar4)) {
          bVar12 = 0;
        }
        else {
          bVar12 = 1;
        }
        do {
          local_res18[0] = (uint)pcVar14;
          uVar13 = local_res18[0];
          do {
            pcVar10 = pcVar10 + 1;
            uVar13 = uVar13 + 1;
            if ((longlong)iVar11 <= (longlong)pcVar10) break;
            local_90 = pFVar1[(longlong)pcVar10];
            bVar4 = TWeakObjectPtr<UCommonButtonBase,FWeakObjectPtr>::
                    UEOpEquals<UCommonButtonBase,bool>
                              ((TWeakObjectPtr<UCommonButtonBase,FWeakObjectPtr> *)&local_90,
                               (UCommonButtonBase *)param_1);
            if ((bVar4) || (bVar4 = FWeakObjectPtr::IsValid(&local_90), !bVar4)) {
              bVar5 = 0;
            }
            else {
              bVar5 = 1;
            }
          } while (bVar12 == bVar5);
          iVar6 = uVar13 - local_res18[0];
          if (bVar12 != 0) {
            uVar15 = (uint)pcVar8;
            if (uVar15 != local_res18[0]) {
              memmove(pFVar1 + (int)uVar15,pFVar1 + (int)local_res18[0],(longlong)iVar6 << 3);
            }
            pcVar8 = (char *)(ulonglong)(uVar15 + iVar6);
          }
          bVar12 = bVar12 ^ 1;
          pcVar14 = (char *)(ulonglong)uVar13;
        } while ((longlong)pcVar10 < (longlong)iVar11);
        (this->Buttons).ArrayNum = (int)pcVar8;
        iVar6 = local_res20;
      }
      iVar11 = 0;
      if ((param_1[2].NativeBindings.ArrayNum & 0x100) != 0) {
        UCommonButtonBase::SetSelectedInternal((UCommonButtonBase *)param_1,false,false,true);
      }
      if (iVar6 == this->SelectedButtonIndex) {
        this->SelectedButtonIndex = -1;
        if ((this->bSelectionRequired != false) && (0 < (this->Buttons).ArrayNum)) {
          while ((pUVar9 = GetButtonBaseAtIndex(this,iVar11), pUVar9 == (UCommonButtonBase *)0x0 ||
                 (pUVar9->bSelectable == '\0'))) {
            iVar11 = iVar11 + 1;
            if ((this->Buttons).ArrayNum <= iVar11) {
              `UCommonButtonGroupBase::OnWidgetRemoved'::__l14::<lambda_2>::operator()(local_res18);
              return;
            }
          }
          SelectButtonAtIndex(this,iVar11,true);
          return;
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSelectionCleared
                   ,(void *)0x0);
      }
    }
  }
  return;
}

// SelectButtonAtIndex @ 14a8153a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonButtonGroupBase::SelectButtonAtIndex(UCommonButtonGroupBase *this,int param_1,bool param_2)

{
  bool bVar1;
  UCommonButtonBase *this_00;
  
  if ((-1 < param_1) && (param_1 < (this->Buttons).ArrayNum)) {
    if ((param_1 != this->SelectedButtonIndex) &&
       (((this_00 = GetButtonBaseAtIndex(this,param_1), this_00 != (UCommonButtonBase *)0x0 &&
         (this_00->bSelected == 0)) && (bVar1 = UWidget::GetIsEnabled((UWidget *)this_00), bVar1))))
    {
      this->SelectedButtonIndex = param_1;
      UCommonButtonBase::SetSelectedInternal(this_00,true,param_2,true);
    }
    return;
  }
  DeselectAll(this);
  return;
}

// SelectNextButton @ 14a815440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UCommonButtonGroupBase::SelectNextButton(UCommonButtonGroupBase *this,bool param_1)

{
  undefined1 auStack_98 [32];
  bool local_78 [8];
  undefined4 local_70;
  int local_6c;
  int local_68 [4];
  undefined **local_58;
  undefined4 *local_50;
  int *local_48;
  UCommonButtonGroupBase *local_40;
  undefined ***local_38;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_6c = (this->Buttons).ArrayNum;
  local_58 = &std::
              _Func_impl_no_alloc<`UCommonButtonGroupBase::SelectNextButton'::`2'::<lambda_1>,void,int,bool>
              ::_vftable_;
  local_50 = &local_70;
  local_48 = &local_6c;
  local_38 = &local_58;
  local_20 = &local_58;
  local_68[0] = this->SelectedButtonIndex;
  local_70 = 0;
  local_78[0] = param_1;
  local_40 = this;
  std::
  _Func_impl_no_alloc<`UCommonButtonGroupBase::SelectNextButton'::__l2::<lambda_1>,void,int,bool>::
  _Do_call(&local_58,local_68,local_78);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  return;
}

// SelectPreviousButton @ 14a815500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UCommonButtonGroupBase::SelectPreviousButton(UCommonButtonGroupBase *this,bool param_1)

{
  undefined1 auStack_98 [32];
  bool local_78 [8];
  undefined4 local_70;
  int local_6c;
  int local_68 [4];
  undefined **local_58;
  undefined4 *local_50;
  int *local_48;
  UCommonButtonGroupBase *local_40;
  undefined ***local_38;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_6c = (this->Buttons).ArrayNum;
  local_58 = &std::
              _Func_impl_no_alloc<`UCommonButtonGroupBase::SelectPreviousButton'::`2'::<lambda_1>,void,int,bool>
              ::_vftable_;
  local_50 = &local_70;
  local_48 = &local_6c;
  local_38 = &local_58;
  local_20 = &local_58;
  local_68[0] = this->SelectedButtonIndex;
  local_70 = 0;
  local_78[0] = param_1;
  local_40 = this;
  std::
  _Func_impl_no_alloc<`UCommonButtonGroupBase::SelectPreviousButton'::__l2::<lambda_1>,void,int,bool>
  ::_Do_call(&local_58,local_68,local_78);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  return;
}

// SetSelectionRequired @ 14a81b470

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonButtonGroupBase::SetSelectionRequired(UCommonButtonGroupBase *this,bool param_1)

{
  bool bVar1;
  UCommonButtonBase *this_00;
  
  if ((((this->bSelectionRequired != param_1) && (this->bSelectionRequired = param_1, param_1)) &&
      (0 < (this->Buttons).ArrayNum)) &&
     (((this->SelectedButtonIndex < 0 &&
       (this_00 = GetButtonBaseAtIndex(this,0), this_00 != (UCommonButtonBase *)0x0)) &&
      ((this_00->bSelected == 0 && (bVar1 = UWidget::GetIsEnabled((UWidget *)this_00), bVar1)))))) {
    this->SelectedButtonIndex = 0;
    UCommonButtonBase::SetSelectedInternal(this_00,true,true,true);
  }
  return;
}

// StaticRegisterNativesUCommonButtonGroupBase @ 14a81e4a0

void __cdecl UCommonButtonGroupBase::StaticRegisterNativesUCommonButtonGroupBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x13;
  local_18.DataPtr = Z_Construct_UClass_UCommonButtonGroupBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDeselectAll @ 14a82cde0

void __cdecl UCommonButtonGroupBase::execDeselectAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DeselectAll((UCommonButtonGroupBase *)param_1);
  return;
}

// execFindButtonIndex @ 14a82cfd0

void __cdecl
UCommonButtonGroupBase::execFindButtonIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UCommonButtonBase *local_res10;
  
  local_res10 = (UCommonButtonBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FindButtonIndex((UCommonButtonGroupBase *)param_1,local_res10);
  *(int *)param_3 = iVar2;
  return;
}

// execGetButtonBaseAtIndex @ 14a82d560

void __cdecl
UCommonButtonGroupBase::execGetButtonBaseAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  longlong lVar5;
  uint uVar6;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)&param_1[0xb].field_0x8 <= (int)local_res8[0])) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar6 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[0xb].field_0x8) {
      uVar6 = ~local_res8[0] >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)(param_1 + 0xb) + lVar5 * 8));
    *(UObject **)param_3 = pUVar4;
  }
  return;
}

// execGetButtonCount @ 14a82d660

void __cdecl
UCommonButtonGroupBase::execGetButtonCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xb].field_0x8;
  return;
}

// execGetHoveredButtonIndex @ 14a82e080

void __cdecl
UCommonButtonGroupBase::execGetHoveredButtonIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xb].field_0x14;
  return;
}

// execGetSelectedButtonBase @ 14a82eeb0

void __cdecl
UCommonButtonGroupBase::execGetSelectedButtonBase(UObject *param_1,FFrame *param_2,void *param_3)

{
  UCommonButtonBase *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetButtonBaseAtIndex((UCommonButtonGroupBase *)param_1,*(int *)&param_1[0xb].field_0x10);
  *(UCommonButtonBase **)param_3 = pUVar1;
  return;
}

// execGetSelectedButtonIndex @ 14a82eef0

void __cdecl
UCommonButtonGroupBase::execGetSelectedButtonIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xb].field_0x10;
  return;
}

// execHasAnyButtons @ 14a830010

void __cdecl
UCommonButtonGroupBase::execHasAnyButtons(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = 0 < *(int *)&param_1[0xb].field_0x8;
  return;
}

// execOnButtonBaseHovered @ 14a830ac0

void __cdecl
UCommonButtonGroupBase::execOnButtonBaseHovered(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,local_res8);
  return;
}

// execOnButtonBaseUnhovered @ 14a830b50

void __cdecl
UCommonButtonGroupBase::execOnButtonBaseUnhovered(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2f0))(param_1,local_res8);
  return;
}

// execOnHandleButtonBaseClicked @ 14a830c10

void __cdecl
UCommonButtonGroupBase::execOnHandleButtonBaseClicked
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_res8);
  return;
}

// execOnHandleButtonBaseDoubleClicked @ 14a830ca0

void __cdecl
UCommonButtonGroupBase::execOnHandleButtonBaseDoubleClicked
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,local_res8);
  return;
}

// execOnHandleButtonBaseLockClicked @ 14a830d30

void __cdecl
UCommonButtonGroupBase::execOnHandleButtonBaseLockClicked
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2f8))(param_1,local_res8);
  return;
}

// execOnHandleButtonBaseLockDoubleClicked @ 14a830dc0

void __cdecl
UCommonButtonGroupBase::execOnHandleButtonBaseLockDoubleClicked
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x300))(param_1,local_res8);
  return;
}

// execOnSelectionStateChangedBase @ 14a830f10

void __cdecl
UCommonButtonGroupBase::execOnSelectionStateChangedBase
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,local_res10,local_res8[0] != 0);
  return;
}

// execSelectButtonAtIndex @ 14a831a60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonButtonGroupBase::execSelectButtonAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  bool bVar3;
  UCommonButtonBase *this;
  bool bVar4;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res20[0];
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20[0] < 0) || (*(int *)&param_1[0xb].field_0x8 <= local_res20[0])) {
    DeselectAll((UCommonButtonGroupBase *)param_1);
  }
  else if (local_res20[0] != *(int *)&param_1[0xb].field_0x10) {
    this = GetButtonBaseAtIndex((UCommonButtonGroupBase *)param_1,local_res20[0]);
    if ((this != (UCommonButtonBase *)0x0) && (this->bSelected == 0)) {
      bVar3 = UWidget::GetIsEnabled((UWidget *)this);
      if (bVar3) {
        *(int *)&param_1[0xb].field_0x10 = iVar2;
        UCommonButtonBase::SetSelectedInternal(this,true,bVar4,true);
        return;
      }
    }
  }
  return;
}

// execSelectNextButton @ 14a831b90

void __cdecl
UCommonButtonGroupBase::execSelectNextButton(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SelectNextButton((UCommonButtonGroupBase *)param_1,local_res10[0] != 0);
  return;
}

// execSelectPreviousButton @ 14a831c20

void __cdecl
UCommonButtonGroupBase::execSelectPreviousButton(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SelectPreviousButton((UCommonButtonGroupBase *)param_1,local_res10[0] != 0);
  return;
}

// execSetSelectionRequired @ 14a8357d0

void __cdecl
UCommonButtonGroupBase::execSetSelectionRequired(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSelectionRequired((UCommonButtonGroupBase *)param_1,local_res10[0] != 0);
  return;
}

// operator() @ 150555260

bool __thiscall `UCommonButtonGroupBase::DeselectAll'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4283770788705730600>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4283770788705730600>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150555a10

bool __thiscall `UCommonButtonGroupBase::OnWidgetRemoved'::__l14::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4283770788705730823>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4283770788705730823>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

