// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca6d10

UClass * __cdecl UEasyParticleAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleAsset",
               &Z_Registration_Info_UClass_UEasyParticleAsset.InnerSingleton,
               StaticRegisterNativesUEasyParticleAsset,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEasyParticleAsset>,
               InternalVTableHelperCtorCaller<UEasyParticleAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleAsset.InnerSingleton;
}

// UEasyParticleAsset @ 14aca9500

UEasyParticleAsset * __thiscall
UEasyParticleAsset::UEasyParticleAsset(UEasyParticleAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleAsset__6B_;
  (this->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Emitters).ArrayNum = 0;
  (this->Emitters).ArrayMax = 0;
  return this;
}

// ~UEasyParticleAsset @ 14acaa420

void __thiscall UEasyParticleAsset::~UEasyParticleAsset(UEasyParticleAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEasyParticleAsset__6B_;
  pFVar1 = (this->Emitters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acac230

UClass * __cdecl UEasyParticleAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleAsset",
               &Z_Registration_Info_UClass_UEasyParticleAsset.InnerSingleton,
               StaticRegisterNativesUEasyParticleAsset,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEasyParticleAsset>,
               InternalVTableHelperCtorCaller<UEasyParticleAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleAsset.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleAsset @ 14acae180

void __cdecl UEasyParticleAsset::StaticRegisterNativesUEasyParticleAsset(void)

{
  return;
}

// UEasyParticleAsset @ 14acb5d50

UEasyParticleAsset * __thiscall
UEasyParticleAsset::UEasyParticleAsset(UEasyParticleAsset *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UEasyParticleAsset *pUVar8;
  FName local_res8;
  UObject *local_18 [2];
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleAsset__6B_;
  (this->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Emitters).ArrayNum = 0;
  (this->Emitters).ArrayMax = 0;
  pFVar6 = ::FName::FName(&local_res8,"BasicAsset");
  FVar1 = *pFVar6;
  pUVar7 = Z_Construct_UClass_UEasyParticleEmitterAsset_NoRegister();
  local_18[0] = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar7,pUVar7,true,false);
  pFVar2 = (this->Emitters).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Emitters).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UEasyParticleAsset *)(*pcVar3)();
      return pUVar8;
    }
  }
  iVar5 = (this->Emitters).ArrayNum;
  if (iVar5 == (this->Emitters).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Emitters).AllocatorInstance,&(this->Emitters).ArrayMax);
  }
  (this->Emitters).ArrayNum = iVar5 + 1;
  *(UObject **)((this->Emitters).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return this;
}

