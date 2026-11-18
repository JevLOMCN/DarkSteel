// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// GetIDString @ 145c5acd0

FString * __cdecl
UE::RHI::GPUProfiler::FGPUStat::GetIDString
          (FString *__return_storage_ptr__,FQueue param_1,bool param_2)

{
  if (!param_2) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"GPU%d_%s%d");
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"GPU %d %s Queue %d");
  return __return_storage_ptr__;
}

// GetStatId @ 145c5bd50

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
UE::RHI::GPUProfiler::FGPUStat::GetStatId(FGPUStat *this,FQueue param_1,EType param_2)

{
  TUniquePtr<FDynamicStat,TDefaultDelete<FDynamicStat>_> *pTVar1;
  longlong *plVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FName FVar7;
  FDynamicStat *pFVar8;
  code *pcVar9;
  char *pcVar10;
  bool bVar11;
  FStatInstance *pFVar12;
  TStatId TVar13;
  FStatCategory *pFVar14;
  FName *pFVar15;
  FDynamicStat *this_00;
  FDynamicStat FVar16;
  longlong lVar17;
  FStatCategory *pFVar18;
  undefined4 in_register_00000014;
  ForAnyElementType FVar19;
  TStatIdData *pTVar20;
  wchar_t *pwVar21;
  char *pcVar22;
  int in_R9D;
  int local_res8 [2];
  TStatIdData *local_res10;
  FQueue_u_0 local_res18 [2];
  FQueue_u_0 local_res20 [2];
  FQueue_u_0 *local_88;
  longlong local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  
  local_res10 = (TStatIdData *)CONCAT44(in_register_00000014,param_1.field0_0x0);
  local_res18[0] = (FQueue_u_0)param_2;
  local_res20[0] = (FQueue_u_0)param_2;
  pFVar12 = TMapBase<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,0>_>
            ::FindOrAddImpl<UE::RHI::GPUProfiler::FQueue_const_&>
                      ((TMapBase<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,0>_>
                        *)&this->Instances,param_2,(FQueue *)&local_res20[0]._s_0);
  pwVar21 = L"";
  if (in_R9D != 0) {
    if (in_R9D == 1) {
      pFVar12 = (FStatInstance *)&pFVar12->Wait;
    }
    else if (in_R9D == 2) {
      pFVar12 = (FStatInstance *)&pFVar12->Idle;
    }
    else {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                          ,0x5bc,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        TVar13.StatIdPtr = (TStatIdData *)(*pcVar9)();
        return (TStatId)TVar13.StatIdPtr;
      }
    }
  }
  pTVar1 = &(pFVar12->Busy).Stat;
  pTVar20 = (TStatIdData *)CONCAT44(in_register_00000014,param_1.field0_0x0);
  if ((pFVar12->Busy).Stat.Ptr != (FDynamicStat *)0x0) goto LAB_145c5c102;
  if (FStatCategory::Categories._8_4_ != FStatCategory::Categories._52_4_) {
    lVar17 = 0x154be5898;
    if (FStatCategory::Categories._64_8_ != 0) {
      lVar17 = FStatCategory::Categories._64_8_;
    }
    iVar3 = *(int *)(lVar17 + (ulonglong)
                              (FStatCategory::Categories._72_4_ - Wait & local_res18[0].Value) * 4);
    while (iVar3 != -1) {
      lVar17 = FStatCategory::Categories._0_8_ + (longlong)iVar3 * 0x18;
      if (*(EType *)(FStatCategory::Categories._0_8_ + (longlong)iVar3 * 0x18) ==
          local_res18[0].Value) {
        if (lVar17 != 0) goto LAB_145c5beb0;
        break;
      }
      iVar3 = *(int *)(lVar17 + 0x10);
    }
  }
  local_88 = local_res18;
  TSet<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUStat::FStatCategory,TDefaultDelete<UE::RHI::GPUProfiler::FGPUStat::FStatCategory>_>_>,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUStat::FStatCategory,TDefaultDelete<UE::RHI::GPUProfiler::FGPUStat::FStatCategory>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::RHI::GPUProfiler::FQueue_const_&>_>
            ((TSet<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUStat::FStatCategory,TDefaultDelete<UE::RHI::GPUProfiler::FGPUStat::FStatCategory>_>_>,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUStat::FStatCategory,TDefaultDelete<UE::RHI::GPUProfiler::FGPUStat::FStatCategory>_>,0>,FDefaultSetAllocator>
              *)&FStatCategory::Categories,(uint)local_res8,
             (TKeyInitializer<UE::RHI::GPUProfiler::FQueue_const_&> *)
             (ulonglong)local_res18[0].Value,(bool *)&local_88);
  lVar17 = FStatCategory::Categories._0_8_ + (longlong)local_res8[0] * 0x18;
