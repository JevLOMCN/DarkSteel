// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Serialize @ 147863140

void __thiscall
TStructOnScope<FActorComponentInstanceData>::Serialize
          (TStructOnScope<FActorComponentInstanceData> *this,FArchive *param_1)

{
  bool bVar1;
  size_t sVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  UPackage *pUVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  UScriptStruct *local_res10;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  iVar8 = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pUVar4 = (UScriptStruct *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
    if (pUVar4 != (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        pFVar6 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)pUVar4,(FString *)&local_28,(UObject *)0x0);
        if (&local_48 != pFVar6) {
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          local_48.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_48.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.DataPtr);
        }
        ::operator<<(param_1,&local_48);
        UScriptStruct::SerializeItem(pUVar4,param_1,*(void **)&this->field_0x10,(void *)0x0);
        FVar7.Data = local_48.Data.AllocatorInstance.Data;
        goto LAB_147863352;
      }
    }
    ::operator<<(param_1,&local_48);
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
    goto LAB_147863352;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::operator<<(param_1,&local_38);
  FVar7.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum < 2) goto LAB_147863352;
  if (local_38.Data.ArrayNum == 0) {
    local_28.DataPtr = L"";
LAB_1478631a5:
    sVar2 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar2;
  }
  else {
    local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1478631a5;
  }
  local_28.Size = iVar8;
  pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
  pUVar4 = (UScriptStruct *)StaticFindObject(pUVar3,(UObject *)0x0,&local_28,None);
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentInstanceData,(UObject *)pUVar5,
                           L"ActorComponentInstanceData");
      if (Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_147863276;
    }
    iVar8 = (int)(Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton)->
                 _padding_;
    if (((int)pUVar4->_padding_ < iVar8) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar8 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton)->_padding_))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res10 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x8,(FObjectPtr)&local_res10);
      (*(code *)**(undefined8 **)this)(this);
      UScriptStruct::SerializeItem(pUVar4,param_1,*(void **)&this->field_0x10,(void *)0x0);
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
      goto LAB_147863352;
    }
  }
LAB_147863276:
  FArchiveState::SetError((FArchiveState *)param_1);
  FVar7.Data = local_38.Data.AllocatorInstance.Data;
LAB_147863352:
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return;
}

// Cast<FSplineComponentInstanceData> @ 147997990

FSplineComponentInstanceData * __thiscall
TStructOnScope<FActorComponentInstanceData>::Cast<FSplineComponentInstanceData>
          (TStructOnScope<FActorComponentInstanceData> *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UPackage *pUVar4;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
  if (Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplineComponentInstanceData,(UObject *)pUVar4,
                         L"SplineComponentInstanceData");
    if (Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return (FSplineComponentInstanceData *)0x0;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton)->
               _padding_;
  if ((*(int *)&pUVar3[1].field_0x10 < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton)->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return (FSplineComponentInstanceData *)0x0;
  }
  return *(FSplineComponentInstanceData **)&this->field_0x10;
}

