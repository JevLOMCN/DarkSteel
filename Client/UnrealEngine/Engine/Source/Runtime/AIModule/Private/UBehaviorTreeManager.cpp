// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 15

// StaticClass @ 146e78080

UClass * __cdecl UBehaviorTreeManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBehaviorTreeManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BehaviorTreeManager",
               &Z_Registration_Info_UClass_UBehaviorTreeManager.InnerSingleton,
               StaticRegisterNativesUBehaviorTreeManager,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UBehaviorTreeManager>,
               InternalVTableHelperCtorCaller<UBehaviorTreeManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBehaviorTreeManager.InnerSingleton;
}

// UBehaviorTreeManager @ 146e815a0

UBehaviorTreeManager * __thiscall
UBehaviorTreeManager::UBehaviorTreeManager(UBehaviorTreeManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBehaviorTreeManager__6B_;
  (this->LoadedTemplates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedTemplates).ArrayNum = 0;
  (this->LoadedTemplates).ArrayMax = 0;
  (this->ActiveComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveComponents).ArrayNum = 0;
  (this->ActiveComponents).ArrayMax = 0;
  return this;
}

// UBehaviorTreeManager @ 146e815e0

UBehaviorTreeManager * __thiscall
UBehaviorTreeManager::UBehaviorTreeManager(UBehaviorTreeManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->MaxDebuggerSteps = 100;
  this->_padding_ = (longlong)&___7UBehaviorTreeManager__6B_;
  (this->LoadedTemplates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedTemplates).ArrayNum = 0;
  (this->LoadedTemplates).ArrayMax = 0;
  (this->ActiveComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveComponents).ArrayNum = 0;
  (this->ActiveComponents).ArrayMax = 0;
  return this;
}

// ~UBehaviorTreeManager @ 146e82060

