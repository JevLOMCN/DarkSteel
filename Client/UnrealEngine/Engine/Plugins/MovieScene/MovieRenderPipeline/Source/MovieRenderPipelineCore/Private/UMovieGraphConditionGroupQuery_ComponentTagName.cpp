// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// StaticClass @ 14dc98760

UClass * __cdecl UMovieGraphConditionGroupQuery_ComponentTagName::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ComponentTagName",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.
                InnerSingleton,StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentTagName,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ComponentTagName>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ComponentTagName>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.InnerSingleton;
}

// UMovieGraphConditionGroupQuery_ComponentTagName @ 14dcaf6a0

UMovieGraphConditionGroupQuery_ComponentTagName * __thiscall
UMovieGraphConditionGroupQuery_ComponentTagName::UMovieGraphConditionGroupQuery_ComponentTagName
          (UMovieGraphConditionGroupQuery_ComponentTagName *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ComponentTagName__6B_;
  (this->TagsToMatch).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagsToMatch).Data.ArrayNum = 0;
  (this->TagsToMatch).Data.ArrayMax = 0;
  return this;
}

// UMovieGraphConditionGroupQuery_ComponentTagName @ 14dcaf6e0

UMovieGraphConditionGroupQuery_ComponentTagName * __thiscall
UMovieGraphConditionGroupQuery_ComponentTagName::UMovieGraphConditionGroupQuery_ComponentTagName
          (UMovieGraphConditionGroupQuery_ComponentTagName *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ComponentTagName__6B_;
  (this->TagsToMatch).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagsToMatch).Data.ArrayNum = 0;
  (this->TagsToMatch).Data.ArrayMax = 0;
  this->bOnlyMatchComponents = true;
  return this;
}

// ~UMovieGraphConditionGroupQuery_ComponentTagName @ 14dcb2a50

