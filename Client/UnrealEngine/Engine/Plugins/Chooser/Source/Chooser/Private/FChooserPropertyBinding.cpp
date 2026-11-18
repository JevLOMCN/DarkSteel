// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 14

// StaticStruct @ 14a86fe00

UScriptStruct * __cdecl FChooserPropertyBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserPropertyBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserPropertyBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserPropertyBinding,(UObject *)pUVar1,
                         L"ChooserPropertyBinding");
  }
  return Z_Registration_Info_UScriptStruct_FChooserPropertyBinding.OuterSingleton;
}

// GetStructPtr<void> @ 14a878100

bool __thiscall
FChooserPropertyBinding::GetStructPtr<void>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,void **param_2,
          UStruct **param_3)

{
  bool bVar1;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_38);
  if ((bVar1) && (local_38.Function == (UFunction *)0x0)) {
    *param_2 = local_38.Container + local_38.PropertyOffset;
    *param_3 = local_38.StructType;
    return true;
  }
  return false;
}

// GetValue<unsigned_char> @ 14a879620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FChooserPropertyBinding::GetValue<unsigned_char>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,uchar *param_2)

{
  code *pcVar1;
  uchar *puVar2;
  UFunction *this_00;
  bool bVar3;
  uchar uVar4;
  FUObjectItem *pFVar5;
  undefined1 auStackY_148 [32];
  undefined8 local_118;
  FResolvedPropertyChainResult local_110;
  FFrame local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_110.Container = (uchar *)0x0;
  local_110.PropertyOffset = 0;
  local_110.PropertyType = None;
  local_110.Mask = 0;
  local_110.Function = (UFunction *)0x0;
  local_110.StructType = (UStruct *)0x0;
  bVar3 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_110);
  this_00 = local_110.Function;
  if (!bVar3) {
    return false;
  }
  if (local_110.Function == (UFunction *)0x0) {
    if (local_110.PropertyType == Bool) {
      *param_2 = (local_110.Mask & local_110.Container[local_110.PropertyOffset]) != 0;
      return true;
    }
    if (local_110.PropertyType != Int32) {
      if (local_110.PropertyType == Float) {
        *param_2 = (uchar)(int)*(float *)(local_110.Container + local_110.PropertyOffset);
        return true;
      }
      if (local_110.PropertyType == Double) {
        *param_2 = (uchar)(int)*(double *)(local_110.Container + local_110.PropertyOffset);
        return true;
      }
    }
    *param_2 = local_110.Container[local_110.PropertyOffset];
    return true;
  }
  pFVar5 = FUObjectArray::IndexToObject
                     (&GUObjectArray,*(int *)((longlong)&(local_110.Function)->_padding_ + 4));
  puVar2 = local_110.Container;
  if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
    pcVar1 = *(code **)(*(longlong *)local_110.Container + 0x260);
    if (local_110.PropertyType == Int32) {
      local_118 = (double)((ulonglong)local_118._4_4_ << 0x20);
      (*pcVar1)(local_110.Container,this_00,&local_118);
      *param_2 = (uchar)local_118;
      return true;
    }
    if (local_110.PropertyType != Float) {
      if (local_110.PropertyType != Double) {
        (*pcVar1)(local_110.Container,this_00,param_2);
        return true;
      }
      local_118 = 0.0;
      (*pcVar1)(local_110.Container,this_00,&local_118);
      *param_2 = (uchar)(int)local_118;
      return true;
    }
    local_118 = (double)((ulonglong)local_118._4_4_ << 0x20);
    (*pcVar1)(local_110.Container,this_00,&local_118);
    *param_2 = (uchar)(int)(float)local_118;
    return true;
  }
  FFrame::FFrame(&local_e8,(UObject *)local_110.Container,this_00,(void *)0x0,(FFrame *)0x0,
                 (FField *)this_00->_padding_);
  if (local_110.PropertyType == Int32) {
    local_118 = (double)((ulonglong)local_118._4_4_ << 0x20);
    UFunction::Invoke(this_00,(UObject *)puVar2,&local_e8,&local_118);
    uVar4 = (uchar)local_118;
  }
  else if (local_110.PropertyType == Float) {
    local_118 = (double)((ulonglong)local_118._4_4_ << 0x20);
    UFunction::Invoke(this_00,(UObject *)puVar2,&local_e8,&local_118);
    uVar4 = (uchar)(int)(float)local_118;
  }
  else {
    if (local_110.PropertyType != Double) {
      UFunction::Invoke(this_00,(UObject *)puVar2,&local_e8,param_2);
      goto LAB_14a8797e1;
    }
    local_118 = 0.0;
    UFunction::Invoke(this_00,(UObject *)puVar2,&local_e8,&local_118);
    uVar4 = (uchar)(int)local_118;
  }
  *param_2 = uVar4;
LAB_14a8797e1:
  FFrame::~FFrame(&local_e8);
  return true;
}

// GetValue<double> @ 14a8798d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FChooserPropertyBinding::GetValue<double>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,double *param_2)

