// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetPerNetDriverState @ 1484d9410

FPushModelPerNetDriverState * __cdecl
UE_RepLayout_Private::GetPerNetDriverState(FRepChangelistState *param_1)

{
  return (FPushModelPerNetDriverState *)0x0;
}

// QueueRepNotifyForCustomDeltaProperty @ 1484e8420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE_RepLayout_Private::QueueRepNotifyForCustomDeltaProperty
          (FReceivingRepState *param_1,FNetDeltaSerializeInfo *param_2,FProperty *param_3,
          uint param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FScriptContainerElement FVar3;
  FProperty *pFVar4;
  bool bVar5;
  int iVar6;
  UFunction *pUVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FProperty *local_res18 [2];
  FScriptContainerElement local_28 [8];
  FString local_20;
  
  FVar3 = SUB41(param_4,0);
  local_res18[0] = param_3;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FProperty_*_const_&>
            (&param_1->RepNotifies,local_res18);
  pUVar7 = UObject::FindFunctionChecked(param_2->Object,local_res18[0]->RepNotifyFunc);
  pFVar4 = local_res18[0];
  if ((pUVar7->NumParms != '\0') && (local_res18[0]->ArrayDim != 1)) {
    if (5 < (byte)LogRepTraffic._0_1_) {
      bVar5 = IsThisNotNull(local_res18[0],"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)&pFVar4->_padding_,&local_20);
      }
      else {
        ::FString::FString(&local_20,L"None");
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
    uVar9 = ((uint)((ulonglong)local_res18[0] >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_res18[0] >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    pTVar8 = TMapBase<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<FProperty_*_const_&>
                       ((TMapBase<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                         *)&param_1->RepNotifyMetaData,uVar9 >> 0x10 ^ uVar9,local_res18);
    pFVar1 = (pTVar8->AllocatorInstance).Data;
    local_28[0] = FVar3;
    if (((pFVar1 <= local_28) && (local_28 < pFVar1 + pTVar8->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = pTVar8->ArrayNum;
    if (iVar6 == pTVar8->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar6 + 1;
    (pTVar8->AllocatorInstance).Data[iVar6] = local_28[0];
  }
  return;
}

// ValidateArraySize @ 148501460

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UE_RepLayout_Private::ValidateArraySize(int param_1,FProperty *param_2)

{
  FString *local_res18 [2];
  FString local_28;
  FString local_18;
  
  if (0xfffe < param_1) {
    FField::GetPathName((FField *)param_2,&local_18,(UObject *)0x0);
    ::FString::PrintfImpl
              (&local_28,
               L"ValidateArraySize: Replicated arrays must be smaller than %d elements in size. ArraySize = (%d) Property = (%s)."
              );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (1 < (byte)LogRepTraffic._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
    }
    local_res18[0] = &local_28;
    `UE_RepLayout_Private::ValidateArraySize'::__l5::<lambda_1>::operator()(local_res18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// operator() @ 15052bbf0

bool __thiscall `UE_RepLayout_Private::ValidateArraySize'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3278201614795538720>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<3278201614795538720>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

