// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// DrawDebugString @ 14cf4e560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ARDebugHelpers::DrawDebugString
          (UWorld *param_1,TVector<double> *param_2,FString *param_3,float param_4,FColor *param_5,
          float param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  bool bVar5;
  ENetMode EVar6;
  uint uVar7;
  AWorldSettings *pAVar8;
  UObject *pUVar9;
  undefined1 local_a8 [8];
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [2];
  
  bVar2 = false;
  EVar6 = UEngine::GetNetMode(GEngine,param_1);
  if (EVar6 != NM_DedicatedServer) {
    if ((param_1 == (UWorld *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InWorld",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARDebugDrawHelpers.cpp"
                           ,0x15,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pAVar8 = UWorld::GetWorldSettings(param_1,false,true);
    UWorld::GetPlayerControllerIterator(param_1,&local_a0);
    for (; (iVar4 = local_a0.Index, pTVar3 = local_a0.Container, -1 < local_a0.Index &&
           (local_a0.Index < (local_a0.Container)->ArrayNum)); local_a0.Index = local_a0.Index + 1)
    {
      uVar7 = 0;
      if (local_a0.Index < (local_a0.Container)->ArrayNum) {
        uVar7 = (uint)~local_a0.Index >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
      if (((pUVar9 != (UObject *)0x0) && (*(AHUD **)&pUVar9[0x16].field_0x18 != (AHUD *)0x0)) &&
         (*(longlong *)&pUVar9[0x16].field_0x8 != 0)) {
        local_88._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_88._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        local_68[0]._0_8_ = local_88._s_0.X;
        local_68[0]._8_8_ = local_88._s_0.Y;
        local_68[0]._16_8_ = local_88._s_0.Z;
        AHUD::AddDebugText(*(AHUD **)&pUVar9[0x16].field_0x18,param_3,(AActor *)pAVar8,param_6,
                           (TVector<double> *)&local_68[0]._s_0,(TVector<double> *)&local_88._s_0,
                           (FColor)(param_5->field0_0x0)._s_0,true,true,false,(UFont *)0x0,param_4,
                           param_7);
        bVar2 = true;
      }
    }
    if (bVar2) {
      return;
    }
  }
  `ARDebugHelpers::DrawDebugString'::__l2::<lambda_1>::operator()(local_a8);
  return;
}

// operator() @ 1505785e0

bool __thiscall `ARDebugHelpers::DrawDebugString'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6670068319309004764>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6670068319309004764>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

