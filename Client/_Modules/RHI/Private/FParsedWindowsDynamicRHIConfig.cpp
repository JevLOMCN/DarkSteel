// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 7

// GetFirstRHIWithFeatureLevelSupport @ 145cdc700

/* WARNING: Type propagation algorithm not settling */

TOptional<EWindowsRHI> __thiscall
FParsedWindowsDynamicRHIConfig::GetFirstRHIWithFeatureLevelSupport
          (FParsedWindowsDynamicRHIConfig *this,Type param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  TOptional<EWindowsRHI> TVar4;
  undefined4 in_register_00000014;
  FScriptContainerElement *pFVar5;
  int in_R8D;
  EWindowsRHI *pEVar6;
  undefined1 local_res20 [8];
  
  pEVar6 = GRHISearchOrder;
  TVar4._4_4_ = in_register_00000014;
  TVar4.TypedValue = param_1;
  do {
    uVar2 = *pEVar6;
    pFVar5 = (this->RHIConfigs).Elements[uVar2].FeatureLevels.AllocatorInstance.Data;
    iVar3 = (this->RHIConfigs).Elements[uVar2].FeatureLevels.ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar3 * 4;
    while( true ) {
      if ((this->RHIConfigs).Elements[uVar2].FeatureLevels.ArrayNum != iVar3) {
        `TCheckedPointerIterator<enum_ERHIFeatureLevel::Type_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar5 == pFVar1) break;
      if (*(int *)pFVar5 == in_R8D) {
        *(uint *)TVar4 = uVar2;
        *(undefined1 *)((longlong)TVar4 + 4) = 1;
        return TVar4;
      }
      pFVar5 = pFVar5 + 4;
    }
    pEVar6 = (EWindowsRHI *)((longlong)pEVar6 + 4);
    if ((wchar_t *)pEVar6 == L"Ignore performance mode check") {
      *(undefined1 *)((longlong)TVar4 + 4) = 0;
      return TVar4;
    }
  } while( true );
}

// GetHighestSupportedFeatureLevel @ 145cdca20

TOptional<ERHIFeatureLevel::Type> __thiscall
FParsedWindowsDynamicRHIConfig::GetHighestSupportedFeatureLevel
          (FParsedWindowsDynamicRHIConfig *this,EWindowsRHI param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TOptional<ERHIFeatureLevel::Type> TVar3;
  TOptional<ERHIFeatureLevel::Type> TVar4;
  undefined4 in_register_00000014;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint in_R8D;
  undefined1 local_res18 [8];
  
  TVar3._4_4_ = in_register_00000014;
  TVar3.TypedValue = param_1;
  iVar2 = (this->RHIConfigs).Elements[in_R8D].FeatureLevels.ArrayNum;
  if (iVar2 == 0) {
    *(undefined1 *)(CONCAT44(in_register_00000014,param_1) + 4) = 0;
    TVar4._4_4_ = in_register_00000014;
    TVar4.TypedValue = param_1;
    return TVar4;
  }
  iVar5 = 0;
  pFVar6 = (this->RHIConfigs).Elements[in_R8D].FeatureLevels.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->RHIConfigs).Elements[in_R8D].FeatureLevels.ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_ERHIFeatureLevel::Type_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar6 == pFVar1) break;
    if (iVar5 < *(int *)pFVar6) {
      iVar5 = *(int *)pFVar6;
    }
    pFVar6 = pFVar6 + 4;
  }
  *(int *)TVar3 = iVar5;
  *(undefined1 *)((longlong)TVar3 + 4) = 1;
  return TVar3;
}

// GetNextHighestTargetedFeatureLevel @ 145cdcc90

TOptional<ERHIFeatureLevel::Type> __thiscall
FParsedWindowsDynamicRHIConfig::GetNextHighestTargetedFeatureLevel
          (FParsedWindowsDynamicRHIConfig *this,EWindowsRHI param_1,Type param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  undefined4 in_register_00000014;
  TOptional<ERHIFeatureLevel::Type> TVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int in_R9D;
  int iVar11;
  bool bVar12;
  uint uVar13;
  int local_res20 [2];
  ForAnyElementType local_48;
  uint local_40;
  int local_3c;
  ulonglong uVar10;
  
  TVar3._4_4_ = in_register_00000014;
  TVar3.TypedValue = param_1;
  uVar7 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = (this->RHIConfigs).Elements[param_2].FeatureLevels.ArrayNum;
  lVar4 = (longlong)(int)local_40;
  pFVar1 = (this->RHIConfigs).Elements[param_2].FeatureLevels.AllocatorInstance.Data;
  local_res20[0] = in_R9D;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,pFVar1,lVar4 << 2);
  }
  FVar6.Data = local_48.Data;
  if (local_40 != 0) {
    bVar12 = (int)*(uint *)local_48.Data < local_res20[0];
    lVar4 = (longlong)(int)local_40;
    uVar5 = uVar7;
    uVar10 = uVar7;
    uVar2 = uVar7;
    iVar11 = local_res20[0];
    do {
      uVar8 = (uint)uVar10;
      uVar9 = uVar8;
      do {
        uVar5 = uVar5 + 1;
        uVar9 = uVar9 + 1;
        uVar10 = (ulonglong)uVar9;
        if (lVar4 <= (longlong)uVar5) break;
      } while (bVar12 == *(int *)(FVar6.Data + uVar5 * 4) < iVar11);
      if (bVar12 != false) {
        uVar13 = (uint)uVar2;
        if (uVar13 != uVar8) {
          memmove(FVar6.Data + (longlong)(int)uVar13 * 4,FVar6.Data + (longlong)(int)uVar8 * 4,
                  (longlong)(int)(uVar9 - uVar8) << 2);
          iVar11 = local_res20[0];
        }
        uVar2 = (ulonglong)(uVar13 + (uVar9 - uVar8));
      }
      bVar12 = (bool)(bVar12 ^ 1);
    } while ((longlong)uVar5 < lVar4);
    uVar9 = (uint)uVar2;
    if (uVar9 != 0) {
      pFVar1 = local_48.Data + (longlong)(int)uVar9 * 4;
      FVar6.Data = local_48.Data;
      local_40 = uVar9;
      while( true ) {
        if ((uint)uVar2 != uVar9) {
          `TCheckedPointerIterator<enum_ERHIFeatureLevel::Type,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
          uVar2 = (ulonglong)local_40;
        }
        if (FVar6.Data == pFVar1) break;
        if ((int)uVar7 < (int)*(uint *)FVar6.Data) {
          uVar7 = (ulonglong)*(uint *)FVar6.Data;
        }
        FVar6.Data = FVar6.Data + 4;
      }
      *(int *)TVar3 = (int)uVar7;
      *(undefined1 *)((longlong)TVar3 + 4) = 1;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      return TVar3;
    }
    local_40 = 0;
  }
  *(undefined1 *)((longlong)TVar3 + 4) = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return TVar3;
}

