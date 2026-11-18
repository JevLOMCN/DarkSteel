// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 14867b080

UClass * __cdecl USoundNodeConcatenator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeConcatenator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeConcatenator",
               &Z_Registration_Info_UClass_USoundNodeConcatenator.InnerSingleton,
               StaticRegisterNativesUSoundNodeConcatenator,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeConcatenator>,
               InternalVTableHelperCtorCaller<USoundNodeConcatenator>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeConcatenator.InnerSingleton;
}

// USoundNodeConcatenator @ 148697360

USoundNodeConcatenator * __thiscall
USoundNodeConcatenator::USoundNodeConcatenator(USoundNodeConcatenator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeConcatenator__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InputVolume).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputVolume).ArrayNum = 0;
  (this->InputVolume).ArrayMax = 0;
  return this;
}

// USoundNodeConcatenator @ 1486973a0

USoundNodeConcatenator * __thiscall
USoundNodeConcatenator::USoundNodeConcatenator
          (USoundNodeConcatenator *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeConcatenator__6B_;
  (this->InputVolume).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputVolume).ArrayNum = 0;
  (this->InputVolume).ArrayMax = 0;
  return this;
}

// ~USoundNodeConcatenator @ 14869b840

void __thiscall USoundNodeConcatenator::~USoundNodeConcatenator(USoundNodeConcatenator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeConcatenator__6B_;
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

// CreateStartingConnectors @ 1486af440

void __thiscall USoundNodeConcatenator::CreateStartingConnectors(USoundNodeConcatenator *this)

{
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x0001486af463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
  return;
}

// GetDuration @ 1486bdcf0

float __thiscall USoundNodeConcatenator::GetDuration(USoundNodeConcatenator *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = 0;
  fVar8 = 0.0;
  if ((int)this->_padding_ < 1) {
    return 0.0;
  }
  lVar6 = 0;
  do {
    uVar4 = 0;
    if ((int)uVar5 < (int)this->_padding_) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
    }
    plVar1 = *(longlong **)(lVar6 + this->_padding_);
    if (plVar1 != (longlong *)0x0) {
      fVar7 = (float)(**(code **)(*plVar1 + 0x2c8))();
      fVar8 = fVar8 + fVar7;
    }
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
  } while ((int)uVar5 < (int)this->_padding_);
  return fVar8;
}

// GetMaxChildNodes @ 1486c1210

int __thiscall USoundNodeConcatenator::GetMaxChildNodes(USoundNodeConcatenator *this)

{
  return 0x20;
}

// GetNumSounds @ 1486c2d70

int __thiscall
USoundNodeConcatenator::GetNumSounds
          (USoundNodeConcatenator *this,ulong64 param_1,FActiveSound *param_2)

{
  return 1;
}

// GetPrivateStaticClass @ 1486c4930

UClass * __cdecl USoundNodeConcatenator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeConcatenator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeConcatenator",
               &Z_Registration_Info_UClass_USoundNodeConcatenator.InnerSingleton,
               StaticRegisterNativesUSoundNodeConcatenator,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeConcatenator>,
               InternalVTableHelperCtorCaller<USoundNodeConcatenator>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeConcatenator.InnerSingleton;
}

// HasConcatenatorNode @ 1486cadf0

bool __thiscall USoundNodeConcatenator::HasConcatenatorNode(USoundNodeConcatenator *this)

{
  return true;
}

// InsertChildNode @ 1486d0330

void __thiscall USoundNodeConcatenator::InsertChildNode(USoundNodeConcatenator *this,int param_1)

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

// NotifyWaveInstanceFinished @ 1486d3310