void __thiscall
UMovieGraphConditionGroupQuery_ComponentTagName::~UMovieGraphConditionGroupQuery_ComponentTagName
          (UMovieGraphConditionGroupQuery_ComponentTagName *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ComponentTagName__6B_;
  pFVar1 = (this->TagsToMatch).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14dcc3d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphConditionGroupQuery_ComponentTagName::Evaluate
          (UMovieGraphConditionGroupQuery_ComponentTagName *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  int iVar1;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((this->bOnlyMatchComponents != false) && (2 < (byte)LogMovieRenderPipeline._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  EvaluateActorsAndComponents
            (this,param_1,param_2,param_3,
             (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
             local_88);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// EvaluateActorsAndComponents @ 14dcc5690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphConditionGroupQuery_ComponentTagName::EvaluateActorsAndComponents
          (UMovieGraphConditionGroupQuery_ComponentTagName *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3,
          TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *param_4
          )

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  AActor *pAVar3;
  longlong lVar4;
  code *pcVar5;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *this_00;
  UMovieGraphConditionGroupQuery_ComponentTagName *pUVar6;
  AActor **ppAVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  TArrayView<AActor_*_const,int> *pTVar14;
  UClass *pUVar15;
  ForElementType<UActorComponent_*> FVar16;
  FString *this_01;
  ulonglong uVar17;
  wchar_t *pwVar18;
  uint uVar19;
  ForElementType<UActorComponent_*> FVar20;
  ForElementType<UActorComponent_*> FVar21;
  FName *this_02;
  ulonglong uVar22;
  longlong lVar23;
  ForAnyElementType FVar24;
  FScriptContainerElement *pFVar25;
  bool bVar26;
  undefined1 auStackY_2b8 [32];
  undefined1 local_287;
  undefined1 local_286;
  undefined1 local_285;
  undefined1 local_284;
  undefined1 local_283 [3];
  uint local_280;
  uint local_27c;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_278;
  UClass *local_270;
  TArray<FString,TSizedDefaultAllocator<32>_> local_268;
  UClass *local_258;
  ForElementType<UActorComponent_*> local_250;
  ForElementType<UActorComponent_*> local_248;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_240;
  undefined1 local_238 [8];
  UMovieGraphConditionGroupQuery_ComponentTagName *local_230;
  longlong local_228;
  AActor *local_220;
  TArrayView<AActor_*_const,int> local_218;
  TArrayView<AActor_*_const,int> local_208;
  FString local_1f8;
  ForElementType<UActorComponent_*> local_1e8;
  uint local_120;
  int local_11c;
  ForElementType<UActorComponent_*> local_118;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_278 = param_4;
  bVar26 = -1 < CpuChannel->Enabled;
  local_240 = param_1;
  local_230 = this;
  local_208.DataPtr = (AActor **)param_3;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1803,
               "UMovieGraphConditionGroupQuery_ComponentTagName::Evaluate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphRenderLayerSubsystem.cpp"
               ,0x70b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1803);
  }
  if ((this->TagsToMatch).Data.ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(this->TagsToMatch).Data.AllocatorInstance.Data;
  }
  iVar9 = FGenericPlatformStricmp::Stricmp(pwVar18,L"*");
  if (iVar9 == 0) {
    if (this->bOnlyMatchComponents == false) {
      pTVar14 = TArrayView<AActor_*_const,int>::
                TArrayView<AActor_*_const,int><TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_>
                          (&local_208,param_1);
      local_218.DataPtr = pTVar14->DataPtr;
      local_218.ArrayNum = pTVar14->ArrayNum;
      local_218._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
      TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Append(param_3,&local_218);
      goto LAB_14dcc5d2d;
    }
    pFVar25 = (param_1->AllocatorInstance).Data;
    iVar9 = param_1->ArrayNum;
    local_118.SecondaryData = (ForElementType<UActorComponent_*>)0x0;
    local_50 = 0;
    local_4c = 0x18;
    pFVar1 = pFVar25 + (longlong)iVar9 * 8;
    while( true ) {
      pUVar15 = (UClass *)0x0;
      if (local_240->ArrayNum != iVar9) {
        local_287 = 0;
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_287);
      }
      FVar24.Data = (FScriptContainerElement *)local_118.SecondaryData;
      if (pFVar25 == pFVar1) break;
      pAVar3 = *(AActor **)pFVar25;
      local_50 = 0;
      if ((local_4c < 0) && (local_4c != 0)) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                  (8,8,0,&local_118,0,&local_4c);
      }
      pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar12 != (UClass *)0x0) goto LAB_14dcc5813;
      }
      else if (pUVar12 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_14dcc5813:
        pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar13 != (UClass *)0x0) {
          iVar11 = (int)pUVar13->_padding_;
          if (((int)pUVar12->_padding_ < iVar11) ||
             ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar11 * 8) !=
              &pUVar13->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            pUVar15 = pUVar12;
          }
        }
      }
      pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar15 == pUVar13) {
        local_270 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        AActor::
        ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (pAVar3,(TSubclassOf<UActorComponent>)&local_270,
                   (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)&local_118);
      }
      else {
        local_258 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        AActor::
        ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (pAVar3,(TSubclassOf<UActorComponent>)&local_258,
                   (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)&local_118);
      }
      iVar11 = local_50;
      lVar23 = (longlong)local_50;
      FVar21 = (ForElementType<UActorComponent_*>)&local_118;
      if (local_118.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
        FVar21 = local_118.SecondaryData;
      }
      if ((local_50 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = *(int *)&(local_278->Elements).field_0x8 - *(int *)&(local_278->Elements).field_0x34;
      uVar19 = uVar10 + iVar11;
      if (uVar10 < uVar19) {
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
        }
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_278,uVar19);
        if (uVar19 < 4) {
          iVar11 = 1;
        }
        else {
          uVar17 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_27c = (uint)lVar4;
          iVar11 = 1 << ((byte)lVar4 & 0x1f);
        }
        if ((local_278->HashSize == 0) || (local_278->HashSize < iVar11)) {
          local_278->HashSize = iVar11;
          TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::Rehash
                    (local_278);
        }
      }
      this_00 = local_278;
      FVar20 = (ForElementType<UActorComponent_*>)((longlong)FVar21 + lVar23 * 8);
      for (; FVar21 != FVar20; FVar21 = (ForElementType<UActorComponent_*>)((longlong)FVar21 + 8)) {
        TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
        Emplace<UActorComponent_*_const_&>(this_00,(UActorComponent **)&local_280,(bool *)FVar21);
      }
      pFVar25 = pFVar25 + 8;
    }
  }
  else {
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0;
    ::FString::ParseIntoArrayLines(&this->TagsToMatch,&local_268,true);
    local_27c = param_1->ArrayNum;
    uVar17 = (ulonglong)(int)local_27c;
    pUVar15 = (UClass *)(param_1->AllocatorInstance).Data;
    local_1e8.SecondaryData = (ForElementType<UActorComponent_*>)0x0;
    local_120 = 0;
    local_11c = 0x18;
    local_218.DataPtr = (AActor **)(&pUVar15->_padding_ + uVar17);
    while( true ) {
      ppAVar7 = local_218.DataPtr;
      local_270 = pUVar15;
      if (param_1->ArrayNum != (int)uVar17) {
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_286);
      }
      if (pUVar15 == (UClass *)ppAVar7) break;
      pAVar3 = (AActor *)pUVar15->_padding_;
      local_120 = 0;
      local_220 = pAVar3;
      if ((local_11c < 0) && (local_11c != 0)) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                  (8,8,0,&local_1e8,0,&local_11c);
      }
      FVar21 = (ForElementType<UActorComponent_*>)Z_Construct_UClass_UActorComponent_NoRegister();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (FVar21 != (ForElementType<UActorComponent_*>)0x0) goto LAB_14dcc5a9f;
