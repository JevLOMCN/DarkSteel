// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator() @ 1476e9b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
CollisionResponseConsoleCommands::FSortComponentsForComplexity::operator()
          (FSortComponentsForComplexity *this,UPrimitiveComponent *param_1,
          UPrimitiveComponent *param_2)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  TTuple<UPrimitiveComponent_*,FString> *pTVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  TSet<TTuple<UPrimitiveComponent_*,FString>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,FString,0>,FDefaultSetAllocator>
  *this_00;
  int iVar7;
  bool bVar8;
  FName local_res8;
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  this_00 = (TSet<TTuple<UPrimitiveComponent_*,FString>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,FString,0>,FDefaultSetAllocator>
             *)this->InternalNameMap;
  pTVar4 = TSet<TTuple<UPrimitiveComponent_*,FString>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,FString,0>,FDefaultSetAllocator>
           ::Find(this_00,param_1);
  iVar7 = 0;
  iVar3 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  if (pTVar4 == (TTuple<UPrimitiveComponent_*,FString> *)0x0) {
    local_60 = 0;
  }
  else {
    iVar7 = *(int *)&pTVar4->field_0x10;
    pvVar1 = *(void **)&pTVar4->field_0x8;
    local_60 = CONCAT44(local_60._4_4_,iVar7);
    if (iVar7 == 0) {
      local_60 = 0;
      iVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,&local_68,iVar7,(int *)((longlong)&local_60 + 4));
      memcpy(local_68.Data,pvVar1,(longlong)iVar7 * 2);
      this_00 = (TSet<TTuple<UPrimitiveComponent_*,FString>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,FString,0>,FDefaultSetAllocator>
                 *)this->InternalNameMap;
      iVar7 = (int)local_60;
    }
  }
  pTVar4 = TSet<TTuple<UPrimitiveComponent_*,FString>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,FString,0>,FDefaultSetAllocator>
           ::Find(this_00,param_2);
  local_58.Data = (FScriptContainerElement *)0x0;
  if (pTVar4 == (TTuple<UPrimitiveComponent_*,FString> *)0x0) {
    local_50 = 0;
  }
  else {
    iVar3 = *(int *)&pTVar4->field_0x10;
    pvVar1 = *(void **)&pTVar4->field_0x8;
    local_50 = CONCAT44(local_50._4_4_,iVar3);
    if (iVar3 == 0) {
      local_50 = 0;
      iVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,&local_58,iVar3,(int *)((longlong)&local_50 + 4));
      memcpy(local_58.Data,pvVar1,(longlong)iVar3 * 2);
      iVar3 = (int)local_50;
      iVar7 = (int)local_60;
    }
  }
  if (iVar7 == iVar3) {
    if (1 < iVar7) {
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_68.Data,(wchar_t *)local_58.Data);
      bVar8 = iVar3 == 0;
      iVar3 = (int)local_50;
      iVar7 = (int)local_60;
      goto LAB_1476e9c93;
    }
  }
  else {
    bVar8 = iVar3 + iVar7 == 1;
LAB_1476e9c93:
    if (!bVar8) {
      FVar6.Data = (FScriptContainerElement *)L"";
      if (iVar3 != 0) {
        FVar6.Data = local_58.Data;
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (iVar7 != 0) {
        FVar5.Data = local_68.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,(wchar_t *)FVar6.Data);
      bVar8 = SUB41((uint)iVar3 >> 0x1f,0);
      goto LAB_1476e9d51;
    }
  }
  lVar2 = *(longlong *)&param_1->field_0x20;
  if ((lVar2 == 0) || (*(longlong *)&param_2->field_0x20 == 0)) {
    bVar8 = false;
  }
  else {
    local_res8 = *(FName *)(*(longlong *)&param_2->field_0x20 + 0x18);
    ::FName::ToString(&local_res8,&local_38);
    local_res8 = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(&local_res8,&local_48);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar6.Data = local_38.Data.AllocatorInstance.Data;
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,(wchar_t *)FVar6.Data);
    bVar8 = SUB41((uint)iVar3 >> 0x1f,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_1476e9d51:
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return bVar8;
}

