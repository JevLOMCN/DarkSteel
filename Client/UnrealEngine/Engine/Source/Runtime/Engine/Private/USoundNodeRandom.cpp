// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 148677ea0

UClass * __cdecl USoundNodeRandom::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeRandom.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeRandom",
               &Z_Registration_Info_UClass_USoundNodeRandom.InnerSingleton,
               StaticRegisterNativesUSoundNodeRandom,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<USoundNodeRandom>,
               InternalVTableHelperCtorCaller<USoundNodeRandom>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeRandom.InnerSingleton;
}

// USoundNodeRandom @ 148697b80

USoundNodeRandom * __thiscall
USoundNodeRandom::USoundNodeRandom(USoundNodeRandom *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeRandom__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Weights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Weights).ArrayNum = 0;
  (this->Weights).ArrayMax = 0;
  (this->HasBeenUsed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HasBeenUsed).ArrayNum = 0;
  (this->HasBeenUsed).ArrayMax = 0;
  return this;
}

// USoundNodeRandom @ 148697bd0

USoundNodeRandom * __thiscall
USoundNodeRandom::USoundNodeRandom(USoundNodeRandom *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeRandom__6B_;
  this->bRandomizeWithoutReplacement = '\x01';
  (this->Weights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Weights).ArrayNum = 0;
  (this->Weights).ArrayMax = 0;
  (this->HasBeenUsed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HasBeenUsed).ArrayNum = 0;
  (this->HasBeenUsed).ArrayMax = 0;
  this->NumRandomUsed = 0;
  return this;
}

// ~USoundNodeRandom @ 14869bd20

void __thiscall USoundNodeRandom::~USoundNodeRandom(USoundNodeRandom *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeRandom__6B_;
  pFVar1 = (this->HasBeenUsed).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Weights).AllocatorInstance.Data;
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

// ChooseNodeIndex @ 1486a8440

