// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148677730

UClass * __cdecl USoundNodeModulator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeModulator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeModulator",
               &Z_Registration_Info_UClass_USoundNodeModulator.InnerSingleton,
               StaticRegisterNativesUSoundNodeModulator,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeModulator>,
               InternalVTableHelperCtorCaller<USoundNodeModulator>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeModulator.InnerSingleton;
}

// USoundNodeModulator @ 148697880

USoundNodeModulator * __thiscall
USoundNodeModulator::USoundNodeModulator(USoundNodeModulator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USoundNodeModulator__6B_;
  return this;
}

// USoundNodeModulator @ 1486978c0

USoundNodeModulator * __thiscall
USoundNodeModulator::USoundNodeModulator(USoundNodeModulator *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->PitchMin = 0.95;
  this->_padding_ = (longlong)&___7USoundNodeModulator__6B_;
  this->PitchMax = 1.05;
  this->VolumeMin = 0.95;
  this->VolumeMax = 1.05;
  return this;
}

// ~USoundNodeModulator @ 14869bbd0

void __thiscall USoundNodeModulator::~USoundNodeModulator(USoundNodeModulator *this)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1486c50b0

UClass * __cdecl USoundNodeModulator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeModulator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeModulator",
               &Z_Registration_Info_UClass_USoundNodeModulator.InnerSingleton,
               StaticRegisterNativesUSoundNodeModulator,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeModulator>,
               InternalVTableHelperCtorCaller<USoundNodeModulator>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeModulator.InnerSingleton;
}

// ParseNodes @ 1486ddf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeModulator::ParseNodes
          (USoundNodeModulator *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStackY_308 [32];
  uint local_2d8 [2];
  ulong64 local_2d0;
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_2c8;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_2b8;
  ulong64 *local_2b0;
  uint *local_2a8;
  FSoundParseParameters local_298;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_2c8.Value = (uint *)param_4;
  local_2b8 = param_5;
  local_2d0 = param_2;
  puVar7 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&param_3->SoundNodeOffsetMap,param_2);
  pTVar2 = &param_3->SoundNodeData;
  piVar1 = &(param_3->SoundNodeData).ArrayNum;
  if (puVar7 == (uint *)0x0) {
    local_2d8[0] = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,0xc,&pTVar2->AllocatorInstance,piVar1,
                              &(param_3->SoundNodeData).ArrayMax);
    pFVar8 = (pTVar2->AllocatorInstance).Data + (int)local_2d8[0];
    *(undefined8 *)pFVar8 = 0;
    *(undefined4 *)(pFVar8 + 8) = 0;
    local_2b0 = &local_2d0;
    local_2a8 = local_2d8;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_3->SoundNodeOffsetMap,&local_2c8,(bool *)&local_2b0);
    lVar10 = (longlong)(int)local_2d8[0];
    uVar6 = 0;
    if ((int)local_2d8[0] < *piVar1) {
      uVar6 = ~local_2d8[0] >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar8 = (pTVar2->AllocatorInstance).Data + lVar10;
    *(int *)pFVar8 = 1;
  }
  else {
    uVar6 = *puVar7;
    uVar9 = 0;
    if ((int)uVar6 < *piVar1) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_2d8[0] = *puVar7;
    pFVar8 = (pTVar2->AllocatorInstance).Data + (int)uVar6;
  }
  uVar9 = local_2d8[0] + 4;
  uVar6 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  local_2d8[0] = uVar9;
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (*(int *)pFVar8 != 0) {
    uVar6 = *(int *)((longlong)&this->_padding_ + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)((longlong)&this->_padding_ + 4) = uVar6;
    *(float *)(pFVar3 + (int)uVar9) =
         (this->VolumeMin - this->VolumeMax) * ((float)(uVar6 >> 9 | 0x3f800000) - __real_3f800000)
         + this->VolumeMax;
    uVar6 = *(int *)((longlong)&this->_padding_ + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)((longlong)&this->_padding_ + 4) = uVar6;
    *(float *)(pFVar3 + (longlong)(int)uVar9 + 4) =
         (this->PitchMin - this->PitchMax) * ((float)(uVar6 >> 9 | 0x3f800000) - __real_3f800000) +
         this->PitchMax;
    *(int *)pFVar8 = 0;
  }
  FSoundParseParameters::FSoundParseParameters(&local_298,(FSoundParseParameters *)local_2c8.Value);
  local_298.Volume = local_298.Volume * *(float *)(pFVar3 + (int)uVar9);
  local_298.Pitch = local_298.Pitch * *(float *)(pFVar3 + (longlong)(int)uVar9 + 4);
  USoundNode::ParseNodes((USoundNode *)this,param_1,local_2d0,param_3,&local_298,local_2b8);
  FSoundParseParameters::~FSoundParseParameters(&local_298);
  return;
}

// StaticRegisterNativesUSoundNodeModulator @ 1486f1990

void __cdecl USoundNodeModulator::StaticRegisterNativesUSoundNodeModulator(void)

{
  return;
}