void __thiscall UBehaviorTreeManager::~UBehaviorTreeManager(UBehaviorTreeManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBehaviorTreeManager__6B_;
  pFVar1 = (this->ActiveComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoadedTemplates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddActiveComponent @ 146e83fc0

void __thiscall
UBehaviorTreeManager::AddActiveComponent(UBehaviorTreeManager *this,UBehaviorTreeComponent *param_1)

{
  TObjectPtr<UBehaviorTreeComponent>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTreeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UBehaviorTreeComponent>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UBehaviorTreeComponent>_>
            (&this->ActiveComponents,(TObjectPtr<UBehaviorTreeComponent> *)&local_res8[0].ObjectPtr)
  ;
  return;
}

// DumpUsageStats @ 146e89ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeManager::DumpUsageStats(UBehaviorTreeManager *this)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  UClass *pUVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 auStackY_228 [32];
  undefined1 local_1e8 [8];
  TObjectIterator<UClass> local_1e0;
  TObjectIterator<UBehaviorTree> local_1c8;
  int local_1b0;
  int local_1ac;
  UClass *local_1a8;
  FName local_1a0;
  FName local_198;
  FString local_190;
  FString local_180;
  longlong *local_170;
  uint uStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  uint local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  longlong local_110;
  longlong lStack_108;
  undefined4 local_e4;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_a4;
  void *local_98;
  undefined4 local_90;
  undefined1 local_88 [64];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._52_4_ = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_1e0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ObjectArray.ArrayNum = 0;
  local_1e0.ObjectArray.ArrayMax = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_1e0.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar7,&local_1e0.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UClass>::Advance(&local_1e0);
    lVar11 = (longlong)local_1e0.Index;
    if ((local_1e0.Index < 0) || (local_1e0.ObjectArray.ArrayNum <= local_1e0.Index)) break;
    uVar9 = 0;
    if (local_1e0.Index < local_1e0.ObjectArray.ArrayNum) {
      uVar9 = (uint)~local_1e0.Index >> 0x1f;
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
    lVar11 = *(longlong *)(local_1e0.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    pUVar7 = Z_Construct_UClass_UBTNode_NoRegister();
    if (pUVar7 != (UClass *)0x0) {
      iVar10 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar11 + 0x38) < iVar10) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar11 = (longlong)local_1e0.Index;
        uVar9 = 0;
        if (local_1e0.Index < local_1e0.ObjectArray.ArrayNum) {
          uVar9 = (uint)~local_1e0.Index >> 0x1f;
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
        if ((*(byte *)(*(longlong *)(local_1e0.ObjectArray.AllocatorInstance.Data + lVar11 * 8) +
                      0xd4) & 1) == 0) {
          lVar11 = (longlong)local_1e0.Index;
          uVar9 = 0;
          if (local_1e0.Index < local_1e0.ObjectArray.ArrayNum) {
            uVar9 = (uint)~local_1e0.Index >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_1a8 = *(UClass **)(local_1e0.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
          uVar9 = ((uint)((ulonglong)local_1a8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1a8 >> 4)
                  ) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          TMapBase<UClass_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>_>
          ::FindOrAddImpl<UClass_*_const_&>
                    ((TMapBase<UClass_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>_>
                      *)local_88,uVar9 >> 0x10 ^ uVar9,&local_1a8);
        }
      }
    }
  }
  if (local_1e0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.ObjectArray.AllocatorInstance.Data);
  }
  if (3 < (byte)LogBehaviorTree._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
  }
  local_1c8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ObjectArray.ArrayNum = 0;
  local_1c8.ObjectArray.ArrayMax = 0;
  local_1c8.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = UBehaviorTree::StaticClass();
  GetObjectsOfClass(pUVar7,&local_1c8.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UBehaviorTree>::Advance(&local_1c8);
  do {
    uVar12 = 0;
    lVar11 = (longlong)local_1c8.Index;
    uVar9 = 0;
    if ((local_1c8.Index < 0) || (local_1c8.ObjectArray.ArrayNum <= local_1c8.Index)) {
      if (local_1c8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.ObjectArray.AllocatorInstance.Data);
      }
      if (3 < (byte)LogBehaviorTree._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
      }
      FNodeClassCounter::Print((FNodeClassCounter *)local_88,L",");
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<UClass_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UClass_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UClass_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return;
    }
    local_d8._0_8_ = (FScriptContainerElement *)0x0;
    local_d8._8_8_ = 0;
    local_b8 = (uint *)0x0;
    local_b0 = 0;
    local_ac = 0x80;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    if (3 < (byte)LogBehaviorTree._0_1_) {
      uVar14 = uVar9;
      if (local_1c8.Index < local_1c8.ObjectArray.ArrayNum) {
        uVar14 = (uint)~local_1c8.Index >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_1a0 = *(FName *)(*(longlong *)
                              (local_1c8.ObjectArray.AllocatorInstance.Data + lVar11 * 8) + 0x18);
      ::FName::ToString(&local_1a0,&local_190);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
    }
    lVar11 = (longlong)local_1c8.Index;
    uVar14 = uVar9;
    if (local_1c8.Index < local_1c8.ObjectArray.ArrayNum) {
      uVar14 = (uint)~local_1c8.Index >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    StatNodeUsage(*(UBTNode **)
                   (*(longlong *)(local_1c8.ObjectArray.AllocatorInstance.Data + lVar11 * 8) + 0x30)
                  ,(FNodeClassCounter *)local_d8);
    uVar14 = local_b0;
    uStack_164 = 1;
    uStack_154 = uVar9;
    uStack_168 = uVar12;
    if (local_b0 != 0) {
      puVar13 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar13 = local_b8;
      }
      uVar3 = *puVar13;
      uVar9 = uVar12;
      while (uVar3 == 0) {
        lVar11 = (longlong)(int)uStack_168;
        uVar9 = uVar9 + 0x20;
        uStack_168 = uStack_168 + 1;
        uStack_154 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_168)
        goto LAB_146e8a053;
        uVar3 = (puVar13 + 1)[lVar11];
      }
      uStack_164 = -uVar3 & uVar3;
      uVar2 = (ulonglong)uStack_164 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1b0 = (int)lVar11;
      uStack_154 = (uVar9 - 1) + local_1b0;
      if ((int)local_b0 < (int)uStack_154) {
        uStack_154 = local_b0;
      }
    }
LAB_146e8a053:
    local_170 = (longlong *)local_d8;
    uStack_14c = local_e4;
    local_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
    uVar12 = local_b0 & 0xffffffe0;
    iStack_148 = local_d8._8_4_ - local_a4;
    TStack_138._padding_ = CONCAT44(uStack_164,uStack_168);
    uStack_158 = 0xffffffff;
    TStack_138.CurrentBitIndex = uStack_154;
    TStack_138.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)local_b0 >> 5;
    TStack_138._28_4_ = local_e4;
    TStack_138.BaseBitIndex = uVar9;
    uStack_118 = CONCAT44(uStack_144,iStack_148);
    bVar8 = (byte)local_b0;
    local_150 = uVar9;
    local_140 = local_170;
    TStack_138.Array = local_160;
    if (((int)local_b0 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar14 != local_b0) {
      puVar13 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar13 = local_b8;
      }
      uVar9 = -1 << (bVar8 & 0x1f) & puVar13[iVar10];
      while (uVar9 == 0) {
        lVar11 = (longlong)iVar10;
        uVar12 = uVar12 + 0x20;
        iVar10 = iVar10 + 1;
        uVar14 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_146e8a160;
        uVar9 = (puVar13 + 1)[lVar11];
      }
      uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1ac = (int)lVar11;
      uVar14 = local_1ac + -1 + uVar12;
      if ((int)local_b0 < (int)uVar14) {
        uVar14 = local_b0;
      }
    }
LAB_146e8a160:
    while( true ) {
      plVar1 = local_140;
      if ((int)local_140[1] - *(int *)((longlong)local_140 + 0x34) != (int)uStack_118) {
        local_1e8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UClass_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
      }
      if (((TStack_138.CurrentBitIndex == uVar14) &&
          (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
         (plVar1 == (longlong *)local_d8)) break;
      plVar1 = (longlong *)(*plVar1 + (longlong)TStack_138.CurrentBitIndex * 0x18);
      local_110 = *plVar1;
      lStack_108 = plVar1[1];
      if (3 < (byte)LogBehaviorTree._0_1_) {
        local_198 = *(FName *)(local_110 + 0x18);
        ::FName::ToString(&local_198,&local_180);
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_FNodeClassCounter::Print(wchar_t_const*___ptr64)___ptr64'
                    ::__l7::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
      }
      TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
    }
    FNodeClassCounter::Append((FNodeClassCounter *)local_88,(FNodeClassCounter *)local_d8);
    local_90 = 0;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    iVar10 = SUB84(local_d8._8_8_,4);
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
    }
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_b0 = 0;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
    }
    if (local_b8 != (uint *)0x0) {
      FMemory::Free(local_b8);
    }
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
    TObjectIterator<UBehaviorTree>::Advance(&local_1c8);
  } while( true );
}