int __thiscall USoundNodeRandom::ChooseNodeIndex(USoundNodeRandom *this,FActiveSound *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar7 = 0;
  fVar13 = 0.0;
  fVar11 = 0.0;
  uVar10 = 0;
  uVar6 = uVar7;
  uVar9 = uVar7;
  if (0 < (this->Weights).ArrayNum) {
    do {
      uVar5 = (uint)uVar9;
      if (this->bRandomizeWithoutReplacement == '\0') {
LAB_1486a84dc:
        uVar3 = uVar10;
        if ((int)uVar5 < (this->Weights).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        fVar11 = fVar11 + *(float *)((this->Weights).AllocatorInstance.Data + uVar6 * 4);
      }
      else {
        uVar3 = 0;
        if ((int)uVar5 < (this->HasBeenUsed).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        if ((this->HasBeenUsed).AllocatorInstance.Data[uVar6] == (FScriptContainerElement)0x0)
        goto LAB_1486a84dc;
      }
      uVar6 = uVar6 + 1;
      uVar9 = (ulonglong)(uVar5 + 1);
    } while ((int)(uVar5 + 1) < (this->Weights).ArrayNum);
  }
  uVar5 = rand();
  fVar12 = (float)(uVar5 & 0x7fff) * __real_38000100;
  uVar6 = uVar7;
  if (0 < (int)this->_padding_) {
    do {
      uVar5 = (uint)uVar6;
      if ((this->Weights).ArrayNum <= (int)uVar5) {
        return 0;
      }
      if (this->bRandomizeWithoutReplacement == '\0') {
LAB_1486a85dc:
        uVar8 = ~uVar5 >> 0x1f;
        uVar3 = uVar10;
        if ((int)uVar5 < (this->Weights).ArrayNum) {
          uVar3 = uVar8;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        fVar13 = fVar13 + *(float *)((this->Weights).AllocatorInstance.Data + uVar7 * 4);
        if (fVar12 * fVar11 < fVar13) {
          if ((int)uVar5 < (this->HasBeenUsed).ArrayNum) {
            uVar10 = uVar8;
          }
          if ((uVar10 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          (this->HasBeenUsed).AllocatorInstance.Data[(int)uVar5] = (FScriptContainerElement)0x1;
          this->NumRandomUsed = this->NumRandomUsed + 1;
          return uVar5;
        }
      }
      else {
        uVar3 = uVar10;
        if ((int)uVar5 < (this->HasBeenUsed).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        if ((this->HasBeenUsed).AllocatorInstance.Data[uVar7] == (FScriptContainerElement)0x0)
        goto LAB_1486a85dc;
      }
      uVar7 = uVar7 + 1;
      uVar6 = (ulonglong)(uVar5 + 1);
    } while ((int)(uVar5 + 1) < (int)this->_padding_);
  }
  return 0;
}

// CreateStartingConnectors @ 1486af530

void __thiscall USoundNodeRandom::CreateStartingConnectors(USoundNodeRandom *this)

{
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x0001486af553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))(this,(int)this->_padding_);
  return;
}

// DetermineAmountOfBranchesToPreselect @ 1486b0880

int __thiscall USoundNodeRandom::DetermineAmountOfBranchesToPreselect(USoundNodeRandom *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = MaxRandomBranchesCVar;
  if (MaxRandomBranchesCVar < 1) {
    iVar2 = FPlatformCompressionUtilities::GetMaxPreloadedBranchesForCurrentPlatform();
  }
  iVar1 = this->PreselectAtLevelLoad;
  iVar3 = iVar2;
  if ((0 < iVar1) && (iVar3 = iVar1, 0 < iVar2)) {
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  return iVar3;
}

// FixHasBeenUsedArray @ 1486b7fe0

void __thiscall USoundNodeRandom::FixHasBeenUsedArray(USoundNodeRandom *this)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  
  iVar7 = (this->HasBeenUsed).ArrayNum;
  uVar3 = (uint)this->_padding_;
  pTVar1 = &this->HasBeenUsed;
  if (iVar7 < (int)uVar3) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar3 - iVar7,&pTVar1->AllocatorInstance,&(this->HasBeenUsed).ArrayNum,
                       &(this->HasBeenUsed).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + iVar6,0,(longlong)(int)(uVar3 - iVar7));
    return;
  }
  if ((int)uVar3 < iVar7) {
    uVar8 = iVar7 - uVar3;
    if (((int)(uVar8 | uVar3) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar8 != 0) {
      _Dst = (pTVar1->AllocatorInstance).Data + (int)uVar3;
      iVar7 = ((this->HasBeenUsed).ArrayNum - uVar3) - uVar8;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + (int)uVar8,(longlong)iVar7);
      }
      piVar2 = &(this->HasBeenUsed).ArrayNum;
      *piVar2 = *piVar2 - uVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,&pTVar1->AllocatorInstance,(this->HasBeenUsed).ArrayNum,
                 &(this->HasBeenUsed).ArrayMax);
    }
  }
  return;
}

// FixWeightsArray @ 1486b80f0

void __thiscall USoundNodeRandom::FixWeightsArray(USoundNodeRandom *this)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = (this->Weights).ArrayNum;
  uVar3 = (uint)this->_padding_;
  pTVar1 = &this->Weights;
  if (iVar7 < (int)uVar3) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar3 - iVar7,&pTVar1->AllocatorInstance,&(this->Weights).ArrayNum,
                       &(this->Weights).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4,0,
           (longlong)(int)(uVar3 - iVar7) << 2);
    return;
  }
  if ((int)uVar3 < iVar7) {
    uVar8 = iVar7 - uVar3;
    if (((int)(uVar8 | uVar3) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar8 != 0) {
      _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar3 * 4;
      iVar7 = ((this->Weights).ArrayNum - uVar3) - uVar8;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar7 << 2);
      }
      piVar2 = &(this->Weights).ArrayNum;
      *piVar2 = *piVar2 - uVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&pTVar1->AllocatorInstance,(this->Weights).ArrayNum,&(this->Weights).ArrayMax);
    }
  }
  return;
}

// GetMaxChildNodes @ 1486c12c0

int __thiscall USoundNodeRandom::GetMaxChildNodes(USoundNodeRandom *this)

{
  return 0x20;
}

// GetNumSounds @ 1486c2f70

