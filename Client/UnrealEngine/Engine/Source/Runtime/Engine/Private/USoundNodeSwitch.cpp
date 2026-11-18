// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 14867afc0

UClass * __cdecl USoundNodeSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeSwitch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeSwitch",
               &Z_Registration_Info_UClass_USoundNodeSwitch.InnerSingleton,
               StaticRegisterNativesUSoundNodeSwitch,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<USoundNodeSwitch>,
               InternalVTableHelperCtorCaller<USoundNodeSwitch>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeSwitch.InnerSingleton;
}

// USoundNodeSwitch @ 148697c90

USoundNodeSwitch * __thiscall
USoundNodeSwitch::USoundNodeSwitch(USoundNodeSwitch *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeSwitch__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->IntParameterName).ComparisonIndex = 0;
  (this->IntParameterName).Number = 0;
  return this;
}

// USoundNodeSwitch @ 148697cd0

USoundNodeSwitch * __thiscall
USoundNodeSwitch::USoundNodeSwitch(USoundNodeSwitch *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeSwitch__6B_;
  (this->IntParameterName).ComparisonIndex = 0;
  (this->IntParameterName).Number = 0;
  return this;
}

// ~USoundNodeSwitch @ 14869bdc0

void __thiscall USoundNodeSwitch::~USoundNodeSwitch(USoundNodeSwitch *this)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateStartingConnectors @ 1486af560

void __thiscall USoundNodeSwitch::CreateStartingConnectors(USoundNodeSwitch *this)

{
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x0001486af5a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
  return;
}

// GetMaxChildNodes @ 1486c12d0

int __thiscall USoundNodeSwitch::GetMaxChildNodes(USoundNodeSwitch *this)

{
  return 0x20;
}

// GetMinChildNodes @ 1486c1af0

int __thiscall USoundNodeSwitch::GetMinChildNodes(USoundNodeSwitch *this)

{
  return 1;
}

// GetPrivateStaticClass @ 1486c55f0

UClass * __cdecl USoundNodeSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeSwitch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeSwitch",
               &Z_Registration_Info_UClass_USoundNodeSwitch.InnerSingleton,
               StaticRegisterNativesUSoundNodeSwitch,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<USoundNodeSwitch>,
               InternalVTableHelperCtorCaller<USoundNodeSwitch>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeSwitch.InnerSingleton;
}

// ParseNodes @ 1486ded50

void __thiscall
USoundNodeSwitch::ParseNodes
          (USoundNodeSwitch *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  IParameterTransmitter *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  ulong64 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  uint local_b8;
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
  
  pIVar2 = (param_3->InstanceTransmitter).Object;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
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
  cVar5 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,this->IntParameterName,&local_c8);
  if (cVar5 != '\0') {
    local_b8 = local_b8 + 1;
  }
  if (((int)local_b8 < 0) || ((int)this->_padding_ <= (int)local_b8)) {
    local_b8 = 0;
  }
  iVar1 = (int)this->_padding_;
  if ((int)local_b8 < iVar1) {
    lVar9 = (longlong)(int)local_b8;
    uVar8 = 0;
    if ((int)local_b8 < iVar1) {
      uVar8 = ~local_b8 >> 0x1f;
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
    if (*(longlong *)(this->_padding_ + lVar9 * 8) != 0) {
      lVar9 = (longlong)(int)local_b8;
      uVar8 = 0;
      if ((int)local_b8 < (int)this->_padding_) {
        uVar8 = ~local_b8 >> 0x1f;
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
      plVar3 = *(longlong **)(this->_padding_ + lVar9 * 8);
      lVar9 = (longlong)(int)local_b8;
      pcVar4 = *(code **)(*plVar3 + 0x2f0);
      uVar8 = 0;
      if ((int)local_b8 < (int)this->_padding_) {
        uVar8 = ~local_b8 >> 0x1f;
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
      uVar7 = USoundNode::GetNodeWaveInstanceHash
                        (param_2,*(USoundNode **)(this->_padding_ + lVar9 * 8),local_b8);
      (*pcVar4)(plVar3,param_1,uVar7,param_3,param_4,param_5);
    }
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

// StaticRegisterNativesUSoundNodeSwitch @ 1486f1a00

void __cdecl USoundNodeSwitch::StaticRegisterNativesUSoundNodeSwitch(void)

{
  return;
}