// IsEmpty @ 145cdf7a0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FParsedWindowsDynamicRHIConfig::IsEmpty(FParsedWindowsDynamicRHIConfig *this)

{
  FParsedWindowsDynamicRHIConfig *pFVar1;
  TStaticArray<FWindowsRHIConfig,5,4294967295> *pTVar2;
  
  pFVar1 = this + 1;
  while( true ) {
    pTVar2 = &this->RHIConfigs;
    if ((FParsedWindowsDynamicRHIConfig *)pTVar2 == pFVar1) {
      return true;
    }
    if (*(int *)((longlong)pTVar2->Elements + 8) != 0) break;
    this = (FParsedWindowsDynamicRHIConfig *)((longlong)pTVar2->Elements + 0x18);
  }
  return false;
}

// IsFeatureLevelTargeted @ 145cdf7d0

bool __thiscall
FParsedWindowsDynamicRHIConfig::IsFeatureLevelTargeted
          (FParsedWindowsDynamicRHIConfig *this,EWindowsRHI param_1,Type param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  pFVar3 = (this->RHIConfigs).Elements[param_1].FeatureLevels.AllocatorInstance.Data;
  iVar2 = (this->RHIConfigs).Elements[param_1].FeatureLevels.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->RHIConfigs).Elements[param_1].FeatureLevels.ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_ERHIFeatureLevel::Type_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    if (*(Type *)pFVar3 == param_2) {
      return true;
    }
    pFVar3 = pFVar3 + 4;
  }
  return false;
}

// IsRHISupported @ 145ce0110

bool __thiscall
FParsedWindowsDynamicRHIConfig::IsRHISupported
          (FParsedWindowsDynamicRHIConfig *this,EWindowsRHI param_1)

{
  return (this->RHIConfigs).Elements[param_1].ShaderPlatforms.ArrayNum != 0;
}

// MergeConfig @ 145ce1de0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FParsedWindowsDynamicRHIConfig::MergeConfig
          (FParsedWindowsDynamicRHIConfig *this,EWindowsRHI param_1,FWindowsRHIConfig *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  Type local_res10 [2];
  
  pFVar3 = (param_2->ShaderPlatforms).AllocatorInstance.Data;
  iVar2 = (param_2->ShaderPlatforms).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 2;
  while( true ) {
    if ((param_2->ShaderPlatforms).ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_EShaderPlatform_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    local_res10[0] = CONCAT22(local_res10[0]._2_2_,*(undefined2 *)pFVar3);
    TArray<enum_EShaderPlatform,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<enum_EShaderPlatform_const_&>
              ((this->RHIConfigs).Elements + param_1,(EShaderPlatform *)local_res10);
    pFVar3 = pFVar3 + 2;
  }
  pFVar3 = (param_2->FeatureLevels).AllocatorInstance.Data;
  iVar2 = (param_2->FeatureLevels).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((param_2->FeatureLevels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_ERHIFeatureLevel::Type_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    local_res10[0] = *(Type *)pFVar3;
    TArray<enum_ERHIFeatureLevel::Type,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<enum_ERHIFeatureLevel::Type_const_&>
              (&(this->RHIConfigs).Elements[param_1].FeatureLevels,local_res10);
    pFVar3 = pFVar3 + 4;
  }
  return;
}

