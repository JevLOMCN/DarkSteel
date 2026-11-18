// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14defe800

UClass * __cdecl UIKRigProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigProcessor",
               &Z_Registration_Info_UClass_UIKRigProcessor.InnerSingleton,
               StaticRegisterNativesUIKRigProcessor,0x188,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UIKRigProcessor>,InternalVTableHelperCtorCaller<UIKRigProcessor>
               ,local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigProcessor.InnerSingleton;
}

// UIKRigProcessor @ 14df1a3d0

UIKRigProcessor * __thiscall
UIKRigProcessor::UIKRigProcessor(UIKRigProcessor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIKRigProcessor__6B_;
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
  FIKRigProcessor::FIKRigProcessor(&this->Processor);
  return this;
}

// UIKRigProcessor @ 14df1a420

UIKRigProcessor * __thiscall
UIKRigProcessor::UIKRigProcessor(UIKRigProcessor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIKRigProcessor__6B_;
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
  FIKRigProcessor::FIKRigProcessor(&this->Processor);
  return this;
}

// ~UIKRigProcessor @ 14df1c780

void __thiscall UIKRigProcessor::~UIKRigProcessor(UIKRigProcessor *this)

{
  this->_padding_ = (longlong)&___7UIKRigProcessor__6B_;
  FIKRigProcessor::~FIKRigProcessor(&this->Processor);
  FIKRigLogger::~FIKRigLogger(&this->Log);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3d4e0

UClass * __cdecl UIKRigProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigProcessor",
               &Z_Registration_Info_UClass_UIKRigProcessor.InnerSingleton,
               StaticRegisterNativesUIKRigProcessor,0x188,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UIKRigProcessor>,InternalVTableHelperCtorCaller<UIKRigProcessor>
               ,local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigProcessor.InnerSingleton;
}

// StaticRegisterNativesUIKRigProcessor @ 14df5a220

void __cdecl UIKRigProcessor::StaticRegisterNativesUIKRigProcessor(void)

{
  return;
}