LAB_14dcc5ad0:
        FVar20 = (ForElementType<UActorComponent_*>)0x0;
      }
      else {
        if (FVar21 == (ForElementType<UActorComponent_*>)0x0) goto LAB_14dcc5ad0;
        UE::GC::MarkAsReachable((UObject *)FVar21);
LAB_14dcc5a9f:
        pUVar15 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar15 == (UClass *)0x0) goto LAB_14dcc5ad0;
        iVar9 = (int)pUVar15->_padding_;
        if ((*(int *)((longlong)FVar21 + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)FVar21 + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar15->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        FVar20 = FVar21;
        if (!bVar8) goto LAB_14dcc5ad0;
      }
      FVar16 = (ForElementType<UActorComponent_*>)Z_Construct_UClass_UActorComponent_NoRegister();
      if (FVar20 == FVar16) {
        local_250 = FVar21;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FVar21 != (ForElementType<UActorComponent_*>)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar21);
        }
        AActor::
        ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (pAVar3,(TSubclassOf<UActorComponent>)&local_250,
                   (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)&local_1e8);
      }
      else {
        local_248 = FVar21;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FVar21 != (ForElementType<UActorComponent_*>)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar21);
        }
        AActor::
        ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (pAVar3,(TSubclassOf<UActorComponent>)&local_248,
                   (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)&local_1e8);
      }
      uVar17 = (ulonglong)(int)local_120;
      local_280 = local_120;
      FVar21 = (ForElementType<UActorComponent_*>)&local_1e8;
      if (local_1e8.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
        FVar21 = local_1e8.SecondaryData;
      }
      local_250 = (ForElementType<UActorComponent_*>)((longlong)FVar21 + uVar17 * 8);
      uVar22 = uVar17;
      while( true ) {
        FVar20 = local_250;
        if ((int)uVar17 != (int)uVar22) {
          `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_285);
        }
        if (FVar21 == FVar20) break;
        uVar17 = (ulonglong)local_268.ArrayNum;
        lVar23 = *(longlong *)FVar21;
        local_248 = (ForElementType<UActorComponent_*>)
                    (uVar17 * 0x10 + (longlong)local_268.AllocatorInstance.Data);
        local_258 = (UClass *)CONCAT44(local_258._4_4_,local_268.ArrayNum);
        FVar24.Data = local_268.AllocatorInstance.Data;
        local_228 = lVar23;
        while( true ) {
          FVar20 = local_248;
          if (local_268.ArrayNum != (int)uVar17) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_284);
          }
          if ((ForElementType<UActorComponent_*>)FVar24.Data == FVar20) break;
          this_02 = *(FName **)(lVar23 + 0x68);
          iVar9 = *(int *)(lVar23 + 0x70);
          pFVar2 = this_02 + iVar9;
          while( true ) {
            if (*(int *)(lVar23 + 0x70) != iVar9) {
              `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_283);
            }
            if (this_02 == pFVar2) break;
            this_01 = ::FName::ToString(this_02,&local_1f8);
            iVar11 = *(int *)((longlong)FVar24.Data + 8) + -1;
            if (*(int *)((longlong)FVar24.Data + 8) == 0) {
              iVar11 = 0;
              pwVar18 = L"";
            }
            else {
              pwVar18 = *(wchar_t **)FVar24.Data;
            }
            bVar8 = ::FString::MatchesWildcard(this_01,pwVar18,iVar11,IgnoreCase);
            if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            }
            pUVar6 = local_230;
            if (bVar8) {
              if (local_230->bOnlyMatchComponents == false) {
                TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::
                Emplace<AActor_*_const_&>
                          ((TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)
                           local_208.DataPtr,(AActor **)(local_238 + 4),(bool *)&local_220);
              }
              else {
                TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
                Emplace<UActorComponent_*_const_&>
                          (local_278,(UActorComponent **)local_238,(bool *)&local_228);
              }
              if (pUVar6->bOnlyMatchComponents == false) goto LAB_14dcc5c9f;
              goto LAB_14dcc5c86;
            }
            this_02 = this_02 + 1;
          }
          FVar24.Data = FVar24.Data + 0x10;
          uVar17 = (ulonglong)local_258 & 0xffffffff;
        }
