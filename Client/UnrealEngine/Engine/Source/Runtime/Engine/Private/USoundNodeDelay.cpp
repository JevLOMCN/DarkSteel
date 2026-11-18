// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 14867b600

UClass * __cdecl USoundNodeDelay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDelay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDelay",
               &Z_Registration_Info_UClass_USoundNodeDelay.InnerSingleton,
               StaticRegisterNativesUSoundNodeDelay,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundNodeDelay>,InternalVTableHelperCtorCaller<USoundNodeDelay>,
               local_res8,USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDelay.InnerSingleton;
}

// USoundNodeDelay @ 1486973e0

USoundNodeDelay * __thiscall
USoundNodeDelay::USoundNodeDelay(USoundNodeDelay *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USoundNodeDelay__6B_;
  return this;
}

// USoundNodeDelay @ 148697420

USoundNodeDelay * __thiscall
USoundNodeDelay::USoundNodeDelay(USoundNodeDelay *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeDelay__6B_;
  this->DelayMin = 0.0;
  this->DelayMax = 0.0;
  return this;
}

// ~USoundNodeDelay @ 14869b890

void __thiscall USoundNodeDelay::~USoundNodeDelay(USoundNodeDelay *this)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDuration @ 1486bddc0

float __thiscall USoundNodeDelay::GetDuration(USoundNodeDelay *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if ((int)this->_padding_ < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if (*(longlong *)this->_padding_ != 0) {
    if ((int)this->_padding_ < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    fVar3 = (float)(**(code **)(**(longlong **)this->_padding_ + 0x2c8))();
  }
  return fVar3 + this->DelayMax;
}

// GetPrivateStaticClass @ 1486c49f0

UClass * __cdecl USoundNodeDelay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDelay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDelay",
               &Z_Registration_Info_UClass_USoundNodeDelay.InnerSingleton,
               StaticRegisterNativesUSoundNodeDelay,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundNodeDelay>,InternalVTableHelperCtorCaller<USoundNodeDelay>,
               local_res8,USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDelay.InnerSingleton;
}

// HasDelayNode @ 1486cb210

bool __thiscall USoundNodeDelay::HasDelayNode(USoundNodeDelay *this)

{
  return true;
}

// ParseNodes @ 1486db0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeDelay::ParseNodes
          (USoundNodeDelay *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
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
  FSoundParseParameters *this_00;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStackY_568 [32];
  uint local_538 [2];
  ulong64 local_530;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_528;
  FAudioDevice *local_520;
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_518;
  uint *local_508;
  FSoundParseParameters local_4f8;
  FSoundParseParameters local_2b8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_568;
  local_528 = param_5;
  local_530 = param_2;
  local_520 = param_1;
  puVar7 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&param_3->SoundNodeOffsetMap,param_2);
  pTVar2 = &param_3->SoundNodeData;
  piVar1 = &(param_3->SoundNodeData).ArrayNum;
  if (puVar7 == (uint *)0x0) {
    local_538[0] = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,0xc,&pTVar2->AllocatorInstance,piVar1,
                              &(param_3->SoundNodeData).ArrayMax);
    pFVar8 = (pTVar2->AllocatorInstance).Data + (int)local_538[0];
    *(undefined8 *)pFVar8 = 0;
    *(undefined4 *)(pFVar8 + 8) = 0;
    local_518.Value = (uint *)&local_530;
    local_508 = local_538;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_3->SoundNodeOffsetMap,&local_518,(bool *)&local_518.Value);
    lVar10 = (longlong)(int)local_538[0];
    uVar6 = 0;
    if ((int)local_538[0] < *piVar1) {
      uVar6 = ~local_538[0] >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
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
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_538[0] = *puVar7;
    pFVar8 = (pTVar2->AllocatorInstance).Data + (int)uVar6;
  }
  uVar9 = local_538[0] + 4;
  uVar6 = 0;
  if ((int)uVar9 < (param_3->SoundNodeData).ArrayNum) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  local_538[0] = uVar9;
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (*(int *)pFVar8 != 0) {
    *(int *)pFVar8 = 0;
    uVar6 = *(int *)((longlong)&this->_padding_ + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)((longlong)&this->_padding_ + 4) = uVar6;
    fVar11 = (this->DelayMin - this->DelayMax) *
             ((float)(uVar6 >> 9 | 0x3f800000) - __real_3f800000) + this->DelayMax;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (PrimeDelayedSoundNodesCVar != 0) {
      (**(code **)(this->_padding_ + 0x330))(this,1);
    }
    if ((0.0 < fVar11) && (fVar11 < param_4->StartTime || fVar11 == param_4->StartTime)) {
      *(float *)(pFVar3 + (longlong)(int)uVar9 + 4) = fVar11;
      *(undefined4 *)(pFVar3 + (int)uVar9) = 0xbf800000;
      FSoundParseParameters::FSoundParseParameters(&local_4f8,param_4);
      local_4f8.StartTime = local_4f8.StartTime - *(float *)(pFVar3 + (longlong)(int)uVar9 + 4);
      USoundNode::ParseNodes((USoundNode *)this,local_520,local_530,param_3,&local_4f8,local_528);
      this_00 = &local_4f8;
      goto LAB_1486db407;
    }
    *(undefined4 *)(pFVar3 + (longlong)(int)uVar9 + 4) = 0;
    *(float *)(pFVar3 + (int)uVar9) = (fVar11 + param_3->PlaybackTime) - param_4->StartTime;
  }
  if (param_3->PlaybackTime < *(float *)(pFVar3 + (int)uVar9)) {
    param_3->bFinished = '\0';
    return;
  }
  FSoundParseParameters::FSoundParseParameters(&local_2b8,param_4);
  local_2b8.StartTime = local_2b8.StartTime - *(float *)(pFVar3 + (longlong)(int)uVar9 + 4);
  USoundNode::ParseNodes((USoundNode *)this,local_520,local_530,param_3,&local_2b8,local_528);
  this_00 = &local_2b8;
LAB_1486db407:
  FSoundParseParameters::~FSoundParseParameters(this_00);
  return;
}

// StaticRegisterNativesUSoundNodeDelay @ 1486f1900

void __cdecl USoundNodeDelay::StaticRegisterNativesUSoundNodeDelay(void)

{
  return;
}

