// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147315cc0

UClass * __cdecl UParticleSystemReplay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleSystemReplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleSystemReplay",
               &Z_Registration_Info_UClass_UParticleSystemReplay.InnerSingleton,
               StaticRegisterNativesUParticleSystemReplay,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleSystemReplay>,
               InternalVTableHelperCtorCaller<UParticleSystemReplay>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleSystemReplay.InnerSingleton;
}

// UParticleSystemReplay @ 1473193d0

UParticleSystemReplay * __thiscall
UParticleSystemReplay::UParticleSystemReplay(UParticleSystemReplay *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleSystemReplay__6B_;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  return this;
}

// ~UParticleSystemReplay @ 147319cc0

void __thiscall UParticleSystemReplay::~UParticleSystemReplay(UParticleSystemReplay *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleSystemReplay__6B_;
  DestructItems<FParticleSystemReplayFrame,int>
            ((FParticleSystemReplayFrame *)(this->Frames).AllocatorInstance.Data,
             (this->Frames).ArrayNum);
  pFVar1 = (this->Frames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14731cd30

UClass * __cdecl UParticleSystemReplay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleSystemReplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleSystemReplay",
               &Z_Registration_Info_UClass_UParticleSystemReplay.InnerSingleton,
               StaticRegisterNativesUParticleSystemReplay,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleSystemReplay>,
               InternalVTableHelperCtorCaller<UParticleSystemReplay>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleSystemReplay.InnerSingleton;
}

// Serialize @ 14731cf00

void __thiscall
UParticleSystemReplay::Serialize(UParticleSystemReplay *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUParticleSystemReplay @ 14731d160

void __cdecl UParticleSystemReplay::StaticRegisterNativesUParticleSystemReplay(void)

{
  return;
}

// UParticleSystemReplay @ 14815f760

UParticleSystemReplay * __thiscall
UParticleSystemReplay::UParticleSystemReplay
          (UParticleSystemReplay *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleSystemReplay__6B_;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  return this;
}

// Serialize @ 148194d90

void __thiscall UParticleSystemReplay::Serialize(UParticleSystemReplay *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Particles,true);
  UObject::Serialize((UObject *)this,param_1);
  piVar1 = &this->ClipIDNumber;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FParticleSystemReplayFrame,TSizedDefaultAllocator<32>_>
            (param_1,&this->Frames);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