{
  code *pcVar1;
  uchar *puVar2;
  UFunction *this_00;
  bool bVar3;
  FUObjectItem *pFVar4;
  double dVar5;
  undefined1 auStackY_148 [32];
  undefined8 local_118;
  FResolvedPropertyChainResult local_110;
  FFrame local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_110.Container = (uchar *)0x0;
  local_110.PropertyOffset = 0;
  local_110.PropertyType = None;
  local_110.Mask = 0;
  local_110.Function = (UFunction *)0x0;
  local_110.StructType = (UStruct *)0x0;
  bVar3 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_110);
  this_00 = local_110.Function;
  if (!bVar3) {
    return false;
  }
  if (local_110.Function == (UFunction *)0x0) {
    if (local_110.PropertyType == Bool) {
      local_118._0_4_ =
           (float)(uint)((local_110.Mask & local_110.Container[local_110.PropertyOffset]) != 0);
    }
    else {
      if (local_110.PropertyType != Int32) {
        if (local_110.PropertyType != Float) {
          *param_2 = *(double *)(local_110.Container + local_110.PropertyOffset);
          return true;
        }
        *param_2 = (double)*(float *)(local_110.Container + local_110.PropertyOffset);
        return true;
      }
      local_118._0_4_ = *(float *)(local_110.Container + local_110.PropertyOffset);
    }
LAB_14a879b40:
    *param_2 = (double)(int)(float)local_118;
    return true;
  }
  pFVar4 = FUObjectArray::IndexToObject
                     (&GUObjectArray,*(int *)((longlong)&(local_110.Function)->_padding_ + 4));
  puVar2 = local_110.Container;
  if (((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
    pcVar1 = *(code **)(*(longlong *)local_110.Container + 0x260);
    if (local_110.PropertyType != Int32) {
      if (local_110.PropertyType == Float) {
        local_118 = (double)((ulonglong)local_118._4_4_ << 0x20);
        (*pcVar1)(local_110.Container,this_00,&local_118);
        *param_2 = (double)(float)local_118;
        return true;
      }
      if (local_110.PropertyType != Double) {
        (*pcVar1)(local_110.Container,this_00,param_2);
        return true;
      }
      local_118 = 0.0;
      (*pcVar1)(local_110.Container,this_00,&local_118);
      *param_2 = local_118;
      return true;
    }
    local_118 = (double)((ulonglong)local_118._4_4_ << 0x20);
    (*pcVar1)(local_110.Container,this_00,&local_118);
    goto LAB_14a879b40;
  }
  FFrame::FFrame(&local_e8,(UObject *)local_110.Container,this_00,(void *)0x0,(FFrame *)0x0,
                 (FField *)this_00->_padding_);
  if (local_110.PropertyType == Int32) {
    local_118 = (double)((ulonglong)local_118._4_4_ << 0x20);
    UFunction::Invoke(this_00,(UObject *)puVar2,&local_e8,&local_118);
    dVar5 = (double)(int)(float)local_118;
  }
  else if (local_110.PropertyType == Float) {
    local_118 = (double)((ulonglong)local_118._4_4_ << 0x20);
    UFunction::Invoke(this_00,(UObject *)puVar2,&local_e8,&local_118);
    dVar5 = (double)(float)local_118;
  }
  else {
    if (local_110.PropertyType != Double) {
      UFunction::Invoke(this_00,(UObject *)puVar2,&local_e8,param_2);
      goto LAB_14a879a84;
    }
    local_118 = 0.0;
    UFunction::Invoke(this_00,(UObject *)puVar2,&local_e8,&local_118);
    dVar5 = local_118;
  }
  *param_2 = dVar5;
LAB_14a879a84:
  FFrame::~FFrame(&local_e8);
  return true;
}

// GetValue<bool> @ 14a879b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FChooserPropertyBinding::GetValue<bool>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,bool *param_2)

{
  code *pcVar1;
  uchar *puVar2;
  UFunction *this_00;
  bool bVar3;
  FUObjectItem *pFVar4;
  undefined1 auStackY_158 [32];
  undefined8 local_128;
  FResolvedPropertyChainResult local_120;
  FFrame local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_120.Container = (uchar *)0x0;
  local_120.PropertyOffset = 0;
  local_120.PropertyType = None;
  local_120.Mask = 0;
  local_120.Function = (UFunction *)0x0;
  local_120.StructType = (UStruct *)0x0;
  bVar3 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_120);
  this_00 = local_120.Function;
  if (!bVar3) {
    return false;
  }
  if (local_120.Function == (UFunction *)0x0) {
    if (local_120.PropertyType == Bool) {
      *param_2 = (local_120.Mask & local_120.Container[local_120.PropertyOffset]) != 0;
      return true;
    }
    if (local_120.PropertyType == Int32) {
      *param_2 = *(int *)(local_120.Container + local_120.PropertyOffset) != 0;
      return true;
    }
    if (local_120.PropertyType == Float) {
      if (*(float *)(local_120.Container + local_120.PropertyOffset) != 0.0) {
        *param_2 = true;
        return true;
      }
    }
    else {
      if (local_120.PropertyType != Double) {
        *param_2 = (bool)local_120.Container[local_120.PropertyOffset];
        return true;
      }
      if (*(double *)(local_120.Container + local_120.PropertyOffset) != 0.0) {
        *param_2 = true;
        return true;
      }
    }
    *param_2 = false;
    return true;
  }
  pFVar4 = FUObjectArray::IndexToObject
                     (&GUObjectArray,*(int *)((longlong)&(local_120.Function)->_padding_ + 4));
  puVar2 = local_120.Container;
  if (((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
    pcVar1 = *(code **)(*(longlong *)local_120.Container + 0x260);
    if (local_120.PropertyType == Int32) {
      local_128 = (double)((ulonglong)local_128._4_4_ << 0x20);
      (*pcVar1)(local_120.Container,this_00,&local_128);
      bVar3 = (float)local_128 != 0.0;
    }
    else {
      if (local_120.PropertyType == Float) {
        local_128 = (double)((ulonglong)local_128._4_4_ << 0x20);
        (*pcVar1)(local_120.Container,this_00,&local_128);
        bVar3 = (float)local_128 == 0.0;
      }
      else {
        if (local_120.PropertyType != Double) {
          (*pcVar1)(local_120.Container,this_00,param_2);
          return true;
        }
        local_128 = 0.0;
        (*pcVar1)(local_120.Container,this_00,&local_128);
        bVar3 = local_128 == 0.0;
      }
      if (bVar3) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    *param_2 = bVar3;
    return true;
  }
  FFrame::FFrame(&local_f8,(UObject *)local_120.Container,this_00,(void *)0x0,(FFrame *)0x0,
                 (FField *)this_00->_padding_);
  if (local_120.PropertyType == Int32) {
    local_128 = (double)((ulonglong)local_128._4_4_ << 0x20);
    UFunction::Invoke(this_00,(UObject *)puVar2,&local_f8,&local_128);
    bVar3 = (float)local_128 != 0.0;
  }
  else {
    if (local_120.PropertyType == Float) {
      local_128 = (double)((ulonglong)local_128._4_4_ << 0x20);
      UFunction::Invoke(this_00,(UObject *)puVar2,&local_f8,&local_128);
      bVar3 = (float)local_128 == 0.0;
    }
    else {
      if (local_120.PropertyType != Double) {
        UFunction::Invoke(this_00,(UObject *)puVar2,&local_f8,param_2);
        goto LAB_14a879d9c;
      }
      local_128 = 0.0;
      UFunction::Invoke(this_00,(UObject *)puVar2,&local_f8,&local_128);
      bVar3 = local_128 == 0.0;
    }
    if (bVar3) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  *param_2 = bVar3;
LAB_14a879d9c:
  FFrame::~FFrame(&local_f8);
  return true;
}

// GetValuePtr<FGameplayTagContainer_const_> @ 14a879e80

bool __thiscall
FChooserPropertyBinding::GetValuePtr<FGameplayTagContainer_const_>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,
          FGameplayTagContainer **param_2)

{
  bool bVar1;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_38);
  if ((bVar1) && (local_38.Function == (UFunction *)0x0)) {
    *param_2 = (FGameplayTagContainer *)(local_38.Container + local_38.PropertyOffset);
    return true;
  }
  return false;
}

// GetValuePtr<FChooserRandomizationContext> @ 14a879ef0

bool __thiscall
FChooserPropertyBinding::GetValuePtr<FChooserRandomizationContext>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,
          FChooserRandomizationContext **param_2)

{
  bool bVar1;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_38);
  if ((bVar1) && (local_38.Function == (UFunction *)0x0)) {
    *param_2 = (FChooserRandomizationContext *)(local_38.Container + local_38.PropertyOffset);
    return true;
  }
  return false;
}

