// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 33

// StaticClass @ 14a90e030

UClass * __cdecl UPoseSearchInteractionSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchInteractionSubsystem",
               &Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.InnerSingleton,
               StaticRegisterNativesUPoseSearchInteractionSubsystem,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchInteractionSubsystem>,
               InternalVTableHelperCtorCaller<UPoseSearchInteractionSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.InnerSingleton;
}

// UPoseSearchInteractionSubsystem @ 14a91a270

UPoseSearchInteractionSubsystem * __thiscall
UPoseSearchInteractionSubsystem::UPoseSearchInteractionSubsystem
          (UPoseSearchInteractionSubsystem *this,FVTableHelper *param_1)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->AnimContextsAvailabilitiesBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimContextsAvailabilitiesBuffer).ArrayNum = 0;
  (this->AnimContextsAvailabilitiesBuffer).ArrayMax = 0;
  (this->AnimContextsAvailabilitiesIndex).Counter = 0;
  this->AnimContextsAvailabilitiesNum = 0;
  (this->Islands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Islands).ArrayNum = 0;
  (this->Islands).ArrayMax = 0;
  (this->ValidInteractionSearches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidInteractionSearches).ArrayNum = 0;
  (this->ValidInteractionSearches).ArrayMax = 0;
  return this;
}

// UPoseSearchInteractionSubsystem @ 14a91a2d0

UPoseSearchInteractionSubsystem * __thiscall
UPoseSearchInteractionSubsystem::UPoseSearchInteractionSubsystem
          (UPoseSearchInteractionSubsystem *this)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->AnimContextsAvailabilitiesBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimContextsAvailabilitiesBuffer).ArrayNum = 0;
  (this->AnimContextsAvailabilitiesBuffer).ArrayMax = 0;
  (this->AnimContextsAvailabilitiesIndex).Counter = 0;
  this->AnimContextsAvailabilitiesNum = 0;
  (this->Islands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Islands).ArrayNum = 0;
  (this->Islands).ArrayMax = 0;
  (this->ValidInteractionSearches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidInteractionSearches).ArrayNum = 0;
  (this->ValidInteractionSearches).ArrayMax = 0;
  return this;
}

// ~UPoseSearchInteractionSubsystem @ 14a91af60

