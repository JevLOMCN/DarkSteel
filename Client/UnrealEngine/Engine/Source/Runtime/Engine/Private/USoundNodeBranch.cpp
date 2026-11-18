// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 14867a880

UClass * __cdecl USoundNodeBranch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeBranch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeBranch",
               &Z_Registration_Info_UClass_USoundNodeBranch.InnerSingleton,
               StaticRegisterNativesUSoundNodeBranch,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<USoundNodeBranch>,
               InternalVTableHelperCtorCaller<USoundNodeBranch>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeBranch.InnerSingleton;
}

// USoundNodeBranch @ 1486972f0

USoundNodeBranch * __thiscall
USoundNodeBranch::USoundNodeBranch(USoundNodeBranch *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeBranch__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BoolParameterName).ComparisonIndex = 0;
  (this->BoolParameterName).Number = 0;
  return this;
}

// USoundNodeBranch @ 148697330

USoundNodeBranch * __thiscall
USoundNodeBranch::USoundNodeBranch(USoundNodeBranch *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeBranch__6B_;
  (this->BoolParameterName).ComparisonIndex = 0;
  (this->BoolParameterName).Number = 0;
  return this;
}

// ~USoundNodeBranch @ 14869b800

void __thiscall USoundNodeBranch::~USoundNodeBranch(USoundNodeBranch *this)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetMaxChildNodes @ 1486c1200

int __thiscall USoundNodeBranch::GetMaxChildNodes(USoundNodeBranch *this)

{
  return 3;
}

// GetMinChildNodes @ 1486c1a90

int __thiscall USoundNodeBranch::GetMinChildNodes(USoundNodeBranch *this)

{
  return 3;
}

// GetPrivateStaticClass @ 1486c4870

UClass * __cdecl USoundNodeBranch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeBranch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeBranch",
               &Z_Registration_Info_UClass_USoundNodeBranch.InnerSingleton,
               StaticRegisterNativesUSoundNodeBranch,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<USoundNodeBranch>,
               InternalVTableHelperCtorCaller<USoundNodeBranch>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeBranch.InnerSingleton;
}

// ParseNodes @ 1486da830

void __thiscall
USoundNodeBranch::ParseNodes
          (USoundNodeBranch *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  IParameterTransmitter *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  ulong64 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 local_c8;
  undefined4 local_c0;
  char local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  FString *local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  TSharedPtr<Audio::IProxyData,1> *local_38;
  undefined8 local_30;
  
  uVar7 = 2;
  pIVar1 = (param_3->InstanceTransmitter).Object;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = '\0';
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = (FString *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_38 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
  local_30 = 0;
  cVar4 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,this->BoolParameterName,&local_c8);
  if (cVar4 != '\0') {
    uVar7 = (uint)(local_bc == '\0');
  }
  if (((int)uVar7 < (int)this->_padding_) &&
     (uVar8 = (ulonglong)uVar7, *(longlong *)(this->_padding_ + uVar8 * 8) != 0)) {
    if ((int)this->_padding_ <= (int)uVar7) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = *(longlong **)(this->_padding_ + uVar8 * 8);
    pcVar3 = *(code **)(*plVar2 + 0x2f0);
    if ((int)this->_padding_ <= (int)uVar7) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = USoundNode::GetNodeWaveInstanceHash
                      (param_2,*(USoundNode **)(this->_padding_ + uVar8 * 8),uVar7);
    (*pcVar3)(plVar2,param_1,uVar6,param_3,param_4,param_5);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(local_38,(int)local_30);
  if (local_38 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<FString,int>(local_58,(int)local_50);
  if (local_58 != (FString *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// RemoveChildNode @ 1486e81c0

void __thiscall USoundNodeBranch::RemoveChildNode(USoundNodeBranch *this,int param_1)

{
  return;
}

// StaticRegisterNativesUSoundNodeBranch @ 1486f18e0

void __cdecl USoundNodeBranch::StaticRegisterNativesUSoundNodeBranch(void)

{
  return;
}