int __thiscall
USoundNodeRandom::GetNumSounds(USoundNodeRandom *this,ulong64 param_1,FActiveSound *param_2)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  ulong64 uVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  uint local_res8 [2];
  ulong64 local_res10 [2];
  ulong64 *local_48;
  uint *local_40;
  
  local_res10[0] = param_1;
  puVar8 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&param_2->SoundNodeOffsetMap,param_1);
  pTVar2 = &param_2->SoundNodeData;
  piVar1 = &(param_2->SoundNodeData).ArrayNum;
  if (puVar8 == (uint *)0x0) {
    local_res8[0] =
         UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (1,1,8,&pTVar2->AllocatorInstance,piVar1,&(param_2->SoundNodeData).ArrayMax);
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (int)local_res8[0]) = 0;
    local_48 = local_res10;
    local_40 = local_res8;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_2->SoundNodeOffsetMap,
               (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)(local_res10 + 1),
               (bool *)&local_48);
    lVar11 = (longlong)(int)local_res8[0];
    uVar7 = 0;
    if ((int)local_res8[0] < *piVar1) {
      uVar7 = ~local_res8[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pFVar13 = (pTVar2->AllocatorInstance).Data + lVar11;
    *(int *)pFVar13 = 1;
  }
  else {
    uVar7 = *puVar8;
    uVar10 = 0;
    if ((int)uVar7 < *piVar1) {
      uVar10 = ~uVar7 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    local_res8[0] = *puVar8;
    pFVar13 = (pTVar2->AllocatorInstance).Data + (int)uVar7;
  }
  uVar10 = local_res8[0] + 4;
  uVar7 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  local_res8[0] = uVar10;
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pFVar12 = (pTVar2->AllocatorInstance).Data + (int)uVar10;
  if (*(int *)pFVar13 != 0) {
    uVar7 = ChooseNodeIndex(this,param_2);
    *(uint *)pFVar12 = uVar7;
    *(int *)pFVar13 = 0;
  }
  uVar7 = *(uint *)pFVar12;
  if ((int)uVar7 < (int)this->_padding_) {
    if (((int)uVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    if (*(longlong *)(this->_padding_ + (longlong)(int)uVar7 * 8) != 0) {
      uVar7 = *(uint *)pFVar12;
      uVar10 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      uVar9 = USoundNode::GetNodeWaveInstanceHash
                        (local_res10[0],*(USoundNode **)(this->_padding_ + (longlong)(int)uVar7 * 8)
                         ,uVar7);
      uVar7 = *(uint *)pFVar12;
      uVar10 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      plVar3 = *(longlong **)(this->_padding_ + (longlong)(int)uVar7 * 8);
      iVar6 = (**(code **)(*plVar3 + 0x310))(plVar3,uVar9,param_2);
      return iVar6;
    }
  }
  return 0;
}

// GetPrivateStaticClass @ 1486c5470

UClass * __cdecl USoundNodeRandom::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeRandom.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeRandom",
               &Z_Registration_Info_UClass_USoundNodeRandom.InnerSingleton,
               StaticRegisterNativesUSoundNodeRandom,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<USoundNodeRandom>,
               InternalVTableHelperCtorCaller<USoundNodeRandom>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeRandom.InnerSingleton;
}

// InsertChildNode @ 1486d07a0

void __thiscall USoundNodeRandom::InsertChildNode(USoundNodeRandom *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_1;
  FixWeightsArray(this);
  FixHasBeenUsedArray(this);
  piVar1 = &(this->Weights).ArrayNum;
  if ((param_1 < 0) || (*piVar1 < param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index <= Weights.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeRandom.cpp"
                       ,0x11f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((int)this->_padding_ != *piVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildNodes.Num() == Weights.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeRandom.cpp"
                       ,0x120,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->Weights).ArrayNum;
  piVar1 = &(this->Weights).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Weights).AllocatorInstance,piVar1);
  }
  (this->Weights).ArrayNum = iVar4 + 1;
  pFVar6 = (this->Weights).AllocatorInstance.Data + lVar7 * 4;
  memmove(pFVar6 + 4,pFVar6,(longlong)(iVar4 - param_1) << 2);
  uVar5 = 0;
  if (param_1 < (this->Weights).ArrayNum) {
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
  piVar1 = &(this->HasBeenUsed).ArrayMax;
  *(undefined4 *)((this->Weights).AllocatorInstance.Data + lVar7 * 4) = 0x3f800000;
  iVar4 = (this->HasBeenUsed).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->HasBeenUsed).AllocatorInstance,piVar1);
  }
  pFVar6 = (this->HasBeenUsed).AllocatorInstance.Data + lVar7;
  (this->HasBeenUsed).ArrayNum = iVar4 + 1;
  memmove(pFVar6 + 1,pFVar6,(longlong)(iVar4 - param_1));
  uVar5 = 0;
  if (param_1 < (this->HasBeenUsed).ArrayNum) {
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
  (this->HasBeenUsed).AllocatorInstance.Data[lVar7] = (FScriptContainerElement)0x0;
  USoundNode::InsertChildNode((USoundNode *)this,param_1);
  return;
}

