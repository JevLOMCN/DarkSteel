// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 148675c60

UClass * __cdecl USoundNodeLooping::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeLooping.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeLooping",
               &Z_Registration_Info_UClass_USoundNodeLooping.InnerSingleton,
               StaticRegisterNativesUSoundNodeLooping,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeLooping>,
               InternalVTableHelperCtorCaller<USoundNodeLooping>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeLooping.InnerSingleton;
}

// USoundNodeLooping @ 148697710

USoundNodeLooping * __thiscall
USoundNodeLooping::USoundNodeLooping(USoundNodeLooping *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USoundNodeLooping__6B_;
  return this;
}

// USoundNodeLooping @ 148697750

USoundNodeLooping * __thiscall
USoundNodeLooping::USoundNodeLooping(USoundNodeLooping *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->bLoopIndefinitely = 1;
  this->_padding_ = (longlong)&___7USoundNodeLooping__6B_;
  this->LoopCount = 1;
  return this;
}

// ~USoundNodeLooping @ 14869bb00

void __thiscall USoundNodeLooping::~USoundNodeLooping(USoundNodeLooping *this)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDuration @ 1486bdf90

float __thiscall USoundNodeLooping::GetDuration(USoundNodeLooping *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  iVar1 = (int)this->_padding_;
  if (0 < iVar1) {
    if (this->bLoopIndefinitely != 0) {
      return __real_461c4000;
    }
    if (iVar1 != 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChildNodes.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeLooping.cpp"
                         ,0xad,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar4 = (float)(*pcVar2)();
        return fVar4;
      }
    }
    if ((int)this->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar4 = (float)(*pcVar2)();
        return fVar4;
      }
    }
    if (*(longlong **)this->_padding_ != (longlong *)0x0) {
      iVar1 = this->LoopCount;
      fVar4 = (float)(**(code **)(**(longlong **)this->_padding_ + 0x2c8))();
      return fVar4 * (float)iVar1;
    }
  }
  return 0.0;
}

// GetNumSounds @ 1486c2f50

int __thiscall
USoundNodeLooping::GetNumSounds(USoundNodeLooping *this,ulong64 param_1,FActiveSound *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (this->bLoopIndefinitely != 0) {
    iVar1 = 10000;
  }
  return iVar1;
}

// GetPrivateStaticClass @ 1486c4e70

UClass * __cdecl USoundNodeLooping::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeLooping.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeLooping",
               &Z_Registration_Info_UClass_USoundNodeLooping.InnerSingleton,
               StaticRegisterNativesUSoundNodeLooping,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeLooping>,
               InternalVTableHelperCtorCaller<USoundNodeLooping>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeLooping.InnerSingleton;
}

// NotifyWaveInstanceFinished @ 1486d39f0