LAB_145c5beb0:
  plVar2 = (longlong *)(lVar17 + 8);
  if (*(longlong *)(lVar17 + 8) == 0) {
    pFVar14 = ::operator_new(0x20);
    if (pFVar14 == (FStatCategory *)0x0) {
      pFVar14 = (FStatCategory *)0x0;
    }
    else {
      pFVar14 = FStatCategory::FStatCategory(pFVar14,(FQueue)local_res18[0]._s_0);
    }
    if (plVar2 == &local_80) {
      if (pFVar14 != (FStatCategory *)0x0) {
        pFVar4 = (pFVar14->GroupDesc).Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        pFVar4 = (pFVar14->GroupName).Data.AllocatorInstance.Data;
        pFVar18 = pFVar14;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        goto LAB_145c5bf44;
      }
    }
    else {
      pFVar18 = (FStatCategory *)*plVar2;
      *plVar2 = (longlong)pFVar14;
      if (pFVar18 != (FStatCategory *)0x0) {
        pFVar4 = (pFVar18->GroupDesc).Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        pFVar4 = (pFVar18->GroupName).Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
LAB_145c5bf44:
        ::operator_delete(pFVar18,0x20);
      }
    }
  }
  ::FString::PrintfImpl(&local_58,L"GPU%d_%s%d");
  ::FString::PrintfImpl(&local_68,L"STAT_%s_%s");
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar19.Data = local_68.Data.AllocatorInstance.Data;
  }
  pFVar15 = ::FName::FName(&local_78,(wchar_t *)FVar19.Data,in_R9D);
  (pFVar12->Busy).StatName = *pFVar15;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  puVar5 = (undefined8 *)*plVar2;
  if (*(int *)(puVar5 + 3) != 0) {
    pwVar21 = (wchar_t *)puVar5[2];
  }
  if (*(int *)(puVar5 + 1) == 0) {
    pcVar22 = "";
  }
  else {
    pcVar22 = (char *)*puVar5;
  }
  this_00 = ::operator_new(8);
  pcVar10 = FStatNameAndInfo::GpuStatCategory;
  if (this_00 == (FDynamicStat *)0x0) {
    this_00 = (FDynamicStat *)0x0;
  }
  else {
    pwVar6 = this->DisplayName;
    FVar7 = (pFVar12->Busy).StatName;
    *this_00 = (FDynamicStat)0x0;
    FVar16 = (FDynamicStat)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)this_00,FVar7,pwVar6,pcVar22,pcVar10,pwVar21,
                        true,true,NumBits,false,false,MCR_Invalid);
    LOCK();
    *this_00 = FVar16;
    UNLOCK();
  }
  if ((FName *)pTVar1 != &local_70) {
    pFVar8 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    this_00 = (FDynamicStat *)0x0;
    ::operator_delete(pFVar8,8);
  }
  ::operator_delete(this_00,8);
  pTVar20 = local_res10;
LAB_145c5c102:
  pTVar20->Name = (TAtomic<FMinimalName>)*pTVar1->Ptr;
  return (TStatId)pTVar20;
}

// GetStatInstance @ 145c5c130

FInner * __thiscall
UE::RHI::GPUProfiler::FGPUStat::GetStatInstance(FGPUStat *this,FQueue param_1,EType param_2)

{
  code *pcVar1;
  bool bVar2;
  FStatInstance *pFVar3;
  FInner *pFVar4;
  FQueue_u_0 local_res10 [6];
  
  local_res10[0] = param_1.field0_0x0;
  pFVar3 = TMapBase<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,0>_>
           ::FindOrAddImpl<UE::RHI::GPUProfiler::FQueue_const_&>
                     ((TMapBase<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,0>_>
                       *)&this->Instances,(uint)param_1.field0_0x0,(FQueue *)&local_res10[0]._s_0);
  if (param_2 != Busy) {
    if (param_2 == Wait) {
      return &pFVar3->Wait;
    }
    if (param_2 == Idle) {
      return &pFVar3->Idle;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                       ,0x5bc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInner *)(*pcVar1)();
      return pFVar4;
    }
  }
  return &pFVar3->Busy;
}

// GetTypeString @ 145c5cd70

wchar_t * __cdecl UE::RHI::GPUProfiler::FGPUStat::GetTypeString(EType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != Busy) {
    if (param_1 == Wait) {
      return L"Wait";
    }
    if (param_1 == Idle) {
      return L"Idle";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                       ,0x59b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"Busy";
}

