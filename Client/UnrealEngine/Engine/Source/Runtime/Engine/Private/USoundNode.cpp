// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// StaticClass @ 148678220

UClass * __cdecl USoundNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNode",&Z_Registration_Info_UClass_USoundNode.InnerSingleton,
               StaticRegisterNativesUSoundNode,0x48,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNode>,InternalVTableHelperCtorCaller<USoundNode>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNode.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14867d1d0

void __cdecl
`USoundNode::PrimeChildWavePlayers'::__l24::<lambda_1>::<lambda_invoker_cdecl>
          (EAudioChunkLoadResult param_1)

{
  return;
}

// USoundNode @ 1486970f0

USoundNode * __thiscall USoundNode::USoundNode(USoundNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  (this->ChildNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildNodes).ArrayNum = 0;
  (this->ChildNodes).ArrayMax = 0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  return this;
}

// USoundNode @ 148697130

USoundNode * __thiscall USoundNode::USoundNode(USoundNode *this,FObjectInitializer *param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  wchar_t *pwVar4;
  FName local_res8;
  LARGE_INTEGER local_res18 [2];
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  (this->ChildNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildNodes).ArrayNum = 0;
  (this->ChildNodes).ArrayMax = 0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  if (FApp::bUseFixedSeed == false) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
  }
  else {
    local_res8 = (FName)this->_padding_;
    if (local_res8 != (FName)0x0) {
      pFVar2 = ::FName::ToString(&local_res8,&local_18);
      iVar1 = (pFVar2->Data).ArrayNum;
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar4 = L"";
        iVar3 = 0;
      }
      else {
        pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      }
      local_res18[0]._0_4_ = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
      (this->RandomStream).InitialSeed = local_res18[0]._0_4_;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        local_res18[0]._0_4_ = (this->RandomStream).InitialSeed;
      }
      goto LAB_1486971d3;
    }
  }
  QueryPerformanceCounter(local_res18);
  (this->RandomStream).InitialSeed = local_res18[0].s.LowPart;
LAB_1486971d3:
  (this->RandomStream).Seed = local_res18[0]._0_4_;
  this->bIsRetainingAudio = false;
  return this;
}

// ~USoundNode @ 14869b730

void __thiscall USoundNode::~USoundNode(USoundNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  pFVar1 = (this->ChildNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1486a6a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundNode::BeginDestroy(USoundNode *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(USoundNode **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CanBeClusterRoot @ 1486a7fe0

bool __thiscall USoundNode::CanBeClusterRoot(USoundNode *this)

{
  return false;
}

// CanBeInCluster @ 1486a8010

bool __thiscall USoundNode::CanBeInCluster(USoundNode *this)

{
  return true;
}

// CreateStartingConnectors @ 1486af3e0

void __thiscall USoundNode::CreateStartingConnectors(USoundNode *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x308))();
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  for (; 0 < iVar1; iVar1 = iVar1 + -1) {
    (**(code **)(this->_padding_ + 800))(this,(this->ChildNodes).ArrayNum);
  }
  return;
}

// GetAllNodes @ 1486bace0

void __thiscall
USoundNode::GetAllNodes(USoundNode *this,TArray<USoundNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  USoundNode *local_18 [2];
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18[0] = this;
  if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  uVar7 = 0;
  param_1->ArrayNum = iVar5 + 1;
  *(USoundNode **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  if (0 < (this->ChildNodes).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->ChildNodes).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((this->ChildNodes).AllocatorInstance.Data + lVar8) != 0) {
        uVar6 = 0;
        if ((int)uVar7 < (this->ChildNodes).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)((this->ChildNodes).AllocatorInstance.Data + lVar8);
        (**(code **)(*plVar2 + 0x2f8))(plVar2,param_1);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->ChildNodes).ArrayNum);
  }
  return;
}

// GetDuration @ 1486bdc60

float __thiscall USoundNode::GetDuration(USoundNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *this_00;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ChildNodes).AllocatorInstance.Data;
  iVar2 = (this->ChildNodes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  fVar5 = 0.0;
  while( true ) {
    if ((this->ChildNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USoundNode>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = *(UObject **)pFVar3;
    fVar4 = fVar5;
    if (this_00 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(this_00);
      fVar4 = (float)(**(code **)(*(longlong *)this_00 + 0x2c8))(this_00);
      if (fVar4 <= fVar5) {
        fVar4 = fVar5;
      }
    }
    pFVar3 = pFVar3 + 8;
    fVar5 = fVar4;
  }
  return fVar5;
}

// GetMaxChildNodes @ 1486c11f0

int __thiscall USoundNode::GetMaxChildNodes(USoundNode *this)

{
  return 1;
}

// GetMaxDistance @ 1486c1360

float __thiscall USoundNode::GetMaxDistance(USoundNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *this_00;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ChildNodes).AllocatorInstance.Data;
  iVar2 = (this->ChildNodes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  fVar5 = 0.0;
  while( true ) {
    if ((this->ChildNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USoundNode>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = *(UObject **)pFVar3;
    fVar4 = fVar5;
    if (this_00 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(this_00);
      fVar4 = (float)(**(code **)(*(longlong *)this_00 + 0x2b8))(this_00);
      if (fVar4 <= fVar5) {
        fVar4 = fVar5;
      }
    }
    pFVar3 = pFVar3 + 8;
    fVar5 = fVar4;
  }
  return fVar5;
}

// GetMinChildNodes @ 1486c1a80

int __thiscall USoundNode::GetMinChildNodes(USoundNode *this)

{
  return 0;
}

// GetNodeWaveInstanceHash @ 1486c20a0

ulong64 __cdecl USoundNode::GetNodeWaveInstanceHash(ulong64 param_1,ulong64 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  return (ulonglong)
         ((uVar1 >> 2) + 0x9e3779b9 +
          (uVar2 * 0x40 + param_3 + 0x9e3779b9 + (uVar2 >> 2) ^ uVar2) + uVar1 * 0x40 ^ uVar1);
}

// GetNodeWaveInstanceHash @ 1486c2130

ulong64 __cdecl
USoundNode::GetNodeWaveInstanceHash(ulong64 param_1,USoundNode *param_2,uint param_3)

{
  int iVar1;
  UObjectBaseUtility *this;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  ulong64 uVar5;
  FString *pFVar6;
  uint uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (0x1f < param_3) {
    this = (UObjectBaseUtility *)param_2->_padding_;
    if (this == (UObjectBaseUtility *)0x0) {
      pFVar6 = GetTypeName<USoundCue>(&local_38);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar9);
    }
    pUVar4 = USoundCue::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar6 = GetTypeName<USoundCue>(&local_28);
      pwVar9 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)this);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar9,pwVar10);
    }
    UObjectBaseUtility::GetFullName(this,&local_48,(UObject *)0x0,None);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildIndex < MAX_ALLOWED_CHILD_NODES",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNode.cpp"
                       ,0x5b,L"Too many children (%d) in SoundCue \'%s\'");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  uVar7 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  uVar7 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  return (ulonglong)
         ((uVar7 >> 2) + 0x9e3779b9 +
          (uVar8 * 0x40 + param_3 + 0x9e3779b9 + (uVar8 >> 2) ^ uVar8) + uVar7 * 0x40 ^ uVar7);
}

// GetNumSounds @ 1486c2be0

int __thiscall USoundNode::GetNumSounds(USoundNode *this,ulong64 param_1,FActiveSound *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar5 = 0;
  uVar8 = 0;
  if (0 < (this->ChildNodes).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar8 < (this->ChildNodes).ArrayNum) {
        uVar4 = uVar10;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (*(longlong *)((this->ChildNodes).AllocatorInstance.Data + lVar9 * 8) != 0) {
        uVar4 = 0;
        if ((int)uVar8 < (this->ChildNodes).ArrayNum) {
          uVar4 = uVar10;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        uVar7 = GetNodeWaveInstanceHash
                          (param_1,*(USoundNode **)
                                    ((this->ChildNodes).AllocatorInstance.Data + lVar9 * 8),uVar8);
        uVar4 = 0;
        if ((int)uVar8 < (this->ChildNodes).ArrayNum) {
          uVar4 = uVar10;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        plVar1 = *(longlong **)((this->ChildNodes).AllocatorInstance.Data + lVar9 * 8);
        iVar6 = (**(code **)(*plVar1 + 0x310))(plVar1,uVar7,param_2);
        iVar5 = iVar5 + iVar6;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while ((int)uVar8 < (this->ChildNodes).ArrayNum);
  }
  return iVar5;
}

// GetPrivateStaticClass @ 1486c4640

UClass * __cdecl USoundNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNode",&Z_Registration_Info_UClass_USoundNode.InnerSingleton,
               StaticRegisterNativesUSoundNode,0x48,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNode>,InternalVTableHelperCtorCaller<USoundNode>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNode.InnerSingleton;
}

// HasAttenuationNode @ 1486ca840

bool __thiscall USoundNode::HasAttenuationNode(USoundNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *this_00;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ChildNodes).AllocatorInstance.Data;
  iVar2 = (this->ChildNodes).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USoundNode>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    this_00 = *(UObject **)pFVar4;
    if (this_00 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(this_00);
      cVar3 = (**(code **)(*(longlong *)this_00 + 0x2e0))(this_00);
      if (cVar3 != '\0') {
        return true;
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// HasConcatenatorNode @ 1486cad70

bool __thiscall USoundNode::HasConcatenatorNode(USoundNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *this_00;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ChildNodes).AllocatorInstance.Data;
  iVar2 = (this->ChildNodes).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USoundNode>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    this_00 = *(UObject **)pFVar4;
    if (this_00 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(this_00);
      cVar3 = (**(code **)(*(longlong *)this_00 + 0x2d8))(this_00);
      if (cVar3 != '\0') {
        return true;
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// HasDelayNode @ 1486cb190

bool __thiscall USoundNode::HasDelayNode(USoundNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *this_00;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ChildNodes).AllocatorInstance.Data;
  iVar2 = (this->ChildNodes).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USoundNode>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    this_00 = *(UObject **)pFVar4;
    if (this_00 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(this_00);
      cVar3 = (**(code **)(*(longlong *)this_00 + 0x2d0))(this_00);
      if (cVar3 != '\0') {
        return true;
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// InsertChildNode @ 1486d0260

void __thiscall USoundNode::InsertChildNode(USoundNode *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  piVar1 = &(this->ChildNodes).ArrayNum;
  if (((param_1 < 0) || (*piVar1 < param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index <= ChildNodes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNode.cpp"
                         ,0x133,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (**(code **)(this->_padding_ + 0x300))(this);
  iVar5 = *piVar1;
  if (iVar5 < iVar4) {
    if (iVar5 == (this->ChildNodes).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ChildNodes).AllocatorInstance,&(this->ChildNodes).ArrayMax);
      (this->ChildNodes).ArrayNum = iVar5;
    }
    pFVar6 = (this->ChildNodes).AllocatorInstance.Data;
    (this->ChildNodes).ArrayNum = iVar5 + 1;
    pFVar6 = pFVar6 + (longlong)param_1 * 8;
    memmove(pFVar6 + 8,pFVar6,(longlong)(iVar5 - param_1) << 3);
    *(undefined8 *)((this->ChildNodes).AllocatorInstance.Data + (longlong)param_1 * 8) = 0;
  }
  return;
}

// IsPlayWhenSilent @ 1486d1540

bool __thiscall USoundNode::IsPlayWhenSilent(USoundNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *this_00;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ChildNodes).AllocatorInstance.Data;
  iVar2 = (this->ChildNodes).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USoundNode>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    this_00 = *(UObject **)pFVar4;
    if (this_00 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(this_00);
      cVar3 = (**(code **)(*(longlong *)this_00 + 0x2e8))(this_00);
      if (cVar3 != '\0') {
        return true;
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// LoadChildWavePlayerAssets @ 1486d2a90

void __thiscall USoundNode::LoadChildWavePlayerAssets(USoundNode *this,bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  USoundNodeQualityLevel *this_00;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->ChildNodes).AllocatorInstance.Data;
  iVar2 = (this->ChildNodes).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
LAB_1486d2ac0:
  do {
    if ((this->ChildNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USoundNode>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) {
      return;
    }
    this_00 = *(USoundNodeQualityLevel **)pFVar5;
    if (this_00 != (USoundNodeQualityLevel *)0x0) {
      if (param_2) {
        (**(code **)(this_00->_padding_ + 0x358))(this_00,param_1,1);
      }
      pUVar4 = USoundNodeWavePlayer::StaticClass();
      iVar3 = (int)pUVar4->_padding_;
      if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar4->_padding_)) {
        (**(code **)(this_00->_padding_ + 0x360))(this_00,param_1);
        pFVar5 = pFVar5 + 8;
        goto LAB_1486d2ac0;
      }
      pUVar4 = USoundNodeQualityLevel::StaticClass();
      iVar3 = (int)pUVar4->_padding_;
      if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar4->_padding_)) {
        USoundNodeQualityLevel::LoadChildWavePlayers(this_00,param_1,param_2);
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// NotifyWaveInstanceFinished @ 1486d3300

bool __thiscall USoundNode::NotifyWaveInstanceFinished(USoundNode *this,FWaveInstance *param_1)

{
  return false;
}

// OverrideLoadingBehaviorOnChildWaves @ 1486d8240

void __thiscall
USoundNode::OverrideLoadingBehaviorOnChildWaves
          (USoundNode *this,bool param_1,ESoundWaveLoadingBehavior param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *this_00;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [16];
  
  if (BypassRetainInSoundNodesCVar == 0) {
    pFVar5 = (this->ChildNodes).AllocatorInstance.Data;
    iVar2 = (this->ChildNodes).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ChildNodes).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<USoundNode>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar5 == pFVar1) break;
      this_00 = *(UObject **)pFVar5;
      if (this_00 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(this_00);
        if (param_1) {
          (**(code **)(*(longlong *)this_00 + 0x340))(this_00,1,param_2);
        }
        pUVar4 = USoundNodeWavePlayer::StaticClass();
        iVar3 = (int)pUVar4->_padding_;
        if (((iVar3 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar4->_padding_)) && (*(USoundWave **)&this_00[2].field_0x20 != (USoundWave *)0x0))
        {
          USoundWave::OverrideLoadingBehavior(*(USoundWave **)&this_00[2].field_0x20,param_2);
        }
      }
      pFVar5 = pFVar5 + 8;
    }
  }
  if (param_2 == RetainOnLoad) {
    this->bIsRetainingAudio = true;
  }
  return;
}

// ParseNodes @ 1486da550

void __thiscall
USoundNode::ParseNodes
          (USoundNode *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong64 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar7 = 0;
  if (0 < (this->ChildNodes).ArrayNum) {
    lVar9 = 0;
    do {
      iVar4 = (**(code **)(this->_padding_ + 0x300))(this);
      if (iVar4 <= (int)uVar7) {
        return;
      }
      uVar8 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < (this->ChildNodes).ArrayNum) {
        uVar5 = uVar8;
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
      if (*(longlong *)((this->ChildNodes).AllocatorInstance.Data + lVar9) != 0) {
        uVar5 = 0;
        if ((int)uVar7 < (this->ChildNodes).ArrayNum) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->ChildNodes).AllocatorInstance.Data + lVar9);
        pcVar2 = *(code **)(*plVar1 + 0x2f0);
        uVar5 = 0;
        if ((int)uVar7 < (this->ChildNodes).ArrayNum) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = GetNodeWaveInstanceHash
                          (param_2,*(USoundNode **)
                                    ((this->ChildNodes).AllocatorInstance.Data + lVar9),uVar7);
        (*pcVar2)(plVar1,param_1,uVar6,param_3,param_4,param_5);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar7 < (this->ChildNodes).ArrayNum);
  }
  return;
}

// PrimeChildWavePlayers @ 1486e1e40

void __thiscall USoundNode::PrimeChildWavePlayers(USoundNode *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *this_00;
  USoundWave *this_01;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FStreamingManagerCollection *this_02;
  IAudioStreamingManager *pIVar7;
  UClass *pUVar8;
  TSharedPtr<FSoundWaveProxy,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [8];
  TSharedPtr<FSoundWaveProxy,1> local_68;
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined8 local_30;
  
  if ((BypassRetainInSoundNodesCVar == 0) && (ManuallyPrimeChildNodesCVar != 0)) {
    bVar5 = (*IsAsyncLoadingMultithreaded)();
    if (bVar5) {
      this_02 = IStreamingManager::Get();
      pIVar7 = FStreamingManagerCollection::GetAudioStreamingManager(this_02);
      pFVar10 = (this->ChildNodes).AllocatorInstance.Data;
      iVar2 = (this->ChildNodes).ArrayNum;
      pFVar1 = pFVar10 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ChildNodes).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<USoundNode>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar10 == pFVar1) break;
        this_00 = *(UObject **)pFVar10;
        if (this_00 != (UObject *)0x0) {
          UObject::ConditionalPostLoad(this_00);
          if (param_1) {
            (**(code **)(*(longlong *)this_00 + 0x330))(this_00,1);
          }
          pUVar8 = USoundNodeWavePlayer::StaticClass();
          iVar3 = (int)pUVar8->_padding_;
          if (((iVar3 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
               &pUVar8->_padding_)) &&
             (this_01 = *(USoundWave **)&this_00[2].field_0x20, this_01 != (USoundWave *)0x0)) {
            bVar5 = USoundWave::IsStreaming(this_01,(wchar_t *)0x0);
            if (bVar5) {
              uVar6 = USoundWave::GetNumChunks(this_01);
              if (1 < uVar6) {
                pcVar4 = *(code **)(*(longlong *)pIVar7 + 0xa8);
                local_30 = 0;
                local_48 = &
                           ___7__TFunction_OwnedObject_P6AXW4EAudioChunkLoadResult___Z_0A__0A__Function_Private_Core_UE__6B_
                ;
                local_40 = `USoundNode::PrimeChildWavePlayers'::__l24::<lambda_1>::
                           <lambda_invoker_cdecl>;
                local_58[0] = UE::Core::Private::Function::
                              TFunctionRefCaller<void_(__cdecl*)(enum_EAudioChunkLoadResult),void,enum_EAudioChunkLoadResult>
                              ::Call;
                pTVar9 = USoundWave::CreateSoundWaveProxy(this_01,&local_68);
                (*pcVar4)(pIVar7,pTVar9,1,local_58,0xff,0);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_68.SharedReferenceCount.ReferenceController);
              }
            }
          }
        }
        pFVar10 = pFVar10 + 8;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001486e1fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(this,param_1,2);
  return;
}