LAB_14dcc5c86:
        uVar17 = (ulonglong)local_120;
        FVar21 = (ForElementType<UActorComponent_*>)((longlong)FVar21 + 8);
        uVar22 = (ulonglong)local_280;
      }
LAB_14dcc5c9f:
      local_120 = 0;
      if ((local_11c < 0) && (local_11c != 0)) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                  (8,8,0,&local_1e8,0,&local_11c);
      }
      uVar17 = (ulonglong)local_27c;
      pUVar15 = (UClass *)&local_270->_padding_;
      param_1 = local_240;
    }
    if (local_1e8.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
      FMemory::Free((void *)local_1e8.SecondaryData);
    }
    DestructItems<FString,int>((FString *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
    FVar24.Data = local_268.AllocatorInstance.Data;
  }
  if ((ForElementType<UActorComponent_*>)FVar24.Data != (ForElementType<UActorComponent_*>)0x0) {
    FMemory::Free(FVar24.Data);
  }
LAB_14dcc5d2d:
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetDisplayName @ 14dccc960

FText * __thiscall
UMovieGraphConditionGroupQuery_ComponentTagName::GetDisplayName
          (UMovieGraphConditionGroupQuery_ComponentTagName *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName_ComponentTagName",
                 L"Component Tag Name");
      atexit(`UMovieGraphConditionGroupQuery_ComponentTagName::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dccde30

FSlateIcon * __thiscall
UMovieGraphConditionGroupQuery_ComponentTagName::GetIcon
          (UMovieGraphConditionGroupQuery_ComponentTagName *this)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,"MainFrame.OpenIssueTracker");
      FVar1 = *pFVar2;
      FVar3 = FAppStyle::GetAppStyleSetName();
      FSlateIcon::FSlateIcon(&ActorTagIcon,*(FName *)FVar3,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &ActorTagIcon;
    }
  }
  return &ActorTagIcon;
}

// GetPrivateStaticClass @ 14dcd1f40

UClass * __cdecl UMovieGraphConditionGroupQuery_ComponentTagName::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ComponentTagName",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.
                InnerSingleton,StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentTagName,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ComponentTagName>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ComponentTagName>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.InnerSingleton;
}

// Serialize @ 14dce25e0

void __thiscall
UMovieGraphConditionGroupQuery_ComponentTagName::Serialize
          (UMovieGraphConditionGroupQuery_ComponentTagName *this,FArchive *param_1)

{
  int iVar1;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FMovieRenderPipelineCoreObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FMovieRenderPipelineCoreObjectVersion::GUID);
  if (iVar1 < 1) {
    this->bOnlyMatchComponents = false;
  }
  return;
}

// Serialize @ 14dce2640

void __thiscall
UMovieGraphConditionGroupQuery_ComponentTagName::Serialize
          (UMovieGraphConditionGroupQuery_ComponentTagName *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FMovieRenderPipelineCoreObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FMovieRenderPipelineCoreObjectVersion::GUID);
  if (iVar1 < 1) {
    this->bOnlyMatchComponents = false;
  }
  return;
}

// ShouldEvaluateComponents @ 14dce4b00

bool __thiscall
UMovieGraphConditionGroupQuery_ComponentTagName::ShouldEvaluateComponents
          (UMovieGraphConditionGroupQuery_ComponentTagName *this)

{
  return this->bOnlyMatchComponents;
}

// StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentTagName @ 14dce6480

void __cdecl
UMovieGraphConditionGroupQuery_ComponentTagName::
StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentTagName(void)

{
  return;
}