// SetValue<unsigned_char> @ 14a87c420

bool __thiscall
FChooserPropertyBinding::SetValue<unsigned_char>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,uchar *param_2)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = 0;
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_38);
  if ((!bVar1) || (local_38.Function != (UFunction *)0x0)) {
    return false;
  }
  if (local_38.PropertyType != None) {
    if (local_38.PropertyType == Bool) {
      pbVar3 = local_38.Container + local_38.PropertyOffset;
      if (local_38.Mask == 0xff) {
        *pbVar3 = *param_2 != '\0';
        return true;
      }
      bVar2 = local_38.Mask;
      if (*param_2 == '\0') {
        bVar2 = 0;
      }
      *pbVar3 = ~local_38.Mask & *pbVar3 | bVar2;
      return true;
    }
    if (local_38.PropertyType == Int32) {
      *(uint *)(local_38.Container + local_38.PropertyOffset) = (uint)*param_2;
      return true;
    }
    if (local_38.PropertyType == Float) {
      *(float *)(local_38.Container + local_38.PropertyOffset) = (float)*param_2;
      return true;
    }
    if (local_38.PropertyType == Double) {
      *(double *)(local_38.Container + local_38.PropertyOffset) = (double)*param_2;
      return true;
    }
  }
  local_38.Container[local_38.PropertyOffset] = *param_2;
  return true;
}

// SetValue<double> @ 14a87c580

bool __thiscall
FChooserPropertyBinding::SetValue<double>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,double *param_2)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = 0;
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_38);
  if ((!bVar1) || (local_38.Function != (UFunction *)0x0)) {
    return false;
  }
  if (local_38.PropertyType != None) {
    if (local_38.PropertyType == Bool) {
      pbVar3 = local_38.Container + local_38.PropertyOffset;
      if (local_38.Mask != 0xff) {
        bVar2 = 0;
        if (*param_2 != 0.0) {
          bVar2 = local_38.Mask;
        }
        *pbVar3 = ~local_38.Mask & *pbVar3 | bVar2;
        return true;
      }
      if (*param_2 == 0.0) {
        *pbVar3 = 0;
        return true;
      }
      *pbVar3 = 1;
      return true;
    }
    if (local_38.PropertyType == Int32) {
      *(int *)(local_38.Container + local_38.PropertyOffset) = (int)*param_2;
      return true;
    }
    if (local_38.PropertyType == Float) {
      *(float *)(local_38.Container + local_38.PropertyOffset) = (float)*param_2;
      return true;
    }
  }
  *(double *)(local_38.Container + local_38.PropertyOffset) = *param_2;
  return true;
}

// SetValue<FGameplayTagQuery> @ 14a87c6d0

bool __thiscall
FChooserPropertyBinding::SetValue<FGameplayTagQuery>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,
          FGameplayTagQuery *param_2)

{
  bool bVar1;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_38);
  if ((bVar1) && (local_38.Function == (UFunction *)0x0)) {
    FGameplayTagQuery::operator=
              ((FGameplayTagQuery *)(local_38.Container + local_38.PropertyOffset),param_2);
    return true;
  }
  return false;
}

// SetValue<bool> @ 14a87c740

bool __thiscall
FChooserPropertyBinding::SetValue<bool>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,bool *param_2)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = 0;
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_38);
  if ((!bVar1) || (local_38.Function != (UFunction *)0x0)) {
    return false;
  }
  if (local_38.PropertyType != None) {
    if (local_38.PropertyType == Bool) {
      pbVar3 = local_38.Container + local_38.PropertyOffset;
      if (local_38.Mask == 0xff) {
        *pbVar3 = *param_2;
        return true;
      }
      bVar2 = local_38.Mask;
      if (*param_2 == false) {
        bVar2 = 0;
      }
      *pbVar3 = ~local_38.Mask & *pbVar3 | bVar2;
      return true;
    }
    if (local_38.PropertyType == Int32) {
      *(uint *)(local_38.Container + local_38.PropertyOffset) = (uint)*param_2;
      return true;
    }
    if (local_38.PropertyType == Float) {
      *(float *)(local_38.Container + local_38.PropertyOffset) = (float)*param_2;
      return true;
    }
    if (local_38.PropertyType == Double) {
      *(double *)(local_38.Container + local_38.PropertyOffset) = (double)*param_2;
      return true;
    }
  }
  local_38.Container[local_38.PropertyOffset] = *param_2;
  return true;
}

// ~FChooserPropertyBinding @ 14a87e460