// FinishDestroy @ 146e8cd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeManager::FinishDestroy(UBehaviorTreeManager *this)

{
  TArray<TObjectPtr<UBehaviorTreeComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumTemplates> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  FName local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  uVar9 = 0;
  FVar7 = StatPtr_STAT_AI_BehaviorTree_NumTemplates;
  if (StatPtr_STAT_AI_BehaviorTree_NumTemplates ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumTemplates>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_AI_BehaviorTree_NumTemplates");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumTemplates>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_NumTemplates,
                       *pFVar6,L"Num Templates","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                       L"Behavior Tree",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar7;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_38.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    local_38.StatData.Pad[0] = '\0';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar2;
    local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_38);
    FStatsTrace::Set(&local_res8,0);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pTVar1 = &this->ActiveComponents;
  uVar11 = uVar9;
  if (0 < (this->ActiveComponents).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar10 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < (this->ActiveComponents).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((pTVar1->AllocatorInstance).Data + uVar11) != 0) {
        uVar5 = 0;
        if ((int)uVar8 < (this->ActiveComponents).ArrayNum) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(uint *)(*(longlong *)((pTVar1->AllocatorInstance).Data + uVar11) + 8) >> 0xf & 1) ==
            0) {
          uVar5 = 0;
          if ((int)uVar8 < (this->ActiveComponents).ArrayNum) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(**(longlong **)((pTVar1->AllocatorInstance).Data + uVar11) + 0x518))();
        }
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar8 + 1) < (this->ActiveComponents).ArrayNum);
  }
  (this->ActiveComponents).ArrayNum = 0;
  if ((this->ActiveComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->ActiveComponents).ArrayMax);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetAlignedDataSize @ 146e8d600

ushort __cdecl UBehaviorTreeManager::GetAlignedDataSize(ushort param_1)

{
  return param_1 + 3 & 0xfffc;
}

