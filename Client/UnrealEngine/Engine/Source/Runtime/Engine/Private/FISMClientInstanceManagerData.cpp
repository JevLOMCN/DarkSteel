// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147285910

UScriptStruct * __cdecl FISMClientInstanceManagerData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FISMClientInstanceManagerData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FISMClientInstanceManagerData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FISMClientInstanceManagerData,(UObject *)pUVar1,
                         L"ISMClientInstanceManagerData");
  }
  return Z_Registration_Info_UScriptStruct_FISMClientInstanceManagerData.OuterSingleton;
}

// SerializePtr<IISMPartitionInstanceManager> @ 14728af40

void __cdecl
FISMClientInstanceManagerData::SerializePtr<IISMPartitionInstanceManager>
          (FArchive *param_1,IISMPartitionInstanceManager **param_2)

{
  longlong *plVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  IISMPartitionInstanceManager *pIVar3;
  char local_res8 [8];
  UObjectBaseUtility *local_res18;
  longlong local_res20;
  
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      }
      else {
        local_res8[0] = *(char *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      if (local_res8[0] == '\x01') {
        pIVar3 = (IISMPartitionInstanceManager *)0x0;
        local_res18 = (UObjectBaseUtility *)0x0;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res18);
        this = local_res18;
        if (local_res18 != (UObjectBaseUtility *)0x0) {
          pUVar2 = UISMPartitionInstanceManager::StaticClass();
          pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
        }
      }
      else {
        pIVar3 = (IISMPartitionInstanceManager *)0x0;
        if (local_res8[0] == '\x02') {
          plVar1 = *(longlong **)&param_1->field_0x8;
          local_res18 = (UObjectBaseUtility *)0x0;
          if ((undefined8 *)*plVar1 + 1 <= (undefined8 *)plVar1[1]) {
            pIVar3 = *(IISMPartitionInstanceManager **)*plVar1;
            *plVar1 = *plVar1 + 8;
            *param_2 = pIVar3;
            return;
          }
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18,8);
            *param_2 = (IISMPartitionInstanceManager *)local_res18;
            return;
          }
          FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_res18);
          *param_2 = (IISMPartitionInstanceManager *)local_res18;
          return;
        }
      }
      *param_2 = pIVar3;
    }
    return;
  }
  if (*param_2 != (IISMPartitionInstanceManager *)0x0) {
    local_res20 = (**(code **)((longlong)**param_2 + 8))();
    if (local_res20 != 0) {
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = '\x01';
      if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      }
      else {
        local_res8[0] = *(char *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res20);
      return;
    }
  }
  local_res20 = 0;
  if ((*param_2 != (IISMPartitionInstanceManager *)0x0) && ((param_1->field_0x29 & 1) == 0)) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = '\x02';
    if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = *(char *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res18 = (UObjectBaseUtility *)*param_2;
    if (*plVar1 + 8U <= (ulonglong)plVar1[1]) {
      *plVar1 = *plVar1 + 8;
      return;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18,8);
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_res18);
    return;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = '\0';
  if (*plVar1 + 1U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 1;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  return;
}

// SerializePtr<IISMPartitionInstanceManagerProvider> @ 14728b1f0

void __cdecl
FISMClientInstanceManagerData::SerializePtr<IISMPartitionInstanceManagerProvider>
          (FArchive *param_1,IISMPartitionInstanceManagerProvider **param_2)

{
  longlong *plVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  IISMPartitionInstanceManagerProvider *pIVar3;
  char local_res8 [8];
  UObjectBaseUtility *local_res18;
  longlong local_res20;
  
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      }
      else {
        local_res8[0] = *(char *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      if (local_res8[0] == '\x01') {
        pIVar3 = (IISMPartitionInstanceManagerProvider *)0x0;
        local_res18 = (UObjectBaseUtility *)0x0;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res18);
        this = local_res18;
        if (local_res18 != (UObjectBaseUtility *)0x0) {
          pUVar2 = UISMPartitionInstanceManagerProvider::StaticClass();
          pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
        }
      }
      else {
        pIVar3 = (IISMPartitionInstanceManagerProvider *)0x0;
        if (local_res8[0] == '\x02') {
          plVar1 = *(longlong **)&param_1->field_0x8;
          local_res18 = (UObjectBaseUtility *)0x0;
          if ((undefined8 *)*plVar1 + 1 <= (undefined8 *)plVar1[1]) {
            pIVar3 = *(IISMPartitionInstanceManagerProvider **)*plVar1;
            *plVar1 = *plVar1 + 8;
            *param_2 = pIVar3;
            return;
          }
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18,8);
            *param_2 = (IISMPartitionInstanceManagerProvider *)local_res18;
            return;
          }
          FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_res18);
          *param_2 = (IISMPartitionInstanceManagerProvider *)local_res18;
          return;
        }
      }
      *param_2 = pIVar3;
    }
    return;
  }
  if (*param_2 != (IISMPartitionInstanceManagerProvider *)0x0) {
    local_res20 = (**(code **)((longlong)**param_2 + 8))();
    if (local_res20 != 0) {
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = '\x01';
      if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      }
      else {
        local_res8[0] = *(char *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res20);
      return;
    }
  }
  local_res20 = 0;
  if ((*param_2 != (IISMPartitionInstanceManagerProvider *)0x0) && ((param_1->field_0x29 & 1) == 0))
  {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = '\x02';
    if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = *(char *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res18 = (UObjectBaseUtility *)*param_2;
    if (*plVar1 + 8U <= (ulonglong)plVar1[1]) {
      *plVar1 = *plVar1 + 8;
      return;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18,8);
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_res18);
    return;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = '\0';
  if (*plVar1 + 1U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 1;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  return;
}