bool __thiscall
USoundNodeLooping::NotifyWaveInstanceFinished(USoundNodeLooping *this,FWaveInstance *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  FActiveSound *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  uint local_res10 [2];
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_res18;
  uint **local_48;
  uint *local_40;
  
  pFVar4 = param_1->ActiveSound;
  local_res18.Value =
       (uint *)FNotifyBufferFinishedHooks::GetHashForNode
                         (&param_1->NotifyBufferFinishedHooks,(USoundNode *)this);
  puVar8 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&pFVar4->SoundNodeOffsetMap,(ulong64)local_res18.Value);
  pTVar2 = &pFVar4->SoundNodeData;
  piVar1 = &(pFVar4->SoundNodeData).ArrayNum;
  if (puVar8 == (uint *)0x0) {
    local_res10[0] =
         UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (1,1,8,&pTVar2->AllocatorInstance,piVar1,&(pFVar4->SoundNodeData).ArrayMax);
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (int)local_res10[0]) = 0;
    local_48 = &local_res18.Value;
    local_40 = local_res10;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&pFVar4->SoundNodeOffsetMap,&local_res18,(bool *)&local_48);
    lVar11 = (longlong)(int)local_res10[0];
    uVar9 = 0;
    if ((int)local_res10[0] < *piVar1) {
      uVar9 = ~local_res10[0] >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar12 = (pTVar2->AllocatorInstance).Data + lVar11;
    *(int *)pFVar12 = 1;
  }
  else {
    uVar9 = *puVar8;
    uVar10 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    local_res10[0] = *puVar8;
    pFVar12 = (pTVar2->AllocatorInstance).Data + (int)uVar9;
  }
  uVar10 = local_res10[0] + 4;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar4->SoundNodeData).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  local_res10[0] = uVar10;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pFVar13 = (pTVar2->AllocatorInstance).Data + (int)uVar10;
  if ((*(int *)pFVar12 == 0) &&
     ((this->bLoopIndefinitely != 0 ||
      (*(int *)pFVar13 = *(int *)pFVar13 + 1, *(int *)pFVar13 < this->LoopCount)))) {
    ResetChildren(this,(ulong64)local_res18.Value,pFVar4,(int *)pFVar13);
    param_1->bIsStarted = 0;
    param_1->bIsFinished = 0;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// ParseNodes @ 1486dd110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USoundNodeLooping::ParseNodes
          (USoundNodeLooping *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_338 [32];
  uint local_308;
  uint local_304;
  ulong64 local_300;
  undefined1 local_2f8 [8];
  FName local_2f0;
  FSoundParseParameters *local_2e8;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_2e0;
  FAudioDevice *local_2d8;
  FString local_2d0;
  ulong64 *local_2c0;
  uint *local_2b8;
  ulong64 *local_2b0;
  uint *local_2a8;
  FSoundParseParameters local_298;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2e8 = param_4;
  local_2e0 = param_5;
  local_300 = param_2;
  local_2d8 = param_1;
  puVar4 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&param_3->SoundNodeOffsetMap,param_2);
  this_00 = &param_3->SoundNodeData;
  piVar1 = &(param_3->SoundNodeData).ArrayNum;
  if (puVar4 == (uint *)0x0) {
    local_308 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,8,&this_00->AllocatorInstance,piVar1,
                           &(param_3->SoundNodeData).ArrayMax);
    *(undefined8 *)((this_00->AllocatorInstance).Data + (int)local_308) = 0;
    local_2c0 = &local_300;
    local_2b8 = &local_308;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_3->SoundNodeOffsetMap,
               (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)local_2f8,
               (bool *)&local_2c0);
    lVar7 = (longlong)(int)local_308;
    uVar5 = 0;
    if ((int)local_308 < *piVar1) {
      uVar5 = ~local_308 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = (this_00->AllocatorInstance).Data + lVar7;
    *(int *)pFVar8 = 1;
  }
  else {
    uVar5 = *puVar4;
    uVar6 = 0;
    if ((int)uVar5 < *piVar1) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_308 = *puVar4;
    pFVar8 = (this_00->AllocatorInstance).Data + (int)uVar5;
  }
  uVar6 = local_308 + 4;
  uVar5 = 0;
  if ((int)uVar6 < (param_3->SoundNodeData).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  local_308 = uVar6;
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)pFVar8 != 0) {
    *(undefined4 *)((this_00->AllocatorInstance).Data + (int)uVar6) = 0;
    *(int *)pFVar8 = 0;
  }
  if (this->bLoopIndefinitely != 0) {
    if (((!(bool)param_3->bWarnedAboutOrphanedLooping) && (param_3->AudioComponentID == 0)) &&
       (param_3->FadeOut == None)) {
      if (2 < (byte)LogAudio._0_1_) {
        local_2f0 = (FName)((param_3->Sound).field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_2f0,&local_2d0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
      }
      param_3->bWarnedAboutOrphanedLooping = '\x01';
    }
    if (this->bLoopIndefinitely != 0) goto LAB_1486dd39d;
  }
  if (param_3->bHasVirtualized != 0) {
    return;
  }
LAB_1486dd39d:
  FSoundParseParameters::FSoundParseParameters(&local_298,local_2e8);
  FNotifyBufferFinishedHooks::AddNotify
            (&local_298.NotifyBufferFinishedHooks,(USoundNode *)this,local_300);
  local_298.bEnableRetrigger = '\x01';
  USoundNode::ParseNodes((USoundNode *)this,local_2d8,local_300,param_3,&local_298,local_2e0);
  if (param_3->bFinished != '\0') {
    puVar4 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
             ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                     *)&param_3->SoundNodeOffsetMap,local_300);
    if (puVar4 == (uint *)0x0) {
      local_304 = TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,8);
      local_2b0 = &local_300;
      local_2a8 = &local_304;
      TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                  *)&param_3->SoundNodeOffsetMap,
                 (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)(local_2f8 + 4),
                 (bool *)&local_2b0);
      lVar7 = (longlong)(int)local_304;
      uVar5 = 0;
      if ((int)local_304 < (param_3->SoundNodeData).ArrayNum) {
        uVar5 = ~local_304 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)((this_00->AllocatorInstance).Data + lVar7) = 1;
    }
    else {
      uVar5 = 0;
      if ((int)*puVar4 < (param_3->SoundNodeData).ArrayNum) {
        uVar5 = ~*puVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_304 = *puVar4;
    }
    uVar6 = local_304 + 4;
    uVar5 = 0;
    if ((int)uVar6 < (param_3->SoundNodeData).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    local_304 = uVar6;
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = (this_00->AllocatorInstance).Data + (int)uVar6;
    if ((this->bLoopIndefinitely != 0) || (*(int *)pFVar8 < this->LoopCount)) {
      ResetChildren(this,local_300,param_3,(int *)pFVar8);
      param_3->bFinished = '\0';
    }
  }
  FSoundParseParameters::~FSoundParseParameters(&local_298);
  return;
}

// ResetChildren @ 1486e9d60

void __thiscall
USoundNodeLooping::ResetChildren
          (USoundNodeLooping *this,ulong64 param_1,FActiveSound *param_2,int *param_3)

