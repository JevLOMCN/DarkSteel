// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14dee9510

UClass * __cdecl UIKRetargetProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetProcessor",
               &Z_Registration_Info_UClass_UIKRetargetProcessor.InnerSingleton,
               StaticRegisterNativesUIKRetargetProcessor,0x280,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRetargetProcessor>,
               InternalVTableHelperCtorCaller<UIKRetargetProcessor>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetProcessor.InnerSingleton;
}

// UIKRetargetProcessor @ 14df19440

UIKRetargetProcessor * __thiscall
UIKRetargetProcessor::UIKRetargetProcessor(UIKRetargetProcessor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIKRetargetProcessor__6B_;
  (this->DummyGlobalSettings).bEnableRoot = true;
  (this->DummyGlobalSettings).bEnableFK = true;
  (this->DummyGlobalSettings).bEnableIK = true;
  (this->DummyGlobalSettings).bEnablePost = true;
  (this->Log).LogName.ComparisonIndex = 0;
  (this->Log).LogName.Number = 0;
  (this->Log).Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Errors.ArrayNum = 0;
  (this->Log).Errors.ArrayMax = 0;
  (this->Log).Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Warnings.ArrayNum = 0;
  (this->Log).Warnings.ArrayMax = 0;
  (this->Log).Messages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Messages.ArrayNum = 0;
  (this->Log).Messages.ArrayMax = 0;
  (this->DummyGlobalSettings).bCopyBasePose = false;
  (this->DummyGlobalSettings).CopyBasePoseRoot.ComparisonIndex = 0;
  (this->DummyGlobalSettings).CopyBasePoseRoot.Number = 0;
  (this->DummyGlobalSettings).SourceScaleFactor = 1.0;
  (this->DummyGlobalSettings).bWarping = false;
  (this->DummyGlobalSettings).DirectionSource = Goals;
  (this->DummyGlobalSettings).ForwardDirection = Y;
  (this->DummyGlobalSettings).DirectionChain.ComparisonIndex = 0;
  (this->DummyGlobalSettings).DirectionChain.Number = 0;
  (this->DummyGlobalSettings).WarpForwards = 1.0;
  (this->DummyGlobalSettings).SidewaysOffset = 0.0;
  (this->DummyGlobalSettings).WarpSplay = 1.0;
  (this->DummyStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DummyStack).ArrayNum = 0;
  (this->DummyStack).ArrayMax = 0;
  FIKRetargetProcessor::FIKRetargetProcessor(&this->Processor);
  return this;
}

// UIKRetargetProcessor @ 14df194e0

UIKRetargetProcessor * __thiscall
UIKRetargetProcessor::UIKRetargetProcessor(UIKRetargetProcessor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIKRetargetProcessor__6B_;
  (this->DummyGlobalSettings).bEnableRoot = true;
  (this->DummyGlobalSettings).bEnableFK = true;
  (this->DummyGlobalSettings).bEnableIK = true;
  (this->DummyGlobalSettings).bEnablePost = true;
  (this->Log).LogName.ComparisonIndex = 0;
  (this->Log).LogName.Number = 0;
  (this->Log).Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Errors.ArrayNum = 0;
  (this->Log).Errors.ArrayMax = 0;
  (this->Log).Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Warnings.ArrayNum = 0;
  (this->Log).Warnings.ArrayMax = 0;
  (this->Log).Messages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Messages.ArrayNum = 0;
  (this->Log).Messages.ArrayMax = 0;
  (this->DummyGlobalSettings).bCopyBasePose = false;
  (this->DummyGlobalSettings).CopyBasePoseRoot.ComparisonIndex = 0;
  (this->DummyGlobalSettings).CopyBasePoseRoot.Number = 0;
  (this->DummyGlobalSettings).SourceScaleFactor = 1.0;
  (this->DummyGlobalSettings).bWarping = false;
  (this->DummyGlobalSettings).DirectionSource = Goals;
  (this->DummyGlobalSettings).ForwardDirection = Y;
  (this->DummyGlobalSettings).DirectionChain.ComparisonIndex = 0;
  (this->DummyGlobalSettings).DirectionChain.Number = 0;
  (this->DummyGlobalSettings).WarpForwards = 1.0;
  (this->DummyGlobalSettings).SidewaysOffset = 0.0;
  (this->DummyGlobalSettings).WarpSplay = 1.0;
  (this->DummyStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DummyStack).ArrayNum = 0;
  (this->DummyStack).ArrayMax = 0;
  FIKRetargetProcessor::FIKRetargetProcessor(&this->Processor);
  return this;
}

// ~UIKRetargetProcessor @ 14df1c360

void __thiscall UIKRetargetProcessor::~UIKRetargetProcessor(UIKRetargetProcessor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UIKRetargetProcessor__6B_;
  FIKRetargetProcessor::~FIKRetargetProcessor(&this->Processor);
  pFVar1 = (this->DummyStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FIKRigLogger::~FIKRigLogger(&this->Log);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3c920

UClass * __cdecl UIKRetargetProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetProcessor",
               &Z_Registration_Info_UClass_UIKRetargetProcessor.InnerSingleton,
               StaticRegisterNativesUIKRetargetProcessor,0x280,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRetargetProcessor>,
               InternalVTableHelperCtorCaller<UIKRetargetProcessor>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetProcessor.InnerSingleton;
}

// StaticRegisterNativesUIKRetargetProcessor @ 14df59eb0

void __cdecl UIKRetargetProcessor::StaticRegisterNativesUIKRetargetProcessor(void)

{
  return;
}