// ParseNodes @ 1486de870

void __thiscall
USoundNodeRandom::ParseNodes
          (USoundNodeRandom *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulong64 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  uint local_res8 [2];
  FAudioDevice *local_res10;
  ulong64 local_res18 [2];
  ulong64 *local_58;
  uint *local_50;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  puVar8 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&param_3->SoundNodeOffsetMap,param_2);
  pTVar2 = &param_3->SoundNodeData;
  piVar1 = &(param_3->SoundNodeData).ArrayNum;
  if (puVar8 == (uint *)0x0) {
    local_res8[0] =
         UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (1,1,8,&pTVar2->AllocatorInstance,piVar1,&(param_3->SoundNodeData).ArrayMax);
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (int)local_res8[0]) = 0;
    local_58 = local_res18;
    local_50 = local_res8;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_3->SoundNodeOffsetMap,
               (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)(local_res18 + 1),
               (bool *)&local_58);
    lVar12 = (longlong)(int)local_res8[0];
    uVar6 = 0;
    if ((int)local_res8[0] < *piVar1) {
      uVar6 = ~local_res8[0] >> 0x1f;
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
    pFVar14 = (pTVar2->AllocatorInstance).Data + lVar12;
    *(int *)pFVar14 = 1;
  }
  else {
    uVar6 = *puVar8;
    uVar11 = 0;
    if ((int)uVar6 < *piVar1) {
      uVar11 = ~uVar6 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res8[0] = *puVar8;
    pFVar14 = (pTVar2->AllocatorInstance).Data + (int)uVar6;
  }
  uVar13 = 0;
  uVar11 = local_res8[0] + 4;
  uVar6 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar6 = ~uVar11 >> 0x1f;
  }
  local_res8[0] = uVar11;
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
  pFVar16 = (pTVar2->AllocatorInstance).Data + (int)uVar11;
  if (*(int *)pFVar14 != 0) {
    if (PrimeRandomSoundNodesCVar != 0) {
      (**(code **)(this->_padding_ + 0x330))(this,1);
    }
    uVar6 = ChooseNodeIndex(this,param_3);
    *(uint *)pFVar16 = uVar6;
    *(int *)pFVar14 = 0;
  }
  uVar6 = 0;
  if (((this->bRandomizeWithoutReplacement != '\0') &&
      (iVar10 = (this->HasBeenUsed).ArrayNum, 0 < iVar10)) &&
     (uVar15 = uVar13, iVar10 <= this->NumRandomUsed)) {
    do {
      uVar11 = (uint)uVar13;
      if ((int)*(uint *)pFVar16 < iVar10) {
        uVar7 = uVar6;
        if ((int)uVar11 < iVar10) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (this->HasBeenUsed).AllocatorInstance.Data[uVar15] = (FScriptContainerElement)0x0;
      }
      iVar10 = (this->HasBeenUsed).ArrayNum;
      uVar13 = (ulonglong)(uVar11 + 1);
      uVar15 = uVar15 + 1;
    } while ((int)(uVar11 + 1) < iVar10);
    uVar11 = *(uint *)pFVar16;
    if ((-1 < (int)uVar11) && ((int)uVar11 < iVar10)) {
      uVar7 = uVar6;
      if ((int)uVar11 < iVar10) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->HasBeenUsed).AllocatorInstance.Data[(int)uVar11] = (FScriptContainerElement)0x1;
    }
    this->NumRandomUsed = 1;
  }
  uVar11 = *(uint *)pFVar16;
  if ((int)uVar11 < (int)this->_padding_) {
    if (((int)uVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)(this->_padding_ + (longlong)(int)uVar11 * 8) != 0) {
      uVar11 = *(uint *)pFVar16;
      uVar7 = uVar6;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)(this->_padding_ + (longlong)(int)uVar11 * 8);
      uVar11 = *(uint *)pFVar16;
      pcVar4 = *(code **)(*plVar3 + 0x2f0);
      if ((int)uVar11 < (int)this->_padding_) {
        uVar6 = ~uVar11 >> 0x1f;
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
      uVar9 = USoundNode::GetNodeWaveInstanceHash
                        (local_res18[0],
                         *(USoundNode **)(this->_padding_ + (longlong)(int)uVar11 * 8),uVar11);
      (*pcVar4)(plVar3,local_res10,uVar9,param_3,param_4,param_5);
    }
  }
  return;
}

