// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 44

// GetValue<UBlackboardKeyType_Bool> @ 146eb4ae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Bool>
          (UBehaviorTreeComponent *param_1,FName *param_2,FKey *param_3,bool *param_4)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  FKey FVar7;
  UClass *pUVar8;
  FName FStackX_10;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this == (UBlackboardComponent *)0x0) {
    return *param_4;
  }
  if (*param_2 == (FName)0x0) goto LAB_146eb4c15;
  FVar7 = (FKey)param_3->Key;
  if (FVar7.Key == 0xffff) {
    pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar7.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&FStackX_10,(EKeyLookupMode)param_2);
      FVar7.Key = (ushort)FStackX_10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar7;
  }
  pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar8 = (UClass *)0x0;
LAB_146eb4b9e:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb4bb6;
    if (pUVar8 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      goto LAB_146eb4bbb;
    }
LAB_146eb4be9:
    pUVar8 = (UClass *)0x0;
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar2,FVar7);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar8 = (UClass *)0x0;
    }
    else {
      pUVar8 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      goto LAB_146eb4b9e;
    }
LAB_146eb4bb6:
    if (pUVar8 == (UClass *)0x0) goto LAB_146eb4be9;
LAB_146eb4bbb:
    pUVar6 = UBlackboardKeyType::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_146eb4be9;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146eb4be9;
  }
  pUVar6 = UBlackboardKeyType_Bool::StaticClass();
  if (pUVar8 == pUVar6) {
    bVar4 = UBlackboardComponent::GetValue<UBlackboardKeyType_Bool>(this,(FKey)param_3->Key);
    return bVar4;
  }
LAB_146eb4c15:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Bool> @ 146eb4b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Bool>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3,bool *param_4)

{
  int iVar1;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  FKey FVar7;
  UClass *pUVar8;
  FName local_res10;
  
  if (*param_2 == (FName)0x0) goto LAB_146eb4c15;
  FVar7 = (FKey)param_3->Key;
  if (FVar7.Key == 0xffff) {
    pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar7.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&local_res10,(EKeyLookupMode)param_2);
      FVar7.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar7;
  }
  pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar8 = (UClass *)0x0;
LAB_146eb4b9e:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb4bb6;
    if (pUVar8 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      goto LAB_146eb4bbb;
    }
LAB_146eb4be9:
    pUVar8 = (UClass *)0x0;
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar2,FVar7);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar8 = (UClass *)0x0;
    }
    else {
      pUVar8 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      goto LAB_146eb4b9e;
    }
LAB_146eb4bb6:
    if (pUVar8 == (UClass *)0x0) goto LAB_146eb4be9;
LAB_146eb4bbb:
    pUVar6 = UBlackboardKeyType::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_146eb4be9;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146eb4be9;
  }
  pUVar6 = UBlackboardKeyType_Bool::StaticClass();
  if (pUVar8 == pUVar6) {
    bVar4 = UBlackboardComponent::GetValue<UBlackboardKeyType_Bool>(param_1,(FKey)param_3->Key);
    return bVar4;
  }
LAB_146eb4c15:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Class> @ 146eb4d80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Class>
          (UBehaviorTreeComponent *param_1,FName *param_2,FKey *param_3,UClass **param_4)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FKey FVar8;
  FName FStackX_10;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this == (UBlackboardComponent *)0x0) {
    return *param_4;
  }
  if (*param_2 == (FName)0x0) goto LAB_146eb4eb5;
  FVar8 = (FKey)param_3->Key;
  if (FVar8.Key == 0xffff) {
    pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar8.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&FStackX_10,(EKeyLookupMode)param_2);
      FVar8.Key = (ushort)FStackX_10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar8;
  }
  pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar7 = (UClass *)0x0;
LAB_146eb4e3e:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb4e56;
    if (pUVar7 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
      goto LAB_146eb4e5b;
    }
LAB_146eb4e89:
    pUVar7 = (UClass *)0x0;
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar2,FVar8);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar7 = (UClass *)0x0;
    }
    else {
      pUVar7 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      goto LAB_146eb4e3e;
    }
LAB_146eb4e56:
    if (pUVar7 == (UClass *)0x0) goto LAB_146eb4e89;
LAB_146eb4e5b:
    pUVar6 = UBlackboardKeyType::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_146eb4e89;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146eb4e89;
  }
  pUVar6 = UBlackboardKeyType_Class::StaticClass();
  if (pUVar7 == pUVar6) {
    pUVar7 = UBlackboardComponent::GetValue<UBlackboardKeyType_Class>(this,(FKey)param_3->Key);
    return pUVar7;
  }
LAB_146eb4eb5:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Class> @ 146eb4da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Class>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3,UClass **param_4)

{
  int iVar1;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FKey FVar8;
  FName local_res10;
  
  if (*param_2 == (FName)0x0) goto LAB_146eb4eb5;
  FVar8 = (FKey)param_3->Key;
  if (FVar8.Key == 0xffff) {
    pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar8.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&local_res10,(EKeyLookupMode)param_2);
      FVar8.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar8;
  }
  pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar7 = (UClass *)0x0;
LAB_146eb4e3e:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb4e56;
    if (pUVar7 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
      goto LAB_146eb4e5b;
    }
LAB_146eb4e89:
    pUVar7 = (UClass *)0x0;
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar2,FVar8);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar7 = (UClass *)0x0;
    }
    else {
      pUVar7 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      goto LAB_146eb4e3e;
    }
LAB_146eb4e56:
    if (pUVar7 == (UClass *)0x0) goto LAB_146eb4e89;
LAB_146eb4e5b:
    pUVar6 = UBlackboardKeyType::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_146eb4e89;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146eb4e89;
  }
  pUVar6 = UBlackboardKeyType_Class::StaticClass();
  if (pUVar7 == pUVar6) {
    pUVar7 = UBlackboardComponent::GetValue<UBlackboardKeyType_Class>(param_1,(FKey)param_3->Key);
    return pUVar7;
  }
LAB_146eb4eb5:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Enum> @ 146eb5010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Enum>
          (UBehaviorTreeComponent *param_1,FName *param_2,FKey *param_3,uchar *param_4)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  uchar uVar5;
  FBlackboardEntry *pFVar6;
  UClass *pUVar7;
  FKey FVar8;
  UClass *pUVar9;
  FName FStackX_10;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this == (UBlackboardComponent *)0x0) {
    return *param_4;
  }
  if (*param_2 == (FName)0x0) goto LAB_146eb5145;
  FVar8 = (FKey)param_3->Key;
  if (FVar8.Key == 0xffff) {
    pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar8.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&FStackX_10,(EKeyLookupMode)param_2);
      FVar8.Key = (ushort)FStackX_10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar8;
  }
  pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar9 = (UClass *)0x0;
LAB_146eb50ce:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb50e6;
    if (pUVar9 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
      goto LAB_146eb50eb;
    }
LAB_146eb5119:
    pUVar9 = (UClass *)0x0;
  }
  else {
    pFVar6 = UBlackboardData::GetKey(pUVar2,FVar8);
    if ((pFVar6 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar6->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar9 = (UClass *)0x0;
    }
    else {
      pUVar9 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      goto LAB_146eb50ce;
    }
LAB_146eb50e6:
    if (pUVar9 == (UClass *)0x0) goto LAB_146eb5119;
LAB_146eb50eb:
    pUVar7 = UBlackboardKeyType::StaticClass();
    if (pUVar7 == (UClass *)0x0) goto LAB_146eb5119;
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146eb5119;
  }
  pUVar7 = UBlackboardKeyType_Enum::StaticClass();
  if (pUVar9 == pUVar7) {
    uVar5 = UBlackboardComponent::GetValue<UBlackboardKeyType_Enum>(this,(FKey)param_3->Key);
    return uVar5;
  }
LAB_146eb5145:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Enum> @ 146eb5030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Enum>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3,uchar *param_4)

{
  int iVar1;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  uchar uVar5;
  FBlackboardEntry *pFVar6;
  UClass *pUVar7;
  FKey FVar8;
  UClass *pUVar9;
  FName local_res10;
  
  if (*param_2 == (FName)0x0) goto LAB_146eb5145;
  FVar8 = (FKey)param_3->Key;
  if (FVar8.Key == 0xffff) {
    pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar8.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&local_res10,(EKeyLookupMode)param_2);
      FVar8.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar8;
  }
  pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar9 = (UClass *)0x0;
LAB_146eb50ce:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb50e6;
    if (pUVar9 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
      goto LAB_146eb50eb;
    }