void __thiscall FChooserPropertyBinding::~FChooserPropertyBinding(FChooserPropertyBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FChooserPropertyBinding__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CompiledBinding).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PropertyBindingChain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Compile @ 14a881e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChooserPropertyBinding::Compile
          (FChooserPropertyBinding *this,IHasContextClass *param_1,bool param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  FName FVar3;
  ulonglong uVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  atomic<int> aVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  atomic<int> aVar11;
  int iVar12;
  int iVar13;
  FContextObjectTypeClass *pFVar14;
  FString *pFVar15;
  FName *pFVar16;
  FSharedReferencer<1> FVar17;
  FStructProperty *pFVar18;
  FScriptContainerElement *pFVar19;
  FContextObjectTypeStruct *pFVar20;
  FProperty *pFVar21;
  UClass *pUVar22;
  UFunction *pUVar23;
  uint uVar24;
  longlong lVar25;
  FName *this_00;
  FCompiledBinding *pFVar26;
  longlong *plVar27;
  FStructProperty *pFVar28;
  bool bVar29;
  undefined1 local_res8 [8];
  IHasContextClass *local_res10;
  UClass *local_268;
  int local_260;
  FName local_258;
  UClass *local_250;
  int local_248;
  FString local_240;
  FScriptContainerElement local_230;
  undefined7 uStack_22f;
  int iStack_228;
  uint uStack_224;
  FScriptContainerElement local_220;
  undefined7 uStack_21f;
  int iStack_218;
  uint uStack_214;
  FScriptContainerElement local_210;
  undefined7 uStack_20f;
  undefined4 uStack_208;
  uint uStack_204;
  longlong local_200;
  int local_1f8;
  TSharedPtr<UE::Chooser::FCompiledBinding,1> local_1f0;
  FScriptContainerElement local_1e0;
  undefined7 uStack_1df;
  UFunction *pUStack_1d8;
  FScriptContainerElement local_1d0;
  undefined7 uStack_1cf;
  UFunction *pUStack_1c8;
  undefined1 local_1c0 [12];
  FName local_1b4;
  undefined8 local_1a8;
  FSharedReferencer<1> FStack_1a0;
  FString local_198;
  undefined8 local_188;
  FSharedReferencer<1> FStack_180;
  FCompiledBinding *local_178;
  FStructProperty *local_170;
  FString local_168;
  undefined8 local_158;
  FSharedReferencer<1> FStack_150;
  undefined8 local_148;
  FSharedReferencer<1> FStack_140;
  FString local_138;
  FName *local_128;
  FCompiledBinding **local_120;
  FCompiledBinding *local_118;
  FStructProperty *pFStack_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FAssetLog local_a0;
  FAssetLog local_88;
  FAssetLog local_70;
  FAssetLog local_58;
  
  bVar29 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId77,"CompilePropertyChain",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\ChooserPropertyAccess.cpp"
               ,0x4d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId77);
  }
  (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_200);
  if (((this->PropertyBindingChain).ArrayNum == 0) && (this->IsBoundToRoot == false)) {
LAB_14a882fb7:
    if (1 < (byte)LogChooser._0_1_) {
      ::FString::PrintfImpl(&local_e8,L"Missing property binding.");
      local_58.Object = (UObject *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
      local_58.Path = (wchar_t *)0x0;
      local_58.PackagePath = (FPackagePath *)0x0;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogChooser.field_0x4,Error,&local_58,&local_e8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\ChooserPropertyAccess.cpp"
                 ,0x5c);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    local_1a8 = 0;
    FStack_1a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar17.ReferenceController = FStack_1a0.ReferenceController;
    if (&this->CompiledBinding != (TSharedPtr<UE::Chooser::FCompiledBinding,1> *)&local_1a8) {
      (this->CompiledBinding).Object = (FCompiledBinding *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CompiledBinding).SharedReferenceCount,&FStack_1a0);
      FVar17.ReferenceController = FStack_1a0.ReferenceController;
    }
  }
  else {
    iVar13 = this->ContextIndex;
    if ((iVar13 < 0) || (local_1f8 <= iVar13)) goto LAB_14a882fb7;
    pFVar14 = FInstancedStruct::GetPtr<FContextObjectTypeClass>
                        ((FInstancedStruct *)((longlong)iVar13 * 0x10 + local_200));
    pFVar28 = (FStructProperty *)0x0;
    if (pFVar14 == (FContextObjectTypeClass *)0x0) {
      uVar10 = this->ContextIndex;
      uVar9 = 0;
      if ((int)uVar10 < local_1f8) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar14 = (FContextObjectTypeClass *)
                FInstancedStruct::GetPtr<FContextObjectTypeStruct>
                          ((FInstancedStruct *)((longlong)(int)uVar10 * 0x10 + local_200));
      if (pFVar14 != (FContextObjectTypeClass *)0x0) goto LAB_14a881f3d;
LAB_14a882f14:
      if (1 < (byte)LogChooser._0_1_) {
        ::FString::PrintfImpl(&local_f8,L"No valid Context Object/Struct at index: %d");
        local_70.Object = (UObject *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
        local_70.Path = (wchar_t *)0x0;
        local_70.PackagePath = (FPackagePath *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogChooser.field_0x4,Error,&local_70,&local_f8,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\ChooserPropertyAccess.cpp"
                   ,0x70);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      local_148 = 0;
      FStack_140.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FVar17.ReferenceController = FStack_140.ReferenceController;
      if (&this->CompiledBinding != (TSharedPtr<UE::Chooser::FCompiledBinding,1> *)&local_148) {
        (this->CompiledBinding).Object = (FCompiledBinding *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CompiledBinding).SharedReferenceCount,&FStack_140);
        FVar17.ReferenceController = FStack_140.ReferenceController;
      }
    }
    else {
LAB_14a881f3d:
      local_268 = (pFVar14->Class).field0_0x0.DebugPtr;
      if (local_268 == (UClass *)0x0) goto LAB_14a882f14;
      this_00 = (FName *)(this->PropertyBindingChain).AllocatorInstance.Data;
      bVar8 = true;
      iVar13 = (this->PropertyBindingChain).ArrayNum;
      local_258.ComparisonIndex.Value = 0;
      local_258.Number = 0;
      local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar16 = this_00 + iVar13;
      local_240.Data.ArrayNum = 0;
      local_240.Data.ArrayMax = 0;
      local_250 = local_268;
      while( true ) {
        if ((this->PropertyBindingChain).ArrayNum != iVar13) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (this_00 == pFVar16) break;
        if (bVar8) {
          bVar8 = false;
        }
        else {
          ::FString::AppendChars(&local_240,L".",1);
        }
        pFVar15 = ::FName::ToString(this_00,&local_d0);
        iVar12 = (pFVar15->Data).ArrayNum;
        uVar10 = iVar12 - 1;
        if (iVar12 == 0) {
          uVar10 = 0;
        }
        ::FString::AppendChars(&local_240,(wchar_t *)(pFVar15->Data).AllocatorInstance.Data,uVar10);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        this_00 = this_00 + 1;
      }
      uVar9 = 0;
      uVar10 = local_240.Data.ArrayNum - 1;
      if (local_240.Data.ArrayNum == 0) {
        uVar10 = uVar9;
      }
      pFVar16 = ::FName::FName(&local_d8,uVar10,(wchar_t *)local_240.Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar3 = *pFVar16;
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      local_258 = FVar3;
      EnterCriticalSection((LPCRITICAL_SECTION)&CompiledBindingCacheLock);
      FVar3 = local_258;
      uVar10 = ::GetTypeHash(local_258.ComparisonIndex);
      uVar24 = ((uint)((ulonglong)local_250 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_250 >> 4)) *
               -0x7a143595;
      uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
      uVar24 = uVar24 >> 0x10 ^ uVar24;
      if (CompiledBindingCache._8_4_ != CompiledBindingCache._52_4_) {
        lVar25 = 0x154cb7b98;
        if (CompiledBindingCache._64_8_ != 0) {
          lVar25 = CompiledBindingCache._64_8_;
        }
        iVar13 = *(int *)(lVar25 + (ulonglong)
                                   (CompiledBindingCache._72_4_ - 1 &
                                   (uVar10 + 0x9e3779b9 + FVar3.Number + uVar24 * 0x40 +
                                    (uVar24 >> 2) ^ uVar24)) * 4);
        while (iVar13 != -1) {
          lVar25 = (longlong)iVar13;
          if ((*(UClass **)(CompiledBindingCache._0_8_ + 8 + lVar25 * 0x28) == local_250) &&
             (*(FName *)(CompiledBindingCache._0_8_ + lVar25 * 0x28) == local_258)) {
            if ((iVar13 != -1) &&
               ((((lVar25 = CompiledBindingCache._0_8_ + (longlong)iVar13 * 0x28, lVar25 != 0 &&
                  (plVar27 = (longlong *)(lVar25 + 0x10), plVar27 != (longlong *)0x0)) &&
                 (*plVar27 != 0)) &&
                ((*(longlong *)(lVar25 + 0x18) != 0 &&
                 (0 < *(int *)(*(longlong *)(lVar25 + 0x18) + 8))))))) {
              local_1f0.SharedReferenceCount.ReferenceController =
                   *(TReferenceControllerBase<1> **)(lVar25 + 0x18);
              local_1f0.Object = (FCompiledBinding *)0x0;
              if (local_1f0.SharedReferenceCount.ReferenceController ==
                  (TReferenceControllerBase<1> *)0x0) goto LAB_14a882210;
              aVar7 = (local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              goto joined_r0x00014a8821ed;
            }
            break;
          }
          iVar13 = *(int *)(CompiledBindingCache._0_8_ + 0x20 + lVar25 * 0x28);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&CompiledBindingCacheLock);
      FVar17.ReferenceController = ::operator_new(0x38);
      if ((FStructProperty *)FVar17.ReferenceController == (FStructProperty *)0x0) {
        pFVar26 = (FCompiledBinding *)&DAT_00000010;
        FVar17.ReferenceController = (TReferenceControllerBase<1> *)pFVar28;
      }
      else {
        *(undefined4 *)&((FStructProperty *)FVar17.ReferenceController)->_padding_ = 1;
        pFVar26 = (FCompiledBinding *)&((FStructProperty *)FVar17.ReferenceController)->_padding_;
        *(undefined4 *)((longlong)&((FStructProperty *)FVar17.ReferenceController)->_padding_ + 4) =
             1;
        ((FStructProperty *)FVar17.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFCompiledBinding_Chooser_UE___00_SharedPointerInternals__6B_
        ;
        ((FStructProperty *)FVar17.ReferenceController)->_padding_ = 0;
        ((FStructProperty *)FVar17.ReferenceController)->_padding_ = 0;
        ((FStructProperty *)FVar17.ReferenceController)->_padding_ = 0;
        ((FStructProperty *)FVar17.ReferenceController)->_padding_ = 0;
        ((FStructProperty *)FVar17.ReferenceController)->_padding_ = 0;
        if ((pFVar26 == (FCompiledBinding *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        LOCK();
        *(int *)&((FStructProperty *)FVar17.ReferenceController)->_padding_ =
             (int)((FStructProperty *)FVar17.ReferenceController)->_padding_ + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar17.ReferenceController);
      plVar27 = (longlong *)&(pFVar26->CompiledChain).ArrayNum;
      pFVar26->TargetType = (UStruct *)local_268;
      iVar13 = (int)*plVar27;
      if (iVar13 < 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,-iVar13,&(pFVar26->CompiledChain).AllocatorInstance,
                            (int *)plVar27,&(pFVar26->CompiledChain).ArrayMax);
        DefaultConstructItems<UE::Chooser::FCompiledBindingElement,int>
                  ((pFVar26->CompiledChain).AllocatorInstance.Data + (longlong)iVar12 * 0x10,-iVar13
                  );
      }
      else if (0 < iVar13) {
        pFVar19 = (pFVar26->CompiledChain).AllocatorInstance.Data;
        iVar12 = (int)*plVar27 - iVar13;
        if (iVar12 != 0) {
          memmove(pFVar19,pFVar19 + (longlong)iVar13 * 0x10,(longlong)iVar12 << 4);
        }
        plVar27 = (longlong *)&(pFVar26->CompiledChain).ArrayNum;
        *(int *)plVar27 = (int)*plVar27 - iVar13;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(pFVar26->CompiledChain).AllocatorInstance,(int)*plVar27,
                   &(pFVar26->CompiledChain).ArrayMax);
      }
      pFVar26->ContextIndex = this->ContextIndex;
      local_248 = (this->PropertyBindingChain).ArrayNum + -1;
      local_260 = 0;
      uVar10 = 0;
      pFVar18 = pFVar28;
      if (0 < local_248) {
        do {
          if (((this->PropertyBindingChain).ArrayNum <= (int)pFVar18) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar18 = FindFProperty<FStructProperty>
                              ((UStruct *)local_268,
                               *(FName *)((this->PropertyBindingChain).AllocatorInstance.Data +
                                         (longlong)pFVar18 * 8),Default);
          if (pFVar18 == (FStructProperty *)0x0) {
            if (((this->PropertyBindingChain).ArrayNum <= (int)uVar10) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar18 = (FStructProperty *)
                      FindFProperty<FObjectProperty>
                                ((UStruct *)local_268,
                                 *(FName *)((this->PropertyBindingChain).AllocatorInstance.Data +
                                           (ulonglong)uVar10 * 8),Default);
            if (pFVar18 == (FStructProperty *)0x0) {
              if (local_268 != (UClass *)0x0) {
                pUVar22 = Z_Construct_UClass_UClass_NoRegister();
                iVar13 = (int)pUVar22->_padding_;
                if ((iVar13 <= *(int *)(local_268->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(local_268->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
                    &pUVar22->_padding_)) {
                  if (((this->PropertyBindingChain).ArrayNum <= (int)uVar10) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pUVar23 = UClass::FindFunctionByName
                                      (local_268,
                                       *(FName *)((this->PropertyBindingChain).AllocatorInstance.
                                                  Data + (ulonglong)uVar10 * 8),IncludeSuper);
                  if (pUVar23 != (UFunction *)0x0) {
                    if ((local_260 != 0) &&
                       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                          (&bGEnsureHasExecuted<_5570757923635724089>,false,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\ChooserPropertyAccess.cpp"
                                           ,199,"CurrentOffset == 0"), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pFVar19 = (pFVar26->CompiledChain).AllocatorInstance.Data;
                    local_1e0 = (FScriptContainerElement)0x1;
                    pUStack_1d8 = pUVar23;
                    if (((pFVar19 <= &local_1e0) &&
                        (&local_1e0 < pFVar19 + (longlong)(pFVar26->CompiledChain).ArrayMax * 0x10))
                       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    iVar13 = (int)*(longlong *)&(pFVar26->CompiledChain).ArrayNum;
                    piVar2 = &(pFVar26->CompiledChain).ArrayMax;
                    if (iVar13 == *piVar2) {
                      iVar13 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&(pFVar26->CompiledChain).AllocatorInstance,piVar2);
                    }
                    (pFVar26->CompiledChain).ArrayNum = iVar13 + 1;
                    pFVar19 = (pFVar26->CompiledChain).AllocatorInstance.Data +
                              (longlong)iVar13 * 0x10;
                    *(ulonglong *)pFVar19 = CONCAT71(uStack_1df,local_1e0);
                    *(UFunction **)(pFVar19 + 8) = pUStack_1d8;
                    pFVar18 = (FStructProperty *)UFunction::GetReturnProperty(pUVar23);
                    if ((pFVar18 == (FStructProperty *)0x0) ||
                       ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x10 & 1) == 0)) {
                      pFVar18 = pFVar28;
                    }
                    goto LAB_14a88264c;
                  }
                }
              }
              if (1 < (byte)LogChooser._0_1_) {
                local_1c0._4_8_ = local_268->_padding_;
                ::FName::ToString((FName *)(local_1c0 + 4),&local_198);
                if (((this->PropertyBindingChain).ArrayNum <= (int)uVar10) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                ::FName::ToString((FName *)((this->PropertyBindingChain).AllocatorInstance.Data +
                                           (ulonglong)uVar10 * 8),&local_c0);
                ::FString::PrintfImpl
                          (&local_138,L"Property/Function: %s not Found on Class/Struct %s");
                local_a0.Object = (UObject *)(**(code **)(local_res10->_padding_ + 0x20))();
                local_a0.Path = (wchar_t *)0x0;
                local_a0.PackagePath = (FPackagePath *)0x0;
                UE::Core::Private::RecordAssetLog
                          ((FName *)&LogChooser.field_0x4,Error,&local_a0,&local_138,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\ChooserPropertyAccess.cpp"
                           ,0xd2);
                if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_138.Data.AllocatorInstance.Data);
                }
                if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                }
                if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_198.Data.AllocatorInstance.Data);
                }
              }
              local_188 = 0;
              FStack_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              if (&this->CompiledBinding !=
                  (TSharedPtr<UE::Chooser::FCompiledBinding,1> *)&local_188) {
                (this->CompiledBinding).Object = (FCompiledBinding *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          (&(this->CompiledBinding).SharedReferenceCount,&FStack_180);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FStack_180.ReferenceController);
              goto LAB_14a883054;
            }
            iStack_218 = local_260 + *(int *)((longlong)&pFVar18->_padding_ + 4);
            pFVar19 = (pFVar26->CompiledChain).AllocatorInstance.Data;
            local_220 = (FScriptContainerElement)0x0;
            uStack_214 = uStack_214 & 0xffffff00;
            if (((pFVar19 <= &local_220) &&
                (&local_220 < pFVar19 + (longlong)(pFVar26->CompiledChain).ArrayMax * 0x10)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar13 = (int)*(longlong *)&(pFVar26->CompiledChain).ArrayNum;
            piVar2 = &(pFVar26->CompiledChain).ArrayMax;
            if (iVar13 == *piVar2) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(pFVar26->CompiledChain).AllocatorInstance,piVar2);
            }
            local_260 = 0;
            pFVar19 = (pFVar26->CompiledChain).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
            (pFVar26->CompiledChain).ArrayNum = iVar13 + 1;
            *(ulonglong *)pFVar19 = CONCAT71(uStack_21f,local_220);
            *(ulonglong *)(pFVar19 + 8) = CONCAT44(uStack_214,iStack_218);
          }
          else {
            local_260 = local_260 + *(int *)((longlong)&pFVar18->_padding_ + 4);
          }
LAB_14a88264c:
          local_268 = (UClass *)(pFVar18->Struct).field0_0x0.DebugPtr;
          uVar10 = uVar10 + 1;
          pFVar18 = (FStructProperty *)(ulonglong)uVar10;
        } while ((int)uVar10 < local_248);
      }
      if (((this->PropertyBindingChain).ArrayNum == 0) && (this->IsBoundToRoot != false)) {
        pFVar19 = (pFVar26->CompiledChain).AllocatorInstance.Data;
        local_210 = (FScriptContainerElement)0x0;
        uStack_208 = 0;
        uStack_204 = uStack_204 & 0xffffff00;
        if (((pFVar19 <= &local_210) &&
            (&local_210 < pFVar19 + (longlong)(pFVar26->CompiledChain).ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = (int)*(longlong *)&(pFVar26->CompiledChain).ArrayNum;
        piVar2 = &(pFVar26->CompiledChain).ArrayMax;
        if (iVar13 == *piVar2) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(pFVar26->CompiledChain).AllocatorInstance,piVar2);
        }
        (pFVar26->CompiledChain).ArrayNum = iVar13 + 1;
        pFVar19 = (pFVar26->CompiledChain).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        *(ulonglong *)pFVar19 = CONCAT71(uStack_20f,local_210);
        *(ulonglong *)(pFVar19 + 8) = CONCAT44(uStack_204,uStack_208);
        uVar10 = this->ContextIndex;
        if ((int)uVar10 < local_1f8) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = FInstancedStruct::GetPtr<FContextObjectTypeStruct>
                            ((FInstancedStruct *)((longlong)(int)uVar10 * 0x10 + local_200));
        if (pFVar20 != (FContextObjectTypeStruct *)0x0) {
          pFVar26->StructType = (UStruct *)(pFVar20->Struct).field0_0x0;
        }
LAB_14a882cd8:
        EnterCriticalSection((LPCRITICAL_SECTION)&CompiledBindingCacheLock);
        if ((FStructProperty *)FVar17.ReferenceController != (FStructProperty *)0x0) {
          LOCK();
          puVar1 = (undefined1 *)
                   ((longlong)&((FStructProperty *)FVar17.ReferenceController)->_padding_ + 4);
          *(int *)puVar1 = *(int *)puVar1 + 1;
          UNLOCK();
        }
        local_128 = &local_258;
        local_120 = &local_178;
        local_178 = pFVar26;
        local_170 = (FStructProperty *)FVar17.ReferenceController;
        TSet<TTuple<FCompiledBindingCacheId,TWeakPtr<UE::Chooser::FCompiledBinding,1>_>,TDefaultMapHashableKeyFuncs<FCompiledBindingCacheId,TWeakPtr<UE::Chooser::FCompiledBinding,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FCompiledBindingCacheId_const_&,TWeakPtr<UE::Chooser::FCompiledBinding,1>_&&>_>
                  ((TSet<TTuple<FCompiledBindingCacheId,TWeakPtr<UE::Chooser::FCompiledBinding,1>_>,TDefaultMapHashableKeyFuncs<FCompiledBindingCacheId,TWeakPtr<UE::Chooser::FCompiledBinding,1>,0>,FDefaultSetAllocator>
                    *)&CompiledBindingCache,
                   (TPairInitializer<FCompiledBindingCacheId_const_&,TWeakPtr<UE::Chooser::FCompiledBinding,1>_&&>
                    *)local_1c0,(bool *)&local_128);
        if (local_170 != (FStructProperty *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)&local_170->_padding_ + 4);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar13 == 1) && (local_170 != (FStructProperty *)0x0)) {
            (**(code **)(local_170->_padding_ + 8))(local_170,1);
          }
        }
        if ((FStructProperty *)FVar17.ReferenceController != (FStructProperty *)0x0) {
          LOCK();
          *(int *)&((FStructProperty *)FVar17.ReferenceController)->_padding_ =
               (int)((FStructProperty *)FVar17.ReferenceController)->_padding_ + 1;
          UNLOCK();
        }
        pTVar6 = (this->CompiledBinding).SharedReferenceCount.ReferenceController;
        (this->CompiledBinding).Object = pFVar26;
        (this->CompiledBinding).SharedReferenceCount.ReferenceController =
             FVar17.ReferenceController;
        local_118 = pFVar26;
        pFStack_110 = (FStructProperty *)FVar17.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        LeaveCriticalSection((LPCRITICAL_SECTION)&CompiledBindingCacheLock);
      }
      else {
        iVar13 = (this->PropertyBindingChain).ArrayNum;
        uVar24 = iVar13 - 1;
        uVar10 = uVar9;
        if ((int)uVar24 < iVar13) {
          uVar10 = ~uVar24 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar21 = FindFProperty<FProperty>
                            ((UStruct *)local_268,
                             *(FName *)((this->PropertyBindingChain).AllocatorInstance.Data +
                                       (longlong)(this->PropertyBindingChain).ArrayNum * 8 + -8),
                             Default);
        if (pFVar21 != (FProperty *)0x0) {
          iStack_228 = local_260 + pFVar21->Offset_Internal;
          pFVar19 = (pFVar26->CompiledChain).AllocatorInstance.Data;
          local_230 = (FScriptContainerElement)0x0;
          uStack_224 = uStack_224 & 0xffffff00;
          if (((pFVar19 <= &local_230) &&
              (&local_230 < pFVar19 + (longlong)(pFVar26->CompiledChain).ArrayMax * 0x10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar13 = (int)*(longlong *)&(pFVar26->CompiledChain).ArrayNum;
          piVar2 = &(pFVar26->CompiledChain).ArrayMax;
          if (iVar13 == *piVar2) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(pFVar26->CompiledChain).AllocatorInstance,piVar2);
          }
          (pFVar26->CompiledChain).ArrayNum = iVar13 + 1;
          pFVar19 = (pFVar26->CompiledChain).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
          *(ulonglong *)pFVar19 = CONCAT71(uStack_22f,local_230);
          *(ulonglong *)(pFVar19 + 8) = CONCAT44(uStack_224,iStack_228);
          if ((*(uint *)(pFVar21->_padding_ + 0x18) >> 0x11 & 1) != 0) {
            iVar13 = (int)*(longlong *)&(pFVar26->CompiledChain).ArrayNum;
            local_res10 = (IHasContextClass *)
                          CONCAT71(local_res10._1_7_,
                                   *(undefined1 *)((longlong)&pFVar21[1]._padding_ + 3));
            uVar10 = iVar13 - 1;
            if ((int)uVar10 < iVar13) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (pFVar26->CompiledChain).AllocatorInstance.Data
            [(longlong)(int)*(longlong *)&(pFVar26->CompiledChain).ArrayNum * 0x10 + -4] =
                 local_res10._0_1_;
            pFVar26->PropertyType = Bool;
          }
          uVar4 = *(ulonglong *)(pFVar21->_padding_ + 0x18);
          if ((uVar4 >> 8 & 1) == 0) {
            if ((uVar4 >> 0x20 & 1) == 0) {
              if ((char)uVar4 < '\0') {
LAB_14a882cd1:
                pFVar26->PropertyType = Int32;
              }
              else if ((uVar4 >> 0x1d & 1) == 0) {
                if ((uVar4 >> 0x14 & 1) != 0) {
                  pFVar26->StructType = (UStruct *)pFVar21[1]._padding_;
                }
              }
              else {
                pFVar26->PropertyType = SoftObjectRef;
              }
            }
            else {
              pFVar26->PropertyType = Double;
            }
          }
          else {
            pFVar26->PropertyType = Float;
          }
          goto LAB_14a882cd8;
        }
        if (local_268 != (UClass *)0x0) {
          pUVar22 = Z_Construct_UClass_UClass_NoRegister();
          iVar13 = (int)pUVar22->_padding_;
          if ((iVar13 <= *(int *)(local_268->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(local_268->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
              &pUVar22->_padding_)) {
            iVar13 = (this->PropertyBindingChain).ArrayNum;
            uVar24 = iVar13 - 1;
            uVar10 = uVar9;
            if ((int)uVar24 < iVar13) {
              uVar10 = ~uVar24 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pUVar23 = UClass::FindFunctionByName
                                (local_268,
                                 *(FName *)((this->PropertyBindingChain).AllocatorInstance.Data +
                                           (longlong)(this->PropertyBindingChain).ArrayNum * 8 + -8)
                                 ,IncludeSuper);
            if (pUVar23 != (UFunction *)0x0) {
              pFVar21 = UFunction::GetReturnProperty(pUVar23);
              pFVar19 = (pFVar26->CompiledChain).AllocatorInstance.Data;
              local_1d0 = (FScriptContainerElement)0x1;
              pUStack_1c8 = pUVar23;
              if (((pFVar19 <= &local_1d0) &&
                  (&local_1d0 < pFVar19 + (longlong)(pFVar26->CompiledChain).ArrayMax * 0x10)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar13 = (int)*(longlong *)&(pFVar26->CompiledChain).ArrayNum;
              piVar2 = &(pFVar26->CompiledChain).ArrayMax;
              if (iVar13 == *piVar2) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&(pFVar26->CompiledChain).AllocatorInstance,piVar2);
              }
              (pFVar26->CompiledChain).ArrayNum = iVar13 + 1;
              pFVar19 = (pFVar26->CompiledChain).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
              *(ulonglong *)pFVar19 = CONCAT71(uStack_1cf,local_1d0);
              *(UFunction **)(pFVar19 + 8) = pUStack_1c8;
              uVar4 = *(ulonglong *)(pFVar21->_padding_ + 0x18);
              if ((uVar4 >> 8 & 1) == 0) {
                if ((uVar4 >> 0x20 & 1) == 0) {
                  if ((uVar4 >> 7 & 1) != 0) goto LAB_14a882cd1;
                }
                else {
                  pFVar26->PropertyType = Double;
                }
              }
              else {
                pFVar26->PropertyType = Float;
              }
              goto LAB_14a882cd8;
            }
          }
        }
        if (1 < (byte)LogChooser._0_1_) {
          local_1b4 = (FName)local_268->_padding_;
          ::FName::ToString(&local_1b4,&local_168);
          iVar13 = (this->PropertyBindingChain).ArrayNum;
          uVar10 = iVar13 - 1;
          if ((int)uVar10 < iVar13) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ::FName::ToString((FName *)((this->PropertyBindingChain).AllocatorInstance.Data +
                                     (longlong)(this->PropertyBindingChain).ArrayNum * 8 + -8),
                            &local_b0);
          ::FString::PrintfImpl(&local_108,L"Property/Function: %s not Found on Class/Struct %s");
          local_88.Object = (UObject *)(**(code **)(local_res10->_padding_ + 0x20))();
          local_88.Path = (wchar_t *)0x0;
          local_88.PackagePath = (FPackagePath *)0x0;
          UE::Core::Private::RecordAssetLog
                    ((FName *)&LogChooser.field_0x4,Error,&local_88,&local_108,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\ChooserPropertyAccess.cpp"
                     ,0x137);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
        }
        local_158 = 0;
        FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->CompiledBinding != (TSharedPtr<UE::Chooser::FCompiledBinding,1> *)&local_158) {
          (this->CompiledBinding).Object = (FCompiledBinding *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->CompiledBinding).SharedReferenceCount,&FStack_150);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_150.ReferenceController);
      }
    }
  }
LAB_14a883054:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
LAB_14a883059:
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
  while( true ) {
    LOCK();
    aVar11 = (local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    bVar8 = aVar7 == aVar11;
    if (bVar8) {
      (local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)aVar7 + 1);
      aVar11 = aVar7;
    }
    UNLOCK();
    aVar7 = aVar11;
    if (bVar8) break;
joined_r0x00014a8821ed:
    if (aVar7 == (atomic<int>)0x0) {
      local_1f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14a882210;
    }
  }
  if (local_1f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    local_1f0.Object = (FCompiledBinding *)*plVar27;
  }
LAB_14a882210:
  TSharedPtr<UE::Chooser::FCompiledBinding,1>::operator=(&this->CompiledBinding,&local_1f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f0.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)&CompiledBindingCacheLock);
  goto LAB_14a883059;
}

// GetUniqueId @ 14a88b7c0

FName __thiscall FChooserPropertyBinding::GetUniqueId(FChooserPropertyBinding *this)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  FName *pFVar4;
  int iVar5;
  FName in_RDX;
  FName *this_00;
  int iVar6;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  this_00 = (FName *)(this->PropertyBindingChain).AllocatorInstance.Data;
  iVar5 = (this->PropertyBindingChain).ArrayNum;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar2 = true;
  pFVar4 = this_00 + iVar5;
  while( true ) {
    if ((this->PropertyBindingChain).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (this_00 == pFVar4) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L".",1);
    }
    pFVar3 = ::FName::ToString(this_00,&local_38);
    iVar1 = (pFVar3->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar6);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 1;
  }
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  pFVar4 = ::FName::FName(&local_res8,iVar5,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)in_RDX = *pFVar4;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return in_RDX;
}

