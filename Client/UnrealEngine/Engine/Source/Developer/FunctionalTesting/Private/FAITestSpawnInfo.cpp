// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 3

// StaticStruct @ 148c74b50

UScriptStruct * __cdecl FAITestSpawnInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UScriptStruct_FAITestSpawnInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAITestSpawnInfo,(UObject *)pUVar1,
                         L"AITestSpawnInfo");
  }
  return Z_Registration_Info_UScriptStruct_FAITestSpawnInfo.OuterSingleton;
}

// IsValid @ 148c74c80

bool __thiscall FAITestSpawnInfo::IsValid(FAITestSpawnInfo *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->PawnClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_APawn_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) && ((this->PawnClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) &&
         (this->_padding_ != 0)) {
        return true;
      }
    }
  }
  return false;
}

// Spawn @ 148c74d00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FAITestSpawnInfo::Spawn(FAITestSpawnInfo *this,AFunctionalAITestBase *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<APawn>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  double dVar4;
  longlong lVar5;
  UBehaviorTree *pUVar6;
  AController *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  TRotator<double> *pTVar14;
  UWorld *pUVar15;
  APawn *this_01;
  UClass *pUVar16;
  UClass *pUVar17;
  longlong *plVar18;
  uint uVar19;
  TObjectPtr<AController>_u_0 TVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  UClass *local_res8;
  FName local_res10;
  FName local_res18 [2];
  APawn *local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130 [2];
  double local_110;
  TObjectPtr<AController>_u_0 local_108;
  APawn *local_100;
  FString local_f8;
  FString local_e8;
  TRotator<double> local_d8;
  TVector<double>_u_0 local_b8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  TRotator<double> local_80 [3];
  
  if ((param_1 == (AFunctionalAITestBase *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AITest",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalAITest.cpp"
                          ,0x173,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  pTVar14 = AActor::GetActorRotation((AActor *)this->_padding_,local_80);
  dVar9 = pTVar14->Pitch;
  dVar10 = pTVar14->Yaw;
  dVar4 = pTVar14->Roll;
  lVar5 = *(longlong *)(this->_padding_ + 0x1b8);
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar5 != 0) {
    local_98 = *(undefined4 *)(lVar5 + 0x210);
    uStack_94 = *(undefined4 *)(lVar5 + 0x214);
    uStack_90 = *(undefined4 *)(lVar5 + 0x218);
    uStack_8c = *(undefined4 *)(lVar5 + 0x21c);
    local_88 = *(double *)(lVar5 + 0x220);
    uVar25 = local_98;
    uVar26 = uStack_94;
    uVar27 = uStack_90;
    uVar28 = uStack_8c;
    local_110 = local_88;
  }
  dVar23 = (double)(float)((uint)param_1->SpawnLocationRandomizationRange ^
                          __xmm_80000000800000008000000080000000);
  uVar19 = (int)param_1->_padding_ * 0xbb38435 + 0x3619636b;
  *(uint *)&param_1->_padding_ = uVar19;
  fVar21 = (float)(uVar19 >> 9 | 0x3f800000) - __real_3f800000;
  uVar19 = uVar19 * 0xbb38435 + 0x3619636b;
  fVar3 = param_1->SpawnLocationRandomizationRange;
  *(uint *)&param_1->_padding_ = uVar19;
  local_res8 = (this->PawnClass).Class.field0_0x0.DebugPtr;
  pUVar6 = (this->BehaviorTree).field0_0x0.DebugPtr;
  dVar24 = (double)(float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
  fVar22 = (float)(uVar19 >> 9 | 0x3f800000) - __real_3f800000;
  dVar23 = (double)CONCAT44(uVar28,uVar27) +
           (double)fVar21 * ((double)param_1->SpawnLocationRandomizationRange - dVar23) + dVar23;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar15 = AActor::GetWorld((AActor *)param_1);
  local_b8._8_4_ = SUB84(dVar23,0);
  local_b8._0_8_ =
       (double)fVar22 * ((double)fVar3 - dVar24) + dVar24 + (double)CONCAT44(uVar26,uVar25);
  local_b8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  local_b8._s_0.Z = local_110;
  local_d8.Pitch = dVar9;
  local_d8.Yaw = dVar10;
  local_d8.Roll = dVar4;
  this_01 = UAIBlueprintHelperLibrary::SpawnAIFromClass
                      ((UObject *)pUVar15,(TSubclassOf<APawn>)&local_res8,pUVar6,
                       (TVector<double> *)&local_b8._s_0,&local_d8,true,(AActor *)0x0);
  if (this_01 != (APawn *)0x0) {
    if ((this_01->Controller).field0_0x0.DebugPtr == (AController *)0x0) {
      ::FName::ToString((FName *)((longlong)&this->_padding_ + 4),&local_e8);
      local_res18[0] = (FName)this_01->_padding_;
      ::FName::ToString(local_res18,&local_140);
      ::FString::PrintfImpl(local_130,L"Spawned Pawn %s (\'%s\' set) has no controller ");
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (2 < (byte)LogFunctionalTest._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
      }
      goto LAB_148c750a2;
    }
    pUVar17 = Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
    plVar18 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar17);
    if (plVar18 == (longlong *)0x0) {
      this_00 = (this_01->Controller).field0_0x0.DebugPtr;
      if (this_00 != (AController *)0x0) {
        pUVar17 = Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
        plVar18 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar17);
        if (plVar18 != (longlong *)0x0) goto LAB_148c750ef;
      }
    }
    else {
LAB_148c750ef:
      (**(code **)(*plVar18 + 0x10))(plVar18,&this->TeamID);
    }
    pTVar2 = &param_1->SpawnedPawns;
    local_168 = this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 <
         pFVar7 + (longlong)(param_1->SpawnedPawns).ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    iVar13 = (param_1->SpawnedPawns).ArrayNum;
    piVar1 = &(param_1->SpawnedPawns).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->SpawnedPawns).ArrayNum = iVar13 + 1;
    *(APawn **)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_168;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_168 != (APawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_168);
    }
    TVar20 = (TObjectPtr<AController>_u_0)(this_01->Controller).field0_0x0.DebugPtr;
    if (TVar20.DebugPtr != (AController *)0x0) {
      pUVar17 = Z_Construct_UClass_AAIController_NoRegister();
      iVar13 = (int)pUVar17->_padding_;
      if ((iVar13 <= *(int *)((TVar20.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar20.DebugPtr)->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
          &pUVar17->_padding_)) goto LAB_148c751f8;
    }
    TVar20.DebugPtr = (AController *)0x0;
LAB_148c751f8:
    local_108 = TVar20;
    local_100 = this_01;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnAISpawned,
               &local_108);
    return true;
  }
  ::FName::ToString((FName *)((longlong)&this->_padding_ + 4),&local_f8);
  pUVar17 = (this->PawnClass).Class.field0_0x0.DebugPtr;
  if ((pUVar17 == (UClass *)0x0) ||
     (pUVar16 = Z_Construct_UClass_APawn_NoRegister(), pUVar16 == (UClass *)0x0)) {
LAB_148c74f70:
    ::FString::FString(&local_160,L"None");
  }
  else {
    iVar13 = (int)pUVar16->_padding_;
    if (((int)pUVar17->_padding_ < iVar13) ||
       ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if ((!bVar11) ||
       (pUVar17 = (this->PawnClass).Class.field0_0x0.DebugPtr, pUVar17 == (UClass *)0x0))
    goto LAB_148c74f70;
    local_res10 = (FName)pUVar17->_padding_;
    ::FName::ToString(&local_res10,&local_160);
  }
  ::FString::PrintfImpl(&local_150,L"Failed to spawn \'%s\' pawn (\'%s\' set) ");
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  local_130[0].Data.AllocatorInstance.Data = local_150.Data.AllocatorInstance.Data;
  if (2 < (byte)LogFunctionalTest._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    local_130[0].Data.AllocatorInstance.Data = local_150.Data.AllocatorInstance.Data;
  }
LAB_148c750a2:
  if (local_130[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130[0].Data.AllocatorInstance.Data);
  }
  return false;
}

