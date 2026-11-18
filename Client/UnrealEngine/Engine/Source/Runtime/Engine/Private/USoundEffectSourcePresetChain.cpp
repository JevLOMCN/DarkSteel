// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 14732b3a0

UClass * __cdecl USoundEffectSourcePresetChain::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectSourcePresetChain.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectSourcePresetChain",
               &Z_Registration_Info_UClass_USoundEffectSourcePresetChain.InnerSingleton,
               StaticRegisterNativesUSoundEffectSourcePresetChain,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundEffectSourcePresetChain>,
               InternalVTableHelperCtorCaller<USoundEffectSourcePresetChain>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectSourcePresetChain.InnerSingleton;
}

// USoundEffectSourcePresetChain @ 147331040

USoundEffectSourcePresetChain * __thiscall
USoundEffectSourcePresetChain::USoundEffectSourcePresetChain
          (USoundEffectSourcePresetChain *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundEffectSourcePresetChain__6B_;
  (this->Chain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chain).ArrayNum = 0;
  (this->Chain).ArrayMax = 0;
  return this;
}

// USoundEffectSourcePresetChain @ 147331080

USoundEffectSourcePresetChain * __thiscall
USoundEffectSourcePresetChain::USoundEffectSourcePresetChain
          (USoundEffectSourcePresetChain *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundEffectSourcePresetChain__6B_;
  (this->Chain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chain).ArrayNum = 0;
  (this->Chain).ArrayMax = 0;
  return this;
}

// ~USoundEffectSourcePresetChain @ 147331480

void __thiscall
USoundEffectSourcePresetChain::~USoundEffectSourcePresetChain(USoundEffectSourcePresetChain *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundEffectSourcePresetChain__6B_;
  pFVar1 = (this->Chain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147332b60

UClass * __cdecl USoundEffectSourcePresetChain::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectSourcePresetChain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectSourcePresetChain",
               &Z_Registration_Info_UClass_USoundEffectSourcePresetChain.InnerSingleton,
               StaticRegisterNativesUSoundEffectSourcePresetChain,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundEffectSourcePresetChain>,
               InternalVTableHelperCtorCaller<USoundEffectSourcePresetChain>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectSourcePresetChain.InnerSingleton;
}

// StaticRegisterNativesUSoundEffectSourcePresetChain @ 147333440

void __cdecl USoundEffectSourcePresetChain::StaticRegisterNativesUSoundEffectSourcePresetChain(void)

{
  return;
}

// AddReferencedEffects @ 1486a5ce0

void __thiscall
USoundEffectSourcePresetChain::AddReferencedEffects
          (USoundEffectSourcePresetChain *this,FReferenceCollector *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  code *local_58 [2];
  undefined **local_48;
  FReferenceCollector *local_40;
  undefined8 local_30;
  
  iVar1 = (this->Chain).ArrayNum;
  pFVar2 = (this->Chain).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Chain).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSourceEffectChainEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(USoundEffectPreset **)pFVar2 != (USoundEffectPreset *)0x0) {
      local_30 = 0;
      local_48 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`USoundEffectPreset::AddReferencedEffects'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USoundEffectPreset::AddReferencedEffects'::__l2::<lambda_1>,void,FSoundEffectBase_&>
                    ::Call;
      local_40 = param_1;
      USoundEffectPreset::IterateEffects<FSoundEffectBase>
                (*(USoundEffectPreset **)pFVar2,
                 (TFunction<void___cdecl(FSoundEffectBase_&)> *)local_58);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// GetSupportedChannelCount @ 1486c8bb0

int __thiscall
USoundEffectSourcePresetChain::GetSupportedChannelCount(USoundEffectSourcePresetChain *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Chain).ArrayNum;
  pFVar3 = (this->Chain).AllocatorInstance.Data;
  iVar5 = 9;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->Chain).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSourceEffectChainEntry_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      iVar1 = (**(code **)(**(longlong **)pFVar3 + 0x2f8))();
      if (iVar1 < iVar5) {
        iVar5 = iVar1;
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  iVar2 = 2;
  if (iVar5 < 9) {
    iVar2 = iVar5;
  }
  return iVar2;
}

// SupportsChannelCount @ 1486f22f0

bool __thiscall
USoundEffectSourcePresetChain::SupportsChannelCount(USoundEffectSourcePresetChain *this,int param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res10 [8];
  
  iVar2 = (this->Chain).ArrayNum;
  pFVar3 = (this->Chain).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x10;
  iVar5 = 9;
  while( true ) {
    if ((this->Chain).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSourceEffectChainEntry_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar3 == pFVar4) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      iVar1 = (**(code **)(**(longlong **)pFVar3 + 0x2f8))();
      if (iVar1 < iVar5) {
        iVar5 = iVar1;
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  iVar2 = 2;
  if (iVar5 < 9) {
    iVar2 = iVar5;
  }
  return param_1 <= iVar2;
}