// ReleaseRetainerOnChildWavePlayers @ 1486e6c20

void __thiscall USoundNode::ReleaseRetainerOnChildWavePlayers(USoundNode *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *this_00;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->bIsRetainingAudio != false) {
    iVar2 = (this->ChildNodes).ArrayNum;
    pFVar5 = (this->ChildNodes).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ChildNodes).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<USoundNode>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      this_00 = *(UObject **)pFVar5;
      if (this_00 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(this_00);
        if (param_1) {
          (**(code **)(*(longlong *)this_00 + 0x348))(this_00,1);
        }
        pUVar4 = USoundNodeWavePlayer::StaticClass();
        iVar3 = (int)pUVar4->_padding_;
        if (((iVar3 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar4->_padding_)) && (*(USoundWave **)&this_00[2].field_0x20 != (USoundWave *)0x0))
        {
          USoundWave::ReleaseCompressedAudio(*(USoundWave **)&this_00[2].field_0x20);
        }
      }
      pFVar5 = pFVar5 + 8;
    }
    this->bIsRetainingAudio = false;
    return;
  }
  this->bIsRetainingAudio = false;
  return;
}

// RemoveChildNode @ 1486e8150

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USoundNode::RemoveChildNode(USoundNode *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 < 0) || ((this->ChildNodes).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < ChildNodes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNode.cpp"
                       ,0x140,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = (**(code **)(this->_padding_ + 0x308))(this);
  if (iVar3 < (this->ChildNodes).ArrayNum) {
    TArray<TObjectPtr<USoundNode>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->ChildNodes,param_1,Default);
  }
  return;
}

