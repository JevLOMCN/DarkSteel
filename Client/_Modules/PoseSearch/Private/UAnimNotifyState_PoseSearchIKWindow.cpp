// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a895210

UClass * __cdecl UAnimNotifyState_PoseSearchIKWindow::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchIKWindow",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchIKWindow,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_PoseSearchIKWindow>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchIKWindow>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.InnerSingleton;
}

// UAnimNotifyState_PoseSearchIKWindow @ 14a8acba0

UAnimNotifyState_PoseSearchIKWindow * __thiscall
UAnimNotifyState_PoseSearchIKWindow::UAnimNotifyState_PoseSearchIKWindow
          (UAnimNotifyState_PoseSearchIKWindow *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchIKWindow__6B_;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  return this;
}

// UAnimNotifyState_PoseSearchIKWindow @ 14a8acbe0

UAnimNotifyState_PoseSearchIKWindow * __thiscall
UAnimNotifyState_PoseSearchIKWindow::UAnimNotifyState_PoseSearchIKWindow
          (UAnimNotifyState_PoseSearchIKWindow *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchIKWindow__6B_;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  return this;
}

// ~UAnimNotifyState_PoseSearchIKWindow @ 14a8adf70

void __thiscall
UAnimNotifyState_PoseSearchIKWindow::~UAnimNotifyState_PoseSearchIKWindow
          (UAnimNotifyState_PoseSearchIKWindow *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchIKWindow__6B_;
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14a8bc9d0

UClass * __cdecl UAnimNotifyState_PoseSearchIKWindow::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchIKWindow",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchIKWindow,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_PoseSearchIKWindow>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchIKWindow>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchIKWindow.InnerSingleton;
}

// StaticRegisterNativesUAnimNotifyState_PoseSearchIKWindow @ 14a8ce260

void __cdecl
UAnimNotifyState_PoseSearchIKWindow::StaticRegisterNativesUAnimNotifyState_PoseSearchIKWindow(void)

{
  return;
}