LAB_146eb5119:
    pUVar9 = (UClass *)0x0;
  }
  else {
    pFVar6 = UBlackboardData::GetKey(pUVar2,FVar8);
    if ((pFVar6 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar6->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar9 = (UClass *)0x0;
    }
    else {
      pUVar9 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      goto LAB_146eb50ce;
    }
LAB_146eb50e6:
    if (pUVar9 == (UClass *)0x0) goto LAB_146eb5119;
LAB_146eb50eb:
    pUVar7 = UBlackboardKeyType::StaticClass();
    if (pUVar7 == (UClass *)0x0) goto LAB_146eb5119;
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146eb5119;
  }
  pUVar7 = UBlackboardKeyType_Enum::StaticClass();
  if (pUVar9 == pUVar7) {
    uVar5 = UBlackboardComponent::GetValue<UBlackboardKeyType_Enum>(param_1,(FKey)param_3->Key);
    return uVar5;
  }
LAB_146eb5145:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Float> @ 146eb52a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Float>
          (UBehaviorTreeComponent *param_1,FName *param_2,FKey *param_3,float *param_4)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  FKey FVar7;
  UClass *pUVar8;
  float fVar9;
  FName FStackX_10;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this == (UBlackboardComponent *)0x0) {
    return *param_4;
  }
  if (*param_2 == (FName)0x0) goto LAB_146eb53d3;
  FVar7 = (FKey)param_3->Key;
  if (FVar7.Key == 0xffff) {
    pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar7.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&FStackX_10,(EKeyLookupMode)param_2);
      FVar7.Key = (ushort)FStackX_10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar7;
  }
  pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar8 = (UClass *)0x0;
LAB_146eb535d:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb5375;
    if (pUVar8 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      goto LAB_146eb537a;
    }
LAB_146eb53a8:
    pUVar8 = (UClass *)0x0;
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar2,FVar7);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar8 = (UClass *)0x0;
    }
    else {
      pUVar8 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      goto LAB_146eb535d;
    }
LAB_146eb5375:
    if (pUVar8 == (UClass *)0x0) goto LAB_146eb53a8;
LAB_146eb537a:
    pUVar6 = UBlackboardKeyType::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_146eb53a8;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146eb53a8;
  }
  pUVar6 = UBlackboardKeyType_Float::StaticClass();
  if (pUVar8 == pUVar6) {
    fVar9 = UBlackboardComponent::GetValue<UBlackboardKeyType_Float>(this,(FKey)param_3->Key);
    return fVar9;
  }
LAB_146eb53d3:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Float> @ 146eb52c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Float>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3,float *param_4)

{
  int iVar1;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  FKey FVar7;
  UClass *pUVar8;
  float fVar9;
  FName local_res10;
  
  if (*param_2 == (FName)0x0) goto LAB_146eb53d3;
  FVar7 = (FKey)param_3->Key;
  if (FVar7.Key == 0xffff) {
    pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar7.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&local_res10,(EKeyLookupMode)param_2);
      FVar7.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar7;
  }
  pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar8 = (UClass *)0x0;
LAB_146eb535d:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb5375;
    if (pUVar8 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      goto LAB_146eb537a;
    }
LAB_146eb53a8:
    pUVar8 = (UClass *)0x0;
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar2,FVar7);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar8 = (UClass *)0x0;
    }
    else {
      pUVar8 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      goto LAB_146eb535d;
    }
LAB_146eb5375:
    if (pUVar8 == (UClass *)0x0) goto LAB_146eb53a8;
LAB_146eb537a:
    pUVar6 = UBlackboardKeyType::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_146eb53a8;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146eb53a8;
  }
  pUVar6 = UBlackboardKeyType_Float::StaticClass();
  if (pUVar8 == pUVar6) {
    fVar9 = UBlackboardComponent::GetValue<UBlackboardKeyType_Float>(param_1,(FKey)param_3->Key);
    return fVar9;
  }
LAB_146eb53d3:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Int> @ 146eb5530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Int>
          (UBehaviorTreeComponent *param_1,FName *param_2,FKey *param_3,int *param_4)

{
  UBlackboardComponent *this;
  UBlackboardData *pUVar1;
  UBlackboardKeyType *pUVar2;
  bool bVar3;
  int iVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  FKey FVar7;
  UClass *pUVar8;
  FName FStackX_10;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this == (UBlackboardComponent *)0x0) {
    return *param_4;
  }
  if (*param_2 == (FName)0x0) goto LAB_146eb5665;
  FVar7 = (FKey)param_3->Key;
  if (FVar7.Key == 0xffff) {
    pUVar1 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar1 == (UBlackboardData *)0x0) {
      FVar7.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar1,&FStackX_10,(EKeyLookupMode)param_2);
      FVar7.Key = (ushort)FStackX_10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar7;
  }
  pUVar1 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UBlackboardData *)0x0) {
    pUVar8 = (UClass *)0x0;
LAB_146eb55ee:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb5606;
    if (pUVar8 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      goto LAB_146eb560b;
    }
LAB_146eb5639:
    pUVar8 = (UClass *)0x0;
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar1,FVar7);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar2 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar2 == (UBlackboardKeyType *)0x0)) {
      pUVar8 = (UClass *)0x0;
    }
    else {
      pUVar8 = (UClass *)pUVar2->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      goto LAB_146eb55ee;
    }
LAB_146eb5606:
    if (pUVar8 == (UClass *)0x0) goto LAB_146eb5639;
LAB_146eb560b:
    pUVar6 = UBlackboardKeyType::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_146eb5639;
    iVar4 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar4 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_146eb5639;
  }
  pUVar6 = UBlackboardKeyType_Int::StaticClass();
  if (pUVar8 == pUVar6) {
    iVar4 = UBlackboardComponent::GetValue<UBlackboardKeyType_Int>(this,(FKey)param_3->Key);
    return iVar4;
  }
LAB_146eb5665:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Int> @ 146eb5550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Int>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3,int *param_4)

{
  UBlackboardData *pUVar1;
  UBlackboardKeyType *pUVar2;
  bool bVar3;
  int iVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  FKey FVar7;
  UClass *pUVar8;
  FName local_res10;
  
  if (*param_2 == (FName)0x0) goto LAB_146eb5665;
  FVar7 = (FKey)param_3->Key;
  if (FVar7.Key == 0xffff) {
    pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar1 == (UBlackboardData *)0x0) {
      FVar7.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar1,&local_res10,(EKeyLookupMode)param_2);
      FVar7.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar7;
  }
  pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UBlackboardData *)0x0) {
    pUVar8 = (UClass *)0x0;
LAB_146eb55ee:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb5606;
    if (pUVar8 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      goto LAB_146eb560b;
    }
LAB_146eb5639:
    pUVar8 = (UClass *)0x0;
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar1,FVar7);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar2 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar2 == (UBlackboardKeyType *)0x0)) {
      pUVar8 = (UClass *)0x0;
    }
    else {
      pUVar8 = (UClass *)pUVar2->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      goto LAB_146eb55ee;
    }
LAB_146eb5606:
    if (pUVar8 == (UClass *)0x0) goto LAB_146eb5639;
LAB_146eb560b:
    pUVar6 = UBlackboardKeyType::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_146eb5639;
    iVar4 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar4 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_146eb5639;
  }
  pUVar6 = UBlackboardKeyType_Int::StaticClass();
  if (pUVar8 == pUVar6) {
    iVar4 = UBlackboardComponent::GetValue<UBlackboardKeyType_Int>(param_1,(FKey)param_3->Key);
    return iVar4;
  }
LAB_146eb5665:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Name> @ 146eb57c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Name>
          (UBehaviorTreeComponent *param_1,FName *param_2,FKey *param_3,FName *param_4)

{
  longlong *in_stack_00000028;
  
  if (param_2[0x19] != (FName)0x0) {
    GetValue<UBlackboardKeyType_Name>
              ((UBlackboardComponent *)param_1,(FName *)param_2[0x19],param_3,param_4);
    return (FName)param_1;
  }
  param_1->_padding_ = *in_stack_00000028;
  return (FName)param_1;
}

// GetValue<UBlackboardKeyType_Name> @ 146eb5810