void __thiscall
UPoseSearchInteractionSubsystem::~UPoseSearchInteractionSubsystem
          (UPoseSearchInteractionSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  DestructItems<UE::PoseSearch::FValidInteractionSearch,int>
            ((FValidInteractionSearch *)(this->ValidInteractionSearches).AllocatorInstance.Data,
             (this->ValidInteractionSearches).ArrayNum);
  pFVar1 = (this->ValidInteractionSearches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Islands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPoseSearchInteractionAnimContextAvailabilities,int>
            ((FPoseSearchInteractionAnimContextAvailabilities *)
             (this->AnimContextsAvailabilitiesBuffer).AllocatorInstance.Data,
             (this->AnimContextsAvailabilitiesBuffer).ArrayNum);
  pFVar1 = (this->AnimContextsAvailabilitiesBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// operator() @ 14a91ce00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::<lambda_1>::operator()
          (void *this,FAnimContextInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  UAnimInstance *pUVar2;
  void *pvVar3;
  FName FVar4;
  TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong *puVar6;
  UPoseSearchSchema *pUVar7;
  code *pcVar8;
  UPoseSearchDatabase *pUVar9;
  FName *pFVar10;
  FPoseSearchInteractionAvailabilityEx *pFVar11;
  int *piVar12;
  bool bVar13;
  int iVar14;
  UClass *pUVar15;
  FAnimNode_PoseSearchHistoryCollector_Base *this_00;
  FPoseHistory *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  void *pvVar19;
  undefined1 *puVar20;
  longlong lVar21;
  FPoseSearchInteractionAvailabilityEx *pFVar22;
  ulonglong *puVar23;
  void *pvVar24;
  FScriptContainerElement *pFVar25;
  TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *this_01;
  int *piVar26;
  int iVar27;
  FName *this_02;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146 [2];
  int local_144;
  FPoseSearchInteractionAvailabilityEx *local_140;
  int *local_138;
  UPoseSearchDatabase *local_130;
  UPoseSearchDatabase *local_128;
  int local_120;
  int local_11c;
  uint local_118;
  uint local_114;
  ulonglong *local_110;
  ulonglong *local_108;
  UPoseSearchDatabase **local_100;
  FName local_f8;
  UPoseSearchDatabase **local_f0;
  void *local_e8;
  FName local_e0;
  FName *local_d8;
  FPoseSearchInteractionAvailabilityEx *local_d0;
  FPoseSearchInteractionAnimContextAvailabilities *local_c8;
  FString local_c0;
  FRoledAnimContextInfo local_b0;
  FRoledAnimContextInfo local_88;
  FString local_60 [2];
  
  if ((param_1->AnimContextAvailabilities == (FPoseSearchInteractionAnimContextAvailabilities *)0x0)
     && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("AnimContextInfo.AnimContextAvailabilities",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                             ,0x2e1,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_c8 = param_1->AnimContextAvailabilities;
  local_114 = (local_c8->Availabilities).ArrayNum;
  uVar18 = (ulonglong)(int)local_114;
  pFVar22 = (FPoseSearchInteractionAvailabilityEx *)
            (local_c8->Availabilities).AllocatorInstance.Data;
  local_d0 = pFVar22 + uVar18;
LAB_14a91ce75:
  do {
    pFVar11 = local_d0;
    local_140 = pFVar22;
    if ((local_c8->Availabilities).ArrayNum != (int)uVar18) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPoseSearchInteractionAvailabilityEx_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (pFVar22 == pFVar11) {
      return;
    }
    pFVar16 = (FPoseHistory *)pFVar22->PoseHistory;
    pUVar2 = (UAnimInstance *)(param_1->AnimContextAvailabilities->AnimContext).field0_0x0.DebugPtr;
    if (pFVar16 == (FPoseHistory *)0x0) {
      if (pUVar2 == (UAnimInstance *)0x0) {
LAB_14a91cef9:
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Unimplemented function called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                            ,0x6b,L"");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar16 = (FPoseHistory *)0x0;
      }
      else {
        pUVar15 = Z_Construct_UClass_UAnimInstance_NoRegister();
        iVar14 = (int)pUVar15->_padding_;
        if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar14) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
             &pUVar15->_padding_)) ||
           (this_00 = UPoseSearchLibrary::FindPoseHistoryNode(pFVar22->PoseHistoryName,pUVar2),
           this_00 == (FAnimNode_PoseSearchHistoryCollector_Base *)0x0)) goto LAB_14a91cef9;
        pFVar16 = FAnimNode_PoseSearchHistoryCollector_Base::GetPoseHistory(this_00);
        if (pFVar16 != (FPoseHistory *)0x0) goto LAB_14a91cf48;
      }
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PoseHistory",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                          ,0x2e5,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
LAB_14a91cf48:
    local_130 = (UPoseSearchDatabase *)pFVar22->_padding_;
    if (local_130 != (UPoseSearchDatabase *)0x0) {
      if (((local_130->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Database->Schema",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                              ,0x2e9,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pvVar24 = *(void **)((longlong)this + 8);
      uVar17 = ((uint)((ulonglong)local_130 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_130 >> 4)) *
               -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar17 = uVar17 >> 0x10 ^ uVar17;
      if (*(int *)((longlong)pvVar24 + 0x308) != *(int *)((longlong)pvVar24 + 0x32c)) {
        lVar21 = (longlong)pvVar24 + 0x330;
        if (*(longlong *)((longlong)pvVar24 + 0x338) != 0) {
          lVar21 = *(longlong *)((longlong)pvVar24 + 0x338);
        }
        iVar14 = *(int *)(lVar21 + (ulonglong)(*(int *)((longlong)pvVar24 + 0x340) - 1U & uVar17) *
                                   4);
        if (iVar14 != -1) {
          pvVar3 = *(void **)((longlong)pvVar24 + 0x300);
          do {
            pvVar19 = pvVar24;
            if (pvVar3 != (void *)0x0) {
              pvVar19 = pvVar3;
            }
            if (*(UPoseSearchDatabase **)((longlong)iVar14 * 0xc0 + (longlong)pvVar19) == local_130)
            {
              if (iVar14 != -1) {
                pvVar19 = pvVar24;
                if (pvVar3 != (void *)0x0) {
                  pvVar19 = pvVar3;
                }
                pvVar19 = (void *)((longlong)iVar14 * 0xc0 + (longlong)pvVar19);
                if (pvVar19 != (void *)0x0) goto LAB_14a91d0a0;
              }
              break;
            }
            pvVar19 = pvVar24;
            if (pvVar3 != (void *)0x0) {
              pvVar19 = pvVar3;
            }
            iVar14 = *(int *)((longlong)pvVar19 + (longlong)iVar14 * 0xc0 + 0xb8);
          } while (iVar14 != -1);
        }
      }
      local_100 = &local_130;
      TSet<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
      ::EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_const_&>_>
                (pvVar24,(uint)&local_120,
                 (TKeyInitializer<UPoseSearchDatabase_const_*_const_&> *)(ulonglong)uVar17,
                 (bool *)&local_100);
      if (*(void **)((longlong)pvVar24 + 0x300) != (void *)0x0) {
        pvVar24 = *(void **)((longlong)pvVar24 + 0x300);
      }
      pvVar19 = (void *)((longlong)local_120 * 0xc0 + (longlong)pvVar24);
LAB_14a91d0a0:
      FRoledAnimContextInfos::AddRoledAnimContextInfos
                ((void *)((longlong)pvVar19 + 8),pFVar22,param_1,(IPoseHistory *)pFVar16,local_130);
LAB_14a91d5a4:
      pFVar22 = pFVar22 + 1;
      uVar18 = (ulonglong)local_114;
      goto LAB_14a91ce75;
    }
    FVar4 = (FName)pFVar22->_padding_;
    if (FVar4 != (FName)0x0) {
      this_01 = *(TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                  **)this;
      local_f8 = FVar4;
      uVar17 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      iVar14 = TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               ::FindIndexByHash<FName>(this_01,FVar4.Number + uVar17,&local_f8);
      if (iVar14 != -1) {
        pTVar5 = *(TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this_01->Elements).field_0x900;
        if (pTVar5 != (TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          this_01 = pTVar5;
        }
        puVar20 = &(this_01->Elements).field_0x0 + (longlong)iVar14 * 0x120;
        if ((puVar20 != (undefined1 *)0x0) &&
           (puVar23 = (ulonglong *)(puVar20 + 8), local_110 = puVar23, puVar23 != (ulonglong *)0x0))
        {
          piVar26 = (int *)(puVar20 + 0x110);
          local_138 = piVar26;
          if ((*piVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!DatabasesPerTag->IsEmpty()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                  ,0x2f2,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_144 = *piVar26;
          puVar6 = *(ulonglong **)(puVar20 + 0x108);
          piVar12 = piVar26;
          if (puVar6 != (ulonglong *)0x0) {
            puVar23 = puVar6;
            piVar12 = local_138;
            local_110 = puVar6;
          }
          local_138 = piVar12;
          local_108 = puVar23 + local_144;
          while( true ) {
            puVar6 = local_108;
            iVar14 = local_144;
            if (*piVar26 != local_144) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<UPoseSearchDatabase_const_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            if (puVar23 == puVar6) break;
            local_128 = (UPoseSearchDatabase *)*puVar23;
            if (((local_128 == (UPoseSearchDatabase *)0x0) ||
                ((local_128->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DatabaseFromTag && DatabaseFromTag->Schema",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                    ,0x2f5,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pvVar24 = *(void **)((longlong)this + 8);
            uVar17 = ((uint)((ulonglong)local_128 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_128 >> 4)) * -0x7a143595;
            uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
            uVar17 = uVar17 >> 0x10 ^ uVar17;
            if (*(int *)((longlong)pvVar24 + 0x308) != *(int *)((longlong)pvVar24 + 0x32c)) {
              lVar21 = (longlong)pvVar24 + 0x330;
              if (*(longlong *)((longlong)pvVar24 + 0x338) != 0) {
                lVar21 = *(longlong *)((longlong)pvVar24 + 0x338);
              }
              iVar27 = *(int *)(lVar21 + (ulonglong)
                                         (*(int *)((longlong)pvVar24 + 0x340) - 1U & uVar17) * 4);
              if (iVar27 != -1) {
                pvVar3 = *(void **)((longlong)pvVar24 + 0x300);
                do {
                  pvVar19 = pvVar24;
                  if (pvVar3 != (void *)0x0) {
                    pvVar19 = pvVar3;
                  }
                  local_144 = iVar14;
                  local_138 = piVar26;
                  if (*(UPoseSearchDatabase **)((longlong)iVar27 * 0xc0 + (longlong)pvVar19) ==
                      local_128) {
                    if (iVar27 != -1) {
                      pvVar19 = pvVar24;
                      if (pvVar3 != (void *)0x0) {
                        pvVar19 = pvVar3;
                      }
                      pvVar19 = (void *)((longlong)iVar27 * 0xc0 + (longlong)pvVar19);
                      if (pvVar19 != (void *)0x0) goto LAB_14a91d300;
                    }
                    break;
                  }
                  pvVar19 = pvVar24;
                  if (pvVar3 != (void *)0x0) {
                    pvVar19 = pvVar3;
                  }
                  iVar27 = *(int *)((longlong)iVar27 * 0xc0 + 0xb8 + (longlong)pvVar19);
                } while (iVar27 != -1);
              }
            }
            local_f0 = &local_128;
            TSet<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
            ::EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_const_&>_>
                      (pvVar24,(uint)&local_11c,
                       (TKeyInitializer<UPoseSearchDatabase_const_*_const_&> *)(ulonglong)uVar17,
                       (bool *)&local_f0);
            if (*(void **)((longlong)pvVar24 + 0x300) != (void *)0x0) {
              pvVar24 = *(void **)((longlong)pvVar24 + 0x300);
            }
            pvVar19 = (void *)((longlong)local_11c * 0xc0 + (longlong)pvVar24);
LAB_14a91d300:
            pUVar9 = local_128;
            pUVar7 = (local_128->Schema).field0_0x0.DebugPtr;
            pvVar19 = (void *)((longlong)pvVar19 + 8);
            local_e8 = pvVar19;
            if ((pUVar7 == (UPoseSearchSchema *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Schema",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                    ,0x280,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((int)local_140->_padding_ == 0) {
              iVar14 = (pUVar7->Skeletons).ArrayNum;
              pFVar25 = (pUVar7->Skeletons).AllocatorInstance.Data;
              pFVar1 = pFVar25 + (longlong)iVar14 * 0x48;
              while( true ) {
                if ((pUVar7->Skeletons).ArrayNum != iVar14) {
                  local_148 = 0;
                  `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2
                  ::<lambda_1>::operator()(&local_148);
                }
                if (pFVar25 == pFVar1) break;
                local_b0.Role = *(FName *)(pFVar25 + 0x10);
                local_b0.Availability = local_140;
                local_b0.AnimContextInfo = param_1;
                local_b0.PoseHistory = (IPoseHistory *)pFVar16;
                local_b0.Database = pUVar9;
                TArray<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                ::
                AddUniqueImpl<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo>
                          (pvVar19,&local_b0);
                pFVar25 = pFVar25 + 0x48;
              }
            }
            else {
              local_118 = (uint)local_140->_padding_;
              uVar18 = (ulonglong)(int)local_118;
              this_02 = (FName *)local_140->_padding_;
              local_d8 = this_02 + uVar18;
              pFVar22 = local_140;
LAB_14a91d411:
              pFVar10 = local_d8;
              if ((int)pFVar22->_padding_ != (int)uVar18) {
                local_147 = 0;
                `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_147);
              }
              if (this_02 != pFVar10) {
                iVar14 = (pUVar7->Skeletons).ArrayNum;
                pFVar25 = (pUVar7->Skeletons).AllocatorInstance.Data;
                pFVar1 = pFVar25 + (longlong)iVar14 * 0x48;
                while( true ) {
                  if ((pUVar7->Skeletons).ArrayNum != iVar14) {
                    local_146[0] = 0;
                    `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(local_146);
                  }
                  pFVar22 = local_140;
                  if (pFVar25 == pFVar1) {
                    if (2 < (byte)LogPoseSearch._0_1_) {
                      local_e0 = (FName)pUVar9->_padding_;
                      ::FName::ToString(&local_e0,&local_c0);
                      ::FName::ToString(this_02,local_60);
                      UE::Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
                      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                      }
                      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                      }
                    }
                    uVar18 = (ulonglong)local_118;
                    this_02 = this_02 + 1;
                    pFVar22 = local_140;
                    goto LAB_14a91d411;
                  }
                  if (*(FName *)(pFVar25 + 0x10) == *this_02) break;
                  pFVar25 = pFVar25 + 0x48;
                }
                local_88.Availability = local_140;
                local_88.AnimContextInfo = param_1;
                local_88.Role = *this_02;
                local_88.PoseHistory = (IPoseHistory *)pFVar16;
                local_88.Database = pUVar9;
                TArray<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                ::
                AddUniqueImpl<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo>
                          (local_e8,&local_88);
                uVar18 = (ulonglong)local_118;
                this_02 = this_02 + 1;
                goto LAB_14a91d411;
              }
            }
            puVar23 = local_110 + 1;
            pFVar22 = local_140;
            piVar26 = local_138;
            local_110 = puVar23;
          }
        }
      }
      goto LAB_14a91d5a4;
    }
    if ((byte)LogPoseSearch._0_1_ < 5) goto LAB_14a91d5a4;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    pFVar22 = pFVar22 + 1;
    uVar18 = (ulonglong)local_114;
  } while( true );
}

// operator() @ 14a91e1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::<lambda_2>::operator()(void *this)

{
  FSparsePoseMultiMap<int> *pFVar1;
  ulonglong uVar2;
  int iVar3;
  UPoseSearchSchema *pUVar4;
  code *pcVar5;
  FIdentityFunctor FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FRoledAnimContextInfos *pFVar11;
  uint uVar12;
  uint uVar13;
  UPoseSearchDatabase *pUVar14;
  int iVar15;
  FSparsePoseMultiMap<int> *pFVar16;
  int iVar17;
  UPoseSearchDatabase *pUVar18;
  longlong *plVar19;
  undefined1 auStackY_158 [32];
  FIdentityFunctor local_128;
  undefined1 local_127 [3];
  int local_124;
  undefined8 *local_120;
  <lambda_2> local_118;
  int iStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int local_e4;
  TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *local_e0;
  TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int> *local_d8;
  UPoseSearchDatabase *local_d0;
  UPoseSearchDatabase *local_c8;
  undefined1 auStack_c0 [20];
  uint uStack_ac;
  TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int> *local_a8;
  undefined8 uStack_a0;
  ForElementType<int> local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<int,int> local_88 [2];
  undefined4 local_5c;
  undefined1 local_58 [16];
  ForElementType<int> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pUVar18 = *(UPoseSearchDatabase **)this;
  iVar15 = 0;
  iVar17 = 0;
  uVar8 = 1;
  pFVar1 = &pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes;
  iVar3 = *(int *)&pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DataValues.
                   AllocatorInstance.Data;
  iVar9 = 0;
  if (iVar3 != 0) {
    pFVar16 = *(FSparsePoseMultiMap<int> **)
               &pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DeltaKeyValue;
    if (pFVar16 == (FSparsePoseMultiMap<int> *)0x0) {
      pFVar16 = pFVar1;
    }
    uVar13 = pFVar16->MaxKey;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a91e2ae;
      uVar13 = (&pFVar16->MaxValue)[lVar10];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_e8 = (int)lVar10;
    iVar9 = iVar17 + -1 + local_e8;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14a91e2ae:
  uVar13 = *(uint *)&pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DataValues.
                     AllocatorInstance.Data;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_f0 = pUVar18[1].SearchIndexPrivate.PCAValues.ArrayNum -
              pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DataValues.ArrayMax;
  local_118.SearchContexts =
       (TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
        *)CONCAT44(iVar9,0xffffffff);
  local_118.RoledSkeletons =
       (TArray<FPoseSearchRoledSkeleton,TSizedDefaultAllocator<32>_> *)CONCAT44(uVar8,iVar15);
  local_118.PreviousValidInteractionSearches =
       (TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int> *)CONCAT44(local_5c,iVar17);
  auStack_c0._0_8_ = local_118.RoledSkeletons;
  iVar15 = (int)uVar13 >> 5;
  uStack_a0 = CONCAT44(uStack_ec,iStack_f0);
  stack0xffffffffffffff50 = local_118.SearchContexts;
  local_a8 = local_118.PreviousValidInteractionSearches;
  local_120 = this;
  local_118.Database = pUVar18;
  local_118.RoledAnimContextInfos = (FRoledAnimContextInfos *)pFVar1;
  local_d0 = pUVar18;
  local_c8 = pUVar18;
  auStack_c0._8_8_ = pFVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_128;
  uVar8 = *(uint *)&pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DataValues.
                    AllocatorInstance.Data;
  if (uVar13 != uVar8) {
    pFVar16 = *(FSparsePoseMultiMap<int> **)
               &pUVar18[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DeltaKeyValue;
    if (pFVar16 == (FSparsePoseMultiMap<int> *)0x0) {
      pFVar16 = pFVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & (&pFVar16->MaxKey)[iVar15];
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar15;
      uVar12 = uVar12 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a91e3d0;
      uVar13 = (&pFVar16->MaxValue)[lVar10];
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_e4 = (int)lVar10;
    uVar13 = local_e4 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_14a91e3d0:
  while( true ) {
    pUVar14 = local_c8;
    if (local_c8[1].SearchIndexPrivate.PCAValues.ArrayNum -
        local_c8[1].SearchIndexPrivate.PCAValuesVectorToPoseIndexes.DataValues.ArrayMax !=
        (int)uStack_a0) {
      local_128 = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_128);
    }
    if (((uStack_ac == uVar13) && ((FSparsePoseMultiMap<int> *)auStack_c0._8_8_ == pFVar1)) &&
       (pUVar14 == pUVar18)) {
      TSet<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
      ::Reset((void *)*local_120);
      return;
    }
    pUVar18 = (UPoseSearchDatabase *)pUVar14[1].SearchIndexPrivate.PCAValues.AllocatorInstance.Data;
    if (pUVar18 != (UPoseSearchDatabase *)0x0) {
      pUVar14 = pUVar18;
    }
    plVar19 = &pUVar14->_padding_ + (longlong)(int)uStack_ac * 0x18;
    pUVar18 = (UPoseSearchDatabase *)*plVar19;
    if (((pUVar18->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Database->Schema",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                           ,0x321,L""), bVar7)) break;
    pUVar4 = (pUVar18->Schema).field0_0x0.DebugPtr;
    pFVar11 = (FRoledAnimContextInfos *)(plVar19 + 1);
    if ((FRoledAnimContextInfos *)plVar19[0x15] != (FRoledAnimContextInfos *)0x0) {
      pFVar11 = (FRoledAnimContextInfos *)plVar19[0x15];
    }
    iVar3 = (pUVar4->Skeletons).ArrayNum;
    AlgoImpl::
    IntroSortInternal<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo,int,FIdentityFunctor,TDereferenceWrapper<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo,__UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::<lambda_2>::operator()_::__l6::<lambda_1>_>_>
              ((FRoledAnimContextInfo *)pFVar11,(int)plVar19[0x16],FVar6,(<lambda_1> *)local_127);
    local_3c = 4;
    local_e0 = (TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                *)local_120[1];
    local_d8 = (TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int> *)local_120[2];
    local_124 = (int)plVar19[0x16];
    local_48 = (ForElementType<int>)0x0;
    local_40 = 0;
    TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
              ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)local_58,
               iVar3,Default);
    iVar3 = local_40;
    local_98 = (ForElementType<int>)local_58;
    if (local_48 != (ForElementType<int>)0x0) {
      local_98 = local_48;
    }
    if ((local_40 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_118.SearchContexts = local_e0;
    local_118.PreviousValidInteractionSearches = local_d8;
    iStack_90 = iVar3;
    local_88[0]._12_4_ = uStack_8c;
    local_88[0].ArrayNum = iVar3;
    local_88[0].DataPtr = (int *)local_98;
    local_118.Database = pUVar18;
    local_118.RoledSkeletons = &pUVar4->Skeletons;
    local_118.RoledAnimContextInfos = (FRoledAnimContextInfos *)(plVar19 + 1);
    UE::PoseSearch::
    GenerateCombinationsRecursive<__UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::<lambda_2>::operator()_::__l6::<lambda_2>_>
              (local_124,0,local_88,0,&local_118);
    if (local_48 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_48);
    }
    stack0xffffffffffffff50 =
         (TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
          *)CONCAT44(uStack_ac,auStack_c0._16_4_ & ~auStack_c0._4_4_);
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              ((TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               auStack_c0);
    pUVar18 = local_d0;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// AddAvailabilities @ 14a920dd0

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
UPoseSearchInteractionSubsystem::AddAvailabilities
          (UPoseSearchInteractionSubsystem *this,
          TArrayView<FPoseSearchInteractionAvailability_const_,int> *param_1,UObject *param_2,
          FName param_3,IPoseHistory *param_4)

{
  FThreadSafeCounter *pFVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UPoseSearchDatabase *pUVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  UWorld *pUVar12;
  UWorld *pUVar13;
  FPoseSearchInteractionAvailability *pFVar14;
  TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *pTVar15;
  FPoseSearchInteractionAvailability *pFVar16;
  bool bVar17;
  TObjectPtr<UPoseSearchDatabase>_u_0 *pTVar18;
  TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> local_38;
  
  bVar17 = false;
  if ((param_2 != (UObject *)0x0) &&
     (lVar11 = (**(code **)(*(longlong *)param_2 + 0x180))(param_2), lVar11 != 0)) {
    pUVar12 = (UWorld *)(**(code **)(*(longlong *)param_2 + 0x180))(param_2);
    pUVar13 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if (pUVar12 == pUVar13) goto LAB_14a920e4c;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("AnimContext && AnimContext->GetWorld() && AnimContext->GetWorld() == GetWorld()"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                     ,0x1f9,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14a920e4c:
  LOCK();
  pFVar1 = &this->AnimContextsAvailabilitiesIndex;
  iVar10 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  if (iVar10 < (this->AnimContextsAvailabilitiesBuffer).ArrayNum) {
    if ((iVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = (this->AnimContextsAvailabilitiesBuffer).AllocatorInstance.Data;
    lVar11 = (longlong)iVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    *(UObject **)(pFVar5 + lVar11 * 0x18) = param_2;
    pFVar2 = pFVar5 + lVar11 * 0x18 + 0x14;
    if (*(int *)pFVar2 < 0) {
      DestructItems<FPoseSearchInteractionAvailabilityEx,int>
                (*(FPoseSearchInteractionAvailabilityEx **)(pFVar5 + lVar11 * 0x18 + 8),
                 *(int *)(pFVar5 + lVar11 * 0x18 + 0x10));
      *(undefined4 *)(pFVar5 + lVar11 * 0x18 + 0x10) = 0;
      if (*(int *)pFVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,(ForAnyElementType *)(pFVar5 + lVar11 * 0x18 + 8),0,(int *)pFVar2);
      }
    }
    else {
      DestructItems<FPoseSearchInteractionAvailabilityEx,int>
                (*(FPoseSearchInteractionAvailabilityEx **)(pFVar5 + lVar11 * 0x18 + 8),
                 *(int *)(pFVar5 + lVar11 * 0x18 + 0x10));
      *(undefined4 *)(pFVar5 + lVar11 * 0x18 + 0x10) = 0;
    }
    pFVar16 = param_1->DataPtr;
    pFVar14 = pFVar16 + param_1->ArrayNum;
    for (; pFVar16 != pFVar14; pFVar16 = pFVar16 + 1) {
      iVar10 = *(int *)(pFVar5 + lVar11 * 0x18 + 0x10);
      if (iVar10 == *(int *)pFVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(pFVar5 + lVar11 * 0x18 + 8),(int *)pFVar2);
      }
      *(int *)(pFVar5 + lVar11 * 0x18 + 0x10) = iVar10 + 1;
      pTVar18 = (TObjectPtr<UPoseSearchDatabase>_u_0 *)
                ((longlong)iVar10 * 0x40 + *(longlong *)(pFVar5 + lVar11 * 0x18 + 8));
      DefaultConstructItems<FPoseSearchInteractionAvailabilityEx,int>(pTVar18,1);
      if (param_4 == (IPoseHistory *)0x0) {
LAB_14a920faf:
        bVar9 = false;
      }
      else {
        bVar17 = true;
        pTVar15 = TSharedFromThis<UE::PoseSearch::IPoseHistory,1>::AsWeak
                            ((TSharedFromThis<UE::PoseSearch::IPoseHistory,1> *)&param_4->field_0x8,
                             &local_38);
        if (((pTVar15->Object != (IPoseHistory *)0x0) &&
            (pTVar6 = (pTVar15->WeakReferenceCount).ReferenceController,
            pTVar6 != (TReferenceControllerBase<1> *)0x0)) &&
           (0 < (int)pTVar6->SharedReferenceCount)) goto LAB_14a920faf;
        bVar9 = true;
      }
      if ((bVar17) &&
         (bVar17 = false,
         local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar3 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar4 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_38.WeakReferenceCount.ReferenceController,1);
        }
      }
      if ((bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InPoseHistory || InPoseHistory->AsWeak().IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchInteractionAvailability.h"
                             ,0x46,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 = (pFVar16->Database).field0_0x0.DebugPtr, pUVar7 != (UPoseSearchDatabase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      *pTVar18 = (pFVar16->Database).field0_0x0;
      pTVar18[1] = *(TObjectPtr<UPoseSearchDatabase>_u_0 *)&pFVar16->Tag;
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pTVar18[2].ObjectPtr,
                 &pFVar16->RolesFilter);
      *(float *)(pTVar18 + 4) = pFVar16->BroadPhaseRadius;
      *(float *)((longlong)pTVar18 + 0x24) = pFVar16->BroadPhaseRadiusIncrementOnInteraction;
      *(bool *)(pTVar18 + 5) = pFVar16->bDisableCollisions;
      *(int *)((longlong)pTVar18 + 0x2c) = pFVar16->TickPriority;
      pTVar18[6].ObjectPtr.field0_0x0 = (FObjectPtr_u_0)param_3;
      pTVar18[7].DebugPtr = (UPoseSearchDatabase *)param_4;
    }
  }
  return;
}

// ConsolidateAnimContextsAvailabilities @ 14a925300

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPoseSearchInteractionSubsystem::ConsolidateAnimContextsAvailabilities
          (UPoseSearchInteractionSubsystem *this)

{
  int *piVar1;
  TArray<FPoseSearchInteractionAnimContextAvailabilities,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FPoseSearchInteractionAnimContextAvailabilities *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FPoseSearchInteractionAvailabilityEx *pFVar11;
  FPoseSearchInteractionAnimContextAvailabilities *pFVar12;
  TArray<FPoseSearchInteractionAvailabilityEx,TSizedDefaultAllocator<32>_> *pTVar13;
  FPoseSearchInteractionAvailabilityEx *pFVar14;
  TArray<FPoseSearchInteractionAvailabilityEx,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FPoseSearchInteractionAnimContextAvailabilities *local_78;
  longlong local_60;
  
  uVar19 = (this->AnimContextsAvailabilitiesIndex).Counter;
  piVar1 = &(this->AnimContextsAvailabilitiesBuffer).ArrayNum;
  iVar3 = *piVar1;
  this->AnimContextsAvailabilitiesNum = iVar3;
  if (iVar3 < (int)uVar19) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    iVar3 = (this->AnimContextsAvailabilitiesBuffer).ArrayNum;
    this_00 = &this->AnimContextsAvailabilitiesBuffer;
    if (iVar3 < (int)uVar19) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,uVar19 - iVar3,&this_00->AllocatorInstance,piVar1,
                         &(this->AnimContextsAvailabilitiesBuffer).ArrayMax);
      DefaultConstructItems<FPoseSearchInteractionAnimContextAvailabilities,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar8 * 0x18,uVar19 - iVar3);
    }
    else {
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if ((int)uVar19 < iVar3) {
        uVar16 = iVar3 - uVar19;
        if (((int)(uVar16 | uVar19) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (uVar16 != 0) {
          TArray<FPoseSearchInteractionAnimContextAvailabilities,TSizedDefaultAllocator<32>_>::
          RemoveAtImpl(this_00,uVar19,uVar16);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this_00->AllocatorInstance,
                     (this->AnimContextsAvailabilitiesBuffer).ArrayNum,
                     &(this->AnimContextsAvailabilitiesBuffer).ArrayMax);
        }
      }
    }
  }
  else {
    this->AnimContextsAvailabilitiesNum = uVar19;
  }
  iVar3 = this->AnimContextsAvailabilitiesNum;
  if (iVar3 < 1) {
    pFVar10 = (this->Islands).AllocatorInstance.Data;
    iVar3 = (this->Islands).ArrayNum;
    pFVar2 = pFVar10 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Islands).ArrayNum != iVar3) {
        `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar2) {
        return false;
      }
      bVar6 = UE::PoseSearch::FInteractionIsland::IsInitialized(*(FInteractionIsland **)pFVar10);
      if (bVar6) break;
      pFVar10 = pFVar10 + 8;
    }
  }
  else {
    pFVar4 = (FPoseSearchInteractionAnimContextAvailabilities *)
             (this->AnimContextsAvailabilitiesBuffer).AllocatorInstance.Data;
    AlgoImpl::
    IntroSortInternal<FPoseSearchInteractionAnimContextAvailabilities,int,FIdentityFunctor,TDereferenceWrapper<FPoseSearchInteractionAnimContextAvailabilities,_UPoseSearchInteractionSubsystem::ConsolidateAnimContextsAvailabilities_::__l2::<lambda_1>_>_>
              (pFVar4,iVar3,local_res8[0],(<lambda_1> *)local_res18);
    uVar16 = 0;
    local_res20 = 0;
    uVar19 = 1;
    if (1 < this->AnimContextsAvailabilitiesNum) {
      pFVar12 = pFVar4 + 1;
      local_60 = 0;
      uVar16 = 0;
      local_78 = pFVar4;
      do {
        pTVar15 = &pFVar12->Availabilities;
        uVar9 = 0;
        if ((int)uVar19 < iVar3) {
          uVar9 = ~uVar19 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar18 = 0;
        if ((int)uVar16 < iVar3) {
          uVar18 = ~uVar16 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((local_78->AnimContext).field0_0x0.DebugPtr ==
            *(UObject **)((longlong)(pTVar15 + -1) + 8)) {
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar8 = pTVar15->ArrayNum;
          pFVar11 = (FPoseSearchInteractionAvailabilityEx *)(pTVar15->AllocatorInstance).Data;
          pFVar14 = pFVar11 + iVar8;
          lVar17 = (longlong)(int)uVar16;
          while( true ) {
            if (pTVar15->ArrayNum != iVar8) {
              local_res8[0] = (FIdentityFunctor)0x0;
              `TCheckedPointerIterator<FPoseSearchInteractionAvailabilityEx,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res8);
            }
            uVar16 = local_res20;
            if (pFVar11 == pFVar14) break;
            if ((uVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            TArray<FPoseSearchInteractionAvailabilityEx,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FPoseSearchInteractionAvailabilityEx_const_&>
                      (&pFVar4[lVar17].Availabilities,pFVar11);
            pFVar11 = pFVar11 + 1;
          }
        }
        else {
          uVar16 = uVar16 + 1;
          local_60 = local_60 + 1;
          local_78 = local_78 + 1;
          local_res20 = uVar16;
          if (uVar16 != uVar19) {
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            uVar9 = 0;
            if ((int)uVar16 < iVar3) {
              uVar9 = ~uVar16 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            pFVar12 = pFVar4 + local_60;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (*(UObject **)((longlong)(pTVar15 + -1) + 8) != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(*(UObject **)((longlong)(pTVar15 + -1) + 8));
            }
            (pFVar12->AnimContext).field0_0x0 =
                 *(TObjectPtr<UObject_const_>_u_0 *)((longlong)(pTVar15 + -1) + 8);
            pTVar13 = &pFVar12->Availabilities;
            if (pTVar13 != pTVar15) {
              DestructItems<FPoseSearchInteractionAvailabilityEx,int>
                        ((FPoseSearchInteractionAvailabilityEx *)(pTVar13->AllocatorInstance).Data,
                         (pFVar12->Availabilities).ArrayNum);
              iVar8 = pTVar15->ArrayNum;
              piVar1 = &(pFVar12->Availabilities).ArrayMax;
              pFVar11 = (FPoseSearchInteractionAvailabilityEx *)(pTVar15->AllocatorInstance).Data;
              (pFVar12->Availabilities).ArrayNum = iVar8;
              if ((iVar8 == 0) && (*piVar1 == 0)) {
                *piVar1 = 0;
                uVar16 = local_res20;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,8,iVar8,*piVar1,&pTVar13->AllocatorInstance,iVar8,piVar1);
                ConstructItems<FPoseSearchInteractionAvailabilityEx,FPoseSearchInteractionAvailabilityEx,int>
                          ((pTVar13->AllocatorInstance).Data,pFVar11,iVar8);
                uVar16 = local_res20;
              }
            }
          }
        }
        uVar19 = uVar19 + 1;
        pFVar12 = (FPoseSearchInteractionAnimContextAvailabilities *)(pTVar15 + 1);
      } while ((int)uVar19 < this->AnimContextsAvailabilitiesNum);
    }
    this->AnimContextsAvailabilitiesNum = uVar16 + 1;
  }
  return true;
}

// CreateIsland @ 14a925810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInteractionIsland * __thiscall
UPoseSearchInteractionSubsystem::CreateIsland(UPoseSearchInteractionSubsystem *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FInteractionIsland *pFVar6;
  UWorld *pUVar7;
  FInteractionIsland *local_18 [2];
  
  pFVar6 = ::operator_new(200);
  local_18[0] = (FInteractionIsland *)0x0;
  if (pFVar6 != (FInteractionIsland *)0x0) {
    pUVar7 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    local_18[0] = UE::PoseSearch::FInteractionIsland::FInteractionIsland
                            (pFVar6,(pUVar7->PersistentLevel).field0_0x0.DebugPtr,this);
  }
  pFVar2 = (this->Islands).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Islands).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FInteractionIsland *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Islands).ArrayNum;
  piVar1 = &(this->Islands).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Islands).AllocatorInstance,piVar1);
  }
  (this->Islands).ArrayNum = iVar5 + 1;
  *(FInteractionIsland **)((this->Islands).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  return local_18[0];
}

// DebugDrawIslands @ 14a925990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchInteractionSubsystem::DebugDrawIslands(UPoseSearchInteractionSubsystem *this)

{
  FWeakObjectPtr *pFVar1;
  FColor *pFVar2;
  ForElementType<UObject_const_*> FVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  uint uVar21;
  UObject *pUVar22;
  TTransform<double> *pTVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  FWeakObjectPtr *this_00;
  ForElementType<UObject_const_*> FVar27;
  FInteractionIsland *this_01;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  int iVar31;
  uint uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined4 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  undefined1 auStackY_ab8 [32];
  undefined1 local_a68;
  undefined1 local_a67;
  undefined1 local_a66;
  undefined1 local_a65;
  undefined1 local_a64;
  undefined1 local_a63 [3];
  uint local_a60;
  int local_a5c;
  UObject *local_a58;
  FInteractionIsland *local_a50;
  uint local_a48;
  uint local_a44;
  longlong local_a40;
  longlong local_a38;
  FScriptContainerElement *local_a30;
  FScriptContainerElement *local_a28;
  FScriptContainerElement *local_a20;
  UPoseSearchInteractionSubsystem *local_a18;
  FName local_a10;
  FName local_a08;
  FName local_a00;
  FScriptContainerElement *local_9f8;
  FScriptContainerElement *local_9f0;
  double local_9e8;
  double dStack_9e0;
  double local_9d8;
  TVector<double>_u_0 local_9c8;
  TVector<double>_u_0 local_9b0;
  TVector<double>_u_0 local_998;
  TVector<double>_u_0 local_980;
  TVector<double>_u_0 local_968;
  double local_950;
  double dStack_948;
  double local_940;
  double local_938;
  double dStack_930;
  double local_928;
  undefined1 local_920 [16];
  double local_910;
  undefined1 local_908 [16];
  ForElementType<UObject_const_*> local_8e8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_ab8;
  local_a18 = this;
  bVar20 = IsInGameThread();
  if ((!bVar20) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                          ,0x4c1,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (FVisualLogger::bIsRecording != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Colors[0] = FColor::White;
      Colors[1] = FColor::Black;
      Colors[2] = FColor::Red;
      Colors[3] = FColor::Green;
      Colors[4] = FColor::Blue;
      Colors[5] = FColor::Yellow;
      Colors[6] = FColor::Cyan;
      Colors[7] = FColor::Magenta;
      Colors[8] = FColor::Orange;
      Colors[9] = FColor::Purple;
      Colors[10] = FColor::Turquoise;
      Colors[0xb] = FColor::Silver;
      Colors[0xc] = FColor::Emerald;
      _Init_thread_footer(&::_TSS0);
    }
    pFVar30 = (this->Islands).AllocatorInstance.Data;
    iVar31 = (this->Islands).ArrayNum;
    local_a5c = 0;
    local_8e8.SecondaryData = (ForElementType<UObject_const_*>)0x0;
    local_e0 = 0;
    pFVar29 = pFVar30 + (longlong)iVar31 * 8;
    local_dc = 0x100;
    while( true ) {
      if ((this->Islands).ArrayNum != iVar31) {
        local_a68 = 0;
        `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_a68);
      }
      fVar18 = __real_322bcc77;
      if (pFVar30 == pFVar29) break;
      lVar28 = *(longlong *)pFVar30;
      this_00 = *(FWeakObjectPtr **)(lVar28 + 0x78);
      iVar4 = *(int *)(lVar28 + 0x80);
      pFVar1 = this_00 + iVar4;
      while( true ) {
        if (*(int *)(lVar28 + 0x80) != iVar4) {
          local_a67 = 0;
          `TCheckedPointerIterator<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_a67);
        }
        if (this_00 == pFVar1) break;
        local_a58 = FWeakObjectPtr::Get(this_00);
        if (local_a58 != (UObject *)0x0) {
          FVar27 = (ForElementType<UObject_const_*>)&local_8e8;
          if (local_8e8.SecondaryData != (ForElementType<UObject_const_*>)0x0) {
            FVar27 = local_8e8.SecondaryData;
          }
          if ((ulonglong)FVar27 <= &local_a58) {
            FVar27 = (ForElementType<UObject_const_*>)&local_8e8;
            if (local_8e8.SecondaryData != (ForElementType<UObject_const_*>)0x0) {
              FVar27 = local_8e8.SecondaryData;
            }
            if ((&local_a58 < (UObject **)((longlong)FVar27 + (longlong)local_dc * 8)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (local_e0 == local_dc) {
            local_e0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                                 (0x808,&local_8e8,&local_dc);
          }
          lVar24 = (longlong)local_e0;
          FVar27 = (ForElementType<UObject_const_*>)&local_8e8;
          if (local_8e8.SecondaryData != (ForElementType<UObject_const_*>)0x0) {
            FVar27 = local_8e8.SecondaryData;
          }
          local_e0 = local_e0 + 1;
          *(UObject **)((longlong)FVar27 + lVar24 * 8) = local_a58;
        }
        this_00 = this_00 + 1;
      }
      pFVar30 = pFVar30 + 8;
      this = local_a18;
    }
    local_a44 = (this->Islands).ArrayNum;
    uVar25 = (ulonglong)(int)local_a44;
    pFVar30 = (this->Islands).AllocatorInstance.Data;
    pFVar29 = pFVar30 + uVar25 * 8;
    iVar31 = local_a5c;
    local_9f0 = pFVar29;
    while( true ) {
      local_a20 = pFVar30;
      if ((this->Islands).ArrayNum != (int)uVar25) {
        local_a66 = 0;
        `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_a66);
      }
      if (pFVar30 == pFVar29) break;
      this_01 = *(FInteractionIsland **)pFVar30;
      local_a50 = this_01;
      bVar20 = UE::PoseSearch::FInteractionIsland::IsInitialized(this_01);
      if (bVar20) {
        local_a48 = (this_01->SearchContexts).ArrayNum;
        uVar25 = (ulonglong)(int)local_a48;
        pFVar30 = (this_01->SearchContexts).AllocatorInstance.Data;
        pFVar29 = pFVar30 + 0x1d0;
        local_9f8 = pFVar30 + uVar25 * 0x1e0;
        pFVar2 = Colors + iVar31;
        while( true ) {
          pFVar19 = local_9f8;
          local_a30 = pFVar30;
          local_a28 = pFVar29;
          if ((this_01->SearchContexts).ArrayNum != (int)uVar25) {
            local_a65 = 0;
            `TCheckedPointerIterator<UE::PoseSearch::FInteractionSearchContext_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_a65);
          }
          if (pFVar30 == pFVar19) break;
          iVar31 = *(int *)(pFVar29 + -0x1a8);
          local_a60 = 0;
          local_a40 = 0;
          if (0 < iVar31) {
            local_a38 = 0;
            do {
              lVar24 = local_a38;
              lVar28 = local_a40;
              uVar32 = local_a60;
              uVar26 = ~local_a60;
              uVar21 = 0;
              if ((int)local_a60 < iVar31) {
                uVar21 = uVar26 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (*(FScriptContainerElement **)(pFVar29 + -0x1b0) != (FScriptContainerElement *)0x0)
              {
                pFVar30 = *(FScriptContainerElement **)(pFVar29 + -0x1b0);
              }
              pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar30 + lVar28 * 8));
              this_01 = local_a50;
              if (pUVar22 != (UObject *)0x0) {
                uVar21 = 0;
                if ((int)uVar32 < *(int *)(pFVar29 + 8)) {
                  uVar21 = uVar26 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar30 = *(FScriptContainerElement **)pFVar29;
                if (pFVar30 == (FScriptContainerElement *)0x0) {
                  pFVar30 = pFVar29 + -0xc0;
                }
                if (pFVar29[-0xe7] == (FScriptContainerElement)0x0) {
                  fVar78 = *(float *)(pFVar30 + lVar24 + 0x20);
                }
                else {
                  fVar78 = *(float *)(pFVar30 + lVar24 + 0x24) + *(float *)(pFVar30 + lVar24 + 0x20)
                  ;
                }
                this_01 = local_a50;
                if (fVar18 < fVar78) {
                  pTVar23 = UE::PoseSearch::GetContextTransform(pUVar22,true);
                  iVar31 = local_e0;
                  FVar27 = (ForElementType<UObject_const_*>)&local_8e8;
                  if (local_8e8.SecondaryData != (ForElementType<UObject_const_*>)0x0) {
                    FVar27 = local_8e8.SecondaryData;
                  }
                  FVar3 = (ForElementType<UObject_const_*>)
                          ((longlong)FVar27 + (longlong)local_e0 * 8);
                  while( true ) {
                    if (local_e0 != iVar31) {
                      local_a64 = 0;
                      `TCheckedPointerIterator<UObject_const_*,int,0>::operator!='::__l2::<lambda_1>
                      ::operator()(&local_a64);
                    }
                    this_01 = local_a50;
                    if (FVar27 == FVar3) break;
                    pUVar22 = *(UObject **)FVar27;
                    if (FVisualLogger::bIsRecording != 0) {
                      local_9c8._s_0.X = (pTVar23->Translation).XY.m128d_f64[0];
                      local_9c8._s_0.Y = (pTVar23->Translation).XY.m128d_f64[1];
                      local_9c8._s_0.Z = (pTVar23->Translation).ZW.m128d_f64[0];
                      ::FName::FName(&local_a10,LogName);
                      FVisualLogger::DiscLogfImpl
                                (pUVar22,&local_a10,Display,(TVector<double> *)&local_9c8._s_0,
                                 &UE::Math::TVector<double>::UpVector,fVar78,pFVar2,0,false,L"");
                    }
                    FVar27 = (ForElementType<UObject_const_*>)((longlong)FVar27 + 8);
                  }
                  bVar20 = UE::PoseSearch::FInteractionIsland::HasTickDependencies(local_a50);
                  iVar31 = local_e0;
                  lVar28 = local_a40;
                  pFVar29 = local_a28;
                  lVar24 = local_a38;
                  uVar32 = local_a60;
                  if (!bVar20) {
                    auVar55 = *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64;
                    dVar33 = (pTVar23->Rotation).ZW.m128d_f64[1];
                    dVar16 = (double)fVar78;
                    local_940 = dVar16 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
                    local_950 = dVar16 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
                    dStack_948 = dVar16 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y
                    ;
                    dVar11 = local_940 * (pTVar23->Scale3D).ZW.m128d_f64[0];
                    dVar13 = (pTVar23->Scale3D).ZW.m128d_f64[1] * 0.0;
                    auVar58 = *(undefined1 (*) [16])(pTVar23->Rotation).ZW.m128d_f64;
                    dVar8 = (pTVar23->Scale3D).XY.m128d_f64[0] * local_950;
                    dVar9 = (pTVar23->Scale3D).XY.m128d_f64[1] * dStack_948;
                    uVar65 = (undefined4)((ulonglong)dVar9 >> 0x20);
                    auVar35 = *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64;
                    auVar66._8_4_ = SUB84(dVar9,0);
                    auVar66._0_8_ = dVar8;
                    auVar66._12_4_ = uVar65;
                    dVar7 = auVar58._0_8_;
                    auVar46 = blendpd(auVar35,auVar58,2);
                    auVar67._0_8_ = auVar66._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar8;
                    auVar67._8_8_ = dVar11 * auVar35._8_8_ - dVar7 * dVar9;
                    auVar34._8_4_ = SUB84(dVar9,0);
                    auVar34._0_8_ = dVar8;
                    auVar34._12_4_ = uVar65;
                    auVar35._8_4_ = SUB84(dVar13,0);
                    auVar35._0_8_ = dVar11;
                    auVar35._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                    auVar35 = blendpd(auVar34,auVar35,2);
                    dVar15 = (double)(float)((uint)fVar78 ^ __xmm_80000000800000008000000080000000);
                    auVar36._0_8_ = auVar35._0_8_ * dVar7 - auVar46._0_8_ * dVar11;
                    auVar36._8_8_ = auVar35._8_8_ * auVar58._8_8_ - auVar46._8_8_ * dVar13;
                    auVar35 = blendpd(auVar67,auVar36,2);
                    dVar13 = auVar67._8_8_ + auVar67._8_8_;
                    dVar6 = auVar36._0_8_ + auVar36._0_8_;
                    uVar65 = (undefined4)((ulonglong)dVar6 >> 0x20);
                    auVar68._0_8_ = auVar35._0_8_ + auVar35._0_8_;
                    auVar68._8_8_ = auVar35._8_8_ + auVar35._8_8_;
                    auVar56._8_4_ = SUB84(dVar6,0);
                    auVar56._0_8_ = dVar13;
                    auVar56._12_4_ = uVar65;
                    auVar47._8_4_ = SUB84(dVar6,0);
                    auVar47._0_8_ = dVar13;
                    auVar47._12_4_ = uVar65;
                    auVar35 = blendpd(auVar47,auVar68,2);
                    auVar46 = blendpd(auVar55,auVar58,2);
                    auVar57._0_8_ = auVar56._8_8_ * auVar55._0_8_ - auVar55._8_8_ * dVar13;
                    auVar57._8_8_ = auVar68._0_8_ * auVar55._8_8_ - dVar7 * dVar6;
                    auVar48._0_8_ = auVar35._0_8_ * dVar7 - auVar46._0_8_ * auVar68._0_8_;
                    auVar48._8_8_ = auVar35._8_8_ * auVar58._8_8_ - auVar46._8_8_ * auVar68._8_8_;
                    auVar55._8_4_ = SUB84(auVar57._8_8_,0);
                    auVar55._0_8_ = auVar57._0_8_;
                    auVar55._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
                    dStack_930 = dVar15 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y
                    ;
                    dVar7 = dVar6 * dVar33 + dVar9 + auVar48._0_8_ +
                            (pTVar23->Translation).XY.m128d_f64[1];
                    auVar58 = blendpd(auVar57,auVar48,2);
                    local_938 = dVar15 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
                    local_928 = dVar15 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
                    local_998._s_0.Z =
                         auVar68._0_8_ * dVar33 + dVar11 + auVar58._0_8_ +
                         (pTVar23->Translation).ZW.m128d_f64[0];
                    dVar12 = local_928 * (pTVar23->Scale3D).ZW.m128d_f64[0];
                    dVar6 = (pTVar23->Scale3D).ZW.m128d_f64[1] * 0.0;
                    local_998._8_4_ = SUB84(dVar7,0);
                    local_998._0_8_ =
                         dVar13 * dVar33 + dVar8 + auVar55._8_8_ +
                         (pTVar23->Translation).XY.m128d_f64[0];
                    local_998._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                    dVar9 = (pTVar23->Scale3D).XY.m128d_f64[0] * local_938;
                    dVar11 = (pTVar23->Scale3D).XY.m128d_f64[1] * dStack_930;
                    uVar65 = (undefined4)((ulonglong)dVar11 >> 0x20);
                    auVar55 = *(undefined1 (*) [16])(pTVar23->Rotation).ZW.m128d_f64;
                    auVar69._8_4_ = SUB84(dVar11,0);
                    auVar69._0_8_ = dVar9;
                    auVar69._12_4_ = uVar65;
                    auVar58 = *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64;
                    auVar35 = *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64;
                    dVar17 = (pTVar23->Rotation).ZW.m128d_f64[1];
                    dVar7 = auVar55._0_8_;
                    auVar46 = blendpd(auVar58,auVar55,2);
                    auVar70._0_8_ = auVar69._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar9;
                    auVar70._8_8_ = dVar12 * auVar58._8_8_ - dVar7 * dVar11;
                    auVar37._8_4_ = SUB84(dVar11,0);
                    auVar37._0_8_ = dVar9;
                    auVar37._12_4_ = uVar65;
                    auVar58._8_4_ = SUB84(dVar6,0);
                    auVar58._0_8_ = dVar12;
                    auVar58._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                    auVar58 = blendpd(auVar37,auVar58,2);
                    dVar13 = auVar55._8_8_;
                    auVar38._0_8_ = auVar58._0_8_ * dVar7 - auVar46._0_8_ * dVar12;
                    auVar38._8_8_ = auVar58._8_8_ * dVar13 - auVar46._8_8_ * dVar6;
                    auVar58 = blendpd(auVar70,auVar38,2);
                    auVar71._0_8_ = auVar58._0_8_ + auVar58._0_8_;
                    auVar71._8_8_ = auVar58._8_8_ + auVar58._8_8_;
                    dVar6 = auVar70._8_8_ + auVar70._8_8_;
                    dVar8 = auVar38._0_8_ + auVar38._0_8_;
                    uVar65 = (undefined4)((ulonglong)dVar8 >> 0x20);
                    auVar59._8_4_ = SUB84(dVar8,0);
                    auVar59._0_8_ = dVar6;
                    auVar59._12_4_ = uVar65;
                    auVar49._8_4_ = SUB84(dVar8,0);
                    auVar49._0_8_ = dVar6;
                    auVar49._12_4_ = uVar65;
                    auVar58 = blendpd(auVar49,auVar71,2);
                    auVar60._0_8_ = auVar59._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar6;
                    auVar60._8_8_ = auVar71._0_8_ * auVar35._8_8_ - dVar7 * dVar8;
                    auVar39._8_4_ = SUB84(auVar60._8_8_,0);
                    auVar39._0_8_ = auVar60._0_8_;
                    auVar39._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
                    auVar35 = blendpd(auVar35,auVar55,2);
                    auVar50._0_8_ = auVar58._0_8_ * dVar7 - auVar35._0_8_ * auVar71._0_8_;
                    auVar50._8_8_ = auVar58._8_8_ * dVar13 - auVar35._8_8_ * auVar71._8_8_;
                    auVar58 = blendpd(auVar60,auVar50,2);
                    dVar8 = dVar8 * dVar17 + dVar11 + auVar50._0_8_ +
                            (pTVar23->Translation).XY.m128d_f64[1];
                    dVar33 = dVar16 * UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.Y;
                    local_9b0._s_0.Z =
                         auVar71._0_8_ * dVar17 + dVar12 + auVar58._0_8_ +
                         (pTVar23->Translation).ZW.m128d_f64[0];
                    local_910 = dVar16 * UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.Z;
                    auVar58 = *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64;
                    dVar12 = local_910 * (pTVar23->Scale3D).ZW.m128d_f64[0];
                    dVar14 = (pTVar23->Scale3D).ZW.m128d_f64[1] * 0.0;
                    local_920._8_4_ = SUB84(dVar33,0);
                    local_920._0_8_ =
                         dVar16 * UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.X;
                    local_920._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
                    dVar11 = dVar16 * UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.X *
                             (pTVar23->Scale3D).XY.m128d_f64[0];
                    dVar33 = dVar33 * (pTVar23->Scale3D).XY.m128d_f64[1];
                    uVar65 = (undefined4)((ulonglong)dVar33 >> 0x20);
                    local_9b0._8_4_ = SUB84(dVar8,0);
                    local_9b0._0_8_ =
                         dVar6 * dVar17 + dVar9 + auVar39._8_8_ +
                         (pTVar23->Translation).XY.m128d_f64[0];
                    local_9b0._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                    auVar72._8_4_ = SUB84(dVar33,0);
                    auVar72._0_8_ = dVar11;
                    auVar72._12_4_ = uVar65;
                    auVar35 = blendpd(auVar58,auVar55,2);
                    auVar73._0_8_ = auVar72._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar11;
                    auVar73._8_8_ = dVar12 * auVar58._8_8_ - dVar7 * dVar33;
                    auVar40._8_4_ = SUB84(dVar33,0);
                    auVar40._0_8_ = dVar11;
                    auVar40._12_4_ = uVar65;
                    auVar46._8_4_ = SUB84(dVar14,0);
                    auVar46._0_8_ = dVar12;
                    auVar46._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
                    auVar58 = blendpd(auVar40,auVar46,2);
                    auVar41._0_8_ = auVar58._0_8_ * dVar7 - auVar35._0_8_ * dVar12;
                    auVar41._8_8_ = auVar58._8_8_ * dVar13 - auVar35._8_8_ * dVar14;
                    auVar35 = blendpd(auVar73,auVar41,2);
                    auVar58 = *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64;
                    auVar74._0_8_ = auVar35._0_8_ + auVar35._0_8_;
                    auVar74._8_8_ = auVar35._8_8_ + auVar35._8_8_;
                    dVar6 = auVar73._8_8_ + auVar73._8_8_;
                    dVar8 = auVar41._0_8_ + auVar41._0_8_;
                    uVar65 = (undefined4)((ulonglong)dVar8 >> 0x20);
                    auVar61._8_4_ = SUB84(dVar8,0);
                    auVar61._0_8_ = dVar6;
                    auVar61._12_4_ = uVar65;
                    auVar51._8_4_ = SUB84(dVar8,0);
                    auVar51._0_8_ = dVar6;
                    auVar51._12_4_ = uVar65;
                    auVar35 = blendpd(auVar51,auVar74,2);
                    auVar62._0_8_ = auVar61._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar6;
                    auVar62._8_8_ = auVar74._0_8_ * auVar58._8_8_ - dVar7 * dVar8;
                    auVar55 = blendpd(auVar58,auVar55,2);
                    dVar14 = (pTVar23->Rotation).ZW.m128d_f64[1];
                    auVar42._8_4_ = SUB84(auVar62._8_8_,0);
                    auVar42._0_8_ = auVar62._0_8_;
                    auVar42._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
                    auVar52._0_8_ = auVar35._0_8_ * dVar7 - auVar55._0_8_ * auVar74._0_8_;
                    auVar52._8_8_ = auVar35._8_8_ * dVar13 - auVar55._8_8_ * auVar74._8_8_;
                    auVar55 = *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64;
                    auVar58 = blendpd(auVar62,auVar52,2);
                    dVar7 = dVar8 * dVar13 + dVar33 + auVar52._0_8_ +
                            (pTVar23->Translation).XY.m128d_f64[1];
                    local_968._s_0.Z =
                         auVar74._0_8_ * dVar13 + dVar12 + auVar58._0_8_ +
                         (pTVar23->Translation).ZW.m128d_f64[0];
                    local_968._8_4_ = SUB84(dVar7,0);
                    local_968._0_8_ =
                         dVar6 * dVar13 + dVar11 + auVar42._8_8_ +
                         (pTVar23->Translation).XY.m128d_f64[0];
                    local_968._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                    local_9d8 = dVar15 * UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.Z;
                    auVar58 = *(undefined1 (*) [16])(pTVar23->Rotation).ZW.m128d_f64;
                    dVar8 = (pTVar23->Scale3D).XY.m128d_f64[0] *
                            dVar15 * UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.X;
                    dVar9 = (pTVar23->Scale3D).XY.m128d_f64[1] *
                            dVar15 * UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.Y;
                    uVar65 = (undefined4)((ulonglong)dVar9 >> 0x20);
                    dStack_9e0 = dVar15 * UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.Y;
                    local_9e8 = dVar15 * UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.X;
                    local_908 = *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64;
                    dVar11 = local_9d8 * (pTVar23->Scale3D).ZW.m128d_f64[0];
                    dVar13 = (pTVar23->Scale3D).ZW.m128d_f64[1] * 0.0;
                    auVar46 = blendpd(local_908,auVar58,2);
                    auVar75._8_4_ = SUB84(dVar9,0);
                    auVar75._0_8_ = dVar8;
                    auVar75._12_4_ = uVar65;
                    dVar7 = auVar58._0_8_;
                    auVar76._0_8_ = auVar75._8_8_ * local_908._0_8_ - local_908._8_8_ * dVar8;
                    auVar76._8_8_ = dVar11 * local_908._8_8_ - dVar7 * dVar9;
                    auVar43._8_4_ = SUB84(dVar9,0);
                    auVar43._0_8_ = dVar8;
                    auVar43._12_4_ = uVar65;
                    auVar10._8_4_ = SUB84(dVar13,0);
                    auVar10._0_8_ = dVar11;
                    auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                    auVar35 = blendpd(auVar43,auVar10,2);
                    auVar44._0_8_ = auVar35._0_8_ * dVar7 - auVar46._0_8_ * dVar11;
                    auVar44._8_8_ = auVar35._8_8_ * auVar58._8_8_ - auVar46._8_8_ * dVar13;
                    dVar13 = auVar76._8_8_ + auVar76._8_8_;
                    dVar6 = auVar44._0_8_ + auVar44._0_8_;
                    uVar65 = (undefined4)((ulonglong)dVar6 >> 0x20);
                    auVar35 = blendpd(auVar76,auVar44,2);
                    auVar77._0_8_ = auVar35._0_8_ + auVar35._0_8_;
                    auVar77._8_8_ = auVar35._8_8_ + auVar35._8_8_;
                    auVar63._8_4_ = SUB84(dVar6,0);
                    auVar63._0_8_ = dVar13;
                    auVar63._12_4_ = uVar65;
                    auVar53._8_4_ = SUB84(dVar6,0);
                    auVar53._0_8_ = dVar13;
                    auVar53._12_4_ = uVar65;
                    auVar35 = blendpd(auVar53,auVar77,2);
                    auVar46 = blendpd(auVar55,auVar58,2);
                    auVar54._0_8_ = auVar35._0_8_ * dVar7 - auVar46._0_8_ * auVar77._0_8_;
                    auVar54._8_8_ = auVar35._8_8_ * auVar58._8_8_ - auVar46._8_8_ * auVar77._8_8_;
                    auVar64._0_8_ = auVar63._8_8_ * auVar55._0_8_ - auVar55._8_8_ * dVar13;
                    auVar64._8_8_ = auVar77._0_8_ * auVar55._8_8_ - dVar7 * dVar6;
                    FVar27 = (ForElementType<UObject_const_*>)&local_8e8;
                    if (local_8e8.SecondaryData != (ForElementType<UObject_const_*>)0x0) {
                      FVar27 = local_8e8.SecondaryData;
                    }
                    FVar3 = (ForElementType<UObject_const_*>)
                            ((longlong)FVar27 + (longlong)local_e0 * 8);
                    auVar45._8_4_ = SUB84(auVar64._8_8_,0);
                    auVar45._0_8_ = auVar64._0_8_;
                    auVar45._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
                    auVar55 = blendpd(auVar64,auVar54,2);
                    local_980._s_0.Z =
                         auVar77._0_8_ * dVar14 + dVar11 + auVar55._0_8_ +
                         (pTVar23->Translation).ZW.m128d_f64[0];
                    dVar7 = dVar6 * dVar14 + dVar9 + auVar54._0_8_ +
                            (pTVar23->Translation).XY.m128d_f64[1];
                    local_980._8_4_ = SUB84(dVar7,0);
                    local_980._0_8_ =
                         dVar13 * dVar14 + dVar8 + auVar45._8_8_ +
                         (pTVar23->Translation).XY.m128d_f64[0];
                    local_980._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                    while( true ) {
                      if (local_e0 != iVar31) {
                        local_a63[0] = 0;
                        `TCheckedPointerIterator<UObject_const_*,int,0>::operator!='::__l2::
                        <lambda_1>::operator()(local_a63);
                      }
                      this_01 = local_a50;
                      lVar28 = local_a40;
                      pFVar29 = local_a28;
                      lVar24 = local_a38;
                      uVar32 = local_a60;
                      if (FVar27 == FVar3) break;
                      pUVar22 = *(UObject **)FVar27;
                      if (FVisualLogger::bIsRecording != 0) {
                        ::FName::FName(&local_a08,LogName);
                        FVisualLogger::SegmentLogfImpl
                                  (pUVar22,&local_a08,Display,(TVector<double> *)&local_998._s_0,
                                   (TVector<double> *)&local_9b0._s_0,pFVar2,0,L"");
                        if (FVisualLogger::bIsRecording != 0) {
                          ::FName::FName(&local_a00,LogName);
                          FVisualLogger::SegmentLogfImpl
                                    (pUVar22,&local_a00,Display,(TVector<double> *)&local_968._s_0,
                                     (TVector<double> *)&local_980._s_0,pFVar2,0,L"");
                        }
                      }
                      FVar27 = (ForElementType<UObject_const_*>)((longlong)FVar27 + 8);
                    }
                  }
                }
              }
              iVar31 = *(int *)(pFVar29 + -0x1a8);
              local_a60 = uVar32 + 1;
              local_a40 = lVar28 + 1;
              local_a38 = lVar24 + 0x30;
              pFVar30 = local_a30;
            } while ((int)local_a60 < iVar31);
          }
          pFVar30 = pFVar30 + 0x1e0;
          uVar25 = (ulonglong)local_a48;
          pFVar29 = pFVar29 + 0x1e0;
        }
        iVar31 = (local_a5c + 1) % 0xd;
        pFVar29 = local_9f0;
        pFVar30 = local_a20;
        local_a5c = iVar31;
      }
      pFVar30 = pFVar30 + 8;
      uVar25 = (ulonglong)local_a44;
      this = local_a18;
    }
    if (local_8e8.SecondaryData != (ForElementType<UObject_const_*>)0x0) {
      FMemory::Free((void *)local_8e8.SecondaryData);
    }
  }
  return;
}

// DebugLogTickDependencies @ 14a9278c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchInteractionSubsystem::DebugLogTickDependencies(UPoseSearchInteractionSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FInteractionIsland *this_00;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  if (UE::PoseSearch::GVarPoseSearchInteractionLoglandsTickDependencies) {
    if (4 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    pFVar4 = (this->Islands).AllocatorInstance.Data;
    iVar2 = (this->Islands).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Islands).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar4 == pFVar1) break;
      this_00 = *(FInteractionIsland **)pFVar4;
      bVar3 = UE::PoseSearch::FInteractionIsland::IsInitialized(this_00);
      if (bVar3) {
        UE::PoseSearch::FInteractionIsland::LogTickDependencies(this_00);
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// Deinitialize @ 14a927980

void __thiscall UPoseSearchInteractionSubsystem::Deinitialize(UPoseSearchInteractionSubsystem *this)

{
  UpdateValidInteractionSearches(this);
  DestroyAllIslands(this);
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  return;
}

// DestroyAllIslands @ 14a927ae0

void __thiscall
UPoseSearchInteractionSubsystem::DestroyAllIslands(UPoseSearchInteractionSubsystem *this)

{
  TArray<UE::PoseSearch::FInteractionIsland_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  FInteractionIsland *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = (this->Islands).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    pTVar1 = &this->Islands;
    lVar7 = (longlong)(int)uVar8;
    lVar9 = lVar7 * 8;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < (this->Islands).ArrayNum) {
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
      this_00 = *(FInteractionIsland **)((pTVar1->AllocatorInstance).Data + lVar9);
      if (this_00 != (FInteractionIsland *)0x0) {
        UE::PoseSearch::FInteractionIsland::~FInteractionIsland(this_00);
        ::operator_delete(this_00,200);
      }
      uVar5 = 0;
      if ((int)uVar8 < (this->Islands).ArrayNum) {
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
      _Dst = (pTVar1->AllocatorInstance).Data + lVar7 * 8;
      iVar6 = (this->Islands).ArrayNum + ~uVar8;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
      }
      piVar2 = &(this->Islands).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar1->AllocatorInstance,(this->Islands).ArrayNum,&(this->Islands).ArrayMax);
      lVar7 = lVar7 + -1;
      lVar9 = lVar9 + -8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// DestroyIsland @ 14a927d80

void __thiscall
UPoseSearchInteractionSubsystem::DestroyIsland(UPoseSearchInteractionSubsystem *this,int param_1)

{
  TArray<UE::PoseSearch::FInteractionIsland_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  FInteractionIsland *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  pTVar1 = &this->Islands;
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < (this->Islands).ArrayNum) {
    uVar5 = uVar7;
  }
  if (uVar5 == 0) {
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
  this_00 = *(FInteractionIsland **)((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 8);
  if (this_00 != (FInteractionIsland *)0x0) {
    UE::PoseSearch::FInteractionIsland::~FInteractionIsland(this_00);
    ::operator_delete(this_00,200);
  }
  uVar5 = 0;
  if (param_1 < (this->Islands).ArrayNum) {
    uVar5 = uVar7;
  }
  if (uVar5 == 0) {
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
  _Dst = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar6 = (this->Islands).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
  }
  piVar2 = &(this->Islands).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar1->AllocatorInstance,(this->Islands).ArrayNum,&(this->Islands).ArrayMax);
  return;
}

// FindIsland @ 14a928cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInteractionIsland * __thiscall
UPoseSearchInteractionSubsystem::FindIsland
          (UPoseSearchInteractionSubsystem *this,UObject *param_1,bool param_2)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FInteractionIsland *pFVar5;
  bool bVar6;
  AActor *pAVar7;
  UObject *pUVar8;
  AActor *pAVar9;
  FWeakObjectPtr *this_00;
  FScriptContainerElement *this_01;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [16];
  FScriptContainerElement *local_res20;
  
  if (param_1 != (UObject *)0x0) {
    if (param_2) {
      pAVar7 = UE::PoseSearch::GetContextOwningActor(param_1,false);
      pFVar11 = (this->Islands).AllocatorInstance.Data;
      iVar3 = (this->Islands).ArrayNum;
      local_res20 = pFVar11 + (longlong)iVar3 * 8;
      while( true ) {
        pFVar10 = local_res20;
        if ((this->Islands).ArrayNum != iVar3) {
          `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar11 == pFVar10) break;
        pFVar5 = *(FInteractionIsland **)pFVar11;
        this_00 = (FWeakObjectPtr *)(pFVar5->IslandAnimContexts).AllocatorInstance.Data;
        iVar4 = (pFVar5->IslandAnimContexts).ArrayNum;
        pFVar1 = this_00 + iVar4;
        while( true ) {
          if ((pFVar5->IslandAnimContexts).ArrayNum != iVar4) {
            `TCheckedPointerIterator<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (this_00 == pFVar1) break;
          pUVar8 = FWeakObjectPtr::Get(this_00);
          pAVar9 = UE::PoseSearch::GetContextOwningActor(pUVar8,false);
          if (pAVar9 == pAVar7) {
            return pFVar5;
          }
          this_00 = this_00 + 1;
        }
        pFVar11 = pFVar11 + 8;
      }
    }
    else {
      pFVar10 = (this->Islands).AllocatorInstance.Data;
      iVar3 = (this->Islands).ArrayNum;
      pFVar11 = pFVar10 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->Islands).ArrayNum != iVar3) {
          `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar10 == pFVar11) break;
        pFVar5 = *(FInteractionIsland **)pFVar10;
        this_01 = (pFVar5->IslandAnimContexts).AllocatorInstance.Data;
        pFVar2 = this_01 + (longlong)(pFVar5->IslandAnimContexts).ArrayNum * 8;
        for (; this_01 != pFVar2; this_01 = this_01 + 8) {
          bVar6 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                            ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)this_01,param_1);
          if (bVar6) {
            return pFVar5;
          }
        }
        pFVar10 = pFVar10 + 8;
      }
    }
  }
  return (FInteractionIsland *)0x0;
}

// GenerateAnimContextInfosAndTagToDatabases @ 14a929400

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
UPoseSearchInteractionSubsystem::GenerateAnimContextInfosAndTagToDatabases
          (UPoseSearchInteractionSubsystem *this,FAnimContextInfos *param_1,FTagToDatabases *param_2
          )

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *pFVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateAnimContextInfosAndTagToDatabases(UE::PoseSearch::FAnimContextInfos_&,UE::PoseSearch::FTagToDatabases_&)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos>
  FVar17;
  UWorld *pUVar18;
  longlong lVar19;
  UWorld *pUVar20;
  TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_> *this_00;
  TVector<double> *pTVar21;
  void *_Dst;
  FName FVar22;
  longlong *plVar23;
  uint uVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *pFVar28;
  longlong lVar29;
  uint uVar30;
  int *piVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  longlong local_res8;
  undefined1 local_c8;
  undefined1 local_c7 [7];
  longlong local_c0;
  FScriptContainerElement *local_b8;
  longlong local_b0;
  int *local_a8;
  FName local_a0;
  longlong local_98;
  FColor_u_0 local_90 [2];
  FName local_88;
  FName local_80;
  UPoseSearchDatabase *local_70;
  FName local_68;
  FName local_60;
  TVector<double> local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateAnimContextInfosAndTagToDatabases(UE::PoseSearch::FAnimContextInfos_&,UE::PoseSearch::FTagToDatabases_&)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos>
         )0x0) {
      pFVar16 = ::FName::FName(&local_68,
                               "STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos,*pFVar16,
                 L"STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos;
  if (StatPtr_STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos ==
      (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateAnimContextInfosAndTagToDatabases(UE::PoseSearch::FAnimContextInfos_&,UE::PoseSearch::FTagToDatabases_&)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos>
       )0x0) {
    pFVar16 = ::FName::FName(&local_60,
                             "STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos");
    FVar17 = (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateAnimContextInfosAndTagToDatabases(UE::PoseSearch::FAnimContextInfos_&,UE::PoseSearch::FTagToDatabases_&)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos,
                          *pFVar16,L"STAT_UPoseSearchInteractionSubsystem_GenerateAnimContextInfos",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar17;
  bVar9 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_14a9295b9:
    bVar9 = bVar11;
    bVar8 = bVar10;
    bVar10 = false;
    local_a0 = local_80;
    FVar22 = local_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_90[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_90[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_88.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                   ,0x20b);
        bVar9 = true;
        bVar8 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a9295b9;
    local_a0 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar10 = true;
  }
  pUVar18 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((pUVar18 == (UWorld *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SubsystemWorld",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                          ,0x210,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar31 = (int *)&param_1->field_0x8;
  local_a8 = piVar31;
  if (((*(int *)&param_1->field_0x8 != 0) ||
      (*(int *)&param_2->field_0x908 != *(int *)&param_2->field_0x92c)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AnimContextInfos.IsEmpty() && TagToDatabases.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                          ,0x211,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = this->AnimContextsAvailabilitiesNum;
  lVar29 = (longlong)(int)uVar12;
  pFVar3 = (this->AnimContextsAvailabilitiesBuffer).AllocatorInstance.Data;
  local_b0 = CONCAT44(local_b0._4_4_,uVar12);
  local_b8 = pFVar3;
  pFVar33 = pFVar3;
  pFVar1 = pFVar3;
  uVar24 = uVar12;
  if ((int)uVar12 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (uVar12 == 0) goto LAB_14a9296d5;
  while (uVar24 - 1 != 0) {
    if (*(ulonglong *)(pFVar1 + 0x18) < *(ulonglong *)pFVar33) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Algo::IsSorted(AnimContextsAvailabilities, [](const FPoseSearchInteractionAnimContextAvailabilities& A, const FPoseSearchInteractionAnimContextAvailabilities& B) { return A.AnimContext < B.AnimContext; })"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                          ,0x217,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      break;
    }
    pFVar33 = pFVar33 + 0x18;
    pFVar1 = pFVar1 + 0x18;
    uVar24 = uVar24 - 1;
  }
LAB_14a9296d5:
  local_c0 = lVar29;
  if (pFVar3 != pFVar3 + lVar29 * 0x18) {
    pFVar33 = pFVar3 + 0x10;
    do {
      if ((*(longlong **)(pFVar33 + -0x10) == (longlong *)0x0) ||
         (lVar19 = (**(code **)(**(longlong **)(pFVar33 + -0x10) + 0x180))(), lVar19 == 0)) {
LAB_14a929729:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("AnimContextAvailabilities.AnimContext && AnimContextAvailabilities.AnimContext->GetWorld() && AnimContextAvailabilities.AnimContext->GetWorld() == GetWorld()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                            ,0x21b,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        pUVar18 = (UWorld *)(**(code **)(**(longlong **)(pFVar33 + -0x10) + 0x180))();
        pUVar20 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
        if (pUVar18 != pUVar20) goto LAB_14a929729;
      }
      if ((*(int *)pFVar33 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!AnimContextAvailabilities.Availabilities.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                              ,0x21c,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar15 = *(int *)pFVar33;
      plVar25 = *(longlong **)(pFVar33 + -8);
      plVar23 = plVar25 + (longlong)iVar15 * 8;
      while( true ) {
        if (*(int *)pFVar33 != iVar15) {
          local_c8 = 0;
          `TCheckedPointerIterator<FPoseSearchInteractionAvailabilityEx_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_c8);
        }
        if (plVar25 == plVar23) break;
        if (*plVar25 != 0) {
          if ((*(longlong *)(*plVar25 + 0x30) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Database->Schema",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                  ,0x224,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar19 = plVar25[1];
          if (lVar19 != 0) {
            uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar19);
            this_00 = TMapBase<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>_>
                                  *)param_2,uVar12 + (int)((ulonglong)lVar19 >> 0x20),
                                 (FName *)(plVar25 + 1));
            local_70 = (UPoseSearchDatabase *)*plVar25;
            TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>
            ::AddUniqueImpl<UPoseSearchDatabase_const_*>(this_00,&local_70);
          }
        }
        plVar25 = plVar25 + 8;
      }
      pFVar1 = pFVar33 + 8;
      pFVar33 = pFVar33 + 0x18;
    } while (pFVar1 != pFVar3 + lVar29 * 0x18);
    FVar22 = local_a0;
    uVar12 = (uint)local_b0;
  }
  iVar15 = *piVar31;
  if (iVar15 < (int)uVar12) {
    iVar13 = UE::Core::Private::
             ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FAnimContextInfo>_>
                       (0x78,8,uVar12 - iVar15,
                        (ForElementType<UE::PoseSearch::FAnimContextInfo> *)param_1,piVar31,
                        (int *)&param_1->field_0xc);
    DefaultConstructItems<UE::PoseSearch::FAnimContextInfo,int>
              ((void *)((longlong)iVar13 * 0x78 + *(longlong *)param_1),uVar12 - iVar15);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar15) {
      uVar24 = iVar15 - uVar12;
      if (((int)(uVar12 | uVar24) < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar24 != 0) {
        _Dst = (void *)((longlong)(int)uVar12 * 0x78 + *(longlong *)param_1);
        iVar15 = (*piVar31 - uVar12) - uVar24;
        if (iVar15 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar24 * 0x78 + (longlong)_Dst),
                  (longlong)iVar15 * 0x78);
        }
        *piVar31 = *piVar31 - uVar24;
        UE::Core::Private::
        ReallocShrink<0,TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FAnimContextInfo>_>
                  (0x78,8,(ForElementType<UE::PoseSearch::FAnimContextInfo> *)param_1,*piVar31,
                   (int *)&param_1->field_0xc);
      }
    }
  }
  uVar12 = 0;
  if (0 < local_c0) {
    lVar29 = 0;
    lVar19 = 0;
    do {
      pFVar3 = local_b8;
      uVar24 = 0;
      if ((int)uVar12 < *piVar31) {
        uVar24 = ~uVar12 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar27 = *(longlong *)param_1;
      uVar24 = 0;
      if ((int)uVar12 < (int)(uint)local_b0) {
        uVar24 = ~uVar12 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((*(ulonglong *)pFVar3 == 0) || (*(int *)(pFVar3 + 0x10) == 0)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InAnimContextAvailabilities.AnimContext && !InAnimContextAvailabilities.Availabilities.IsEmpty()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                              ,0x21,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(FScriptContainerElement **)(lVar19 + lVar27) = pFVar3;
      pTVar21 = UE::PoseSearch::GetContextLocation(&local_58,*(UObject **)pFVar3,false);
      lVar4 = *(longlong *)(lVar19 + lVar27);
      dVar7 = (pTVar21->field0_0x0)._s_0.Y;
      pdVar2 = (double *)(lVar19 + 8 + lVar27);
      *pdVar2 = (pTVar21->field0_0x0)._s_0.X;
      pdVar2[1] = dVar7;
      *(double *)(lVar19 + 0x18 + lVar27) = (pTVar21->field0_0x0)._s_0.Z;
      *(undefined4 *)(lVar19 + 0x20 + lVar27) = 0;
      iVar15 = *(int *)(lVar4 + 0x10);
      lVar26 = *(longlong *)(lVar4 + 8);
      lVar32 = (longlong)iVar15 * 0x40 + lVar26;
      while( true ) {
        if (*(int *)(lVar4 + 0x10) != iVar15) {
          local_c7[0] = 0;
          `TCheckedPointerIterator<FPoseSearchInteractionAvailabilityEx_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_c7);
        }
        if (lVar26 == lVar32) break;
        fVar34 = *(float *)(lVar26 + 0x24) + *(float *)(lVar26 + 0x20);
        lVar26 = lVar26 + 0x40;
        fVar35 = *(float *)(lVar19 + 0x20 + lVar27);
        if (fVar34 <= fVar35) {
          fVar34 = fVar35;
        }
        *(float *)(lVar19 + 0x20 + lVar27) = fVar34;
      }
      uVar12 = uVar12 + 1;
      local_b8 = local_b8 + 0x18;
      lVar29 = lVar29 + 1;
      lVar19 = lVar19 + 0x78;
      piVar31 = local_a8;
    } while (lVar29 < local_c0);
    uVar12 = 0;
    local_res8 = 0;
    local_b0 = 1;
    local_98 = local_c0;
    lVar29 = local_c0;
    FVar22 = local_a0;
    do {
      if (local_b0 < lVar29) {
        uVar30 = ~uVar12 >> 0x1f;
        local_b8 = (FScriptContainerElement *)(lVar29 - local_b0);
        piVar31 = local_a8;
        lVar29 = local_res8;
        uVar24 = uVar12;
        do {
          uVar24 = uVar24 + 1;
          lVar29 = lVar29 + 0x78;
          uVar14 = 0;
          if ((int)uVar12 < *piVar31) {
            uVar14 = uVar30;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar19 = *(longlong *)param_1 + local_res8;
          uVar14 = 0;
          if ((int)uVar24 < *piVar31) {
            uVar14 = ~uVar24 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar27 = *(longlong *)param_1 + lVar29;
          if ((lVar19 == lVar27) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("this != &OtherAnimContextInfo",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                  ,0x31,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          dVar37 = *(double *)(lVar19 + 0x10) - *(double *)(lVar27 + 0x10);
          dVar7 = *(double *)(lVar19 + 0x18) - *(double *)(lVar27 + 0x18);
          dVar36 = *(double *)(lVar19 + 8) - *(double *)(lVar27 + 8);
          fVar35 = *(float *)(lVar19 + 0x20);
          if (*(float *)(lVar27 + 0x20) <= *(float *)(lVar19 + 0x20)) {
            fVar35 = *(float *)(lVar27 + 0x20);
          }
          if ((float)(dVar37 * dVar37 + dVar36 * dVar36 + dVar7 * dVar7) <= fVar35 * fVar35) {
            uVar14 = 0;
            if ((int)uVar12 < *piVar31) {
              uVar14 = uVar30;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar28 = (ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *)
                      (*(longlong *)param_1 + local_res8 + 0x28);
            uVar14 = 0;
            if ((int)uVar24 < *piVar31) {
              uVar14 = ~uVar24 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar15 = *(int *)pFVar28[1].InlineData;
            lVar19 = *(longlong *)param_1;
            if (iVar15 == *(int *)(pFVar28[1].InlineData + 4)) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FAnimContextInfo_const_*>_>
                                 (0x808,pFVar28,(int *)(pFVar28[1].InlineData + 4));
            }
            *(int *)pFVar28[1].InlineData = iVar15 + 1;
            pFVar5 = (ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *)
                     (pFVar28->SecondaryData).Data;
            if (pFVar5 != (ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *)0x0) {
              pFVar28 = pFVar5;
            }
            *(longlong *)(pFVar28->InlineData + (longlong)iVar15 * 8) =
                 (longlong)(int)uVar24 * 0x78 + lVar19;
            uVar14 = 0;
            if ((int)uVar24 < *(int *)&param_1->field_0x8) {
              uVar14 = ~uVar24 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            piVar31 = local_a8;
            pFVar28 = (ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *)
                      (*(longlong *)param_1 + 0x28 + lVar29);
            uVar14 = 0;
            if ((int)uVar12 < *local_a8) {
              uVar14 = uVar30;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar15 = *(int *)pFVar28[1].InlineData;
            lVar19 = *(longlong *)param_1;
            if (iVar15 == *(int *)(pFVar28[1].InlineData + 4)) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FAnimContextInfo_const_*>_>
                                 (0x808,pFVar28,(int *)(pFVar28[1].InlineData + 4));
            }
            *(int *)pFVar28[1].InlineData = iVar15 + 1;
            pFVar5 = (ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *)
                     (pFVar28->SecondaryData).Data;
            if (pFVar5 != (ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *)0x0) {
              pFVar28 = pFVar5;
            }
            *(longlong *)(pFVar28->InlineData + (longlong)iVar15 * 8) =
                 (longlong)(int)uVar12 * 0x78 + lVar19;
          }
          local_b8 = (FScriptContainerElement *)((longlong)local_b8 + -1);
        } while (local_b8 != (FScriptContainerElement *)0x0);
        local_b8 = (FScriptContainerElement *)0x0;
        lVar29 = local_c0;
        FVar22 = local_a0;
      }
      local_res8 = local_res8 + 0x78;
      local_b0 = local_b0 + 1;
      uVar12 = uVar12 + 1;
      local_98 = local_98 + -1;
    } while (local_98 != 0);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// GenerateSearchContexts @ 14a929f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchInteractionSubsystem::GenerateSearchContexts
          (UPoseSearchInteractionSubsystem *this,float param_1,
          TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
          *param_2)

{
  int *piVar1;
  TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts>
  FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_10a8 [32];
  FColor_u_0 local_1048 [2];
  LARGE_INTEGER local_1040;
  FName local_1038;
  FName local_1030;
  FAnimContextInfos local_1020;
  FStatMessage local_1010;
  FScriptContainerElement *local_1000;
  int local_ff8;
  undefined1 *local_ff0;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_> *local_fe8;
  code *local_fe0;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_> **local_fd8;
  code *local_fd0;
  undefined1 **local_fc8;
  TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *local_fb8;
  int iStack_fb0;
  undefined4 uStack_fac;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_> *local_fa8;
  TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *local_fa0;
  FScriptContainerElement **local_f98;
  FName local_f90;
  FName local_f88 [2];
  TArrayView<UE::PoseSearch::FInteractionSearchContext,int> local_f78;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_> local_f68;
  int local_c60;
  int local_c5c;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_c58;
  undefined8 uStack_c40;
  undefined8 local_c30;
  undefined4 local_c28;
  undefined1 local_c20 [2312];
  int local_318;
  int local_314;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_310;
  undefined8 uStack_2f8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  TSparseArray<TSparseSetElement<UE::PoseSearch::FAnimContextInfo_const_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_2d0;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_10a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts>
         )0x0) {
      pFVar11 = ::FName::FName(&local_f90,
                               "STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts,*pFVar11,
                 L"STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts;
  if (StatPtr_STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts ==
      (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts>
       )0x0) {
    pFVar11 = ::FName::FName(local_f88,"STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts"
                            );
    FVar12 = (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts,
                          *pFVar11,L"STAT_UPoseSearchInteractionSubsystem_GenerateSearchContexts",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar4 = false;
  bVar6 = false;
  local_1030.ComparisonIndex.Value = 0;
  local_1030.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1048[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1048[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1038.ComparisonIndex.Value = FVar14.Value;
        local_1038.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1038,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                   ,0x247);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1040.s.LowPart = FVar14.Value;
      local_1040.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      goto LAB_14a92a103;
    }
  }
  bVar5 = false;
  FVar15 = local_1030;
LAB_14a92a103:
  if ((param_2->ArrayNum != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SearchContexts.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                          ,0x24b,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = _UNK_150631d78;
  uVar7 = ___xmm_00000000ffffffff0000002000000000;
  local_1020._0_8_ = 0;
  local_1020._8_8_ = 0;
  local_310.NumBits = ___xmm_00000000ffffffff0000002000000000;
  local_310.MaxBits = _UNK_150631d74;
  uStack_2f8 = _UNK_150631d78;
  local_c20._2304_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_> *)0x0;
  local_318 = 0;
  local_314 = 8;
  local_310.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  local_2e0 = 0;
  local_2d8 = 0;
  GenerateAnimContextInfosAndTagToDatabases(this,&local_1020,(FTagToDatabases *)local_c20);
  local_1000 = (this->ValidInteractionSearches).AllocatorInstance.Data;
  local_ff8 = (this->ValidInteractionSearches).ArrayNum;
  local_c58._16_8_ = uVar7;
  uStack_c40 = uVar8;
  if ((local_ff8 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), local_c58._16_8_ = ___xmm_00000000ffffffff0000002000000000,
     uStack_c40 = _UNK_150631d78, bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_fa8 = &local_f68;
  local_f98 = &local_1000;
  local_f68.SecondaryData.Data = (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *)0x0;
  local_c60 = 0;
  local_c5c = 4;
  local_fe0 = UE::Core::Private::Function::
              TFunctionRefCaller<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::<lambda_2>,void>
              ::Call;
  local_ff0 = local_c20;
  local_c58.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  local_fe8 = &local_f68;
  local_fc8 = &local_ff0;
  local_fd0 = UE::Core::Private::Function::
              TFunctionRefCaller<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::<lambda_1>,void,UE::PoseSearch::FAnimContextInfo_const_&>
              ::Call;
  local_c30 = 0;
  local_c28 = 0;
  local_fd8 = &local_fa8;
  local_fa0 = param_2;
  `UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FAnimContextInfoVisitor::
  FAnimContextInfoVisitor
            (&local_2d0,&local_1020,
             (TFunctionRef<void___cdecl(UE::PoseSearch::FAnimContextInfo_const_&)> *)&local_fd0,
             (TFunctionRef<void___cdecl(void)> *)&local_fe0);
  pTVar2 = (TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
            *)(param_2->AllocatorInstance).SecondaryData.Data;
  iStack_fb0 = param_2->ArrayNum;
  local_fb8 = param_2;
  if (pTVar2 != (TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    local_fb8 = pTVar2;
  }
  if ((iStack_fb0 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f78._12_4_ = uStack_fac;
  local_f78.ArrayNum = iStack_fb0;
  local_f78.DataPtr = (FInteractionSearchContext *)local_fb8;
  PopulateContinuingProperties(this,param_1,&local_f78);
  local_58 = 0;
  TSparseArray<TSparseSetElement<UE::PoseSearch::FAnimContextInfo_const_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::PoseSearch::FAnimContextInfo_const_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            (&local_2d0);
  local_c28 = 0;
  TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::DestroyElements(&local_f68,0,local_c60);
  local_c60 = 0;
  if (local_c5c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>_>
              (0xc0,8,0,&local_f68,0,&local_c5c);
  }
  iVar9 = local_c58.MaxBits;
  uStack_c40 = 0xffffffff;
  local_c58._16_8_ = (ulonglong)(uint)local_c58.MaxBits << 0x20;
  if (0x20 < (uint)iVar9) {
    local_c58.NumBits = 0;
    local_c58.MaxBits = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc(&local_c58,0);
  }
  local_2d8 = 0;
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                     *)local_c20,0,local_318);
  local_318 = 0;
  if (local_314 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>_>
              (0x120,8,0,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_> *)
               local_c20,0,&local_314);
  }
  iVar9 = local_310.MaxBits;
  uStack_2f8 = 0xffffffff;
  local_310._16_8_ = (ulonglong)(uint)local_310.MaxBits << 0x20;
  if (0x20 < (uint)iVar9) {
    local_310.NumBits = 0;
    local_310.MaxBits = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc(&local_310,0);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1010.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_1010.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1040);
      local_1010.StatData.Pad[4] = '\0';
      local_1010.StatData.Pad[5] = '\0';
      local_1010.StatData.Pad[6] = '\0';
      local_1010.StatData.Pad[7] = '\0';
      local_1010.StatData.Pad[0] = local_1040.s.LowPart._0_1_;
      local_1010.StatData.Pad[1] = local_1040.s.LowPart._1_1_;
      local_1010.StatData.Pad[2] = local_1040.s.LowPart._2_1_;
      local_1010.StatData.Pad[3] = local_1040.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1010);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetAvailableIsland @ 14a92add0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInteractionIsland * __thiscall
UPoseSearchInteractionSubsystem::GetAvailableIsland(UPoseSearchInteractionSubsystem *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FInteractionIsland *pFVar6;
  UWorld *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FInteractionIsland *local_28 [2];
  
  pFVar8 = (this->Islands).AllocatorInstance.Data;
  iVar5 = (this->Islands).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->Islands).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    pFVar6 = *(FInteractionIsland **)pFVar8;
    bVar4 = UE::PoseSearch::FInteractionIsland::IsInitialized(pFVar6);
    if (!bVar4) {
      return pFVar6;
    }
    pFVar8 = pFVar8 + 8;
  }
  pFVar6 = ::operator_new(200);
  local_28[0] = (FInteractionIsland *)0x0;
  if (pFVar6 != (FInteractionIsland *)0x0) {
    pUVar7 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    local_28[0] = UE::PoseSearch::FInteractionIsland::FInteractionIsland
                            (pFVar6,(pUVar7->PersistentLevel).field0_0x0.DebugPtr,this);
  }
  pFVar2 = (this->Islands).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Islands).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FInteractionIsland *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->Islands).ArrayNum;
  piVar1 = &(this->Islands).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Islands).AllocatorInstance,piVar1);
  }
  (this->Islands).ArrayNum = iVar5 + 1;
  *(FInteractionIsland **)((this->Islands).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_28[0];
  return local_28[0];
}

// GetPrivateStaticClass @ 14a92bf90

UClass * __cdecl UPoseSearchInteractionSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchInteractionSubsystem",
               &Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.InnerSingleton,
               StaticRegisterNativesUPoseSearchInteractionSubsystem,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchInteractionSubsystem>,
               InternalVTableHelperCtorCaller<UPoseSearchInteractionSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionSubsystem.InnerSingleton;
}

// GetResult_AnyThread @ 14a92c350

void __thiscall
UPoseSearchInteractionSubsystem::GetResult_AnyThread
          (UPoseSearchInteractionSubsystem *this,UObject *param_1,
          FPoseSearchBlueprintResult *param_2,bool param_3)

{
  FInteractionIsland *this_00;
  TObjectPtr<UObject>_u_0 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined1 local_49;
  FName local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  this_00 = FindIsland(this,param_1,param_3);
  if (this_00 == (FInteractionIsland *)0x0) {
    local_7b = 0;
    local_79 = 0;
    local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_4b = 0;
    local_49 = 0;
    local_80 = 0;
    local_7c = 0;
    local_4c = 0;
    local_88.DebugPtr = (UObject *)0x0;
    local_58 = 0;
    local_40 = (void *)0x0;
    local_38 = 0;
    local_30 = (void *)0x0;
    local_28 = 0;
    local_20 = (void *)0x0;
    local_18 = 0;
    local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_78 = 0x3f800000;
    local_50 = 0x7f7fffff;
    local_48 = UE::PoseSearch::DefaultRole;
    FPoseSearchBlueprintResult::operator=(param_2,(FPoseSearchBlueprintResult *)&local_88.ObjectPtr)
    ;
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
  }
  else {
    UE::PoseSearch::FInteractionIsland::GetResult_AnyThread(this_00,param_1,param_2,param_3);
  }
  return;
}

// GetStatId @ 14a92caa0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UPoseSearchInteractionSubsystem::GetStatId(UPoseSearchInteractionSubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UPoseSearchInteractionSubsystem::GetStatId(void)const_::_2_::FStat_UPoseSearchInteractionSubsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UPoseSearchInteractionSubsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UPoseSearchInteractionSubsystem::GetStatId(void)const_::_2_::FStat_UPoseSearchInteractionSubsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UPoseSearchInteractionSubsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UPoseSearchInteractionSubsystem,*pFVar1,
                   L"UPoseSearchInteractionSubsystem","STATGROUP_Tickables","STATCAT_Advanced",
                   L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UPoseSearchInteractionSubsystem;
  if (StatPtr_UPoseSearchInteractionSubsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UPoseSearchInteractionSubsystem::GetStatId(void)const_::_2_::FStat_UPoseSearchInteractionSubsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UPoseSearchInteractionSubsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UPoseSearchInteractionSubsystem::GetStatId(void)const_::_2_::FStat_UPoseSearchInteractionSubsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UPoseSearchInteractionSubsystem,
                         *pFVar1,L"UPoseSearchInteractionSubsystem","STATGROUP_Tickables",
                         "STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetSubsystem_AnyThread @ 14a92cc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPoseSearchInteractionSubsystem * __cdecl
UPoseSearchInteractionSubsystem::GetSubsystem_AnyThread(UObject *param_1)

{
  UWorld *this;
  UPoseSearchInteractionSubsystem *pUVar1;
  
  if (param_1 != (UObject *)0x0) {
    this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
    if (this != (UWorld *)0x0) {
      pUVar1 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this);
      if (pUVar1 != (UPoseSearchInteractionSubsystem *)0x0) {
        pUVar1 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this);
        return pUVar1;
      }
    }
  }
  return (UPoseSearchInteractionSubsystem *)0x0;
}

// Initialize @ 14a92f550

void __thiscall
UPoseSearchInteractionSubsystem::Initialize
          (UPoseSearchInteractionSubsystem *this,FSubsystemCollectionBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                       ,0x1e8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  return;
}

// OnInteractionContinuing @ 14a933b30

void __cdecl
UPoseSearchInteractionSubsystem::OnInteractionContinuing(FValidInteractionSearch *param_1)

{
  UE::PoseSearch::FInteractionSearchContextBase::VLogContext(&param_1->SearchContext,&FColor::Green)
  ;
  return;
}

// OnInteractionEnd @ 14a933b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UPoseSearchInteractionSubsystem::OnInteractionEnd(FValidInteractionSearch *param_1)

{
  int iVar1;
  int iVar2;
  UPrimitiveComponent *this;
  UObject *pUVar3;
  AActor *pAVar4;
  UClass *pUVar5;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar6;
  undefined1 local_res8 [8];
  
  UE::PoseSearch::FInteractionSearchContextBase::VLogContext(&param_1->SearchContext,&FColor::Black)
  ;
  iVar1 = (param_1->DisabledCollisions).ArrayNum;
  this_00 = (FWeakObjectPtr *)(param_1->DisabledCollisions).AllocatorInstance.Data;
  pFVar6 = this_00 + (longlong)iVar1 * 2;
  while( true ) {
    if ((param_1->DisabledCollisions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar6) break;
    pUVar3 = FWeakObjectPtr::Get(this_00);
    if (pUVar3 != (UObject *)0x0) {
      pAVar4 = (AActor *)FWeakObjectPtr::Get(this_00 + 1);
      if ((pAVar4 != (AActor *)0x0) &&
         (this = *(UPrimitiveComponent **)(pUVar3 + 0xb), this != (UPrimitiveComponent *)0x0)) {
        pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar5->_padding_)) {
          UPrimitiveComponent::IgnoreActorWhenMoving(this,pAVar4,false);
        }
      }
    }
    this_00 = this_00 + 2;
  }
  return;
}

// OnInteractionStart @ 14a933c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UPoseSearchInteractionSubsystem::OnInteractionStart(FValidInteractionSearch *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar3;
  AActor *pAVar4;
  AActor *pAVar5;
  UPrimitiveComponent *this;
  UPrimitiveComponent *this_00;
  code *pcVar6;
  longlong lVar7;
  FValidInteractionSearch *pFVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  TObjectPtr<USceneComponent>_u_0 *pTVar16;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  TObjectPtr<USceneComponent>_u_0 TVar20;
  TArray<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
  *pTVar21;
  uint uVar22;
  undefined1 auStack_158 [32];
  TObjectPtr<USceneComponent>_u_0 *local_138;
  TObjectPtr<USceneComponent>_u_0 *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  TObjectPtr<USceneComponent>_u_0 local_108;
  TObjectPtr<USceneComponent>_u_0 local_100;
  longlong local_f8;
  TObjectPtr<USceneComponent>_u_0 local_f0;
  TObjectPtr<USceneComponent>_u_0 TStack_e8;
  TObjectPtr<USceneComponent>_u_0 local_e0;
  TObjectPtr<USceneComponent>_u_0 TStack_d8;
  uint local_d0;
  uint local_cc;
  FValidInteractionSearch *local_c8;
  longlong local_c0;
  AActor *local_b8;
  AActor *local_b0;
  AActor *local_a8;
  AActor *local_a0;
  longlong local_98;
  TObjectPtr<USceneComponent>_u_0 local_90 [4];
  TObjectPtr<USceneComponent>_u_0 *local_70;
  int local_68;
  int local_64;
  TObjectPtr<USceneComponent>_u_0 local_60 [4];
  TObjectPtr<USceneComponent>_u_0 *local_40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_c8 = param_1;
  UE::PoseSearch::FInteractionSearchContextBase::VLogContext(&param_1->SearchContext,&FColor::Blue);
  if (((param_1->DisabledCollisions).ArrayNum != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValidInteractionSearch.DisabledCollisions.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                         ,0x39a,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1->SearchContext).bDisableCollisions != false) {
    iVar11 = (param_1->SearchContext).AnimContexts.ArrayNum;
    local_70 = (TObjectPtr<USceneComponent>_u_0 *)0x0;
    local_68 = 0;
    local_64 = 4;
    local_40 = (TObjectPtr<USceneComponent>_u_0 *)0x0;
    local_38 = 0;
    local_34 = 4;
    TVar20.DebugPtr = (USceneComponent *)0x0;
    if (0 < iVar11) {
      do {
        uVar22 = TVar20._0_4_;
        uVar10 = 0;
        if ((int)uVar22 < iVar11) {
          uVar10 = ~uVar22 >> 0x1f;
        }
        if (uVar10 == 0) {
          local_130 = (TObjectPtr<USceneComponent>_u_0 *)(longlong)iVar11;
          local_138 = (TObjectPtr<USceneComponent>_u_0 *)(longlong)(int)uVar22;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FVar3 = (param_1->SearchContext).AnimContexts.AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)param_1;
        if (FVar3 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
          FVar17 = FVar3;
        }
        pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((longlong)FVar17 + (longlong)(int)uVar22 * 8));
        if (pUVar14 != (UObject *)0x0) {
          local_108.DebugPtr =
               (USceneComponent *)UE::PoseSearch::GetContextOwningActor(pUVar14,false);
          if (((AActor *)local_108.DebugPtr == (AActor *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Actor",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                 ,0x3a5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar16 = local_90;
          if (local_70 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
            pTVar16 = local_70;
          }
          if (pTVar16 <= &local_108) {
            pTVar16 = local_90;
            if (local_70 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
              pTVar16 = local_70;
            }
            if (&local_108 < pTVar16 + local_64) {
              local_120 = (longlong)local_68;
              local_118 = 8;
              local_138 = &local_108;
              local_130 = local_90;
              if (local_70 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
                local_130 = local_70;
              }
              local_128 = (longlong)local_64;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
          iVar11 = local_68;
          if (local_68 == local_64) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<AActor_*>_>
                               (0x808,(ForElementType<AActor_*> *)&local_90[0].ObjectPtr,&local_64);
          }
          local_68 = iVar11 + 1;
          pTVar16 = local_90;
          if (local_70 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
            pTVar16 = local_70;
          }
          pTVar16[iVar11].DebugPtr = (USceneComponent *)local_108;
          TVar20 = (TObjectPtr<USceneComponent>_u_0)
                   *(TObjectPtr<USceneComponent>_u_0 *)
                    &((local_108.DebugPtr)->TransformUpdated).field_0x8;
          if (TVar20.DebugPtr == (USceneComponent *)0x0) {
LAB_14a933e96:
            local_100.DebugPtr = (USceneComponent *)0x0;
          }
          else {
            pUVar15 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
            iVar11 = (int)pUVar15->_padding_;
            if ((*(int *)((TVar20.DebugPtr)->_padding_ + 0x38) < iVar11) ||
               (local_100 = TVar20,
               (longlong *)
               *(undefined1 **)
                (*(longlong *)((TVar20.DebugPtr)->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
               &pUVar15->_padding_)) goto LAB_14a933e96;
          }
          pTVar16 = local_60;
          if (local_40 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
            pTVar16 = local_40;
          }
          if (pTVar16 <= &local_100) {
            pTVar16 = local_60;
            if (local_40 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
              pTVar16 = local_40;
            }
            if (&local_100 < pTVar16 + local_34) {
              local_120 = (longlong)local_38;
              local_118 = 8;
              local_138 = &local_100;
              local_130 = local_60;
              if (local_40 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
                local_130 = local_40;
              }
              local_128 = (longlong)local_34;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
          iVar11 = local_38;
          if (local_38 == local_34) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UPrimitiveComponent_*>_>
                               (0x808,(ForElementType<UPrimitiveComponent_*> *)
                                      &local_60[0].ObjectPtr,&local_34);
          }
          local_38 = iVar11 + 1;
          pTVar16 = local_60;
          if (local_40 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
            pTVar16 = local_40;
          }
          pTVar16[iVar11].DebugPtr = (USceneComponent *)local_100;
        }
        iVar11 = (param_1->SearchContext).AnimContexts.ArrayNum;
        TVar20._0_4_ = uVar22 + 1;
        TVar20._4_4_ = 0;
      } while ((int)TVar20._0_4_ < iVar11);
    }
    uVar10 = 0;
    if (0 < local_68) {
      local_f8 = 0;
      do {
        uVar22 = uVar10 + 1;
        local_98 = local_f8 + 8;
        local_cc = uVar22;
        if ((int)uVar22 < local_68) {
          local_d0 = ~uVar10 >> 0x1f;
          lVar19 = local_98;
          do {
            uVar13 = local_d0;
            lVar7 = local_f8;
            uVar12 = 0;
            if ((int)uVar10 < local_68) {
              uVar12 = local_d0;
            }
            local_c0 = lVar19;
            if (uVar12 == 0) {
              local_138 = (TObjectPtr<USceneComponent>_u_0 *)(longlong)(int)uVar10;
              local_130 = (TObjectPtr<USceneComponent>_u_0 *)(longlong)local_68;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            pTVar16 = local_90;
            if (local_70 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
              pTVar16 = local_70;
            }
            pAVar4 = *(AActor **)(lVar7 + (longlong)pTVar16);
            uVar12 = 0;
            if ((int)uVar22 < local_68) {
              uVar12 = ~uVar22 >> 0x1f;
            }
            if (uVar12 == 0) {
              local_138 = (TObjectPtr<USceneComponent>_u_0 *)(longlong)(int)uVar22;
              local_130 = (TObjectPtr<USceneComponent>_u_0 *)(longlong)local_68;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            pTVar16 = local_90;
            if (local_70 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
              pTVar16 = local_70;
            }
            pAVar5 = *(AActor **)(lVar19 + (longlong)pTVar16);
            if (((pAVar4 == (AActor *)0x0) || (pAVar5 == (AActor *)0x0)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ActorA && ActorB",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                   ,0x3b1,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar12 = 0;
            if ((int)uVar10 < local_38) {
              uVar12 = uVar13;
            }
            if (uVar12 == 0) {
              local_138 = (TObjectPtr<USceneComponent>_u_0 *)(longlong)(int)uVar10;
              local_130 = (TObjectPtr<USceneComponent>_u_0 *)(longlong)local_38;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            pTVar16 = local_60;
            if (local_40 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
              pTVar16 = local_40;
            }
            this = *(UPrimitiveComponent **)(local_f8 + (longlong)pTVar16);
            uVar13 = 0;
            if ((int)uVar22 < local_38) {
              uVar13 = ~uVar22 >> 0x1f;
            }
            if (uVar13 == 0) {
              local_138 = (TObjectPtr<USceneComponent>_u_0 *)(longlong)(int)uVar22;
              local_130 = (TObjectPtr<USceneComponent>_u_0 *)(longlong)local_38;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            pFVar8 = local_c8;
            pTVar16 = local_60;
            if (local_40 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
              pTVar16 = local_40;
            }
            this_00 = *(UPrimitiveComponent **)(lVar19 + (longlong)pTVar16);
            if (this != (UPrimitiveComponent *)0x0) {
              pFVar18 = (this->MoveIgnoreActors).AllocatorInstance.Data;
              pFVar2 = pFVar18 + (longlong)(this->MoveIgnoreActors).ArrayNum * 8;
              for (; pFVar18 != pFVar2; pFVar18 = pFVar18 + 8) {
                if (*(AActor **)pFVar18 == pAVar5) goto LAB_14a9342f2;
              }
              pTVar21 = &local_c8->DisabledCollisions;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AActor *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pAVar4);
              }
              local_f0.DebugPtr = (USceneComponent *)0x0;
              local_b8 = pAVar4;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AActor *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pAVar4);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_f0.ObjectPtr,(FObjectPtr)&local_b8)
              ;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AActor *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pAVar5);
              }
              TStack_e8.DebugPtr = (USceneComponent *)0x0;
              local_b0 = pAVar5;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AActor *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pAVar5);
              }
              FWeakObjectPtr::operator=
                        ((FWeakObjectPtr *)&TStack_e8.ObjectPtr,(FObjectPtr)&local_b0);
              pTVar16 = (TObjectPtr<USceneComponent>_u_0 *)(pTVar21->AllocatorInstance).Data;
              if ((pTVar16 <= &local_f0) &&
                 (lVar19 = (longlong)(pFVar8->DisabledCollisions).ArrayMax,
                 &local_f0 < pTVar16 + lVar19 * 2)) {
                local_120 = (longlong)(pFVar8->DisabledCollisions).ArrayNum;
                local_118 = 0x10;
                local_138 = &local_f0;
                local_130 = pTVar16;
                local_128 = lVar19;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              iVar11 = (pFVar8->DisabledCollisions).ArrayNum;
              piVar1 = &(pFVar8->DisabledCollisions).ArrayMax;
              if (iVar11 == *piVar1) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,&pTVar21->AllocatorInstance,piVar1);
              }
              (pFVar8->DisabledCollisions).ArrayNum = iVar11 + 1;
              pTVar16 = (TObjectPtr<USceneComponent>_u_0 *)
                        ((pTVar21->AllocatorInstance).Data + (longlong)iVar11 * 0x10);
              *pTVar16 = local_f0;
              pTVar16[1] = TStack_e8;
              UPrimitiveComponent::IgnoreActorWhenMoving(this,pAVar5,true);
            }
LAB_14a9342f2:
            pFVar8 = local_c8;
            if (this_00 != (UPrimitiveComponent *)0x0) {
              pFVar18 = (this_00->MoveIgnoreActors).AllocatorInstance.Data;
              pFVar2 = pFVar18 + (longlong)(this_00->MoveIgnoreActors).ArrayNum * 8;
              for (; pFVar18 != pFVar2; pFVar18 = pFVar18 + 8) {
                if (*(AActor **)pFVar18 == pAVar4) goto LAB_14a934471;
              }
              pTVar21 = &local_c8->DisabledCollisions;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AActor *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pAVar5);
              }
              local_e0.DebugPtr = (USceneComponent *)0x0;
              local_a8 = pAVar5;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AActor *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pAVar5);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_e0.ObjectPtr,(FObjectPtr)&local_a8)
              ;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AActor *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pAVar4);
              }
              TStack_d8.DebugPtr = (USceneComponent *)0x0;
              local_a0 = pAVar4;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AActor *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pAVar4);
              }
              FWeakObjectPtr::operator=
                        ((FWeakObjectPtr *)&TStack_d8.ObjectPtr,(FObjectPtr)&local_a0);
              pTVar16 = (TObjectPtr<USceneComponent>_u_0 *)(pTVar21->AllocatorInstance).Data;
              if ((pTVar16 <= &local_e0) &&
                 (lVar19 = (longlong)(pFVar8->DisabledCollisions).ArrayMax,
                 &local_e0 < pTVar16 + lVar19 * 2)) {
                local_120 = (longlong)(pFVar8->DisabledCollisions).ArrayNum;
                local_118 = 0x10;
                local_138 = &local_e0;
                local_130 = pTVar16;
                local_128 = lVar19;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              iVar11 = (pFVar8->DisabledCollisions).ArrayNum;
              piVar1 = &(pFVar8->DisabledCollisions).ArrayMax;
              if (iVar11 == *piVar1) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,&pTVar21->AllocatorInstance,piVar1);
              }
              (pFVar8->DisabledCollisions).ArrayNum = iVar11 + 1;
              pTVar16 = (TObjectPtr<USceneComponent>_u_0 *)
                        ((pTVar21->AllocatorInstance).Data + (longlong)iVar11 * 0x10);
              *pTVar16 = local_e0;
              pTVar16[1] = TStack_d8;
              UPrimitiveComponent::IgnoreActorWhenMoving(this_00,pAVar4,true);
            }
LAB_14a934471:
            uVar22 = uVar22 + 1;
            lVar19 = local_c0 + 8;
          } while ((int)uVar22 < local_68);
        }
        uVar10 = local_cc;
        local_f8 = local_98;
      } while ((int)uVar10 < local_68);
    }
  }
  return;
}

// PopulateContinuingProperties @ 14a9348e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchInteractionSubsystem::PopulateContinuingProperties
          (UPoseSearchInteractionSubsystem *this,float param_1,
          TArrayView<UE::PoseSearch::FInteractionSearchContext,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::PopulateContinuingProperties(float,TArrayView<UE::PoseSearch::FInteractionSearchContext,int>)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties>
  FVar14;
  FInteractionSearchContext *pFVar15;
  FInteractionSearchResult *pFVar16;
  UPoseSearchDatabase *pUVar17;
  FSearchIndex *this_00;
  FSearchIndexAsset *pFVar18;
  FPoseSearchDatabaseAnimationAsset *pFVar19;
  uint uVar20;
  FNameEntryId FVar21;
  FName FVar22;
  FInteractionSearchContext *pFVar23;
  FScriptContainerElement *pFVar24;
  uint local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20 [2];
  FName local_b8;
  FName local_b0;
  UObject *local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::PopulateContinuingProperties(float,TArrayView<UE::PoseSearch::FInteractionSearchContext,int>)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties>
         )0x0) {
      pFVar13 = ::FName::FName(&local_98,
                               "STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties,*pFVar13
                 ,L"STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties;
  if (StatPtr_STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties ==
      (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::PopulateContinuingProperties(float,TArrayView<UE::PoseSearch::FInteractionSearchContext,int>)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties>
       )0x0) {
    pFVar13 = ::FName::FName(&local_90,
                             "STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties");
    FVar14 = (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::PopulateContinuingProperties(float,TArrayView<UE::PoseSearch::FInteractionSearchContext,int>)const_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties
                          ,*pFVar13,
                          L"STAT_UPoseSearchInteractionSubsystem_PopulateContinuingProperties",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar14;
  bVar7 = false;
  bVar9 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar20 = FVar22.Number;
  if ((FVar21.Value != 0) || (uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar21.Value;
        local_b8.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                   ,0x18c);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar21.Value;
      uStackX_1c = uVar20;
      local_b0 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar8 = true;
      goto LAB_14a934a81;
    }
  }
  bVar8 = false;
  local_b0 = local_88;
  FVar22 = local_88;
LAB_14a934a81:
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                          ,400,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar11 = __real_7f7fffff;
  fVar10 = __real_38d1b717;
  pFVar23 = param_2->DataPtr;
  pFVar15 = pFVar23 + param_2->ArrayNum;
  do {
    if (pFVar23 == pFVar15) {
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar8) {
        FThreadStats::AddMessage(FVar22,CycleScopeEnd);
      }
      return;
    }
    pFVar24 = (this->Islands).AllocatorInstance.Data;
    iVar5 = (this->Islands).ArrayNum;
    pFVar1 = pFVar24 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->Islands).ArrayNum != iVar5) {
        local_res18 = local_res18 & 0xffffff00;
        `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res18);
      }
      if (pFVar24 == pFVar1) goto LAB_14a934c96;
      pFVar16 = UE::PoseSearch::FInteractionIsland::FindSearchResult
                          (*(FInteractionIsland **)pFVar24,pFVar23);
      if (pFVar16 != (FInteractionSearchResult *)0x0) break;
      pFVar24 = pFVar24 + 8;
    }
    if (((((int)pFVar16->_padding_ != -1) &&
         (bVar12 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                             ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                              ((longlong)&pFVar16->_padding_ + 4),(void *)0x0), !bVar12)) &&
        ((int)pFVar16->_padding_ != -1)) &&
       (bVar12 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                            ((longlong)&pFVar16->_padding_ + 4),(void *)0x0), !bVar12)) {
      pUVar17 = (UPoseSearchDatabase *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar16->_padding_ + 4));
      this_00 = UPoseSearchDatabase::GetSearchIndex(pUVar17);
      pFVar18 = UE::PoseSearch::FSearchIndexBase::GetAssetForPose
                          ((FSearchIndexBase *)this_00,(int)pFVar16->_padding_);
      if (pFVar18 != (FSearchIndexAsset *)0x0) {
        pUVar17 = (UPoseSearchDatabase *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar16->_padding_ + 4));
        pFVar19 = UPoseSearchDatabase::GetDatabaseAnimationAsset(pUVar17,pFVar18);
        if (pFVar19 != (FPoseSearchDatabaseAnimationAsset *)0x0) {
          if ((pFVar18->ToRealTimeFactor <= fVar10) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SearchIndexAsset->GetToRealTimeFactor() > (1.e-4f)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                  ,0x1a0,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar2 = pFVar18->ToRealTimeFactor;
          if ((fVar11 == *(float *)((longlong)&pFVar16->_padding_ + 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsAssetTimeValid(AssetTime)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                                  ,0x4a,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar23->PlayingAssetAccumulatedTime =
               param_1 / fVar2 + *(float *)((longlong)&pFVar16->_padding_ + 4);
          local_a0 = (UObject *)(**(code **)(pFVar19->_padding_ + 8))(pFVar19);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_a0);
          }
          FWeakObjectPtr::operator=(&(pFVar23->PlayingAsset).WeakPtr,(FObjectPtr)&local_a0);
          pFVar23->bIsPlayingAssetMirrored = pFVar18->bMirrored;
          uVar3 = pFVar18->BlendParameterX;
          uVar4 = pFVar18->BlendParameterY;
          (pFVar23->PlayingAssetBlendParameters).field0_0x0._s_0.X = (double)(float)uVar3;
          (pFVar23->PlayingAssetBlendParameters).field0_0x0._s_0.Y = (double)(float)uVar4;
          (pFVar23->PlayingAssetBlendParameters).field0_0x0._s_0.Z = 0.0;
        }
      }
    }
LAB_14a934c96:
    pFVar23 = pFVar23 + 1;
    FVar22 = local_b0;
  } while( true );
}

// Query_AnyThread @ 14a936600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchInteractionSubsystem::Query_AnyThread
          (UPoseSearchInteractionSubsystem *this,
          TArrayView<FPoseSearchInteractionAvailability_const_,int> *param_1,UObject *param_2,
          FPoseSearchBlueprintResult *param_3,FName param_4,IPoseHistory *param_5,bool param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FInteractionIsland *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_void___cdecl_UPoseSearchInteractionSubsystem::Query_AnyThread(TArrayView<FPoseSearchInteractionAvailability_const_,int>,UObject_const_*,FPoseSearchBlueprintResult_&,FName,UE::PoseSearch::IPoseHistory_const_*,bool)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_Query_AnyThread>
  FVar10;
  FName *pFVar11;
  FPoseSearchInteractionAvailability *pFVar12;
  FName FVar13;
  FScriptContainerElement *this_01;
  FPoseSearchInteractionAvailability *pFVar14;
  FName FVar15;
  undefined1 local_197 [3];
  FColor_u_0 local_194 [3];
  FName local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FName local_178;
  FName local_170;
  TObjectPtr<UObject>_u_0 local_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined2 local_153;
  undefined1 local_151;
  undefined8 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined2 local_123;
  undefined1 local_121;
  FName local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  TObjectPtr<UObject>_u_0 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined2 local_db;
  undefined1 local_d9;
  undefined8 local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined2 local_ab;
  undefined1 local_a9;
  FName local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  FName local_70;
  FName local_68 [2];
  TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int> local_58;
  TArrayView<FPoseSearchInteractionAvailability_const_,int> local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UPoseSearchInteractionSubsystem_Query_AnyThread ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UPoseSearchInteractionSubsystem::Query_AnyThread(TArrayView<FPoseSearchInteractionAvailability_const_,int>,UObject_const_*,FPoseSearchBlueprintResult_&,FName,UE::PoseSearch::IPoseHistory_const_*,bool)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_Query_AnyThread>
         )0x0) {
      pFVar9 = ::FName::FName(&local_70,"STAT_UPoseSearchInteractionSubsystem_Query_AnyThread");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UPoseSearchInteractionSubsystem_Query_AnyThread,*pFVar9,
                 L"STAT_UPoseSearchInteractionSubsystem_Query_AnyThread","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_UPoseSearchInteractionSubsystem_Query_AnyThread;
  if (StatPtr_STAT_UPoseSearchInteractionSubsystem_Query_AnyThread ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UPoseSearchInteractionSubsystem::Query_AnyThread(TArrayView<FPoseSearchInteractionAvailability_const_,int>,UObject_const_*,FPoseSearchBlueprintResult_&,FName,UE::PoseSearch::IPoseHistory_const_*,bool)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_Query_AnyThread>
       )0x0) {
    pFVar9 = ::FName::FName(local_68,"STAT_UPoseSearchInteractionSubsystem_Query_AnyThread");
    FVar10 = (FThreadSafeStaticStat<_public:_void___cdecl_UPoseSearchInteractionSubsystem::Query_AnyThread(TArrayView<FPoseSearchInteractionAvailability_const_,int>,UObject_const_*,FPoseSearchBlueprintResult_&,FName,UE::PoseSearch::IPoseHistory_const_*,bool)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_Query_AnyThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UPoseSearchInteractionSubsystem_Query_AnyThread,*pFVar9,
                          L"STAT_UPoseSearchInteractionSubsystem_Query_AnyThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar4 = false;
  bVar5 = false;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  bVar7 = false;
  bVar8 = false;
  if ((FVar13.ComparisonIndex.Value.Value == 0) && (FVar13.Number == 0)) {
LAB_14a936792:
    bVar5 = bVar8;
    bVar4 = bVar7;
    bVar7 = false;
    FVar13 = local_170;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_194[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_194[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar7 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_178.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                   ,0x481);
        bVar4 = true;
        bVar5 = true;
        bVar7 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a936792;
    local_188 = FVar13;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar7 = true;
  }
  local_150 = 0x3f800000;
  local_153 = 0;
  local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_151 = 0;
  local_123 = 0;
  local_121 = 0;
  local_158 = 0;
  local_154 = 0;
  local_124 = 0;
  local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_160.DebugPtr = (UObject *)0x0;
  local_130 = 0;
  local_128 = 0x7f7fffff;
  local_120 = UE::PoseSearch::DefaultRole;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  FPoseSearchBlueprintResult::operator=(param_3,(FPoseSearchBlueprintResult *)&local_160.ObjectPtr);
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  if (UE::PoseSearch::GVarPoseSearchInteractionEnabled == false) goto LAB_14a936aa6;
  if (param_2 != (UObject *)0x0) {
    FVar15 = (FName)(this->Islands).AllocatorInstance.Data;
    iVar2 = (this->Islands).ArrayNum;
    local_188 = (FName)((longlong)FVar15 + (longlong)iVar2 * 8);
    while( true ) {
      FVar6 = local_188;
      if ((this->Islands).ArrayNum != iVar2) {
        local_197[0] = 0;
        `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_197);
      }
      if (FVar15 == FVar6) break;
      this_00 = *(FInteractionIsland **)FVar15;
      this_01 = (this_00->IslandAnimContexts).AllocatorInstance.Data;
      pFVar1 = this_01 + (longlong)(this_00->IslandAnimContexts).ArrayNum * 8;
      for (; this_01 != pFVar1; this_01 = this_01 + 8) {
        bVar8 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                          ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)this_01,param_2);
        if (bVar8) {
          if (this_00 == (FInteractionIsland *)0x0) goto LAB_14a936a70;
          local_188 = (FName)(this->ValidInteractionSearches).AllocatorInstance.Data;
          iVar2 = (this->ValidInteractionSearches).ArrayNum;
          if ((iVar2 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_58._12_4_ = uStack_17c;
          local_58.ArrayNum = iVar2;
          local_58.DataPtr = (FValidInteractionSearch *)local_188;
          iStack_180 = iVar2;
          UE::PoseSearch::FInteractionIsland::DoSearch_AnyThread(this_00,param_2,&local_58,param_3);
          if ((!param_6) || ((param_3->SelectedAnim).field0_0x0.DebugPtr == (UObject *)0x0))
          goto LAB_14a936a70;
          pFVar12 = param_1->DataPtr;
          pFVar14 = pFVar12 + param_1->ArrayNum;
          goto joined_r0x00014a936971;
        }
      }
      FVar15 = (FName)((longlong)FVar15 + 8);
    }
  }
  goto LAB_14a936a70;
joined_r0x00014a936971:
  if (pFVar12 == pFVar14) goto LAB_14a9369c1;
  if (((pFVar12->Tag != (FName)0x0) &&
      ((pFVar12->Database).field0_0x0.DebugPtr == (UPoseSearchDatabase *)0x0)) ||
     ((pFVar12->Database).field0_0x0.DebugPtr == (param_3->SelectedDatabase).field0_0x0.DebugPtr)) {
    iVar2 = (pFVar12->RolesFilter).ArrayNum;
    if (iVar2 == 0) goto LAB_14a936a70;
    pFVar11 = (FName *)(pFVar12->RolesFilter).AllocatorInstance.Data;
    pFVar9 = pFVar11 + iVar2;
    if (pFVar11 != pFVar9) {
      do {
        if (*pFVar11 == param_3->Role) goto LAB_14a936a70;
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != pFVar9);
    }
  }
  pFVar12 = pFVar12 + 1;
  goto joined_r0x00014a936971;
LAB_14a9369c1:
  local_d8 = 0x3f800000;
  local_e8.DebugPtr = (UObject *)0x0;
  local_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_db = 0;
  local_d9 = 0;
  local_ab = 0;
  local_a9 = 0;
  local_e0 = 0;
  local_dc = 0;
  local_ac = 0;
  local_b8 = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_b0 = 0x7f7fffff;
  local_a8 = UE::PoseSearch::DefaultRole;
  FPoseSearchBlueprintResult::operator=(param_3,(FPoseSearchBlueprintResult *)&local_e8.ObjectPtr);
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
LAB_14a936a70:
  local_48.DataPtr = param_1->DataPtr;
  local_48.ArrayNum = param_1->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  AddAvailabilities(this,&local_48,param_2,param_4,param_5);
LAB_14a936aa6:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// RegenerateAllIslands @ 14a936b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
UPoseSearchInteractionSubsystem::RegenerateAllIslands
          (UPoseSearchInteractionSubsystem *this,float param_1)

{
  ForElementType<TTuple<UObject_const_*,int>_> *pFVar1;
  undefined4 uVar2;
  ForElementType<int> FVar3;
  FScriptContainerElement *pFVar4;
  TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *pTVar5;
  uint *puVar6;
  undefined1 *puVar7;
  ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
  *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  ForElementType<int> *pFVar13;
  uchar *puVar14;
  FIdentityFunctor FVar15;
  ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
  *pFVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands>
  FVar21;
  UObject *pUVar22;
  int *piVar23;
  TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar24;
  FInteractionIsland *this_00;
  UWorld *pUVar25;
  FInteractionIsland *pFVar26;
  ForElementType<TTuple<UObject_const_*,int>_> FVar27;
  longlong lVar28;
  FInteractionSearchContext *pFVar29;
  ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
  FVar30;
  ForElementType<UE::PoseSearch::FInteractionSearchContext> FVar31;
  TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar32;
  ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
  FVar33;
  uint uVar34;
  FScriptContainerElement *pFVar35;
  ForElementType<int> FVar36;
  TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar37;
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  *this_01;
  uint uVar38;
  int iVar39;
  uint uVar40;
  FName FVar41;
  TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar42;
  ulonglong uVar43;
  undefined1 *puVar44;
  void *this_02;
  uint *puVar45;
  ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
  *pFVar46;
  undefined1 *puVar47;
  TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *pTVar48;
  uint uVar49;
  FInteractionSearchContext *pFVar50;
  undefined1 auStackY_1358 [32];
  bool local_12f7;
  FIdentityFunctor local_12f6;
  undefined1 local_12f5;
  undefined1 local_12f4;
  undefined1 local_12f3;
  undefined1 local_12f2;
  undefined1 local_12f1;
  undefined1 local_12f0 [4];
  uint local_12ec;
  undefined8 local_12e8;
  undefined1 local_12e0 [24];
  FInteractionIsland *local_12c8;
  FInteractionIsland *local_12c0;
  ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
  *local_12b8;
  longlong local_12b0;
  FColor_u_0 local_12a8;
  undefined1 local_12a4 [12];
  FName local_1298;
  FName local_1290;
  int local_1280;
  int local_127c;
  UObject *local_1278;
  UObject *local_1270;
  UObject **local_1268;
  ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
  *local_1260;
  int iStack_1258;
  uint uStack_1254;
  undefined1 *local_1250;
  undefined4 uStack_1248;
  int iStack_1244;
  int local_1240;
  undefined4 uStack_123c;
  int iStack_1238;
  undefined4 uStack_1234;
  ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
  *local_1230;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_1228;
  int iStack_1208;
  FInteractionValidator local_1200;
  FInteractionValidator local_11f0;
  FName local_11e0;
  FName local_11d8 [5];
  ForElementType<TTuple<UObject_const_*,int>_> local_11b0;
  uint local_10a8;
  uint local_10a4;
  ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
  local_10a0;
  uint local_7d8;
  uint local_7d4;
  TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  local_7d0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1358;
  local_12a4._4_8_ = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands>
         )0x0) {
      pFVar20 = ::FName::FName(&local_11e0,
                               "STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands,*pFVar20,
                 L"STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands;
  if (StatPtr_STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands ==
      (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands>
       )0x0) {
    pFVar20 = ::FName::FName(local_11d8,"STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands")
    ;
    FVar21 = (FThreadSafeStaticStat<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands,
                          *pFVar20,L"STAT_UPoseSearchInteractionSubsystem_RegenerateAllIslands",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar21;
  bVar11 = false;
  bVar12 = false;
  local_1290.ComparisonIndex.Value = 0;
  local_1290.Number = 0;
  bVar17 = false;
  bVar18 = false;
  if ((FVar41.ComparisonIndex.Value.Value != 0) || (FVar41.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_12a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_12a8._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar17 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1298.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_1298.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1298,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                   ,0x95);
        bVar11 = true;
        bVar12 = true;
        bVar17 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_12e0._16_8_ = FVar41;
      FThreadStats::AddMessage(FVar41,CycleScopeStart);
      bVar17 = true;
      goto LAB_14a936d41;
    }
  }
  bVar12 = bVar18;
  bVar11 = bVar17;
  bVar17 = false;
  local_12e0._16_4_ = local_1290.ComparisonIndex.Value;
  local_12e0._20_4_ = local_1290.Number;
  FVar41 = local_1290;
LAB_14a936d41:
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                          ,0x99,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_7d0.AllocatorInstance.SecondaryData.Data = (FInteractionSearchContext *)0x0;
  local_7d0.ArrayNum = 0;
  local_7d0.ArrayMax = 4;
  GenerateSearchContexts(this,param_1,&local_7d0);
  DebugDrawIslands(this);
  if (UE::PoseSearch::GVarPoseSearchInteractionLoglandsTickDependencies != false) {
    if (4 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    pFVar35 = (this->Islands).AllocatorInstance.Data;
    iVar19 = (this->Islands).ArrayNum;
    pFVar4 = pFVar35 + (longlong)iVar19 * 8;
    while( true ) {
      if ((this->Islands).ArrayNum != iVar19) {
        local_12f5 = 0;
        `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_12f5);
      }
      if (pFVar35 == pFVar4) break;
      pFVar26 = *(FInteractionIsland **)pFVar35;
      bVar18 = UE::PoseSearch::FInteractionIsland::IsInitialized(pFVar26);
      if (bVar18) {
        UE::PoseSearch::FInteractionIsland::LogTickDependencies(pFVar26);
      }
      pFVar35 = pFVar35 + 8;
    }
  }
  if (UE::PoseSearch::GVarPoseSearchInteractionCacheIslands == false) {
    DestroyAllIslands(this);
  }
  else {
    pFVar35 = (this->Islands).AllocatorInstance.Data;
    iVar19 = (this->Islands).ArrayNum;
    pFVar4 = pFVar35 + (longlong)iVar19 * 8;
    while( true ) {
      if ((this->Islands).ArrayNum != iVar19) {
        local_12f4 = 0;
        `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_12f4);
      }
      if (pFVar35 == pFVar4) break;
      pFVar26 = *(FInteractionIsland **)pFVar35;
      local_1200.ValidatingAnimContext = (UObject *)0x0;
      LOCK();
      iVar39 = (pFVar26->TickFunctionsThreadSafeCounter).Counter;
      (pFVar26->TickFunctionsThreadSafeCounter).Counter = -1;
      UNLOCK();
      local_1200.ValidatingIsland = pFVar26;
      if (iVar39 != 0) {
        if (1 < (byte)LogPoseSearch._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        }
        UE::PoseSearch::FInteractionIsland::LogTickDependencies(pFVar26);
      }
      UE::PoseSearch::FInteractionIsland::Uninitialize(pFVar26,true);
      UE::PoseSearch::FInteractionValidator::~FInteractionValidator(&local_1200);
      pFVar35 = pFVar35 + 8;
    }
  }
  uVar34 = 0;
  local_10a0.SecondaryData.Data = (FInteractionSearchContextGroup *)0x0;
  local_12e8 = (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                *)((ulonglong)local_12e8._4_4_ << 0x20);
  local_7d8 = 0;
  local_7d4 = 4;
  if (local_7d0.ArrayNum < 1) {
LAB_14a9370d5:
    FVar15 = local_12f6;
    local_11b0.SecondaryData.Data = (TTuple<UObject_const_*,int> *)0x0;
    local_10a8 = 0;
    uVar43 = (ulonglong)(int)local_7d8;
    FVar30.Data = (FInteractionSearchContextGroup *)&local_10a0;
    if ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
         *)local_10a0.SecondaryData.Data !=
        (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
         *)0x0) {
      FVar30.Data = local_10a0.SecondaryData.Data;
    }
    local_10a4 = 0x10;
    local_12ec = local_7d8;
    local_12b8 = (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                  *)((longlong)
                     ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                       *)FVar30.Data)->InlineData + uVar43 * 0x230);
    do {
      pFVar46 = local_12b8;
      local_12e8 = (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                    *)FVar30.Data;
      if (local_7d8 != (uint)uVar43) {
        local_12f3 = 0;
        `TCheckedPointerIterator<`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_12f3);
      }
      if ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
           *)FVar30.Data == pFVar46) {
        FVar30.Data = (FInteractionSearchContextGroup *)&local_10a0;
        if ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
             *)local_10a0.SecondaryData.Data !=
            (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
             *)0x0) {
          FVar30.Data = local_10a0.SecondaryData.Data;
        }
        DestructItems<_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l2::FInteractionSearchContextGroup,int>
                  (FVar30.Data,local_7d8);
        FVar31.Data = (FInteractionSearchContext *)&local_7d0;
        if ((TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
             *)local_7d0.AllocatorInstance.SecondaryData.Data !=
            (TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
             *)0x0) {
          FVar31.Data = local_7d0.AllocatorInstance.SecondaryData.Data;
        }
        DestructItems<UE::PoseSearch::FInteractionSearchContext,int>(FVar31.Data,local_7d0.ArrayNum)
        ;
        if (bVar12) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar11) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar17) {
          FThreadStats::AddMessage(FVar41,CycleScopeEnd);
        }
        return;
      }
      pFVar35 = (this->Islands).AllocatorInstance.Data;
      iVar19 = (this->Islands).ArrayNum;
      pFVar4 = pFVar35 + (longlong)iVar19 * 8;
      while( true ) {
        if ((this->Islands).ArrayNum != iVar19) {
          local_12f2 = 0;
          `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_12f2);
        }
        if (pFVar35 == pFVar4) break;
        pFVar26 = *(FInteractionIsland **)pFVar35;
        local_12c8 = pFVar26;
        bVar18 = UE::PoseSearch::FInteractionIsland::IsInitialized(pFVar26);
        if (!bVar18) goto LAB_14a9377ff;
        pFVar35 = pFVar35 + 8;
        this = (UPoseSearchInteractionSubsystem *)local_12a4._4_8_;
      }
      this_00 = ::operator_new(200);
      pFVar26 = (FInteractionIsland *)0x0;
      if (this_00 != (FInteractionIsland *)0x0) {
        pUVar25 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
        pFVar26 = UE::PoseSearch::FInteractionIsland::FInteractionIsland
                            (this_00,(pUVar25->PersistentLevel).field0_0x0.DebugPtr,this);
      }
      pFVar4 = (this->Islands).AllocatorInstance.Data;
      local_12c0 = pFVar26;
      if (((pFVar4 <= (FScriptContainerElement *)&local_12c0) &&
          ((FScriptContainerElement *)&local_12c0 < pFVar4 + (longlong)(this->Islands).ArrayMax * 8)
          ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar19 = (this->Islands).ArrayNum;
      piVar23 = &(this->Islands).ArrayMax;
      if (iVar19 == *piVar23) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->Islands).AllocatorInstance,piVar23);
      }
      (this->Islands).ArrayNum = iVar19 + 1;
      *(FInteractionIsland **)((this->Islands).AllocatorInstance.Data + (longlong)iVar19 * 8) =
           local_12c0;
      local_12c8 = local_12c0;
      pFVar26 = local_12c0;
LAB_14a9377ff:
      local_11f0.ValidatingAnimContext = (UObject *)0x0;
      LOCK();
      iVar19 = (pFVar26->TickFunctionsThreadSafeCounter).Counter;
      (pFVar26->TickFunctionsThreadSafeCounter).Counter = -1;
      UNLOCK();
      local_11f0.ValidatingIsland = pFVar26;
      if (iVar19 != 0) {
        if (1 < (byte)LogPoseSearch._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        }
        UE::PoseSearch::FInteractionIsland::LogTickDependencies(pFVar26);
      }
      local_12f7 = false;
      if (((pFVar26->SearchContexts).ArrayNum != 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Island.GetSearchContexts().IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                              ,299,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar46 = local_12e8;
      iVar19 = ((TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)
               ((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                 *)local_12e8->InlineData + 1))->ArrayNum;
      pTVar48 = (TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)
                ((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                  *)local_12e8->InlineData + 1);
      pTVar5 = (TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)
               (((TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)
                ((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                  *)local_12e8->InlineData + 1))->AllocatorInstance).SecondaryData.Data;
      if (pTVar5 != (TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar48 = pTVar5;
      }
      pFVar13 = &pTVar48->AllocatorInstance;
      while( true ) {
        if (((TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)
            ((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
              *)pFVar46->InlineData + 1))->ArrayNum != iVar19) {
          local_12f1 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_12f1);
        }
        FVar41 = (FName)local_12e0._16_8_;
        if (pTVar48 ==
            (TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)
            (pFVar13->InlineData + (longlong)iVar19 * 4)) break;
        uVar34 = *(uint *)(pTVar48->AllocatorInstance).InlineData;
        uVar49 = 0;
        if ((int)uVar34 < local_7d0.ArrayNum) {
          uVar49 = ~uVar34 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar31.Data = (FInteractionSearchContext *)&local_7d0;
        if ((TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
             *)local_7d0.AllocatorInstance.SecondaryData.Data !=
            (TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
             *)0x0) {
          FVar31.Data = local_7d0.AllocatorInstance.SecondaryData.Data;
        }
        pFVar50 = (FInteractionSearchContext *)
                  ((longlong)
                   (((TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                      *)FVar31.Data)->AllocatorInstance).InlineData +
                  (longlong)(int)uVar34 * 0x3c * 8);
        local_12f7 = (bool)(local_12f7 | 1 < (int)pFVar50->_padding_);
        UE::PoseSearch::FInteractionIsland::AddSearchContext(pFVar26,pFVar50);
        pTVar48 = (TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)
                  ((pTVar48->AllocatorInstance).InlineData + 4);
      }
      if ((int)local_10a4 < 0) {
        local_10a8 = 0;
        if (local_10a4 != 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UObject_const_*,int>_>_>
                    (0x10,8,0,&local_11b0,0,(int *)&local_10a4);
        }
      }
      else {
        local_10a8 = 0;
      }
      pFVar46 = local_12e8;
      uVar34 = *(int *)&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                          *)local_12e8->InlineData)->field_0x188 -
               *(int *)&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                          *)local_12e8->InlineData)->field_0x1ac;
      if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
      }
      if ((int)local_10a4 < (int)uVar34) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UObject_const_*,int>_>_>
                  (0x10,8,uVar34,&local_11b0,local_10a8,(int *)&local_10a4);
      }
      iStack_1258 = 0;
      local_1250 = &((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                      *)pFVar46->InlineData)->field_0x190;
      local_1240 = 0;
      iVar19 = *(int *)&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                          *)pFVar46->InlineData)->field_0x1a0;
      uStack_1254 = 1;
      iStack_1244 = 0;
      if (iVar19 != 0) {
        puVar6 = *(uint **)&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                              *)pFVar46->InlineData)->field_0x198;
        puVar45 = (uint *)local_1250;
        if (puVar6 != (uint *)0x0) {
          puVar45 = puVar6;
        }
        uVar34 = *puVar45;
        iStack_1258 = 0;
        while (uVar34 == 0) {
          lVar28 = (longlong)iStack_1258;
          local_1240 = local_1240 + 0x20;
          iStack_1258 = iStack_1258 + 1;
          iStack_1244 = iVar19;
          if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1258)
          goto LAB_14a937a70;
          uVar34 = puVar45[lVar28 + 1];
        }
        uStack_1254 = -uVar34 & uVar34;
        uVar43 = (ulonglong)uStack_1254 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar43 != 0) {
          for (; uVar43 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        local_127c = (int)lVar28;
        iStack_1244 = local_127c + -1 + local_1240;
        if (iVar19 < iStack_1244) {
          iStack_1244 = iVar19;
        }
      }
LAB_14a937a70:
      uVar34 = *(uint *)&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                           *)pFVar46->InlineData)->field_0x1a0;
      uStack_123c = local_11d8[4].Number;
      iStack_1238 = *(int *)&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                               *)pFVar46->InlineData)->field_0x188 -
                    *(int *)&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                               *)pFVar46->InlineData)->field_0x1ac;
      uVar49 = uVar34 & 0xffffffe0;
      local_1260 = pFVar46;
      puVar47 = &((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                   *)pFVar46->InlineData)->field_0x190;
      TStack_1228._padding_ = CONCAT44(uStack_1254,iStack_1258);
      uStack_1248 = 0xffffffff;
      TStack_1228.CurrentBitIndex = iStack_1244;
      TStack_1228.UnvisitedBitMask = 0xffffffff;
      local_1230 = pFVar46;
      iVar39 = (int)uVar34 >> 5;
      TStack_1228._28_4_ = local_11d8[4].Number;
      TStack_1228.BaseBitIndex = local_1240;
      unique0x10000abb = uStack_1234;
      iStack_1208 = iStack_1238;
      TStack_1228.Array =
           (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)local_1250;
      if ((((int)uVar34 < 0) || (iVar19 < (int)uVar34)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar16 = local_12e8;
      uVar40 = *(uint *)&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                           *)pFVar46->InlineData)->field_0x1a0;
      if (uVar34 != uVar40) {
        puVar7 = *(undefined1 **)
                  &((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                     *)pFVar46->InlineData)->field_0x198;
        puVar44 = puVar47;
        if (puVar7 != (undefined1 *)0x0) {
          puVar44 = puVar7;
        }
        uVar34 = -1 << ((byte)uVar34 & 0x1f) & *(uint *)(puVar44 + (longlong)iVar39 * 4);
        while (uVar34 == 0) {
          lVar28 = (longlong)iVar39;
          uVar49 = uVar49 + 0x20;
          iVar39 = iVar39 + 1;
          uVar34 = uVar40;
          if ((int)((uVar40 - 1) + ((int)(uVar40 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar39)
          goto LAB_14a937ba0;
          uVar34 = *(uint *)(puVar44 + lVar28 * 4 + 4);
        }
        uVar43 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
        lVar28 = 0x3f;
        if (uVar43 != 0) {
          for (; uVar43 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        local_1280 = (int)lVar28;
        uVar34 = local_1280 + -1 + uVar49;
        if ((int)uVar40 < (int)uVar34) {
          uVar34 = uVar40;
        }
      }
LAB_14a937ba0:
      while( true ) {
        pFVar46 = local_1230;
        if (*(int *)&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                       *)local_1230->InlineData)->field_0x188 -
            *(int *)&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                       *)local_1230->InlineData)->field_0x1ac != iStack_1208) {
          local_12f0[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_12f0);
        }
        if (((TStack_1228.CurrentBitIndex == uVar34) &&
            (TStack_1228.Array ==
             (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar47)) &&
           (pFVar46 == pFVar16)) break;
        pFVar8 = *(ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                   **)&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                         *)pFVar46->InlineData)->field_0x180;
        if (pFVar8 != (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                       *)0x0) {
          pFVar46 = pFVar8;
        }
        FVar27.Data = (TTuple<UObject_const_*,int> *)&local_11b0;
        if ((ForElementType<TTuple<UObject_const_*,int>_> *)local_11b0.SecondaryData.Data !=
            (ForElementType<TTuple<UObject_const_*,int>_> *)0x0) {
          FVar27.Data = local_11b0.SecondaryData.Data;
        }
        pFVar1 = (ForElementType<TTuple<UObject_const_*,int>_> *)
                 (&((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                     *)pFVar46->InlineData)->field_0x0 +
                 (longlong)TStack_1228.CurrentBitIndex * 0x18);
        if (FVar27.Data <= pFVar1) {
          FVar27.Data = (TTuple<UObject_const_*,int> *)&local_11b0;
          if ((ForElementType<TTuple<UObject_const_*,int>_> *)local_11b0.SecondaryData.Data !=
              (ForElementType<TTuple<UObject_const_*,int>_> *)0x0) {
            FVar27.Data = local_11b0.SecondaryData.Data;
          }
          if ((pFVar1 < (ForElementType<TTuple<UObject_const_*,int>_> *)
                        (((ForElementType<TTuple<UObject_const_*,int>_> *)FVar27.Data)->InlineData +
                        (longlong)(int)local_10a4 * 0x10)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (local_10a8 == local_10a4) {
          local_10a8 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UObject_const_*,int>_>_>
                                 (0x810,&local_11b0,(int *)&local_10a4);
        }
        lVar28 = (longlong)(int)local_10a8;
        FVar27.Data = (TTuple<UObject_const_*,int> *)&local_11b0;
        if ((ForElementType<TTuple<UObject_const_*,int>_> *)local_11b0.SecondaryData.Data !=
            (ForElementType<TTuple<UObject_const_*,int>_> *)0x0) {
          FVar27.Data = local_11b0.SecondaryData.Data;
        }
        local_10a8 = local_10a8 + 1;
        uVar10 = *(undefined8 *)(pFVar1->InlineData + 8);
        *(undefined8 *)
         (((ForElementType<TTuple<UObject_const_*,int>_> *)FVar27.Data)->InlineData + lVar28 * 0x10)
             = *(undefined8 *)pFVar1->InlineData;
        *(undefined8 *)
         (((ForElementType<TTuple<UObject_const_*,int>_> *)FVar27.Data)->InlineData + lVar28 * 0x10
         + 8) = uVar10;
        TStack_1228.UnvisitedBitMask = TStack_1228.UnvisitedBitMask & ~TStack_1228._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&TStack_1228);
      }
      FVar27.Data = (TTuple<UObject_const_*,int> *)&local_11b0;
      if ((ForElementType<TTuple<UObject_const_*,int>_> *)local_11b0.SecondaryData.Data !=
          (ForElementType<TTuple<UObject_const_*,int>_> *)0x0) {
        FVar27.Data = local_11b0.SecondaryData.Data;
      }
      AlgoImpl::
      IntroSortInternal<TTuple<UObject_const_*,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UObject_const_*,int>,_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l39::<lambda_1>_>_>
                (FVar27.Data,local_10a8,FVar15,(<lambda_1> *)(local_12e0 + 0xc));
      uVar34 = local_10a8;
      pFVar26 = local_12c8;
      uVar43 = (ulonglong)(int)local_10a8;
      FVar27.Data = (TTuple<UObject_const_*,int> *)&local_11b0;
      if ((ForElementType<TTuple<UObject_const_*,int>_> *)local_11b0.SecondaryData.Data !=
          (ForElementType<TTuple<UObject_const_*,int>_> *)0x0) {
        FVar27.Data = local_11b0.SecondaryData.Data;
      }
      lVar28 = uVar43 * 0x10;
      puVar14 = ((ForElementType<TTuple<UObject_const_*,int>_> *)FVar27.Data)->InlineData;
      while( true ) {
        if ((uint)uVar43 != uVar34) {
          local_12f6 = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<TTuple<UObject_const_*,int>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_12f6);
        }
        if ((ForElementType<TTuple<UObject_const_*,int>_> *)FVar27.Data ==
            (ForElementType<TTuple<UObject_const_*,int>_> *)(puVar14 + lVar28)) break;
        UE::PoseSearch::FInteractionIsland::InjectToActor
                  (pFVar26,*(UObject **)
                            ((ForElementType<TTuple<UObject_const_*,int>_> *)FVar27.Data)->
                            InlineData,local_12f7);
        uVar43 = (ulonglong)local_10a8;
        FVar27.Data = (TTuple<UObject_const_*,int> *)
                      (((ForElementType<TTuple<UObject_const_*,int>_> *)FVar27.Data)->InlineData +
                      0x10);
      }
      UE::PoseSearch::FInteractionValidator::~FInteractionValidator(&local_11f0);
      FVar30.Data = (FInteractionSearchContextGroup *)
                    ((TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)
                     ((TMap<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                       *)local_12e8->InlineData + 1) + 1);
      uVar43 = (ulonglong)local_12ec;
      this = (UPoseSearchInteractionSubsystem *)local_12a4._4_8_;
    } while( true );
  }
  local_12c8 = (FInteractionIsland *)0x0;
LAB_14a936e60:
  pFVar26 = local_12c8;
  uVar49 = 0;
  if ((int)uVar34 < local_7d0.ArrayNum) {
    uVar49 = ~uVar34 >> 0x1f;
  }
  if ((uVar49 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar43 = 0;
  local_12e0._8_4_ = 0xffffffff;
  local_12ec = 0;
  FVar31.Data = (FInteractionSearchContext *)&local_7d0;
  if ((TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
       *)local_7d0.AllocatorInstance.SecondaryData.Data !=
      (TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
       *)0x0) {
    FVar31.Data = local_7d0.AllocatorInstance.SecondaryData.Data;
  }
  local_12b8 = (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                *)0x0;
  pFVar50 = (FInteractionSearchContext *)
            ((longlong)
             (((TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                *)FVar31.Data)->AllocatorInstance).InlineData + (longlong)pFVar26);
  pFVar46 = (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
             *)uVar43;
  if (0 < (int)local_7d8) {
LAB_14a936ef0:
    uVar49 = (uint)uVar43;
    uVar40 = ~uVar49 >> 0x1f;
    uVar34 = 0;
    if ((int)uVar49 < (int)local_7d8) {
      uVar34 = uVar40;
    }
    if ((uVar34 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar34 = 0;
    FVar30.Data = (FInteractionSearchContextGroup *)&local_10a0;
    if ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
         *)local_10a0.SecondaryData.Data !=
        (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
         *)0x0) {
      FVar30.Data = local_10a0.SecondaryData.Data;
    }
    iVar19 = (int)pFVar50->_padding_;
    if (0 < iVar19) {
      do {
        uVar38 = 0;
        if ((int)uVar34 < iVar19) {
          uVar38 = ~uVar34 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar29 = pFVar50;
        if ((FInteractionSearchContext *)pFVar50->_padding_ != (FInteractionSearchContext *)0x0) {
          pFVar29 = (FInteractionSearchContext *)pFVar50->_padding_;
        }
        pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)(&pFVar29->_padding_ + (int)uVar34));
        piVar23 = TMapBase<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                  ::Find((TMapBase<UObject_const_*,int,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                          *)((longlong)
                             ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                               *)FVar30.Data)->InlineData + (longlong)pFVar46 * 0x230),pUVar22);
        uVar38 = local_12e0._8_4_;
        if (piVar23 != (int *)0x0) {
          lVar28 = (longlong)(int)local_12e0._8_4_;
          if (local_12e0._8_4_ == 0xffffffff) {
            uVar38 = 0;
            uVar34 = 0;
            if ((int)uVar49 < (int)local_7d8) {
              uVar34 = uVar40;
            }
            local_12e0._8_4_ = uVar49;
            if ((uVar34 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar30.Data = (FInteractionSearchContextGroup *)&local_10a0;
            if ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                 *)local_10a0.SecondaryData.Data !=
                (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                 *)0x0) {
              FVar30.Data = local_10a0.SecondaryData.Data;
            }
            local_12e0._0_4_ = (uint)local_12e8;
            pTVar42 = (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)((longlong)
                          ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                            *)FVar30.Data)->InlineData + (longlong)pFVar46 * 0x230);
            iVar19 = (int)pFVar50->_padding_;
            if (iVar19 < 1) goto LAB_14a9374c2;
            local_12b0 = 0;
            goto LAB_14a9372c0;
          }
          uVar34 = 0;
          if ((int)local_12e0._8_4_ < (int)local_7d8) {
            uVar34 = (uint)~local_12e0._8_4_ >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar30.Data = (FInteractionSearchContextGroup *)&local_10a0;
          if ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
               *)local_10a0.SecondaryData.Data !=
              (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
               *)0x0) {
            FVar30.Data = local_10a0.SecondaryData.Data;
          }
          uVar34 = 0;
          if ((int)uVar49 < (int)local_7d8) {
            uVar34 = uVar40;
          }
          if ((uVar34 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar33.Data = (FInteractionSearchContextGroup *)&local_10a0;
          if ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
               *)local_10a0.SecondaryData.Data !=
              (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
               *)0x0) {
            FVar33.Data = local_10a0.SecondaryData.Data;
          }
          `UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::
          FInteractionSearchContextGroup::Merge
                    ((void *)((longlong)
                              ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                                *)FVar30.Data)->InlineData + lVar28 * 0x230),
                     (FInteractionSearchContextGroup *)
                     ((longlong)
                      ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                        *)FVar33.Data)->InlineData + (longlong)pFVar46 * 0x230));
          uVar34 = 0;
          if ((int)uVar49 < (int)local_7d8) {
            uVar34 = uVar40;
          }
          if ((uVar34 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar30.Data = (FInteractionSearchContextGroup *)&local_10a0;
          if ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
               *)local_10a0.SecondaryData.Data !=
              (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
               *)0x0) {
            FVar30.Data = local_10a0.SecondaryData.Data;
          }
          this_01 = (TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                     *)((longlong)
                        ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                          *)FVar30.Data)->InlineData + (longlong)pFVar46 * 0x230);
          *(undefined4 *)&this_01[1].field_0x28 = 0;
          TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                    (this_01);
          iVar19 = (local_7d8 - uVar49) + -1;
          if (iVar19 != 0) {
            memmove(this_01,&this_01[1].field_0x80,(longlong)iVar19 * 0x230);
          }
          local_7d8 = local_7d8 - 1;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l2::FInteractionSearchContextGroup>_>
                    (0x230,8,&local_10a0,local_7d8,(int *)&local_7d4);
          goto LAB_14a93700d;
        }
        iVar19 = (int)pFVar50->_padding_;
        uVar34 = uVar34 + 1;
      } while ((int)uVar34 < iVar19);
    }
    goto LAB_14a936ffb;
  }
  goto LAB_14a93702d;
LAB_14a9372c0:
  do {
    lVar28 = local_12b0;
    uVar49 = ~uVar38 >> 0x1f;
    uVar34 = 0;
    if ((int)uVar38 < iVar19) {
      uVar34 = uVar49;
    }
    if ((uVar34 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar29 = pFVar50;
    if ((FInteractionSearchContext *)pFVar50->_padding_ != (FInteractionSearchContext *)0x0) {
      pFVar29 = (FInteractionSearchContext *)pFVar50->_padding_;
    }
    local_1270 = FWeakObjectPtr::Get((FWeakObjectPtr *)(&pFVar29->_padding_ + (int)uVar38));
    if (local_1270 != (UObject *)0x0) {
      uVar34 = ((uint)((ulonglong)local_1270 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1270 >> 4))
               * -0x7a143595;
      uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
      local_1278 = local_1270;
      iVar19 = TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               ::FindIndexByHash<UObject_const_*>(pTVar42,uVar34 >> 0x10 ^ uVar34,&local_1278);
      if (iVar19 == -1) {
        iVar19 = (pFVar50->TickPriorities).ArrayNum;
      }
      else {
        pTVar37 = *(TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                    **)&(pTVar42->Elements).field_0x180;
        pTVar32 = pTVar42;
        if (pTVar37 !=
            (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
             *)0x0) {
          pTVar32 = pTVar37;
        }
        puVar47 = &(pTVar32->Elements).field_0x0 + (longlong)iVar19 * 0x18;
        piVar23 = (int *)(puVar47 + 8);
        if (puVar47 == (undefined1 *)0x0) {
          piVar23 = (int *)0x0;
        }
        iVar19 = (pFVar50->TickPriorities).ArrayNum;
        lVar28 = local_12b0;
        if (piVar23 != (int *)0x0) {
          uVar34 = 0;
          if ((int)uVar38 < iVar19) {
            uVar34 = uVar49;
          }
          if ((uVar34 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar3 = (pFVar50->TickPriorities).AllocatorInstance.SecondaryData;
          FVar36 = (ForElementType<int>)&pFVar50->TickPriorities;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar36 = FVar3;
          }
          iVar19 = *(int *)((longlong)FVar36 + local_12b0);
          if (*(int *)((longlong)FVar36 + local_12b0) < *piVar23) {
            iVar19 = *piVar23;
          }
          *piVar23 = iVar19;
          lVar28 = local_12b0;
          goto LAB_14a9374a3;
        }
      }
      uVar34 = 0;
      if ((int)uVar38 < iVar19) {
        uVar34 = uVar49;
      }
      if ((uVar34 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar3 = (pFVar50->TickPriorities).AllocatorInstance.SecondaryData;
      FVar36 = (ForElementType<int>)&pFVar50->TickPriorities;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar36 = FVar3;
      }
      local_1268 = &local_1270;
      uVar2 = *(undefined4 *)(lVar28 + (longlong)FVar36);
      TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
      ::Emplace<TKeyInitializer<UObject_const_*_const_&>_>
                (pTVar42,(TKeyInitializer<UObject_const_*_const_&> *)local_12a4,(bool *)&local_1268)
      ;
      pTVar37 = *(TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                  **)&(pTVar42->Elements).field_0x180;
      pTVar32 = pTVar42;
      if (pTVar37 !=
          (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *)0x0) {
        pTVar32 = pTVar37;
      }
      *(undefined4 *)(&(pTVar32->Elements).field_0x8 + (longlong)(int)local_12a4._0_4_ * 0x18) =
           uVar2;
    }
LAB_14a9374a3:
    iVar19 = (int)pFVar50->_padding_;
    local_12b0 = lVar28 + 4;
    uVar38 = uVar38 + 1;
    pFVar46 = local_12b8;
    uVar49 = local_12ec;
  } while ((int)uVar38 < iVar19);
LAB_14a9374c2:
  pTVar37 = pTVar42 + 1;
  pTVar32 = *(TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
              **)&pTVar42[1].Elements.field_0x40;
  pTVar24 = pTVar37;
  if (pTVar32 !=
      (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
       *)0x0) {
    pTVar24 = pTVar32;
  }
  if (pTVar24 <=
      (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
       *)local_12e0) {
    pTVar24 = pTVar37;
    if (pTVar32 !=
        (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
         *)0x0) {
      pTVar24 = pTVar32;
    }
    if ((local_12e0 <
         &(pTVar24->Elements).field_0x0 + (longlong)*(int *)&pTVar42[1].Elements.field_0x4c * 4) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar19 = *(int *)&pTVar42[1].Elements.field_0x48;
  puVar47 = &pTVar42[1].Elements.field_0x4c;
  if (iVar19 == *(int *)puVar47) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<int>_>
                       (0x404,(ForElementType<int> *)pTVar37,(int *)puVar47);
  }
  *(int *)&pTVar42[1].Elements.field_0x48 = iVar19 + 1;
  pTVar42 = *(TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
              **)&pTVar42[1].Elements.field_0x40;
  if (pTVar42 !=
      (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
       *)0x0) {
    pTVar37 = pTVar42;
  }
  *(undefined4 *)(&(pTVar37->Elements).field_0x0 + (longlong)iVar19 * 4) = local_12e0._0_4_;
LAB_14a936ffb:
  local_12ec = uVar49 + 1;
  uVar43 = (ulonglong)local_12ec;
  pFVar46 = (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
             *)((longlong)pFVar46 + 1);
  uVar38 = local_12e0._8_4_;
  local_12b8 = pFVar46;
LAB_14a93700d:
  if ((int)local_7d8 <= (int)uVar43) goto code_r0x00014a937020;
  goto LAB_14a936ef0;
code_r0x00014a937020:
  pFVar26 = local_12c8;
  uVar34 = (uint)local_12e8;
  if (uVar38 == 0xffffffff) {
LAB_14a93702d:
    if (local_7d8 == local_7d4) {
      local_7d8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l2::FInteractionSearchContextGroup>_>
                            (0x230,8,&local_10a0,(int *)&local_7d4);
    }
    lVar28 = (longlong)(int)local_7d8;
    FVar30.Data = (FInteractionSearchContextGroup *)&local_10a0;
    if ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
         *)local_10a0.SecondaryData.Data !=
        (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
         *)0x0) {
      FVar30.Data = local_10a0.SecondaryData.Data;
    }
    local_7d8 = local_7d8 + 1;
    this_02 = (void *)((longlong)
                       ((ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                         *)FVar30.Data)->InlineData + lVar28 * 0x230);
    DefaultConstructItems<_UPoseSearchInteractionSubsystem::RegenerateAllIslands_::__l2::FInteractionSearchContextGroup,int>
              (this_02,1);
    `UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup::
    Add(this_02,pFVar50,uVar34);
  }
  uVar34 = uVar34 + 1;
  local_12c8 = (FInteractionIsland *)((longlong)pFVar26 + 0x1e0);
  local_12e8 = (ForElementType<_private:_void___cdecl_UPoseSearchInteractionSubsystem::RegenerateAllIslands(float)_::_2_::FInteractionSearchContextGroup>
                *)CONCAT44(local_12e8._4_4_,uVar34);
  FVar41 = (FName)local_12e0._16_8_;
  this = (UPoseSearchInteractionSubsystem *)local_12a4._4_8_;
  if (local_7d0.ArrayNum <= (int)uVar34) goto LAB_14a9370d5;
  goto LAB_14a936e60;
}

// StaticRegisterNativesUPoseSearchInteractionSubsystem @ 14a93ee00

void __cdecl
UPoseSearchInteractionSubsystem::StaticRegisterNativesUPoseSearchInteractionSubsystem(void)

{
  return;
}

// Tick @ 14a93f480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchInteractionSubsystem::Tick(UPoseSearchInteractionSubsystem *this,float param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UPoseSearchInteractionSubsystem::Tick(float)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_Tick>
  FVar8;
  uint *puVar9;
  FTlsAutoCleanup *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FMemMark local_a8;
  FName local_80;
  LARGE_INTEGER local_70;
  FStatMessage local_68;
  code *local_58;
  uint *local_50;
  FName local_48;
  FName local_40 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UPoseSearchInteractionSubsystem_Tick ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UPoseSearchInteractionSubsystem::Tick(float)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_Tick>
           )0x0) {
        pFVar7 = ::FName::FName(&local_48,"STAT_UPoseSearchInteractionSubsystem_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UPoseSearchInteractionSubsystem_Tick,
                   *pFVar7,L"STAT_UPoseSearchInteractionSubsystem_Tick","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_UPoseSearchInteractionSubsystem_Tick;
  if (StatPtr_STAT_UPoseSearchInteractionSubsystem_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UPoseSearchInteractionSubsystem::Tick(float)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_Tick>
       )0x0) {
    pFVar7 = ::FName::FName(local_40,"STAT_UPoseSearchInteractionSubsystem_Tick");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UPoseSearchInteractionSubsystem::Tick(float)_::_2_::FStat_STAT_UPoseSearchInteractionSubsystem_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_UPoseSearchInteractionSubsystem_Tick,*pFVar7,
                         L"STAT_UPoseSearchInteractionSubsystem_Tick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar12.Value;
        local_res20.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                   ,0x464);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar12.Value;
      uStackX_c = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a93f5eb;
    }
  }
  bVar4 = false;
  FVar13 = local_80;
LAB_14a93f5eb:
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                       ,0x466,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  puVar9 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_50 = &local_res8;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar10 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_58,puVar9);
  local_a8.Mem = (FMemStackBase *)(pFVar10 + 2);
  local_a8.Top = (local_a8.Mem)->Top;
  local_a8.SavedChunk = *(FTaggedMemory **)(pFVar10 + 4);
  local_a8.bPopped = false;
  local_a8.NextTopmostMark = *(FMemMark **)(pFVar10 + 5);
  pFVar10[5] = (FTlsAutoCleanup)&local_a8;
  *(int *)(pFVar10 + 6) = *(int *)(pFVar10 + 6) + 1;
  UpdateValidInteractionSearches
            ((UPoseSearchInteractionSubsystem *)&this[-1].AnimContextsAvailabilitiesBuffer);
  bVar6 = ConsolidateAnimContextsAvailabilities
                    ((UPoseSearchInteractionSubsystem *)&this[-1].AnimContextsAvailabilitiesBuffer);
  if (bVar6) {
    RegenerateAllIslands
              ((UPoseSearchInteractionSubsystem *)&this[-1].AnimContextsAvailabilitiesBuffer,param_1
              );
    bVar6 = ValidateAllIslands((UPoseSearchInteractionSubsystem *)
                               &this[-1].AnimContextsAvailabilitiesBuffer);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValidateAllIslands()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                         ,0x472,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  LOCK();
  *(undefined4 *)&this->_padding_ = 0;
  UNLOCK();
  if (local_a8.bPopped == false) {
    if ((local_a8.Mem)->TopMark != &local_a8) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mem.TopMark == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x215,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_a8.bPopped = true;
    (local_a8.Mem)->NumMarks = (local_a8.Mem)->NumMarks + -1;
    if (local_a8.SavedChunk != (local_a8.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_a8.Mem,local_a8.SavedChunk);
    }
    (local_a8.Mem)->Top = local_a8.Top;
    (local_a8.Mem)->TopMark = local_a8.NextTopmostMark;
    local_a8.Top = (uchar *)0x0;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateValidInteractionSearches @ 14a945f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPoseSearchInteractionSubsystem::UpdateValidInteractionSearches
          (UPoseSearchInteractionSubsystem *this)

{
  int *piVar1;
  TArray<UE::PoseSearch::FValidInteractionSearch,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UPrimitiveComponent *this_00;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  ForElementType<bool> FVar8;
  ForElementType<UE::PoseSearch::FValidInteractionSearch> FVar9;
  UObject *pUVar10;
  AActor *pAVar11;
  UClass *pUVar12;
  ulonglong uVar13;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> _Dst;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *pFVar14;
  uint uVar15;
  uint uVar16;
  size_t _Size;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar17;
  FScriptContainerElement *pFVar18;
  ForElementType<UE::PoseSearch::FValidInteractionSearch> FVar19;
  FWeakObjectPtr *this_01;
  longlong lVar20;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> _Src;
  ForElementType<FName> *_Src_00;
  FScriptContainerElement *pFVar21;
  FInteractionIsland *this_02;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *pFVar22;
  ForElementType<FName> *_Dst_00;
  FScriptContainerElement *pFVar23;
  FInteractionSearchContextBase *this_03;
  uint uVar24;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar25;
  FWeakObjectPtr *pFVar26;
  undefined1 auStackY_df8 [32];
  undefined1 local_da8;
  undefined1 local_da7;
  undefined1 local_da6 [6];
  size_t local_da0;
  FScriptContainerElement *local_d98;
  ulonglong local_d90;
  uint local_d88;
  uint local_d84;
  FInteractionIsland *local_d80;
  FScriptContainerElement *local_d78;
  FScriptContainerElement *local_d70;
  UPoseSearchInteractionSubsystem *local_d68;
  ForElementType<bool> local_d60;
  int local_d48 [2];
  ForElementType<UE::PoseSearch::FValidInteractionSearch> local_d40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_df8;
  local_d88 = (this->ValidInteractionSearches).ArrayNum;
  _Size = (size_t)(int)local_d88;
  local_d60.SecondaryData = (ForElementType<bool>)0x0;
  local_d48[0] = 0;
  local_d48[1] = 0x10;
  local_da0 = _Size;
  local_d68 = this;
  if ((int)local_d88 < 1) {
    if ((int)local_d88 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_d88);
    }
  }
  else {
    iVar7 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                      (1,1,local_d88,&local_d60,local_d48,local_d48 + 1);
    FVar8 = (ForElementType<bool>)&local_d60;
    if (local_d60.SecondaryData != (ForElementType<bool>)0x0) {
      FVar8 = local_d60.SecondaryData;
    }
    memset((void *)((longlong)iVar7 + (longlong)FVar8),0,_Size);
  }
  iVar7 = (this->Islands).ArrayNum;
  uVar13 = (ulonglong)iVar7;
  pFVar21 = (this->Islands).AllocatorInstance.Data;
  pFVar18 = pFVar21 + uVar13 * 8;
  local_d40.SecondaryData = (ForElementType<UE::PoseSearch::FValidInteractionSearch>)0x0;
  local_38 = 0;
  local_34 = 0x10;
  local_d90 = CONCAT44(local_d90._4_4_,iVar7);
  local_d70 = pFVar18;
  do {
    local_d98 = pFVar21;
    if ((this->Islands).ArrayNum != (int)uVar13) {
      local_da8 = 0;
      `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_da8);
    }
    if (pFVar21 == pFVar18) {
      uVar24 = 0;
      local_d98 = (FScriptContainerElement *)0x0;
      if (0 < (longlong)local_da0) {
        local_d90 = 0;
        do {
          uVar13 = local_d90;
          pFVar18 = local_d98;
          uVar16 = ~uVar24 >> 0x1f;
          uVar15 = 0;
          if ((int)uVar24 < local_d48[0]) {
            uVar15 = uVar16;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (this->ValidInteractionSearches).ArrayNum;
          FVar8 = (ForElementType<bool>)&local_d60;
          if (local_d60.SecondaryData != (ForElementType<bool>)0x0) {
            FVar8 = local_d60.SecondaryData;
          }
          if (*(char *)((longlong)pFVar18 + (longlong)FVar8) == '\0') {
            uVar15 = 0;
            if ((int)uVar24 < iVar7) {
              uVar15 = uVar16;
            }
            if ((uVar15 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_03 = (FInteractionSearchContextBase *)
                      ((this->ValidInteractionSearches).AllocatorInstance.Data + uVar13);
            UE::PoseSearch::FInteractionSearchContextBase::VLogContext(this_03,&FColor::Black);
            iVar7 = *(int *)(this_03[1].AnimContexts.AllocatorInstance.InlineData + 8);
            this_01 = *(FWeakObjectPtr **)this_03[1].AnimContexts.AllocatorInstance.InlineData;
            pFVar26 = this_01 + (longlong)iVar7 * 2;
            while( true ) {
              if (*(int *)(this_03[1].AnimContexts.AllocatorInstance.InlineData + 8) != iVar7) {
                local_da6[0] = 0;
                `TCheckedPointerIterator<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_da6);
              }
              this = local_d68;
              if (this_01 == pFVar26) break;
              pUVar10 = FWeakObjectPtr::Get(this_01);
              if (((pUVar10 != (UObject *)0x0) &&
                  (pAVar11 = (AActor *)FWeakObjectPtr::Get(this_01 + 1), pAVar11 != (AActor *)0x0))
                 && (this_00 = *(UPrimitiveComponent **)(pUVar10 + 0xb),
                    this_00 != (UPrimitiveComponent *)0x0)) {
                pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
                iVar3 = (int)pUVar12->_padding_;
                if ((iVar3 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar3 * 8)
                    == &pUVar12->_padding_)) {
                  UPrimitiveComponent::IgnoreActorWhenMoving(this_00,pAVar11,false);
                }
              }
              this_01 = this_01 + 2;
            }
          }
          else {
            uVar15 = 0;
            if ((int)uVar24 < iVar7) {
              uVar15 = uVar16;
            }
            if ((uVar15 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar19 = (ForElementType<UE::PoseSearch::FValidInteractionSearch>)
                     ((longlong)(int)uVar24 * 0xd0 +
                     (longlong)(this->ValidInteractionSearches).AllocatorInstance.Data);
            FVar9 = (ForElementType<UE::PoseSearch::FValidInteractionSearch>)&local_d40;
            if (local_d40.SecondaryData !=
                (ForElementType<UE::PoseSearch::FValidInteractionSearch>)0x0) {
              FVar9 = local_d40.SecondaryData;
            }
            if ((ulonglong)FVar9 <= (ulonglong)FVar19) {
              FVar9 = (ForElementType<UE::PoseSearch::FValidInteractionSearch>)&local_d40;
              if (local_d40.SecondaryData !=
                  (ForElementType<UE::PoseSearch::FValidInteractionSearch>)0x0) {
                FVar9 = local_d40.SecondaryData;
              }
              if (((ulonglong)FVar19 < (ulonglong)((longlong)local_34 * 0xd0 + (longlong)FVar9)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            if (local_38 == local_34) {
              local_38 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FValidInteractionSearch>_>
                                   (0x8d0,&local_d40,&local_34);
            }
            lVar20 = (longlong)local_38;
            local_38 = local_38 + 1;
            FVar9 = (ForElementType<UE::PoseSearch::FValidInteractionSearch>)&local_d40;
            if (local_d40.SecondaryData !=
                (ForElementType<UE::PoseSearch::FValidInteractionSearch>)0x0) {
              FVar9 = local_d40.SecondaryData;
            }
            UE::PoseSearch::FValidInteractionSearch::FValidInteractionSearch
                      ((FValidInteractionSearch *)(lVar20 * 0xd0 + (longlong)FVar9),
                       (FValidInteractionSearch *)FVar19);
            local_d90 = uVar13;
            local_d98 = pFVar18;
          }
          local_d98 = (FScriptContainerElement *)((longlong)local_d98 + 1);
          local_d90 = local_d90 + 0xd0;
          uVar24 = uVar24 + 1;
        } while ((longlong)local_d98 < (longlong)local_da0);
      }
      pTVar2 = &this->ValidInteractionSearches;
      DestructItems<UE::PoseSearch::FValidInteractionSearch,int>
                ((FValidInteractionSearch *)(pTVar2->AllocatorInstance).Data,
                 (this->ValidInteractionSearches).ArrayNum);
      iVar7 = local_38;
      piVar1 = &(this->ValidInteractionSearches).ArrayMax;
      FVar9 = (ForElementType<UE::PoseSearch::FValidInteractionSearch>)&local_d40;
      if (local_d40.SecondaryData != (ForElementType<UE::PoseSearch::FValidInteractionSearch>)0x0) {
        FVar9 = local_d40.SecondaryData;
      }
      (this->ValidInteractionSearches).ArrayNum = local_38;
      if ((local_38 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xd0,8,local_38,*piVar1,&pTVar2->AllocatorInstance,local_38,piVar1);
        ConstructItems<UE::PoseSearch::FValidInteractionSearch,UE::PoseSearch::FValidInteractionSearch,int>
                  ((pTVar2->AllocatorInstance).Data,(FValidInteractionSearch *)FVar9,iVar7);
      }
      FVar9 = (ForElementType<UE::PoseSearch::FValidInteractionSearch>)&local_d40;
      if (local_d40.SecondaryData != (ForElementType<UE::PoseSearch::FValidInteractionSearch>)0x0) {
        FVar9 = local_d40.SecondaryData;
      }
      DestructItems<UE::PoseSearch::FValidInteractionSearch,int>
                ((FValidInteractionSearch *)FVar9,local_38);
      if (local_d40.SecondaryData != (ForElementType<UE::PoseSearch::FValidInteractionSearch>)0x0) {
        FMemory::Free((void *)local_d40.SecondaryData);
      }
      if (local_d60.SecondaryData != (ForElementType<bool>)0x0) {
        FMemory::Free((void *)local_d60.SecondaryData);
      }
      return;
    }
    this_02 = *(FInteractionIsland **)pFVar21;
    local_d80 = this_02;
    bVar6 = UE::PoseSearch::FInteractionIsland::IsInitialized(this_02);
    if (bVar6) {
      local_d84 = (this_02->SearchResults).ArrayNum;
      uVar13 = (ulonglong)(int)local_d84;
      pFVar23 = (this_02->SearchResults).AllocatorInstance.Data;
      local_d78 = pFVar23 + uVar13 * 0x360;
      while( true ) {
        pFVar5 = local_d78;
        if ((this_02->SearchResults).ArrayNum != (int)uVar13) {
          local_da7 = 0;
          `TCheckedPointerIterator<UE::PoseSearch::FInteractionSearchResult_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_da7);
        }
        pFVar18 = local_d70;
        pFVar21 = local_d98;
        if (pFVar23 == pFVar5) break;
        uVar24 = *(uint *)(pFVar23 + 0x1c);
        uVar15 = 0;
        if ((int)uVar24 < (this_02->SearchContexts).ArrayNum) {
          uVar15 = ~uVar24 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar15 = 0;
        lVar20 = 0;
        FVar25 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)
                 ((longlong)(int)uVar24 * 0x1e0 +
                 (longlong)(this_02->SearchContexts).AllocatorInstance.Data);
        if (0 < (longlong)_Size) {
          do {
            uVar24 = 0;
            if ((int)uVar15 < (this->ValidInteractionSearches).ArrayNum) {
              uVar24 = ~uVar15 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            bVar6 = UE::PoseSearch::FInteractionSearchContextBase::IsEquivalent
                              ((FInteractionSearchContextBase *)
                               ((this->ValidInteractionSearches).AllocatorInstance.Data +
                               (longlong)(int)uVar15 * 0xd0),(FInteractionSearchContextBase *)FVar25
                              );
            if (bVar6) {
              uVar24 = 0;
              if ((int)uVar15 < local_d48[0]) {
                uVar24 = ~uVar15 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar8 = (ForElementType<bool>)&local_d60;
              if (local_d60.SecondaryData != (ForElementType<bool>)0x0) {
                FVar8 = local_d60.SecondaryData;
              }
              if ((*(char *)(lVar20 + (longlong)FVar8) != '\0') &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!Visited[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                                     ,0x3fb,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar24 = 0;
              if ((int)uVar15 < local_d48[0]) {
                uVar24 = ~uVar15 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar8 = (ForElementType<bool>)&local_d60;
              if (local_d60.SecondaryData != (ForElementType<bool>)0x0) {
                FVar8 = local_d60.SecondaryData;
              }
              *(undefined1 *)(lVar20 + (longlong)FVar8) = 1;
              uVar24 = 0;
              if ((int)uVar15 < (this->ValidInteractionSearches).ArrayNum) {
                uVar24 = ~uVar15 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UE::PoseSearch::FInteractionSearchContextBase::VLogContext
                        ((FInteractionSearchContextBase *)
                         ((this->ValidInteractionSearches).AllocatorInstance.Data +
                         (longlong)(int)uVar15 * 0xd0),&FColor::Green);
              break;
            }
            uVar15 = uVar15 + 1;
            lVar20 = lVar20 + 1;
          } while (lVar20 < (longlong)local_da0);
        }
        if (uVar15 == local_d88) {
          if (local_38 == local_34) {
            local_38 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FValidInteractionSearch>_>
                                 (0x8d0,&local_d40,&local_34);
          }
          FVar9 = (ForElementType<UE::PoseSearch::FValidInteractionSearch>)&local_d40;
          if (local_d40.SecondaryData !=
              (ForElementType<UE::PoseSearch::FValidInteractionSearch>)0x0) {
            FVar9 = local_d40.SecondaryData;
          }
          FVar17 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)
                   ((longlong)local_38 * 0xd0 + (longlong)FVar9);
          local_38 = local_38 + 1;
          DefaultConstructItems<UE::PoseSearch::FValidInteractionSearch,int>((void *)FVar17,1);
          if (FVar17 != FVar25) {
            piVar1 = (int *)((longlong)FVar17 + 0x2c);
            iVar7 = *(int *)((longlong)FVar25 + 0x28);
            _Src = FVar25;
            if (*(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
                 ((longlong)FVar25 + 0x20) !=
                (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
              _Src = *(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
                      ((longlong)FVar25 + 0x20);
            }
            *(int *)((longlong)FVar17 + 0x28) = iVar7;
            if ((iVar7 == 0) && (*piVar1 == 0)) {
              *piVar1 = 4;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>_>
                        (8,4,iVar7,*piVar1,
                         (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)FVar17,
                         iVar7,piVar1);
              _Dst = FVar17;
              if (*(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
                   ((longlong)FVar17 + 0x20) !=
                  (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
                _Dst = *(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
                        ((longlong)FVar17 + 0x20);
              }
              if (iVar7 != 0) {
                memcpy((void *)_Dst,(void *)_Src,(longlong)iVar7 << 3);
              }
            }
          }
          pFVar22 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *)
                    ((longlong)FVar17 + 0x30);
          if (pFVar22 !=
              (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *)
              ((longlong)FVar25 + 0x30)) {
            pFVar14 = pFVar22;
            if (*(ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> **)
                 ((longlong)FVar17 + 0x70) !=
                (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *)0x0) {
              pFVar14 = *(ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> **)
                         ((longlong)FVar17 + 0x70);
            }
            DestructItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int>
                      ((TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)pFVar14,
                       *(int *)((longlong)FVar17 + 0x78));
            piVar1 = (int *)((longlong)FVar17 + 0x7c);
            iVar7 = *(int *)((longlong)FVar25 + 0x78);
            pFVar14 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *)
                      ((longlong)FVar25 + 0x30);
            if (*(ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> **)
                 ((longlong)FVar25 + 0x70) !=
                (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *)0x0) {
              pFVar14 = *(ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> **)
                         ((longlong)FVar25 + 0x70);
            }
            *(int *)((longlong)FVar17 + 0x78) = iVar7;
            if ((iVar7 == 0) && (*piVar1 == 0)) {
              *piVar1 = 4;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>_>
                        (0x10,8,iVar7,*piVar1,pFVar22,iVar7,piVar1);
              if (*(ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> **)
                   ((longlong)FVar17 + 0x70) !=
                  (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *)0x0) {
                pFVar22 = *(ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> **)
                           ((longlong)FVar17 + 0x70);
              }
              ConstructItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int>
                        (pFVar22,(TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)pFVar14,iVar7);
            }
          }
          _Dst_00 = (ForElementType<FName> *)((longlong)FVar17 + 0x80);
          if (_Dst_00 != (ForElementType<FName> *)((longlong)FVar25 + 0x80)) {
            piVar1 = (int *)((longlong)FVar17 + 0xac);
            iVar7 = *(int *)((longlong)FVar25 + 0xa8);
            _Src_00 = (ForElementType<FName> *)((longlong)FVar25 + 0x80);
            if (*(ForElementType<FName> **)((longlong)FVar25 + 0xa0) != (ForElementType<FName> *)0x0
               ) {
              _Src_00 = *(ForElementType<FName> **)((longlong)FVar25 + 0xa0);
            }
            *(int *)((longlong)FVar17 + 0xa8) = iVar7;
            if ((iVar7 == 0) && (*piVar1 == 0)) {
              *piVar1 = 4;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                        (8,4,iVar7,*piVar1,_Dst_00,iVar7,piVar1);
              if (*(ForElementType<FName> **)((longlong)FVar17 + 0xa0) !=
                  (ForElementType<FName> *)0x0) {
                _Dst_00 = *(ForElementType<FName> **)((longlong)FVar17 + 0xa0);
              }
              if (iVar7 != 0) {
                memcpy(_Dst_00,_Src_00,(longlong)iVar7 << 3);
              }
            }
          }
          *(undefined8 *)((longlong)FVar17 + 0xb0) = *(undefined8 *)((longlong)FVar25 + 0xb0);
          *(undefined1 *)((longlong)FVar17 + 0xb8) = *(undefined1 *)((longlong)FVar25 + 0xb8);
          OnInteractionStart((FValidInteractionSearch *)FVar17);
        }
        pFVar23 = pFVar23 + 0x360;
        uVar13 = (ulonglong)local_d84;
        this_02 = local_d80;
        _Size = local_da0;
      }
    }
    uVar13 = local_d90 & 0xffffffff;
    pFVar21 = pFVar21 + 8;
  } while( true );
}

// ValidateAllIslands @ 14a946ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPoseSearchInteractionSubsystem::ValidateAllIslands(UPoseSearchInteractionSubsystem *this)

{
  bool *pbVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  bool *pbVar13;
  uint uVar14;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *this_00;
  longlong lVar15;
  UPoseSearchInteractionSubsystem *pUVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  UPoseSearchInteractionSubsystem *pUVar19;
  longlong lVar20;
  undefined1 auStackY_188 [32];
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154 [4];
  uint local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  longlong local_138;
  UPoseSearchInteractionSubsystem *local_130;
  FScriptContainerElement *local_128;
  undefined1 local_120 [8];
  int local_118;
  int local_114;
  UObject *local_110;
  FScriptContainerElement *local_108;
  int iStack_100;
  uint uStack_fc;
  UPoseSearchInteractionSubsystem *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  TSet<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar11 = (this->Islands).ArrayNum;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_138 = CONCAT44(local_138._4_4_,uVar11);
  local_130 = this;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,uVar11,&local_148,0,(int *)((longlong)&local_140 + 4));
  }
  local_150 = (this->Islands).ArrayNum;
  uVar9 = (ulonglong)(int)local_150;
  pFVar17 = (this->Islands).AllocatorInstance.Data;
  local_128 = pFVar17 + uVar9 * 8;
  while( true ) {
    pFVar10 = local_128;
    if ((this->Islands).ArrayNum != (int)uVar9) {
      local_157 = 0;
      `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*_const,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_157);
    }
    if (pFVar17 == pFVar10) break;
    lVar6 = *(longlong *)pFVar17;
    pbVar13 = *(bool **)(lVar6 + 0x68);
    iVar5 = *(int *)(lVar6 + 0x70);
    pbVar1 = pbVar13 + (longlong)iVar5 * 8;
    while( true ) {
      if (*(int *)(lVar6 + 0x70) != iVar5) {
        local_156 = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_156);
      }
      if (pbVar13 == pbVar1) break;
      TSet<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_&>
                (&local_88,(TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *)local_120,pbVar13);
      pbVar13 = pbVar13 + 8;
    }
    iVar5 = (int)local_140;
    if ((int)local_140 == local_140._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&local_148,(int *)((longlong)&local_140 + 4));
    }
    local_140 = CONCAT44(local_140._4_4_,iVar5 + 1);
    this_00 = (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *)
              (local_148.Data + (longlong)iVar5 * 0x50);
    DefaultConstructItems<TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>,int>
              (this_00,1);
    iVar5 = *(int *)(lVar6 + 0x90);
    lVar15 = *(longlong *)(lVar6 + 0x88);
    lVar20 = (longlong)iVar5 * 0x1e0 + lVar15;
    while( true ) {
      if (*(int *)(lVar6 + 0x90) != iVar5) {
        local_155 = 0;
        `TCheckedPointerIterator<UE::PoseSearch::FInteractionSearchContext_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_155);
      }
      if (lVar15 == lVar20) break;
      iVar12 = *(int *)(lVar15 + 0x28);
      uVar11 = 0;
      if (0 < iVar12) {
        do {
          uVar14 = 0;
          if ((int)uVar11 < iVar12) {
            uVar14 = ~uVar11 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          lVar18 = lVar15;
          if (*(longlong *)(lVar15 + 0x20) != 0) {
            lVar18 = *(longlong *)(lVar15 + 0x20);
          }
          local_110 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar18 + (longlong)(int)uVar11 * 8));
          if (local_110 != (UObject *)0x0) {
            TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
            Emplace<UObject_const_*_const_&>(this_00,(UObject **)(local_120 + 4),(bool *)&local_110)
            ;
          }
          iVar12 = *(int *)(lVar15 + 0x28);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar12);
      }
      lVar15 = lVar15 + 0x1e0;
    }
    pFVar17 = pFVar17 + 8;
    uVar9 = (ulonglong)local_150;
    this = local_130;
  }
  lVar6 = (longlong)(int)local_138;
  local_150 = 0;
  if (0 < (int)local_138) {
    lVar15 = 0;
    local_138 = 0;
    do {
      lVar20 = local_138;
      uVar11 = 0;
      if ((int)local_150 < (int)local_140) {
        uVar11 = ~local_150 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iStack_100 = 0;
      pFVar17 = local_148.Data + lVar20;
      uStack_fc = 1;
      iVar5 = *(int *)(pFVar17 + 0x28);
      pUVar19 = (UPoseSearchInteractionSubsystem *)(pFVar17 + 0x10);
      local_e8 = 0;
      iStack_ec = 0;
      if (iVar5 != 0) {
        pUVar16 = pUVar19;
        if (*(UPoseSearchInteractionSubsystem **)(pFVar17 + 0x20) !=
            (UPoseSearchInteractionSubsystem *)0x0) {
          pUVar16 = *(UPoseSearchInteractionSubsystem **)(pFVar17 + 0x20);
        }
        uVar11 = (uint)pUVar16->_padding_;
        iStack_100 = 0;
        local_e8 = 0;
        while (uVar11 == 0) {
          lVar20 = (longlong)iStack_100;
          local_e8 = local_e8 + 0x20;
          iStack_100 = iStack_100 + 1;
          iStack_ec = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100)
          goto LAB_14a946f2e;
          uVar11 = *(uint *)((longlong)&pUVar16->_padding_ + lVar20 * 4 + 4);
        }
        uStack_fc = -uVar11 & uVar11;
        uVar9 = (ulonglong)uStack_fc * 2 + 1;
        lVar20 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_118 = (int)lVar20;
        iStack_ec = local_e8 + -1 + local_118;
        if (iVar5 < iStack_ec) {
          iStack_ec = iVar5;
        }
      }
LAB_14a946f2e:
      uVar11 = *(uint *)(pFVar17 + 0x28);
      uStack_e4 = local_8c;
      iStack_e0 = *(int *)(pFVar17 + 8) - *(int *)(pFVar17 + 0x34);
      uVar14 = uVar11 & 0xffffffe0;
      TStack_d0._padding_ = CONCAT44(uStack_fc,iStack_100);
      uStack_f0 = 0xffffffff;
      TStack_d0.CurrentBitIndex = iStack_ec;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar11 >> 5;
      TStack_d0._28_4_ = local_8c;
      TStack_d0.BaseBitIndex = local_e8;
      uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
      local_130 = pUVar19;
      local_128 = pFVar17;
      local_108 = pFVar17;
      local_f8 = pUVar19;
      local_d8 = pFVar17;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)pUVar19;
      if ((((int)uVar11 < 0) || (iVar5 < (int)uVar11)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar8 = *(uint *)(pFVar17 + 0x28);
      if (uVar11 != uVar8) {
        pUVar16 = pUVar19;
        if (*(UPoseSearchInteractionSubsystem **)(pFVar17 + 0x20) !=
            (UPoseSearchInteractionSubsystem *)0x0) {
          pUVar16 = *(UPoseSearchInteractionSubsystem **)(pFVar17 + 0x20);
        }
        uVar11 = -1 << ((byte)uVar11 & 0x1f) &
                 *(uint *)((longlong)&pUVar16->_padding_ + (longlong)iVar12 * 4);
        while (uVar11 == 0) {
          lVar20 = (longlong)iVar12;
          uVar14 = uVar14 + 0x20;
          iVar12 = iVar12 + 1;
          uVar11 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14a947030;
          uVar11 = *(uint *)((longlong)&pUVar16->_padding_ + lVar20 * 4 + 4);
        }
        uVar9 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_114 = (int)lVar20;
        uVar11 = local_114 + -1 + uVar14;
        if ((int)uVar8 < (int)uVar11) {
          uVar11 = uVar8;
        }
      }
LAB_14a947030:
      while( true ) {
        pFVar17 = local_d8;
        if (*(int *)(local_d8 + 8) - *(int *)(local_d8 + 0x34) != (int)uStack_b0) {
          local_154[0] = 0;
          `TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_154);
        }
        if (((TStack_d0.CurrentBitIndex == uVar11) &&
            ((UPoseSearchInteractionSubsystem *)TStack_d0.Array == pUVar19)) &&
           (pFVar17 == local_128)) break;
        lVar20 = 0;
        uVar14 = 0;
        uVar9 = *(ulonglong *)(*(longlong *)pFVar17 + (longlong)TStack_d0.CurrentBitIndex * 0x10);
        if (0 < lVar6) {
          lVar18 = 0;
          do {
            if (lVar15 != lVar20) {
              uVar8 = 0;
              if ((int)uVar14 < (int)local_140) {
                uVar8 = ~uVar14 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              pFVar17 = local_148.Data + lVar18;
              uVar8 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
              uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
              if (*(int *)(pFVar17 + 8) != *(int *)(pFVar17 + 0x34)) {
                pFVar10 = pFVar17 + 0x38;
                if (*(FScriptContainerElement **)(pFVar17 + 0x40) != (FScriptContainerElement *)0x0)
                {
                  pFVar10 = *(FScriptContainerElement **)(pFVar17 + 0x40);
                }
                iVar5 = *(int *)(pFVar10 +
                                (ulonglong)(*(int *)(pFVar17 + 0x48) - 1U & (uVar8 >> 0x10 ^ uVar8))
                                * 4);
                if (iVar5 != -1) {
                  do {
                    puVar7 = (ulonglong *)((longlong)iVar5 * 0x10 + *(longlong *)pFVar17);
                    if (*puVar7 == uVar9) {
                      if (puVar7 != (ulonglong *)0x0) {
                        bVar3 = false;
                        goto LAB_14a9471ba;
                      }
                      break;
                    }
                    iVar5 = (int)puVar7[1];
                  } while (iVar5 != -1);
                }
              }
            }
            uVar14 = uVar14 + 1;
            lVar20 = lVar20 + 1;
            lVar18 = lVar18 + 0x50;
            pUVar19 = local_130;
          } while (lVar20 < lVar6);
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      }
      lVar15 = lVar15 + 1;
      local_150 = local_150 + 1;
      local_138 = local_138 + 0x50;
    } while (lVar15 < lVar6);
  }
  bVar3 = true;
LAB_14a9471ba:
  DestructItems<TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>,int>
            ((TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *)
             local_148.Data,(int)local_140);
  if ((TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *)
      local_148.Data !=
      (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *)0x0) {
    FMemory::Free(local_148.Data);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return bVar3;
}

