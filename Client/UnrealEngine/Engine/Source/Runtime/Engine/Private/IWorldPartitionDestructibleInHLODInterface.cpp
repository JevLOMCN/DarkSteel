// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Execute_GetHLODDestructionTag @ 148a8fcf0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

FWorldPartitionHLODDestructionTag * __cdecl
IWorldPartitionDestructibleInHLODInterface::Execute_GetHLODDestructionTag
          (FWorldPartitionHLODDestructionTag *__return_storage_ptr__,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWorldPartitionHLODDestructionTag *pFVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  TObjectPtr<UWorldPartitionDestructibleHLODComponent>_u_0 local_28;
  int local_20;
  undefined1 local_18 [16];
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("O != 0",
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\HLODDestruction.gen.cpp"
                         ,0x70,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWorldPartitionHLODDestructionTag *)(*pcVar1)();
    return pFVar3;
  }
  pUVar6 = *(UClass **)&param_1->field_0x10;
  pUVar4 = UWorldPartitionDestructibleInHLODInterface::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar6,pUVar4);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("O->GetClass()->ImplementsInterface(UWorldPartitionDestructibleInHLODInterface::StaticClass())"
                         ,
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\HLODDestruction.gen.cpp"
                         ,0x71,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWorldPartitionHLODDestructionTag *)(*pcVar1)();
    return pFVar3;
  }
  local_28.DebugPtr = (UWorldPartitionDestructibleHLODComponent *)0x0;
  local_20 = -1;
  pUVar5 = UObject::FindFunction
                     (param_1,NAME_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag)
  ;
  if (pUVar5 == (UFunction *)0x0) {
    pUVar6 = UWorldPartitionDestructibleInHLODInterface::StaticClass();
    puVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)(**(code **)*puVar7)(puVar7,local_18);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)*puVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)*puVar7);
      }
      local_28.DebugPtr = (UWorldPartitionDestructibleHLODComponent *)*puVar7;
      local_20 = *(int *)(puVar7 + 1);
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,&local_28);
  }
  (__return_storage_ptr__->HLODDestructionComponent).field0_0x0.DebugPtr =
       (UWorldPartitionDestructibleHLODComponent *)local_28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.DebugPtr != (UWorldPartitionDestructibleHLODComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  __return_storage_ptr__->ActorIndex = local_20;
  return __return_storage_ptr__;
}

// Execute_SetHLODDestructionTag @ 148a8fe40

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __cdecl
IWorldPartitionDestructibleInHLODInterface::Execute_SetHLODDestructionTag
          (UObject *param_1,FWorldPartitionHLODDestructionTag *param_2)

{
  UWorldPartitionDestructibleHLODComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  TObjectPtr<UWorldPartitionDestructibleHLODComponent>_u_0 local_18;
  int local_10;
  
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\HLODDestruction.gen.cpp"
                       ,0xb8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar6 = *(UClass **)&param_1->field_0x10;
  pUVar4 = UWorldPartitionDestructibleInHLODInterface::StaticClass();
  bVar3 = UClass::ImplementsInterface(pUVar6,pUVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UWorldPartitionDestructibleInHLODInterface::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\HLODDestruction.gen.cpp"
                       ,0xb9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar5 = UObject::FindFunction
                     (param_1,NAME_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag)
  ;
  if (pUVar5 != (UFunction *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_2->HLODDestructionComponent).field0_0x0.DebugPtr,
       pUVar1 != (UWorldPartitionDestructibleHLODComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_18 = (param_2->HLODDestructionComponent).field0_0x0;
    local_10 = param_2->ActorIndex;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,&local_18);
    return;
  }
  pUVar6 = UWorldPartitionDestructibleInHLODInterface::StaticClass();
  plVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7,param_2);
  }
  return;
}

// GetHLODDestructionTag @ 148a953c0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

FWorldPartitionHLODDestructionTag * __thiscall
IWorldPartitionDestructibleInHLODInterface::GetHLODDestructionTag
          (IWorldPartitionDestructibleInHLODInterface *this,
          FWorldPartitionHLODDestructionTag *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FWorldPartitionHLODDestructionTag *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_GetHLODDestructionTag instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\HLODDestruction.gen.cpp"
                     ,0x69,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWorldPartitionHLODDestructionTag *)(*pcVar1)();
    return pFVar3;
  }
  (__return_storage_ptr__->HLODDestructionComponent).field0_0x0.DebugPtr =
       (UWorldPartitionDestructibleHLODComponent *)0x0;
  __return_storage_ptr__->ActorIndex = -1;
  return __return_storage_ptr__;
}

// SetHLODDestructionTag @ 148aa2420

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
IWorldPartitionDestructibleInHLODInterface::SetHLODDestructionTag
          (IWorldPartitionDestructibleInHLODInterface *this,
          FWorldPartitionHLODDestructionTag *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_SetHLODDestructionTag instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\HLODDestruction.gen.cpp"
                     ,0xb3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// execGetHLODDestructionTag @ 148aa5d20

void __cdecl
IWorldPartitionDestructibleInHLODInterface::execGetHLODDestructionTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)param_1)(param_1,local_18);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*puVar1);
  }
  *(undefined8 *)param_3 = *puVar1;
  *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
  return;
}

// execSetHLODDestructionTag @ 148aa5d90

void __cdecl
IWorldPartitionDestructibleInHLODInterface::execSetHLODDestructionTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_18 [16];
  
  local_18[8] = 0xff;
  local_18[9] = 0xff;
  local_18[10] = 0xff;
  local_18[0xb] = 0xff;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar2 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 8))(param_1,puVar2);
  return;
}