bool __thiscall
USoundNodeConcatenator::NotifyWaveInstanceFinished
          (USoundNodeConcatenator *this,FWaveInstance *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  FActiveSound *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint *puVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint local_res8 [2];
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_res10;
  uint **local_48;
  uint *local_40;
  
  pFVar5 = param_1->ActiveSound;
  local_res10.Value =
       (uint *)FNotifyBufferFinishedHooks::GetHashForNode
                         (&param_1->NotifyBufferFinishedHooks,(USoundNode *)this);
  puVar9 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&pFVar5->SoundNodeOffsetMap,(ulong64)local_res10.Value);
  pTVar2 = &pFVar5->SoundNodeData;
  piVar1 = &(pFVar5->SoundNodeData).ArrayNum;
  if (puVar9 == (uint *)0x0) {
    local_res8[0] =
         UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (1,1,0x10,&pTVar2->AllocatorInstance,piVar1,&(pFVar5->SoundNodeData).ArrayMax);
    pFVar10 = (pTVar2->AllocatorInstance).Data + (int)local_res8[0];
    *(undefined8 *)pFVar10 = 0;
    *(undefined8 *)(pFVar10 + 8) = 0;
    local_48 = &local_res10.Value;
    local_40 = local_res8;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&pFVar5->SoundNodeOffsetMap,&local_res10,(bool *)&local_48);
    lVar13 = (longlong)(int)local_res8[0];
    uVar12 = 0;
    if ((int)local_res8[0] < *piVar1) {
      uVar12 = ~local_res8[0] >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pFVar10 = (pTVar2->AllocatorInstance).Data + lVar13;
    *(int *)pFVar10 = 1;
  }
  else {
    uVar12 = *puVar9;
    uVar11 = 0;
    if ((int)uVar12 < *piVar1) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    local_res8[0] = *puVar9;
    pFVar10 = (pTVar2->AllocatorInstance).Data + (int)uVar12;
  }
  uVar11 = local_res8[0] + 4;
  uVar12 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  local_res8[0] = uVar11;
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  pFVar14 = (pTVar2->AllocatorInstance).Data + (int)uVar11;
  if (*(int *)pFVar10 != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("*RequiresInitialization == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeConcatenator.cpp"
                       ,0x25,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  iVar4 = *(int *)(pFVar14 + 4);
  *(int *)(pFVar14 + 4) = iVar4 + 1;
  if ((*(int *)pFVar14 < (int)this->_padding_) && (iVar4 + 1 == *(int *)(pFVar14 + 8))) {
    uVar12 = *(int *)pFVar14 + 1;
    *(uint *)pFVar14 = uVar12;
    if ((int)uVar12 < (int)this->_padding_) {
      do {
        uVar11 = 0;
        if ((int)uVar12 < (int)this->_padding_) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        if (*(longlong *)(this->_padding_ + (longlong)(int)uVar12 * 8) != 0) break;
        *(int *)pFVar14 = *(int *)pFVar14 + 1;
        uVar12 = *(uint *)pFVar14;
      } while ((int)uVar12 < (int)this->_padding_);
    }
    *(int *)(pFVar14 + 4) = 0;
    param_1->bIsStarted = 0;
    param_1->bIsFinished = 0;
  }
  return *(int *)pFVar14 < (int)this->_padding_;
}

// ParseNodes @ 1486daa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeConcatenator::ParseNodes
          (USoundNodeConcatenator *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  USoundNode *pUVar4;
  code *pcVar5;
  FActiveSound *pFVar6;
  bool bVar7;
  undefined4 uVar8;
  uint *puVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar16;
  undefined1 auStackY_338 [32];
  uint local_308;
  uint local_304;
  ulong64 local_300;
  undefined4 local_2f8;
  ulonglong local_2f0;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_2e0;
  undefined1 local_2d8 [8];
  FSoundParseParameters *local_2d0;
  FActiveSound *local_2c8;
  FAudioDevice *local_2c0;
  ulong64 *local_2b8;
  uint *local_2b0;
  ulong64 *local_2a8;
  uint *local_2a0;
  undefined1 local_298 [416];
  void *local_f8;
  undefined4 local_f0;
  void *local_e8;
  ForAnyElementType local_d0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2d0 = param_4;
  local_2e0 = param_5;
  local_300 = param_2;
  local_2c8 = param_3;
  local_2c0 = param_1;
  puVar9 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&param_3->SoundNodeOffsetMap,param_2);
  pTVar16 = &param_3->SoundNodeData;
  piVar1 = &(param_3->SoundNodeData).ArrayNum;
  if (puVar9 == (uint *)0x0) {
    local_308 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0x10,&pTVar16->AllocatorInstance,piVar1,
                           &(param_3->SoundNodeData).ArrayMax);
    pFVar11 = (pTVar16->AllocatorInstance).Data + (int)local_308;
    *(undefined8 *)pFVar11 = 0;
    *(undefined8 *)(pFVar11 + 8) = 0;
    local_2b8 = &local_300;
    local_2b0 = &local_308;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_3->SoundNodeOffsetMap,
               (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)local_2d8,
               (bool *)&local_2b8);
    lVar13 = (longlong)(int)local_308;
    uVar15 = 0;
    if ((int)local_308 < *piVar1) {
      uVar15 = ~local_308 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar11 = (pTVar16->AllocatorInstance).Data + lVar13;
    *(int *)pFVar11 = 1;
  }
  else {
    uVar15 = *puVar9;
    uVar12 = 0;
    if ((int)uVar15 < *piVar1) {
      uVar12 = ~uVar15 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_308 = *puVar9;
    pFVar11 = (pTVar16->AllocatorInstance).Data + (int)uVar15;
  }
  uVar12 = local_308 + 4;
  uVar15 = 0;
  if ((int)uVar12 < *piVar1) {
    uVar15 = ~uVar12 >> 0x1f;
  }
  local_308 = uVar12;
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (pTVar16->AllocatorInstance).Data;
  if (*(int *)pFVar11 != 0) {
    *(undefined8 *)(pFVar3 + (int)uVar12) = 0;
    *(undefined4 *)(pFVar3 + (longlong)(int)uVar12 + 8) = 0;
    *(int *)pFVar11 = 0;
  }
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar12 + 8) = 0;
  local_2f0 = *(ulonglong *)(pFVar3 + (int)uVar12);
  local_2f8 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar12 + 8);
  uVar15 = (uint)local_2f0;
  if ((int)(uint)local_2f0 < (int)this->_padding_) {
    do {
      if (((int)uVar15 < 0 || (int)this->_padding_ <= (int)uVar15) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar4 = *(USoundNode **)(this->_padding_ + (longlong)(int)uVar15 * 8);
      if (pUVar4 != (USoundNode *)0x0) {
        FSoundParseParameters::FSoundParseParameters((FSoundParseParameters *)local_298,local_2d0);
        FNotifyBufferFinishedHooks::AddNotify
                  ((FNotifyBufferFinishedHooks *)local_298,(USoundNode *)this,local_300);
        if (((int)uVar15 < 0 || (this->InputVolume).ArrayNum <= (int)uVar15) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_298._164_4_ =
             (float)local_298._164_4_ *
             *(float *)((this->InputVolume).AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
        iVar2 = local_2e0->ArrayNum;
        uVar10 = USoundNode::GetNodeWaveInstanceHash(local_300,pUVar4,uVar15);
        pFVar6 = local_2c8;
        (**(code **)(pUVar4->_padding_ + 0x2f0))(pUVar4,local_2c0,uVar10,local_2c8);
        if (iVar2 < local_2e0->ArrayNum) {
          uVar8 = (**(code **)(pUVar4->_padding_ + 0x310))(pUVar4,uVar10,pFVar6);
          puVar9 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                           *)&pFVar6->SoundNodeOffsetMap,local_300);
          if (puVar9 == (uint *)0x0) {
            local_304 = TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed
                                  (&pFVar6->SoundNodeData,0x10);
            local_2a8 = &local_300;
            local_2a0 = &local_304;
            TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
                      ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                        *)&pFVar6->SoundNodeOffsetMap,
                       (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)
                       (local_2d8 + 4),(bool *)&local_2a8);
            lVar13 = (longlong)(int)local_304;
            uVar15 = 0;
            if ((int)local_304 < (pFVar6->SoundNodeData).ArrayNum) {
              uVar15 = ~local_304 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(undefined4 *)((pFVar6->SoundNodeData).AllocatorInstance.Data + lVar13) = 1;
          }
          else {
            uVar15 = 0;
            if ((int)*puVar9 < (pFVar6->SoundNodeData).ArrayNum) {
              uVar15 = ~*puVar9 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_304 = *puVar9;
          }
          uVar12 = local_304 + 4;
          uVar15 = 0;
          if ((int)uVar12 < (pFVar6->SoundNodeData).ArrayNum) {
            uVar15 = ~uVar12 >> 0x1f;
          }
          local_304 = uVar12;
          if ((uVar15 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar11 = (pFVar6->SoundNodeData).AllocatorInstance.Data;
          *(ulonglong *)(pFVar11 + (int)uVar12) = local_2f0;
          *(undefined4 *)(pFVar11 + (longlong)(int)uVar12 + 8) = uVar8;
          FSoundParseParameters::~FSoundParseParameters((FSoundParseParameters *)local_298);
          return;
        }
        if (local_d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data);
        }
        local_298._344_8_ = &___7FIndexedCurve__6B_;
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        local_f0 = 0;
        if (local_f8 != (void *)0x0) {
          FMemory::Free(local_f8);
        }
        TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_298 + 0x160));
        puVar14 = (undefined8 *)(local_298 + 0x128);
        lVar13 = 2;
        do {
          piVar1 = (int *)(puVar14 + -1);
          puVar14 = puVar14 + -2;
          lVar13 = lVar13 + -1;
          DestructItems<FSoundSourceBusSendInfo,int>((FSoundSourceBusSendInfo *)*puVar14,*piVar1);
          if ((void *)*puVar14 != (void *)0x0) {
            FMemory::Free((void *)*puVar14);
          }
        } while (lVar13 != 0);
        DestructItems<FAttenuationSubmixSendSettings,int>
                  ((FAttenuationSubmixSendSettings *)local_298._248_8_,local_298._256_4_);
        if ((FAttenuationSubmixSendSettings *)local_298._248_8_ !=
            (FAttenuationSubmixSendSettings *)0x0) {
          FMemory::Free((void *)local_298._248_8_);
        }
        DestructItems<FSoundSubmixSendInfo,int>
                  ((FSoundSubmixSendInfo *)local_298._232_8_,local_298._240_4_);
        if ((FSoundSubmixSendInfo *)local_298._232_8_ != (FSoundSubmixSendInfo *)0x0) {
          FMemory::Free((void *)local_298._232_8_);
        }
        if ((FScriptContainerElement *)local_298._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_298._0_8_);
        }
      }
      uVar15 = uVar15 + 1;
      local_2f0 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)this->_padding_);
  }
  return;
}

// RemoveChildNode @ 1486e81d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USoundNodeConcatenator::RemoveChildNode(USoundNodeConcatenator *this,int param_1)

{
  USoundNode::RemoveChildNode((USoundNode *)this,param_1);
  TArray<float,TSizedDefaultAllocator<32>_>::RemoveAt(&this->InputVolume,param_1,Default);
  return;
}

// StaticRegisterNativesUSoundNodeConcatenator @ 1486f18f0

void __cdecl USoundNodeConcatenator::StaticRegisterNativesUSoundNodeConcatenator(void)

{
  return;
}