// RemoveSoundWaveOnChildWavePlayers @ 1486e8d60

void __thiscall USoundNode::RemoveSoundWaveOnChildWavePlayers(USoundNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *this_00;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->ChildNodes).AllocatorInstance.Data;
  iVar2 = (this->ChildNodes).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USoundNode>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    this_00 = *(UObject **)pFVar5;
    if (this_00 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(this_00);
      (**(code **)(*(longlong *)this_00 + 0x350))(this_00);
      pUVar4 = USoundNodeWavePlayer::StaticClass();
      iVar3 = (int)pUVar4->_padding_;
      if ((((iVar3 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar4->_padding_)) && (*(longlong *)&this_00[2].field_0x20 != 0)) &&
         ((*(byte *)(this_00 + 3) & 1) == 0)) {
        (**(code **)(*(longlong *)this_00 + 0x368))(this_00);
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// RetainChildWavePlayers @ 1486eb8a0

void __thiscall USoundNode::RetainChildWavePlayers(USoundNode *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001486eb8a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(this,param_1,1);
  return;
}

// Serialize @ 1486ece20

void __thiscall USoundNode::Serialize(USoundNode *this,FArchive *param_1)

{
  FStripDataFlags local_res10 [12];
  
  UObject::Serialize((UObject *)this,param_1);
  if (0x1e4 < *(int *)&param_1->field_0x40) {
    FStripDataFlags::FStripDataFlags(local_res10,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  }
  return;
}

// Serialize @ 1486ece60

void __thiscall USoundNode::Serialize(USoundNode *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FStripDataFlags local_res10 [4];
  FSlotBase local_res18 [2];
  
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  UObject::Serialize((UObject *)this,pFVar1);
  if (0x1e4 < *(int *)&pFVar1->field_0x40) {
    FStripDataFlags::FStripDataFlags(local_res10,pFVar1,'\0',&GOldestLoadablePackageFileUEVersion);
  }
  return;
}

// StaticRegisterNativesUSoundNode @ 1486f18b0

void __cdecl USoundNode::StaticRegisterNativesUSoundNode(void)

{
  return;
}

// SupportsSubtitles @ 1486f23a0

bool __thiscall USoundNode::SupportsSubtitles(USoundNode *this)

{
  return false;
}

