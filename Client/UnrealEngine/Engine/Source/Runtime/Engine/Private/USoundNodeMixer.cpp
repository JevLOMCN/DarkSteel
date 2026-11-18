// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 148677320

UClass * __cdecl USoundNodeMixer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeMixer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeMixer",
               &Z_Registration_Info_UClass_USoundNodeMixer.InnerSingleton,
               StaticRegisterNativesUSoundNodeMixer,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundNodeMixer>,InternalVTableHelperCtorCaller<USoundNodeMixer>,
               local_res8,USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeMixer.InnerSingleton;
}

// USoundNodeMixer @ 148697800

USoundNodeMixer * __thiscall
USoundNodeMixer::USoundNodeMixer(USoundNodeMixer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeMixer__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InputVolume).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputVolume).ArrayNum = 0;
  (this->InputVolume).ArrayMax = 0;
  return this;
}

// USoundNodeMixer @ 148697840

USoundNodeMixer * __thiscall
USoundNodeMixer::USoundNodeMixer(USoundNodeMixer *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeMixer__6B_;
  (this->InputVolume).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputVolume).ArrayNum = 0;
  (this->InputVolume).ArrayMax = 0;
  return this;
}

// ~USoundNodeMixer @ 14869bb80

void __thiscall USoundNodeMixer::~USoundNodeMixer(USoundNodeMixer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeMixer__6B_;
  pFVar1 = (this->InputVolume).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateStartingConnectors @ 1486af500

void __thiscall USoundNodeMixer::CreateStartingConnectors(USoundNodeMixer *this)

{
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x0001486af523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
  return;
}

// GetMaxChildNodes @ 1486c1260

int __thiscall USoundNodeMixer::GetMaxChildNodes(USoundNodeMixer *this)

{
  return 0x20;
}

// GetPrivateStaticClass @ 1486c4ff0

UClass * __cdecl USoundNodeMixer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeMixer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeMixer",
               &Z_Registration_Info_UClass_USoundNodeMixer.InnerSingleton,
               StaticRegisterNativesUSoundNodeMixer,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundNodeMixer>,InternalVTableHelperCtorCaller<USoundNodeMixer>,
               local_res8,USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeMixer.InnerSingleton;
}

// InsertChildNode @ 1486d06e0

void __thiscall USoundNodeMixer::InsertChildNode(USoundNodeMixer *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  USoundNode::InsertChildNode((USoundNode *)this,param_1);
  iVar4 = (this->InputVolume).ArrayNum;
  piVar1 = &(this->InputVolume).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->InputVolume).AllocatorInstance,piVar1);
  }
  (this->InputVolume).ArrayNum = iVar4 + 1;
  _Src = (this->InputVolume).AllocatorInstance.Data + (longlong)param_1 * 4;
  memmove(_Src + 4,_Src,(longlong)(iVar4 - param_1) << 2);
  uVar5 = 0;
  if (param_1 < (this->InputVolume).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  *(undefined4 *)((this->InputVolume).AllocatorInstance.Data + (longlong)param_1 * 4) = 0x3f800000;
  return;
}

// ParseNodes @ 1486ddc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeMixer::ParseNodes
          (USoundNodeMixer *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_2e8 [32];
  FSoundParseParameters *local_2c8;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_2c0;
  ulong64 local_2b8;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_2b0;
  FActiveSound *local_2a8;
  FAudioDevice *local_2a0;
  FSoundParseParameters local_298;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  local_2b0 = param_5;
  local_2b8 = param_2;
  local_2a8 = param_3;
  local_2a0 = param_1;
  FSoundParseParameters::FSoundParseParameters(&local_298,param_4);
  uVar7 = 0;
  if (0 < (int)this->_padding_) {
    lVar10 = 0;
    lVar8 = 0;
    do {
      iVar1 = (int)this->_padding_;
      uVar9 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < iVar1) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        local_2c8 = (FSoundParseParameters *)(longlong)(int)uVar7;
        local_2c0 = (TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *)(longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(longlong *)(lVar10 + this->_padding_) != 0) {
        iVar1 = (this->InputVolume).ArrayNum;
        uVar5 = 0;
        if ((int)uVar7 < iVar1) {
          uVar5 = uVar9;
        }
        if (uVar5 == 0) {
          local_2c8 = (FSoundParseParameters *)(longlong)(int)uVar7;
          local_2c0 = (TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *)(longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar1 = (int)this->_padding_;
        local_298.Volume =
             *(float *)((this->InputVolume).AllocatorInstance.Data + lVar8) * param_4->Volume;
        uVar5 = 0;
        if ((int)uVar7 < iVar1) {
          uVar5 = uVar9;
        }
        if (uVar5 == 0) {
          local_2c8 = (FSoundParseParameters *)(longlong)(int)uVar7;
          local_2c0 = (TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *)(longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar1 = (int)this->_padding_;
        plVar2 = *(longlong **)(lVar10 + this->_padding_);
        pcVar3 = *(code **)(*plVar2 + 0x2f0);
        uVar5 = 0;
        if ((int)uVar7 < iVar1) {
          uVar5 = uVar9;
        }
        if (uVar5 == 0) {
          local_2c8 = (FSoundParseParameters *)(longlong)(int)uVar7;
          local_2c0 = (TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *)(longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar6 = USoundNode::GetNodeWaveInstanceHash
                          (local_2b8,*(USoundNode **)(lVar10 + this->_padding_),uVar7);
        local_2c0 = local_2b0;
        local_2c8 = &local_298;
        (*pcVar3)(plVar2,local_2a0,uVar6,local_2a8);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 4;
      lVar10 = lVar10 + 8;
    } while ((int)uVar7 < (int)this->_padding_);
  }
  FSoundParseParameters::~FSoundParseParameters(&local_298);
  return;
}

// RemoveChildNode @ 1486e8360

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USoundNodeMixer::RemoveChildNode(USoundNodeMixer *this,int param_1)

{
  USoundNode::RemoveChildNode((USoundNode *)this,param_1);
  TArray<float,TSizedDefaultAllocator<32>_>::RemoveAt(&this->InputVolume,param_1,Default);
  return;
}

// StaticRegisterNativesUSoundNodeMixer @ 1486f1980

void __cdecl USoundNodeMixer::StaticRegisterNativesUSoundNodeMixer(void)

{
  return;
}