// PostEditImport @ 1486dff10

void __thiscall USoundNodeRandom::PostEditImport(USoundNodeRandom *this)

{
  FixWeightsArray(this);
  FixHasBeenUsedArray(this);
  return;
}

// PostLoad @ 1486e0b80

void __thiscall USoundNodeRandom::PostLoad(USoundNodeRandom *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  UObject::PostLoad((UObject *)this);
  if (this->bShouldExcludeFromBranchCulling != '\0' ||
      this->bSoundCueExcludedFromBranchCulling != '\0') goto LAB_1486e0bef;
  iVar2 = MaxRandomBranchesCVar;
  if (MaxRandomBranchesCVar < 1) {
    iVar2 = FPlatformCompressionUtilities::GetMaxPreloadedBranchesForCurrentPlatform();
  }
  iVar3 = this->PreselectAtLevelLoad;
  if (iVar3 < 1) {
LAB_1486e0bba:
    iVar3 = iVar2;
    if (iVar2 < 1) goto LAB_1486e0bef;
  }
  else if (0 < iVar2) {
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
    goto LAB_1486e0bba;
  }
  iVar2 = (int)this->_padding_;
  iVar1 = iVar2;
  while (iVar3 < iVar1) {
    iVar2 = iVar2 + -1;
    (**(code **)(this->_padding_ + 0x328))(this,iVar2);
    iVar1 = (int)this->_padding_;
  }
LAB_1486e0bef:
  FixWeightsArray(this);
  FixHasBeenUsedArray(this);
  return;
}

// RemoveChildNode @ 1486e83a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USoundNodeRandom::RemoveChildNode(USoundNodeRandom *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *_Dst;
  int iVar5;
  
  FixWeightsArray(this);
  FixHasBeenUsedArray(this);
  if ((param_1 < 0) || ((this->Weights).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Weights.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeRandom.cpp"
                       ,0x130,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((int)this->_padding_ != (this->Weights).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildNodes.Num() == Weights.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeRandom.cpp"
                       ,0x131,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::RemoveAt(&this->Weights,param_1,Default);
  uVar4 = 0;
  if (param_1 < (this->HasBeenUsed).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  _Dst = (this->HasBeenUsed).AllocatorInstance.Data + param_1;
  iVar5 = (this->HasBeenUsed).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)iVar5);
  }
  piVar1 = &(this->HasBeenUsed).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,&(this->HasBeenUsed).AllocatorInstance,(this->HasBeenUsed).ArrayNum,
             &(this->HasBeenUsed).ArrayMax);
  USoundNode::RemoveChildNode((USoundNode *)this,param_1);
  return;
}

// StaticRegisterNativesUSoundNodeRandom @ 1486f19e0

void __cdecl USoundNodeRandom::StaticRegisterNativesUSoundNodeRandom(void)

{
  return;
}