// GetCurrent @ 146e8d710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UBehaviorTreeManager * __cdecl UBehaviorTreeManager::GetCurrent(UObject *param_1)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UAISystemBase *pUVar4;
  
  pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
  if (pUVar2 == (UWorld *)0x0) {
    return (UBehaviorTreeManager *)0x0;
  }
  pUVar4 = (pUVar2->AISystem).field0_0x0.DebugPtr;
  if (pUVar4 != (UAISystemBase *)0x0) {
    pUVar3 = UAISystem::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146e8d75e;
  }
  pUVar4 = (UAISystemBase *)0x0;
LAB_146e8d75e:
  if (pUVar4 == (UAISystemBase *)0x0) {
    return (UBehaviorTreeManager *)0x0;
  }
  return (UBehaviorTreeManager *)pUVar4[2].AISystemModuleName;
}

// GetCurrent @ 146e8d780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UBehaviorTreeManager * __cdecl UBehaviorTreeManager::GetCurrent(UWorld *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UAISystemBase *pUVar3;
  
  if (param_1 == (UWorld *)0x0) {
    return (UBehaviorTreeManager *)0x0;
  }
  pUVar3 = (param_1->AISystem).field0_0x0.DebugPtr;
  if (pUVar3 != (UAISystemBase *)0x0) {
    pUVar2 = UAISystem::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_146e8d7bc;
  }
  pUVar3 = (UAISystemBase *)0x0;
LAB_146e8d7bc:
  if (pUVar3 == (UAISystemBase *)0x0) {
    return (UBehaviorTreeManager *)0x0;
  }
  return (UBehaviorTreeManager *)pUVar3[2].AISystemModuleName;
}

// GetPrivateStaticClass @ 146e8f540

UClass * __cdecl UBehaviorTreeManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBehaviorTreeManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BehaviorTreeManager",
               &Z_Registration_Info_UClass_UBehaviorTreeManager.InnerSingleton,
               StaticRegisterNativesUBehaviorTreeManager,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UBehaviorTreeManager>,
               InternalVTableHelperCtorCaller<UBehaviorTreeManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBehaviorTreeManager.InnerSingleton;
}

// InitializeMemoryHelper @ 146e90d00