{
  uint *puVar1;
  USoundNode *pUVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  FWaveInstance *pFVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong local_res8;
  ForAnyElementType local_58;
  undefined8 local_50;
  USoundNode *local_48;
  ulong64 uStack_40;
  USoundNode *local_38;
  ulong64 uStack_30;
  
  uVar12 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (0 < (int)this->_padding_) {
    lVar14 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar2 = *(USoundNode **)(lVar14 + this->_padding_);
      if (pUVar2 != (USoundNode *)0x0) {
        uStack_40 = USoundNode::GetNodeWaveInstanceHash(param_1,pUVar2,uVar12);
        local_48 = pUVar2;
        if (((local_58.Data <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < local_58.Data + (longlong)local_50._4_4_ * 0x10)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (int)local_50;
        if ((int)local_50 == local_50._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_58,(int *)((longlong)&local_50 + 4));
        }
        local_50 = CONCAT44(local_50._4_4_,iVar7 + 1);
        *(USoundNode **)(local_58.Data + (longlong)iVar7 * 0x10) = local_48;
        *(ulong64 *)(local_58.Data + (longlong)iVar7 * 0x10 + 8) = uStack_40;
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar12 < (int)this->_padding_);
  }
  uVar12 = 0;
  if (0 < (int)local_50) {
    local_res8 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar12 < (int)local_50) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(ulonglong *)(local_58.Data + local_res8 + 8);
      uVar13 = 0;
      if ((int)uVar12 < (int)local_50) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = *(longlong *)(local_58.Data + local_res8);
      if (*(int *)&(param_2->SoundNodeOffsetMap).field_0x8 !=
          *(int *)&(param_2->SoundNodeOffsetMap).field_0x34) {
        puVar4 = *(undefined1 **)&(param_2->SoundNodeOffsetMap).field_0x40;
        puVar11 = &(param_2->SoundNodeOffsetMap).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar11 = puVar4;
        }
        iVar7 = *(int *)(puVar11 +
                        ((ulonglong)(*(int *)&(param_2->SoundNodeOffsetMap).field_0x48 - 1) &
                        (uVar3 >> 0x20) * 0x17 + uVar3) * 4);
        if (iVar7 != -1) {
          lVar15 = *(longlong *)&param_2->SoundNodeOffsetMap;
          do {
            if (*(ulonglong *)(lVar15 + (longlong)iVar7 * 0x18) == uVar3) {
              if (((iVar7 != -1) && (lVar15 = lVar15 + (longlong)iVar7 * 0x18, lVar15 != 0)) &&
                 (puVar1 = (uint *)(lVar15 + 8), puVar1 != (uint *)0x0)) {
                uVar13 = *puVar1;
                uVar8 = 0;
                if ((int)uVar13 < (param_2->SoundNodeData).ArrayNum) {
                  uVar8 = ~uVar13 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                (param_2->SoundNodeData).AllocatorInstance.Data[(int)uVar13] =
                     (FScriptContainerElement)0x1;
              }
              break;
            }
            iVar7 = *(int *)(lVar15 + 0x10 + (longlong)iVar7 * 0x18);
          } while (iVar7 != -1);
        }
      }
      if (*(int *)(lVar14 + 0x30) == 0) {
        pUVar9 = USoundNodeWavePlayer::StaticClass();
        iVar7 = (int)pUVar9->_padding_;
        if (((iVar7 <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar7 * 8) ==
             &pUVar9->_padding_)) &&
           (pFVar10 = FActiveSound::FindWaveInstance(param_2,uVar3), pFVar10 != (FWaveInstance *)0x0
           )) {
          puVar11 = &pFVar10->field_0xcc;
          pFVar10->bIsStarted = 0;
          pFVar10->bAlreadyNotifiedHook = 1;
          pFVar10->bIsFinished = 0;
        }
      }
      else {
        uVar13 = 0;
        if (0 < *(int *)(lVar14 + 0x30)) {
          lVar15 = 0;
          do {
            uVar8 = 0;
            if ((int)uVar13 < *(int *)(lVar14 + 0x30)) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pUVar2 = *(USoundNode **)(lVar15 + *(longlong *)(lVar14 + 0x28));
            if (pUVar2 != (USoundNode *)0x0) {
              uStack_30 = USoundNode::GetNodeWaveInstanceHash(uVar3,pUVar2,uVar13);
              local_38 = pUVar2;
              if (((local_58.Data <= (FScriptContainerElement *)&local_38) &&
                  ((FScriptContainerElement *)&local_38 <
                   local_58.Data + (longlong)local_50._4_4_ * 0x10)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar7 = (int)local_50;
              if ((int)local_50 == local_50._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_58,(int *)((longlong)&local_50 + 4));
              }
              local_50 = CONCAT44(local_50._4_4_,iVar7 + 1);
              *(USoundNode **)(local_58.Data + (longlong)iVar7 * 0x10) = local_38;
              *(ulong64 *)(local_58.Data + (longlong)iVar7 * 0x10 + 8) = uStack_30;
            }
            uVar13 = uVar13 + 1;
            lVar15 = lVar15 + 8;
          } while ((int)uVar13 < *(int *)(lVar14 + 0x30));
        }
      }
      local_res8 = local_res8 + 0x10;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)local_50);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// StaticRegisterNativesUSoundNodeLooping @ 1486f1960

void __cdecl USoundNodeLooping::StaticRegisterNativesUSoundNodeLooping(void)

{
  return;
}