/* WARNING: Removing unreachable block (ram,0x000146eb583e) */
/* WARNING: Removing unreachable block (ram,0x000146eb5863) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Name>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3,FName *param_4)

{
  longlong local_res18;
  longlong *in_stack_00000028;
  
  if ((*(longlong *)param_3 != 0) &&
     (TryGetBlackboardKeyValue<UBlackboardKeyType_Name>
                ((UBlackboardComponent *)&local_res18,param_2,param_3), (int)local_res18 != -1)) {
    param_1->_padding_ = local_res18;
    return (FName)param_1;
  }
  param_1->_padding_ = *in_stack_00000028;
  return (FName)param_1;
}

// GetValue<UBlackboardKeyType_Object> @ 146eb5a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Object>
          (UBehaviorTreeComponent *param_1,FName *param_2,FKey *param_3,UObject **param_4)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FKey FVar8;
  UClass *pUVar9;
  FName FStackX_10;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this == (UBlackboardComponent *)0x0) {
    return *param_4;
  }
  if (*param_2 == (FName)0x0) goto LAB_146eb5b35;
  FVar8 = (FKey)param_3->Key;
  if (FVar8.Key == 0xffff) {
    pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar8.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&FStackX_10,(EKeyLookupMode)param_2);
      FVar8.Key = (ushort)FStackX_10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar8;
  }
  pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar9 = (UClass *)0x0;
LAB_146eb5abe:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb5ad6;
    if (pUVar9 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
      goto LAB_146eb5adb;
    }
LAB_146eb5b09:
    pUVar9 = (UClass *)0x0;
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar2,FVar8);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar9 = (UClass *)0x0;
    }
    else {
      pUVar9 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      goto LAB_146eb5abe;
    }
LAB_146eb5ad6:
    if (pUVar9 == (UClass *)0x0) goto LAB_146eb5b09;
LAB_146eb5adb:
    pUVar6 = UBlackboardKeyType::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_146eb5b09;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146eb5b09;
  }
  pUVar6 = UBlackboardKeyType_Object::StaticClass();
  if (pUVar9 == pUVar6) {
    pUVar7 = UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(this,(FKey)param_3->Key);
    return pUVar7;
  }
LAB_146eb5b35:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Object> @ 146eb5a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Object>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3,UObject **param_4)

{
  int iVar1;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FKey FVar8;
  UClass *pUVar9;
  FName local_res10;
  
  if (*param_2 == (FName)0x0) goto LAB_146eb5b35;
  FVar8 = (FKey)param_3->Key;
  if (FVar8.Key == 0xffff) {
    pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar8.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&local_res10,(EKeyLookupMode)param_2);
      FVar8.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar8;
  }
  pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar9 = (UClass *)0x0;
LAB_146eb5abe:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146eb5ad6;
    if (pUVar9 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
      goto LAB_146eb5adb;
    }
LAB_146eb5b09:
    pUVar9 = (UClass *)0x0;
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar2,FVar8);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar9 = (UClass *)0x0;
    }
    else {
      pUVar9 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      goto LAB_146eb5abe;
    }
LAB_146eb5ad6:
    if (pUVar9 == (UClass *)0x0) goto LAB_146eb5b09;
LAB_146eb5adb:
    pUVar6 = UBlackboardKeyType::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_146eb5b09;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146eb5b09;
  }
  pUVar6 = UBlackboardKeyType_Object::StaticClass();
  if (pUVar9 == pUVar6) {
    pUVar7 = UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(param_1,(FKey)param_3->Key);
    return pUVar7;
  }
LAB_146eb5b35:
  return *param_4;
}

// GetValue<UBlackboardKeyType_Rotator> @ 146eb5c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Rotator>
          (TRotator<double> *__return_storage_ptr__,UBehaviorTreeComponent *param_1,FName *param_2,
          FKey *param_3,TRotator<double> *param_4)

{
  double dVar1;
  double dVar2;
  TOptional<UE::Math::TRotator<double>_> local_28;
  
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    dVar2 = param_4->Yaw;
    dVar1 = param_4->Roll;
    __return_storage_ptr__->Pitch = param_4->Pitch;
    __return_storage_ptr__->Yaw = dVar2;
    __return_storage_ptr__->Roll = dVar1;
    return __return_storage_ptr__;
  }
  if (*param_2 != (FName)0x0) {
    TryGetBlackboardKeyValue<UBlackboardKeyType_Rotator>
              (&local_28,(UBlackboardComponent *)param_1->_padding_,param_2,param_3);
    if (local_28.bIsSet != false) {
      __return_storage_ptr__->Pitch = local_28.TypedValue.Pitch;
      __return_storage_ptr__->Yaw = local_28.TypedValue.Yaw;
      __return_storage_ptr__->Roll = local_28.TypedValue.Roll;
      return __return_storage_ptr__;
    }
  }
  dVar2 = param_4->Yaw;
  dVar1 = param_4->Roll;
  __return_storage_ptr__->Pitch = param_4->Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// GetValue<UBlackboardKeyType_Rotator> @ 146eb5d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Rotator>
          (TRotator<double> *__return_storage_ptr__,UBlackboardComponent *param_1,FName *param_2,
          FKey *param_3,TRotator<double> *param_4)

{
  double dVar1;
  double dVar2;
  TOptional<UE::Math::TRotator<double>_> local_28;
  
  if (*param_2 != (FName)0x0) {
    TryGetBlackboardKeyValue<UBlackboardKeyType_Rotator>(&local_28,param_1,param_2,param_3);
    if (local_28.bIsSet != false) {
      __return_storage_ptr__->Pitch = local_28.TypedValue.Pitch;
      __return_storage_ptr__->Yaw = local_28.TypedValue.Yaw;
      __return_storage_ptr__->Roll = local_28.TypedValue.Roll;
      return __return_storage_ptr__;
    }
  }
  dVar2 = param_4->Yaw;
  dVar1 = param_4->Roll;
  __return_storage_ptr__->Pitch = param_4->Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// GetValue<UBlackboardKeyType_String> @ 146eb5f40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __cdecl
FBlackboard::GetValue<UBlackboardKeyType_String>
          (FString *__return_storage_ptr__,UBehaviorTreeComponent *param_1,FName *param_2,
          FKey *param_3,FString *param_4)

{
  TOptional<FString>_u_0 local_18;
  
  if ((((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) ||
      (*param_2 == (FName)0x0)) ||
     (TryGetBlackboardKeyValue<UBlackboardKeyType_String>
                ((TOptional<FString> *)&local_18.TypedValue,
                 (UBlackboardComponent *)param_1->_padding_,param_2,param_3),
     local_18.TypedValue.Data.ArrayMax == -1)) {
    ::FString::FString(__return_storage_ptr__,param_4);
  }
  else {
    ::FString::FString(__return_storage_ptr__,&local_18.TypedValue);
    if ((local_18.TypedValue.Data.ArrayMax != -1) &&
       (local_18.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetValue<UBlackboardKeyType_String> @ 146eb5fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __cdecl
FBlackboard::GetValue<UBlackboardKeyType_String>
          (FString *__return_storage_ptr__,UBlackboardComponent *param_1,FName *param_2,
          FKey *param_3,FString *param_4)

{
  TOptional<FString>_u_0 local_18;
  
  if ((*param_2 == (FName)0x0) ||
     (TryGetBlackboardKeyValue<UBlackboardKeyType_String>
                ((TOptional<FString> *)&local_18.TypedValue,param_1,param_2,param_3),
     local_18.TypedValue.Data.ArrayMax == -1)) {
    ::FString::FString(__return_storage_ptr__,param_4);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,&local_18.TypedValue);
  if (local_18.TypedValue.Data.ArrayMax == -1) {
    return __return_storage_ptr__;
  }
  if (local_18.TypedValue.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetValue<UBlackboardKeyType_Vector> @ 146eb6440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Vector>
          (TVector<double> *__return_storage_ptr__,UBehaviorTreeComponent *param_1,FName *param_2,
          FKey *param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  TVector<double>_u_0 local_28;
  char local_10;
  
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    dVar2 = (param_4->field0_0x0)._s_0.Y;
    dVar1 = (param_4->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  if (*param_2 != (FName)0x0) {
    TryGetBlackboardKeyValue<UBlackboardKeyType_Vector>
              ((TOptional<UE::Math::TVector<double>_> *)&local_28._s_0,
               (UBlackboardComponent *)param_1->_padding_,param_2,param_3);
    if (local_10 != '\0') {
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_28._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = local_28._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z;
      return __return_storage_ptr__;
    }
  }
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetValue<UBlackboardKeyType_Vector> @ 146eb64d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __cdecl
FBlackboard::GetValue<UBlackboardKeyType_Vector>
          (TVector<double> *__return_storage_ptr__,UBlackboardComponent *param_1,FName *param_2,
          FKey *param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  TVector<double>_u_0 local_28;
  char local_10;
  
  if (*param_2 != (FName)0x0) {
    TryGetBlackboardKeyValue<UBlackboardKeyType_Vector>
              ((TOptional<UE::Math::TVector<double>_> *)&local_28._s_0,param_1,param_2,param_3);
    if (local_10 != '\0') {
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_28._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = local_28._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z;
      return __return_storage_ptr__;
    }
  }
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// SetBlackboardKeyValue<UBlackboardKeyType_Bool,FValueOrBBKey_Bool> @ 146ebf1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __cdecl
FBlackboard::SetBlackboardKeyValue<UBlackboardKeyType_Bool,FValueOrBBKey_Bool>
          (UBehaviorTreeComponent *param_1,FBlackboardKeySelector *param_2,
          FValueOrBBKey_Bool *param_3)

{
  uint uVar1;
  UBlackboardComponent *this;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  Type TVar5;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this != (UBlackboardComponent *)0x0) {
    uVar1 = param_2->SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      TVar5 = (*pcVar2)();
      return TVar5;
    }
    if ((short)uVar1 != -1) {
      bVar3 = GetValue<UBlackboardKeyType_Bool>
                        (this,(FName *)param_3,(FKey *)&param_3->_padding_,&param_3->DefaultValue);
      uVar1 = param_2->SelectedKeyID;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4
         )) {
        pcVar2 = (code *)swi(3);
        TVar5 = (*pcVar2)();
        return TVar5;
      }
      UBlackboardComponent::SetValue<UBlackboardKeyType_Bool>(this,(FKey)(ushort)uVar1,bVar3);
      return Succeeded;
    }
  }
  return Failed;
}

// SetBlackboardKeyValue<UBlackboardKeyType_Class,FValueOrBBKey_Class> @ 146ebf2e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __cdecl
FBlackboard::SetBlackboardKeyValue<UBlackboardKeyType_Class,FValueOrBBKey_Class>
          (UBehaviorTreeComponent *param_1,FBlackboardKeySelector *param_2,
          FValueOrBBKey_Class *param_3)

{
  uint uVar1;
  UBlackboardComponent *this;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  UClass *pUVar5;
  TObjectPtr<UClass>_u_0 local_res8;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this != (UBlackboardComponent *)0x0) {
    uVar1 = param_2->SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
    if ((short)uVar1 != -1) {
      local_res8 = (param_3->DefaultValue).field0_0x0;
      pUVar5 = GetValue<UBlackboardKeyType_Class>
                         (this,(FName *)param_3,(FKey *)&param_3->_padding_,&local_res8.DebugPtr);
      uVar1 = param_2->SelectedKeyID;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        TVar4 = (*pcVar2)();
        return TVar4;
      }
      UBlackboardComponent::SetValue<UBlackboardKeyType_Class>(this,(FKey)(ushort)uVar1,pUVar5);
      return Succeeded;
    }
  }
  return Failed;
}

// SetBlackboardKeyValue<UBlackboardKeyType_Enum,FValueOrBBKey_Enum> @ 146ebf3e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __cdecl
FBlackboard::SetBlackboardKeyValue<UBlackboardKeyType_Enum,FValueOrBBKey_Enum>
          (UBehaviorTreeComponent *param_1,FBlackboardKeySelector *param_2,
          FValueOrBBKey_Enum *param_3)

{
  uint uVar1;
  UBlackboardComponent *this;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  Type TVar5;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this != (UBlackboardComponent *)0x0) {
    uVar1 = param_2->SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      TVar5 = (*pcVar2)();
      return TVar5;
    }
    if ((short)uVar1 != -1) {
      uVar4 = GetValue<UBlackboardKeyType_Enum>
                        (this,(FName *)param_3,(FKey *)&param_3->_padding_,&param_3->DefaultValue);
      uVar1 = param_2->SelectedKeyID;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        TVar5 = (*pcVar2)();
        return TVar5;
      }
      UBlackboardComponent::SetValue<UBlackboardKeyType_Enum>(this,(FKey)(ushort)uVar1,uVar4);
      return Succeeded;
    }
  }
  return Failed;
}

// SetBlackboardKeyValue<UBlackboardKeyType_Float,FValueOrBBKey_Float> @ 146ebf4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __cdecl
FBlackboard::SetBlackboardKeyValue<UBlackboardKeyType_Float,FValueOrBBKey_Float>
          (UBehaviorTreeComponent *param_1,FBlackboardKeySelector *param_2,
          FValueOrBBKey_Float *param_3)

{
  uint uVar1;
  UBlackboardComponent *this;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  float fVar5;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this != (UBlackboardComponent *)0x0) {
    uVar1 = param_2->SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
    if ((short)uVar1 != -1) {
      fVar5 = GetValue<UBlackboardKeyType_Float>
                        (this,(FName *)param_3,(FKey *)&param_3->_padding_,&param_3->DefaultValue);
      uVar1 = param_2->SelectedKeyID;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        TVar4 = (*pcVar2)();
        return TVar4;
      }
      UBlackboardComponent::SetValue<UBlackboardKeyType_Float>(this,(FKey)(ushort)uVar1,fVar5);
      return Succeeded;
    }
  }
  return Failed;
}

// SetBlackboardKeyValue<UBlackboardKeyType_Int,FValueOrBBKey_Int32> @ 146ebf5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __cdecl
FBlackboard::SetBlackboardKeyValue<UBlackboardKeyType_Int,FValueOrBBKey_Int32>
          (UBehaviorTreeComponent *param_1,FBlackboardKeySelector *param_2,
          FValueOrBBKey_Int32 *param_3)

{
  uint uVar1;
  UBlackboardComponent *this;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  int iVar5;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this != (UBlackboardComponent *)0x0) {
    uVar1 = param_2->SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
    if ((short)uVar1 != -1) {
      iVar5 = GetValue<UBlackboardKeyType_Int>
                        (this,(FName *)param_3,(FKey *)&param_3->_padding_,&param_3->DefaultValue);
      uVar1 = param_2->SelectedKeyID;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        TVar4 = (*pcVar2)();
        return TVar4;
      }
      UBlackboardComponent::SetValue<UBlackboardKeyType_Int>(this,(FKey)(ushort)uVar1,iVar5);
      return Succeeded;
    }
  }
  return Failed;
}

// SetBlackboardKeyValue<UBlackboardKeyType_Name,FValueOrBBKey_Name> @ 146ebf6e0

/* WARNING: Removing unreachable block (ram,0x000146ebf77d) */
/* WARNING: Removing unreachable block (ram,0x000146ebf7a2) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __cdecl
FBlackboard::SetBlackboardKeyValue<UBlackboardKeyType_Name,FValueOrBBKey_Name>
          (UBehaviorTreeComponent *param_1,FBlackboardKeySelector *param_2,
          FValueOrBBKey_Name *param_3)

{
  uint uVar1;
  UBlackboardComponent *this;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FName local_res8;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this != (UBlackboardComponent *)0x0) {
    uVar1 = param_2->SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
    if ((short)uVar1 != -1) {
      if ((*(longlong *)param_3 == 0) ||
         (TryGetBlackboardKeyValue<UBlackboardKeyType_Name>
                    ((UBlackboardComponent *)&local_res8,(FName *)this,(FKey *)param_3),
         local_res8.ComparisonIndex.Value.Value == 0xffffffff)) {
        local_res8 = param_3->DefaultValue;
      }
      uVar1 = param_2->SelectedKeyID;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        TVar4 = (*pcVar2)();
        return TVar4;
      }
      UBlackboardComponent::SetValue<UBlackboardKeyType_Name>(this,(FKey)(ushort)uVar1,local_res8);
      return Succeeded;
    }
  }
  return Failed;
}

// SetBlackboardKeyValue<UBlackboardKeyType_Object,FValueOrBBKey_Object> @ 146ebf820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __cdecl
FBlackboard::SetBlackboardKeyValue<UBlackboardKeyType_Object,FValueOrBBKey_Object>
          (UBehaviorTreeComponent *param_1,FBlackboardKeySelector *param_2,
          FValueOrBBKey_Object *param_3)

{
  uint uVar1;
  UBlackboardComponent *this;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  UObject *pUVar5;
  TObjectPtr<UObject>_u_0 local_res8;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this != (UBlackboardComponent *)0x0) {
    uVar1 = param_2->SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
    if ((short)uVar1 != -1) {
      local_res8 = (param_3->DefaultValue).field0_0x0;
      pUVar5 = GetValue<UBlackboardKeyType_Object>
                         (this,(FName *)param_3,(FKey *)&param_3->_padding_,&local_res8.DebugPtr);
      uVar1 = param_2->SelectedKeyID;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        TVar4 = (*pcVar2)();
        return TVar4;
      }
      UBlackboardComponent::SetValue<UBlackboardKeyType_Object>(this,(FKey)(ushort)uVar1,pUVar5);
      return Succeeded;
    }
  }
  return Failed;
}

// SetBlackboardKeyValue<UBlackboardKeyType_Rotator,FValueOrBBKey_Rotator> @ 146ebf920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __cdecl
FBlackboard::SetBlackboardKeyValue<UBlackboardKeyType_Rotator,FValueOrBBKey_Rotator>
          (UBehaviorTreeComponent *param_1,FBlackboardKeySelector *param_2,
          FValueOrBBKey_Rotator *param_3)

{
  double dVar1;
  uint uVar2;
  UBlackboardComponent *this;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double local_58;
  double dStack_50;
  TRotator<double> local_48;
  TOptional<UE::Math::TRotator<double>_> local_28;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this != (UBlackboardComponent *)0x0) {
    uVar2 = param_2->SelectedKeyID;
    if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      TVar5 = (*pcVar3)();
      return TVar5;
    }
    if ((short)uVar2 != -1) {
      if ((param_3->_padding_ == 0) ||
         (TryGetBlackboardKeyValue<UBlackboardKeyType_Rotator>
                    (&local_28,this,(FName *)param_3,(FKey *)&param_3->_padding_),
         local_28.bIsSet == false)) {
        local_58 = (param_3->DefaultValue).Pitch;
        dStack_50 = (param_3->DefaultValue).Yaw;
        dVar1 = (param_3->DefaultValue).Roll;
        uVar6 = SUB84(dVar1,0);
        uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      else {
        local_58 = local_28.TypedValue.Pitch;
        dStack_50 = local_28.TypedValue.Yaw;
        uVar6 = SUB84(local_28.TypedValue.Roll,0);
        uVar7 = (undefined4)((ulonglong)local_28.TypedValue.Roll >> 0x20);
      }
      uVar2 = param_2->SelectedKeyID;
      if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4
         )) {
        pcVar3 = (code *)swi(3);
        TVar5 = (*pcVar3)();
        return TVar5;
      }
      local_48.Pitch = local_58;
      local_48.Yaw = dStack_50;
      local_48.Roll = (double)CONCAT44(uVar7,uVar6);
      UBlackboardComponent::SetValue<UBlackboardKeyType_Rotator>(this,(FKey)(ushort)uVar2,&local_48)
      ;
      return Succeeded;
    }
  }
  return Failed;
}

// SetBlackboardKeyValue<UBlackboardKeyType_String,FValueOrBBKey_String> @ 146ebfa80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __cdecl
FBlackboard::SetBlackboardKeyValue<UBlackboardKeyType_String,FValueOrBBKey_String>
          (UBehaviorTreeComponent *param_1,FBlackboardKeySelector *param_2,
          FValueOrBBKey_String *param_3)

{
  uint uVar1;
  UBlackboardComponent *this;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FString *pFVar5;
  FString local_18;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this != (UBlackboardComponent *)0x0) {
    uVar1 = param_2->SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
    if ((short)uVar1 != -1) {
      pFVar5 = FValueOrBBKey_String::GetValue(param_3,&local_18,this);
      uVar1 = param_2->SelectedKeyID;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        TVar4 = (*pcVar2)();
        return TVar4;
      }
      UBlackboardComponent::SetValue<UBlackboardKeyType_String>(this,(FKey)(ushort)uVar1,pFVar5);
      return Succeeded;
    }
  }
  return Failed;
}

// SetBlackboardKeyValue<UBlackboardKeyType_Struct,FValueOrBBKey_Struct> @ 146ebfb70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __cdecl
FBlackboard::SetBlackboardKeyValue<UBlackboardKeyType_Struct,FValueOrBBKey_Struct>
          (UBehaviorTreeComponent *param_1,FBlackboardKeySelector *param_2,
          FValueOrBBKey_Struct *param_3)

{
  uint uVar1;
  UBlackboardComponent *this;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FConstStructView local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  FConstStructView local_28 [2];
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this != (UBlackboardComponent *)0x0) {
    uVar1 = param_2->SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5))
    {
      pcVar4 = (code *)swi(3);
      TVar6 = (*pcVar4)();
      return TVar6;
    }
    if ((short)uVar1 != -1) {
      pUVar2 = (param_3->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
      puVar3 = (param_3->DefaultValue).StructMemory;
      if (((param_3->_padding_ == 0) ||
          (TryGetBlackboardKeyStruct
                     (&local_48,this,(FName *)param_3,(FKey *)&param_3->_padding_,pUVar2),
          CONCAT44(local_48.StructMemory._4_4_,local_48.StructMemory._0_4_) == 0)) ||
         (uVar7 = local_48.ScriptStruct._0_4_, uVar8 = local_48.ScriptStruct._4_4_,
         uVar9 = local_48.StructMemory._0_4_, uVar10 = local_48.StructMemory._4_4_,
         CONCAT44(local_48.ScriptStruct._4_4_,local_48.ScriptStruct._0_4_) == 0)) {
        local_38._0_4_ = SUB84(pUVar2,0);
        local_38._4_4_ = (undefined4)((ulonglong)pUVar2 >> 0x20);
        uStack_30._0_4_ = SUB84(puVar3,0);
        uStack_30._4_4_ = (undefined4)((ulonglong)puVar3 >> 0x20);
        uVar7 = (undefined4)local_38;
        uVar8 = local_38._4_4_;
        uVar9 = (undefined4)uStack_30;
        uVar10 = uStack_30._4_4_;
        local_38 = pUVar2;
        uStack_30 = puVar3;
      }
      uVar1 = param_2->SelectedKeyID;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5
         )) {
        pcVar4 = (code *)swi(3);
        TVar6 = (*pcVar4)();
        return TVar6;
      }
      local_28[0].ScriptStruct._0_4_ = uVar7;
      local_28[0].ScriptStruct._4_4_ = uVar8;
      local_28[0].StructMemory._0_4_ = uVar9;
      local_28[0].StructMemory._4_4_ = uVar10;
      UBlackboardComponent::SetValue<UBlackboardKeyType_Struct>(this,(FKey)(ushort)uVar1,local_28);
      return Succeeded;
    }
  }
  return Failed;
}

// SetBlackboardKeyValue<UBlackboardKeyType_Vector,FValueOrBBKey_Vector> @ 146ebfcc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __cdecl
FBlackboard::SetBlackboardKeyValue<UBlackboardKeyType_Vector,FValueOrBBKey_Vector>
          (UBehaviorTreeComponent *param_1,FBlackboardKeySelector *param_2,
          FValueOrBBKey_Vector *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  UBlackboardComponent *this;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double local_58;
  double dStack_50;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  char local_10;
  
  this = (UBlackboardComponent *)param_1->_padding_;
  if (this != (UBlackboardComponent *)0x0) {
    uVar2 = param_2->SelectedKeyID;
    if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      TVar5 = (*pcVar3)();
      return TVar5;
    }
    if ((short)uVar2 != -1) {
      if ((param_3->_padding_ == 0) ||
         (TryGetBlackboardKeyValue<UBlackboardKeyType_Vector>
                    ((TOptional<UE::Math::TVector<double>_> *)&local_28._s_0,this,(FName *)param_3,
                     (FKey *)&param_3->_padding_), local_10 == '\0')) {
        local_58 = (param_3->DefaultValue).field0_0x0._s_0.X;
        dStack_50 = (param_3->DefaultValue).field0_0x0._s_0.Y;
        uVar1 = *(undefined8 *)((longlong)&(param_3->DefaultValue).field0_0x0 + 0x10);
        uVar6 = (undefined4)uVar1;
        uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
      }
      else {
        local_58 = local_28._s_0.X;
        dStack_50 = local_28._s_0.Y;
        uVar6 = SUB84(local_28._s_0.Z,0);
        uVar7 = (undefined4)((ulonglong)local_28._16_8_ >> 0x20);
      }
      uVar2 = param_2->SelectedKeyID;
      if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4
         )) {
        pcVar3 = (code *)swi(3);
        TVar5 = (*pcVar3)();
        return TVar5;
      }
      local_48._s_0.X = local_58;
      local_48._s_0.Y = dStack_50;
      local_48._s_0.Z = (double)CONCAT44(uVar7,uVar6);
      UBlackboardComponent::SetValue<UBlackboardKeyType_Vector>
                (this,(FKey)(ushort)uVar2,(TVector<double> *)&local_48._s_0);
      return Succeeded;
    }
  }
  return Failed;
}

// TryGetBlackboardKeyValue<UBlackboardKeyType_Bool> @ 146ec3380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<bool> __cdecl
FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Bool>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3)

{
  int iVar1;
  UBlackboardKeyType *pUVar2;
  bool bVar3;
  FBlackboardEntry *pFVar4;
  UClass *pUVar5;
  FKey FVar6;
  UClass *pUVar7;
  ushort *in_R9;
  FName local_res10;
  
  FVar6.Key = *in_R9;
  if (FVar6.Key == 0xffff) {
    if (param_2[0x1a] == (FName)0x0) {
      FVar6.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID
                ((UBlackboardData *)param_2[0x1a],&local_res10,(EKeyLookupMode)param_3);
      FVar6.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    *in_R9 = FVar6.Key;
  }
  if (param_2[0x1a] == (FName)0x0) {
    pUVar7 = (UClass *)0x0;
LAB_146ec3411:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146ec3429;
    if (pUVar7 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
      goto LAB_146ec342e;
    }
  }
  else {
    pFVar4 = UBlackboardData::GetKey((UBlackboardData *)param_2[0x1a],FVar6);
    if ((pFVar4 == (FBlackboardEntry *)0x0) ||
       (pUVar2 = (pFVar4->KeyType).field0_0x0.DebugPtr, pUVar2 == (UBlackboardKeyType *)0x0)) {
      pUVar7 = (UClass *)0x0;
    }
    else {
      pUVar7 = (UClass *)pUVar2->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      goto LAB_146ec3411;
    }
LAB_146ec3429:
    if (pUVar7 != (UClass *)0x0) {
LAB_146ec342e:
      pUVar5 = UBlackboardKeyType::StaticClass();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_146ec345e;
      }
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_146ec345e:
  pUVar5 = UBlackboardKeyType_Bool::StaticClass();
  if (pUVar7 == pUVar5) {
    bVar3 = UBlackboardComponent::GetValue<UBlackboardKeyType_Bool>
                      ((UBlackboardComponent *)param_2,(FKey)*in_R9);
    *(bool *)&param_1->_padding_ = bVar3;
    *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 1;
  }
  else {
    *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 0;
  }
  return SUB82(param_1,0);
}

// TryGetBlackboardKeyValue<UBlackboardKeyType_Class> @ 146ec34a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<UClass_*> * __cdecl
FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Class>
          (TOptional<UClass_*> *__return_storage_ptr__,UBlackboardComponent *param_1,FName *param_2,
          FKey *param_3)

{
  int iVar1;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FKey FVar8;
  FName local_res10;
  
  FVar8 = (FKey)param_3->Key;
  if (FVar8.Key == 0xffff) {
    pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar8.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&local_res10,(EKeyLookupMode)param_2);
      FVar8.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar8;
  }
  pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar7 = (UClass *)0x0;
LAB_146ec3531:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146ec3549;
    if (pUVar7 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
      goto LAB_146ec354e;
    }
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar2,FVar8);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar7 = (UClass *)0x0;
    }
    else {
      pUVar7 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      goto LAB_146ec3531;
    }
LAB_146ec3549:
    if (pUVar7 != (UClass *)0x0) {
LAB_146ec354e:
      pUVar6 = UBlackboardKeyType::StaticClass();
      if (pUVar6 != (UClass *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) goto LAB_146ec357e;
      }
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_146ec357e:
  pUVar6 = UBlackboardKeyType_Class::StaticClass();
  if (pUVar7 == pUVar6) {
    pUVar7 = UBlackboardComponent::GetValue<UBlackboardKeyType_Class>(param_1,(FKey)param_3->Key);
    __return_storage_ptr__->TypedValue = pUVar7;
    __return_storage_ptr__->bIsSet = true;
  }
  else {
    __return_storage_ptr__->bIsSet = false;
  }
  return __return_storage_ptr__;
}

// TryGetBlackboardKeyValue<UBlackboardKeyType_Enum> @ 146ec35c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<unsigned_char> __cdecl
FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Enum>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3)

{
  int iVar1;
  UBlackboardKeyType *pUVar2;
  bool bVar3;
  uchar uVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  FKey FVar7;
  UClass *pUVar8;
  ushort *in_R9;
  FName local_res10;
  
  FVar7.Key = *in_R9;
  if (FVar7.Key == 0xffff) {
    if (param_2[0x1a] == (FName)0x0) {
      FVar7.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID
                ((UBlackboardData *)param_2[0x1a],&local_res10,(EKeyLookupMode)param_3);
      FVar7.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    *in_R9 = FVar7.Key;
  }
  if (param_2[0x1a] == (FName)0x0) {
    pUVar8 = (UClass *)0x0;
LAB_146ec3651:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146ec3669;
    if (pUVar8 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      goto LAB_146ec366e;
    }
  }
  else {
    pFVar5 = UBlackboardData::GetKey((UBlackboardData *)param_2[0x1a],FVar7);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar2 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar2 == (UBlackboardKeyType *)0x0)) {
      pUVar8 = (UClass *)0x0;
    }
    else {
      pUVar8 = (UClass *)pUVar2->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      goto LAB_146ec3651;
    }
LAB_146ec3669:
    if (pUVar8 != (UClass *)0x0) {
LAB_146ec366e:
      pUVar6 = UBlackboardKeyType::StaticClass();
      if (pUVar6 != (UClass *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar8->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_146ec369e;
      }
    }
  }
  pUVar8 = (UClass *)0x0;
LAB_146ec369e:
  pUVar6 = UBlackboardKeyType_Enum::StaticClass();
  if (pUVar8 == pUVar6) {
    uVar4 = UBlackboardComponent::GetValue<UBlackboardKeyType_Enum>
                      ((UBlackboardComponent *)param_2,(FKey)*in_R9);
    *(uchar *)&param_1->_padding_ = uVar4;
    *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 1;
  }
  else {
    *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 0;
  }
  return SUB82(param_1,0);
}

// TryGetBlackboardKeyValue<UBlackboardKeyType_Float> @ 146ec36e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<float> __cdecl
FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Float>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3)

{
  int iVar1;
  UBlackboardKeyType *pUVar2;
  bool bVar3;
  FBlackboardEntry *pFVar4;
  UClass *pUVar5;
  FKey FVar6;
  UClass *pUVar7;
  ushort *in_R9;
  float fVar8;
  FName local_res10;
  
  FVar6.Key = *in_R9;
  if (FVar6.Key == 0xffff) {
    if (param_2[0x1a] == (FName)0x0) {
      FVar6.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID
                ((UBlackboardData *)param_2[0x1a],&local_res10,(EKeyLookupMode)param_3);
      FVar6.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    *in_R9 = FVar6.Key;
  }
  if (param_2[0x1a] == (FName)0x0) {
    pUVar7 = (UClass *)0x0;
LAB_146ec3771:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146ec3789;
    if (pUVar7 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
      goto LAB_146ec378e;
    }
  }
  else {
    pFVar4 = UBlackboardData::GetKey((UBlackboardData *)param_2[0x1a],FVar6);
    if ((pFVar4 == (FBlackboardEntry *)0x0) ||
       (pUVar2 = (pFVar4->KeyType).field0_0x0.DebugPtr, pUVar2 == (UBlackboardKeyType *)0x0)) {
      pUVar7 = (UClass *)0x0;
    }
    else {
      pUVar7 = (UClass *)pUVar2->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      goto LAB_146ec3771;
    }
LAB_146ec3789:
    if (pUVar7 != (UClass *)0x0) {
LAB_146ec378e:
      pUVar5 = UBlackboardKeyType::StaticClass();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_146ec37be;
      }
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_146ec37be:
  pUVar5 = UBlackboardKeyType_Float::StaticClass();
  if (pUVar7 == pUVar5) {
    fVar8 = UBlackboardComponent::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_2,(FKey)*in_R9);
    *(float *)&param_1->_padding_ = fVar8;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 1;
  }
  else {
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
  }
  return (TOptional<float>)param_1;
}

// TryGetBlackboardKeyValue<UBlackboardKeyType_Int> @ 146ec3800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<int> __cdecl
FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Int>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3)

{
  UBlackboardKeyType *pUVar1;
  bool bVar2;
  int iVar3;
  FBlackboardEntry *pFVar4;
  UClass *pUVar5;
  FKey FVar6;
  UClass *pUVar7;
  ushort *in_R9;
  FName local_res10;
  
  FVar6.Key = *in_R9;
  if (FVar6.Key == 0xffff) {
    if (param_2[0x1a] == (FName)0x0) {
      FVar6.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID
                ((UBlackboardData *)param_2[0x1a],&local_res10,(EKeyLookupMode)param_3);
      FVar6.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    *in_R9 = FVar6.Key;
  }
  if (param_2[0x1a] == (FName)0x0) {
    pUVar7 = (UClass *)0x0;
LAB_146ec3891:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146ec38a9;
    if (pUVar7 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
      goto LAB_146ec38ae;
    }
  }
  else {
    pFVar4 = UBlackboardData::GetKey((UBlackboardData *)param_2[0x1a],FVar6);
    if ((pFVar4 == (FBlackboardEntry *)0x0) ||
       (pUVar1 = (pFVar4->KeyType).field0_0x0.DebugPtr, pUVar1 == (UBlackboardKeyType *)0x0)) {
      pUVar7 = (UClass *)0x0;
    }
    else {
      pUVar7 = (UClass *)pUVar1->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      goto LAB_146ec3891;
    }
LAB_146ec38a9:
    if (pUVar7 != (UClass *)0x0) {
LAB_146ec38ae:
      pUVar5 = UBlackboardKeyType::StaticClass();
      if (pUVar5 != (UClass *)0x0) {
        iVar3 = (int)pUVar5->_padding_;
        if (((int)pUVar7->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_146ec38de;
      }
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_146ec38de:
  pUVar5 = UBlackboardKeyType_Int::StaticClass();
  if (pUVar7 == pUVar5) {
    iVar3 = UBlackboardComponent::GetValue<UBlackboardKeyType_Int>
                      ((UBlackboardComponent *)param_2,(FKey)*in_R9);
    *(int *)&param_1->_padding_ = iVar3;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 1;
  }
  else {
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
  }
  return (TOptional<int>)param_1;
}

// TryGetBlackboardKeyValue<UBlackboardKeyType_Name> @ 146ec3920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<FName> __cdecl
FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Name>
          (UBlackboardComponent *param_1,FName *param_2,FKey *param_3)

{
  int iVar1;
  UBlackboardKeyType *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBlackboardEntry *pFVar6;
  UClass *pUVar7;
  FName FVar8;
  TOptional<FName> TVar9;
  FKey FVar10;
  UClass *pUVar11;
  ushort *in_R9;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  
  FVar10.Key = *in_R9;
  if (FVar10.Key == 0xffff) {
    if (param_2[0x1a] == (FName)0x0) {
      FVar10.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID
                ((UBlackboardData *)param_2[0x1a],local_res10,(EKeyLookupMode)param_3);
      FVar10.Key = (ushort)local_res10[0].ComparisonIndex.Value;
    }
    *in_R9 = FVar10.Key;
  }
  if (param_2[0x1a] == (FName)0x0) {
    pUVar11 = (UClass *)0x0;
LAB_146ec39a9:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146ec39c1;
    if (pUVar11 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
      goto LAB_146ec39c6;
    }
  }
  else {
    pFVar6 = UBlackboardData::GetKey((UBlackboardData *)param_2[0x1a],FVar10);
    if ((pFVar6 == (FBlackboardEntry *)0x0) ||
       (pUVar2 = (pFVar6->KeyType).field0_0x0.DebugPtr, pUVar2 == (UBlackboardKeyType *)0x0)) {
      pUVar11 = (UClass *)0x0;
    }
    else {
      pUVar11 = (UClass *)pUVar2->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar11 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      goto LAB_146ec39a9;
    }
LAB_146ec39c1:
    if (pUVar11 != (UClass *)0x0) {
LAB_146ec39c6:
      pUVar7 = UBlackboardKeyType::StaticClass();
      if (pUVar7 != (UClass *)0x0) {
        iVar1 = (int)pUVar7->_padding_;
        if (((int)pUVar11->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_146ec39f6;
      }
    }
  }
  pUVar11 = (UClass *)0x0;
LAB_146ec39f6:
  pUVar7 = UBlackboardKeyType_Name::StaticClass();
  if (pUVar11 == pUVar7) {
    FVar8 = UBlackboardComponent::GetValue<UBlackboardKeyType_Name>
                      ((UBlackboardComponent *)param_2,(FKey)(ushort)local_res20);
    lVar3 = *(longlong *)FVar8;
    param_1->_padding_ = lVar3;
    if ((int)lVar3 == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar9.field0_0x0 = (TOptional<FName>_u_0)(*pcVar4)();
        return (TOptional<FName>)TVar9.field0_0x0;
      }
    }
  }
  else {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0;
  }
  return (TOptional<FName>)(TOptional<FName>_u_0)param_1;
}

// TryGetBlackboardKeyValue<UBlackboardKeyType_Object> @ 146ec3a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<UObject_*> * __cdecl
FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Object>
          (TOptional<UObject_*> *__return_storage_ptr__,UBlackboardComponent *param_1,FName *param_2
          ,FKey *param_3)

{
  int iVar1;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FKey FVar8;
  UClass *pUVar9;
  FName local_res10;
  
  FVar8 = (FKey)param_3->Key;
  if (FVar8.Key == 0xffff) {
    pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar8.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&local_res10,(EKeyLookupMode)param_2);
      FVar8.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar8;
  }
  pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar9 = (UClass *)0x0;
LAB_146ec3b11:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146ec3b29;
    if (pUVar9 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
      goto LAB_146ec3b2e;
    }
  }
  else {
    pFVar5 = UBlackboardData::GetKey(pUVar2,FVar8);
    if ((pFVar5 == (FBlackboardEntry *)0x0) ||
       (pUVar3 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar3 == (UBlackboardKeyType *)0x0)) {
      pUVar9 = (UClass *)0x0;
    }
    else {
      pUVar9 = (UClass *)pUVar3->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      goto LAB_146ec3b11;
    }
LAB_146ec3b29:
    if (pUVar9 != (UClass *)0x0) {
LAB_146ec3b2e:
      pUVar6 = UBlackboardKeyType::StaticClass();
      if (pUVar6 != (UClass *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar9->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) goto LAB_146ec3b5e;
      }
    }
  }
  pUVar9 = (UClass *)0x0;
LAB_146ec3b5e:
  pUVar6 = UBlackboardKeyType_Object::StaticClass();
  if (pUVar9 == pUVar6) {
    pUVar7 = UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(param_1,(FKey)param_3->Key);
    __return_storage_ptr__->TypedValue = pUVar7;
    __return_storage_ptr__->bIsSet = true;
  }
  else {
    __return_storage_ptr__->bIsSet = false;
  }
  return __return_storage_ptr__;
}

// TryGetBlackboardKeyValue<UBlackboardKeyType_Rotator> @ 146ec3ba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<UE::Math::TRotator<double>_> * __cdecl
FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Rotator>
          (TOptional<UE::Math::TRotator<double>_> *__return_storage_ptr__,
          UBlackboardComponent *param_1,FName *param_2,FKey *param_3)

{
  double dVar1;
  int iVar2;
  UBlackboardData *pUVar3;
  UBlackboardKeyType *pUVar4;
  double dVar5;
  bool bVar6;
  FBlackboardEntry *pFVar7;
  UClass *pUVar8;
  TRotator<double> *pTVar9;
  FKey FVar10;
  UClass *pUVar11;
  FName local_res10;
  TRotator<double> local_28;
  
  FVar10 = (FKey)param_3->Key;
  if (FVar10.Key == 0xffff) {
    pUVar3 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar3 == (UBlackboardData *)0x0) {
      FVar10.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar3,&local_res10,(EKeyLookupMode)param_2);
      FVar10.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar10;
  }
  pUVar3 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar3 == (UBlackboardData *)0x0) {
    pUVar11 = (UClass *)0x0;
LAB_146ec3c31:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146ec3c49;
    if (pUVar11 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
      goto LAB_146ec3c4e;
    }
  }
  else {
    pFVar7 = UBlackboardData::GetKey(pUVar3,FVar10);
    if ((pFVar7 == (FBlackboardEntry *)0x0) ||
       (pUVar4 = (pFVar7->KeyType).field0_0x0.DebugPtr, pUVar4 == (UBlackboardKeyType *)0x0)) {
      pUVar11 = (UClass *)0x0;
    }
    else {
      pUVar11 = (UClass *)pUVar4->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar11 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      goto LAB_146ec3c31;
    }
LAB_146ec3c49:
    if (pUVar11 != (UClass *)0x0) {
LAB_146ec3c4e:
      pUVar8 = UBlackboardKeyType::StaticClass();
      if (pUVar8 != (UClass *)0x0) {
        iVar2 = (int)pUVar8->_padding_;
        if (((int)pUVar11->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) goto LAB_146ec3c7e;
      }
    }
  }
  pUVar11 = (UClass *)0x0;
LAB_146ec3c7e:
  pUVar8 = UBlackboardKeyType_Rotator::StaticClass();
  if (pUVar11 == pUVar8) {
    pTVar9 = UBlackboardComponent::GetValue<UBlackboardKeyType_Rotator>
                       (param_1,&local_28,(FKey)param_3->Key);
    __return_storage_ptr__->bIsSet = true;
    dVar5 = pTVar9->Yaw;
    dVar1 = pTVar9->Roll;
    (__return_storage_ptr__->TypedValue).Pitch = pTVar9->Pitch;
    (__return_storage_ptr__->TypedValue).Yaw = dVar5;
    (__return_storage_ptr__->TypedValue).Roll = dVar1;
  }
  else {
    __return_storage_ptr__->bIsSet = false;
  }
  return __return_storage_ptr__;
}

// TryGetBlackboardKeyValue<UBlackboardKeyType_String> @ 146ec3ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<FString> * __cdecl
FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_String>
          (TOptional<FString> *__return_storage_ptr__,UBlackboardComponent *param_1,FName *param_2,
          FKey *param_3)

{
  int iVar1;
  UBlackboardData *pUVar2;
  UBlackboardKeyType *pUVar3;
  code *pcVar4;
  bool bVar5;
  FBlackboardEntry *pFVar6;
  UClass *pUVar7;
  FString *pFVar8;
  TOptional<FString> *pTVar9;
  FKey FVar10;
  UClass *pUVar11;
  FName local_res10;
  FString local_28;
  
  FVar10 = (FKey)param_3->Key;
  if (FVar10.Key == 0xffff) {
    pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBlackboardData *)0x0) {
      FVar10.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar2,&local_res10,(EKeyLookupMode)param_2);
      FVar10.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar10;
  }
  pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (UBlackboardData *)0x0) {
    pUVar11 = (UClass *)0x0;
  }
  else {
    pFVar6 = UBlackboardData::GetKey(pUVar2,FVar10);
    pUVar11 = (UClass *)0x0;
    if ((pFVar6 != (FBlackboardEntry *)0x0) &&
       (pUVar3 = (pFVar6->KeyType).field0_0x0.DebugPtr, pUVar3 != (UBlackboardKeyType *)0x0)) {
      pUVar11 = (UClass *)pUVar3->_padding_;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar11 != (UClass *)0x0) goto LAB_146ec3d93;
  }
  else if (pUVar11 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_146ec3d93:
    pUVar7 = UBlackboardKeyType::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar11->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_146ec3dc4;
    }
  }
  pUVar11 = (UClass *)0x0;
LAB_146ec3dc4:
  pUVar7 = UBlackboardKeyType_String::StaticClass();
  if (pUVar11 == pUVar7) {
    pFVar8 = UBlackboardComponent::GetValue<UBlackboardKeyType_String>
                       (param_1,&local_28,(FKey)param_3->Key);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar8->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    if ((*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TOptional<FString> *)(*pcVar4)();
      return pTVar9;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  return __return_storage_ptr__;
}

// TryGetBlackboardKeyValue<UBlackboardKeyType_Vector> @ 146ec3e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<UE::Math::TVector<double>_> * __cdecl
FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Vector>
          (TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__,
          UBlackboardComponent *param_1,FName *param_2,FKey *param_3)

{
  double dVar1;
  int iVar2;
  UBlackboardData *pUVar3;
  UBlackboardKeyType *pUVar4;
  double dVar5;
  bool bVar6;
  FBlackboardEntry *pFVar7;
  UClass *pUVar8;
  TVector<double> *pTVar9;
  FKey FVar10;
  UClass *pUVar11;
  FName local_res10;
  TVector<double> local_28;
  
  FVar10 = (FKey)param_3->Key;
  if (FVar10.Key == 0xffff) {
    pUVar3 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar3 == (UBlackboardData *)0x0) {
      FVar10.Key = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(pUVar3,&local_res10,(EKeyLookupMode)param_2);
      FVar10.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = (ushort)FVar10;
  }
  pUVar3 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar3 == (UBlackboardData *)0x0) {
    pUVar11 = (UClass *)0x0;
LAB_146ec3f11:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146ec3f29;
    if (pUVar11 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
      goto LAB_146ec3f2e;
    }
  }
  else {
    pFVar7 = UBlackboardData::GetKey(pUVar3,FVar10);
    if ((pFVar7 == (FBlackboardEntry *)0x0) ||
       (pUVar4 = (pFVar7->KeyType).field0_0x0.DebugPtr, pUVar4 == (UBlackboardKeyType *)0x0)) {
      pUVar11 = (UClass *)0x0;
    }
    else {
      pUVar11 = (UClass *)pUVar4->_padding_;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar11 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      goto LAB_146ec3f11;
    }
LAB_146ec3f29:
    if (pUVar11 != (UClass *)0x0) {
LAB_146ec3f2e:
      pUVar8 = UBlackboardKeyType::StaticClass();
      if (pUVar8 != (UClass *)0x0) {
        iVar2 = (int)pUVar8->_padding_;
        if (((int)pUVar11->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) goto LAB_146ec3f5e;
      }
    }
  }
  pUVar11 = (UClass *)0x0;
LAB_146ec3f5e:
  pUVar8 = UBlackboardKeyType_Vector::StaticClass();
  if (pUVar11 == pUVar8) {
    pTVar9 = UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
                       (param_1,&local_28,(FKey)param_3->Key);
    __return_storage_ptr__->bIsSet = true;
    dVar5 = (pTVar9->field0_0x0)._s_0.Y;
    dVar1 = (pTVar9->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = (pTVar9->field0_0x0)._s_0.X;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dVar5;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = dVar1;
  }
  else {
    __return_storage_ptr__->bIsSet = false;
  }
  return __return_storage_ptr__;
}

// GetStructValue @ 146eee9f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FConstStructView * __cdecl
FBlackboard::GetStructValue
          (FConstStructView *__return_storage_ptr__,UBehaviorTreeComponent *param_1,FName *param_2,
          FKey *param_3,FConstStructView *param_4)

{
  uchar *puVar1;
  FConstStructView local_18;
  
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    puVar1 = param_4->StructMemory;
    __return_storage_ptr__->ScriptStruct = param_4->ScriptStruct;
    __return_storage_ptr__->StructMemory = puVar1;
    return __return_storage_ptr__;
  }
  if (*param_2 != (FName)0x0) {
    TryGetBlackboardKeyStruct
              (&local_18,(UBlackboardComponent *)param_1->_padding_,param_2,param_3,
               param_4->ScriptStruct);
    if ((local_18.StructMemory != (uchar *)0x0) && (local_18.ScriptStruct != (UScriptStruct *)0x0))
    {
      __return_storage_ptr__->ScriptStruct = local_18.ScriptStruct;
      __return_storage_ptr__->StructMemory = local_18.StructMemory;
      return __return_storage_ptr__;
    }
  }
  puVar1 = param_4->StructMemory;
  __return_storage_ptr__->ScriptStruct = param_4->ScriptStruct;
  __return_storage_ptr__->StructMemory = puVar1;
  return __return_storage_ptr__;
}

// GetStructValue @ 146eeea80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FConstStructView * __cdecl
FBlackboard::GetStructValue
          (FConstStructView *__return_storage_ptr__,UBlackboardComponent *param_1,FName *param_2,
          FKey *param_3,FConstStructView *param_4)

{
  uchar *puVar1;
  FConstStructView local_18;
  
  if (*param_2 != (FName)0x0) {
    TryGetBlackboardKeyStruct(&local_18,param_1,param_2,param_3,param_4->ScriptStruct);
    if ((local_18.StructMemory != (uchar *)0x0) && (local_18.ScriptStruct != (UScriptStruct *)0x0))
    {
      __return_storage_ptr__->ScriptStruct = local_18.ScriptStruct;
      __return_storage_ptr__->StructMemory = local_18.StructMemory;
      return __return_storage_ptr__;
    }
  }
  puVar1 = param_4->StructMemory;
  __return_storage_ptr__->ScriptStruct = param_4->ScriptStruct;
  __return_storage_ptr__->StructMemory = puVar1;
  return __return_storage_ptr__;
}

// TryGetBlackboardKeyStruct @ 146f02c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FConstStructView * __cdecl
FBlackboard::TryGetBlackboardKeyStruct
          (FConstStructView *__return_storage_ptr__,UBlackboardComponent *param_1,FName *param_2,
          FKey *param_3,UScriptStruct *param_4)

{
  undefined1 uVar1;
  FKey FVar2;
  UBlackboardData *pUVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  FBlackboardEntry *pFVar7;
  UClass *pUVar8;
  FConstStructView *pFVar9;
  uchar *puVar10;
  UBlackboardKeyType *pUVar11;
  FName local_res10;
  UScriptStruct *local_28;
  uchar *puStack_20;
  
  if (param_3->Key == 0xffff) {
    pUVar3 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    uVar6 = 0xffff;
    if (pUVar3 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(pUVar3,&local_res10,(EKeyLookupMode)param_2);
      uVar6 = (ushort)local_res10.ComparisonIndex.Value;
    }
    param_3->Key = uVar6;
  }
  pUVar3 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar3 != (UBlackboardData *)0x0) &&
      (pFVar7 = UBlackboardData::GetKey(pUVar3,(FKey)param_3->Key),
      pFVar7 != (FBlackboardEntry *)0x0)) &&
     ((pFVar7->KeyType).field0_0x0.DebugPtr != (UBlackboardKeyType *)0x0)) {
    pUVar8 = UBlackboardKeyType_Struct::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&pFVar7->KeyType,pUVar8);
    if (((bVar5) &&
        (pUVar11 = (pFVar7->KeyType).field0_0x0.DebugPtr, pUVar11 != (UBlackboardKeyType *)0x0)) &&
       ((UScriptStruct *)pUVar11[1]._padding_ == param_4)) {
      pUVar3 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
      FVar2 = (FKey)param_3->Key;
      if (((pUVar3 != (UBlackboardData *)0x0) &&
          (pFVar7 = UBlackboardData::GetKey(pUVar3,FVar2), pFVar7 != (FBlackboardEntry *)0x0)) &&
         ((pFVar7->KeyType).field0_0x0.DebugPtr != (UBlackboardKeyType *)0x0)) {
        pUVar8 = UBlackboardKeyType_Struct::StaticClass();
        pUVar11 = (pFVar7->KeyType).field0_0x0.DebugPtr;
        if ((UClass *)pUVar11->_padding_ == pUVar8) {
          if (pUVar11->bCreateKeyInstance != '\0') {
            if (((param_1->KeyInstances).ArrayNum <= (int)(uint)FVar2.Key) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FConstStructView *)(*pcVar4)();
              return pFVar9;
            }
            pUVar11 = *(UBlackboardKeyType **)
                       ((param_1->KeyInstances).AllocatorInstance.Data + (ulonglong)FVar2.Key * 8);
          }
          puVar10 = UBlackboardComponent::GetKeyRawData(param_1,FVar2);
          if (puVar10 + (-(uint)(((pFVar7->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0'
                                ) & 4) == (uchar *)0x0) {
            local_28 = UBlackboardKeyType_Struct::InvalidValue.ScriptStruct;
            puStack_20 = UBlackboardKeyType_Struct::InvalidValue.StructMemory;
            __return_storage_ptr__->ScriptStruct = local_28;
            __return_storage_ptr__->StructMemory = puStack_20;
            return __return_storage_ptr__;
          }
          if (pUVar11->bIsInstanced != 0) {
            puVar10 = (uchar *)pUVar11[1]._padding_;
            __return_storage_ptr__->ScriptStruct = (UScriptStruct *)pUVar11[1]._padding_;
            __return_storage_ptr__->StructMemory = puVar10;
            return __return_storage_ptr__;
          }
          __return_storage_ptr__->ScriptStruct = (UScriptStruct *)pUVar11[1]._padding_;
          __return_storage_ptr__->StructMemory =
               puVar10 + (-(uint)(((pFVar7->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance !=
                                 '\0') & 4);
          return __return_storage_ptr__;
        }
      }
      *__return_storage_ptr__ = UBlackboardKeyType_Struct::InvalidValue;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->ScriptStruct = (UScriptStruct *)0x0;
  __return_storage_ptr__->StructMemory = (uchar *)0x0;
  return __return_storage_ptr__;
}