void __cdecl
UBehaviorTreeManager::InitializeMemoryHelper
          (TArray<UBTDecorator_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2,int *param_3,bool param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ushort uVar15;
  FIdentityFunctor local_res10;
  undefined1 local_78 [8];
  ForAnyElementType local_70;
  int local_68;
  int local_64;
  FBehaviorTreeNodeInitializationData local_60;
  
  uVar9 = 0;
  iVar12 = param_1->ArrayNum;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  local_64 = 0;
  uVar14 = uVar9;
  if (0 < iVar12) {
    do {
      uVar8 = (uint)uVar9;
      uVar11 = ~uVar8 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar8 < iVar12) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar10 = *(longlong *)((param_1->AllocatorInstance).Data + uVar14);
      bVar1 = *(byte *)(lVar10 + 0x55);
      if (param_4) {
        if ((*(longlong *)(lVar10 + 0x48) != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ParentNode == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                               ,0x13b,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(byte *)(lVar10 + 0x55) = *(byte *)(lVar10 + 0x55) | 4;
      }
      uVar7 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      sVar4 = (**(code **)(**(longlong **)((param_1->AllocatorInstance).Data + uVar14) + 0x2e8))();
      uVar7 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      sVar5 = (**(code **)(**(longlong **)((param_1->AllocatorInstance).Data + uVar14) + 0x2d0))();
      uVar7 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_60.Node = *(UBTNode **)((param_1->AllocatorInstance).Data + uVar14);
      local_60.ParentNode = (UBTCompositeNode *)0x0;
      local_60.ExecutionIndex = 0;
      local_60.TreeDepth = '\0';
      local_60.SpecialDataSize = sVar4 + 3U & 0xfffc;
      local_60.DataSize = local_60.SpecialDataSize + sVar5;
      if (2 < local_60.DataSize) {
        local_60.DataSize = local_60.DataSize + 3 & 0xfffc;
      }
      if (((local_70.Data <= &local_60) &&
          (&local_60 <
           (FBehaviorTreeNodeInitializationData *)(local_70.Data + (longlong)local_64 * 0x18))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_68 == local_64) {
        local_68 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_70,&local_64);
      }
      iVar12 = local_68 + 1;
      *(UBTNode **)&local_70.Data[(longlong)local_68 * 0x18].field_0x0 = local_60.Node;
      *(UBTCompositeNode **)(local_70.Data + (longlong)local_68 * 0x18 + 8) = local_60.ParentNode;
      *(ulonglong *)(local_70.Data + (longlong)local_68 * 0x18 + 0x10) =
           CONCAT17(local_60._23_1_,
                    CONCAT16(local_60.TreeDepth,
                             CONCAT24(local_60.SpecialDataSize,
                                      CONCAT22(local_60.DataSize,local_60.ExecutionIndex))));
      local_68 = iVar12;
      if ((param_4) && ((bVar1 & 4) == 0)) {
        if ((*(longlong *)(lVar10 + 0x48) != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ParentNode == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                               ,0x13b,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(byte *)(lVar10 + 0x55) = *(byte *)(lVar10 + 0x55) & 0xfb;
      }
      iVar12 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar8 + 1) < iVar12);
  }
  uVar15 = 0;
  uVar8 = 0;
  local_res10 = SUB81(param_2,0);
  AlgoImpl::
  IntroSortInternal<FBehaviorTreeNodeInitializationData,int,FIdentityFunctor,TDereferenceWrapper<FBehaviorTreeNodeInitializationData,FBehaviorTreeNodeInitializationData::FMemorySort>_>
            ((FBehaviorTreeNodeInitializationData *)local_70.Data,local_68,local_res10,
             (FMemorySort *)local_78);
  iVar12 = param_1->ArrayNum;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar12,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
  memset((param_2->AllocatorInstance).Data + (longlong)iVar6 * 2,0,(longlong)iVar12 * 2);
  uVar7 = 0;
  if (0 < local_68) {
    lVar10 = 0;
    lVar13 = 0;
    do {
      uVar11 = ~uVar7 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar7 < local_68) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      sVar4 = *(short *)(local_70.Data + lVar10 + 0x14);
      uVar8 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(ushort *)((param_2->AllocatorInstance).Data + lVar13) = uVar15 + sVar4;
      uVar8 = 0;
      if ((int)uVar7 < local_68) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + 2;
      uVar15 = uVar15 + *(short *)(local_70.Data + lVar10 + 0x12);
      uVar8 = (uint)uVar15;
      lVar10 = lVar10 + 0x18;
    } while ((int)uVar7 < local_68);
  }
  *param_3 = uVar8;
  if ((FBehaviorTreeNodeInitializationData *)local_70.Data !=
      (FBehaviorTreeNodeInitializationData *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// LoadTree @ 146e93690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UBehaviorTreeManager::LoadTree
          (UBehaviorTreeManager *this,UBehaviorTree *param_1,UBTCompositeNode **param_2,
          ushort *param_3)

{
  int *piVar1;
  uchar uVar2;
  short sVar3;
  ushort uVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  UBehaviorTree *pUVar7;
  UBTNode *this_00;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_LoadTime> FVar14;
  UBTCompositeNode *pUVar15;
  UClass *pUVar16;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumTemplates> FVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  UBTCompositeNode *pUVar21;
  uint uVar22;
  UBTCompositeNode *pUVar23;
  ushort uVar24;
  FIdentityFunctor local_res8;
  TArray<FBehaviorTreeNodeInitializationData,TSizedDefaultAllocator<32>_> local_b8;
  FName local_a8;
  byte local_a0;
  undefined1 local_98 [4];
  ushort local_94 [2];
  FName local_90;
  UBehaviorTree *local_88;
  UBTCompositeNode *local_80;
  ushort local_78;
  FColor_u_0 local_70 [2];
  FName local_68;
  FName local_60;
  FStatMessage local_58;
  FName local_48;
  FName local_40;
  
  FVar14 = StatPtr_STAT_AI_BehaviorTree_LoadTime;
  if (StatPtr_STAT_AI_BehaviorTree_LoadTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_LoadTime>)0x0) {
    pFVar13 = ::FName::FName(&local_48,"STAT_AI_BehaviorTree_LoadTime");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_LoadTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_LoadTime,*pFVar13
                        ,L"BT Load Time","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                        L"Behavior Tree",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_a0 = 0;
  FVar5 = *(FName *)FVar14;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_70[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_70[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      local_a0 = local_a0 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_68.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeManager.cpp"
                   ,0x109);
        local_a0 = local_a0 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a8 = FVar5;
      local_90 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      local_a0 = local_a0 | 4;
    }
  }
  pUVar21 = (UBTCompositeNode *)0x0;
  pUVar15 = pUVar21;
  pUVar23 = pUVar21;
  if (0 < (this->LoadedTemplates).ArrayNum) {
    do {
      uVar19 = (uint)pUVar15;
      uVar11 = 0;
      if ((int)uVar19 < (this->LoadedTemplates).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      pFVar6 = (this->LoadedTemplates).AllocatorInstance.Data;
      pUVar7 = *(UBehaviorTree **)((longlong)&pUVar23->_padding_ + (longlong)pFVar6);
      if (pUVar7 == (UBehaviorTree *)0x0) {
        bVar9 = param_1 == (UBehaviorTree *)0x0;
      }
      else {
        bVar9 = pUVar7 == param_1;
      }
      if (bVar9) {
        bVar9 = true;
        *param_2 = *(UBTCompositeNode **)((longlong)&pUVar23->_padding_ + (longlong)pFVar6);
        *param_3 = *(ushort *)((longlong)&pUVar23->_padding_ + (longlong)pFVar6);
        goto LAB_146e93dbd;
      }
      pUVar15 = (UBTCompositeNode *)(ulonglong)(uVar19 + 1);
      pUVar23 = (UBTCompositeNode *)&pUVar23->_padding_;
    } while ((int)(uVar19 + 1) < (this->LoadedTemplates).ArrayNum);
  }
  if ((param_1->RootNode).field0_0x0.DebugPtr == (UBTCompositeNode *)0x0) {
    bVar9 = false;
    goto LAB_146e93dbd;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  local_88 = param_1;
  pUVar15 = (UBTCompositeNode *)
            StaticDuplicateObject
                      ((UObject *)(param_1->RootNode).field0_0x0.DebugPtr,(UObject *)this,(FName)0x0
                       ,RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                        RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                        RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                        RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                        RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                        RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                        RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                        RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                        RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                        RF_Public,(UClass *)0x0,Normal,
                       PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                       ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                       AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                       ReachabilityFlag0);
  if (pUVar15 == (UBTCompositeNode *)0x0) {
LAB_146e938cb:
    pUVar15 = pUVar21;
  }
  else {
    pUVar16 = Z_Construct_UClass_UBTCompositeNode_NoRegister();
    iVar12 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar16->_padding_)) goto LAB_146e938cb;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UBTCompositeNode *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  uVar24 = 0;
  local_94[0] = 0;
  local_80 = pUVar15;
  InitializeNodeHelper
            ((UBTCompositeNode *)0x0,(UBTNode *)pUVar15,'\0',local_94,&local_b8,param_1,
             (UObject *)this);
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FBehaviorTreeNodeInitializationData,int,FIdentityFunctor,TDereferenceWrapper<FBehaviorTreeNodeInitializationData,FBehaviorTreeNodeInitializationData::FMemorySort>_>
            ((FBehaviorTreeNodeInitializationData *)local_b8.AllocatorInstance.Data,
             local_b8.ArrayNum,local_res8,(FMemorySort *)local_98);
  uVar18 = local_b8._8_8_ & 0xffffffff;
  pUVar15 = pUVar21;
  if (0 < local_b8.ArrayNum) {
    do {
      uVar20 = (uint)pUVar21;
      uVar22 = ~uVar20 >> 0x1f;
      uVar19 = 0;
      uVar11 = uVar19;
      if ((int)uVar20 < (int)uVar18) {
        uVar11 = uVar22;
      }
      iVar12 = (int)uVar18;
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        iVar12 = local_b8.ArrayNum;
      }
      this_00 = *(UBTNode **)(local_b8.AllocatorInstance.Data + (longlong)&pUVar15->_padding_);
      uVar11 = uVar19;
      if ((int)uVar20 < iVar12) {
        uVar11 = uVar22;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        iVar12 = local_b8.ArrayNum;
      }
      uVar2 = ((undefined1 *)((longlong)&pUVar15->_padding_ + 6))
              [(longlong)local_b8.AllocatorInstance.Data];
      uVar11 = uVar19;
      if ((int)uVar20 < iVar12) {
        uVar11 = uVar22;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        iVar12 = local_b8.ArrayNum;
      }
      sVar3 = *(short *)((undefined1 *)((longlong)&pUVar15->_padding_ + 4) +
                        (longlong)local_b8.AllocatorInstance.Data);
      if ((int)uVar20 < iVar12) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        iVar12 = local_b8.ArrayNum;
      }
      uVar4 = *(ushort *)((longlong)&pUVar15->_padding_ + local_b8.AllocatorInstance.Data);
      uVar11 = 0;
      if ((int)uVar20 < iVar12) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      UBTNode::InitializeNode
                (this_00,*(UBTCompositeNode **)
                          ((longlong)&pUVar15->_padding_ + local_b8.AllocatorInstance.Data),uVar4,
                 uVar24 + sVar3,uVar2);
      uVar18 = (ulonglong)local_b8.ArrayNum;
      uVar11 = 0;
      if ((int)uVar20 < local_b8.ArrayNum) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        uVar18 = local_b8._8_8_ & 0xffffffff;
      }
      pUVar21 = (UBTCompositeNode *)(ulonglong)(uVar20 + 1);
      uVar24 = uVar24 + *(short *)((undefined1 *)((longlong)&pUVar15->_padding_ + 2) +
                                  (longlong)local_b8.AllocatorInstance.Data);
      pUVar15 = (UBTCompositeNode *)&pUVar15->_padding_;
    } while ((int)(uVar20 + 1) < (int)uVar18);
  }
  FVar17 = StatPtr_STAT_AI_BehaviorTree_NumTemplates;
  local_78 = uVar24;
  if (StatPtr_STAT_AI_BehaviorTree_NumTemplates ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumTemplates>)0x0) {
    pFVar13 = ::FName::FName(&local_40,"STAT_AI_BehaviorTree_NumTemplates");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumTemplates>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_NumTemplates,
                        *pFVar13,L"Num Templates","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                        L"Behavior Tree",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar17;
  if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    local_58.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
    local_58.StatData.Pad[0] = '\x01';
    local_58.StatData.Pad[1] = '\0';
    local_58.StatData.Pad[2] = '\0';
    local_58.StatData.Pad[3] = '\0';
    local_58.StatData.Pad[4] = '\0';
    local_58.StatData.Pad[5] = '\0';
    local_58.StatData.Pad[6] = '\0';
    local_58.StatData.Pad[7] = '\0';
    local_60 = FVar5;
    local_58.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_01,&local_58);
    FStatsTrace::Add(&local_60,1);
    if (this_01->ScopeCount == 0) {
      FThreadStats::Flush(this_01,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_01,false,false);
    }
  }
  pFVar6 = (this->LoadedTemplates).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 <
       pFVar6 + (longlong)(this->LoadedTemplates).ArrayMax * 0x18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  iVar12 = (this->LoadedTemplates).ArrayNum;
  piVar1 = &(this->LoadedTemplates).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&(this->LoadedTemplates).AllocatorInstance,piVar1);
  }
  (this->LoadedTemplates).ArrayNum = iVar12 + 1;
  pFVar6 = (this->LoadedTemplates).AllocatorInstance.Data + (longlong)iVar12 * 0x18;
  *(UBehaviorTree **)pFVar6 = local_88;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  *(UBTCompositeNode **)(pFVar6 + 8) = local_80;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UBTCompositeNode *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_80);
  }
  *(ushort *)(pFVar6 + 0x10) = local_78;
  *param_2 = local_80;
  *param_3 = local_78;
  if ((FBehaviorTreeNodeInitializationData *)local_b8.AllocatorInstance.Data !=
      (FBehaviorTreeNodeInitializationData *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  bVar9 = true;
LAB_146e93dbd:
  if ((local_a0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_a0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_a0 & 4) != 0) {
    FThreadStats::AddMessage(local_a8,CycleScopeEnd);
  }
  return bVar9;
}

// RemoveActiveComponent @ 146e9b1e0

void __thiscall
UBehaviorTreeManager::RemoveActiveComponent
          (UBehaviorTreeManager *this,UBehaviorTreeComponent *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UBehaviorTreeComponent *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UBehaviorTreeComponent *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTreeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->ActiveComponents).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       pFVar2 + (longlong)(this->ActiveComponents).ArrayMax * 8)) &&
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
  iVar1 = (this->ActiveComponents).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->ActiveComponents).AllocatorInstance.Data;
    bVar4 = *(UBehaviorTreeComponent **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UBehaviorTreeComponent **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->ActiveComponents).ArrayNum = iVar9;
  }
  return;
}

// StaticRegisterNativesUBehaviorTreeManager @ 146ea0230

void __cdecl UBehaviorTreeManager::StaticRegisterNativesUBehaviorTreeManager(void)

{
  return;
}

