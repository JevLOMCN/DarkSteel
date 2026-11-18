// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1473c94f0

UClass * __cdecl UAnimBoneCompressionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBoneCompressionSettings",
               &Z_Registration_Info_UClass_UAnimBoneCompressionSettings.InnerSingleton,
               StaticRegisterNativesUAnimBoneCompressionSettings,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBoneCompressionSettings>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionSettings.InnerSingleton;
}

// UAnimBoneCompressionSettings @ 1473d8460

UAnimBoneCompressionSettings * __thiscall
UAnimBoneCompressionSettings::UAnimBoneCompressionSettings
          (UAnimBoneCompressionSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimBoneCompressionSettings__6B_;
  (this->Codecs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Codecs).ArrayNum = 0;
  (this->Codecs).ArrayMax = 0;
  return this;
}

// UAnimBoneCompressionSettings @ 1473d84a0

UAnimBoneCompressionSettings * __thiscall
UAnimBoneCompressionSettings::UAnimBoneCompressionSettings
          (UAnimBoneCompressionSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimBoneCompressionSettings__6B_;
  (this->Codecs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Codecs).ArrayNum = 0;
  (this->Codecs).ArrayMax = 0;
  return this;
}

// ~UAnimBoneCompressionSettings @ 1473db370

void __thiscall
UAnimBoneCompressionSettings::~UAnimBoneCompressionSettings(UAnimBoneCompressionSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimBoneCompressionSettings__6B_;
  pFVar1 = (this->Codecs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetCodec @ 147400610

UAnimBoneCompressionCodec * __thiscall
UAnimBoneCompressionSettings::GetCodec(UAnimBoneCompressionSettings *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  UAnimBoneCompressionCodec *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Codecs).AllocatorInstance.Data;
  iVar2 = (this->Codecs).ArrayNum;
  pUVar4 = (UAnimBoneCompressionCodec *)0x0;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Codecs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAnimBoneCompressionCodec>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((pFVar5 == pFVar1) ||
       ((plVar3 = *(longlong **)pFVar5, plVar3 != (longlong *)0x0 &&
        (pUVar4 = (UAnimBoneCompressionCodec *)(**(code **)(*plVar3 + 0x2b0))(plVar3,param_1),
        pUVar4 != (UAnimBoneCompressionCodec *)0x0)))) break;
    pFVar5 = pFVar5 + 8;
  }
  return pUVar4;
}

// GetPrivateStaticClass @ 147403990

UClass * __cdecl UAnimBoneCompressionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBoneCompressionSettings",
               &Z_Registration_Info_UClass_UAnimBoneCompressionSettings.InnerSingleton,
               StaticRegisterNativesUAnimBoneCompressionSettings,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBoneCompressionSettings>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionSettings.InnerSingleton;
}

// StaticRegisterNativesUAnimBoneCompressionSettings @ 147419bc0

void __cdecl UAnimBoneCompressionSettings::StaticRegisterNativesUAnimBoneCompressionSettings(void)

{
  return;
}

